          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "Ik zet de soep hier neer. Is dat oké?\n\n\n\nDit is een vreemde plek om soep te\nbezorgen. Het ziet er gevaarlijk uit.\nWat als er een monster tevoorschijn\nkomt met trek in soep, of robots...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 92, line: 14 */ "Ik hou het voor gezien! Zzzrt!<0x10005:0x00280000>")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf(/* textboxtype: 0, unk: 92, line: 11 */ "Aha, het is je gelukt de Triforce te\nvinden? Ik sta perplex.")
          		flw_35:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Ik denk dat je wel weet wat je te doen\nstaat, jongen. Ga snel en dwaal niet af.\nJe moet dit pad volgen.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 92, unk: 1, line: 10 */ "Aha, ik sta versteld. Je hebt de\nlocatie van de Triforce ontdekt!")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ik denk dat je inmiddels begrijpt wat\nje te doen staat. Het lied opent een pad\nnaar een beproeving. De toegang ligt\nergens <color blue<in het hemelrijk>coloroff> verborgen.\nAls je de beproeving doorstaat, zal de\nlocatie van de <color yellow white<Triforce >coloroff>worden onthuld.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							wait_frames(20)
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "Oho, hoe staat het ervoor met je\nzoektocht, jongen?\n\n\nGa heen en leer de ontbrekende delen\nvan het Heldenlied van de drie draken.\nKom daarna weer naar mij terug!\n\nDe draken wonen in het Faron-woud,\nde Eldin-vulkaan en de Lanayru-woestijn.\nGa snel en vind ze!")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf(/* textboxtype: 92, unk: 1, line: 7 */ "Verzamel de ontbrekende delen van het\nHeldenlied bij de drie draken en kom\ndaarna weer naar mij terug.\n\nIk zal dan met mijn eigen stem het lied\ncompleet maken!\n\n\n<0x10008:0xffcd>Ik heb al heel lang niet meer gezongen. Ahum...\nIk kan voor die tijd wel wat oefening gebruiken...<0x10008:0x00cd>")
          					  case 1:
          						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Zeg eens, jongen, ben jij degene die me\ndeze ketel vol zeer smakelijke pompoen-\nsoep gebracht heeft?\n\nMijn excuses, voor mijn gedrag van zo\neven. Ik was bezeten van een vreemd\nkwaad dat mij in zijn macht hield.\n\nMaar dat is nu voorbij! Het heerlijke\naroma van deze soep heeft mij weer bij\nzinnen gebracht.")
/*<  1>*/ 						printf(/* textboxtype: 92, unk: 1, line: 1 */ "Men noemt mij Levias. Voordat ze deze\nwereld verliet benoemde de godin, Hylia,\nmij tot beschermer van het hemelrijk.\n\nEn hoe word jij genoemd, jongen?<pause 25>\nO, <heroname>? Wat een prettige\nnaam. Je ouders hadden klaarblijkelijk\neen zeer goede smaak, wat namen betreft!\n<pause 20>Hm... <pause 20>Je hebt een bijzonder zwaard bij\nje, jongen. <pause 20>En er schuilt een enorme\nstille kracht ergens in je kleine figuur.\n\nAch ja, nu zie ik het. <0x30001:0x><heroname>,\njij bent de uitverkorene van de godin.\nZeer eigenaardig...\n\nIk neem aan dat je hier bent om meer\nover de <color yellow white<Triforce>coloroff> te weten te komen?\n[1-]Dat klopt.[2-]Je weet ervan?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Zoiets verwachtte ik al...<pause 25> Luister goed\nnaar wat ik te vertellen heb.\n\n\nZoals je misschien weet, bestond er\nlang geleden een kwade mogendheid die\nde Triforce voor zijn eigen duistere\ndoeleinden in wilde zetten.\nDe godin verzette zich uit alle macht\nzodat deze mogendheid de Triforce niet in\nhanden zou krijgen.\n\nOmwille van het behoud van de balans in\nde wereld, verborg ze de Triforce ergens\nin de rots die jullie Skyloft noemen. Maar\nwaar precies is een groot geheim.\nZelfs ik weet niet waar de Triforce nu\nis. Maar de godin heeft me wel een\naanwijzing gegeven over de locatie.\n\nDe aanwijzing is een lied, dat gespeeld\nmoet worden op de harp die jij daar\nhebt. Het heet het <color red<Heldenlied>coloroff>.")
/*<  5>*/ 							printf(/* textboxtype: 92, unk: 1, line: 4 */ "Het lied is als het ware de <color red<sleutel >coloroff>die je\ntoegang zal geven tot de Triforce.")
/*<  6>*/ 							printf(/* textboxtype: 0, unk: 92, line: 5 */ "De godin heeft het lied in vier delen\nopgedeeld. Eén deel gaf ze aan mij en\nde andere delen aan de drie draken die\nop het oppervlak wonen.\nJe zult alle <color red<<sound 4>delen van het Heldenlied\n>coloroff>moeten verzamelen. Vind de draken en\nbewijs hen waarom ze jou hun deel\nvan het lied moeten leren.\nAls ze je hun delen van het lied geleerd\nhebben, kom dan naar mij. Ik zal dan\nhet lied met mijn eigen stem afmaken!\n\nDe draken wonen in het Faron-woud,\nde Eldin-vulkaan en de Lanayru-woestijn.\nHaast je en vind de draken!")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf(/* textboxtype: 0, unk: 92, line: 2 */ "Of ik er iets over weet? Ik geloof dat je niet\nhelemaal beseft dat je tegen de beschermer\nvan het hemelrijk praat. Trek je mijn kennis\nin twijfel? <pause 20>Hmmm... Al goed.")
          							goto flw_4
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_120_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 30>*/ 		scene_flags[21 'The Sky'][37 /* 0x5 20 */] = true;
          	  case 1:
/*< 29>*/ 		scene_flags[21 'The Sky'][36 /* 0x5 10 */] = true;
          	}
          }

