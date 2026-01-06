          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 	check_item_flag(19, 1)
/*< 25>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000002>Je hebt oog voor goede waar, vriend.\nDie <color yellow<10 pijlen>coloroff> komen vast goed van pas!\n\n\nLet wel op dat je niet per ongeluk iemand\nraakt. Dat wordt niet op prijs gesteld.\nMaar wat zeg je ervan? Ze kosten slechts\n<color red<20 rupees>coloroff>.\n[1-]Oké![2]Liever niet.")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Het spijt me, maar ik kan dit artikel\nalleen aan je verkopen als je een boog\nhebt. Dat is nou eenmaal het beleid\nvan deze winkel.")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 32, 'param3': 12}
/*< 32>*/ 	check_item_flag(92, 1)
/*< 31>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000002>Aha! Zo te zien heb je interesse in die\n<color yellow<10 bommen>coloroff>. Zo luid! Met zoveel rook!\nEn zo vernietigend! Een echte klapper!\n\nZelfs een stevige muur heeft geen schijn\nvan kans tegen zo'n bom.\n\n\nKABOEM! Voor maar <color red<20 rupees>coloroff>.\n[1-]Oké![2]Liever niet.")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Aha! Het spijt me, maar ik kan dit\nartikel niet aan je verkopen tenzij\nje een bommenzak hebt.")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000002>Aha! Vriend, je hebt interesse in het\n<color yellow<houten schild>coloroff>? Je kunt het gebruiken\nom aanvallen mee af te weren!\n\nLet wel op: als het te veel te verduren\nkrijgt, zal het <color red<breken>coloroff>.\n\n\nO, en kijk uit bij vuur, want daar is het\nvatbaar voor. Dat is helaas nou eenmaal\nzo bij hout. Maar wat zeg je ervan?\nVoor <color red<50 rupees>coloroff> is het voor jou![1-]Ik koop het! [2]Nee, bedankt.")
/*<125>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 50, 'param3': 12}
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Aha! Dat daar is een stevig <color yellow<ijzeren schild>coloroff>.\n\n\n\nHet is veel duurzamer dan een houten\nschild en wordt ook niet beschadigd\ndoor vuur!\n\nIk neem aan dat ik je er wel voor moet\nwaarschuwen dat het je niet tegen\nelektriciteit zal beschermen.\n\nHet kost slechts <color red<100 rupees>coloroff>. Heb je\ninteresse, vriend?\n[1-]Ik koop het![2]Nee, bedankt.")
/*<126>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 51, 'param3': 12}
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000002>Aha! Dat is een <color yellow<heilig schild>coloroff>! Het\nbeschermt je tegen allerlei soorten\naanvallen!\n\nVuur? Geen probleem! Elektriciteit?\nAppeltje-eitje! En het repareert\nzichzelf als het schade oploopt!\n\nHet is een beetje fragiel, maar dat\nzou geen probleem moeten zijn voor\niemand die zo getalenteerd en behendig\nis als jij!\nHet kost <color red<500 rupees>coloroff> en is dus een dure\nmaar uitstekende investering!\nWat zeg je ervan?\n[1-]Ik koop het![2]Nee, bedankt.")
/*<127>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>Aha! Vriend, kan ik je ergens mee\nhelpen?\n[1-]Ja![2]Nee.")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "O, ja, natuurlijk! Wil je weten hoe je iets\nkunt kopen?\n\n\nJe hoeft enkel voor een van mijn waren\nte gaan staan en op (A) te drukken om er\nmeer over te weten te komen.\n\nNeem de tijd en koop zoveel je wilt!\nKijken is gratis, mijn vriend, en er is geen\nenkele verplichting om iets te kopen.\nGeen enkele verplichting...")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "Het kan ook een goed idee zijn om\nvoorwerpen die je hier hebt gekocht,\nte laten verbeteren in de werkplaats!\n\nZo zou je een van mijn prachtige\nschilden daarnaartoe kunnen brengen\nom zijn duurzaamheid te verbeteren.")
/*<140>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000007>Aha! Natuurlijk heeft zo'n slimme,\nintelligente jongeman als jij betere\ndingen te doen dan mij te horen\nbazelen. Laten we zaken doen.\nAlsjeblieft, vriend, kijk je ogen uit bij dit\nlandschap vol fantastische schatten, die ik\nvandaag speciaal voor jou heb klaar-\ngelegd.")
/*< 39>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Aha! Vriend, ik heb toevallig een <color red<nieuw\nvoorwerp >coloroff>te koop!\n\n\nMijn nieuwste aanwinst is de <color yellow<kleine\npijlkoker>coloroff>! Voor scherpzinnige boog-\nschieters is dit een echte aanrader.\n\nKijk zelf maar eens!")
/*<111>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000001>Aha! Mooie timing, vriend! Ik heb iets\n<color red<nieuws >coloroff>in mijn assortiment.\n\n\nHet gaat om een <color yellow<heilig schild>coloroff>. Ik zou\ner echt eens een blik op werpen.")
/*<108>*/ 					zone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 104, 'param3': 31}
/*<104>*/ 						printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000001>Hallo, vriend! Ik heb iets <color red<nieuws>coloroff> dat ik je\nwil laten zien!\n\n\nVandaag kon ik aan een geweldige\n<color yellow<kleine bommenzak>coloroff> komen! Kijk er\ngerust eens naar, als je wilt.")
/*<105>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000001>Aha! Je hebt geluk, want ik heb vandaag\neen <color red<nieuw voorwerp>coloroff> ontvangen, vriend.\n\n\nHet is een prachtig<color yellow< ijzeren schild>coloroff>!\nMoet je dat vakmanschap zien! Het\nbeneemt je de adem, nietwaar?")
          								flw_95:
/*< 95>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Aha! Je komt op het juiste moment,\nwant ik heb net wat <color red<nieuwe>coloroff> voorwerpen\naan mijn assortiment toegevoegd,\nvriend.\nJe kunt hier nu ook een <color yellow<ijzeren schild\n>coloroff>en een <color yellow<kleine zaadjeszak>coloroff> kopen. Kijk\ner rustig eens naar!")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 								printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000001>Aha! Heb jij even geluk, ik heb een\n<color red<nieuw voorwerp>coloroff> in mijn assortiment.\n\n\nHet gaat om een perfect geweven <color yellow<kleine\nzaadjeszak>coloroff>!\n\n\nGeen enkele katapultliefhebber kan hier\nzonder, vind je niet? Neem gerust een\nkijkje, vriend!")
/*<120>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Aha! Een klant! Hallo, vriend.\n\n\n\nIn geen enkele winkel vind je zulke\nmooie producten als in die van mij!\n\n\nKijk rustig even rond en bewonder de\nprachtige schatten die ik speciaal voor\njou heb klaargelegd, vriend.\n\nLaat het me gerust weten als je vragen\nhebt.\n[1-]Hoe koop ik iets?[2]Geen vragen.<0x10007:0x00000000>")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 53, 'param3': 12}
/*< 53>*/ 	check_item_flag(52, 1)
/*< 52>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*< 55>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000002>Ik zie dat je interesse hebt in deze\n<color yellow<10 Deku-zaadjes>coloroff>! Het zijn perfecte\nprojectielen voor de katapult.\n\nVoor <color red<20 rupees>coloroff> zijn ze van jou.\nWat zeg je ervan?\n[1-]Ik koop ze![2]Nee, bedankt.")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Vriend, je hebt geen katapult...\n\n\n\nIk kan dit product helaas niet aan je\nverkopen als je geen katapult hebt.\n\n\nMaar laat het gerust weten als je interesse\nin een van mijn andere artikelen hebt.")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 141, 'param3': 12}
/*<141>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	check_item_flag(52, 1)
/*< 80>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000002>Dat is een <color yellow<kleine zaadjeszak>coloroff>. Als je die\nin je buidel meeneemt, kun je 10 extra\nzaadjes bij je dragen.\n\nIdeaal voor katapultliefhebbers! Hij\nkost <color red<100 rupees>coloroff>. Wat zeg je ervan,\nvriend?\n[1-]Verkocht![2]Nee, bedankt.")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Vriend, je hebt geen katapult...\n\n\n\nIk kan dit product helaas niet aan je\nverkopen als je geen katapult hebt.\n\n\nMaar laat het gerust weten als je interesse\nin een van mijn andere artikelen hebt.")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "")
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	check_item_flag(19, 1)
/*< 84>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000002>Dat is een <color yellow<kleine pijlkoker>coloroff>. Als je die\nin je buidel meeneemt, kun je 5 extra\npijlen bij je dragen!\n\nIdeaal voor fans van boogschieten! Hij\nkost <color red<150 rupees>coloroff>. Wat zeg je ervan,\nvriend?\n[1-]Verkocht![2]Nee, bedankt.")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "Het spijt me, maar ik kan dit artikel\nalleen aan je verkopen als je een boog\nhebt. Dat is nou eenmaal het beleid\nvan deze winkel.")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	check_item_flag(112, 1)
/*< 63>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Vriend, ik zeg het niet graag, maar...\n\n\n\nZo te zien zit je buidel al vol. Je zou wat\nvan je bezittingen in de voorwerpenbank\nkunnen opslaan.")
/*<128>*/ 		zone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 143, 'param3': 12}
/*<143>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	check_item_flag(92, 1)
/*< 86>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000002>Dat is een <color yellow<kleine bommenzak>coloroff>. Als je die\nin je buidel meeneemt, kun je 5 extra\nbommen bij je dragen.\n\nAls je dol bent op een fraaie explosie,\nis dit artikel iets voor jou! Hij kost maar\n<color red<150 rupees>coloroff>. Wat zeg je ervan, vriend?\n[1-]Verkocht![2]Nee, bedankt.")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Aha! Het spijt me, maar ik kan dit\nartikel niet aan je verkopen tenzij\nje een bommenzak hebt.")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Ach, ik zeg dit niet graag, maar...\n\n\n\nJe kunt niet meer exemplaren van dit\nvoorwerp bij je dragen. Misschien heb je\ninteresse in een van mijn andere\nwaren?")
/*<129>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	make_actor_do_something(1, 0)
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000008>O, jeetje!<0x10005:0x000a0000>")
/*< 60>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 61, 'param3': 22}
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Zeg, vriend! Je hebt niet genoeg rupees om\ndaarvoor te betalen. Het is niet aardig om me\nzo te plagen!")
/*<130>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 512, 'next': 43, 'param3': 22}
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Aha! Bedankt voor je klandizie, vriend.")
          		flw_144:
/*<144>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ik ben zo vrij geweest om je inkopen\nin je buidel te doen. Druk op <color green<<icon 40>>coloroff> om de\nbuidel te openen en om <color red<eruit te nemen>coloroff>\nwat je nodig hebt!<0x10011:0x0ecd>")
          					flw_137:
/*<137>*/ 					zone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf(/* textboxtype: 0, unk: 0, line: 23 */ "Bij twijfels over de <color red<duurzaamheid van\nje schild>coloroff> kun je het laten onderzoeken\nin de <color red<werkplaats>coloroff>.\n\nAls je Rogyr de juiste schatten of andere\nvoorwerpen geeft, verbetert hij graag je\nvoorwerpen!")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ik ben zo vrij geweest om het voorwerp\nin je buidel te doen. Om je buidel te\nopenen houd je <icon 40> ingedrukt...<0x10011:0x0ecd>\n\nSelecteer het gewenste voorwerp en <color green<laat >coloroff><icon 40>\n<color green<los>coloroff>. Dat is alles. Om bijvoorbeeld je schild te\ngebruiken, hoef je het alleen maar in je buidel\nte selecteren!<0x10011:0x0ecd>")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				zone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000007>Aha! De klant heeft altijd gelijk!")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	make_actor_do_something(1, 0)
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000008>...<0x10005:0x000f0000>")
/*< 45>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 30, 'param3': 22}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Geen probleem, vriend! Kijk rustig rond\nof je iets ziet dat je interesse heeft.")
/*<131>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

