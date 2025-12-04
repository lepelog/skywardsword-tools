          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "Als je een van die puntige dingen\nlaat <color red<exploderen>coloroff>, loopt dat niet goed\nvoor je af. Het zijn net bommen!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf(/* textboxtype: 1, unk: 2, line: 36 */ "Tinttonen kunnen het met iedereen\ngoed vinden en ze zijn graag waar\n<color red<andere vissen zwemmen>coloroff>.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000e>Hé, <heroname>! Enkele erg gemene\nvissen zijn het overstroomde woud in\ngezwommen. Die zou ik niet graag onder\nwater tegenkomen, kiewww!\nWees voorzichtig!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Het woud is overstroomd!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0000000e>O, <heroname>! Je hebt alle Tinttonen\nverzameld? Dat is een hele prestatie,\nkiewwwwww!\n\nGa maar snel terug naar de <color blue<waterdraak>coloroff>!")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "De waterdraak is woedend!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Er zijn niet veel monsters meer in het\nwoud.")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "Een mens!\n\n\n\nVanaf dit punt is de stroming sterk.\nTe sterk voor een mens als jij, dus je kunt\nbeter de andere uitgang gebruiken.")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Het lijkt erop dat dit een verwijzing\nis naar uw <color red<detectiefunctie>coloroff>.\n\n\nDat is een goed idee, <0x10012:0x00000002>meester. Ik heb\nde unieke aura van de Tinttonen al\ngeanalyseerd.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "Ik kalibreer uw <sound 4><color red<detectiefunctie>coloroff> om\nTinttonen te vinden. Dit zou van pas\nmoeten komen bij het zoeken.\n\nMaar let op, u kunt <color red<de detectiefunctie\nniet onder water gebruiken>coloroff>.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Kijk uit! De stroming is behoorlijk sterk\nvanaf dit punt. Als je naar buiten gaat,\nkun je beter de uitgang boven\ngebruiken!")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Het woud is nu een meer!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf(/* textboxtype: 0, unk: 0, line: 47 */ "")
          	  case 1:
/*<177>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 0, unk: 1, line: 40 */ "Tinttonen slaan zuurstof op in hun\nlichamen, dus als je er eentje vangt,\nwordt wat van jouw <color red<zuurstof aangevuld>coloroff>.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000007>Ja, het woud staat onder water, ka-roe,\nmaar met mij gaat het goed! Doe de\n<color blue<waterdraak >coloroff>de groeten van me!")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>Ik zal je een tip geven. Sommige rotsen\nrollen weg als je ze aanvalt, kwie-koe!")
          				  case 1:
/*<122>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Ons stamhoofd wacht op je, koe-kiew!\nGa snel naar hem toe om te horen\nwat hij je wil vertellen!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000004>Koro-koe! <sound 4>Ik schrok enorm toen er opeens\nwater uit de <color red<wortels van de grote boom>coloroff>\nkwam!\n\n<0x10009:0x00110005>Kwie... Hoe moet ik me verstoppen\nals het hele woud onder water staat?\nIk hoop dat het woud snel weer als\nvroeger is.")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0009000c>Wanneer gaat dit water nou weg?!\nIk kan niet zwemmen, kie-kwoe!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x0009000c>Het maakt me niet uit hoe je het doet,\nmet detectie, duiken of iets anders,\nkwie-koe. Zolang je die Tinttonen\nmaar vindt!")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Ons stamhoofd wacht op je, koe-kiew!\nGa snel naar hem toe om te horen\nwat hij je wil vertellen!")
          				}
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0009000c>De <color blue<waterdraak>coloroff> heeft het woud onder\nwater gezet? Kiew-aroe! Nu we doorweekt\nzijn, kan ze ons vast makkelijker opeten!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0009000c>We zijn klaar, kiewwww! Hoe zal het met dit\nwoud aflopen? Het is zo... nat.")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000007>Ja, het woud staat onder water, karoe,\nmaar ik red het wel. Doe de <color blue<waterdraak>coloroff>\nde groeten van me!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x0011000b>Kiek-kwie! Als je meer over Tinttonen\nwilt weten, praat dan eens met de\nParella's.\n[1-]Parella's?[2]Ik weet genoeg.")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c0001>Deze wezens met puntige monden\nleven in het water, kwie-koe!")
          						flw_179:
/*<179>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x000b0005>Als je er eentje tegenkomt in het water,\nkwiek, praat er dan mee.")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Ons stamhoofd wacht op je, koe-kiew!\nGa snel naar hem toe om te horen\nwat hij je wil vertellen!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Dit begon allemaal na de komst van de\n<color blue<waterdraak>coloroff>, kera-kwoe! Deze over-\nstroming is vast haar schuld!")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf(/* textboxtype: 0, unk: 1, line: 28 */ "Je vangt de vluchtende <color blue<Tinttonen>coloroff> het\nmakkelijkst met een <color green<waterbooraanval>coloroff>!\nHiermee breng je ze naar je toe, zodat je\nze kunt pakken.\nO... <pause 30>Maar volgens mij verbruiken jullie\nmensen <color red<zuurstof >coloroff>als jullie dat doen,\ndus overdrijf het niet!")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000014>Ga snel terug naar de <color blue<waterdraak>coloroff>, kwie!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000014>Gebruik de detectiefunctie, kwoek,\nom de Tinttonen te vinden!")
          				  case 1:
/*<134>*/ 					printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000007>Ons stamhoofd wacht op je, koe-kiew!\nGa snel naar hem toe om te horen\nwat hij je wil vertellen!")
          				}
          			  case 1:
/*<135>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000014>Als je Tinttonen verzamelt, kiew-kwie,\nworden ze noten in een melodie. Blijf\nzoeken tot je alle Tinttonen gevonden\nhebt!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>Kie-paliep! Ik heb de <color blue<waterdraak>coloroff> gezien!\nZe verstopt zich vast hier ergens\nin de buurt!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "Die mooie bellen zijn <color red<giftig>coloroff>. Wees\nvoorzichtig! Als je er een inademt,\n<color red<verlies je al je zuurstof>coloroff>!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x0000000e>Kom op, ga snel terug naar de\n<color blue<waterdraak>coloroff>!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000000e>Ja, ja! Dat was het! Detecteren! Met je\ndetectiefunctie vind je heel snel de rest\nvan die Tinttonen! Let maar op!")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000001>Kiewwww... Het is leuk om jou weer\nte zien, <heroname>!\n\n\nHeb je al veel <color blue<Tinttonen >coloroff>verzameld?\nIk heb trouwens nog wel een handige\ntip voor je.\n\n<0x10009:0x00040011>Kijk, eh, hoe leg ik dit het beste uit,\nkiewwww?\n\n\nHerinner je de techniek waarmee je de\nanderen van mijn stam hebt gevonden?\nJa, die ja!\n\n<0x10009:0x00060009>Als je die gebruikt, kiewww, dan is\nhet stukken makkelijker om al die\nTinttonen te vinden!")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000e>O, <heroname>.\n\n\n\n<0x10009:0x00060003>Wat zeg je? De <color blue<waterdraak>coloroff> heeft deze\noverstroming veroorzaakt? Dus ze had\neindelijk schoon genoeg van al die\nmonsters in het woud, kiewww?\n<0x10009:0x0001000c>Het woud zal nog wel een tijdje zo nat\nblijven, kiewwww...")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00060001>Er vloeide opeens water uit de <color red<bodem bij\nde boom >coloroff>en wel genoeg om het hele woud\nte overstromen, kiewwwww.\n\n<0x10009:0x00010006>Maar, weet je? Eigenlijk bevalt het\nme wel zo! O-ho-ho!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x0000000e>O, kiewwwwww. Jij bent het.<pause 15>.<pause 15>.<pause 20> Je was\nhier eerder ook al. En nu ik erover\nnadenk, ben ik toen vergeten om je\nnaar je naam te vragen.\n<0x10009:0x00000003>O.<pause 25> Oké. <0x30001:0x><heroname>, dus? Wat een\nrare naam, kiewwwww. <0x10009:0x00000000>Nu wou ik bijna\ndat ik het niet had gevraagd, hmmmmm...\n\nWat kan ik voor je doen?\n[1-]Dit water![2-]Het woud...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000002>Kiewwww, het is leuk om je weer te zien!\nJa, het ziet er hier een beetje anders\nuit dan de vorige keer, vind je niet?\n\n<0x10009:0x00040000>Het water is uit de <color red<bodem gevloeid bij de\nboom >coloroff>achter me<sound 4> en nu is het hele woud\noverstroomd.\n\n<0x10009:0x00000003>Ik weet niet wat de oorzaak was, maar\nzo komen we wel van al die monsters\naf, kiewww. Mij hoor je er dus niet\nover klagen!")
/*< 32>*/ 				wait_frames(1)
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "Sommige Tinttonen vormen groepen.\nJe moet deze Tinttonen <color red<snel achterelkaar\n>coloroff>vangen, anders zwemmen ze je\nmelodie uit.\nAls je er meerdere tegelijk wilt vangen,\ngebruik dan een <color green<waterbooraanval>coloroff> om\nTinttonen die in de buurt zijn, <color red<naar je toe\nte trekken>coloroff>.")
          				  case 1:
/*< 80>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "Het woud is overstroomd!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Hé, ben je Tinttonen aan het vangen?\n[1-]Inderdaad![2-]Nee.")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "Ik zal je een geheim verklappen.\n\n\n\nSommige Tinttonen vormen groepen.\nJe moet deze Tinttonen <color red<snel achterelkaar\n>coloroff>vangen, anders zwemmen ze je melodie\nuit.\nAls je er meerdere tegelijk wilt vangen,\ngebruik dan een <color green<waterbooraanval>coloroff> om\nTinttonen die in de buurt zijn, <color red<naar je toe\nte trekken>coloroff>.\nMaar verder...<pause 30> is het een kwestie van\ndoor blijven zetten!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 0, unk: 1, line: 31 */ "O... Sorry.")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000006>Als je wilt dat ik je help, moet je de\n<color red<Tinttonen >coloroff>verzamelen en naar me\nterugbrengen.")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "Als je Tinttonen van dezelfde kleur niet\n<color red<snel achterelkaar >coloroff>vangt, ontsnappen ze uit\nje melodie. Maar raak niet in paniek!")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Schiet op, de <color blue<waterdraak >coloroff>wacht op je!")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf(/* textboxtype: 1, unk: 0, line: 39 */ "De <color blue<agressieve vissen >coloroff>zijn terug!\nZWEM ZO SNEL JE KUNT!\n\n\nZe kunnen je niet volgen als je\n<color red<diep>coloroff> duikt!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 2, unk: 52, line: 38 */ "Die grote vissen zijn zo eng. Ze vallen\nzomaar aan! Ze zijn erg lichtgeraakt...\nIk ben blij dat er hier geen zijn.")
          				}
          			  case 1:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Het Kikwi-stamhoofd zoekt naar je.\nGa naar hem toe om te horen wat hij\nte zeggen heeft.")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 155, 'param3': 47}
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 158, 'param3': 48}
/*<158>*/ 	wait_frames(15)
/*<157>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000e>Kiewwwwww, <heroname>! Hoor je\nme?\n\n\nEr viel me net iets nuttigs in! Kun je even\nnaar me toe komen, kiewwwwwww?")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

