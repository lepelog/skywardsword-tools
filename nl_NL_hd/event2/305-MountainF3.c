          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x700Wat? Je wilt me nog een vraag stellen?\n[1]De <b<waterdraak>>?[2]De <b<donderdraak>>?[3]De vulkaan?[4-]Niet echt, nee.")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x07\x702Juist... De <b<waterdraak>>. Lang geleden gaf\nde godin aan de waterdraak de kracht om\nhet woud te beschermen.\n\n\x0E\x01\x09\x04\x00\x700Zijn grote kracht valt in het niet bij zijn\nwilskracht. Wees voorzichtig, anders\npeuzelt hij je zo op.\n\n\x0E\x01\x09\x04\x00\x703Bwahahaha!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x07\x702Juist, ja... De godin gaf aan de\n<b<donderdraak>> de kracht om de woestijn\nte beschermen.\n\nDeze draak bezit een <r<legendarisch\nschild>>. Het schild is een van zijn meest\nwaardevolle bezittingen.\n\n\x0E\x01\x09\x04\x00\x700De donderdraak houdt ervan om veel-\nbelovende personen te testen, in de hoop\ndat hij op een dag een held zal vinden die\nhet schild waardig is.\nMaar deze draak is een sluwe draak. Zijn\ntest is niet zo simpel als hij lijkt!\n\n\n\x0E\x01\x09\x04\x00\x03Bwahahaha!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x07\x702Juist... Deze berg was niet altijd zo'n\ngevaarlijke en onherbergzame plek.\n\n\n\x0E\x01\x09\x04\x00\x700Er was een tijd waarin de bovengrondse\nen ondergrondse volken samen in\nharmonie leefden dankzij de zegen van\nde grote berg.\n\x0E\x01\x09\x04\x00\x700De woestenij die je nu ziet, is alles dat\ner nog van die schitterende tijd over is\ngebleven...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x702Goed... Je ziet het pad voor je onthuld.\nVolg het!")
          			}
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x701Hm... Jij bent het!\n\n\n\n\x0E\x01\x09\x04\x00\x700Jonge held, wilde je mij een vraag stellen?\n[1]De <b<waterdraak>>?[2]De <b<donderdraak>>?[3]De vulkaan?[4-]Nee, bedankt.")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf("Het spijt me, ik denk dat mijn kracht de\nvulkaan heeft doen uitbarsten. Je kon\nhelaas niet op tijd ontkomen...\n\nDe lucht boven dit land zal snel weer\nopklaren...\n\n\nHet is tijd om te gaan.")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf("Het spijt me, ik denk dat mijn kracht de\nvulkaan heeft doen uitbarsten. Je kon\nhelaas niet op tijd ontkomen...\n\nDe lucht boven dit land zal snel weer\nopklaren...\n\n\nHet is tijd om te gaan.")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 2, 'param3': 16}
/*<  2>*/ 	printf("\x0E\x01\x09\x04\x00\x10Ta-DAA! Hier ben ik! Om je te redden!")
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x0F\xF08Hé! Goed om je weer te zien!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Huh? Je gaat me toch niet vertellen dat je\ndeze kop alweer vergeten bent?\n\n\n\x0E\x01\x09\x04\x0E\xE00Ik ben het, Plati! De Mogma die je in de\nnoordelijke tempel geholpen hebt!\n\n\n\x0E\x01\x09\x04\x0E\xE00Ik zag dat je bewusteloos werd weg-\ngedragen, dus ik ben je gevolgd!")
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x0D\xE0AJe bent echt nergens bang voor, hè?\nWaar ben je nu mee bezig?\n[1]Nou...[2]Ik zoek...")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05D-De draak?! Je bedoelt dat\ndrakengod-ding?\n\n\nEh, ja... Ik heb eens gehoord dat er een\ndrakengod in de berg woont...\n\n\n\x0E\x01\x09\x04\x0F\x210AJe bent echt dol op die sprookjes, hè?\nOf niet soms, maat?\n\n\n\x0E\x01\x09\x04\x0D\x00Hm? Wat ik hier nu weer doe?\n\n\n\n\x0E\x01\x09\x04\x0E\xE0BIk hoorde dat wat slechte types van plan\nwaren elkaar bovenop de berg te\nontmoeten!\n\nHehehe. En wanneer slechte types elkaar\nergens ontmoeten, dan kan dat alleen zijn\nom over een dikke buit te vechten.\nLogisch, toch?")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x0E\xE09Moet je niet eerst je eigen zaakjes op orde\nhebben?\n\n\nO, was het je nog niet opgevallen? Ze\nhebben al je spullen meegenomen!\n\n\n\x0E\x01\x09\x04\x0F\xF0ADat hebben ze gedaan toen je bewusteloos\nwas! Voordat je iets anders gaat doen,\nmoet je misschien eerst je spullen\nterugvinden.\n\x0E\x01\x09\x04\x0E\xE00Ik heb wat van je spullen terug kunnen\nstelen. Hier, pak aan...")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf("\x0E\x01\x09\x04\x11\x110BHet wordt tijd dat ik er weer vandoor\ntunnel, maat! Je hebt nog een hoop te\ndoen!\n\n\x0E\x01\x09\x04\x0F\xE00Ik wens je veel succes!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BHahaha! Ik weet al waarom je hier bent!\nJij hebt ook dat gerucht over die schurken\nen hun schat gehoord, of niet soms?\n\n\x0E\x01\x09\x04\x0E\xE00Hehehe! Doe maar niet alsof! Je weet\nwel, het gerucht dat slechte types elkaar\nhier op de berg gaan ontmoeten.\n\n\x0E\x01\x09\x04\x0F\xE00En iedereen kent dat gezegde: grote\nslechteriken hebben grote schatten! Zo zit\ndat nu eenmaal.")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\nIk weet dat ik het al gezegd heb, toch zeg\nik het nog eens: zorg dat die schurken je\nniet zien, oké?\n\n\x0E\x01\x09\x04\x0F\xE00Ik moet er niet aan denken wat ze met je\nzullen doen als ze je te pakken krijgen!\nDus probeer niet de held uit te hangen!\n\nIs dat duidelijk?\n[1]Ja, ja...[2]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf("...\n\n\n\n\x0E\x01\x09\x04\x0F\xE06Hm... Ik maak me echt zorgen om je,\nmaat. Ik kan het niet helpen!\n\n\n\x0E\x01\x09\x04\x0E\xE00Oké, weet je wat? Ik zal je wat laten zien!\nIk zet het op je kaart, kijk maar!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x11\x110BIk vind het echt naar voor je, maat...\nMaar er is nog iets waar ik je mee kan\nhelpen! Plati zal je eens laten zien wat er\nin al die schatkisten zit!\nTa-daa!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x0E\xE09Er zit toch niet echt iets bij dat ik graag\nzelf wil houden...\n\n\n\x0E\x01\x09\x04\x0F\xE00Maar als er wat van jou bij zit, dan wil je\ndat vast terug hebben, toch?")
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0BMooi zo! Dan ga ik weer verder met\nschatzoeken!\n\n\nTot ziens!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x01Hé!")
/*< 18>*/ 		printf("\x0E\x01\x09\x04\x0F\xE00Je bent niet wijs, joh! Je kunt toch niet zo\nop pad gaan, zonder iets om je mee te\nverdedigen...\n\nHet krioelt hier van de schurken!\n\n\n\n\x0E\x01\x09\x04\x0E\xE03Oké, pas in elk geval heel goed op en zorg\ndat ze je niet zien rondsluipen!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf("Oefff...\n\n\n\nEen tijdje geleden waren die slechteriken\nopeens weg! Maar even later zag ik ze iets\nverderop bij elkaar staan. Het spul dat ze\ndaar hebben, móét wel goed zijn...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf("Pfffff... Wat is het heet...\n\n\n\nMaar een klein stukje nog. De beste schat\nter wereld is zo dichtbij...")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("Dank u, \x0E\x01\x12\x04\x00\x04meester Link.\n\n\n\nExcuseer mij voor mijn plotselinge\nafwezigheid gedurende de vulkaan-\nuitbarsting.\n\nIk heb vanaf hier een enorm krachtige\nenergie waargenomen. De energie lijkt\nvan het gebied daar rechts te komen.\n\nIk kan enkel concluderen dat er een kans\nvan 60% bestaat dat de draak die daar\nleeft, een deel van het <b<Heldenlied >>kent.\n\nVerzamel alstublieft de rest van uw\nuitrusting en zet dan uw zoektocht naar\nde draak voort.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf("Hé daar, maat. Wil je nog een hint? Ik\nheb er nog wel een paar voor je!\n[1]Kom maar op![2-]Nah.")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf("Oké. In dat geval wens ik je veel geluk!")
          		}
          	  case 1:
/*< 65>*/ 		printf("Psst! Tjongejonge, ik heb zo'n goeie hints\nvoor jou. Zal ik je er eentje geven?\n[1]Kom maar op![2-]Nah.")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("Psst! Tjongejonge, ik heb zo'n goeie hints\nvoor jou. Zal ik je er eentje geven?\n[1]Kom maar op![2-]Nah.")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf("Oké. In dat geval wens ik je veel geluk!")
          			}
          		  case 1:
/*< 80>*/ 			printf("Hé daar, maat!<pause0A> Ik heb nu even geen\nnieuwe hints voor je, maar ik kan je nog\neens alle hints laten zien die je al hebt\nverzameld. Wat zeg je ervan?\n[1]Kom maar op![2-]Nah.")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf("Psst! Tjongejonge, ik heb zo'n goeie hints\nvoor jou. Zal ik je er eentje geven?\n[1]Kom maar op![2-]Nah.")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

