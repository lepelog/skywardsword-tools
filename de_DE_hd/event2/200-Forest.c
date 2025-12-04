          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Weg mit euch! Lasst mich in Ruhe!")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Ich bin nur ein Busch, nur ein Busch...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10012:0x00000001>Gebieter, ich empfehle, nachzusehen, ob es diesem\nLebewesen gut geht.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10012:0x00000001>Gebieter, wenn du dich jetzt entfernst, ist die\nÜberlebenschance dieses Wesens exakt 5 %.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 118 */ "")
          		flw_220:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 1, line: 121 */ "")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 1, line: 123 */ "")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 1, unk: 0, line: 119 */ "")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>Jetzt auch noch einer in grün?!?")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Ich bitte dich...\nVerschone meine Wenigkeit, bitte!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10009:0x0000000b>Was...\nWarum ist es plötzlich so ruhig?")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf(/* textboxtype: 0, unk: 1, line: 160 */ "Ich habe die Möglichkeit, eine Analyse über deine\nKampferfahrung mit den unterschiedlichen Monstern\ndieser Welt vorzunehmen, <0x10012:0x00000004>Gebieter.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	wait_frames(5)
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	wait_frames(10)
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf(/* textboxtype: 0, unk: 0, line: 161 */ "<color green<Visiere>coloroff> einen Gegner mit (Z) <color green<an>coloroff> und drücke (v),\num mich zu rufen. Ich werde dir Informationen\nzum Gegner und eine detaillierte Analyse liefern.<0x10011:0x07cd><0x10011:0x09cd>")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	wait_frames(15)
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 2, unk: 0, line: 23 */ "<0x10009:0x00000007>Vielen Dank, dass du <color blue<Machas >coloroff>Freunde alle\ngefunden hast!\n\n\n<0x10009:0x00000013>Aber deine Freundin ist noch immer nicht\naufgetaucht, oder? Du musst sie schnell finden!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000007>Unserem Häuptling geht es gut?\nUnd er war gar nicht so weit weg?\nDas ist Musik in <color blue<Machas>coloroff> Ohren...\n\n<0x10009:0x00000013>Aber deine Freundin war nicht bei ihm...")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Sag unserem Häuptling, dass es <color blue<Macha >coloroff>gut\ngeht! Deine Freundin ist sicher bei ihm...")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "Wie, du hast mich schon wieder aufgespürt?")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10008:0x02cd>Ich...")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "Wie? Du machst ja gar nichts!\nUnd eigentlich hast du es ja vorhin\nden roten Kerlen gezeigt...")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000001><color blue<Macha>coloroff>, das ist mein Name! Danke dir, \nBruder, dass du Macha gerettet hast! \nDas hätte Macha dir gar nicht zugetraut...")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10009:0x00000005>Da fällt <color blue<Macha>coloroff> ein, gerade erst vor Kurzem\nwar hier eine, die so ähnlich aussah wie du...\n\n[1-]Zelda?!?[2-]Wer?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>War das etwa eine Freundin von dir?\nDas war ganz schön übel...")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10009:0x0000000a>Sie wurde plötzlich von den roten Kerlen\nangegriffen und ist dann mit unserem\n<sound 4><color blue<Häuptling >coloroff>geflohen!")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000004>Woher soll <color blue<Macha>coloroff> das wissen?\nAuf jeden Fall war es ziemlich übel...")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 124 */ "Ich fühle hier eine starke Aura.\nIch empfehle, hier deine Suche fortzusetzen.")
          }

          void entrypoint_200_71() {
/*<643>*/ 	start()
/*<644>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 645, 'param3': 51}
/*<645>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 646, 'param3': 16}
/*<646>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 647, 'param3': 17}
/*<647>*/ 	set_camera(40, 0)
/*<648>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000007>Du hast alle von uns gefunden?\nStarke Leistung, mein Freund!\n\n\n<0x10009:0x00000013>Aber noch fühlt sich <color blue<Kombu>coloroff> hier nicht sicher.\nAll diese Monster... Kombu wird hier noch\netwas Wurzeln schlagen...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Unserem Häuptling geht es gut?\nDas sieht ihm ähnlich! Aber trotzdem,\n<color blue<Kombu>coloroff> bleibt lieber noch etwas hier.")
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10009:0x00000004>Sag doch lieber dem Häuptling\nBescheid, dass es <color blue<Kombu>coloroff> gut geht hier.\nKombu wird sich jetzt noch etwas vergraben...")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Uh, du darfst mich nicht essen!\n<color blue<Kombu >coloroff>ist nämlich völlig geschmacklos!\nUh, uh... Renn lieber weg!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>Was? Unser Häuptling hat sich Sorgen\ngemacht? Es geht ihm also gut...")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>Mein Name ist <color blue<Kombu>coloroff>! Schön, oder?\nSag mal, kannst du unserem Häuptling\nausrichten, dass es Kombu gut geht?\n\n<0x10009:0x0000000f>Die Gefahr scheint hier noch nicht\nvorbei zu sein... Kombu geht lieber\nmal wieder auf Tauchstation!")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00000005>Was?!?\nDu siehst eigentlich nicht aus wie ein\nUngeheuer...\n\nEin blondes Mädchen?<pause 15> <0x10009:0x00000013>Kombu hat seinen Kopf\nim Boden vergraben und daher nichts gesehen...")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 125 */ "Ich fühle keine Gegner mehr in der Umgebung.\nDu kannst den Kyu im Baum daher gefahrlos\nherunterholen.\n\nAllerdings scheint er sich nicht bewegen zu können.\nDu müsstest dir etwas überlegen.\n\n\n<0x10012:0x00000001>Gebieter, du kannst deine Optionen immer durch\nDrücken von <icon 19> überprüfen.<0x10011:0x0bcd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>Allen anderen geht es gut?\nWie beneidenswert!\n\n\n<0x10009:0x0000000b><color blue<Mugi>coloroff> wird noch etwas hierbleiben.\nHier scheint es sicher zu sein...")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>Dem Häuptling geht es gut?\nWer hätte das gedacht...\n\n\n<0x10009:0x00000013><color blue<Mugi>coloroff> geht es hingegen noch gar nicht so gut!\nAll diese Monster... Brauche Ruhe...")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10009:0x00000004><color blue<Mugi>coloroff> braucht jetzt etwas Ruhe.\nSag unserem Häuptling, wo sich Mugi\naufhält, ja?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>Autsch, autsch!<pause 30>\n...Aber trotzdem danke!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000005>Was? Unser Häuptling hat sich um <color blue<Mugi\n>coloroff>gesorgt? Irgendwie rührt das Mugi ja...")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001><color blue<Mugi>coloroff>, das ist natürlich mein Name!\nWir nennen uns alle bei unserem\nNamen, das ist viel persönlicher!\n\n<0x10009:0x00000013>Sagst du dem Häuptling, dass es Mugi\ngut geht? Bin noch etwas schwach auf\nden Beinen, aber das wird schon wieder...")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000005>Wie? Du suchst ein Mädchen?\n<color blue<Mugi>coloroff> kennt keine Mädchen...\n\n\n<0x10009:0x00000004>Aber unser Häuptling, der kennt sich mit\nMädchen aus! Frag den doch mal!")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>Uff!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			wait_frames(60)
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 47 */ "<0x10009:0x0000000b>Du hast die roten Kerle weggeputzt!\nBist du etwa...<pause 15> einer von den Guten?!?\n\n\n<0x10009:0x00000013>In diesem Fall könntest du <color blue<Mugi>coloroff> gleich\nmal helfen: Mugi steckt hier nämlich fest!\nKannst du Mugi helfen?")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 128 */ "Ich empfehle, deinen Fortschritt zu speichern, bevor\ndu Zelda in den Tempel am Ende des Waldes folgst.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "Ich spüre keine Präsenz anderer Kyu mehr in\ndieser Gegend.\n\n\nIch empfehle, zum Häuptling zu gehen und mit\nihm zu reden.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf(/* textboxtype: 1, unk: 1, line: 129 */ "Von hier aus hast du einen freien Blick.\nIch empfehle, die Kyu von hier aus mit\nder Aurasuche zu erspüren.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf(/* textboxtype: 1, unk: 1, line: 126 */ "In dieser Umgebung spüre ich die Aura\nZeldas kaum. Ich empfehle daher, an\neinem anderen Ort weiterzusuchen.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf(/* textboxtype: 2, unk: 1, line: 177 */ "<0x10009:0x00181705>Was ist los? Du scheinst mich etwas\nfragen zu wollen... Was ist es denn?\n[1-]Über das\nArtefakt[2-]Über den\nTempel[3]Nichts")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf(/* textboxtype: 0, unk: 2, line: 178 */ "<0x10009:0x00161e04>Mit dem Licht deines Schwertes kannst du\ndie Artefakte in den Himmel befördern.\n\n\nDen alten Schriften zufolge liegen sie\nüberall in Erdland verstreut.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>Den alten Schriften zufolge befindet sich in\ndieser Gegend der Tempel des Himmelsblicks.\n\n\nFür einen, der aus den Wolken kam, scheint mir\ndies ein angemessener Ort zu sein...")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf(/* textboxtype: 2, unk: 1, line: 180 */ "<0x10009:0x00001707>Da fällt mir ein, irgendwo dort steht eine\nalte Steintafel.\n\n\n<0x10009:0x00160b00>Dort steht etwas geschrieben...<pause 15>\nWenn ich mich nicht täusche, ist das\nein Hinweis auf den Eingang!")
          				goto flw_596
          			}
          		  case 2:
/*<597>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<591>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<452>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 451, 'param3': 32}
          				flw_451:
/*<451>*/ 				printf(/* textboxtype: 2, unk: 1, line: 174 */ "<0x10009:0x00ffff00>Dieses Artefakt besteht aus einem Metall,\ndas ich so noch nie gesehen habe. Es ist\nvöllig unempfindlich gegen Schläge...")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf(/* textboxtype: 0, unk: 2, line: 175 */ "<0x10009:0x00160b07>Ich frage mich, was die alten Schriften mit dem\n<color red<Strahl des himmlischen Schwertes >coloroff>meinen...\n\n\n<0x10009:0x00001705>Fällt dir dazu etwas ein?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				wait_frames(30)
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					wait_frames(30)
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>Das hier...<pause 15>\nEs heißt, dass die Göttin diese Steine für\neinen Helden hier zurückgelassen habe.\n\nIch nenne sie<pause 30> <color blue<Artefakte der Göttin>coloroff>!\nEin Name wie in Stein gemeißelt,\nfindest du nicht auch?")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf(/* textboxtype: 2, unk: 1, line: 168 */ "<0x10009:0x00001e04>Den alten Schriften zufolge...\n\n\n\nIhnen zufolge muss der Strahl des himmlischen\nSchwertes<pause 30> den Stein treffen, um den Herrn des\nSchwertes<pause 30> zu stärken...")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf(/* textboxtype: 0, unk: 2, line: 169 */ "<0x10009:0x0018170b>Du hast doch ein Schwert?\nDann hilf mir bitte, das Rätsel dieses\nArtefakts zu lösen.\n\nDu willst doch ein Held sein, oder?\n[1-]Ja[2-]Nein")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>Das wollte ich hören!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf(/* textboxtype: 2, unk: 1, line: 171 */ "<0x10009:0x0018170c>Komm schon, tu es für die Wissenschaft!\n[1-]Na gut![2-]Lieber nicht...")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf(/* textboxtype: 0, unk: 2, line: 172 */ "<0x10009:0x00080007>Jetzt komm schon! Du musst es ja nicht\numsonst tun...")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>Jetzt kannst du nicht mehr ablehnen!")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf(/* textboxtype: 0, unk: 2, line: 166 */ "<0x10009:0x00171908>Du kommst mir gerade recht!\n\n\n\nSieh mal, an diesem Ort habe ich Teile\nder alten Schrift entdeckt!")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf(/* textboxtype: 2, unk: 1, line: 165 */ "<0x10009:0x00000001>Hey, Kleiner!\nKomm mal schnell zu mir!")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>Wie geht es dir, Kleiner?\nHast wohl einen steinigen Weg hinter dir, was?\n\n\nGerade jetzt könnte ich deine Hilfe gebrauchen.\nKomm doch mal her!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000013>Wie, du hast alle gefunden?\nDu scheinst Langeweile zu haben...")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000005>Und <color blue<Senbuli>coloroff> dachte, er habe endlich\ndas perfekte Versteck gefunden!\nWieder nichts...")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>Aber unseren Häuptling hast du ja\nauch gefunden... Du bist wirklich ein\nMeister im Aufspüren, Fremder!")
          			  case 1:
/*<174>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000014>Aber unseren Häuptling, den findet\nniemand, jawohl!")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>Da sucht man sich so ein tolles Versteck\nund wird trotzdem gefunden!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000001>Mein Name ist <color blue<Senbuli>coloroff>!\nUnd Senbuli ist fast so gut im Verstecken\nwie unser Häuptling!")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000002>Zelda? Die ist in den Tempel am Ende\ndes Waldes...")
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "Die <color yellow<Schleuder>coloroff> wirst du benötigen, um in den\nTempel am Ende des Waldes zu gelangen.\n\n\n<0x10009:0x00000006>Sieh zu, dass du deine Freundin findest,\nmein Kleiner! Ho-ho-ho!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Stell dich auf meinen Rücken und\ngreife nach dem Ding dort!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>Spring auf meinen Rücken und greife\nnach dem Ding dort!")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x0000000a>So, so, es geht also allen gut?\nDas hört man gerne!\nVielen Dank, du unermüdlicher Aufstöberer!")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, hier war ein Mädchen mit blondem Haar...\nSie war bei mir.")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002>Dieses Mädchen namens Zelda hat gesagt,\ndass es in den Tempel am Ende des Waldes\ngehen müsse...\n\nIch habe ja noch versucht, sie davon abzuhalten,\naber sie ist auf meinen Rücken geklettert und\nab in den Tempel...")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					wait_frames(15)
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					wait_frames(30)
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000003>Wenn du da hinten weiter gehst, wirst du\nauf einen Tempel stoßen...<pause 15>\nAllerdings wimmelt es dort von Ungeheuern...")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					wait_frames(15)
/*<126>*/ 					printf(/* textboxtype: 2, unk: 0, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>Nun denn...\n\n\n\nDu hast meine Gefährten aufgespürt.\nDafür gebührt dir Dank...\n\n\n<0x10009:0x00000008>Einen Moment!\nEntschuldigung...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000009>Dann verrate ich dir als Dank, wo deine\nFreundin hingegangen ist!")
          					goto flw_567
          				}
          			}
          		}
          	  case 1:
/*<145>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<146>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<147>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<148>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<381>*/ 						wait_frames(20)
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<150>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<196>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_382
          						  case 1:
/*<640>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_565
          						}
          					}
          				  case 1:
/*<177>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<179>*/ 						printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x00000003>Macha, Mugi und Kombu geht es also gut?\n\n\n\nEntschuldige, aber <color red<einen>coloroff> musst du noch finden,\ndamit ich mich beruhigen kann. Würdest du ihn\nfür mich suchen?\n\n<0x10009:0x00000002>Dieser Gefährte hat die Gabe, sich wie ein\nBusch zu tarnen. Am besten suchst du ihn\ndaher dort...\n\nUnd wenn du ihn findest, erinnere ich mich\nvielleicht wieder, wo deine Freundin hin ist...")
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<501>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000003>Sieh an... Du hast also Macha, Kombu und Mugi\ngefunden, und es geht ihnen gut? Aber noch ist\nder Wald voller Ungeheuer!\n\nIch kann unmöglich weg von hier.")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000008>Tut mir ja leid, aber ich warte noch immer auf\nNachricht von <color red<einem >coloroff>Gefährten...\n\n\nEr hat die Gabe, sich wie ein Busch zu tarnen.\nAm besten ist es daher, ihn bei den Büschen\nzu suchen.\n\n<0x10009:0x00000002>Wenn du ihn findest, erinnere ich mich\nvielleicht wieder, wo deine Freundin\nabgeblieben ist...")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_383
          							}
          						  case 1:
          							goto flw_503
          						}
          					}
          				}
          			  case 1:
/*<180>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<181>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<184>*/ 						printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10009:0x00000003>Macha, Kombu und Senbuli geht es also gut?\n\n\n\nEntschuldige, aber <color red<einen>coloroff> musst du noch finden\ndamit ich mich beruhigen kann. Würdest du ihn\nfür mich suchen?\n\n<0x10009:0x00000002>Dieser Gefährte hat die Gabe, sich in\nBaumkronen zu verstecken. Am besten\nsuchst du ihn daher dort...\n\nUnd wenn du ihn findest, erinnere ich mich\nvielleicht wieder, wo deine Freundin hin ist...")
          					  case 1:
/*<213>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<508>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10009:0x00000003>Sieh an... Macha, Kombu und Senbuli\ngeht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann unmöglich weg von hier.")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000008>Entschuldige, aber <color red<einen>coloroff> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n<0x10009:0x00000002>Dieser Gefährte hat die Gabe, sich in\nBaumkronen zu verstecken. Am besten\nsuchst du ihn daher dort...\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf(/* textboxtype: 1, unk: 2, line: 78 */ "<0x10009:0x00000003>Macha und Kombu geht es also gut...\nAber was ist mit den anderen Gefährten?\n\n\nTut mir leid, aber <color red<zwei>coloroff> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n<0x10009:0x00000008>Deine Freundin? Die könnte rechts\nlanggegangen sein! Oder doch links?\nHmmm...")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<517>*/ 							printf(/* textboxtype: 2, unk: 0, line: 77 */ "<0x10009:0x00000003>So, so...\nMacha und Kombu geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000002>Tut mir leid, aber <color red<zwei>coloroff> meiner Gefährten musst\ndu noch finden, um mich zu beruhigen.\n\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen ist...")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_385
          							}
          						  case 1:
          							goto flw_521
          						}
          					}
          				}
          			}
          		  case 1:
/*<185>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<186>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<187>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf(/* textboxtype: 1, unk: 2, line: 81 */ "<0x10009:0x00000003>Macha, Mugi und Senbuli\ngeht es also gut?\n\n\nEntschuldige, aber <color red<einen>coloroff> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n<0x10009:0x00000002>Dieser Gefährte hat die Gabe, sich als\nGrasbüschel zu tarnen. Du weißt also,\nwonach du suchen musst!\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<526>*/ 							printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10009:0x00000003>So, so... Macha, Mugi und Senbuli geht\nes also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000008>Entschuldige, aber <color red<einen>coloroff> musst du noch\nfinden, damit ich mich beruhigen kann.\nWürdest du ihn für mich suchen?\n\n<0x10009:0x00000002>Dieser Gefährte hat die Gabe, sich als\nGrasbüschel zu tarnen. Du weißt also,\nwonach du suchen musst!\n\nUnd wenn du ihn findest, erinnere ich\nmich vielleicht wieder, wo deine\nFreundin hin ist...")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000003>Macha und Mugi geht es also gut...\nAber was ist mit den anderen Gefährten?\n\n\nTut mir leid, aber <color red<zwei>coloroff> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n<0x10009:0x00000008>Deine Freundin? Die könnte rechts\nlanggegangen sein! Oder doch links?\nHmmm...")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<535>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "<0x10009:0x00000003>So, so...\nMacha und Mugi geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Tut mir leid, aber <color red<zwei>coloroff> meiner Gefährten musst\ndu noch finden, um mich zu beruhigen.\n\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen ist...")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_387
          							}
          						  case 1:
          							goto flw_539
          						}
          					}
          				}
          			  case 1:
/*<190>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<191>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<194>*/ 						printf(/* textboxtype: 1, unk: 2, line: 87 */ "<0x10009:0x00000003>Macha und Senbuli geht es also gut...\nAber was ist mit den anderen Gefährten?\n\n\nTut mir leid, aber <color red<zwei>coloroff> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n<0x10009:0x00000008>Deine Freundin? Die könnte rechts\nlanggegangen sein! Oder doch links?\nHmmm...")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<544>*/ 							printf(/* textboxtype: 2, unk: 0, line: 86 */ "<0x10009:0x00000003>So, so...\nMacha und Senbuli geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000002>Tut mir leid, aber <color red<zwei>coloroff> meiner Gefährten musst\ndu noch finden, um mich zu beruhigen.\n\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen ist...")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00000003>Macha geht es also gut...\nAber was ist mit den anderen Gefährten?\n\n\nTut mir leid, aber <color red<drei>coloroff> von ihnen musst\ndu noch finden, um mich zu beruhigen.\n\n\n<0x10009:0x00000008>Deine Freundin? Wo die nur hin ist?\nMeine Erinnerung...")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Ho-ho-ho!<pause 15>\nKennst du mich? Ich bin <color blue<Roiboss>coloroff>,\nder Häuptling der Kyu!\n\nDu hast es tatsächlich geschafft,\nmeine perfekte Tarnung zu durchschauen.\nIch bin beeindruckt...<pause 15>\n\nWer so etwas schafft, hat ein Anliegen.\nWas ist deines?\n[1-]Nach Zelda\nfragen[2-]Nachricht\nüberbringen")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...<pause 15>\n\n\n\nAch, meinst du etwa das Mädchen mit\nden blonden Haaren, das dir etwas\nähnlich sieht? Sie war bei mir!\n\n<0x10009:0x0000000c>Allerdings habe ich im Moment gar keinen\nKopf für so etwas... Der Wald ist voller\nMonster und zwielichtiger Gestalten!\n\nIch sorge mich um die Angehörigen\nmeines Stammes...")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Was?!?\nBist du etwa Mitgliedern meines\nStammes begegnet?")
/*<553>*/ 							printf(/* textboxtype: 2, unk: 0, line: 89 */ "<0x10009:0x00000003>So, so...\nMacha geht es also gut...\n\n\nAber noch ist der Wald voller Monster!\nIch kann hier nicht weg...")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000002>Tut mir leid, aber <color red<drei>coloroff> meiner Gefährten musst\ndu noch finden, um mich zu beruhigen.\n\n\nVielleicht fällt mir dann wieder ein,\nwas mit deiner Freundin geschehen ist...")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Was sagst du da?\nDu suchst ebenfalls nach jemandem?\n\n\nNun, ein Mädchen mit blondem Haar\nwar gerade erst vorhin bei mir.\n\n\n<0x10009:0x0000000c>Aber im Augenblick habe ich ganz\nandere Sorgen. Der Wald ist außer\nRand und Band! Meine Gefährten!\n\nÜber diesen Schlamassel habe ich das\nblonde Mädchen ganz vergessen...")
          								goto flw_389
          							}
          						  case 1:
          							goto flw_557
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10012:0x00000004>Gebieter, ich möchte dir etwas zum Gebrauch von\nItems erklären.\n\n\nDie <color yellow<Schleuder>coloroff>, die du zuvor erhalten hast,\nkannst du jederzeit <color green<schnell hervorholen>coloroff>,\nindem du kurz <icon 41> drückst.<0x10011:0x0fcd>\n\nFalls du einmal vergisst, wie das geht, brauchst du\nnur <icon 37> zu drücken, um die <color red<Hilfe>coloroff> aufzurufen und\nnachzusehen!<0x10011:0x0bcd>")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Gebieter. Wir sind im <color blue<Wald von Phirone >coloroff>angekommen.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10012:0x00000004>Gebieter! Meiner Analyse zufolge besteht eine\nWahrscheinlichkeit von 80 %, dass bei diesem\nSee dort eine Flamme zu finden ist.")
          	  case 1:
/*<587>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10012:0x00000004>Gebieter, mit einer Wahrscheinlichkeit von 80 %\nbefindet sich hinter diesem Tor eine Flamme.\n\n\nDie Kraft der Göttin, von der dir der Kyu-Einsiedler\nerzählt hat, ist wohl der <color red<Himmelsstrahl>coloroff>.\n\n\nEr vervollständigt das Siegel.\nIch empfehle, den Himmelsstrahl zu sammeln\nund vor dem Tor das <color green<Muster zu zeichnen>coloroff>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x004b0000>Um diesen riesigen Baum herum gedeiht ein\nprächtiges Land.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf(/* textboxtype: 0, unk: 2, line: 163 */ "<0x10009:0x00000001>Hey, da bist du ja wieder!\nSchön, dich zu sehen!")
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<131>*/ 	start()
/*<211>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<572>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 625, 'param3': 13}
/*<625>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<627>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<626>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<571>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<318>*/ 	start()
/*<319>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10005:0x004b0000>Alle möglichen Lebewesen haben hier ihr\nZuhause gefunden.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Nicht so schnell, Kleiner!\n\n\n\nDas Rätsel des Artefakts der Göttin will gelöst\nwerden, da kannst du nicht einfach weglaufen!\nDenk doch mal an die Wissenschaft!")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Warte, nicht weglaufen!\nIch möchte dich um etwas\nbitten...")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Hey, stehengeblieben!\n\n\n\n<0x10009:0x00170600>Ich weiß genau, dass du mich gesehen hast!<pause 15>\nWas ist, magst du mich etwa nicht?\n[1-]Entschuldigung![2-]Gut geraten!")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Ich weiß ja, dass du deine Freundin suchst.\nIch wollte dich ja auch nicht aufhalten...\n\n\nAber könntest du mir kurz helfen?")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Hm, das trifft mich jetzt...\n\n\n\nAber wir Forscher waren zu allen Zeiten\nverkannt... Wie dem auch sei, könntest du\nmir kurz helfen?")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	wait_frames(27)
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	wait_frames(24)
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10012:0x00000004>Gebieter! Ich habe neue Informationen zu Zelda.\n\n\n\nEs scheint, als sei Zelda von dem Bösen angegriffen\nworden und nur knapp entkommen...<pause 15>\nDie Lage ist sehr ernst.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	wait_frames(15)
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf(/* textboxtype: 1, unk: 1, line: 135 */ "<sound 4>Machas Position wurde markiert.\nSieh sie dir auf deiner Karte an.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	wait_frames(15)
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "Dieses Lebewesen hat Zelda getroffen, daher habe ich\nihre Aura wohl hier gespürt.\n\n\nAuch der Häuptling der Kyu, der gemeinsam mit\nZelda geflohen ist, hat mit einer Wahrscheinlichkeit\nvon 85 % auf die Aurasuche reagiert.\n\nIch empfehle, weiter nach der Aura Zeldas zu suchen.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	wait_frames(21)
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	wait_frames(30)
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "<0x10009:0x0000000d>Ah, hat das <color blue<Macha>coloroff> erschreckt!\nDu hast schon komische Freunde...")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Wenn du deine Freundin und unseren\n<color blue<Häuptling >coloroff>findest, dann sage ihnen,\n<color red<dass es Macha gut geht>coloroff>!\n\n<0x10009:0x00000005>Macha ist sich absolut sicher, dass die\nbeiden zusammen sind!")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>Damit solltest du in der Lage sein,\nin den Tempel zu gelangen...")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000008>Warum versuchst du nicht gleich mal,\ndiese Ringelranke dort anzuvisieren...\n<pause 15>Was?!?\n\nNicht so eilig!<pause 15>\nIch erkläre dir, wie's geht!")
          		flw_365:
/*<365>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Drücke zuerst <icon 41>, um die Schleuder\nzu zücken. Drücke und halte dann <icon 41>,\num die Schleuder zu spannen und lasse <icon 41>\nschließlich los, um einen Schuss abzufeuern.<0x10011:0x0fcd>\nWenn du keine Munition mehr hast, kannst du\ndie <color green<Kerne>coloroff> dieser Bäume hier <color green<aufsammeln>coloroff>!")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Sieh zu, dass du deine Freundin bald findest,\nmein Kleiner! Ho-ho-ho!")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Sieh zu, dass du deine Freundin bald findest,\nmein Kleiner! Ho-ho-ho!")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000008>Warum versuchst du nicht gleich mal,\ndiese Ringelranke dort anzuvisieren?")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10005:0x004b0000>Ich fühle, dass auch Zelda sich irgendwo hier aufhält.\n\n\n\n<0x10005:0x004b0000>Ich schlage vor, sie mit der Aurasuche aufzuspüren.")
/*<609>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<610>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<422>*/ 	start()
/*<426>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 428, 'param3': 46}
/*<428>*/ 	set_camera(35, 0)
/*<438>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<491>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<490>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Nicht so schnell, Kleiner!\n\n\n\nDas Rätsel des Artefakts der Göttin will gelöst\nwerden, da kannst du nicht einfach weglaufen!\nDenk doch mal an die Wissenschaft!")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Warte, nicht weglaufen!\nIch möchte dich um etwas\nbitten...")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Hey, stehengeblieben!\n\n\n\n<0x10009:0x00170600>Ich weiß genau, dass du mich gesehen hast!<pause 15>\nWas ist, magst du mich etwa nicht?\n[1-]Entschuldigung![2-]Gut geraten!")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Ich weiß ja, dass du deine Freundin suchst.\nIch wollte dich ja auch nicht aufhalten...\n\n\nAber könntest du mir kurz helfen?")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Hm, das trifft mich jetzt...\n\n\n\nAber wir Forscher waren zu allen Zeiten\nverkannt... Wie dem auch sei, könntest du\nmir kurz helfen?")
          			goto flw_446
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<616>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 377, 'param3': 51}
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 199, 'param3': 17}
/*<199>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 197, 'param3': 16}
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Der Häuptling ist leider nicht mehr in Zeldas Nähe.<pause 15>\nAber ich bin sicher, dass er etwas weiß.\n\n\nWenn du die versteckten Kyu suchst, besteht eine\nWahrscheinlichkeit von 85 %, dass du von ihm etwas\nüber Zelda erfährst.\n\nIch habe die <sound 4><color red<Präsenz der Kyu >coloroff>zu deiner Aurasuche\nhinzugefügt.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf(/* textboxtype: 1, unk: 1, line: 138 */ "Soll ich dir erklären, wie du das Ziel deiner Aurasuche\nfestlegen kannst?\n[1-]Ja[2]Nein")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "Wenn du (^) gedrückt hältst, bekommst du mögliche\nZiele deiner Aurasuche angezeigt.<0x10011:0x08cd>\n\n\nWähle das Ziel, nach dem du suchen möchtest,\nund lass (^) los, um es zu registrieren.<0x10011:0x08cd>\n\n\nWenn du nichts suchen willst, wähle <color green<Umsehen>coloroff> aus\nund lasse (^) los, um deine Auswahl zu bestätigen.\n[1-]Noch einmal.[2]Verstanden!")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "Bereits gefundene Kyu sind auf der Karte markiert\nund werden von der Aurasuche nicht mehr erfasst.\n\n\nBeginne jetzt mit der Suche.")
/*<613>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<614>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 615, 'param3': 36}
/*<615>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_617
          	}
          }

          void entrypoint_200_44() {
/*<334>*/ 	start()
/*<335>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<423>*/ 	start()
/*<424>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>Wuah!\nDas Artefakt ist gen Himmel gestiegen!\n\n\n<0x10009:0x00131b00>Die Kraft deines Schwertes scheint das bewirkt\nzu haben!\n\n\n<0x10009:0x00001b05>Wohin es wohl verschwunden ist?\nDas Rätsel ist gar noch rätselhafter geworden...\n\n\n<0x10009:0x00161e00>Den alten Schriften zufolge sind die Artefakte\nder Göttin über das ganze Land verstreut.\n\n\n<0x10009:0x00001700>Du solltest sie alle auf diese Weise in den\nHimmel schicken. Sag mir Bescheid, wenn du\netwas mehr darüber herausgefunden hast.")
/*<482>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<233>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<238>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<239>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<240>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<677>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<651>*/ 						set_camera(16, 0)
/*<235>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 268, 'param3': 17}
/*<268>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 269, 'param3': 13}
/*<269>*/ 						wait_frames(27)
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "Die Aurasuche erfasst kein relevantes Ziel mehr in\ndieser Gegend.\n\n\nIch empfehle, zum Häuptling zurückzukehren und mit\nihm zu sprechen.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						wait_frames(21)
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000014>Was?!?\nJag <color blue<Kombu>coloroff> doch keine Angst ein,\ndu grüne Vogelscheuche!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						wait_frames(27)
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf(/* textboxtype: 0, unk: 1, line: 142 */ "Kombus Position wurde<sound 4> markiert.\nZelda ist allerdings nicht bei ihm.")
/*<674>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 675, 'param3': 17}
/*<675>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						goto flw_271
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_10() {
/*<288>*/ 	start()
/*<578>*/ 	set_camera(-1, 0)
/*<579>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 580, 'param3': 40}
/*<580>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 581, 'param3': 13}
/*<581>*/ 	wait_frames(60)
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	wait_frames(75)
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000007>Hey, ich bin's!\nHast du deine Freundin denn schon gefunden?\n[1-]Wer bist du?[2-]Leider nicht.")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10009:0x00000013>Wie, du kennst <color blue<Macha>coloroff> nicht mehr?\nDas ist eine Enttäuschung...")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000007>Endlich hat <color blue<Macha>coloroff> seine Freunde alle\nwiedergefunden. Vielen Dank, mein Freund!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10009:0x00000005>Mach's gut!\nUnd sieh zu, dass du deine Freundin findest!")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Das ist schade...\nAber wenigstens scheinst du zu wissen,\nin welche Richtung sie gegangen ist.")
          		goto flw_297
          	}
          }

          void entrypoint_200_63() {
/*<241>*/ 	start()
/*<242>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<247>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<249>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<668>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<655>*/ 						set_camera(27, 0)
/*<244>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 274, 'param3': 35}
/*<274>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 272, 'param3': 17}
/*<272>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 273, 'param3': 13}
/*<273>*/ 						wait_frames(28)
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "Die Aurasuche erfasst kein relevantes Ziel mehr in\ndieser Gegend.\n\n\nIch empfehle, zum Häuptling zurückzukehren und mit\nihm zu sprechen.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						wait_frames(21)
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000d>Hey, was soll das?\nErschrecke doch <color blue<Mugi>coloroff> nicht so!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						wait_frames(28)
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf(/* textboxtype: 1, unk: 2, line: 144 */ "Mugis Position wurde<sound 4> markiert.\nZelda ist allerdings nicht bei ihm.")
/*<666>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 661, 'param3': 17}
/*<661>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						goto flw_275
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_64() {
/*<250>*/ 	start()
/*<251>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<255>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<256>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<257>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<659>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<652>*/ 						set_camera(38, 0)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 254, 'param3': 51}
/*<254>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 376, 'param3': 16}
/*<376>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "Die Aurasuche erfasst kein relevantes Ziel mehr in\ndieser Gegend.\n\n\nIch empfehle, zum Häuptling zurückzukehren und mit\nihm zu sprechen.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						wait_frames(21)
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10009:0x00000005>Wie, du hast unseren Häuptling getroffen?\nDann ist der wohl doch nicht so gut\nim Verstecken...\n\n<0x10009:0x00000014>Richtest du ihm aus, dass sich <color blue<Senbuli\n>coloroff>hier versteckt hat? Soll er mich ruhig\nsuchen kommen!")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>Unser Häuptling ist ein wahrer Meister\nim Verstecken! Den findest du garantiert\nnicht, wetten?")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf(/* textboxtype: 2, unk: 0, line: 146 */ "Senbulis Position wurde<sound 4> markiert.\nZelda ist allerdings nicht bei ihm.")
          						goto flw_252
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_99() {
/*<420>*/ 	start()
/*<421>*/ 	printf(/* textboxtype: 2, unk: 1, line: 189 */ "Der vom Himmel herabstieg,\nschaut in den Himmel und\ndurchschießt den Stern, den\nVogelschwingen ihm weisen.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf(/* textboxtype: 1, unk: 0, line: 158 */ "Die Pflanzen hier sind die gleichen wie im Wald\nvon Phirone. Wir befinden uns jetzt tief im Wald.\n\n\nLass uns nun die Suche nach Zelda fortsetzen.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 1, line: 150 */ "<0x10012:0x00000004>Gebieter! In diesem Gebäude glaube ich <color blue<Zeldas >coloroff>Aura\nzu erspüren.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "Gleichzeitig aber spüre ich die Aura des Bösen.\nViele Ungeheuer scheinen dort zu lauern.\n\nWillst du dennoch weitergehen?\n[1-]Na klar![2-]Lieber nicht...")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Pass nur auf dich auf.\nNiemand wird dir dort drinnen helfen.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 154 */ "Wenn du Gefahr spürst, solltest du dich vielleicht\n<color green<zurück in den Wolkenhort begeben>coloroff>, um dich dort\nneu auszurüsten.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf(/* textboxtype: 1, unk: 1, line: 156 */ "Ich empfehle dir, einen <color red<Schild>coloroff> zu deinem\nSchutz sowie <color red<Herztränke >coloroff>mitzunehmen.")
          			flw_606:
/*<606>*/ 			printf(/* textboxtype: 0, unk: 1, line: 157 */ "Und nun lass uns die Suche nach Zelda fortsetzen.")
          		  case 1:
/*<604>*/ 			printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10012:0x00000001>Gebieter...\nDu hast keinen <color red<Schild>coloroff> ausgerüstet.\nIch empfehle dir, stets einen Schild bei dir zu tragen.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 1, unk: 1, line: 153 */ "Angst ist ein Beschützer.\nDas muss dir nicht peinlich sein...")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu berichten.\n\n\n\nIch spüre eine vertraute <sound 4><color red<Aura>coloroff>.\n[1-]Wirklich?[2-]Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 113 */ "So ist es, <0x10012:0x00000005>Gebieter.\nIch fühle den Stamm der <color blue<Kyu>coloroff>,\nder liebenswerten Bewohner dieses Waldes.\n\nSie sind klug und wissen vielleicht etwas,<pause 15>\naber Zelda scheint nicht hier zu sein.\n\n\nIch weiß nicht genau, weshalb ich ihre Aura spüre.\nIch empfehle daher, mit den Kyu zu sprechen.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "Es besteht eine Wahrscheinlichkeit von 5 %, dass es\nsich um Zelda handelt. Es dürften jedoch die <color blue<Kyu>coloroff> sein.\n\n\nDie Kyu sind die liebenswerten Bewohner dieses\nWaldes. Sie sind klug und wissen vielleicht etwas.<pause 15>\n\n\nIch weiß nicht genau, weshalb ich ihre Aura spüre.\nIch empfehle daher, mit den Kyu zu sprechen.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf(/* textboxtype: 1, unk: 1, line: 159 */ "<0x10012:0x00000004>Gebieter <heroname>, rufe mich jederzeit,\nwenn du Fragen hast oder dein Ziel aus den Augen\nverlierst, indem du (v) drückst.\n<0x10011:0x09cd>\nWähle dann <color red<Hinweis>coloroff> und frage mich nach einem <color red<Tipp>coloroff>.\nJe nach Lage kann ich dir unterschiedliche Tipps\ngeben, die dir bestimmt nützlich sein werden.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

