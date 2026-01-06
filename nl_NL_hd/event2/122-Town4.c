          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "Nu de waarzegger weer aan het werk is,\nis de bazaar een stuk levendiger. We\nhebben hem gemist!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Dus de waarzegger zit sip thuis?\n\n\n\nIk vraag me af of hij terug zou komen als\nwe een nieuwe kristallen bol voor hem\nvinden...")
          				  case 1:
/*<128>*/ 					printf(/* textboxtype: 0, unk: 1, line: 4 */ "Hij woont aan <color red<de oostelijke rand van het\ndorp>coloroff>...\n\n\nHet is wel stil zonder hem. Kun je even\nbij hem langsgaan om te kijken of het wel\ngoed met hem gaat?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ik heb de <color blue<waarzegger >coloroff>al een paar dagen\nniet gezien...\n\n\nJe weet toch dat zijn kristallen bol kapot\nis? Ik hoop maar dat hij niet thuis zit te\nbalen dat hij dat niet heeft zien\naankomen.")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "Huh...")
/*<194>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Dus de waarzegger zit sip thuis?\n\n\n\nIk vraag me af of hij terug zou komen als\nwe een nieuwe kristallen bol voor hem\nvinden...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "Kun je controleren hoe het met de\nwaarzegger gaat?\n\n\nZijn huis ligt<color red< aan de oostelijke rand >coloroff>van\nSkyloft.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "Heb je Skyloft weleens verkend na het\nvallen van de avond? In het donker zijn\neen aantal dingen heel anders.\n\nAls je bijvoorbeeld 's nachts naar het huis\nvan de eigenaar van de voorwerpenwinkel\ngaat, koopt hij je schatten.\n\nHet is waar dat het hier 's nachts\ngevaarlijker is, maar voor een student aan\nde ridderacademie zou dat geen probleem\nmoeten zijn.\nJe hoeft enkel <color green<een dutje in een bed te\ndoen>coloroff> tot het vallen van de avond.<pause 25> Dat\nis alles!")
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "Als je moe bent, is slaap het beste\nmedicijn. <pause 25><color green<En overal waar een bed staat,\nkun je slapen>coloroff>, weet je?\n\nSkyloft lijkt wel een heel ander eiland\nzodra de zon ondergaat. Echt waar!\n\n\n<color green<Vind een bed en doe een dutje>coloroff> om te\nslapen tot het vallen van de avond. Er zijn\nallerlei interessante dingen te doen als het\ndonker is...")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "Spiegeltje, spiegeltje aan de wand...\nWie is de mooiste van het land?")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x22000002>Dat is toch wat je net dacht,\n<heroname>?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ik heb een raar gerucht gehoord.\nBlijkbaar hebben anderen <color red<'s nachts >coloroff>een\nvrouw horen huilen <color red<in de buurt van de\nslaapkamers>coloroff> van de ridderacademie.\nEcht waar, zelfs een grote kerel als ik\nkrijgt daar de rillingen van.")
/*<170>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "Hè? Een hand die uit het toilethokje\nreikt?\n\n\nDat is...<pause 20> een manier om opgemerkt te\nworden.")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ik heb een raar gerucht gehoord.\nBlijkbaar hebben anderen <color red<'s nachts >coloroff>een\nvrouw horen huilen <color red<in de buurt van de\nslaapkamers>coloroff> van de ridderacademie.\nEcht waar, zelfs een grote kerel als ik\nkrijgt daar de rillingen van.")
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "Wat? <pause 20>Er zit dus iemand op het toilet die\nroept om wc-papier?\n\n\nOei, dat is vervelend. Ik kan het weten,\nwant het is mij ook weleens overkomen.")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "Ik heb een raar gerucht gehoord.\nBlijkbaar hebben anderen <color red<'s nachts >coloroff>een\nvrouw horen huilen <color red<in de buurt van de\nslaapkamers>coloroff> van de ridderacademie.\nEcht waar, zelfs een grote kerel als ik\nkrijgt daar de rillingen van.")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "Hallo! Ik hoop dat je op <icon 19> drukt als je\nhulp nodig hebt.<0x10011:0x0bcd>")
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Dus je bent nu ridder in training?\nGefeliciteerd!\n\n\nMaar je hebt vast nog heel veel te leren.\nVergeet niet op <icon 19> te drukken voor tips.<0x10011:0x0bcd>")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000001>Hé, <heroname>! Het is eindelijk\nzover, hè? Dat Vleugelceremonie-gedoe\nis vandaag!\n\nAls je wint, ga je naar de volgende klas\nvan de ridderacademie.")
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Hier op Skyloft geld je pas als volwassen\nals je je Loftwing onder controle hebt.\n\n\n<0x10009:0x000a0404>Als je graag ridder wilt worden, dan is\nhet belangrijk om de vliegkunst goed te\nbeheersen. En dat doe je door heel veel\nte oefenen.")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Heb je ooit van kloppen gehoord? Dan tik\nje met je knokkels tegen de deur van een\nhuis. Zomaar ergens binnenlopen is wat...\nonbeschoft.\nNou ja, je hebt geluk dat ik thuis ben.\nNormaal gesproken zou ik aan het werk\nzijn in de bazaar, maar we zijn gesloten\nvanwege de Vleugelceremonie.\n<0x10009:0x00000015>Ik verveel me weleens tijdens het werken,\nmaar nu ik niet aan het werk ben, verveel\nik me nog meer! Dan ben ik toch liever\naan het werk...")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x12110016>B-<pause 15>Bedankt voor je hulp!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x14080913>Geen probleem!\n\n\n\nIk zal maar snel even je moeder gedag\nzeggen.\n\n\nZe lijkt vast veel op jou, Pimmus, en is\nvast net zo eerlijk en betrouwbaar.")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x12090c18>Oei! Eh, ga je nu niet een beetje te snel?")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x14000005>Natuurlijk niet! Doe niet zo mal. Dit soort\ndingen kun je beter meteen regelen.\n\n\n<0x10009:0x14080913>Ik hoop dat je me de volgende keer\nbinnenlaat.")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000001>Ben jij dat, <heroname>?\nWaarom ben jij nog zo laat op?\n\n\n<0x10009:0x00111300>Ik heb honger! Mijn mama is nog aan het\nkoken, maar het duurt zo lang. Ik wil\neeeeeten!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000e0812>Niet te geloven... Het standbeeld van de\ngodin is verdwenen!\n\n\n<0x10009:0x000f0d00>Kan iemand me uitleggen wat er aan de\nhand is hier op Skyloft?!")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 1, line: 67 */ "En mijn dochtertje, Sijsje, is nog steeds\nniet thuis. Ik begin me nu echt zorgen\nte maken.\n\n<0x10009:0x00000800>Kun je alsjeblieft naar haar op zoek gaan,\n<heroname>?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000001>Hé, jochie! Ik hoop dat die ouwe\nSchrootbot goed van pas komt.\n\n\nHij is een beetje brutaal, maar bedoelt\nhet niet slecht.\n\n\nZolang je aardig tegen hem bent, komt het\nwel goed.")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000003>Hééé! Waarom ben je zo laat nog\nonderweg? Je kunt maar beter oppassen,\nanders neemt een Remlit nog een hapje\nvan je!\nDe meesten van ons gaan alleen 's nachts\nnaar buiten als ze er een heel goeie reden\nvoor hebben.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "Misschien lijkt het erop dat mijn meester\nalleen als hobby aan machines prutst, bzzt,\nmaar er zit meer achter... Vrrrrm...\n\nHij is een automatische wasmachine voor\nzijn moeder aan het bouwen, bzzt!\n\n\nIs dat niet geweldig, vrrrrm?\n\n\n\nHij is niet zoals een zekere andere\npersoon die meesteres Fi de wereld rond\nsleurt zonder aan haar geluk of veiligheid\nte denken, bzzat!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000056>Mijn knul drijft me soms tot waanzin!\nKun je voor me met hem praten?")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Ik dacht dat hij het wel wat rustiger aan\nzou doen nu hij die robot weer aan de\npraat heeft gekregen, maar hij blijft er\nmaar aan prutsen.\nEcht waar, die jongen zal altijd onder de\nmotorolie zitten. En zijn moeder blijft\nmaar poetsen, poetsen en poetsen.")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Hij is dag en nacht bezig met het\nrepareren van de roestige robot die hij\nheeft geërfd!\n\nWat hij met die hoop schroot wil doen,\nis me een raadsel!")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000056>Die sufferd maakt alleen maar rommel!\nOp alles wat hij aanraakt, laat hij\nolievlekken achter.\n\nIk weet dat hij graag met zijn apparaten\nspeelt, maar ik blijf aan het poetsen en\nmijn wasmand puilt voortdurend uit!\n[1-]Die sufferd?[2-]Wat vervelend.")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ja, mijn zoon die de werkplaats runt\nin de bazaar!")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Het is enorm vervelend! Ik blijf maar\npoetsen en wassen!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00001101>Hé, moet jij niet zo snel mogelijk je\nLoftwing zien te vinden?")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00001104>Ik vraag me af waar zij het over hebben.\nHet lijkt ernstig te zijn.")
          		}
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000005>Goh, wat voelt het goed om me even te\nontspannen.\n\n\nAls ik hier zit, moet ik altijd aan een\nbepaald meisje denken.\n\n\n<0x10009:0x000a0c00>Ja, <color blue<Kala >coloroff>is dé reden dat ik De Oranje\nPoen bezoek. Ik ben dol op haar!")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000001>Hoi, <heroname>. Heb jij toevallig\nSijsje gezien?\n\n\nTelkens als ik even niet oplet, gaat het\nkind ervandoor.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000a>Sorry, <heroname>, maar heb jij Sijsje\nmisschien gezien?\n\n\nZe gaat er altijd vandoor, zonder iemand\nte vertellen waar ze naartoe gaat. Ik weet\nniet wat ik met haar aan moet.\n\nIk hoop maar dat ze er niet door in de\nproblemen zal komen.")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000004>Hé, heb jij al gezien dat de godin weg is?\n\n\n\n<0x10009:0x00000011>Zal ze boos weg zijn gegaan omdat ik\nnooit naar mijn mama en papa luister?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000001>Hoi, <heroname>! Dit huis is van\nSijsje. Pssst, dat ben ik.\n\n\nIk ga vandaag weer lekker spelen met\nmijn nieuwe vriendje. Het wordt zó leuk!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x0009030a>HÉ!\n\n\n\n<0x10009:0x00ffff04>O... <pause 20>Als je alleen maar gaat zitten, is er\nniets aan de hand.\n\n\n<0x10009:0x00ff03ff>Maar luister goed! Dat is een dure sofa\nen als je 'm vies maakt... Nou, dan heb je\neen heel groot probleem!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000011>Zzz... Spelen... zzz... Ome Vleer!")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Je bent te laat voor het ontbijt, dat\nserveren we al uren niet meer. Je zult op\nde lunch moeten wachten!")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>Hé, <heroname>! Heb je hier de laatste\ntijd nog rondgekeken?\n\n\nEr is geen Keese te zien en er zijn ook\ngeen andere boze monsters...\n\n\nIk kan me niet herinneren wanneer ik\nvoor het laatst een rustige wandeling in\nhet donker heb gemaakt...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000001>Ik heb gehoord dat jij degene bent die\nSijsje heeft gevonden!\n\n\n<0x10009:0x00000009>Hartstikke bedankt! Moet je haar nou\nzien... We waren zo bezorgd over haar\nen nu ligt ze daar heerlijk te slapen.")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0000000e>Wat? Meen je dat? Je hebt Sijsje\ngevonden?\n\n\nIk zei het toch, niemand hier op Skyloft\nzou ook maar een haar op haar hoofd\nkrenken!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Ik vraag me af waar die kleine,\nondeugende Sijsje nu weer zit.\n\n\nHaar moeder denkt dat ze ontvoerd is,\nmaar dat lijkt me onwaarschijnlijk,\n\n\n<0x10009:0x000e0d00>Op Skyloft is er toch niemand die zoiets\nzou doen?\n\n\n<0x10009:0x00000d0f>Vroeg of laat komt ze wel opdagen.\n\n\n\nMaar het zou fijn zijn als je het ons\nzou kunnen laten weten, als je haar\ntoevallig ziet.")
          				  case 1:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001><0x30001:0x><heroname>, moet je Sijsje nou zien\nslapen. Wat is ze toch een schatje.\n\n\nZe maakt het harde werk dat ik doe, de\nmoeite waard. Ik doe het graag voor haar.\n\n\nGeen idee wie die \"ome Vleer\" is, maar\nhet klinkt grappig.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000012>Ik heb Sijsje nog steeds niet gevonden!\n\n\n\nKun je me alsjeblieft helpen om haar zo\nsnel mogelijk te vinden?")
          	  case 1:
/*< 32>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000001>O, hallo? Wat kan ik zo laat nog voor\nje betekenen...")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Je bent te laat voor het ontbijt, dat\nserveren we al uren niet meer. Je zult op\nde lunch moeten wachten!")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000002>Hé, <heroname>! Sijsje is weer thuis!\n\n\n\nIk heb gehoord dat jij mijn dochter hebt\ngevonden!\n\n\n<0x10009:0x00100d09>Enorm bedankt! Mijn vrouw en ik zijn zo\nblij!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f0d12>O, jij bent het, <heroname>. Het lijkt\nerop dat Sijsje er weer vandoor is gegaan.\n\n\n<0x10009:0x00ffff00>Mijn vrouw is heel ongerust. Ze zegt tegen\niedereen dat Sijsje ontvoerd is.\n\n\n<0x10009:0x00100d03>Maar we hebben het over Sijsje!<pause 10> Volgens\nmij zit ze alleen maar ergens te spelen.")
/*<120>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x000f0d00>Kun je me het laten weten als je haar\nergens hebt gezien?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000002>Hoi, <heroname>!\n\n\n\nDit is de<color red< lichttoren>coloroff>! Je zou eens naar de\ntop moeten klimmen. Het is zoooo cool\ndaarboven!")
          			  case 1:
/*< 34>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000002>Hallo, <heroname>.\n\n\n\nWeet je wat grappig is? Dit wordt de\n<color red<lichttoren >coloroff>genoemd. Hij schijnt hier te\nstaan zodat anderen Skyloft kunnen\nvinden zonder ertegen aan te botsen.\n<0x10009:0x000f0d00>Maar ik heb er nog nooit licht uit zien\nschijnen. Ik vraag me af wie hem gebouwd\nheeft. En waarom...\n\n<0x10009:0x00100d00>Maar het is sowieso de moeite waard om\nnaar de top te klimmen. Je hebt er een\nprachtig uitzicht op het standbeeld van\nde godin.")
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000f0d05>Ik?\n\n\n\n<0x10009:0x00000800>Nee, bedankt. Ik blijf liever hier! Ik heb\nhoogtevrees!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10012:0x00000064>Zrrrt! Dit is de ingang van de vulkaan!<pause 30>\nIk kan maar beter zorgen dat ik er voor\nmeester Broekie ben!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x25070707>Heb je het al gehoord? De Loftwing van\neen van de studenten die meedoet aan de\nVleugelceremonie, is vermist. Niemand\nweet waar hij is!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x26070701>O, echt waar? Dat is verschrikkelijk!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x27070702>Eerlijk gezegd voel ik me niet op mijn\ngemak bij Loftwings. Dat komt door hun\nklauwen, snap je, die zien er zo scherp\nen gevaarlijk uit!")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x25070707>Het is zo'n mooie dag, maar we hebben\ngeen tijd om ervan te genieten. Sommige\ndingen veranderen ook nooit.")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x26070701>Zeg dat wel! Het enige waar mijn zoon\ngoed voor is, is smeerolie op zijn shirt\nkrijgen! En ik maar wassen, wassen,\nwassen!")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x27070702>Ik ben heel slecht in kleren wassen. Kon\niemand anders dat maar voor mij doen.")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	wait_frames(20)
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x070a0c12>Hm... <0x10008:0xfecd>Waar zou ze toch zijn?")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Kom gerust nog eens langs om met me te\nkletsen. Ik ben dan wel oud, maar ik ben\nniet saai.")
          	  case 1:
/*<141>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "Hahaha. Het lijkt erop dat je goed bezig\nbent, kleine vriend. Mag ik je trakteren\nop een drankje?\n[1-]Graag! [2]Nee, bedankt.")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00010700>Dat hoor ik graag! Proost!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			wait_frames(60)
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00070700>Mooi, mooi! Daar gaan we!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf(/* textboxtype: 0, unk: 1, line: 55 */ "Ik zal je iets vertellen dat mogelijk nog\nvan pas komt.\n\n\nAls je in de wolkenzee vliegt, zie je zo nu\nen dan <color red<ringvormige rotsen>coloroff>.\n\n\n<0x10009:0x00010700>Ik heb gehoord dat een onbekende energie\nmiddenin die rotsen wordt opgeslagen.\n\n\nEn als je met je Loftwing door zo'n gat in\neen rots vliegt, schiet je er uit alsof je uit\neen kanon gelanceerd wordt.\n\n<0x10009:0x00070700>Ik heb gehoord dat slimme ridders zo snel\ngrote afstanden af kunnen leggen.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf(/* textboxtype: 0, unk: 0, line: 56 */ "Ik zal je iets interessants vertellen.\n\n\n\n<0x10009:0x00010700>In de wolkenzee bevinden zich allerlei\neilanden van allerlei formaten. Skyloft is\ntoevallig het eiland waar wij op wonen.\n\nNiemand weet hoe ze zijn ontstaan en hoe\nze in de lucht blijven.\n\n\n<0x10009:0x00070700>Het enige dat ik je kan vertellen is dat we\nalles, inclusief onze levens hier, te danken\nhebben aan de gulheid van de godin.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "Ik zal je wat informatie geven die later\nmogelijk nog van pas komt.\n\n\nOp de ridderacademie leren jij en je\nvrienden om eersteklas berijders van\nLoftwings te worden.\n\nAls je maar blijft oefenen, vlieg je binnen\nde kortste keren hoog door de lucht en\nbescherm je de mensen hier op Skyloft.\n\nIk weet niet of je er al een hebt ontmoet,\nmaar de ridders in nood redden alle\nmensen die per ongeluk over de rand van\nSkyloft vallen.\n<0x10009:0x00010700>Alleen studenten uit de hoogste klas van\nde ridderacademie mogen bij de ridders-\nin-nood gaan. Dat zijn de beste Loftwing-\nberijders!\nMaar niet zomaar iedereen is goed\ngenoeg, dus denk niet dat het makkelijk is\nom in die club te komen!\n\n<0x10009:0x00070700>Mijn kleinzoon is een van de ridders-in-\nnood, weet je. <pause 5>Ha<pause 5>ha.")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "Luister, ik heb nog een handige tip\nvoor je.\n\n\nGebruik je weleens de <color yellow<energiedrankjes >coloroff>die\nze in de bazaar verkopen?\n\n\n<0x10009:0x00010700>Die zijn geweldig! Als je er daar een van\ndrinkt, gaat je energiemeter minder snel\nomlaag.\n\nDat komt niet alleen bij het rennen\nvan pas!\n\n\n<0x10009:0x00070700>Je wordt minder snel moe bij het doen\nvan draaiaanvallen! Ik raad je daarom\naan om er altijd eentje bij je te hebben.")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ja, ja. Dus je wilt een ouwe man niet even\ngezelschap houden? Aardig, hoor...")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Hoi, <heroname>! Het is een fijne\navond voor een wandeling, hè? Ik was\nvergeten hoe het hier 's nachts is zonder\nmonsters die je lastigvallen.")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "Kom je ook wat eten? Het eten is hier zo\nlekker!\n\n\nJe moet alleen wel even geduld hebben,\nhoor. Het duurt hier een eeuwigheid voor\nhet eten wordt geserveerd.")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>En nog een snufje peper...\n\n\n\n<0x10009:0x00000004>En het is klaar! En zoals altijd smaakt het\nverrukkelijk!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000004>Hoi, <heroname>. Ben je moe? Je ziet\ner uitgeput uit.\n\n\nIk weet hoe dat voelt! Ik doe zelf ook\nvaak een dutje.\n\n\n<0x10009:0x00010d00>Doe alsof je thuis bent.")
          }

