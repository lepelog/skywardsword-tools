          void entrypoint_120_20() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("Ik zet de soep hier neer. Is dat oké?\n\n\n\nDit is een vreemde plek om soep te\nbezorgen. Het ziet er gevaarlijk uit.\nWat als er een monster tevoorschijn\nkomt met trek in soep, of robots...")
          }

          void entrypoint_120_21() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Ik hou het voor gezien! Zzzrt!\x0E\x01\x05\x04(\x00")
/*< 25>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*< 23>*/ 	story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */] = true;
/*< 24>*/ 	story_flags[288 /* us: 805A9AFA 0x04, jp: 805ACD7A 0x04 */] = true;
          }

          void entrypoint_120_01() {
/*<  7>*/ 	start()
/*< 32>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 34>*/ 		printf("Aha, het is je gelukt de Triforce te\nvinden? Ik sta perplex.")
          		flw_35:
/*< 35>*/ 		printf("Ik denk dat je wel weet wat je te doen\nstaat, jongen. Ga snel en dwaal niet af.\nJe moet dit pad volgen.")
          		flw_36:
/*< 36>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 31>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 33>*/ 			printf("Aha, ik sta versteld. Je hebt de\nlocatie van de Triforce ontdekt!")
          			goto flw_35
          		  case 1:
/*< 15>*/ 			switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          			  case 0:
/*< 16>*/ 				printf("Ik denk dat je inmiddels begrijpt wat\nje te doen staat. Het lied opent een pad\nnaar een beproeving. De toegang ligt\nergens <b<in het hemelrijk>> verborgen.\nAls je de beproeving doorstaat, zal de\nlocatie van de <y+<Triforce >>worden onthuld.")
          				goto flw_36
          			  case 1:
/*< 10>*/ 				switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          				  case 0:
/*<  9>*/ 					switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          					  case 0:
/*< 11>*/ 						switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          						  case 0:
/*< 26>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 13, 'param3': 6}
/*< 13>*/ 							changeScene(5, 0) // 
          						  case 1:
          							flw_8:
/*<  8>*/ 							printf("Oho, hoe staat het ervoor met je\nzoektocht, jongen?\n\n\nGa heen en leer de ontbrekende delen\nvan het Heldenlied van de drie draken.\nKom daarna weer naar mij terug!\n\nDe draken wonen in het Faron-woud,\nde Eldin-vulkaan en de Lanayru-woestijn.\nGa snel en vind ze!")
          						}
          					  case 1:
          						goto flw_8
          					}
          				  case 1:
/*< 21>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*< 12>*/ 						printf("Verzamel de ontbrekende delen van het\nHeldenlied bij de drie draken en kom\ndaarna weer naar mij terug.\n\nIk zal dan met mijn eigen stem het lied\ncompleet maken!\n\n\n\x0E\x01\x08\x02\xFFCDIk heb al heel lang niet meer gezongen. Ahum...\nIk kan voor die tijd wel wat oefening gebruiken...\x0E\x01\x08\x02Í")
          					  case 1:
          						printf("Zeg eens, jongen, ben jij degene die me\ndeze ketel vol zeer smakelijke pompoen-\nsoep gebracht heeft?\n\nMijn excuses, voor mijn gedrag van zo\neven. Ik was bezeten van een vreemd\nkwaad dat mij in zijn macht hield.\n\nMaar dat is nu voorbij! Het heerlijke\naroma van deze soep heeft mij weer bij\nzinnen gebracht.")
/*<  1>*/ 						printf("Men noemt mij Levias. Voordat ze deze\nwereld verliet benoemde de godin, Hylia,\nmij tot beschermer van het hemelrijk.\n\nEn hoe word jij genoemd, jongen?<pause19>\nO, Link? Wat een prettige\nnaam. Je ouders hadden klaarblijkelijk\neen zeer goede smaak, wat namen betreft!\n<pause14>Hm... <pause14>Je hebt een bijzonder zwaard bij\nje, jongen. <pause14>En er schuilt een enorme\nstille kracht ergens in je kleine figuur.\n\nAch ja, nu zie ik het. \x0E\x03\x01\x00Link,\njij bent de uitverkorene van de godin.\nZeer eigenaardig...\n\nIk neem aan dat je hier bent om meer\nover de <y+<Triforce>> te weten te komen?\n[1]Dat klopt.[2]Je weet ervan?")
/*<  2>*/ 						switch (choice(2)) {
          						  case 0:
          							flw_4:
/*<  4>*/ 							printf("Zoiets verwachtte ik al...<pause19> Luister goed\nnaar wat ik te vertellen heb.\n\n\nZoals je misschien weet, bestond er\nlang geleden een kwade mogendheid die\nde Triforce voor zijn eigen duistere\ndoeleinden in wilde zetten.\nDe godin verzette zich uit alle macht\nzodat deze mogendheid de Triforce niet in\nhanden zou krijgen.\n\nOmwille van het behoud van de balans in\nde wereld, verborg ze de Triforce ergens\nin de rots die jullie Skyloft noemen. Maar\nwaar precies is een groot geheim.\nZelfs ik weet niet waar de Triforce nu\nis. Maar de godin heeft me wel een\naanwijzing gegeven over de locatie.\n\nDe aanwijzing is een lied, dat gespeeld\nmoet worden op de harp die jij daar\nhebt. Het heet het <r<Heldenlied>>.")
/*<  5>*/ 							printf("Het lied is als het ware de <r<sleutel >>die je\ntoegang zal geven tot de Triforce.")
/*<  6>*/ 							printf("De godin heeft het lied in vier delen\nopgedeeld. Eén deel gaf ze aan mij en\nde andere delen aan de drie draken die\nop het oppervlak wonen.\nJe zult alle <r<<pling>delen van het Heldenlied\n>>moeten verzamelen. Vind de draken en\nbewijs hen waarom ze jou hun deel\nvan het lied moeten leren.\nAls ze je hun delen van het lied geleerd\nhebben, kom dan naar mij. Ik zal dan\nhet lied met mijn eigen stem afmaken!\n\nDe draken wonen in het Faron-woud,\nde Eldin-vulkaan en de Lanayru-woestijn.\nHaast je en vind de draken!")
/*< 22>*/ 							story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */] = true;
/*< 14>*/ 							story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = true;
/*< 37>*/ 							story_flags[781 /* us: 805A9B2D 0x20, jp: 805ACDAD 0x20 */] = true;
          						  case 1:
/*<  3>*/ 							printf("Of ik er iets over weet? Ik geloof dat je niet\nhelemaal beseft dat je tegen de beschermer\nvan het hemelrijk praat. Trek je mijn kennis\nin twijfel? <pause14>Hmmm... Al goed.")
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

