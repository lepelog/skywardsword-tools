          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Ga weg... Laat me met rust...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Ik ben een struik... Koe-kwie, ik ben een struik...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10012:0x00000001>Meester, ik stel voor dat u uitzoekt hoe\nhet gaat met het wezen dat opgerold op\nde grond ligt.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10012:0x00000001>Meester, als u niet het wezen dat hier ligt\ntehulp schiet, heeft het minder dan 5% kans\nom in leven te blijven.")
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
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>Kwie-koe! Een groene! Ik wist niet\ndat ze ook in die kleur komen!")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Doe me alsjeblieft geen pijn, koe-wiep!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10009:0x0000000b>Huh? Waarom is het opeens zo stil?")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10012:0x00000004>Meester, ik ben ook in staat om een\nanalyse te geven van uw huidige\nvechtprestaties tegen de vijanden\nwaartegen u heeft gevochten.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	wait_frames(5)
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	wait_frames(10)
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf(/* textboxtype: 0, unk: 0, line: 161 */ "Tijdens het <color green<focussen>coloroff> op een vijand met (Z)\nkunt u op (v) drukken om mij te roepen.\nDan zal ik u informatie geven over uw\nvijand en uw vechtprestaties.<0x10011:0x07cd><0x10011:0x09cd>")
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
/*< 41>*/ 			printf(/* textboxtype: 2, unk: 0, line: 23 */ "<0x10009:0x00000007>Bedankt voor het vinden van al mijn\nKikwi-vrienden.\n\n\n<0x10009:0x00000013>Jammer dat het meisje dat je zoekt, niet\nbij een van hen was. Ik hoop dat je haar\nsnel vindt, kwie!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000007>Het is fijn om te weten dat ons stamhoofd\nveilig is! Ik kan haast niet geloven dat hij\nal die tijd zo dichtbij was, kwiee!\n\n<0x10009:0x00000013>Maar het spijt me om te horen dat het\nmeisje dat je zoekt, niet bij hem was.")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Vertel mijn stamhoofd alsjeblieft dat ik\nveilig ben. Volgens mij is het meisje dat\nje zoekt, dat ook. Ze is vast bij ons\nstamhoofd, kwie-koe!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "Het heeft me weer gevonden!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10008:0x02cd>Kwieee!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10006:0xfdcd>...")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "Hè? Je wilt me niet... opeten? Kwie... En\nnu ik erover nadenk, waarom vocht je\ntegen al die rode monsters?")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000001>Kie-paliep! Ik ben <color blue<Machi>coloroff>. Ik ben een\nKikwi. Je lijkt me wel oké, al ben je een\nbeetje eng. Bedankt voor je hulp!")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10009:0x00000005>Dat is raar, kie-koe. Een tijdje geleden\nheb ik ook al zo'n... wezen als jij ontmoet.\n[1-]Wie?[2-]Zelda?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>Ik weet niet wie het was. Is ze een vriendin\nvan jou? Ze leek nogal in de problemen te\nzitten toen ik haar zag.")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10009:0x0000000a>Ze werd achternagezeten door een paar\nvan die gemene rode kerels, maar ze is\nontsnapt, samen met ons <color blue<stamhoofd>coloroff>.")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000004>Wat is een Zel-da? Ik weet niet wie dat\nmeisje was, koe-kwie, maar ze leek nogal\nin de problemen te zitten toen ik haar zag.")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 124 */ "Ik neem een uitzonderlijk sterk resultaat\nwaar bij het detecteren in dit gebied.\nIk stel voor dat u verdergaat met het\nonderzoeken van de omgeving.")
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
/*< 31>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000007>Bedankt voor het vinden van al mijn\nvrienden, koe-wiep!\n\n\n<0x10009:0x00000013>Maar... zo te zien is het nog steeds\ngevaarlijk hier in het woud.")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Wat fijn dat ons stamhoofd veilig is, kwie.\nToch wacht ik hier nog eventjes tot al die\nmonsters weg zijn.")
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10009:0x00000004>Ik blijf hier nog een tijdje, denk ik. Als je\nons stamhoofd ziet, kwie, kun je 'm dan\nzeggen waar ik ben?")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "Eet me niet op! Ik ben helemaal niet\nlekker, hoor! Laat me gaan, kwie!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>O? Ons stamhoofd was bezorgd over mij?\nWat is het fijn om te horen dat hij veilig\nis, kwie!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>Ik ben <color blue<Oelo>coloroff>. Als je ons stamhoofd ziet,\nzeg 'm dan dat ik hier ben, kie-paliep!\n\n\n<0x10009:0x0000000f>Ik weet niet of het al veilig is, dus ik blijf\nnog eventjes hier om er zeker van te zijn\ndat alle monsters weg zijn.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00000005>Hè? Maar jij lijkt helemaal niet op een\nmonster, koe-wiep...\n\n\nJe zoekt een meisje met blonde haren?<pause 15>\n<0x10009:0x00000013>Nee, dat heb ik niet gezien, maar ik\nheb me ook al die tijd verstopt.")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 125 */ "Ik bespeur geen monsters in de directe\nomgeving en trek daarom de conclusie\ndat het veilig is voor de Kikwi om van\nzijn plek te komen.\nHet lijkt erop dat de Kikwi niet uit de\nboom kan komen. Ik stel voor dat u\neen manier vindt om hem te helpen.\n\n<0x10012:0x00000001>Mocht u een suggestie nodig hebben,\ndan kunt u op <icon 19> drukken om de acties\nte zien die u kunt uitvoeren.<0x10011:0x0bcd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>Kie-paliep! Bedankt voor het vinden van\nal mijn Kikwi-vrienden!\n\n\n<0x10009:0x0000000b>Zo te zien zijn er nu geen monsters meer,\ndus blijf ik nog eventjes hier.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>Ons stamhoofd is veilig? Dat is goed\nnieuws!\n\n\n<0x10009:0x00000013>Wat ben ik geschrokken, kwie. Ik blijf\nnog even hier om bij te komen.")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10009:0x00000004>Ik moet nu echt even uitrusten. Als je\nons stamhoofd ziet, kun je 'm dan laten\nweten dat ik hier ben, koe-wiep?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>Au! Dat... eh... werkt ook.<pause 30> Nou ja, bedankt\nvoor je hulp, kie-paliep!")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000005>Echt waar? Maakte ons stamhoofd zich\nzorgen over mij? Nou, ik ben blij dat hij\nveilig is, kwie-koe.")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>Ik heet <color blue<Roibo>coloroff>. Als je ons stamhoofd ziet,\nkun je 'm dan zeggen waar ik ben?\n<0x10009:0x00000013>O, kwie... Mijn benen trillen nog steeds.")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000005>O? Een meisje? Sorry, kwie, ik heb geen\nmeisje gezien.\n\n\n<0x10009:0x00000004>Maar misschien weet ons stamhoofd wel\niets over dat meisje.")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>Kikwi!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			wait_frames(60)
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 47 */ "<0x10009:0x0000000b>Je hebt al die rooie kerels verslagen.\nBetekent dat dat je...<pause 15> geen slechterik\nbent?\n\n<0x10009:0x00000013>Weet je, ik heb een probleempje. Mijn\nbenen doen het niet meer en ik weet niet\nhoe ik uit de boom kan komen. Kun je me\nhelpen, kwie?")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 128 */ "Meester, ik raad u aan om uw voortgang\nop te slaan voor u Zelda achterna gaat\nrichting de tempel diep in het woud.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "Uit een analyse van de resultaten van\nhet detecteren maak ik op dat er geen\nandere Kikwi's in dit gebied zijn.\n\nIk stel voor dat u naar het stamhoofd\nvan de Kikwi's gaat en met hem spreekt.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf(/* textboxtype: 1, unk: 1, line: 129 */ "Dit gebied geeft een uitstekend uitzicht\nop uw omgeving. Ik raad u aan hier\ngebruik van te maken om nabije\nKikwi's te detecteren.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf(/* textboxtype: 1, unk: 1, line: 126 */ "Bij het detecteren zag ik in dit gebied\ngeen resultaat dat overeenkomt met\nZelda. Ik stel voor om op een andere\nlocatie verder te zoeken.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf(/* textboxtype: 2, unk: 1, line: 177 */ "<0x10009:0x00181705>Hmm? Wat is er, maatje? Wil je wat\nvragen?\n[1-]Blokken?[2-]Tempel?[3]Niet echt.")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf(/* textboxtype: 0, unk: 2, line: 178 */ "<0x10009:0x00161e04>Ja, raak blokken met een lichtstraal\nvan je zwaard en BOEM... Ze schieten\nzo de lucht in.\n\nVolgens de oude geschriften die ik\ngelezen heb, zijn die blokken overal\nin dit land te vinden.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>De oude geschriften vermelden een plek\ngenaamd Tempel der Bezinning. Daar\nzou op een zekere dag een bezoeker\nuit de lucht ontvangen worden.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf(/* textboxtype: 2, unk: 1, line: 180 */ "<0x10009:0x00001707>Nu ik erover nadenk, herinner ik me een\noude stenen wegwijzer ergens hier in\nde buurt.\n\n<0x10009:0x00160b00>Ik herinner me niet wat erop staat,\n<pause 15>maar ik voel tot in mijn tenen dat\nhet een aanwijzing is over hoe je de\ntempel kunt betreden!")
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
/*<451>*/ 				printf(/* textboxtype: 2, unk: 1, line: 174 */ "<0x10009:0x00ffff00>Dit blok is gemaakt van een materiaal dat\nik nog nooit eerder heb gezien. Ik heb er\nal flink tegen gemept, maar dat had geen\nresultaat.")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf(/* textboxtype: 0, unk: 2, line: 175 */ "<0x10009:0x00160b07>Weet je, maatje, volgens mij zit de\noplossing in die ene zin. Je weet wel,\n<0x10009:0x00001705>\"<color red<Roep het licht op met een zwaard uit\nde hemel>coloroff>\"?")
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
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>Als ik het me goed herinner...<pause 15> Ja, dit is\neen van de dingen die de godin voor de\nlegendarische held zou hebben\nachtergelaten.\nIs dat niet geweldig? Ik heb zelfs een\nnaam voor deze dingen verzonnen.<pause 30> Ik\nnoem ze <color blue<godinnenblokken>coloroff>! Klinkt goed,\nhè?")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf(/* textboxtype: 2, unk: 1, line: 168 */ "<0x10009:0x00001e04>In de oude geschriften staat heel\ninteressante informatie over deze\ndingen. Wat was het ook alweer?\nEven denken, eh...\n\"Roep het licht op met een zwaard uit de\nhemel<pause 30> en de meester ervan wordt\ngeholpen.\"<pause 30> Dat je het even weet.")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf(/* textboxtype: 0, unk: 2, line: 169 */ "<0x10009:0x0018170b>Ik zie dat je een zwaard hebt. Zullen\nwe samen proberen om het raadsel\nvan dit blok op te lossen?\n[1-]Natuurlijk![2-]Nee.")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>Hé! Fijn dat je me helpt, maatje!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf(/* textboxtype: 2, unk: 1, line: 171 */ "<0x10009:0x0018170c>Ach, kom op! Je zou me er zo'n plezier\nmee doen. Wil je me echt niet helpen?\n[1-]Vooruit.[2-]Nee.")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf(/* textboxtype: 0, unk: 2, line: 172 */ "<0x10009:0x00080007>Oké, ik snap het al. Je krijgt er\nnatuurlijk ook iets voor.")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>Je moet wel gek zijn om er nu nog nee\ntegen te zeggen. Tenzij je echt... Je bent\ntoch niet gek, hè?")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf(/* textboxtype: 0, unk: 2, line: 166 */ "<0x10009:0x00171908>Echt waar, je timing is perfect.\n\n\n\nKijk hier eens. Ik heb zojuist een van\ndeze dingen gevonden. Het lijkt op iets\ndat ik in oude geschriften ben\ntegengekomen.")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf(/* textboxtype: 2, unk: 1, line: 165 */ "<0x10009:0x00000001>Hoi, maatje, kom eens hier om deze\nGoron een handje te helpen.")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>Nou, dat is een bekend gezicht.\nHoi, maatje!\n\n\nIk heb ergens je hulp bij nodig. Kom eens\nhiernaartoe!")
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
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000013>Je hebt iedereen gevonden? Wauw,\ngoed gedaan! Je hebt wel wat rust\nverdiend, koe-wiep.")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000005>Hoe heb je me gevonden? Ik ging zo mooi\nop in mijn omgeving, kwie...")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>Je hebt ons stamhoofd al gevonden? Ik\nweet niet hoe je het doet, maar wat ben\nje goed in het vinden van dingen, kwie!")
          			  case 1:
/*<174>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000014>Wat knap dat je me gevonden hebt, kwie,\nmaar je hebt ons stamhoofd nog niet\ngevonden, hè?")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>Ik ben ontdekt! En ik dacht nog wel dat\ndit een goeie verstopplek was, kwie...")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000001>Ik ben <color blue<Kami>coloroff>. In dit hele woud is er geen\nKikwi die zich zo goed kan verstoppen als\nik. Behalve ons stamhoofd, natuurlijk.\nKwie!")
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
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000002>Ik weet het zeker, kwie. Dat meisje\nZelda naar wie je zoekt, rende richting\nde tempel in het hart van het woud.")
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "Met een <color yellow<katapult>coloroff> lukt het een handige\njongen als jij wel om bij de tempel te\nkomen.\n\n<0x10009:0x00000006>Ga nu op pad en vind het meisje!\nIk duim voor je, kwie-hie-hie...")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Toe maar, kwie. Klim op mijn rug en pak\nje beloning!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>Kom op, kwie, spring op mijn rug en neem\nje beloning in ontvangst.")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x0000000a>Kwie! Dus al mijn Kikwi-vrienden\nzijn in orde en willen dat ik me geen\nzorgen maak over hen? Ahaha, oké!\nWat kennen ze me toch goed.\nJe bent erg goed in het vinden van\ndingen, kwieee. Ik weet niet wie je bent\nof waar je vandaan komt, maar enorm\nbedankt!")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>Wat zeg je, kwie? Je bent ook op zoek\nnaar iemand die vermist is?\n\n\nNou, kwie... Nu je het zegt, ik ben\neerder wel een meisje tegengekomen.\nEentje met blonde haren.")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002>Dat meisje... Zelda, zo heet ze toch?\nJa, nu herinner ik het me weer.\nZe zei dat ze op weg was naar de\ntempel hier in dit woud, kwieee...\nOho! Ik waarschuwde haar voor de\ngevaren daar, maar het behendige\nmeisje sprong van mijn buik en rende\ntoch in de richting van de tempel.")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					wait_frames(15)
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					wait_frames(30)
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000003>Ja, ze ging die kant op, richting de\ntempel, kwie...<pause 15> Maar wees voorzichtig,\nhet krioelt daar van de monsters.")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					wait_frames(15)
/*<126>*/ 					printf(/* textboxtype: 2, unk: 0, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>Oho! Vergat ik toch bijna iets,\nkwie!\n\n\nAls beloning voor het vinden van\nde andere Kikwi's, geef ik je een\nKikwi-erfstuk.\n\n<0x10009:0x00000008>Ik zal het je meteen geven, kwieee.\nEen momentje...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000009>Kwie-hie-hie, nu mijn zorgen als sneeuw\nvoor de zon zijn verdwenen, herinner\nik me waar dat meisje naartoe is\ngegaan!")
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
/*<149>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
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
/*<179>*/ 						printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x00000003>Dus Machi, Oelo en Roibo zijn veilig?\nHelaas is er <color red<nog één Kikwi>coloroff> vermist. Kun\nje hem zoeken?\n\n<0x10009:0x00000002>Hij verstopt zich graag tussen het\ngras...\n\n\nO ja, ik ben het meisje dat je zoekt,\nniet vergeten. Geef me iets meer tijd,\ndan kan ik me misschien wel herinneren\nwaar ze naartoe ging.")
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<501>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000003>Hmm... Dus Machi, Oelo en Roibo zijn\nveilig? O, maar er zijn nog monsters\nin het woud, dus ik blijf liever hier,\nkwie.")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000008>Ik mis nog <color red<één Kikwi>coloroff>, kwieee. Kun je naar\nhem op zoek gaan zodat ik weet of hij in\norde is?\n\nHij verstopt zich graag tussen het\ngras.\n\n\n<0x10009:0x00000002>Als je hem voor mij kunt vinden,\nherinner ik me vast iets over waar het\nmeisje is waar je naar zoekt, kwie.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
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
/*<184>*/ 						printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10009:0x00000003>Dus Machi, Oelo en Kami zijn veilig?\nHelaas is er <color red<nog één Kikwi >coloroff>vermist.\nKun je hem zoeken zodat ik weet\ndat hij veilig is?\n<0x10009:0x00000002>Hij klimt graag in bomen, kwie...\n\n\n\nO ja, ik ben het meisje dat je zoekt,\nniet vergeten. Geef me iets meer tijd,\ndan kan ik me misschien wel herinneren\nwaar ze naartoe ging.")
          					  case 1:
/*<213>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<508>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10009:0x00000003>Hmm... Dus Machi, Oelo en Kami zijn\nveilig? O, maar er zijn nog monsters\nin het woud, dus ik blijf liever hier,\nkwie.")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000008>Ik mis nog <color red<één Kikwi>coloroff>, kwie. Kun je naar\nhem op zoek gaan zodat ik weet of hij in\norde is?\n\n<0x10009:0x00000002>Hij klimt graag in bomen, kwie...\n\n\n\n<0x10009:0x00000002>O ja, ik ben het meisje dat je zoekt,\nniet vergeten. Geef me iets meer tijd,\ndan herinner ik me misschien wel\nwaar ze naartoe ging.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf(/* textboxtype: 1, unk: 2, line: 78 */ "<0x10009:0x00000003>Ik ben erg blij dat Machi en Oelo\nveilig zijn, maar ik maak me zorgen\nover de andere Kikwi's.\n\nEr zijn nog <color red<twee >coloroff>Kikwi's vermist.\nKun je ze proberen te vinden en\nervoor zorgen dat ze veilig zijn?\n\n<0x10009:0x00000008>O, en ik herinner me iets over het\nmeisje dat je zoekt. Ze ging die kant\nop, kwie! Of was het die andere kant?\nO nee...")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<517>*/ 							printf(/* textboxtype: 2, unk: 0, line: 77 */ "<0x10009:0x00000003>Dus Machi en Oelo zijn veilig?\n\n\n\nO, maar er zijn nog monsters in het\nwoud, dus ik blijf liever hier, kwie.")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000002>Nog <color red<twee>coloroff> van mijn stamleden zijn vermist,\nkwie! Kun je ze zoeken en ervoor zorgen\ndat ze veilig zijn?\n\nIk maak me zo'n zorgen over mijn\nKikwi-vrienden, maar als je me\ngerust kunt stellen, herinner ik me\nmisschien wel iets over het meisje.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
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
/*<195>*/ 						printf(/* textboxtype: 1, unk: 2, line: 81 */ "<0x10009:0x00000003>Kwie... Dus Machi, Roibo en Kami\nzijn veilig?\n\n\nWat fijn! O, maar er is nog <color red<één Kikwi>coloroff>\nniet gevonden. Kun je alsjeblieft naar\nhem zoeken?\n\n<0x10009:0x00000002>Hij kan zich erg goed als een struik\nvermommen, dus zoek in de buurt van\nronde struiken.\n\nTrouwens, ik denk dat ik op het punt\nsta me iets te herinneren over waar\nhet meisje dat je zoekt, naartoe is\ngegaan. Ik heb nog iets meer tijd nodig.")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<526>*/ 							printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10009:0x00000003>Dus Machi, Roibo en Kami zijn veilig?\n\n\n\nO, maar er zijn nog monsters in het\nwoud, dus ik durf niet weg te gaan.")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000008>Ik mis nog <color red<één Kikwi>coloroff>, kwieee. Kun je\nnaar hem op zoek gaan zodat ik weet\nof hij in orde is?\n\n<0x10009:0x00000002>Hij kan zich erg goed als een struik\nvermommen, dus zoek in de buurt van\nronde struiken.\n\n<0x10009:0x00000002>O ja, ik denk dat ik op het punt sta\nme iets te herinneren over waar het\nmeisje dat je zoekt, naartoe is gegaan.\nIk heb nog iets meer tijd nodig.")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000003>Ik ben erg blij dat Machi en Roibo\nveilig zijn, maar ik maak me zorgen\nover de andere Kikwi's.\n\nEr zijn nog <color red<twee >coloroff>Kikwi's vermist.\nKun je ze proberen te vinden en\nervoor zorgen dat ze veilig zijn?\n\n<0x10009:0x00000008>O, en ik herinner me iets over het\nmeisje dat je zoekt. Ze ging die kant\nop, kwie! Of was het die andere kant?\nO nee...")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<535>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "<0x10009:0x00000003>Kwie... Dus Machi en Roibo zijn veilig?\n\n\n\nMaar het woud is dat nog niet, want\ner loeren nog monsters, dus ik durf\nhier niet weg te gaan.")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Nog <color red<twee>coloroff> van mijn stamleden zijn vermist,\nkwie! Kun je ze zoeken en ervoor zorgen\ndat ze veilig zijn?\n\nIk maak me zo'n zorgen over mijn\nKikwi-vrienden, maar als je me\ngerust kunt stellen, herinner ik me\nmisschien wel iets over het meisje.")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
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
/*<194>*/ 						printf(/* textboxtype: 1, unk: 2, line: 87 */ "<0x10009:0x00000003>Ik ben erg blij dat Machi en Kami veilig\nzijn, maar ik maak me zorgen over de\nandere Kikwi's.\n\nEr zijn nog <color red<twee >coloroff>Kikwi's vermist.\nKun je ze proberen te vinden en\nervoor zorgen dat ze veilig zijn?\n\n<0x10009:0x00000008>O, en ik herinner me iets over het\nmeisje dat je zoekt. Ze ging die kant\nop, kwie! Of was het die andere kant?\nO nee...")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<544>*/ 							printf(/* textboxtype: 2, unk: 0, line: 86 */ "<0x10009:0x00000003>Dus Machi en Kami zijn veilig?\n\n\n\nO, maar er zijn nog monsters in het\nwoud, dus ik durf niet weg te gaan.")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000002>Nog <color red<twee>coloroff> van mijn stamleden zijn vermist,\nkwie! Kun je ze zoeken en ervoor zorgen\ndat ze veilig zijn?\n\nIk maak me zo'n zorgen over mijn\nKikwi-vrienden, maar als je me\ngerust kunt stellen, herinner ik me\nmisschien wel iets over het meisje.")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00000003>Ik ben erg blij dat Machi veilig is,\nmaar ik maak me zorgen over de\nandere Kikwi's.\n\nEr zijn nog <color red<drie >coloroff>Kikwi's vermist.\nKun je ze proberen te vinden en\nervoor zorgen dat ze veilig zijn?\n\n<0x10009:0x00000008>Kon ik me nou maar herinneren\nwaar dat meisje naartoe is gegaan,\nkwie. Hmmm...")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Kwieeee-hieee...<pause 15> Ik ben <color blue<Tuhé>coloroff>, het\nKikwi-stamhoofd.\n\n\nHet is je gelukt om mijn perfecte\ncamouflage te doorzien. <pause 15>Kwiee, je bent\nduidelijk op je plaats in het woud.\n[1-]Waar is Zelda?[2-]Over je stamgenoten...")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>?<pause 15>\n\n\n\nO, dat meisjeswezen met het blonde haar.\nZe leek een beetje op jou. Ja, ze was bij\nmij, kwieee.\n\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Wat? Je hebt leden van mijn stam\nontmoet, kwieee?")
/*<553>*/ 							printf(/* textboxtype: 2, unk: 0, line: 89 */ "<0x10009:0x00000003>Kwieee... Dus Machi is veilig?\n\n\n\nO néé, maar de monsters! Die liggen\nop de loer in het woud. Ik durf hier\nniet weg te gaan.")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000002>Nog <color red<drie >coloroff>van mijn stamleden zijn\nvermist, kwie! Kun je ze zoeken en\nervoor zorgen dat ze veilig zijn?\n\nIk maak me zo'n zorgen over mijn\nKikwi-vrienden, maar als je me\ngerust kunt stellen, herinner ik me\nmisschien wel iets over het meisje.")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Ben jij ook naar iemand op zoek?\n\n\n\nHm... Ja. Tijdens de paniek om de\nmonsteraanvallen heb ik inderdaad\nmet een blond meisje van jouw soort\ngesproken, kwieee.\n<0x10009:0x0000000c>Maar dit is niet de tijd om hierover\nte praten... Het woud zit vol monsters\nen ik maak mij zorgen over mijn stam.\n\nKwieee... Dit maakt mijn herinneringen\naan dat meisje erg onduidelijk...")
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
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10012:0x00000004>Meester <heroname>, dit is een\nperfecte tijd om u extra informatie te\ngeven over het gebruik van de objecten\ndie u in uw bezit heeft.\nEen van de dingen die u dient te weten, is\ndat u de <color yellow<katapult>coloroff> onmiddellijk gebruiks-\nklaar kunt maken door <color green<herhaaldelijk op\n>coloroff><icon 41> <color green<te drukken>coloroff>.<0x10011:0x0fcd>\nMocht u de details hierover vergeten, dan\nkunt u op <icon 37> drukken om de informatie\nhierover onder <color red<Hulp>coloroff> te bekijken.<0x10011:0x0bcd>")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Meester, u bevindt zich nu in het\n<color blue<Faron-woud>coloroff>.")
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
/*<588>*/ 		printf(/* textboxtype: 0, unk: 1, line: 133 */ "Attentie, <0x10012:0x00000004>meester <heroname>, mijn\nberekeningen wijzen erop dat er een kans\nvan 80% is dat de heilige vlam aan\nde overzijde van dit meer ligt.")
          	  case 1:
/*<587>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10012:0x00000004>Meester, volgens mijn berekeningen\nis er een kans van 80% dat er zich\nachter deze poort een heilige vlam\nbevindt.\nTevens heb ik de hypothese ontwikkeld\ndat de kracht van de godin waarover de\nKikwi-kluizenaar sprak, in feite de\n<color red<hemelstraal>coloroff> is.\nLaad uw zwaard op terwijl u voor de\npoort staat en gebruik deze energie om\n<color green<het missende deel van het symbool te\ntekenen>coloroff>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x004b0000>De overvloed aan water in deze regio\nis de reden dat de flora, waar deze\ngigantische boom onderdeel van uitmaakt,\nhier zo divers is.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf(/* textboxtype: 0, unk: 2, line: 163 */ "<0x10009:0x00000001>Nou, dat is een bekend gezicht.\nHoi, maatje!")
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
/*<319>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10005:0x004b0000>Het welige plantenleven en het vele\nwater zorgen ervoor dat deze regio\nerg aantrekkelijk is voor dieren.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Hé, ga er nou niet vandoor!\n\n\n\nIk heb je hulp nodig om het raadsel van\ndeze godinnenblokken op te lossen.")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Wacht even, maatje!\n\n\n\nIk wil je om een gunst vragen.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Wacht even, maatje!\n\n\n\n<0x10009:0x00170600>Loop me niet voorbij alsof je me niet\nziet terwijl ik weet dat je dat wel doet.<pause 15>\nMag je me soms niet of zo?\n[1-]Sorry![2-]Goed geraden.")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>O, je bent op zoek naar een vriendin?\nSorry, dat ik je stoor, maatje, echt\nwaar.\n\nMaar dit duurt niet lang. Kun je me\nalsjeblieft helpen?")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>O. Pijnlijk. Echt waar? Zo zal het wel\naltijd zijn voor verkenners zoals ik.\nWe worden altijd verkeerd begrepen.\n\nMaar toch, kun je me heel eventjes\nhelpen?")
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
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10012:0x00000004>Meester, we hebben nieuwe informatie\nover de huidige status van Zelda.\n\n\nVolgens deze informatie is ze aangevallen\ndoor monsters, maar het is haar gelukt om\nte ontsnappen. Ik vermoed echter dat ze\nniet buiten gevaar is.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	wait_frames(15)
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf(/* textboxtype: 1, unk: 1, line: 135 */ "<sound 4>Ik heb de locatie van de Kikwi genaamd\nMachi aangeduid op de kaart.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	wait_frames(15)
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "Verder duidt mijn analyse erop dat deze\nKikwi waarschijnlijk een vals resultaat\ngeeft bij het detecteren vanwege eerder\nrechtstreeks contact met Zelda.\nMet gebruik van deze hypothese is er een\nkans van 85% dat het Kikwi-stamhoofd\nhetzelfde resultaat zal opleveren tijdens\nhet detecteren.\nIk raad u aan om de detectiefunctie te\nblijven gebruiken bij het zoeken naar\nZelda.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	wait_frames(21)
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	wait_frames(30)
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "<0x10009:0x0000000d>Je hebt me flink laten schrikken, kwie...\nDat blauwe geval is een beetje raar, weet\nje dat?")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Kie-paliep... Het lijkt erop dat je\nvastberaden bent om die vriendin en ons\nstamhoofd te vinden.\n\nAls je toch die kant op gaat, kwie, kun\nje dan ook <color red<ons stamhoofd vertellen dat ik\nveilig ben>coloroff>?\n\n<0x10009:0x00000005>Kop op, koe-wiep! Ik weet zeker dat je\nvriendin veilig is bij ons stamhoofd.")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>Met die katapult, kwie, lukt het je wel\nom een pad naar de tempel diep in het\nwoud te vinden.")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000008>Probeer eerst maar eens die gekrulde\nstengel te...<pause 15> O?\n\n\nJe kon niet wachten om de katapult\nuit te proberen, hè?<pause 15> Nou, kwie...\nDat is geen slechte zaak, want nu zul\nje mijn uitleg makkelijker begrijpen.")
          		flw_365:
/*<365>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Druk eerst op <icon 41> om je katapult te pakken,\nkwie. Druk dan op <icon 41> en houd deze knop\ningedrukt om de katapult te spannen, laat\n<icon 41> weer los om te schieten.<0x10011:0x0fcd>\nZodra je munitie op is, kun je <color green<wat zaadjes\n>coloroff>van het fruit gebruiken dat aan die bomen\ndaar groeit.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Maar ga nu op zoek naar dat meisje!\nIk duim voor je. Kwie-hie-hie.")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Maar ga nu op zoek naar dat meisje!\nIk duim voor je. Kwie-hie-hie.")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000008>Probeer eerst maar eens die gekrulde\nstengel te raken.")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10005:0x004b0000>Het is zeer waarschijnlijk dat Zelda\nzich in dit gebied bevindt.\n\n\n<0x10005:0x004b0000>Ik raad u aan om de detectiefunctie\nte gebruiken om naar haar te zoeken.")
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
/*<490>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Hé, ga er nou niet vandoor!\n\n\n\nIk heb je hulp nodig om het raadsel van\ndeze godinnenblokken op te lossen.")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Wacht even, maatje!\n\n\n\nIk wil je om een gunst vragen.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Wacht even, maatje!\n\n\n\n<0x10009:0x00170600>Loop me niet voorbij alsof je me niet\nziet terwijl ik weet dat je dat wel doet.<pause 15>\nMag je me soms niet of zo?\n[1-]Sorry![2-]Goed geraden.")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>O, je bent op zoek naar een vriendin?\nSorry, dat ik je stoor, maatje, echt\nwaar.\n\nMaar dit duurt niet lang. Kun je me\nalsjeblieft helpen?")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>O. Pijnlijk. Echt waar? Zo zal het wel\naltijd zijn voor verkenners zoals ik.\nWe worden altijd verkeerd begrepen.\n\nMaar toch, kun je me heel eventjes\nhelpen?")
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
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Het nieuws dat Zelda zich niet meer bij\nhet Kikwi-stamhoofd bevindt, is een\ngrote tegenslag.<pause 15> Maar het is mogelijk\ndat hij verdere informatie heeft.\nVolgens mijn berekeningen is er daarom\neen kans van 85% dat het van pas zal\nkomen als u de vermiste Kikwi's vindt\nvoor het stamhoofd.\nOm het vinden van deze wezens te\nvergemakkelijken heb ik de optie\ntoegevoegd om <sound 4><color red<Kikwi's>coloroff> te detecteren.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf(/* textboxtype: 1, unk: 1, line: 138 */ "Wilt u dat ik uitleg hoe u bij het\ndetecteren van doel kunt wisselen?\n[1-]Ja![2]Nee.")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "Houd (^) ingedrukt om te zien wie of wat\nu op dit moment kunt detecteren.<0x10011:0x08cd>\n\n\nSelecteer een doel en laat (^) los om uw keuze\nte bevestigen.<0x10011:0x08cd>\n\n\nAls u niets wilt detecteren, kies dan <color green<RONDKIJKEN\n>coloroff>en laat (^) los.\n[1-]Kun je dat herhalen?[2]Begrepen.")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "Ik zal de Kikwi's die u vindt, markeren\nop de kaart en de detectie voor deze\nKikwi's uitschakelen. Zo bezoekt u niet\ntelkens dezelfde Kikwi's.\nDaarmee eindig ik mijn uitleg. Ik raad\nu aan de vermiste Kikwi's te zoeken,\nzodra u daar klaar voor bent.")
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
/*<424>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>WAAUUUUW! Zag je dat?! Het\nblok is zo de lucht in geschoten!\n\n\n<0x10009:0x00131b00>Volgens mij reageerde het op dat\nstraalding dat uit je zwaard kwam.\n\n\n<0x10009:0x00001b05>Waar zou het zijn geland? Dit mysterie\nis opeens stukken, eh, mysterieuzer!\n\n\n<0x10009:0x00161e00>Volgens de geschriften zijn er overal\nin dit land van die blokken te vinden.\n\n\n<0x10009:0x00001700>Weet je wat? Schiet zoveel mogelijk\nvan die blokken de lucht in en laat het\nmij weten als je er meer over te weten\nkomt.")
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
/*<234>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "Tijdens het detecteren zijn er geen\nandere resultaten gevonden. Ik stel voor\nom het stamhoofd van de Kikwi's\nte bezoeken.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						wait_frames(21)
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000014>Waarom deed je dat nou, kwie? Ik schrok\nme een hoedje!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						wait_frames(27)
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf(/* textboxtype: 0, unk: 1, line: 142 */ "Ik heb de locatie van<sound 4> Oelo de Kikwi\nop je kaart gezet. Helaas is Zelda\nniet bij hem.")
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
/*<291>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000007>Hé! Ik ben het, kwie! Heb je het meisje\ngevonden?\n[1-]Wie ben jij?[2-]Nog niet...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10009:0x00000013>Wat bedoel je daarmee? Zeg niet dat\nje je vriendje <color blue<Machi>coloroff> bent vergeten! Dat\nmaakt me verdrietig... Koe-kwie...")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000007>Ik ben zo blij dat ik mijn Kikwi-vrienden\nweer gevonden heb. En dat allemaal\ndankzij jou, koe-wiep!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10009:0x00000005>Met een beetje geluk heb je dat meisje\nzo gevonden, koro-koe! Maar wees\nvoorzichtig, oké?")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>O, dat is jammer. Maar zo te horen weet je\nnu wel waar je kunt gaan zoeken, kwie.")
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
/*<243>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "Tijdens het detecteren zijn er geen\nandere resultaten gevonden. Ik stel voor\nom het stamhoofd van de Kikwi's\nte bezoeken.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						wait_frames(21)
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000d>Huh?! Wat was dat blauwe ding?\nLaat me niet zo schrikken, koe-kwie!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						wait_frames(28)
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf(/* textboxtype: 1, unk: 2, line: 144 */ "Ik heb de locatie van<sound 4> Roibo de Kikwi\nop je kaart gezet. Helaas is Zelda\nniet bij hem.")
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
/*<376>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "Tijdens het detecteren zijn er geen\nandere resultaten gevonden. Ik stel voor\nom het stamhoofd van de Kikwi's\nte bezoeken.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						wait_frames(21)
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10009:0x00000005>Je hebt ons stamhoofd ontmoet? En hij is\nin orde? Dat is pas fijn, kwie!\n\n\n<0x10009:0x00000014>Als je 'm nog eens ziet, kun je 'm dan\nzeggen dat ik hier ben?")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>Niemand verstopt zich zo goed als ons\nstamhoofd. Ik denk niet dat je hem kunt\nvinden, koe-wiep!")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf(/* textboxtype: 2, unk: 0, line: 146 */ "Ik heb de locatie van<sound 4> Kami de Kikwi\nop je kaart gezet. Helaas is Zelda\nniet bij hem.")
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
/*<421>*/ 	printf(/* textboxtype: 2, unk: 1, line: 189 */ "Hij die van boven is gekomen:\nkijk naar de ster waar de vogel\ndie opstijgt naar kijkt, en richt\ndaar je schot.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf(/* textboxtype: 1, unk: 0, line: 158 */ "Ik heb vastgesteld dat het plantenleven\nin dit gebied overeenkomt met dat in\nhet Faron-woud. We bevinden ons nu\nin het hart van het woud.\nHier moet zich ergens de tempel bevinden\nwaar Zelda naartoe is gegaan.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 1, line: 150 */ "<0x10012:0x00000004>Meester <heroname>, bij het\ndetecteren heb ik de aura van <color blue<Zelda>coloroff>\nwaargenomen in dit gebouw.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "Daarnaast heb ik ook de aanwezigheid\nvan vele monsters waargenomen. Weet u\nzeker dat u verder wilt gaan?\n[1-]Natuurlijk![2-]Nee.")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Het zou erg onverstandig zijn om\nhier overmoed te tonen. Binnen de\nmuren van dit gebouw zal niemand\nu te hulp komen.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 154 */ "Mocht u niet klaar zijn voor het aan-\nkomende gevaar, dan kunt u <color green<terugkeren\nnaar het hemelrijk>coloroff> om benodigdheden\nin te slaan.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf(/* textboxtype: 1, unk: 1, line: 156 */ "Het is verstandig om een <color red<schild >coloroff>bij u te\ndragen, met daarnaast enkele <color red<drankjes\n>coloroff>om hartjes te herstellen.")
          			flw_606:
/*<606>*/ 			printf(/* textboxtype: 0, unk: 1, line: 157 */ "Laten we nu de zoektocht naar Zelda\nvervolgen.")
          		  case 1:
/*<604>*/ 			printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10012:0x00000001>Meester, zo te zien heeft u geen <color red<schild\n>coloroff>in uw uitrusting. Om de kans op zwaar\nlichamelijk letsel te verkleinen raad ik u\naan om altijd een schild bij u te dragen.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 1, unk: 1, line: 153 */ "Schaam u niet. Angst is een natuurlijk\nmechanisme van zelfbehoud voor levende\nwezens.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10012:0x0000000b>Meester, ik heb bij het <color red<detecteren>coloroff> een\ngrote hoeveelheid <color red<resultaten>coloroff> geregistreerd\nvoor het wezen dat u zojuist bent\ntegengekomen.[1-]Echt waar?[2-]Over Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10012:0x00000005>Ja, meester. Op basis van de kenmerken\nvan het wezen, trek ik de conclusie dat\nhet gaat om een <color blue<Kikwi>coloroff>, een vreedzaam\nwezen dat in het woud leeft.\nKikwi's zijn intelligente wezens die\nkunnen praten<pause 15>, maar uiteraard niet\nmet Zelda verward kunnen worden.\n\nHet is onduidelijk waarom zo'n wezen\nbij het detecteren naar Zelda een\nresultaat oplevert. Volg het wezen om\ndit fenomeen te onderzoeken.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "Er is slechts 5% kans dat deze levensvorm\nZelda is. Daarom trek ik de conclusie dat\ndit niet Zelda is, maar een woudwezen\ngenaamd een Kikwi.\nKikwi's zijn zeer intelligente wezens die\nkunnen praten.<pause 15> Ja, mijn conclusie is dat\nhet niet om Zelda gaat.\n\nHet is onduidelijk waarom zo'n wezen\nbij het detecteren naar Zelda een\nresultaat oplevert. Volg het wezen om\ndit fenomeen te onderzoeken.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf(/* textboxtype: 1, unk: 1, line: 159 */ "<0x10012:0x00000004>Meester <heroname>, als u vragen\nheeft, kunt u mij roepen met (v).<0x10011:0x09cd>\n\n\nHierna kunt u <color red<ADVIES >coloroff>kiezen, gevolgd door\n<color red<TIP>coloroff>. Ik geef u dan graag informatie die van\npas kan komen voor uw huidige situatie.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

