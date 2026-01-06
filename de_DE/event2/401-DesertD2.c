          void entrypoint_401_00() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_01() {
          	start()
/*< 17>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*<100>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*<101>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
/*<104>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "Du hast beide Stromschalter betätigt.\nJetzt kannst du den Maschinenraum\ndurchqueren und hierher kommen.\nKomm schnell und hilf uns hier raus!")
          			  case 1:
          				flw_103:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Du hast einen Stromschalter betätigt?\nDu musst noch einen weiteren\naktivieren, um in den Maschinenraum\nzu gelangen.\nBetätige noch einen <color red<Stromschalter>coloroff> und\nhol mich hier raus!")
          			}
          		  case 1:
/*<102>*/ 			switch (scene_flags[61 /* 0x6 20 */]) {
          			  case 0:
          				goto flw_103
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "Du musst mir helfen! Zuerst musst\ndu die <color red<Energieversorgung für den\nMaschinenraum>coloroff> wiederherstellen.")
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 2304, 'next': 106, 'param3': 13}
/*<106>*/ 			switch (scene_flags[69 /* 0x9 20 */]) {
          			  case 0:
/*<107>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00090c00>Jetzt habe ich aber Angst gehabt, bzzz!\n\n\n\n<0x10009:0x00030900>Wie bist du als Mensch eigentlich\nhier reingekommen?")
          				flw_1:
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Schön, dass du gemeinsam mit dem\n<color blue<Kapitän>coloroff> gekommen bist, um uns zu\nretten!\n\n<0x10009:0x00030900>Aber solange dieser <color red<Elektro-Zaun >coloroff>in\nBetrieb ist, kommen wir hier nicht\nheraus!")
/*< 31>*/ 				set_camera(5, 0)
/*< 61>*/ 				wait_frames(60)
/*< 32>*/ 				set_camera(-1, 0)
/*< 29>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ ".<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Ach so...\nDer Maschinenraum befindet sich\nunter diesem Kerker.")
/*< 33>*/ 				set_camera(1, 0)
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030900>Im Maschinenraum gibt es einen\nGang, der in diesen Kerker führt.")
/*< 34>*/ 				set_camera(-1, 0)
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00030900>Doch um den Maschinenraum zu\ndurchqueren, musst du die\n<sound 4><color red<Stromschalter>coloroff> betätigen!")
/*<109>*/ 				switch (scene_flags[60 /* 0x6 10 */]) {
          				  case 0:
/*<110>*/ 					switch (scene_flags[61 /* 0x6 20 */]) {
          					  case 0:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00030900>Was<pause 5>.<pause 5>.<pause 5>.\nDa tut sich was im Maschinenraum!\n<0x10009:0x00030900>Hast du den <color red<Strom>coloroff> angestellt?\n\n<0x10009:0x00030900>Dann geh durch den Maschinenraum\nund komm hierher zu mir!\n\n\n<0x10009:0x00030900>Ich warte auf dich!")
/*<117>*/ 						story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
          						flw_19:
/*< 19>*/ 						story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */] = true;
          					  case 1:
          						flw_112:
/*<112>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030900>Was<pause 5>.<pause 5>.<pause 5>.\nDu hast den <color red<Stromschalter>coloroff> betätigt?\n\n\n<0x10009:0x00030900>Allerdings hast du erst einen\n<color red<Stromschalter>coloroff> betätigt. Es gibt\naber zwei!")
/*<139>*/ 						switch (scene_flags[60 /* 0x6 10 */]) {
          						  case 0:
/*<116>*/ 							{'type': 'type3', 'subType': 4, 'param1': 511, 'param2': 0, 'next': 115, 'param3': 30}
          							flw_115:
/*<115>*/ 							story_flags[263 /* us: 805A9AF9 0x02, jp: 805ACD79 0x02 */] = true;
/*<120>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00030900>Der andere <color red<Stromschalter>coloroff> befindet\nsich hier.")
/*<119>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 34}
/*<118>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00030900>Hilf uns!")
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
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030900>An diesen zwei Orten befinden sich\n<color red<Stromschalter>coloroff>.")
/*< 22>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 21, 'param3': 34}
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00030900>Hilf uns!")
          						goto flw_19
          					}
          				}
          			  case 1:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00030900>Wie bist du als Mensch eigentlich\nhier reingekommen?")
          				goto flw_1
          			}
          		  case 1:
/*< 97>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090c00>Ich habe Angst!\nBesiege die Ungeheuer und\ndann hol mich hier raus!")
/*<105>*/ 			scene_flags[-1 'Skyloft: Silent Realm'][69 /* 0x9 20 */] = true;
          		}
          	}
          }

          void entrypoint_401_02() {
/*<  4>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_03() {
/*<  6>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 13 */ "")
          }

          void entrypoint_401_04() {
/*<  8>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_401_05() {
/*< 10>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "")
          }

          void entrypoint_401_06() {
/*< 12>*/ 	start()
/*< 99>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 121, 'param3': 13}
/*<121>*/ 	switch (story_flags[259 /* us: 805A9AF6 0x20, jp: 805ACD76 0x20 */]) {
          	  case 0:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030900>Du hast uns wirklich gerettet!\nDanke!")
          		flw_15:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00030900>Hm...\nDu bist also hierher gekommen, um\n<color red<Nayrus Flamme>coloroff> zu suchen...\n\n<0x10009:0x00030900>Um <color red<Nayrus Flamme >coloroff>neu zu entfachen,\nmusst du die Steuerung des Schiffes\nzurücksetzen.\n\n<0x10009:0x00030900>Der Kontrollraum ist neben diesem\nKerker, wird aber von einer schweren\nTür geschützt, für die du einen\nSchlüssel brauchst.\n<0x10009:0x00030900>Zuerst musst du zur <color blue<Kapitänskajüte>coloroff>!\n<sound 4>Der Schlüssel zum Kontrollraum ist in\nder <color blue<Kapitänskajüte>coloroff>!")
/*<144>*/ 		set_camera(12, 0)
/*<145>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 143, 'param3': 15}
/*<143>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030900>Zum Dank überreiche ich dir diesen\n<color red<Schlüssel>coloroff>.\n\n\n<0x10009:0x00030900>Mit diesem <color red<Schlüssel>coloroff> kannst du die Tür\nzur <color blue<Kapitänskajüte>coloroff> öffnen.")
/*<146>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 14, 'param3': 42}
/*< 14>*/ 		give_item(1 0x01);
/*<129>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 128, 'param3': 13}
/*<128>*/ 		set_camera(-1, 0)
/*< 43>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00030900>Die Kapitänskajüte betrittst du durch\ndie Tür am Ende des Decks.")
/*< 41>*/ 		{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 0, 'next': 126, 'param3': 30}
/*<126>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 42, 'param3': 15}
/*< 42>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 130, 'param3': 34}
/*<130>*/ 		set_camera(12, 0)
/*< 28>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00030900>Ich werde schon mal nach draußen\nfliehen, bzzz!\n\n\n<0x10009:0x00030900>Tut mir leid! Du machst das schon!")
/*< 57>*/ 		set_camera(6, 0)
/*< 60>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 256, 'next': 58, 'param3': 15}
/*< 58>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 127, 'param3': 14}
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 2, 'param2': 0, 'next': 59, 'param3': 13}
/*< 59>*/ 		wait_frames(30)
/*< 16>*/ 		story_flags[262 /* us: 805A9AF9 0x01, jp: 805ACD79 0x01 */] = true;
/*< 48>*/ 		scene_flags[18 'Lanayru: Sandship'][108 /* 0xC 10 */] = true;
          	  case 1:
/*<122>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<123>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030900>Dich kenne ich<pause 5>.<pause 5>.<pause 5>.\n<0x10009:0x00030900>Du bist der Kerl, der mich vorhin\nnicht gerettet hat, bzzz!\n<0x10009:0x00030900>Wie bist du hier reingekommen?")
          			flw_125:
/*<125>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00030900>.<pause 5>.<pause 5>.<pause 5>\n\n\n\n<0x10009:0x00030900>Schön, dass du gemeinsam mit dem\n<color blue<Kapitän>coloroff> gekommen bist, um uns zu\nretten!")
          			goto flw_15
          		  case 1:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00030900>Du bist ein Mensch, oder?\nWie bist du hier hereingekommen?")
          			goto flw_125
          		}
          	}
          }

          void entrypoint_401_07() {
/*< 25>*/ 	start()
/*< 37>*/ 	set_camera(2, 0)
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00030900><heroname>!\nDas hast du toll gemacht!\n")
/*< 38>*/ 	set_camera(3, 0)
/*< 36>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00030900>Schön, dass mein Schiff wieder ganz so\naussieht wie früher!\n\n\n<0x10009:0x00030900>Jetzt musst du mir helfen, meine\n<color blue<Jungs>coloroff> zu retten!\n\n\n<0x10009:0x00030900>In dieser Galeone gibt es einen <sound 4><color blue<Kerker>coloroff>,\nin dem sie festgehalten werden. ")
/*< 39>*/ 	{'type': 'type3', 'subType': 4, 'param1': 766, 'param2': 0, 'next': 40, 'param3': 30}
/*< 40>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 34}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00030900>Ich habe Angst, bzzz.\nIch warte im Boot auf dich!\n\n\n<0x10009:0x00030900>Du schaffst das, bzzz!")
/*< 50>*/ 	story_flags[277 /* us: 805A9AF8 0x80, jp: 805ACD78 0x80 */] = true;
/*<138>*/ 	scene_flags[18 'Lanayru: Sandship'][19 /* 0x3 08 */] = true;
          }

          void entrypoint_401_08() {
/*< 44>*/ 	start()
/*< 45>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "")
/*< 46>*/ 	changeScene(1, 0) // 
          }

          void entrypoint_401_09() {
/*< 51>*/ 	start()
/*< 62>*/ 	set_camera(7, 0)
/*< 56>*/ 	wait_frames(30)
/*< 54>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 35}
/*< 52>*/ 	printf(/* textboxtype: 2, unk: 0, line: 35 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas\nzu berichten.\n\n\nDiese <color red<Tentakel>coloroff> scheinen zu einem\nriesigen Monster zu gehören. Es\nscheint, als würde das Schiff\nangegriffen.\nEs besteht eine Wahrscheinlichkeit von\n80 %, dass das Schiff untergeht, wenn\ndu nichts tust.\n\n<sound 4>Ich empfehle, die Tentakel mit der\n<color red<heiligen Kraft >coloroff>zu durchtrennen und\ndraußen nach dem Rechten zu sehen.")
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
/*< 70>*/ 				printf(/* textboxtype: 2, unk: 0, line: 37 */ "<0x10012:0x00000001>Gebieter, ich registriere eine\nBewegung im Maschinenraum.\n\n\nIch empfehle, den Maschinenraum\nzum Kerker zu durchqueren und die\nMatrosen zu <color green<befreien>coloroff>.")
          			  case 1:
          				flw_69:
/*< 69>*/ 				printf(/* textboxtype: 2, unk: 0, line: 36 */ "<0x10012:0x00000001>Gebieter, wie der Matrose sagte,\nbewegt sich etwas im Maschinenraum.\n\n\nEs ist jedoch nur ein <color red<Stromschalter\n>coloroff>betätigt worden. Der Gang zum Kerker\nist noch versperrt.\n\nIch empfehle, den zweiten <color red<Schalter\n>coloroff>schnell zu aktivieren.")
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
/*< 68>*/ 				printf(/* textboxtype: 2, unk: 0, line: 39 */ "<0x10012:0x00000001>Gebieter, ich registriere eine starke\nErschütterung.\n\n\nDie genaue Lage ist unklar.\nIch empfehle, zum <color blue<Kerker der\nMatrosen >coloroff>zurückzukehren.")
          			  case 1:
          				flw_71:
/*< 71>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10012:0x00000001>Gebieter, ich registriere eine starke\nErschütterung.\n\n\nDurch die Bedienung dieses Geräts\nwurde etwas Großes in diesem Schiff\nbewegt.\n\nDie genaue Lage ist unklar.\nIch empfehle, zum <color blue<Kerker der\nMatrosen >coloroff>zurückzukehren.")
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
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 40 */ "<0x10012:0x00000001>Gebieter, dies dürfte der<sound 4> <color yellow<Schlüssel>coloroff> zum\nKontrollraum sein.")
/*< 79>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1278, 'param2': 0, 'next': 77, 'param3': 30}
/*< 77>*/ 	printf(/* textboxtype: 2, unk: 0, line: 41 */ "Der <color blue<Eingang zum Kontrollraum>coloroff> ist auf\nder Karte mit (X) markiert.")
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 34}
/*< 78>*/ 	printf(/* textboxtype: 2, unk: 0, line: 42 */ "Ich empfehle, auf schnellstem Wege\nzum <color blue<Kontrollraum >coloroff>zu gehen.")
          }

          void entrypoint_401_12() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 2, unk: 0, line: 43 */ "Sieh nur, <0x10012:0x00000001>Gebieter.")
/*< 91>*/ 	set_camera(8, 0)
/*< 89>*/ 	printf(/* textboxtype: 2, unk: 0, line: 44 */ "Dieses große Tor ist fest verriegelt.")
/*< 92>*/ 	set_camera(-1, 0)
/*< 90>*/ 	printf(/* textboxtype: 2, unk: 0, line: 45 */ "Ich schätze, dass sich hinter ihm etwas\nWichtiges verbirgt.")
          }

          void entrypoint_401_13() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x0000000b>Gebieter, ich muss dich warnen.")
/*< 95>*/ 	set_camera(9, 0)
/*< 93>*/ 	printf(/* textboxtype: 2, unk: 0, line: 47 */ "Ich spüre eine dunkle Präsenz\nhinter dieser Tür.")
/*< 96>*/ 	set_camera(-1, 0)
/*< 94>*/ 	printf(/* textboxtype: 2, unk: 0, line: 48 */ "Es besteht eine Wahrscheinlichkeit\nvon 90 %, dass sich der Ursprung der \nTentakel in der Nähe befindet.\n\nIch rate zu äußerster Vorsicht, wenn\ndu nach draußen gehst.")
          }

          void entrypoint_401_14() {
/*< 85>*/ 	start()
/*<154>*/ 	set_camera(17, 0)
/*<155>*/ 	wait_frames(15)
/*<151>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 152, 'param3': 51}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 	printf(/* textboxtype: 2, unk: 0, line: 49 */ "<0x10012:0x0000000b>Gebieter, siehst du das?\nEs besteht eine Wahrscheinlichkeit von\n90 %, dass dies ein <sound 4><color red<Stein der Zeit>coloroff> ist.\n\nIch empfehle, ihn mit einer deiner\nWaffen zu <color green<aktivieren>coloroff>. Er dürfte auf\ndem Schiff einige Veränderungen\nbewirken.")
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 156, 'param3': 36}
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 42}
          }

          void entrypoint_401_15() {
/*< 87>*/ 	start()
/*<147>*/ 	set_camera(16, 0)
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 149, 'param3': 51}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 2, unk: 0, line: 50 */ "<0x10012:0x00000001>Gebieter, dieser Maschinenmensch...\n\n\n\nEs besteht eine Wahrscheinlichkeit\nvon 99 %, dass es sich hierbei um den\n<color blue<Piraten>coloroff> handelte, von dem der Kapitän\nsprach.\nSeine Wut und Boshaftigkeit haben\nsich erstaunlich gut über die Jahre\ngehalten...")
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_16() {
/*<136>*/ 	start()
/*<137>*/ 	set_camera(14, 0)
/*<140>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 141, 'param3': 51}
/*<141>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 132, 'param3': 16}
/*<132>*/ 	printf(/* textboxtype: 2, unk: 0, line: 52 */ "<0x10012:0x0000000b>Gebieter, ich habe dir etwas zu deinem\nneuen Item, dem Bogen, zu sagen.\n\n\nMit ihm kannst du <color green<weit entfernte Ziele\ntreffen>coloroff> und großen Schaden anrichten.\n\n\nDrücke (B), um den Bogen zu ziehen.\nWenn du Hilfe zur Bedienung des\nBogens benötigst, drücke danach (2),\num die Hilfe anzeigen zu lassen.<0x10011:0x01cd><0x10011:0x05cd>")
/*<164>*/ 	set_camera(19, 0)
/*<163>*/ 	printf(/* textboxtype: 2, unk: 0, line: 53 */ "Zudem kannst du mit einem Pfeil <color red<weit\nentfernte Mechanismen aktivieren>coloroff>,\nwenn du sie triffst.")
/*<135>*/ 	set_camera(13, 0)
/*<133>*/ 	printf(/* textboxtype: 2, unk: 0, line: 54 */ "<sound 4>Einen solchen <color red<Mechanismus>coloroff> habe ich\nauf dem <color blue<Deck>coloroff> entdeckt.\n")
/*<134>*/ 	set_camera(15, 0)
/*<131>*/ 	printf(/* textboxtype: 2, unk: 0, line: 51 */ "Allerdings glaube ich nicht, dass du ihn\nvon hier aus treffen kannst. Ich rate\ndir, zurück an Deck zu gehen.")
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_401_17() {
/*<157>*/ 	start()
/*<158>*/ 	printf(/* textboxtype: 2, unk: 0, line: 55 */ "<0x10012:0x00000001>Gebieter, ich empfehle dir,\nnach oben zu sehen.")
/*<161>*/ 	set_camera(18, 0)
/*<160>*/ 	printf(/* textboxtype: 2, unk: 0, line: 56 */ "Durch die Öffnung in der Decke kann\nman den Stein der Zeit sehen, der sich\nan Deck befindet.\n\nIch denke, dass du ihn von hier aus mit\neinem Pfeil oder einer ähnlichen\nFernwaffe treffen könntest, wenn du\ngenau zielst.")
/*<162>*/ 	set_camera(-1, 0)
/*<159>*/ 	scene_flags[18 'Lanayru: Sandship'][56 /* 0x6 01 */] = true;
          }

