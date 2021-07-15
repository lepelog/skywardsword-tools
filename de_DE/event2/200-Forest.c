          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDWeg mit euch! Lasst mich in Ruhe!")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDIch bin nur ein Busch, nur ein Busch...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich empfehle, nachzusehen,\nob es diesem Lebewesen gut geht.")
          	  case 1:
/*< 49>*/ 		printf("\x0E\x01\x12\x04\x00\x01Gebieter, wenn du dich jetzt entfernst,\nist die Überlebenschance dieses Wesens\nexakt 5 %.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<439>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 443, 'param3': 46}
/*<443>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 51}
/*<444>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf("")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("")
          		flw_222:
/*<222>*/ 		printf("")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<436>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf("")
/*<438>*/ 			set_camera(32, 0)
/*<437>*/ 			printf("")
          			flw_441:
/*<441>*/ 			set_camera(34, 0)
/*<442>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<643>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf("")
          			goto flw_441
          		}
          	  case 1:
/*<  6>*/ 		printf("")
          		goto flw_222
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<300>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 77, 'param3': 6}
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 17}
/*<202>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf("\x0E\x01\x08\x02\x1CDJetzt auch noch einer in grün?!?")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x00\x0FIch bitte dich...\nVerschone meine Wenigkeit, bitte!")
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 124, 'param3': 14}
/*<124>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 135, 'param3': 13}
/*<135>*/ 		set_camera(2, 0)
/*< 18>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 122, 'param3': 6}
/*<122>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<137>*/ 		set_camera(9, 0)
          	  case 1:
/*<299>*/ 		printf("\x0E\x01\x09\x04\x00\x0BWas...\nWarum ist es plötzlich so ruhig?")
/*<301>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<658>*/ 	start()
/*<659>*/ 	printf("Ich habe die Möglichkeit, eine Analyse\nüber deine Kampferfahrung mit den\nunterschiedlichen Monstern dieser\nWelt vorzunehmen, \x0E\x01\x12\x04\x00\x04Gebieter.")
/*<664>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<665>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 670, 'param3': 32}
/*<670>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 671, 'param3': 17}
/*<671>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 666, 'param3': 6}
/*<666>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 667, 'param3': 17}
/*<667>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 669, 'param3': 6}
/*<669>*/ 	set_camera(39, 0)
/*<668>*/ 	printf("<g<Visiere>> einen Gegner mit (Z) <g<an>> und\ndrücke (v), um mich zu rufen. Ich\nwerde dir Informationen zum Gegner\nund eine detaillierte Analyse liefern.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<672>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 673, 'param3': 36}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 674, 'param3': 6}
/*<674>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x07Vielen Dank, dass du <b<Machas >>Freunde\nalle gefunden hast!\n\n\n\x0E\x01\x09\x04\x00\x13Aber deine Freundin ist noch immer\nnicht aufgetaucht, oder? Du musst sie\nschnell finden!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 153, 'param3': 13}
/*<153>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<154>*/ 				printf("\x0E\x01\x09\x04\x00\x07Unserem Häuptling geht es gut?\nUnd er war gar nicht so weit weg?\nDas ist Musik in <b<Machas>> Ohren...\n\n\x0E\x01\x09\x04\x00\x13Aber deine Freundin war nicht\nbei ihm...")
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x00\x04Sag unserem Häuptling, dass es <b<Macha>>\ngut geht! Deine Freundin ist sicher bei\nihm...")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 346, 'param3': 31}
/*<346>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf("Wie, du hast mich schon wieder\naufgespürt?")
/*<362>*/ 		set_camera(18, 0)
/*<429>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<430>*/ 		printf("\x0E\x01\x08\x02\x2CDIch...")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf("\x0E\x01\x08\x02\xFECD\x0E\x01\x06\x02\xFDCD...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf("Wie? Du machst ja gar nichts!\nUnd eigentlich hast du es ja vorhin\nden roten Kerlen gezeigt...")
/*<379>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 431, 'param3': 6}
/*<431>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x00\x01<b<Macha>>, das ist mein Name!\nDanke dir, Bruder, dass du Macha\ngerettet hast! Das hätte Macha dir gar\nnicht zugetraut...")
/*<139>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 138, 'param3': 13}
/*<138>*/ 		printf("\x0E\x01\x09\x04\x00\x05Da fällt <b<Macha>> ein, gerade erst\nvor Kurzem war hier eine, die so\nähnlich aussah wie du...\n\n[1]Zelda?!?[2]Wer?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x04War das etwa eine Freundin von dir?\nDas war ganz schön übel...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x00\nSie wurde plötzlich von den roten\nKerlen angegriffen und ist dann mit\nunserem <pling><b<Häuptling >>geflohen!")
/*<360>*/ 			set_camera(20, 0)
/*<361>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf("\x0E\x01\x09\x04\x00\x04Woher soll <b<Macha>> das wissen?\nAuf jeden Fall war es ziemlich übel...")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Ich fühle hier eine starke Aura.\nIch empfehle, hier deine Suche\nfortzusetzen.")
          }

          void entrypoint_200_71() {
/*<678>*/ 	start()
/*<679>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 680, 'param3': 51}
/*<680>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 681, 'param3': 16}
/*<681>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 682, 'param3': 17}
/*<682>*/ 	set_camera(40, 0)
/*<683>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf("\x0E\x01\x09\x04\x00\x07Du hast alle von uns gefunden?\nStarke Leistung, mein Freund!\n\n\n\x0E\x01\x09\x04\x00\x13Aber noch fühlt sich <b<Kombu>> hier nicht\nsicher. All diese Monster... Ich werde\nhier noch etwas Wurzeln schlagen...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 163, 'param3': 13}
/*<163>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<164>*/ 				printf("\x0E\x01\x09\x04\x00\x07Unserem Häuptling geht es gut?\nDas sieht ihm ähnlich! Aber trotzdem,\n<b<Kombu>> bleibt lieber noch etwas hier.")
          			  case 1:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x04Sag doch lieber dem Häuptling\nBescheid, dass es <b<Kombu>> gut geht hier.\nIch werde mich jetzt noch etwas\nvergraben...")
          			}
          		  case 1:
/*<364>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf("Uh, du darfst mich nicht essen! <b<Kombu\n>>ist nämlich völlig geschmacklos! Uh,\nuh... Renn lieber weg!")
/*<160>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<597>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 				printf("\x0E\x01\x09\x04\x00\x05Was? Unser Häuptling hat sich Sorgen\ngemacht? Es geht ihm also gut...")
          				flw_209:
/*<209>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 				printf("\x0E\x01\x09\x04\x00\x01Mein Name ist <b<Kombu>>! Schön, oder?\nSag mal, kannst du unserem Häuptling\nausrichten, dass es Kombu gut geht?\n\n\x0E\x01\x09\x04\x00\x0FDie Gefahr scheint hier noch nicht\nvorbei zu sein... Kombu geht lieber\nmal wieder auf Tauchstation!")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<365>*/ 				set_camera(16, 0)
/*<366>*/ 				entrypoint_200_62();
          			  case 1:
/*<598>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf("\x0E\x01\x09\x04\x00\x05Was?!?\nDu siehst eigentlich nicht aus wie ein\nUngeheuer...\n\nEin blondes Mädchen?<pause0F> \x0E\x01\x09\x04\x00\x13Ich habe\nmeinen Kopf im Boden vergraben\nund daher nichts gesehen...")
          				goto flw_209
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Ich fühle keine Gegner mehr in der\nUmgebung. Du kannst den Kyu im\nBaum daher gefahrlos herunterholen.\n\nAllerdings scheint er sich nicht\nbewegen zu können. Du müsstest dir\netwas überlegen.\n\n\x0E\x01\x12\x04\x00\x01Gebieter, du kannst deine Optionen\nimmer durch Drücken von (2)\nüberprüfen.\x0E\x01\x11\x02\x5CD")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\x07Allen anderen geht es gut?\nWie beneidenswert!\n\n\n\x0E\x01\x09\x04\x00\x0B<b<Mugi>> wird noch etwas hierbleiben.\nHier scheint es sicher zu sein...")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<169>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 171, 'param3': 13}
/*<171>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<172>*/ 					printf("\x0E\x01\x09\x04\x00\x07Dem Häuptling geht es gut?\nWer hätte das gedacht...\n\n\n\x0E\x01\x09\x04\x00\x13<b<Mugi>> geht es hingegen noch gar nicht\nso gut! All diese Monster... Brauche\nRuhe...")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\x04<b<Mugi>> braucht jetzt etwas Ruhe.\nSag unserem Häuptling, wo sich Mugi\naufhält, ja?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 207, 'param3': 31}
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf("\x0E\x01\x09\x04\x00\x11Autsch, autsch!<pause1E>\n...Aber trotzdem danke!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 167, 'param3': 13}
/*<167>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x00\x05Was? Unser Häuptling hat sich um\n<b<Mugi>> gesorgt? Irgendwie rührt das\nMugi ja...")
          					flw_212:
/*<212>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 211, 'param3': 13}
/*<211>*/ 					printf("\x0E\x01\x09\x04\x00\x01<b<Mugi>>, das ist natürlich mein Name!\nWir nennen uns alle bei unserem\nNamen, das ist viel persönlicher!\n\n\x0E\x01\x09\x04\x00\x13Sagst du dem Häuptling, dass es Mugi\ngut geht? Bin noch etwas schwach auf\nden Beinen, aber das wird schon\nwieder...")
/*<165>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<116>*/ 					set_camera(27, 0)
/*<400>*/ 					entrypoint_200_63();
          				  case 1:
/*<166>*/ 					printf("\x0E\x01\x09\x04\x00\x05Wie? Du suchst ein Mädchen?\n<b<Mugi>> kennt keine Mädchen...\n\n\n\x0E\x01\x09\x04\x00\x04Aber unser Häuptling, der kennt\nsich mit Mädchen aus! Frag den doch\nmal!")
          					goto flw_212
          				}
          			}
          		  case 1:
/*<130>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 204, 'param3': 13}
/*<204>*/ 			set_camera(4, 0)
/*<129>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\xFECDUff!")
/*<111>*/ 			set_camera(5, 0)
/*<131>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 118, 'param3': 6}
/*<118>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 117, 'param3': 13}
/*<117>*/ 			printf("\x0E\x01\x09\x04\x00\x0BDu hast die roten Kerle weggeputzt!\nBist du etwa...<pause0F> einer von den Guten?!?\n\n\n\x0E\x01\x09\x04\x00\x13In diesem Fall könntest du <b<Mugi>> gleich\nmal helfen: Ich stecke hier nämlich\nfest! Kannst du Mugi helfen?")
/*<119>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*<133>*/ 			set_camera(6, 0)
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<333>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<332>*/ 		printf("Ich empfehle, deinen Fortschritt zu\nspeichern, bevor du Zelda in den\nTempel am Ende des Waldes folgst.")
          	  case 1:
/*<327>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<328>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<330>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<331>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<325>*/ 						printf("Ich spüre keine Präsenz anderer Kyu\nmehr in dieser Gegend.\n\n\nIch empfehle, zum Häuptling zu gehen\nund mit ihm zu reden.")
          					  case 1:
          						flw_326:
/*<326>*/ 						printf("Von hier aus hast du einen freien Blick.\nIch empfehle, die Kyu von hier aus mit\nder Aurasuche zu erspüren.")
          					}
          				  case 1:
          					goto flw_326
          				}
          			  case 1:
          				goto flw_326
          			}
          		  case 1:
/*<596>*/ 			printf("In dieser Umgebung spüre ich die Aura\nZeldas kaum. Ich empfehle daher, an\neinem anderen Ort weiter zu suchen.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<221>*/ 	start()
/*<334>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<329>*/ 		printf("\x0E\x01\x09\x04\x18\x1705Was ist los? Du scheinst mich etwas\nfragen zu wollen... Was ist es denn?\n[1]Über das\nArtefakt[2]Über den\nTempel[3-]Nichts")
/*<476>*/ 		switch (choice(3)) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x16\x1E04Mit dem Licht deines Schwertes kannst\ndu die Artefakte in den Himmel\nbefördern.\n\nDen alten Schriften zufolge liegen sie\nüberall in Erdland verstreut.")
          			flw_631:
/*<631>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<633>*/ 			printf("\x0E\x01\x09\x04\x08\xB04Den alten Schriften zufolge befindet\nsich in dieser Gegend der Tempel des\nHimmelsblicks.\n\nFür einen, der aus den Wolken kam,\nscheint mir dies ein angemessener Ort\nzu sein...")
/*<477>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_631
          			  case 1:
/*<478>*/ 				printf("\x0E\x01\x09\x04\x00\x1707Da fällt mir ein, irgendwo dort\nsteht eine alte Steintafel.\n\n\n\x0E\x01\x09\x04\x16\xB00Dort steht etwas geschrieben...<pause0F>\nWenn ich mich nicht täusche, ist das ein\nHinweis auf den Eingang!")
          				goto flw_631
          			}
          		  case 2:
/*<632>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<626>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<480>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<521>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 32}
          				flw_479:
/*<479>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Dieses Artefakt besteht aus einem\nMetall, das ich so noch nie gesehen\nhabe. Es ist völlig unempfindlich gegen\nSchläge...")
/*<494>*/ 				set_camera(-1, 0)
/*<505>*/ 				printf("\x0E\x01\x09\x04\x16\xB07Ich frage mich, was die alten\nSchriften mit dem <r<Strahl des\nhimmlischen Schwertes >>meinen...\n\n\x0E\x01\x09\x04\x00\x1705Fällt dir dazu etwas ein?")
/*<506>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 507, 'param3': 17}
/*<507>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 508, 'param3': 17}
/*<508>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 509, 'param3': 6}
/*<509>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<514>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<483>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_499:
/*<499>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 500, 'param3': 32}
/*<500>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 501, 'param3': 17}
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 502, 'param3': 17}
/*<502>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 485, 'param3': 6}
/*<485>*/ 					set_camera(37, 0)
/*<486>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF05Das hier...<pause0F>\nEs heißt, dass die Göttin diese Steine\nfür einen Helden hier zurückgelassen\nhabe.\nIch nenne sie<pause1E> <b<Artefakte der Göttin>>!\nEin Name wie in Stein gemeißelt,\nfindest du nicht auch?")
/*<487>*/ 					set_camera(-1, 0)
/*<488>*/ 					printf("\x0E\x01\x09\x04\x00\x1E04Den alten Schriften zufolge...\n\n\n\nIhnen zufolge muss der Strahl des\nhimmlischen Schwertes<pause1E> den Stein\ntreffen, um den Herrn des Schwertes<pause1E>\nzu stärken...")
/*<503>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 504, 'param3': 17}
/*<504>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 489, 'param3': 17}
/*<489>*/ 					printf("\x0E\x01\x09\x04\x18\x170BDu hast doch ein Schwert?\nDann hilf mir bitte, das Rätsel dieses\nArtefakts zu lösen. \n\nDu willst doch ein Held sein, oder?\n[1]Ja[2]Nein")
/*<491>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_490:
/*<490>*/ 						printf("\x0E\x01\x09\x04\x17\x1908Das wollte ich hören!")
          						flw_493:
/*<493>*/ 						set_camera(37, 0)
          						goto flw_479
          					  case 1:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x18\x170CKomm schon, tu es für die\nWissenschaft!\n[1]Na gut![2]Lieber nicht...")
/*<495>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_490
          						  case 1:
/*<496>*/ 							printf("\x0E\x01\x09\x04\x08\x07Jetzt komm schon! Du musst es ja\nnicht umsonst tun...")
/*<498>*/ 							give_item(161 0xA1);
/*<497>*/ 							printf("\x0E\x01\x09\x04\x17\x1906Jetzt kannst du nicht mehr ablehnen!")
          							goto flw_493
          						}
          					}
          				  case 1:
/*<484>*/ 					printf("\x0E\x01\x09\x04\x17\x1908Du kommst mir gerade recht!\n\n\n\nSieh mal, an diesem Ort habe ich Teile\nder alten Schrift entdeckt!")
          					goto flw_499
          				}
          			}
          		  case 1:
/*<628>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<629>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hey, Kleiner!\nKomm mal schnell zu mir!")
/*<630>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<627>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<624>*/ 				printf("\x0E\x01\x09\x04\x00\x01Wie geht es dir, Kleiner?\nHast wohl einen steinigen Weg\nhinter dir, was?\n\nGerade jetzt könnte ich deine Hilfe\ngebrauchen. Komm doch mal her!")
/*<625>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x13Wie, du hast alle gefunden?\nDu scheinst Langeweile zu haben...")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf("\x0E\x01\x09\x04\x00\x05Und <b<Senbuli>> dachte, er habe endlich\ndas perfekte Versteck gefunden!\nWieder nichts...")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 177, 'param3': 13}
/*<177>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<178>*/ 				printf("\x0E\x01\x09\x04\x00\x07Aber unseren Häuptling hast du ja\nauch gefunden... Du bist wirklich ein\nMeister im Aufspüren, Fremder!")
          			  case 1:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x00\x14Aber unseren Häuptling, den findet\nniemand, jawohl!")
          			}
          		  case 1:
/*<345>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 372, 'param3': 31}
/*<372>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf("\x0E\x01\x09\x04\x00\x13Da sucht man sich so ein tolles Versteck\nund wird trotzdem gefunden!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 210, 'param3': 13}
/*<210>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ich heiße <b<Senbuli>>!\nUnd ich bin fast so gut im Verstecken\nwie unser Häuptling!")
/*<637>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<676>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<373>*/ 			set_camera(38, 0)
/*<374>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<303>*/ 	start()
/*<304>*/ 	printf("")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x02Zelda? Die ist in den Tempel am Ende\ndes Waldes...")
/*<120>*/ 			printf("Die <y<Schleuder>> wirst du benötigen,\num in den Tempel am Ende des Waldes\nzu gelangen.\n\n\x0E\x01\x09\x04\x00\x06Sieh zu, dass du deine Freundin\nfindest, mein Kleiner! Ho-ho-ho!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf("\x0E\x01\x09\x04\x00\x01Stell dich auf meinen Rücken und\ngreife nach dem Ding dort!")
          				  case 1:
/*<109>*/ 					printf("\x0E\x01\x09\x04\x00\x01Spring auf meinen Rücken und greife\nnach dem Ding dort!")
          				}
          			  case 1:
          				flw_128:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x00\nSo, so, es geht also allen gut?\nDas hört man gerne!\nVielen Dank, du unermüdlicher\nAufstöberer!")
/*<604>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<605>*/ 					printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, hier war ein Mädchen mit\nblondem Haar... Sie war bei mir.")
          					flw_595:
/*<595>*/ 					set_camera(-1, 0)
/*<420>*/ 					printf("\x0E\x01\x09\x04\x00\x02Dieses Mädchen namens Zelda hat\ngesagt, dass es in den Tempel am Ende\ndes Waldes gehen müsse...\n\nIch habe ja noch versucht, sie davon\nabzuhalten, aber sie ist auf meinen\nRücken geklettert und ab in den\nTempel...")
/*<421>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 422, 'param3': 32}
/*<422>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 423, 'param3': 17}
/*<423>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 424, 'param3': 6}
/*<424>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 427, 'param3': 17}
/*<427>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 425, 'param3': 6}
/*<425>*/ 					set_camera(31, 0)
/*<126>*/ 					set_camera(7, 0)
/*<140>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 141, 'param3': 15}
/*<141>*/ 					make_actor_do_something(3, 0)
/*<125>*/ 					printf("\x0E\x01\x09\x04\x00\x03Wenn du da hinten weiter gehst, wirst\ndu auf einen Tempel stoßen...<pause0F>\nAllerdings wimmelt es dort von\nUngeheuern...")
/*<428>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 144, 'param3': 17}
/*<144>*/ 					set_camera(8, 0)
/*<145>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 146, 'param3': 15}
/*<146>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 309, 'param3': 17}
/*<309>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 426, 'param3': 17}
/*<426>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 127, 'param3': 6}
/*<127>*/ 					printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\x1CDNun denn... \n\n\n\nDu hast meine Gefährten aufgespürt.\nDafür gebührt dir Dank...\n\n\n\x0E\x01\x09\x04\x00\x08Einen Moment!\nEntschuldigung...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<606>*/ 					printf("\x0E\x01\x09\x04\x00\x09Dann verrate ich dir als Dank, wo deine\nFreundin hingegangen ist!")
          					goto flw_595
          				}
          			}
          		}
          	  case 1:
/*<147>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<148>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<149>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<150>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<409>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 408, 'param3': 6}
/*<408>*/ 						set_camera(29, 0)
/*<677>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_410:
/*<410>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<526>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_128
          					  case 1:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<592>*/ 						switch (choice(2)) {
          						  case 0:
/*<594>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<590>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_593:
/*<593>*/ 							set_camera(29, 0)
/*<591>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<152>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_410
          						  case 1:
/*<675>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_593
          						}
          					}
          				  case 1:
/*<179>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<181>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha, Mugi und Kombu\ngeht es also gut?\n\n\nEntschuldige, aber <r<einen>> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n\x0E\x01\x09\x04\x00\x02Dieser Gefährte hat die Gabe, sich wie\nein Busch zu tarnen. Am besten suchst\ndu ihn daher dort...\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          					  case 1:
/*<214>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<530>*/ 						switch (choice(2)) {
          						  case 0:
/*<532>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_531:
/*<531>*/ 							set_camera(29, 0)
/*<528>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<529>*/ 							printf("\x0E\x01\x09\x04\x00\x03Sieh an... Du hast also Macha, Kombu\nund Mugi gefunden, und es geht ihnen\ngut? Aber noch ist der Wald voller\nUngeheuer!\nIch kann unmöglich weg von hier.")
/*<533>*/ 							set_camera(-1, 0)
/*<534>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_411:
/*<411>*/ 								printf("\x0E\x01\x09\x04\x00\x08Tut mir ja leid, aber ich warte\nnoch immer auf Nachricht von <r<einem\n>>Gefährten...\n\nEr hat die Gabe, sich wie ein Busch zu\ntarnen. Am besten ist es daher, ihn bei\nden Büschen zu suchen.\n\n\x0E\x01\x09\x04\x00\x02Wenn du ihn findest, erinnere\nich mich vielleicht wieder, wo deine\nFreundin abgeblieben ist...")
          								flw_180:
/*<180>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<418>*/ 								set_camera(30, 0)
/*<419>*/ 								entrypoint_200_61();
          							  case 1:
/*<535>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_411
          							}
          						  case 1:
          							goto flw_531
          						}
          					}
          				}
          			  case 1:
/*<182>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<183>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<186>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha, Kombu und Senbuli\ngeht es also gut?\n\n\nEntschuldige, aber <r<einen>> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n\x0E\x01\x09\x04\x00\x02Dieser Gefährte hat die Gabe, sich in\nBaumkronen zu verstecken. Am besten\nsuchst du ihn daher dort...\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          					  case 1:
/*<215>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<539>*/ 						switch (choice(2)) {
          						  case 0:
/*<541>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<537>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_540:
/*<540>*/ 							set_camera(29, 0)
/*<538>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<536>*/ 							printf("\x0E\x01\x09\x04\x00\x03Sieh an... Macha, Kombu und Senbuli\ngeht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann unmöglich weg von hier.")
/*<542>*/ 							set_camera(-1, 0)
/*<543>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_412:
/*<412>*/ 								printf("\x0E\x01\x09\x04\x00\x08Entschuldige, aber <r<einen>> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n\x0E\x01\x09\x04\x00\x02Dieser Gefährte hat die Gabe, sich in\nBaumkronen zu verstecken. Am besten\nsuchst du ihn daher dort...\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          								goto flw_180
          							  case 1:
/*<544>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_412
          							}
          						  case 1:
          							goto flw_540
          						}
          					}
          				  case 1:
/*<184>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<185>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha und Kombu geht es also gut...\nAber was ist mit den anderen\nGefährten?\n\nTut mir leid, aber <r<zwei>> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n\x0E\x01\x09\x04\x00\x08Deine Freundin? Die könnte rechts\nlang gegangen sein! Oder doch links?\nHmmm...")
          					  case 1:
/*<216>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<548>*/ 						switch (choice(2)) {
          						  case 0:
/*<550>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<546>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_549:
/*<549>*/ 							set_camera(29, 0)
/*<547>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<545>*/ 							printf("\x0E\x01\x09\x04\x00\x03So, so...\nMacha und Kombu geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<551>*/ 							set_camera(-1, 0)
/*<552>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_413:
/*<413>*/ 								printf("\x0E\x01\x09\x04\x00\x02Tut mir leid, aber <r<zwei>> meiner\nGefährten musst du noch finden,\num mich zu beruhigen.\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen\nist...")
          								goto flw_180
          							  case 1:
/*<553>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_413
          							}
          						  case 1:
          							goto flw_549
          						}
          					}
          				}
          			}
          		  case 1:
/*<187>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<188>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<189>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<197>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha, Mugi und Senbuli\ngeht es also gut?\n\n\nEntschuldige, aber <r<einen>> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n\x0E\x01\x09\x04\x00\x02Dieser Gefährte hat die Gabe, sich als\nGrasbüschel zu tarnen. Du weißt also,\nwonach du suchen musst!\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<557>*/ 						switch (choice(2)) {
          						  case 0:
/*<559>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<555>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_558:
/*<558>*/ 							set_camera(29, 0)
/*<556>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<554>*/ 							printf("\x0E\x01\x09\x04\x00\x03So, so... Macha, Mugi und Senbuli geht\nes also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<560>*/ 							set_camera(-1, 0)
/*<561>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_414:
/*<414>*/ 								printf("\x0E\x01\x09\x04\x00\x08Entschuldige, aber <r<einen>> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n\x0E\x01\x09\x04\x00\x02Dieser Gefährte hat die Gabe, sich als\nGrasbüschel zu tarnen. Du weißt also,\nwonach du suchen musst!\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          								goto flw_180
          							  case 1:
/*<562>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_414
          							}
          						  case 1:
          							goto flw_558
          						}
          					}
          				  case 1:
/*<190>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<191>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha und Mugi geht es also gut...\nAber was ist mit den anderen\nGefährten?\n\nTut mir leid, aber <r<zwei>> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n\x0E\x01\x09\x04\x00\x08Deine Freundin? Die könnte rechts\nlang gegangen sein! Oder doch links?\nHmmm...")
          					  case 1:
/*<218>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<566>*/ 						switch (choice(2)) {
          						  case 0:
/*<568>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<564>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_567:
/*<567>*/ 							set_camera(29, 0)
/*<565>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<563>*/ 							printf("\x0E\x01\x09\x04\x00\x03So, so...\nMacha und Mugi geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<569>*/ 							set_camera(-1, 0)
/*<570>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_415:
/*<415>*/ 								printf("\x0E\x01\x09\x04\x00\x02Tut mir leid, aber <r<zwei>> meiner\nGefährten musst du noch finden,\num mich zu beruhigen.\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen\nist...")
          								goto flw_180
          							  case 1:
/*<571>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_415
          							}
          						  case 1:
          							goto flw_567
          						}
          					}
          				}
          			  case 1:
/*<192>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<196>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha und Senbuli geht es also gut...\nAber was ist mit den anderen\nGefährten?\n\nTut mir leid, aber <r<zwei>> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n\x0E\x01\x09\x04\x00\x08Deine Freundin? Die könnte rechts\nlang gegangen sein! Oder doch links?\nHmmm...")
          					  case 1:
/*<219>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<575>*/ 						switch (choice(2)) {
          						  case 0:
/*<577>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<573>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_576:
/*<576>*/ 							set_camera(29, 0)
/*<574>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<572>*/ 							printf("\x0E\x01\x09\x04\x00\x03So, so...\nMacha und Senbuli geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<578>*/ 							set_camera(-1, 0)
/*<579>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_416:
/*<416>*/ 								printf("\x0E\x01\x09\x04\x00\x02Tut mir leid, aber <r<zwei>> meiner\nGefährten musst du noch finden,\num mich zu beruhigen.\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen\nist...")
          								goto flw_180
          							  case 1:
/*<580>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_416
          							}
          						  case 1:
          							goto flw_576
          						}
          					}
          				  case 1:
/*<194>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf("\x0E\x01\x09\x04\x00\x03Macha geht es also gut...\nAber was ist mit den anderen\nGefährten?\n\nTut mir leid, aber <r<drei>> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n\x0E\x01\x09\x04\x00\x08Deine Freundin? Wo die nur hin ist?\nMeine Erinnerung...")
          					  case 1:
/*<220>*/ 						printf("\x0E\x01\x09\x04\x00\x06Ho-ho-ho!<pause0F>\nKennst du mich? Ich bin <b<Roiboss>>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu\ndurchschauen. Ich bin beeindruckt...<pause0F>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1]Nach Zelda\nfragen[2]Nachricht\nüberbringen")
/*<584>*/ 						switch (choice(2)) {
          						  case 0:
/*<586>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<582>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...<pause0F>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n\x0E\x01\x09\x04\x00\x0CAllerdings habe ich im Moment gar\nkeinen Kopf für so etwas... Der Wald\nist voller Monster und zwielichtiger\nGestalten!\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_585:
/*<585>*/ 							set_camera(29, 0)
/*<583>*/ 							printf("\x0E\x01\x09\x04\x00\x0EWas?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<581>*/ 							printf("\x0E\x01\x09\x04\x00\x03So, so...\nMacha geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<587>*/ 							set_camera(-1, 0)
/*<588>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_417:
/*<417>*/ 								printf("\x0E\x01\x09\x04\x00\x02Tut mir leid, aber <r<drei>> meiner\nGefährten musst du noch finden,\num mich zu beruhigen.\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen\nist...")
          								goto flw_180
          							  case 1:
/*<589>*/ 								printf("\x0E\x01\x09\x04\x00\x08Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n\x0E\x01\x09\x04\x00\x0CAber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_417
          							}
          						  case 1:
          							goto flw_585
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter, ich möchte dir etwas zum\nGebrauch von Items erklären.\n\n\nDie <y<Schleuder>>, die du zuvor erhalten\nhast, kannst du jederzeit <g<schnell\nhervorholen>>, indem du kurz (B)\ndrückst.\x0E\x01\x11\x02\x1CD\nWenn du Probleme mit dem Zielen\nhast, zeige mit der Wii-Fernbedienung\nnach vorne und drücke (v), <g<um den\nFokus zu zentrieren>>.\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_200_92() {
/*<305>*/ 	start()
/*<306>*/ 	printf("")
          }

          void entrypoint_200_40() {
/*<336>*/ 	start()
/*<337>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x01Gebieter. Wir sind im <b<Wald von Phirone\n>>angekommen.")
/*<355>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 205, 'param3': 13}
/*<205>*/ 	set_camera(3, 0)
/*<602>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': -1, 'param3': 6}
          }

          void entrypoint_200_59() {
/*<206>*/ 	start()
/*<621>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<623>*/ 		printf("\x0E\x01\x12\x04\x00\x04Gebieter! Meiner Analyse zufolge\nbesteht eine Wahrscheinlichkeit von\n80 %, dass bei diesem See dort eine\nFlamme zu finden ist.")
          	  case 1:
/*<622>*/ 		printf("\x0E\x01\x12\x04\x00\x04Gebieter, mit einer Wahrscheinlichkeit\nvon 80 % befindet sich hinter diesem\nTor eine Flamme.\n\nDie Kraft der Göttin, von der dir\nder Kyu-Einsiedler erzählt hat,\nist wohl der <r<Himmelsstrahl>>.\n\nEr vervollständigt das Siegel.\nIch empfehle, den Himmelsstrahl\nzu sammeln und vor dem Tor\ndas <g<Muster zu zeichnen>>.")
/*<655>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<338>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x05\x04K\x00Um diesen riesigen Baum herum\ngedeiht ein prächtiges Land.")
          }

          void entrypoint_200_93() {
/*<445>*/ 	start()
/*<446>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hey, da bist du ja wieder!\nSchön, dich zu sehen!")
/*<513>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<132>*/ 	start()
/*<213>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<601>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 660, 'param3': 13}
/*<660>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<662>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<661>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<600>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<340>*/ 	start()
/*<341>*/ 	printf("\x0E\x01\x05\x04K\x00Alle möglichen Lebewesen haben hier\nihr Zuhause gefunden.")
          }

          void entrypoint_200_94() {
/*<447>*/ 	start()
/*<453>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 455, 'param3': 46}
/*<455>*/ 	set_camera(35, 0)
/*<457>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<516>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<515>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDNicht so schnell, Kleiner!\n\n\n\nDas Rätsel des Artefakts der Göttin\nwill gelöst werden, da kannst du nicht\neinfach weglaufen! Denk doch mal an\ndie Wissenschaft!")
          			flw_465:
/*<465>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 463, 'param3': 49}
/*<463>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 464, 'param3': 15}
/*<464>*/ 			set_camera(36, 0)
/*<511>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<517>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDWarte, nicht weglaufen!\nIch möchte dich um etwas\nbitten...")
          			goto flw_465
          		}
          	  case 1:
/*<462>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<481>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<461>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDHey, stehengeblieben!\n\n\n\n\x0E\x01\x09\x04\x17\x600Ich weiß genau, dass du mich gesehen\nhast!<pause0F> Was ist, magst du mich etwa\nnicht?\n[1]Entschuldigung![2]Gut geraten!")
/*<459>*/ 		switch (choice(2)) {
          		  case 0:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Ich weiß ja, dass du deine Freundin\nsuchst. Ich wollte dich ja auch nicht\naufhalten...\n\nAber könntest du mir kurz helfen?")
          			goto flw_465
          		  case 1:
/*<460>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Hm, das trifft mich jetzt...\n\n\n\nAber wir Forscher waren zu allen\nZeiten verkannt... Wie dem auch sei,\nkönntest du mir kurz helfen?")
          			goto flw_465
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 227, 'param3': 13}
/*<227>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 432, 'param3': 6}
/*<432>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 49}
/*<224>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 226, 'param3': 13}
/*<226>*/ 	make_actor_do_something(0, 0)
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 433, 'param3': 6}
/*<433>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 435, 'param3': 50}
/*<435>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter! Ich habe neue Informationen\nzu Zelda.\n\n\nEs scheint, als sei Zelda von dem Bösen\nangegriffen worden und nur knapp\nentkommen...<pause0F> Die Lage ist sehr ernst.")
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 358, 'param3': 30}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 335, 'param3': 6}
/*<335>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<155>*/ 	printf("<pling>Machas Position wurde markiert.\nSieh sie dir auf deiner Karte an.")
/*<159>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 359, 'param3': 34}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 225, 'param3': 6}
/*<225>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 302, 'param3': 13}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	printf("Dieses Lebewesen hat Zelda\ngetroffen, daher habe ich ihre\nAura wohl hier gespürt.\n\nAuch der Häuptling der Kyu, der\ngemeinsam mit Zelda geflohen ist,\nhat mit einer Wahrscheinlichkeit\nvon 85 % auf die Aurasuche reagiert.\nIch empfehle, weiter nach der Aura\nZeldas zu suchen.")
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 434, 'param3': 36}
/*<434>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 231, 'param3': 6}
/*<231>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 363, 'param3': 6}
/*<363>*/ 	set_camera(19, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 230, 'param3': 17}
/*<230>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 229, 'param3': 13}
/*<229>*/ 	printf("\x0E\x01\x09\x04\x00\x0DAh, hat das <b<Macha>> erschreckt!\nDu hast schon komische Freunde...")
/*<523>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 522, 'param3': 13}
/*<522>*/ 	printf("\x0E\x01\x09\x04\x00\x07Wenn du deine Freundin und unseren\n<b<Häuptling >>findest, dann sage ihnen,\n<r<dass es Macha gut geht>>!\n\n\x0E\x01\x09\x04\x00\x05Macha ist sich absolut sicher,\ndass die beiden zusammen sind!")
/*<618>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<619>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<142>*/ 	start()
/*<143>*/ 	printf("\x0E\x01\x09\x04\x00\x02Damit solltest du in der Lage sein,\nin den Tempel zu gelangen...")
/*<380>*/ 	set_camera(21, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 382, 'param3': 15}
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 383, 'param3': 32}
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 384, 'param3': 17}
/*<384>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 385, 'param3': 17}
/*<385>*/ 	set_camera(22, 0)
/*<388>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<390>*/ 		printf("\x0E\x01\x09\x04\x00\x08Warum versuchst du nicht gleich mal,\ndiese Ringelranke dort anzuvisieren...\n<pause0F>Was?!?\n\nNicht so eilig!<pause0F>\nIch erkläre dir, wie's geht!")
          		flw_391:
/*<391>*/ 		printf("\x0E\x01\x09\x04\x00\x02Drücke (B), um die Schleuder zu\nspannen, und dann (A), um zu schießen!\x0E\x01\x11\x02\x1CD\n\n\nWenn du keine Munition mehr hast,\nkannst du die <g<Kerne>> dieser Bäume\nhier <g<aufsammeln>>!")
/*<386>*/ 		set_camera(23, 0)
/*<394>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 393, 'param3': 17}
/*<393>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<387>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 392, 'param3': 17}
/*<392>*/ 			printf("\x0E\x01\x09\x04\x00\x06Sieh zu, dass du deine Freundin bald\nfindest, mein Kleiner! Ho-ho-ho!")
/*<398>*/ 			set_camera(25, 0)
/*<399>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<395>*/ 			printf("\x0E\x01\x09\x04\x00\x06Sieh zu, dass du deine Freundin bald\nfindest, mein Kleiner! Ho-ho-ho!")
/*<396>*/ 			set_camera(24, 0)
/*<397>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<389>*/ 		printf("\x0E\x01\x09\x04\x00\x08Warum versuchst du nicht gleich mal,\ndiese Ringelranke dort anzuvisieren?")
          		goto flw_391
          	}
          }

          void entrypoint_200_43() {
/*<342>*/ 	start()
/*<343>*/ 	printf("\x0E\x01\x05\x04K\x00Ich fühle, dass auch Zelda sich\nirgendwo hier aufhält.\n\n\n\x0E\x01\x05\x04K\x00Ich schlage vor, sie mit der\nAurasuche aufzuspüren.")
/*<644>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<645>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<450>*/ 	start()
/*<454>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 456, 'param3': 46}
/*<456>*/ 	set_camera(35, 0)
/*<466>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<519>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<518>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDNicht so schnell, Kleiner!\n\n\n\nDas Rätsel des Artefakts der Göttin\nwill gelöst werden, da kannst du nicht\neinfach weglaufen! Denk doch mal an\ndie Wissenschaft!")
          			flw_474:
/*<474>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 472, 'param3': 49}
/*<472>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 473, 'param3': 15}
/*<473>*/ 			set_camera(36, 0)
/*<512>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<520>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDWarte, nicht weglaufen!\nIch möchte dich um etwas\nbitten...")
          			goto flw_474
          		}
          	  case 1:
/*<471>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<482>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<470>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDHey, stehengeblieben!\n\n\n\n\x0E\x01\x09\x04\x17\x600Ich weiß genau, dass du mich gesehen\nhast!<pause0F> Was ist, magst du mich etwa\nnicht?\n[1]Entschuldigung![2]Gut geraten!")
/*<468>*/ 		switch (choice(2)) {
          		  case 0:
/*<467>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Ich weiß ja, dass du deine Freundin\nsuchst. Ich wollte dich ja auch nicht\naufhalten...\n\nAber könntest du mir kurz helfen?")
          			goto flw_474
          		  case 1:
/*<469>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Hm, das trifft mich jetzt...\n\n\n\nAber wir Forscher waren zu allen\nZeiten verkannt... Wie dem auch sei,\nkönntest du mir kurz helfen?")
          			goto flw_474
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<651>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<200>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 405, 'param3': 51}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 201, 'param3': 17}
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 199, 'param3': 16}
/*<199>*/ 	printf("Der Häuptling ist leider nicht mehr\nin Zeldas Nähe.<pause0F>\nAber ich bin sicher, dass er etwas weiß.\n\nWenn du die versteckten Kyu suchst,\nbesteht eine Wahrscheinlichkeit von\n85 %, dass du von ihm etwas über Zelda\nerfährst.\nIch habe die <pling><r<Präsenz der Kyu >>zu deiner\nAurasuche hinzugefügt.")
/*<653>*/ 	open_dowsing_wheel(1)
/*<654>*/ 	printf("Soll ich dir erklären, wie du das Ziel\ndeiner Aurasuche festlegen kannst?\n[1]Ja[2-]Nein")
/*<636>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_524:
/*<524>*/ 		printf("Wenn du (C) gedrückt hältst,\nbekommst du mögliche Ziele deiner\nAurasuche angezeigt.\n\n\x0E\x01\x11\x02\x6CD<g<Neige die Wii-Fernbedienung>> und\nwähle dein Ziel, dann bestätige durch\nLoslassen von (C), um dein Ziel zu\nregistrieren.\x0E\x01\x11\x02\x6CD\nWenn du nichts suchen willst, wähle\n<g<Umsehen>> und lasse (C) los, um deine\nAuswahl zu bestätigen.\n[1]Noch einmal.[2-]Verstanden!")
/*<525>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_524
          		  case 1:
          			flw_652:
/*<652>*/ 			printf("Bereits gefundene Kyu sind auf der\nKarte markiert und werden von der\nAurasuche nicht mehr erfasst.\n\nBeginne jetzt mit der Suche.")
/*<648>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<649>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 650, 'param3': 36}
/*<650>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_652
          	}
          }

          void entrypoint_200_44() {
/*<356>*/ 	start()
/*<357>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<451>*/ 	start()
/*<452>*/ 	printf("\x0E\x01\x09\x04\x15\x1908Wuah!\nDas Artefakt ist gen Himmel gestiegen!\n\n\n\x0E\x01\x09\x04\x13\x1B00Die Kraft deines Schwertes scheint\ndas bewirkt zu haben!\n\n\n\x0E\x01\x09\x04\x00\x1B05Wohin es wohl verschwunden ist?\nDas Rätsel ist gar noch rätselhafter\ngeworden...\n\n\x0E\x01\x09\x04\x16\x1E00Den alten Schriften zufolge sind die\nArtefakte der Göttin über das ganze\nLand verstreut.\n\n\x0E\x01\x09\x04\x00\x1700Du solltest sie alle auf diese Weise\nin den Himmel schicken. Sag mir\nBescheid, wenn du etwas mehr\ndarüber herausgefunden hast.")
/*<510>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<235>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<236>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<244>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<245>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<246>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<241>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 287, 'param3': 51}
/*<287>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 285, 'param3': 17}
/*<285>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 286, 'param3': 13}
/*<286>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 243, 'param3': 6}
/*<243>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 240, 'param3': 16}
/*<240>*/ 						printf("Die Aurasuche erfasst kein relevantes\nZiel mehr in dieser Gegend.\n\n\nIch empfehle, zum Häuptling\nzurückzukehren und mit ihm zu\nsprechen.")
/*<242>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          						flw_288:
/*<288>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 368, 'param3': 6}
/*<368>*/ 						set_camera(17, 0)
/*<367>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 371, 'param3': 17}
/*<371>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 370, 'param3': 17}
/*<370>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 369, 'param3': 13}
/*<369>*/ 						printf("\x0E\x01\x09\x04\x00\x14Was?!?\nJag <b<Kombu>> doch keine Angst ein,\ndu grüne Vogelscheuche!")
/*<406>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_238:
/*<238>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 284, 'param3': 51}
/*<284>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 282, 'param3': 17}
/*<282>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 283, 'param3': 13}
/*<283>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 239, 'param3': 6}
/*<239>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 612, 'param3': 16}
/*<612>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<237>*/ 							printf("Kombus Position wurde<pling> markiert.\nAber noch gibt es andere Kyu, die von\nder Aurasuche erfasst werden.")
          							flw_308:
/*<308>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 599, 'param3': 17}
/*<599>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          							goto flw_288
          						  case 1:
/*<613>*/ 							printf("Kombus Position wurde<pling> markiert.\nZelda ist allerdings nicht bei ihm.")
          							goto flw_308
          						}
          					}
          				  case 1:
          					goto flw_238
          				}
          			  case 1:
          				goto flw_238
          			}
          		  case 1:
          			goto flw_238
          		}
          	  case 1:
          		goto flw_238
          	}
          }

          void entrypoint_200_10() {
/*<310>*/ 	start()
/*<607>*/ 	set_camera(-1, 0)
/*<608>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 609, 'param3': 40}
/*<609>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 610, 'param3': 13}
/*<610>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 350, 'param3': 6}
/*<350>*/ 	set_camera(15, 0)
/*<348>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 353, 'param3': 6}
/*<353>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 354, 'param3': 24}
/*<354>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 349, 'param3': 13}
/*<349>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 351, 'param3': 14}
/*<351>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 313, 'param3': 13}
/*<313>*/ 	printf("\x0E\x01\x09\x04\x00\x07Hey, ich bin's!\nHast du deine Freundin denn schon\ngefunden?\n[1]Wer bist du?[2]Leider nicht.")
/*<314>*/ 	switch (choice(2)) {
          	  case 0:
/*<317>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 315, 'param3': 13}
/*<315>*/ 		printf("\x0E\x01\x09\x04\x00\x13Wie, du kennst <b<Macha>> nicht mehr?\nDas ist eine Enttäuschung...")
          		flw_319:
/*<319>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 320, 'param3': 13}
/*<320>*/ 		printf("\x0E\x01\x09\x04\x00\x07Endlich habe ich meine Freunde\nalle wiedergefunden. Vielen Dank,\nmein Freund!")
/*<312>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 318, 'param3': 13}
/*<318>*/ 		printf("\x0E\x01\x09\x04\x00\x05Mach's gut!\nUnd sieh zu, dass du deine Freundin\nfindest!")
/*<321>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 322, 'param3': 14}
/*<322>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<344>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<311>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 316, 'param3': 13}
/*<316>*/ 		printf("\x0E\x01\x09\x04\x00\x13Das ist schade...\nAber wenigstens scheinst du zu wissen,\nin welche Richtung sie gegangen ist.")
          		goto flw_319
          	}
          }

          void entrypoint_200_63() {
/*<247>*/ 	start()
/*<248>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<249>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<258>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<259>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<260>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<255>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 294, 'param3': 35}
/*<294>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 292, 'param3': 17}
/*<292>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 293, 'param3': 13}
/*<293>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 257, 'param3': 6}
/*<257>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 254, 'param3': 16}
/*<254>*/ 						printf("Die Aurasuche erfasst kein relevantes\nZiel mehr in dieser Gegend.\n\n\nIch empfehle, zum Häuptling\nzurückzukehren und mit ihm zu\nsprechen.")
/*<256>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          						flw_295:
/*<295>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 402, 'param3': 6}
/*<402>*/ 						set_camera(26, 0)
/*<401>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 298, 'param3': 17}
/*<298>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 						printf("\x0E\x01\x09\x04\x00\x0DHey, was soll das?\nErschrecke doch <b<Mugi>> nicht so!")
/*<611>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<620>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_251:
/*<251>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 291, 'param3': 35}
/*<291>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 289, 'param3': 17}
/*<289>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 290, 'param3': 13}
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 253, 'param3': 6}
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 614, 'param3': 16}
/*<614>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<250>*/ 							printf("Mugis Position wurde<pling> markiert.\nAber noch gibt es andere Kyu, die von\nder Aurasuche erfasst werden.")
          							flw_307:
/*<307>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 252, 'param3': 17}
/*<252>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          							goto flw_295
          						  case 1:
/*<615>*/ 							printf("Mugis Position wurde<pling> markiert.\nZelda ist allerdings nicht bei ihm.")
          							goto flw_307
          						}
          					}
          				  case 1:
          					goto flw_251
          				}
          			  case 1:
          				goto flw_251
          			}
          		  case 1:
          			goto flw_251
          		}
          	  case 1:
          		goto flw_251
          	}
          }

          void entrypoint_200_64() {
/*<261>*/ 	start()
/*<262>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<263>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<269>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<270>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<271>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<267>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 268, 'param3': 51}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 404, 'param3': 16}
/*<404>*/ 						printf("Die Aurasuche erfasst kein relevantes\nZiel mehr in dieser Gegend.\n\n\nIch empfehle, zum Häuptling\nzurückzukehren und mit ihm zu\nsprechen.")
          						flw_265:
/*<265>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 233, 'param3': 36}
/*<233>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 376, 'param3': 6}
/*<376>*/ 						set_camera(17, 0)
/*<375>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 378, 'param3': 17}
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 377, 'param3': 17}
/*<377>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 174, 'param3': 13}
/*<174>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<175>*/ 							printf("\x0E\x01\x09\x04\x00\x05Wie, du hast unseren Häuptling\ngetroffen? Dann ist der wohl doch\nnicht so gut im Verstecken...\n\n\x0E\x01\x09\x04\x00\x14Richtest du ihm aus, dass sich\n<b<Senbuli>> hier versteckt hat? Soll er\nmich ruhig suchen kommen!")
          							flw_407:
/*<407>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<173>*/ 							printf("\x0E\x01\x09\x04\x00\x04Unser Häuptling ist ein wahrer Meister\nim Verstecken! Den findest du\ngarantiert nicht, wetten?")
          							goto flw_407
          						}
          					  case 1:
          						flw_264:
/*<264>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 266, 'param3': 51}
/*<266>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 616, 'param3': 16}
/*<616>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<403>*/ 							printf("Senbulis Position wurde<pling> markiert.\nAber noch gibt es andere Kyu, die von\nder Aurasuche erfasst werden.")
          							goto flw_265
          						  case 1:
/*<617>*/ 							printf("Senbulis Position wurde<pling> markiert.\nZelda ist allerdings nicht bei ihm.")
          							goto flw_265
          						}
          					}
          				  case 1:
          					goto flw_264
          				}
          			  case 1:
          				goto flw_264
          			}
          		  case 1:
          			goto flw_264
          		}
          	  case 1:
          		goto flw_264
          	}
          }

          void entrypoint_200_99() {
/*<448>*/ 	start()
/*<449>*/ 	printf("Der vom Himmel herabstieg,\nschaut in den Himmel und\ndurchschießt den Stern, den\nVogelschwingen ihm weisen.")
          }

          void entrypoint_200_65() {
/*<634>*/ 	start()
/*<635>*/ 	printf("Die Pflanzen hier sind die gleichen wie\nim Wald von Phirone. Wir befinden uns\njetzt tief im Wald.\n\nLass uns nun die Suche nach Zelda\nfortsetzen.")
/*<646>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<647>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<272>*/ 	start()
/*<323>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter! In diesem Gebäude glaube\nich <b<Zeldas >>Aura zu erspüren.")
/*<324>*/ 	set_camera(13, 0)
/*<279>*/ 	set_camera(-1, 0)
/*<273>*/ 	printf("Gleichzeitig aber spüre ich die\nAura des Bösen. Viele Ungeheuer\nscheinen dort zu lauern. \n\nWillst du dennoch weitergehen?\n[1]Na klar![2]Lieber nicht...")
/*<274>*/ 	switch (choice(2)) {
          	  case 0:
/*<276>*/ 		printf("Pass nur auf dich auf.\nNiemand wird dir dort drinnen helfen.")
          		flw_280:
/*<280>*/ 		set_camera(14, 0)
/*<281>*/ 		printf("Wenn du Gefahr spürst, solltest du dich\nvielleicht <g<zurück in den Wolkenhort\nbegeben>>, um dich dort neu auszurüsten.")
/*<642>*/ 		set_camera(-1, 0)
/*<638>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<640>*/ 			printf("Ich empfehle dir, einen <r<Schild>> zu\ndeinem Schutz sowie <r<Herztränke \n>>mitzunehmen.")
          			flw_641:
/*<641>*/ 			printf("Und nun lass uns die Suche nach\nZelda fortsetzen.")
          		  case 1:
/*<639>*/ 			printf("\x0E\x01\x12\x04\x00\x01Gebieter...\nDu hast keinen <r<Schild>> ausgerüstet.\nIch empfehle dir, stets einen Schild\nbei dir zu tragen.")
          			goto flw_641
          		}
          	  case 1:
/*<275>*/ 		printf("Angst ist ein Beschützer.\nDas muss dir nicht peinlich sein...")
          		goto flw_280
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas\nzu berichten.\n\n\nIch spüre eine vertraute <pling><r<Aura>>.\n[1]Wirklich?[2]Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf("So ist es, \x0E\x01\x12\x04\x00\x05Gebieter.\nIch fühle den Stamm der <b<Kyu>>, der\nliebenswerten Bewohner dieses Waldes.\n\nSie sind klug und wissen vielleicht\netwas,<pause0F> aber Zelda scheint nicht hier zu\nsein.\n\nIch weiß nicht genau, weshalb ich\nihre Aura spüre. Ich empfehle daher,\nmit den Kyu zu sprechen.")
          		flw_134:
/*<134>*/ 		set_camera(10, 0)
/*<136>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 6}
          	  case 1:
/*< 17>*/ 		printf("Es besteht eine Wahrscheinlichkeit\nvon 5 %, dass es sich um Zelda handelt.\nEs dürften jedoch die <b<Kyu>> sein.\n\nDie Kyu sind die liebenswerten\nBewohner dieses Waldes. Sie sind klug\nund wissen vielleicht etwas.<pause0F>\n\nIch weiß nicht genau, weshalb ich\nihre Aura spüre. Ich empfehle daher,\nmit den Kyu zu sprechen.")
          		goto flw_134
          	}
          }

          void entrypoint_200_69() {
/*<656>*/ 	start()
/*<657>*/ 	printf("\x0E\x01\x12\x04\x00\x04Gebieter Link, rufe mich\njederzeit, wenn du Fragen hast oder\ndein Ziel aus den Augen verlierst,\nindem du (v) drückst.\x0E\x01\x11\x02\x9CD\nWähle dann <r<Hinweis>> und frage mich\nnach einem <r<Tipp>>. Je nach Lage kann\nich dir unterschiedliche Tipps geben,\ndie dir bestimmt nützlich sein werden.")
/*<663>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

