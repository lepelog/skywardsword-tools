          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("Ein schöner Ausblick, oder?")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Das ist...<pause1E>\nBring das schnell zum <b<Donnerdrachen>>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Dieser Keimling wird im <b<Land\nRanelle >>nicht wachsen, bzzz!\n\x0E\x01\x09\x04\x00\x900Lass dir was einfallen!\n\n\x0E\x01\x09\x04\x03\x900Mit der <r<Frucht des Lebensbaums\n>>wird der Donnerdrache wieder gesund\nwerden!<pause1E>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900Was willst du damit?<pause1E>\nDer <b<Donnerdrache >>braucht unbedingt\neine <r<Lebensbaumfrucht>>!\n\n\x0E\x01\x09\x04\x03\x900Du willst ihm doch helfen, oder?\n[1]Klar![2]Eigentlich...")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900Das ist eine gute Nachricht, bzzz!\nDann solltest du ihn allerdings\nwoanders einpflanzen.\n\n\x0E\x01\x09\x04\x03\x900Und zwar <r<nicht in Ranelle>>!<pling> Bzzz!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900Eigentlich ja? Das höre ich gern!\nDu solltest ihn allerdings woanders\neinpflanzen.\n\n\x0E\x01\x09\x04\x03\x900Und zwar <r<nicht in Ranelle>>!<pling> Bzzz!")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Dem <b<Donnerdrachen>> geht es schlecht,<pause0F>\nund hier will kein Baum so recht\nwachsen...<pause1E>\n\x0E\x01\x09\x04\x01\xC00Wir haben keine Zeit mehr...")
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
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09Ich freue mich über dein Interesse!\nWenn du etwas über die Legende der\ndrei Drachen weißt, sag es mir, ja?")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06Wolltest du mir noch etwas sagen?\nWenn du etwas über die Legende der\ndrei Drachen weißt, sag es mir, ja?")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0AWelch seltener Besuch!<pause1E>\nMein Name ist <b<Kennbun>>. Ich erforsche\nhier die <r<Legende der drei Drachen>>.\n\n\x0E\x01\x09\x04\x2F00\x07Diese Gegend mag trostlos wirken,\ndoch ich bin sicher, dass sich hier\netwas verbirgt.\n\nDein Name ist also Link?\nKein einfacher Name...\n\n\n\x0E\x01\x09\x04\x2F01\xD00Erzähl mir doch mal, was du\nin dieser Einöde suchst!\n.<pause0F>.<pause0F>.<pause0F>\n\n\x0E\x01\x09\x04\x2F00\x07Eine <b<heilige Flamme>>? Irgendwo\nhabe ich davon schon gehört...<pause19>\nOder etwa doch nicht?\n\n\x0E\x01\x09\x04\x2F0F\x709Stimmt ja!<pause19> \x0E\x01\x09\x04\x2F00\xD00Jetzt weiß ich's!\nIch habe in alten Schriften über das\n<b<Ranelle-Sandmeer>> davon gelesen.\n\n\x0E\x01\x09\x04\x2F08\xD00Leider erinnere ich mich nicht mehr\nan Einzelheiten... Aber zum Sandmeer\ngeht es da drüben lang!")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD00Um zum Ranelle-Sandmeer zu\ngelangen, brauchst du diesen Schlüssel.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Pass auf dich auf!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709Link!\nDu warst im Reich des Donnerdrachen!<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDWie ärgerlich!<pause5A>\n\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDJetzt bin ich doch nicht\nder Erste, der es geschafft\nhat!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD0ADies ist der Weg zum Reich\ndes <r<Donnerdrachen>>...<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Leider ist er zu eng für mich...\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Was könnte man da bloß tun?")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Hey, Link!\n\n\n\nHast du die <b<heilige Flamme>>, von der\ndu erzähltest, mittlerweile gefunden?\n\n\nSeit ich davon gehört habe, konnte ich\nkaum an etwas anderes denken. Du\nmusst mir alles erzählen!\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14>\nWas für ein Abenteuer! Ich bin wirklich\nbeeindruckt.\n\nDu bist ein echter Held,\nLink!")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AIch kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause0F>\n\n\nHier in der Nähe scheint es eine\nverborgene Gegend zu geben!\n\n\nIch habe einen <r<kleinen Gang>><pling> gefunden!\nLeider passe ich da nicht durch...\n\n\n\x0E\x01\x09\x04\x2F00\xD00Meiner Ansicht nach haust dort\nder <r<Donnerdrache>>, einer der drei\nlegendären Drachen...\n\n\x0E\x01\x09\x04\x2F00\x800Ich bin mir zudem sicher, dass auch\ndie Roboter etwas mit der Sache zu\ntun haben!<pause0F>\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDer <r<Donnerdrache>>, die Roboter, die\nSteine der Zeit<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDWas für ein Mysterium!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00Hör mal, Link!\nDu hast doch einmal für meine\nAusgrabungen gespendet...<pause14>\n\nDank dir habe ich ganz viele Steine\nder Zeit entdeckt!\n\x0E\x01\x09\x04\x2F00\xD01Ich werde dir das Zehnfache deiner\nSpende zurückzahlen!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Hey, Link!\n\n\n\nHast du die <b<heilige Flamme>>, von der\ndu erzähltest, mittlerweile gefunden?\n\n\nSeit ich davon gehört habe, konnte ich\nkaum an etwas anderes denken. Du\nmusst mir alles erzählen!\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14>\nWas für ein Abenteuer! Ich bin wirklich\nbeeindruckt.\n\nDu bist ein echter Held,\nLink!")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0AIch kann dir etwas von der Legende der\ndrei Drachen erzählen.<pause0F>\n\n\nHier in der Nähe scheint es eine\nverborgene Gegend zu geben!\n\n\nIch habe einen <r<kleinen Gang>><pling> gefunden!\nLeider passe ich da nicht durch...\n\n\n\x0E\x01\x09\x04\x2F00\xD00Meiner Ansicht nach haust dort\nder <r<Donnerdrache>>, einer der drei\nlegendären Drachen...\n\n\x0E\x01\x09\x04\x2F00\x800Ich bin mir zudem sicher, dass auch\ndie Roboter etwas mit der Sache zu\ntun haben!<pause0F>\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDDer <r<Donnerdrache>>, die Roboter, die\nSteine der Zeit<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDWas für ein Mysterium!")
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
/*< 46>*/ 			printf("Vielen Dank, dass du dem \nDonnerdrachen geholfen hast!")
          		  case 1:
/*<136>*/ 			printf("Warst du beim Donnerdrachen?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Wenn der Donnerdrache die\n<r<Lebensbaumfrucht>> isst, sollte er\ndadurch genesen.")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00In dieser Hitze will nichts so recht\ngedeihen...<pause1E> \x0E\x01\x09\x04\x01\xC00Wenn das so weitergeht...\n\x0E\x01\x06\x02\xFECDDer Donnerdrache...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Ich mache mir sorgen um den\nDonnerdrachen. Bitte finde eine\n<r<Lebensbaumfrucht>> für ihn, bzzz.")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900Um den Donnerdrachen zu kurieren,\nhaben wir einen <r<Lebensbaumkeimling\n>>eingepflanzt.")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Der <b<Donnerdrache>> ist krank.<pause0F>\n\n\n\n\x0E\x01\x09\x04\x03\xC00Wenn du diesen Stein der Zeit willst,\nbrauchst du seine Erlaubnis.<pause1E> \x0E\x01\x09\x04\x01\xC00Aber jetzt\nhast du wohl andere Sorgen, oder?")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hey, du da!\nBist du nicht Link?\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDWas für ein Zufall!<pause0F>\nDich wollte ich sehen!<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDKomm mal her zu mir, ja?")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Hey, Link!\nIch habe ein Loch gefunden, hinter\ndem es weiterzugehen scheint...\n\nLeider ist es von harten Felsbrocken\nversperrt. Bis ich die aus dem Weg\nhabe, dauert es wohl noch etwas...")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("Wenn du dich nicht beeilst, muss ich\nihn ablegen!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900Hier gibt es viele große Steine der Zeit.<pause1E>\n\x0E\x01\x09\x04\x00\x900Hast du auch die Erlaubnis des\n<b<Donnerdrachen>> eingeholt?\n\n\x0E\x01\x09\x04\x01\x900Ich wollte dieses Exemplar hier\ngerade zu ihm bringen!")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00Hier sind viele Ungeheuer.<pause0F> \x0E\x01\x09\x04\x03\xC00Sei...")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("Dem Donnerdrachen geht es blendend!")
          		  case 1:
/*<137>*/ 			printf("Der Donnerdrache ist wieder gesund!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("Was hast du mit der Frucht gemacht?<pause2D>\nHast du sie denn bereits dem\n<b<Donnerdrachen>> gebracht?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00In <b<Ranelle>> wird dieser Baum\nwohl niemals Früchte tragen.<pause1E>\n\x0E\x01\x09\x04\x03\x900Es bräuchte einfach eine\nfruchtbarere Gegend...")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("Auf der anderen Seite der Brücke\nhaben wir den <r<Lebensbaumkeimling>>,\ndessen Früchte alle Krankheiten\nheilen, eingepflanzt.<pause1E>\n\x0E\x01\x09\x04\x00\xC00Leider sind unsere Bemühungen\nin dieser Umgebung fruchtlos\ngeblieben...")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900Der <b<Donnerdrache>> hat mir erlaubt,\nhier nach <b<Steinen der Zeit>> zu graben.\n\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00Im Augenblick geht es ihm jedoch\nziemlich mies...<pause0F> Ich mache mir wirklich\nSorgen!<pause1E> \x0E\x01\x09\x04\x01\xC00Wenn das so weitergeht...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("<pause14>.<pause14>.<pause14>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<117>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901Du hast mich gerettet, vielen Dank,\nLink!\nIch will dir dafür eine weitere\nBelohnung zukommen lassen.\n\x0E\x01\x09\x04\x00\x900Ich werde mich darum kümmern und\nsie dir geben, wenn du wiederkommst.\nDu wirst dich sicher freuen!")
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
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00Dies ist die <b<Ranelle-Schlucht>>.\nDen alten Legenden zufolge lebt hier\nein Drache, der der Göttin dient.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00Da sich hier viele Steine der Zeit\nfinden, hat eine alte Kultur hier wohl\nein Steinwerk errichtet.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Es freut mich zu sehen, wie sehr\ndich meine Forschungen interessieren.\nDein Beitrag wird nicht umsonst sein!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09Oh, interessierst du dich für meine\nAusgrabungen?<pause3C> Ich würde mich sehr\nfreuen, wenn du meine Forschung\nunterstützen würdest.<pause3C>\n\x0E\x01\x09\x04\x2F00\xD07Du kannst dir sicher vorstellen, dass\nmeine Forschung eine Menge Geld\nverschlingt...\n\nWillst du die Wissenschaft vielleicht\nmit 10 Rubinen unterstützen?\n[1]Natürlich![2-]Nein.")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("\x0E\x01\x09\x04\x2F02\x208Das freut mich! Und die Nachwelt\nwird es dir danken.")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("Wie, deine Rubine reichen nicht?\nDann unterstütze die Wissenschaft,\nwenn du welche hast!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDWie schade!<pause1E>\nDie Welt des Altertums wird dir\nverschlossen bleiben...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00Noch heute zeugen die Loren\nund Schienen hier überall von ihren\nBemühungen.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Ranelle-Sandmeer voraus\nEin Meer aus Sand\nViele Spuren alter Kulturen")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Manchmal trägt ein Bobklin ein\nMonsterhorn an seiner Hüfte.\n\n\nNutze die <r<Peitsche>>, um es ihm zu\n<r<entreißen>>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Wüste Ranelle voraus\nVersuche, das Rätsel des alten\nBergwerks zu lösen.")
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
/*<105>*/ 				printf("Suchst du einen <r<Ort>>, wo der Keimling\nschnell <r<wachsen kann>>? Das wäre sehr\nfreundlich von dir, Link.\n\n\x0E\x01\x09\x04\x11\x804Es würde mir helfen... Wenn ich eine\n<r<Frucht des Lebensbaums >>esse, werde\nich vielleicht wieder gesund.\n\n\x0E\x01\x09\x04\x08\xA00Allerdings kannst du den Keimling\nnicht überall einpflanzen. Du musst\nein Stück <r<fruchtbare Erde>> finden!")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03Hallo Link!<pause0F>\nDas ist ein <r<Keimling>> des <r<Lebensbaums>>,\nrichtig?\n\nTut mir leid, aber ich kann nicht mehr.<pause1E>\nIch kann nicht warten, bis der gediehen\nist! \x0E\x01\x09\x04\x08\x110CHrrr, hrrr...\n\nFalls ich jemals wieder gesund werde,\nsinge ich dir das Lied aber gerne!<pause1E>\n\x0E\x01\x09\x04\x08\x1102Hrrr, hrrr...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("Beeile dich und bring mir die <b<Frucht\ndes Lebensbaums>>, Link!\n")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("Da fällt mir ein... Die Roboter haben\nden <r<Lebensbaumkeimling>> da gepflanzt.\nEr hilft gegen jede Krankheit! <pause14>Hrrr...\x0E\x01\x09\x04\x08\x110C<pause1E>\n\x0E\x01\x09\x04\x00\x00Er ist schon gewachsen...<pause1E> Hrrr...\x0E\x01\x09\x04\x08\x110C<pause2D>\n\x0E\x01\x09\x04\x11\x804Aber für mich ist es vielleicht schon\nzu spät...<pause14>")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDHrrr, hrrr...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03Oh...<pause14>\nSolch einen Gast sieht man selten!\n\n\n\x0E\x01\x09\x04\x08\xA00Du bist doch ein <b<Mensch>>?!?\nWas treibt dich denn hierher?\n\n\n<pause0F>.<pause0F>.<pause0F>.\n\n\n\n\x0E\x01\x09\x04\x11\x80CSo, so, du kommst also vom <b<Himmel>>.\nDu heißt Link? \x0E\x01\x06\x02\xFFCDHrrr...<pause0F> \nIrgendwas fehlt mir da...\n\n\x0E\x01\x09\x04\x08\xA00Wie wäre es mit so was wie\n<r<WR-16 <r<Link<r<>>?\nSo wie meine Freunde?\n\n.<pause14>.<pause14>.<pause14>\nGefällt dir nicht?<pause0F> Na ja...<pause0F> \n\x0E\x01\x09\x04\x08\x802Hrrr, hrrr...\n\nAlso... Was willst du von mir?\n\n\n\n\x0E\x01\x09\x04\x08\xA03Ho... <pause1E>Hrrr...\nDu willst, dass ich dir ein Lied\nbeibringe?")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Du sagtest gerade, dass du vom\nHimmel kommst, Link...\nDu bist also der Auserwählte der\nGöttin, ja?\nHm, das erklärt einiges...\n\n\n\n\x0E\x01\x09\x04\n\xA00Aber weißt du was? Du kommst mir\nim Moment reichlich ungelegen...\n\n\n\x0E\x01\x09\x04\n\xA00Tut mir leid, dass ich dir das so sagen\nmuss, aber du siehst es ja selbst...<pause1E>\n\x0E\x01\x09\x04\x00\x0CHrrr...\n\n\x0E\x01\x09\x04\n\xA00Ich werde gerade von einer schweren\nKrankheit gepeinigt und kann daher\nnicht singen...\n\n\x0E\x01\x09\x04\x11\x804Es ist schon eine Last, von der Göttin\nauserwählt zu sein, hrrr...")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Ranelle-Mine voraus\nDas Rätsel des Steins der Zeit")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Betreten nur mit Erlaubnis des\n<b<Donnerdrachen Ranelle>>!")
          }

