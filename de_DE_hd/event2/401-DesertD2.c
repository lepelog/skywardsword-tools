          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf("Du hast beide Stromschalter betätigt.\nJetzt kannst du den Maschinenraum\ndurchqueren und hierherkommen.\nKomm schnell und hilf uns hier raus!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf("Du hast einen Stromschalter betätigt?\nDu musst noch einen weiteren aktivieren,\num in den Maschinenraum zu gelangen.\n\nBetätige noch einen <r<Stromschalter>> und\nhol mich hier raus!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf("Du musst mir helfen! Zuerst musst\ndu die <r<Energieversorgung für den\nMaschinenraum>> wiederherstellen.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x09\xC00Jetzt habe ich aber Angst gehabt, bzzz!\n\n\n\n\x0E\x01\x09\x04\x03\x900Wie bist du als Mensch eigentlich\nhier reingekommen?")
          				flw_1:
/*<  1>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Schön, dass du gemeinsam mit dem <b<Kapitän\n>>gekommen bist, um uns zu retten!\n\n\n\x0E\x01\x09\x04\x03\x900Aber solange dieser <r<Elektro-Zaun >>in Betrieb ist,\nkommen wir hier nicht heraus!")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 32, 'param3': 6}
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(".<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Ach so...\nDer Maschinenraum befindet sich\nunter diesem Kerker.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x03\x900Im Maschinenraum gibt es einen Gang,\nder in diesen Kerker führt.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x03\x900Doch um den Maschinenraum zu durchqueren,\nmusst du die <pling><r<Stromschalter>> betätigen!")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x03\x900Was<pause05>.<pause05>.<pause05>.\nDa tut sich was im Maschinenraum!\n\x0E\x01\x09\x04\x03\x900Hast du den <r<Strom>> angestellt?\n\n\x0E\x01\x09\x04\x03\x900Dann geh durch den Maschinenraum und\nkomm hierher zu mir!\n\n\n\x0E\x01\x09\x04\x03\x900Ich warte auf dich!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf("\x0E\x01\x09\x04\x03\x900Was<pause05>.<pause05>.<pause05>.\nDu hast den <r<Stromschalter>> betätigt?\n\n\n\x0E\x01\x09\x04\x03\x900Allerdings hast du erst einen <r<Stromschalter\n>>betätigt. Es gibt aber zwei!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf("\x0E\x01\x09\x04\x03\x900Der andere <r<Stromschalter>> befindet sich hier.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf("\x0E\x01\x09\x04\x03\x900Hilf uns!")
          							goto flw_19
          						  case 1:
/*<114>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 115, 'param3': 30}
          							goto flw_115
          						}
          					}
          				  case 1:
/*<111>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
          						goto flw_112
          					  case 1:
/*< 20>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': 0, 'next': 47, 'param3': 30}
/*< 47>*/ 						{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 24, 'param3': 30}
/*< 24>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x03\x900An diesen zwei Orten befinden sich\n<r<Stromschalter>>.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x03\x900Hilf uns!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x03\x900Wie bist du als Mensch eigentlich\nhier reingekommen?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ich habe Angst!\nBesiege die Ungeheuer und\ndann hol mich hier raus!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf("")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf("")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x03\x900Du hast uns wirklich gerettet!\nDanke!")
          		flw_15:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x03\x900Hm...\nDu bist also hierhergekommen, um\n<r<Nayrus Flamme>> zu suchen...\n\n\x0E\x01\x09\x04\x03\x900Um <r<Nayrus Flamme >>neu zu entfachen,\nmusst du die Steuerung des Schiffes\nzurücksetzen.\n\n\x0E\x01\x09\x04\x03\x900Der Kontrollraum ist neben diesem Kerker,\nwird aber von einer schweren Tür geschützt,\nfür die du einen Schlüssel brauchst.\n\n\x0E\x01\x09\x04\x03\x900Zuerst musst du zur <b<Kapitänskajüte>>!\n<pling>Der Schlüssel zum Kontrollraum ist in\nder <b<Kapitänskajüte>>!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf("\x0E\x01\x09\x04\x03\x900Zum Dank überreiche ich dir diesen <r<Schlüssel>>.\n\n\n\n\x0E\x01\x09\x04\x03\x900Mit diesem <r<Schlüssel>> kannst du die Tür zur\n<b<Kapitänskajüte>> öffnen.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf("\x0E\x01\x09\x04\x03\x900Die Kapitänskajüte betrittst du durch\ndie Tür am Ende des Decks.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x03\x900Ich werde schon mal nach draußen\nfliehen, bzzz!\n\n\n\x0E\x01\x09\x04\x03\x900Tut mir leid! Du machst das schon!")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 16, 'param3': 6}
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf("\x0E\x01\x09\x04\x03\x900Dich kenne ich<pause05>.<pause05>.<pause05>.\n\x0E\x01\x09\x04\x03\x900Du bist der Kerl, der mich vorhin\nnicht gerettet hat, bzzz!\n\x0E\x01\x09\x04\x03\x900Wie bist du hier reingekommen?")
          			flw_125:
/*<125>*/ 			printf("\x0E\x01\x09\x04\x03\x900.<pause05>.<pause05>.<pause05>\n\n\n\n\x0E\x01\x09\x04\x03\x900Schön, dass du gemeinsam mit dem <b<Kapitän\n>>gekommen bist, um uns zu retten!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x03\x900Du bist ein Mensch, oder?\nWie bist du hier hereingekommen?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x03\x900\x0E\x03\x01\x00Link!\nDas hast du toll gemacht!")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf("\x0E\x01\x09\x04\x03\x900Schön, dass mein Schiff wieder ganz so\naussieht wie früher!\n\n\n\x0E\x01\x09\x04\x03\x900Jetzt musst du mir helfen, meine <b<Jungs\n>>zu retten!\n\n\n\x0E\x01\x09\x04\x03\x900In dieser Galeone gibt es einen <pling><b<Kerker>>,\nin dem sie festgehalten werden.")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x03\x900Ich habe Angst, bzzz.\nIch warte im Boot auf dich!\n\n\n\x0E\x01\x09\x04\x03\x900Du schaffst das, bzzz!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf("")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 54, 'param3': 6}
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu berichten.\n\n\n\nDiese <r<Tentakel>> scheinen zu einem riesigen Monster zu\ngehören. Es scheint, als würde das Schiff angegriffen.\n\n\nEs besteht eine Wahrscheinlichkeit von 80 %,\ndass das Schiff untergeht, wenn du nichts tust.\n\n\n<pling>Ich empfehle, die Tentakel mit der <r<heiligen Kraft\n>>zu durchtrennen und draußen nach dem Rechten\nzu sehen.")
/*< 55>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 36}
/*< 53>*/ 	scene_flags[18 'Lanayru: Sandship'][79 /* 0x8 80 */] = true;
          }

          void entrypoint_401_10() {
/*< 63>*/ 	start()
/*< 64>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 65>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 66>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 70>*/ 				printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich registriere eine Bewegung\nim Maschinenraum.\n\n\nIch empfehle, den Maschinenraum zum Kerker\nzu durchqueren und die Matrosen zu <g<befreien>>.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf("\x0E\x01\x12\x04\x00\x01Gebieter, wie der Matrose sagte, bewegt sich etwas\nim Maschinenraum.\n\n\nEs ist jedoch nur ein <r<Stromschalter >>betätigt worden.\nDer Gang zum Kerker ist noch versperrt.\n\n\nIch empfehle, den zweiten <r<Schalter >>schnell\nzu aktivieren.")
          			}
          		  case 1:
/*< 67>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_69
          			  case 1:
          				goto flw_69
          			}
          		}
          	  case 1:
/*< 72>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 73>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich registriere eine starke Erschütterung.\n\n\n\nDie genaue Lage ist unklar. Ich empfehle,\nzum <b<Kerker der Matrosen >>zurückzukehren.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich registriere eine starke Erschütterung.\n\n\n\nDurch die Bedienung dieses Geräts wurde etwas\nGroßes in diesem Schiff bewegt.\n\n\nDie genaue Lage ist unklar. Ich empfehle, zum <b<Kerker\nder Matrosen >>zurückzukehren.")
          			}
          		  case 1:
/*< 74>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_71
          			  case 1:
          				goto flw_71
          			}
          		}
          	}
          }

          void entrypoint_401_11() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, dies dürfte der<pling> <y<Schlüssel>> zum\nKontrollraum sein.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf("Der <b<Eingang zum Kontrollraum>> ist auf\nder Karte mit \x0E\x02\x04\x02\x19CD markiert.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf("Ich empfehle, auf schnellstem Wege zum\n<b<Kontrollraum >>zu gehen.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("Sieh nur, \x0E\x01\x12\x04\x00\x01Gebieter.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf("Dieses große Tor ist fest verriegelt.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf("Ich schätze, dass sich hinter ihm etwas Wichtiges\nverbirgt.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich muss dich warnen.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf("Ich spüre eine dunkle Präsenz hinter dieser Tür.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf("Es besteht eine Wahrscheinlichkeit von 90 %, dass sich\nder Ursprung der Tentakel in der Nähe befindet.\n\n\nIch rate zu äußerster Vorsicht, wenn du nach\ndraußen gehst.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, siehst du das?\nEs besteht eine Wahrscheinlichkeit von 90 %,\ndass dies ein <pling><r<Stein der Zeit>> ist.\n\nIch empfehle, ihn mit einer deiner Waffen\nzu <g<aktivieren>>. Er dürfte auf dem Schiff\neinige Veränderungen bewirken.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, dieser Maschinenmensch...\n\n\n\nEs besteht eine Wahrscheinlichkeit von 99 %,\ndass es sich hierbei um den <b<Piraten>> handelte,\nvon dem der Kapitän sprach.\n\nSeine Wut und Boshaftigkeit haben sich\nerstaunlich gut über die Jahre gehalten...")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf("\x0E\x01\x12\x04\x00\x0BGebieter, ich habe dir etwas zu deinem neuen Item,\ndem Bogen, zu sagen.\n\n\nMit ihm kannst du <g<weit entfernte Ziele treffen>> und\ngroßen Schaden anrichten.\n\n\nDrücke \x0E\x02\x04\x02\x29CD, um den Bogen zu ziehen. Wenn du\nHilfe zur Bedienung des Bogens benötigst, drücke\ndanach \x0E\x02\x04\x02\x13CD, um die <r<Hilfe>> anzeigen zu lassen.\x0E\x01\x11\x02\xFCD\x0E\x01\x11\x02\xBCD")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf("Zudem kannst du mit einem Pfeil <r<weit entfernte\nMechanismen aktivieren>>, wenn du sie triffst.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf("<pling>Einen solchen <r<Mechanismus>> habe ich auf\ndem <b<Deck>> entdeckt.")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf("Allerdings glaube ich nicht, dass du ihn von hier aus\ntreffen kannst. Ich rate dir, zurück an Deck zu gehen.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf("\x0E\x01\x12\x04\x00\x01Gebieter, ich empfehle dir, nach oben zu sehen.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf("Durch die Öffnung in der Decke kann man den\nStein der Zeit sehen, der sich an Deck befindet.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

