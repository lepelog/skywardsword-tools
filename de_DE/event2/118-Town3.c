          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf("\x0E\x01\x09\x04\n\xA12Wieso kann ich denn von hier aus die\nStatue der Göttin nicht mehr sehen?\nHm... Eigenartig...")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf("\x0E\x01\x09\x04\x00\x09Hast du Kuki gefunden?\n\n\n\n\x0E\x01\x09\x04\x00\xE00Was für eine Erleichterung! Auf die\nSchüler der Ritterschule ist eben\nVerlass, nicht wahr?\n\n\x0E\x01\x09\x04\x00\x400Sag am besten gleich ihrer Mutter\nBescheid, damit sie sich keine Sorgen\nmachen muss. Ihr Haus liegt am Fluss!")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\nDu siehst ja aus wie eine frisch\ngestrichene Wand!\n[1]Etwas ist passiert![2-]Oh...")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x506Was sagst du da? Kuki ist\nverschwunden?\n\n\n\x0E\x01\x09\x04\x00\x500Von einem Dämon entführt?!?\n\n\n\n\x0E\x01\x09\x04\x0B\x400Das erinnert mich an eine alte Legende\nvon hier, die besagt, dass bei uns im\nWolkenhort ein Dämon haust.\n\n\x0E\x01\x09\x04\n\x500Er zeigt sich nur nachts und erschreckt\ndie Menschen, entführt ihre Kinder\nund ist allgemein ganz fürchterlich!\n\n\x0E\x01\x09\x04\x00\x400Ich dachte eigentlich, das sei nur ein\nMärchen, aber jetzt, wo ich darüber\nnachdenke...")
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x00\x04Na ja, sofern es dir gut geht, ist ja alles\nin bester Ordnung!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf("\x0E\x01\x09\x04\x00\x06Ich bilde mir ein, Kukis Mutter würde\nständig ganz laut den Namen ihrer\nTochter rufen. Warum wohl?")
          				  case 1:
/*< 51>*/ 					printf("\x0E\x01\x09\x04\x0B\xE01Gratulation zum Sieg bei der\nVogelreiter-Zeremonie!\n\n\n\x0E\x01\x09\x04\x00\xA00Warum machst du denn ein Gesicht wie\ndrei Tage Regenwetter? Du hast doch\ngewonnen?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf("\x0E\x01\x09\x04\n\xC12Ich frage mich, was diese seltsame\nErschütterung vorhin war...")
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
/*<156>*/ 		printf("\x0E\x01\x09\x04\x00\nOooh! Das ist großartig!\n\n\n\nEs gibt also tatsächlich noch viele\nPflanzen auf dieser Welt, die ich\nnoch nie gesehen habe.\n\nOooh! Ich spüre förmlich, wie der\nForscherdrang in mir wieder wächst!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf("Ich danke dir von ganzem Herzen,\nLink!\nIch werde gut auf diese Pflanze achten!\n\nSag mir Bescheid, falls du erneut eine\nseltene Pflanze finden solltest.")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00SDas... Was ist denn das? Das ist...\ntatsächlich eine mir völlig unbekannte\nPflanzenart!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf("Aber was ist das denn? Ist das wirklich\neine Pflanze? Oder doch ein Tier?\n\n\nHm... Dies ist wohl eine der größten\nEntdeckungen unserer Zeit!")
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
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x257Was sagst <pause0A>du <pause0A>da? Du hast tatsächlich\ndas verschwundene Kind gefunden?\n\n\nAlso wurde die Kleine doch nicht\nentführt, wie es scheint.\n\n\n\x0E\x01\x09\x04\x00\x609Nun, wie auch immer. Wichtig ist, dass\nniemandem etwas geschehen ist! Gut\ngemacht, Ritterschüler!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf("\x0E\x01\x09\x04\x00\x1557Wenn man den <r<Grabstein nahe des\nBaumes >><g<schlägt >>und ihn <g<verschiebt>>...\n\n\n\x0E\x01\x09\x04\x00\x1513Und dann kann man wirklich diesen\nDämonen treffen? Also ich werde\nbestimmt nicht nachts auf diesen\ngruseligen Friedhof gehen!")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh, hast du mit dem alten Mann in der\nKürbisbar gesprochen?\n\n\nWas? Wenn man den <r<Grabstein nahe\ndes Baumes >><g<schlägt>> und ihn danach\n<g<verschiebt>>...\n\n\x0E\x01\x09\x04\x00\x1513Und dann kann man wirklich\x0E\x01\x06\x02\xFBCD diesen\nDämonen treffen?\x0E\x01\x06\x02Í Also ich bleibe\nnachts auf jeden Fall in meinem Haus!")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x11\x200Wo der alte Mann jetzt ist?\n\n\n\n\x0E\x01\x09\x04\x00\x200Ich glaube, dass er meist in der\n<r<Kürbisbar>> östlich des Wolkenhorts\nsitzt und dort die Zeit totschlägt.\n\n\x0E\x01\x09\x04\x12\x200Aber du musst mit deinem Wolkenvogel\ndorthin fliegen, vergiss das nicht!")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x00\x1513Hast du das gehört? Ein kleines\nMädchen ist verschwunden, als\nes beim Friedhof gespielt hat...\n\n\x0E\x01\x09\x04\x12\x1500Wie kann denn in solch einem kleinen\nDorf ein Kind einfach verschwinden?\n[1]Eine Tragödie![2-]Na ja...")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x01\xC06Du sagst, es könnte sein, dass sie von\neinem Dämon verschleppt wurde?\n\n\n\x0E\x01\x09\x04\x00\xC00Das kann doch nicht möglich sein<pause1E>.<pause0A>.<pause0A>.<pause0A> Ah!<pause0A>\n\n\n\n\x0E\x01\x09\x04\x09\x200Da fällt mir etwas ein! In der Nähe des\nWolkenhorts lebt ein <pling><r<alter Mann>>, der\noft etwas über Dämonen erzählt.\n\n\x0E\x01\x09\x04\x12\x200Er redet ständig wirres Zeug, deshalb\nhat ihm bis jetzt niemand so recht\ngeglaubt...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x12\x1557Na, du nimmst das ja sehr gelassen auf.\nVerstehst du nicht, was das bedeutet?\nEines der Kinder ist verschwunden!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf("\x0E\x01\x09\x04\x00\x1504Ich habe gehört, ein Mädchen aus dem\nDorf sei verschwunden!")
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x00\x501Oh, du bist doch der Junge, der bei der\nVogelreiter-Zeremonie gewonnen hat!\n\n\n\x0E\x01\x09\x04\x0C\x200Diese Ritterkluft steht dir wirklich\nhervorragend.\n\n\n\x0E\x01\x09\x04\x0C\x500Wenn du so weitermachst, bist du bald\nein vollwertiger Ritter!")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf("\x0E\x01\x09\x04\x09\x1501Ich habe mich so erschrocken! Erst\ndieser Krach, und dann ist plötzlich die\nInsel der Göttin einfach verschwunden!\n\n\x0E\x01\x09\x04\x12\x200Na ja...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf("\x0E\x01\x09\x04\x00\x13Das hat ganz schön gewackelt, oder?\nWas ist da nur passiert?\n\n\n\x0E\x01\x09\x04\x12\x200Na ja...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x00\x02Was ist denn los, Link?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf("Interessierst du dich für dieses tolle\nWindrad hier?\n\n\nEs lässt sich so ausrichten, dass es den\nWind immer optimal nutzt.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf("Na ja, zumindest war das mal so.\n\n\n\nHier fehlt ein kleiner <r<Propeller>>, und\ndeshalb lässt sich das Ding nicht mehr\nausrichten! Eine Schande!\n\nDer Propeller ist wohl irgendwann mal\nnach unten gestürzt.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf("Seitdem steht es hier leider nur nutzlos\nin der Gegend herum... Kein Mensch\ndenkt daran, sich darum zu kümmern!")
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 181, 'param3': 6}
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 75, 'param3': 6}
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf("Ich empfehle, den <r<Windrad-Propeller\n>>im Erdland zu bergen, um das große\nWindrad bewegen zu können.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 198, 'param3': 6}
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\x0C\x800Hmmm? Was? Ob ich das Windrad\nreparieren kann, wenn du mir den\nPropeller bringst?\n\nTja... Ich könnte es mal versuchen.\nAber dazu brauche ich eben den\nWindrad-Propeller.")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf("Wie willst du denn überhaupt nach dem\nPropeller suchen?\n\n\nSchließlich ist er nach unten in die\nWolken gefallen...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13Da fällt mir was ein!\n\n\n\nSprich doch mal mit <b<Doruco>> aus der\nWerkstatt. Der hat doch so einen\nkleinen<r< fliegenden Roboter>>, der seinen\nAhnen gehörte!\nIch hab gehört, früher soll dieser\nRoboter Zeug durch die Gegend\ntransportiert haben.\n\nNa ja... Alte Geschichten von Dorucos\nFamilie... Ich weiß ja nicht, ob da was\ndran ist.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf("\x0E\x01\x09\x04\x00\x01Die Göttin ist weg! Die Göttin ist\neinfach weg! Oh nein!\n\n\nDabei konnte man im Garten vor der\nStatue so viele Insekten fangen!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ich will in Terris Laden, um mir ein\nSchmetterlingsnetz zu kaufen!\n\n\nUnd dann gehe ich zur Werkstatt und\nlasse mir das Netz vergrößern!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\n\n\n\nWas? Du warst in Terris Laden?\nPah! Du doofer Angeber!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ich will ein Schmetterlingsnetz! Wie\nkomme ich nur in Terris Laden...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x01Du hast Kuki gefunden, oder?\n\n\n\n\x0E\x01\x09\x04\x0F\x1300Wegen ihr haben sich alle hier Sorgen\ngemacht!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\n\n\n\nWas? Du warst in Terris Laden?\nPah! Du doofer Angeber!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x00\x06Kuki?\n\n\n\n\x0E\x01\x09\x04\x12\x900Wir haben neulich beim <r<Friedhof\n>>zusammen gespielt.\n\n\n\x0E\x01\x09\x04\n\x900Als meine Mama mich gerufen hat, bin\nich nach Hause gelaufen.\n\n\n\x0E\x01\x09\x04\x01\x900Was ist denn passiert?")
          					  case 1:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x10\x1301Wie komme ich denn nur in Terris\nLaden, um mir ein Schmetterlingsnetz\nzu kaufen?\n[1]Hast du Kuki\ngesehen?[2]Terris\nLaden?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf("\x0E\x01\x09\x04\x00\x04Ich habe mir was überlegt, wie man es\nhoch in Terris Laden schaffen könnte!\n\n\n\x0E\x01\x09\x04\x12\x900Hast du schon mal die große Glocke an\nseinem Laden gesehen? Versuch doch\nmal, sie zu läuten, dann hält Terris\nLaden vielleicht an...\n\x0E\x01\x09\x04\x10\x1300Aber dafür brauchst du wohl etwas,\ndas <pling><r<fliegt>>. Sonst kommst du da nie im\nLeben ran... Und so was hab ich leider\nauch nicht...\nNa ja, wenn du Terris Laden mal nicht\nfinden solltest, guck doch einfach auf\nder <g<Karte>> nach. Dort siehst du immer,\nwo er gerade ist.")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hey, Link!\n\n\n\nWas? Du warst in Terris Laden?\nPah! Du doofer Angeber!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x01Schau doch mal, dort oben! Das ist\n<b<Terris Laden>>!\n\n\n\x0E\x01\x09\x04\n\x1300Ich habe gehört, dort kann man sogar\n<r<Schmetterlingsnetze >>kaufen! Ich will\nauch so eines!\n\n\x0E\x01\x09\x04\x12\x900Wenn ich doch nur etwas hätte, um an\nder großen Glocke des Ladens läuten\nzu können...\n\n\x0E\x01\x09\x04\x10\x1300Ich bräuchte wohl <r<irgendetwas>>, mit\ndem ich <r<in die Luft schießen >>kann.")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf("\x0E\x01\x09\x04\x00\x04Wenn jemand kommt und <b<Kombu>> sieht,\nerschrickt er bestimmt! Immerhin sieht\nKombu nicht aus wie eine Pflanze.\n\n\x0E\x01\x09\x04\x00\x12\x201EBleib still und bewege dich nicht!\x201C,\nhat der große Mann zu Kombu gesagt.\n\n\n\x0E\x01\x09\x04\x09\x13Irgendwie ist das keine Veränderung zu\nmeinem früheren Leben...")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf("\x0E\x01\x09\x04\x00\xD0FSag mal, Link, hast du\nmeinen Mann gesehen?\n\n\nSeit es nachts bei uns sicher ist, geht\ner nachts ständig aus... Was, wenn\ndoch noch irgendwo Monster lauern?")
          			  case 1:
/*<476>*/ 				printf("\x0E\x01\x09\x04\x0C\xE08Oh, hallo! Meine Kuki läuft nun nicht\nmehr einfach so von Zuhause weg, ohne\netwas zu sagen. Du hast mir wirklich\nsehr geholfen, Link!\nLeider kann ich das von meinem Mann\nnicht behaupten. Der treibt sich immer\nnoch ständig irgendwo herum...")
          			}
          		  case 1:
/*< 66>*/ 			printf("\x0E\x01\x09\x04\x0C\xE08Danke, dass du meine Kuki gefunden\nhast, Link! \n\n\nIch sollte mich wohl auch bei diesem\nnetten Herrn bedanken, der auf meine\nKuki aufgepasst hat...")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x0C\xE14Oh, Link!\n\n\n\n\x0E\x01\x09\x04\x00\x800Dank dir ist meine liebe Kuki gesund\nund munter nach Hause gekommen.\nWie kann ich dir bloß danken?\n\n\x0E\x01\x09\x04\x09\x800Jetzt kann ich endlich wieder ruhig\nschlafen! Ich danke dir für deine Güte!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x0C\xE13Ah! Du hast meine kleine Kuki also\ngefunden?\n\n\n\x0E\x01\x09\x04\x0F\xE00Du sagst, sie ist bei einem freundlichen\nalten Herrn? Dann muss ich mir wohl\nkeine Sorgen machen. Ich hoffe, sie\nkommt bald wieder zurück nach Hause!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Es ist so schrecklich! Die Insel der\nGöttin stürzt nach unten, meine Kuki\nist immer noch nicht wieder zurück...\n\nBitte, Link! Finde meine\nliebe kleine Kuki!\n\n\n\x0E\x01\x09\x04\x09\xD00Oder hast du etwa gar nicht vor,\nsie zu suchen?!?")
          				  case 1:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Meine kleine Kuki... <pause0A>Bitte, finde sie<pause0A> so\nschnell du nur kannst!\n\n\nWenn ihr etwas zugestoßen ist...\nNein, ich mag gar nicht daran denken!")
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
/*<277>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Wie furchtbar! Die Insel der Göttin ist\nnach unten gestürzt, als ich nach\nmeiner kleinen Kuki gesucht habe!\n\nSag mal, hast du sie zufällig gesehen?\n[1]Leider nicht.[2]Wer ist Kuki?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x150D\xD12Ich verstehe...")
          			flw_21:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x150F\xD00Ich bitte dich, Link!\nWirst du nach meiner Tochter suchen?\nIch bin schon ganz verzweifelt!\n\n\x0E\x01\x09\x04\x1509\xD00Einige hier im Dorf haben gesagt, sie\nhätten Kuki zusammen mit einer sehr\nfinsteren Gestalt gesehen!\n\n\x0E\x01\x09\x04\x150B\xD00Es gibt sogar Leute, die behaupten, sie\nwäre von einem fürchterlichen Dämon\nentführt worden! Was soll ich nur tun?\n\n\x0E\x01\x09\x04\x150E\xD00Meine liebe kleine Kuki ist verschleppt\nworden, da bin ich ganz sicher!")
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x1509\xD00Bitte, finde meine kleine Kuki! Ich bin\nsicher, sie hat furchtbare Angst!\n\n\n\x0E\x01\x09\x04\x150F\xD00Ich bitte dich, Link!\n[1]Ich suche sie![2-]Es tut mir\nleid...")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x150C\xE14Vielen Dank! Ich wusste, dass auf die\nSchüler der Ritterschule Verlass ist!\n\n\n\x0E\x01\x09\x04\x1500\x800Ich zähle auf dich!")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x1509\xD12Was sagst du da? Und du willst ein\nSchüler der Ritterschule sein?!?\nIst es denn nicht eure Aufgabe, uns\nBürgern in der Not zu helfen?")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x1509\xD12Sie ist meine Tochter! Ein kleines,\nsüßes Mädchen von fünf Jahren...")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Wie gut, dass ich dich treffe! Hast du\nmeine kleine Kuki zufällig gesehen?\n[1]Leider nicht.[2]Wer ist Kuki?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf("\x0E\x01\x0D\x02\x1900Aaaaaaaaah!")
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
/*<350>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Kuki! Meine Kuki! Wo bist du nur?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf("Ach... Wo ist meine kleine Kuki\ndenn bloß...\n\n\nOh nein... Was mache ich denn nur,\nwenn man sie entführt hat?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Oh! Du bist es, Link!")
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
/*<441>*/ 			printf("\x0E\x01\x09\x04\x07\xC08Hast du das von der Insel der Göttin\ngehört? Sie ist einfach verschwunden!\n\n\nZelda ist weg, Bado ist auch fort und\njetzt das noch... Was geschieht denn\nhier bloß?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf("\x0E\x01\x09\x04\x00\x05Ich trainiere jede Nacht, um so stark\nzu werden wie du!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf("\x0E\x01\x09\x04\x07\xA0BHallo, Link! Dank deinen\nAusdauertränken konnte ich so viel\ntrainieren, dass ich zu einem wahren\nKraftpaket geworden bin!\n\x0E\x01\x09\x04ÿ\xFF00So stark wie du bin ich aber wohl\nimmer noch nicht...\n\n\nBesuche mich doch nachts in meinem\nZimmer, dann können wir uns noch\nein wenig mehr unterhalten!")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hallo! Kommst du gut mit der Suche\nnach Zelda voran, Link?\n\n\nIch habe immer noch Angst, dass ich\ndas harte Training nicht durchhalte.\nMacht es wirklich Sinn, sich so sehr\nanzustrengen? Hmmm...\nNa ja, wie auch immer. Komm doch\n<r<nachts>> mal wieder vorbei und gib mir\nein paar Ratschläge...")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Dank diesem\n<y<Ausdauertrank>>, den du mir gegeben\nhast, läuft mein <r<nächtliches>> Training\nviel besser!\n\x0E\x01\x09\x04\x10\x1B00Aber ich habe trotzdem immer Angst,\ndass mir mittendrin die Puste ausgeht.\n\n\nOb ich wohl so stark werden kann, wie\ndu es bist...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Na ja, wie auch immer. Ich werde mich\nweiterhin anstrengen. Komm doch\n<r<nachts>> mal wieder vorbei und gib mir\nein paar Ratschläge...")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BHallo, Link! Danke für\nden <y<Ausdauertrank>> neulich!\n\n\nDank dir konnte ich noch ganz viele\nLiegestütze extra machen! Und jetzt\nläuft alles schon viel besser.\n\n\x0E\x01\x09\x04ÿ\xFF00Ich schwöre dir, irgendwann werde\nich bestimmt auch so stark wie du,\nLink!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf("\x0E\x01\x09\x04\x00\x01Da hast du mich doch tatsächlich\nneulich nachts beobachtet... Ähem...\n\n\nWeißt du, ich wäre auch gerne so stark\nwie du, deshalb strenge ich mich an,\naber irgendwie tut sich da gar nichts.\nNa ja, ich gebe mir weiterhin Mühe...")
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
/*<419>*/ 							printf("\x0E\x01\x09\x04\x00\x05Ich trainiere jede Nacht, um so stark\nzu werden wie du!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf("\x0E\x01\x09\x04\x07\xC08Hast du das von der Insel der Göttin\ngehört? Sie ist einfach verschwunden!\n\n\nZelda ist weg, Bado ist auch fort und\njetzt das noch... Was geschieht denn\nhier bloß?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ich bin sicher, dass du Zelda finden\nwirst. Du hast das Zeug dazu!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf("\x0E\x01\x09\x04\x00\x12Hallo, Link!\nKuki ist immer noch nicht aufgetaucht!\n\n\n\x0E\x01\x09\x04\x00\xE10Suchst du denn auch wirklich nach ihr,\nLink?\n\n\n\x0E\x01\x09\x04\x00\xC00Wie? Du hast sie bereits gefunden?\n\n\n\n\x0E\x01\x09\x04\x07\xA0BOh, was für ein Glück! Ich bin wirklich\nerleichtert, dass du sie gefunden hast!\nIch wusste, du würdest es schaffen,\nLink!")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf("\x0E\x01\x09\x04\x00\nDu solltest Kukis Mutter so schnell wie\nmöglich besuchen und ihr Bescheid\ngeben.\n\nSie wohnt in einem Haus am Flussufer.")
          					  case 1:
/*<309>*/ 						printf("\x0E\x01\x09\x04\x00\x12Hallo, Link!\nKuki ist immer noch nicht aufgetaucht!\n\n\n\x0E\x01\x09\x04\x00\xE10Suchst du denn auch wirklich nach ihr,\nLink?\n\n\n\x0E\x01\x09\x04\x00\xC00Wie? Du hast sie bereits gefunden?\n\n\n\n\x0E\x01\x09\x04\x07\xA0BOh, was für ein Glück! Ich bin wirklich\nerleichtert, dass du sie gefunden hast!\nIch wusste, du würdest es schaffen,\nLink!")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf("\x0E\x01\x09\x04\x07\x801Oh, Link! Die Insel der\nGöttin ist verschwunden!\n\n\n\x0E\x01\x09\x04\x00\x800Und die kleine Kuki ist verschwunden!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Unsere Zelda ist fort, Bado hat sich aus\ndem Staub gemacht... Was ist denn bloß\nlos in letzter Zeit?\n\n\x0E\x01\x09\x04\x07\x800Ich mache mich jedenfalls auf die\nSuche nach Kuki. Und du solltest\ndich auch auf den Weg machen,\nLink!")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf("\x0E\x01\x09\x04\x00\x12Du bist es, Link! Ich kann\nKuki immer noch nirgends finden!\n\n\n\x0E\x01\x09\x04\x00\xE10Suchst du auch wirklich nach ihr,\nLink? Das ist eine ernste\nAngelegenheit!\n\n\x0E\x01\x09\x04\x07\x200Also, ich mache mich wieder auf die\nSuche. Ich zähle auf deine Hilfe!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf("\x0E\x01\x09\x04\x00\x1701Ich sehe mich hier um. Du könntest den\nDorfplatz übernehmen! Machen wir\nuns auf die Suche, Link!\n\n\x0E\x01\x09\x04\x08\x1700Ich glaube, ich habe Kuki gestern dort\nmit einem Jungen spielen sehen...")
          						  case 1:
/*< 26>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nWeißt du denn schon, wo unsere\nZelda ist?\n\n.<pause0A>.<pause0A>.<pause0A>Oh!<pause0A> Ich verstehe!\nNun, dann streng dich an!\n\n\n\x0E\x01\x09\x04\x07\x200Da fällt mir ein, ich habe eben Kukis\nMutter hoch zum Tempel laufen sehen.\n\n\n\x0E\x01\x09\x04\x08\x1700Was sie wohl dort macht?")
/*< 30>*/ 							printf("\x0E\x01\x09\x04 \x508Was sagst du da? Die kleine Kuki ist\nverschwunden?!?\n\n\n\x0E\x01\x09\x04\x07\x800Wie schrecklich! Ich mache mich sofort\nauf die Suche! Du solltest auch ein paar\nLeute fragen, ob sie vielleicht Kuki\ngesehen haben, Link!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf("\x0E\x01\x09\x04\x07\x801Oh, Link! Die Insel der\nGöttin ist verschwunden!\n\n\n\x0E\x01\x09\x04\x00\x800Und die kleine Kuki ist verschwunden!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Unsere Zelda ist fort, Bado hat sich aus\ndem Staub gemacht... Was ist denn bloß\nlos in letzter Zeit?\n\n\x0E\x01\x09\x04\x07\x800Ich mache mich jedenfalls auf die\nSuche nach Kuki. Und du solltest\ndich auch auf den Weg machen,\nLink!")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ah, kommst du bei der Suche nach\nZelda voran, Link?\n\n\n.<pause0A>.<pause0A>.<pause0A>Ich verstehe!<pause0A> Dann streng dich\nweiter an, ja?\n\n\nDa fällt mir ein, ich habe eben Kukis\nMutter hoch zum Tempel laufen sehen.\nWas sie dort wohl macht?\n[1]Wen meinst du?[2]Ich weiß es!")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x00\x05Du kennst doch die Frau, die mit ihrem\nMann und ihrer Tochter in diesem\nHaus am Fluss wohnt.\n\n\x0E\x01\x09\x04\x07\x800Irgendetwas an dieser Sache macht\nmich stutzig...")
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x07\x806Wirklich? Ach, erzähl doch keinen\nUnsinn!")
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
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Wo ist denn\nBado in letzter Zeit? Ich sehe ihn\ngar nicht mehr...\n\nVielleicht haben sie ihn ja aus der\nRitterschule geworfen? Das wäre toll!\nBado war immer so fies zu mir...")
          		  case 1:
/*<461>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! Stru hat mir\nein paar <r<Tipps zum Insektenfangen>>\ngegeben!\n\nEr hat gesagt, man könne Insekten viel\nleichter fangen, wenn man das Netz\nseitlich schwingt!\n\nUnd man muss sich den Insekten\ngaaanz laaangsam nähern, und dann\nganz schnell das Netz schwingen!")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\nWas? <r<Dreifuß>>\x0E\x01\x06\x02\xFBCD...?\x0E\x01\x06\x02Í\n<pause14>Was soll das denn sein?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf("\x0E\x01\x09\x04\x00\x01Schau mal, Link!\nSchau dir den Turm des Lichts an!\n\n\nDa kommt ein dicker Lichtstrahl raus!\nDas sieht echt toll aus, oder?")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf("\x0E\x01\x09\x04\x00\x01Duuu, Link?\nKann man mit dem <r<Schmetterlingsnetz>>\nauch noch andere Dinge außer Insekten\nfangen? Denkst du, das geht?\nOnkel Doruco aus der Werkstatt hat\nmir das neulich erzählt!")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\nWas? Der <r<Text>> des Liedes, das Zelda\ngesungen hat?\n\n\nIch dachte immer, sie singt nur\n\x201ELa la la\x201C oder so...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ich will in Terris Laden, um mir ein\nSchmetterlingsnetz zu kaufen!\n\n\nUnd dann gehe ich zur Werkstatt und\nlasse mir das Netz vergrößern!")
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
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x00\x01Der Dämonenonkel ist gar nicht böse!\n\n\n\nEr hat mich gerettet, als ich fast von\neiner Klippe gefallen wäre!\n\n\n\x201ENachts ist es draußen gefährlich!\x201C,\nhat er gesagt.\n\n\nDeshalb warte ich, bis es hell ist. Dann\ngehe ich wieder zurück zu Mama und\nsage ihr, wo ich war.")
          	  case 1:
/*<163>*/ 		printf("\x0E\x01\x09\x04\x00\x06Was ist denn los? Wieso schaust du so?\nFürchtest du dich?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ich trainiere Nacht für Nacht in\nmeinem Zimmer, um so stark zu\nwerden die du. Na ja, leider ist\ndas nicht so einfach...\nDu hast die Messlatte ganz schön\nhoch gelegt, Link!")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link!\nHast du schon eine Spur von Zelda?\n\n\nIch muss dir etwas gestehen. Um so\nstark zu werden wie du trainiere ich\nseit Kurzem<r< jede Nacht >>und stähle\nmeinen Körper!\n<pause05>.<pause05>.<pause05>.<pause0A>Oh! \x0E\x01\x09\x04\x00\xA06Also... Na ja, das ist mir zwar\nein wenig peinlich, aber komm ruhig\nmal nachts <r<in mein Zimmer>>, wenn du\nmich trainieren sehen möchtest.")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\nGibt es Neuigkeiten von Zelda?\nIch hoffe, sie ist bald wieder da!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf("\x0E\x01\x09\x04\x00\x811Oh, Link!\nAus dem Turm des Lichts kommt ein\nLichtstrahl! Das habe ich auch noch\nnicht gesehen...")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BHallo, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF05<r<Zwei Flügel>>?\nDer Wind im Wolkenhort weht immer\nsehr stark, also gibt es viele Dinge hier,\ndie Flügeln ähneln...")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf("\x0E\x01\x09\x04\x07\xA0BHallo, Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF08Hm? Die <r<Hymne der Göttin>>?<pause1E>\nZelda hat die oft gesungen...\n\n\nIch kenne den Text zwar nicht, aber\nder Direktor kann dir da bestimmt\nweiterhelfen!")
          						  case 1:
/*<314>*/ 							printf("\x0E\x01\x09\x04\x00\x0BAh, Link!\nKukis Mutter ist bestimmt total aus\ndem Häuschen, dass du die Kleine\ngefunden hast. Was für ein Glück!")
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
/*<474>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link! <pause1E>Was? Der\nDämonenonkel ist jetzt ein normaler\nOnkel?\n\nOh\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Dabei sahen seine Flügel doch\nso toll aus...")
          	  case 1:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\nDer Dämonenonkel sammelt ganz viel\nDingsda der Güte, oder so etwas. Kann\nich trotzdem wieder bei ihm spielen?")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf("")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf("")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf("\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter. <pling>Ich beende die\nEinstellung für die Aurasuche.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x00\x13Oooh! Ist das nicht der kleine Roboter\nvon unserem Doruco?")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf("...Ich glaub's nicht!\n\n\n\n<pause14>Das ist doch unglaublich!<pause28> Du hast also\ntatsächlich den <r<Windrad-Propeller >>aus\nder Welt unter den Wolken geholt!\n\n\x0E\x01\x09\x04\x0C\xC00War dieses ganze Gerede von Dorucos\nAhnen am Ende wirklich wahr?!? Ich\nfass es nicht!\n\nDa wird der Wolkenvogel in seinem\nNest verrückt! Aber gut, ich kann ja\nmal versuchen, das Windrad hier zu\nreparieren...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf("Das hier hin... und das dort hin...\nHmmm... Und dann noch hier...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 190, 'param3': 6}
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 89, 'param3': 6}
/*< 89>*/ 		printf("\x0E\x01\x09\x04\n\x10EPfff...")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf("\x0E\x01\x09\x04\x0C\xC00Das sollte es gewesen sein! Wenn du\nden Propeller dazu kriegst, sich zu\ndrehen, kannst du das große Windrad\nwohl jetzt ausrichten!")
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCDGelan! Geeelaaan!")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x05\x714Oh, so ein Ärger! Meine Frau hat mich\ngebeten, den Schrank in unserem Haus\nzu reparieren!\n\nSie ist ständig auf der Suche nach\nirgendjemandem, der irgendetwas\nfür sie erledigt...")
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Dann bis später, Link!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf("\x0E\x01\x09\x04\x05\x714Ah, so ein Ärger! Dabei suche ich doch\ngerade nach der kleinen Kuki!")
/*<296>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Also dann, Link!\nMan sieht sich später! Falls du Kuki\nvor mir findest, sag mir Bescheid!")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x05Sachen aus einer Welt unter den\nWolken nach oben zu bringen...\nHa, so was gibt's doch gar nicht!\n\n<b<Doruco>> aus der Werkstatt glaubt aber\ntrotzdem daran und kümmert sich wie\nein Vater um seinen kaputten Roboter.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf("\x0E\x01\x09\x04\x00\x01Du hast doch tatsächlich meine kleine\nKuki gefunden! Du bist ein toller Kerl,\nLink! Vielen Dank!\n\nÜbrigens, findest du nicht, dass das\nWetter heute hervorragend ist?\n\n\nAn so einem Tag würde ich am liebsten\nin der Kürbisbar sitzen und mir ein\nGlas kalte Limonade gönnen!\n\nAber ich muss ja diesen Schrank für\nmeine Frau reparieren... Aaah, wie\nmich das nervt!")
          			  case 1:
/*<292>*/ 				printf("\x0E\x01\x09\x04\x00\x0EHallöchen, Link!\nDie kleine Kuki ist immer noch nicht\nnach Hause gekommen!\n\nIch mache mir langsam auch so meine\nSorgen um sie...\n\n\nDu solltest dich auch auf die Suche\nnach ihr machen!")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf("Wie wunderschön, wie wunderbar!\nFür die verehrte Phai tue ich alles!")
          	  case 1:
/*< 81>*/ 		printf(".<pause05>.<pause05>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Auf der anderen Seite der Tür ist eine\ndämonische Aura zu spüren.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x701Besuche mich doch im Basar, wenn du\nmeine Hilfe wieder in Anspruch\nnehmen möchtest.\n\nIch werde dir natürlich einen\nSonderpreis machen!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x10\x70DOooh!\n\n\n\nDas ist doch... Dieser Kristall ist genau\nso einer wie mein alter!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x700Ho ho... Oh, ich spüre deine Güte,\njunger Freund! Nun kann ich endlich\nwieder in die Zukunft sehen!\n\nBesuche mich doch im Basar, wenn\ndu meine Hilfe erneut in Anspruch\nnehmen möchtest.\n\nIch werde dir natürlich einen\nSonderpreis machen!")
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
/*<103>*/ 					printf("Was soll denn das? Solltest du nicht\nnach meinem Kristall suchen?")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf("Was soll denn das? Solltest du nicht\nnach meinem Kristall suchen?")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf("Der <r<Kristall>>, den diese Person sucht,\nist im Moment nicht als <pling>Ziel für die\n<r<Aurasuche>> festgelegt.\n\nMöchtest du den <r<Kristall>> als Ziel für\ndie <pling><r<Aurasuche>> festlegen?\n[1]Ja[2-]Nein")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf("\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter.\n\n\n\nIch habe den <r<Kristall>>, den diese\nPerson sucht, als Ziel für die\n<pling><r<Aurasuche >>festgelegt.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter. <pling>Ich beende die\nEinstellung für die Aurasuche.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf("\x0E\x01\x09\x04\x0C\x100FEs ist vorbei... Es hat keinen Sinn...\nEs ist alles aus...\n\n\nMein Kristall ist kaputt. So kann ich\nnicht mehr in die Zukunft sehen...\n\n\nMeine \x0E\x01\x06\x02\xFCCDsanften Augen\x0E\x01\x06\x02Í sind betrübt und\ngebrochen, so wie mein wunderschöner\nKristall...\n\n<pause1E>Aaah... Wenn ich doch bloß einen neuen\nKristall bekäme...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("Da fällt mir ein... Du bist doch dieser\nJunge, der neulich diesen Propeller aus\nder Welt unter den Wolken hierher\ngebracht hat!\nUm ehrlich zu sein ist mein Kristall\nauch ein Gegenstand aus der Welt\nunter den Wolken!\n\nDie Ahnen von diesem Doruco aus der\nWerkstatt haben ihn einst geborgen\nund Doruco hat ihn mir verkauft.\n\nAlso vielleicht gibt es da unten ja noch\neinen Kristall, der so ist wie meiner?\nWürdest du vielleicht für mich danach\nsuchen, junger Freund?\n[1]Ja[2-]Nein")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Das ist ja wundervoll! Du bist meine\nRettung in der Not!\n\n\nLaut dem Roboter aus der Werkstatt\ngibt es solche Kristalle in einem\n<r<Gebäude am Vulkangipfel>>...")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf("Ich kann den Kristall, den diese Person\nsucht, als gegenwärtiges Ziel für die\n<pling><r<Aurasuche>> festlegen.\n\nFalls du dich allerdings momentan auf\nder Suche nach einem anderen Objekt\nbefindest, müsste ich dieses Objekt\naus der Aurasuche entfernen.\nSoll ich diese Änderung vornehmen und\ndie Aurasuche so einstellen, dass du\nnach einem <r<Kristall >>suchen kannst?\n[1]Ja[2-]Nein")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Die Aurasuche\nwurde dementsprechend eingestellt.")
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
/*<392>*/ 						printf("\x0E\x01\x09\x04\x01\x70BIch bitte dich, junger Freund!\nOhne Kristall kann ich nicht in\ndie Zukunft sehen.\n\nUnd ohne meine Fähigkeiten werde ich\nauch dir keine Hilfe sein können.\n\n\nAlso, ich warte auf meinen neuen\nKristall, junger Freund!")
          					  case 1:
/*<467>*/ 						printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Wenn du die\nEinstellung der Aurasuche ändern\nmöchtest, sprich erneut mit dieser\nPerson.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009Das Leben ist so ungerecht\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í")
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
/*<480>*/ 				printf("Wie dem auch sei... Die Insel der\nGöttin ist verschwunden!\n\n\nIch traute meinen Augen nicht, als ich\ndieses gewaltige Licht erblickte.\n\n\nDoch mir ist bewusst, dass alle deine\nTaten nur dazu dienen, unsere Zelda\nzu retten. Der Direktor hat mir alles\nerzählt.\nIch bitte dich, rette Zelda für uns!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf("Ach, Link!\nEs gibt wohl noch viele Pflanzen auf\ndieser Welt, von deren Existenz ich\nnichts weiß!")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x0E\x50AUnd doch... Diese Pflanze weckt mein\nInteresse mehr und mehr, mit jedem\nMal, da ich sie betrachte.\n\n\x0E\x01\x09\x04\x00\x500Ist dieses Wesen wirklich eine Pflanze?\nOder doch ein Tier? Wie ist dieses\nWesen bloß zu klassifizieren...")
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
/*<275>*/ 					printf("\x0E\x01\x09\x04\x00\x09Ha ha! Ich wusste, dass du mir helfen\nwürdest, Link.")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 230, 'param3': 6}
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf("Die <r<Pflanze>>, welche diese Person sucht,\nist im Moment nicht als <pling>Ziel für die\n<r<Aurasuche>> festgelegt.\n\nMöchtest du die <r<Pflanze>> als Ziel für die\n<pling><r<Aurasuche>> festlegen?\n[1]Ja[2-]Nein")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf("\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter.\n\n\n\nIch habe die <r<Pflanze>>, die diese Person\nsucht, als Ziel für die <pling><r<Aurasuche\n>>festgelegt.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf("\x0E\x01\x12\x04\x00\x05Sehr wohl, Gebieter. <pling>Ich beende die\nEinstellung für die Aurasuche.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01Wie geht es dir? Kommst du mit der\nSuche nach einer neuen Pflanzenart\nvoran?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh, Link! Kommst du, um\ndir meine Bitte anzuhören?\n\n\nIch interessiere mich für seltene\nPflanzen!")
          						flw_118:
/*<118>*/ 						printf("\x0E\x01\x09\x04\x00\x00Es ist nur so... Ich habe bereits alle\nPflanzen, die hier im Wolkenhort\nvorkommen, gesammelt.\n\nDeshalb bin ich auf der Suche nach\neiner neuen Pflanze, die ich erforschen\nkann.\n\n\x0E\x01\x09\x04\x09\xA0FWas sagst du dazu? Würdest du dich\nfür mich auf die Suche nach einer\nsolchen neuen Pflanzenart machen?\n[1]Natürlich![2-]Keine Zeit.")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf("\x0E\x01\x09\x04\n\xA03Oho! Ich war mir sicher, dass du mir\nhelfen würdest, Link!\n\n\nKönntest du für mich denn eine neue\nPflanzenart suchen und sie zu mir\nbringen, wenn du sie gefunden hast?")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 134, 'param3': 6}
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf("Ich kann die <r<Pflanze>>, die diese Person\nsucht, als gegenwärtiges Ziel für die\n<pling><r<Aurasuche>> festlegen.\n\nFalls du dich allerdings momentan auf\nder Suche nach einem anderen Objekt\nbefindest, müsste ich dieses Objekt\naus der Aurasuche entfernen.\nSoll ich diese Änderung vornehmen und\ndie <r<Aurasuche>> so einstellen, dass du\nnach einer <r<Pflanze >>suchen kannst?\n[1]Ja[2-]Nein")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Die Aurasuche\nwurde dementsprechend eingestellt.")
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
/*<470>*/ 								printf("Sehr wohl, \x0E\x01\x12\x04\x00\x05Gebieter. Wenn du die\nEinstellung der Aurasuche ändern\nmöchtest, sprich erneut mit dieser\nPerson.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf("\x0E\x01\x09\x04\n\xA09Ha ha! Das verstehe ich. Du hast genug\nDinge zu erledigen, nicht wahr?\n\n\nAber manchmal schadet es nicht, sich\nvon Zeit zu Zeit auch einer anderen\nAufgabe zu widmen.\n\nAuch der größte Held braucht eine\nVerschnaufpause, vergiss das nicht!")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf("Wie dem auch sei... Die Insel der\nGöttin ist verschwunden!\n\n\nIch traute meinen Augen nicht, als ich\ndieses gewaltige Licht erblickte.\n\n\nDoch mir ist bewusst, dass alle deine\nTaten nur dazu dienen, unsere Zelda\nzu retten. Der Direktor hat mir alles\nerzählt.\nIch bitte dich, rette Zelda für uns!")
          							flw_116:
/*<116>*/ 							printf("\x0E\x01\x09\x04\x00\x13Ähem, übrigens... Ich hätte eine Bitte\nan dich. Würdest du mir zuhören?\n\n\nDu weißt es bestimmt bereits, aber ich\ngelte hier im Wolkenhort als so etwas\nwie ein Experte für Pflanzen.\n\nNun, im Grunde habe ich mir diesen\nTitel selbst verliehen...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, da bist du ja, Link!\nKonntest du mit Narisha sprechen?\n\n\nOh, das ist ja großartig! Du besitzt\nwohl tatsächlich etwas, das dich von\nuns unterscheidet, nicht wahr?\n\nDu und dein roter Wolkenvogel, ihr\nbeide werdet bestimmt jedes Abenteuer\nerfolgreich überstehen!\n\nAber vor dir liegt noch ein sehr\nsteiniger Weg. Bleibe stark!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh, du bist es, Link.\nHast du einen Moment Zeit?\n[1]Was ist denn?[2-]Nein.")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf("Also... Ach, vergiss es. Es ist nicht so\ndringend. Ich bin momentan so oder so\nmit der Suche nach der kleinen Kuki\nbeschäftigt.\nDu solltest dich übrigens auch an der\nSuche beteiligen, wenn du Zeit hast.")
          						  case 1:
/*<130>*/ 							printf("\x0E\x01\x09\x04\x00\x09Hmmm... Dabei hätte ich eigentlich\ngedacht, dass du mir zuhören würdest.")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf("Wie dem auch sei... Die Insel der\nGöttin ist verschwunden!\n\n\nIch traute meinen Augen nicht, als ich\ndieses gewaltige Licht erblickte.\n\n\nDoch mir ist bewusst, dass alle deine\nTaten nur dazu dienen, unsere Zelda\nzu retten. Der Direktor hat mir alles\nerzählt.\nIch bitte dich, rette Zelda für uns!")
          						  case 1:
/*<316>*/ 							printf("\x0E\x01\x09\x04\x00\x01Oh, da bist du ja, Link!\nKonntest du mit Narisha sprechen?\n\n\nOh, das ist ja großartig! Du besitzt\nwohl tatsächlich etwas, das dich von\nuns unterscheidet, nicht wahr?\n\nDu und dein roter Wolkenvogel, ihr\nbeide werdet bestimmt jedes Abenteuer\nerfolgreich überstehen!\n\nAber vor dir liegt noch ein sehr\nsteiniger Weg. Bleibe stark!")
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
/*<164>*/ 	printf("Die Lieferung ist da! Ein praktischer\n<r<Windrad-Propeller>>, bitte sehr!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf("Ruf mich jederzeit wieder, wenn es\netwas zu transportieren gibt.\n\n\nFür die verehrte Phai fliege ich bis\nans Ende der Welt!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x09\x04\x09\x11Oh... Oh! Schau <b<Kombu>> nicht so an!\nKombu wird ganz rot... ")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf("Die Lieferung ist da! Ein schöner,\nglänzender Kristall, bitte sehr!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf("Ruf mich jederzeit wieder, wenn es\netwas zu transportieren gibt.\n\n\nFür die verehrte Phai fliege ich bis\nans Ende der Welt!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Kuki! Meine Kuki! Wo bist du nur?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Ach... Wo ist meine kleine Kuki\ndenn bloß...\n\n\nOh nein... Was mache ich denn nur,\nwenn man sie entführt hat?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Oh! Du bist es, Link!")
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
/*<150>*/ 		printf("Ruft mich wieder, wenn Ihr meine\nHilfe benötigt, verehrte Phai!")
          	  case 1:
/*<149>*/ 		printf("Die Lieferung ist da! Ein seltsamer\nkleiner Kyu, bitte sehr!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

