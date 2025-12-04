          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Ein schöner Ausblick, oder?")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "Das ist...<pause 30>\nBring das schnell zum <color blue<Donnerdrachen>coloroff>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030c00>Dieser Keimling wird im <color blue<Land\nRanelle >coloroff>nicht wachsen, bzzz!\n<0x10009:0x00000900>Lass dir was einfallen!\n\n<0x10009:0x00030900>Mit der <color red<Frucht des Lebensbaums >coloroff>wird der\nDonnerdrache wieder gesund werden!<pause 30>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00030900>Was willst du damit?<pause 30>\nDer <color blue<Donnerdrache >coloroff>braucht unbedingt\neine <color red<Lebensbaumfrucht>coloroff>!\n\n<0x10009:0x00030900>Du willst ihm doch helfen, oder?\n[1-]Klar![2-]Eigentlich...")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>Das ist eine gute Nachricht, bzzz!\nDann solltest du ihn allerdings\nwoanders einpflanzen.\n\n<0x10009:0x00030900>Und zwar <color red<nicht in Ranelle>coloroff>!<sound 4> Bzzz!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00030900>Eigentlich ja? Das höre ich gern!\nDu solltest ihn allerdings woanders einpflanzen.\n\n\n<0x10009:0x00030900>Und zwar <color red<nicht in Ranelle>coloroff>!<sound 4> Bzzz!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00030c00>Dem <color blue<Donnerdrachen>coloroff> geht es schlecht,<pause 15>\nund hier will kein Baum so recht wachsen...<pause 30>\n<0x10009:0x00010c00>Wir haben keine Zeit mehr...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x2f080d09>Ich freue mich über dein Interesse!\nWenn du etwas über die Legende der\ndrei Drachen weißt, sag es mir, ja?")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x2f000006>Wolltest du mir noch etwas sagen?\nWenn du etwas über die Legende der\ndrei Drachen weißt, sag es mir, ja?")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x2f000d0a>Welch seltener Besuch!<pause 30>\nMein Name ist <color blue<Kennbun>coloroff>. Ich erforsche\nhier die <color red<Legende der drei Drachen>coloroff>.\n\n<0x10009:0x2f000007>Diese Gegend mag trostlos wirken,\ndoch ich bin sicher, dass sich hier\netwas verbirgt.\n\nDein Name ist also <heroname>?\nKein einfacher Name...\n\n\n<0x10009:0x2f010d00>Erzähl mir doch mal, was du\nin dieser Einöde suchst!\n.<pause 15>.<pause 15>.<pause 15>\n\n<0x10009:0x2f000007>Eine <color blue<heilige Flamme>coloroff>? Irgendwo\nhabe ich davon schon gehört...<pause 25>\nOder etwa doch nicht?\n\n<0x10009:0x2f0f0709>Stimmt ja!<pause 25> <0x10009:0x2f000d00>Jetzt weiß ich's!\nIch habe in alten Schriften über das\n<color blue<Ranelle-Sandmeer>coloroff> davon gelesen.\n\n<0x10009:0x2f080d00>Leider erinnere ich mich nicht mehr\nan Einzelheiten... Aber zum Sandmeer\ngeht es da drüben lang!")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x2f080d00>Um zum Ranelle-Sandmeer zu gelangen,\nbrauchst du diesen Schlüssel.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x2f080d09>Pass auf dich auf!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x2f080709><0x30001:0x><heroname>!\nDu warst im Reich des Donnerdrachen!<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>Wie ärgerlich!<pause 90>\n\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Jetzt bin ich doch nicht der\nErste, der es geschafft hat!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x2f080d0a>Dies ist der Weg zum Reich\ndes <color red<Donnerdrachen>coloroff>...<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Leider ist er zu eng für mich...\n<0x10006:0xffcd><0x10009:0x2f080700>Was könnte man da bloß tun?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x2f080d02>Hey, <heroname>!\n\n\n\nHast du die <color blue<heilige Flamme>coloroff>, von der\ndu erzähltest, mittlerweile gefunden?\n\n\nSeit ich davon gehört habe, konnte ich kaum\nan etwas anderes denken. Du musst mir\nalles erzählen!\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>\nWas für ein Abenteuer! Ich bin wirklich\nbeeindruckt.\n\nDu bist ein echter Held, <heroname>!")
/*<170>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>Ich kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause 15>\n\n\nHier in der Nähe scheint es eine verborgene\nGegend zu geben!\n\n\nIch habe einen <color red<kleinen Gang>coloroff><sound 4> gefunden!\nLeider passe ich da nicht durch...\n\n\n<0x10009:0x2f000d00>Meiner Ansicht nach haust dort der\n<color red<Donnerdrache>coloroff>, einer der drei\nlegendären Drachen...\n\n<0x10009:0x2f000800>Ich bin mir zudem sicher, dass auch die\nRoboter etwas mit der Sache zu tun haben!<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>Der <color red<Donnerdrache>coloroff>, die Roboter, die Steine\nder Zeit<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Was für ein Mysterium!")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>Hör mal, <heroname>!\nDu hast doch einmal für meine\nAusgrabungen gespendet...<pause 20>\n\nDank dir habe ich ganz viele Steine\nder Zeit entdeckt!\n<0x10009:0x2f000d01>Ich werde dir das Zehnfache deiner\nSpende zurückzahlen!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x2f080d02>Hey, <heroname>!\n\n\n\nHast du die <color blue<heilige Flamme>coloroff>, von der\ndu erzähltest, mittlerweile gefunden?\n\n\nSeit ich davon gehört habe, konnte ich kaum\nan etwas anderes denken. Du musst mir\nalles erzählen!\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20>\nWas für ein Abenteuer! Ich bin wirklich\nbeeindruckt.\n\nDu bist ein echter Held, <heroname>!")
/*<171>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>Ich kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause 15>\n\n\nHier in der Nähe scheint es eine verborgene\nGegend zu geben!\n\n\nIch habe einen <color red<kleinen Gang>coloroff><sound 4> gefunden!\nLeider passe ich da nicht durch...\n\n\n<0x10009:0x2f000d00>Meiner Ansicht nach haust dort der\n<color red<Donnerdrache>coloroff>, einer der drei\nlegendären Drachen...\n\n<0x10009:0x2f000800>Ich bin mir zudem sicher, dass auch die\nRoboter etwas mit der Sache zu tun haben!<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>Der <color red<Donnerdrache>coloroff>, die Roboter, die Steine\nder Zeit<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Was für ein Mysterium!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Vielen Dank, dass du dem Donnerdrachen\ngeholfen hast!")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Warst du beim Donnerdrachen?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "Wenn der Donnerdrache die <color red<Lebensbaumfrucht\n>coloroff>isst, sollte er dadurch genesen.")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00030c00>In dieser Hitze will nichts so recht gedeihen...<pause 30>\n<0x10009:0x00010c00>Wenn das so weitergeht... <0x10006:0xfecd>Der Donnerdrache...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Ich mache mir Sorgen um den Donnerdrachen.\nBitte finde eine <color red<Lebensbaumfrucht>coloroff> für ihn,\nbzzz.")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00030900>Um den Donnerdrachen zu kurieren, haben wir\neinen <color red<Lebensbaumkeimling >coloroff>eingepflanzt.")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>Der <color blue<Donnerdrache>coloroff> ist krank.<pause 15>\n\n\n\n<0x10009:0x00030c00>Wenn du diesen Stein der Zeit willst,\nbrauchst du seine Erlaubnis.<pause 30> <0x10009:0x00010c00>Aber jetzt\nhast du wohl andere Sorgen, oder?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Hey, du da!\nBist du nicht <heroname>?\n\n\n<0x10006:0xffcd><0x10008:0x01cd>Was für ein Zufall!<pause 15>\nDich wollte ich sehen!<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Komm mal her zu mir, ja?")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Hey, <heroname>!\nIch habe ein Loch gefunden, hinter dem es\nweiterzugehen scheint...\n\nLeider ist es von harten Felsbrocken versperrt.\nBis ich die aus dem Weg habe, dauert es wohl\nnoch etwas...")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Wenn du dich nicht beeilst, muss ich\nihn ablegen!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00030900>Hier gibt es viele große Steine der Zeit.<pause 30>\n<0x10009:0x00000900>Hast du auch die Erlaubnis des\n<color blue<Donnerdrachen>coloroff> eingeholt?\n\n<0x10009:0x00010900>Ich wollte dieses Exemplar hier gerade zu\nihm bringen!")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>Hier sind viele Ungeheuer.<pause 15> <0x10009:0x00030c00>Sei...")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "Dem Donnerdrachen geht es blendend!")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Der Donnerdrache ist wieder gesund!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "Was hast du mit der Frucht gemacht?<pause 45>\nHast du sie denn bereits dem\n<color blue<Donnerdrachen>coloroff> gebracht?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>In <color blue<Ranelle>coloroff> wird dieser Baum wohl niemals\nFrüchte tragen.<pause 30> <0x10009:0x00030900>Es bräuchte einfach eine\nfruchtbarere Gegend...")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "Auf der anderen Seite der Brücke haben wir\nden <color red<Lebensbaumkeimling>coloroff>, dessen Früchte alle\nKrankheiten heilen, eingepflanzt.<pause 30>\n\n<0x10009:0x00000c00>Leider sind unsere Bemühungen in dieser\nUmgebung fruchtlos geblieben...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00030900>Der <color blue<Donnerdrache>coloroff> hat mir erlaubt,\nhier nach <color blue<Steinen der Zeit>coloroff> zu graben.\n\n\n<pause 30><0x10009:0x00030c00>Im Augenblick geht es ihm jedoch\nziemlich mies...<pause 15> Ich mache mir wirklich\nSorgen!<pause 30> <0x10009:0x00010c00>Wenn das so weitergeht...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901>Du hast mich gerettet, vielen Dank,\n<heroname>!\nIch will dir dafür eine weitere\nBelohnung zukommen lassen.\n<0x10009:0x00000900>Ich werde mich darum kümmern und\nsie dir geben, wenn du wiederkommst.\nDu wirst dich sicher freuen!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10005:0x004b0000>Dies ist die <color blue<Ranelle-Schlucht>coloroff>. Den alten Legenden\nzufolge lebt hier ein Drache, der der Göttin dient.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10005:0x005a0000>Da sich hier viele Steine der Zeit finden, hat eine alte\nKultur hier wohl ein Steinwerk errichtet.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>Es freut mich zu sehen, wie sehr\ndich meine Forschungen interessieren.\nDein Beitrag wird nicht umsonst sein!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x2f000d09>Oh, interessierst du dich für meine\nAusgrabungen?<pause 60> Ich würde mich sehr\nfreuen, wenn du meine Forschung\nunterstützen würdest.<pause 60>\n<0x10009:0x2f000d07>Du kannst dir sicher vorstellen, dass\nmeine Forschung eine Menge Geld\nverschlingt...\n\nWillst du die Wissenschaft vielleicht\nmit 10 Rubinen unterstützen?\n[1-]Natürlich![2]Nein.")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x2f020208>Das freut mich! Und die Nachwelt\nwird es dir danken.")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "Wie, deine Rubine reichen nicht?\nDann unterstütze die Wissenschaft,\nwenn du welche hast!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>Wie schade!<pause 30> Die Welt des Altertums wird dir\nverschlossen bleiben...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10005:0x005a0000>Noch heute zeugen die Loren und Schienen hier\nüberall von ihren Bemühungen.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Ranelle-Sandmeer voraus\nEin Meer aus Sand\nViele Spuren alter Kulturen")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Manchmal trägt ein Bokblin ein Monsterhorn an\nseiner Hüfte.\n\n\nNutze die <color red<Peitsche>coloroff>, um es ihm zu <color red<entreißen>coloroff>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "Wüste Ranelle voraus\nVersuche, das Rätsel des alten\nBergwerks zu lösen.")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "Suchst du einen <color red<Ort>coloroff>, wo der Keimling\nschnell <color red<wachsen kann>coloroff>? Das wäre sehr\nfreundlich von dir, <heroname>.\n\n<0x10009:0x00110804>Es würde mir helfen... Wenn ich eine\n<color red<Frucht des Lebensbaums >coloroff>esse, werde\nich vielleicht wieder gesund.\n\n<0x10009:0x00080a00>Allerdings kannst du den Keimling\nnicht überall einpflanzen. Du musst\nein Stück <color red<fruchtbare Erde>coloroff> finden!")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00080a03>Hallo, <heroname>!<pause 15>\nDas ist ein <color red<Keimling>coloroff> des <color red<Lebensbaums>coloroff>, richtig?\n\n\nTut mir leid, aber ich kann nicht mehr.<pause 30>\nIch kann nicht warten, bis der gediehen ist!\n<0x10009:0x0008110c>Hrrr, hrrr...\n\nFalls ich jemals wieder gesund werde, singe ich\ndir das Lied aber gerne!\n<0x10009:0x00081102>Hrrr, hrrr...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "Beeile dich und bring mir die <color blue<Frucht des\nLebensbaums>coloroff>, <heroname>!")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Da fällt mir ein... Die Roboter haben\nden <color red<Lebensbaumkeimling>coloroff> da gepflanzt.\nEr hilft gegen jede Krankheit! <pause 20>Hrrr...<0x10009:0x0008110c><pause 30>\n<0x10009:0x00000000>Er ist schon gewachsen...<pause 30> Hrrr...<0x10009:0x0008110c><pause 45>\n<0x10009:0x00110804>Aber für mich ist es vielleicht schon\nzu spät...<pause 20>")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Hrrr, hrrr...<pause 30>\n\n\n\n<0x10009:0x00080a03>Oh...<pause 20>\nSolch einen Gast sieht man selten!\n\n\n<0x10009:0x00080a00>Du bist doch ein <color blue<Mensch>coloroff>?!?\nWas treibt dich denn hierher?\n\n\n<pause 15>.<pause 15>.<pause 15>.\n\n\n\n<0x10009:0x0011080c>So, so, du kommst also vom <color blue<Himmel>coloroff>.\nDu heißt <heroname>? <0x10006:0xffcd>Hrrr...<pause 15>\nIrgendwas fehlt mir da...\n\n<0x10009:0x00080a00>Wie wäre es mit so was wie\n<color red<WR-16 <heroname>>coloroff>?\nSo wie meine Freunde?\n\n.<pause 20>.<pause 20>.<pause 20>\nGefällt dir nicht?<pause 15> Na ja...<pause 15>\n<0x10009:0x00080802>Hrrr, hrrr...\n\nAlso... Was willst du von mir?\n\n\n\n<0x10009:0x00080a03>Ho... <pause 30>Hrrr...\nDu willst, dass ich dir ein Lied beibringe?")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Du sagtest gerade, dass du vom Himmel\nkommst, <heroname>...\nDu bist also der Auserwählte der Göttin, ja?\n\nHm, das erklärt einiges...\n\n\n\n<0x10009:0x000a0a00>Aber weißt du was? Du kommst mir im\nMoment reichlich ungelegen...\n\n\n<0x10009:0x000a0a00>Tut mir leid, dass ich dir das so sagen muss,\naber du siehst es ja selbst...<pause 30>\n<0x10009:0x0000000c>Hrrr...\n\n<0x10009:0x000a0a00>Ich werde gerade von einer schweren Krankheit\ngepeinigt und kann daher nicht singen...\n\n\n<0x10009:0x00110804>Es ist schon eine Last, von der Göttin\nauserwählt zu sein, hrrr...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "Ranelle-Mine voraus\nDas Rätsel des Steins der Zeit")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "Betreten nur mit Erlaubnis des\n<color blue<Donnerdrachen Ranelle>coloroff>!")
          }

