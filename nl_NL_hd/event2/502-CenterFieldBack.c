          void entrypoint_502_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	switch (story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */]) {
          	  case 0:
/*< 71>*/ 		story_flags[788 /* us: 805A9B2C 0x10, jp: 805ACDAC 0x10 */] = true;
          		flw_73:
/*< 73>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 72>*/ 		story_flags[787 /* us: 805A9B2C 0x08, jp: 805ACDAC 0x08 */] = true;
          		goto flw_73
          	}
          }

          void entrypoint_502_07() {
/*< 74>*/ 	start()
/*< 77>*/ 	switch (story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */]) {
          	  case 0:
/*< 76>*/ 		printf("Geef die <b<Fatalot>> ervan langs tot hij moet\njanken als een baby!\n\n\n\x0E\x01\x09\x04\x00\x03We rekenen op je, Link!")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x09\x04\x0E\x20DPoeh! Dat was op het randje!\n\n\n\n\x0E\x01\x09\x04\x00\x200Stel je eens voor wat er gebeurd zou zijn\nals ik niet een van mijn Ganderd-moves\nhad gebruikt om <b<Zelda>> op te vangen.\n\n\x0E\x01\x09\x04\x00\x200Ik blijf hier om te zorgen dat ze veilig is.\nGa jij weer naar buiten om die griezelige\nFatalot uit te schakelen! \x0E\x01\x09\x04\x00\x203Ik reken op je,\nLink!\nIedereen rekent op je!")
/*< 78>*/ 		story_flags[798 /* us: 805A9B2F 0x40, jp: 805ACDAF 0x40 */] = true;
          	}
          }

          void entrypoint_502_08() {
/*< 79>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link, bent u klaar\nmet uw voorbereidingen op de strijd?\n[1]Ik ben er klaar voor![2-]Nog niet...")
/*< 87>*/ 	switch (choice(2)) {
          	  case 0:
/*< 88>*/ 		printf("\x0E\x01\x12\x04\x00\x05Goed, meester. Laten we ons dan in de\nstrijd begeven.")
/*< 90>*/ 		changeScene(11, 0) // 
          	  case 1:
/*< 89>*/ 		printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. We kunnen hier\nterugkeren als u zich op het gevecht hebt\nvoorbereid.")
          	}
          }

          void entrypoint_502_09() {
/*< 80>*/ 	start()
/*< 81>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link, wilt u zich\ntijdelijk terugtrekken om u voor te\nbereiden op het laatste gevecht?\n[1]Ja.[2-]Ik heb niets nodig.")
/*< 82>*/ 	switch (choice(2)) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. We kunnen hier\nterugkeren zodra uw voorbereidingen\nvoltooid zijn.")
/*< 85>*/ 		changeScene(10, 0) // 
          	  case 1:
/*< 84>*/ 		printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester.")
          	}
          }

          void entrypoint_502_01() {
          	start()
/*<  3>*/ 	switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          	  case 0:
/*< 27>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x01Je hebt je grote opdracht nog niet voltooid.\n\n\n\nOm wille van Zelda, die zich nog immer in\neen eeuwige sluimering bevindt, moet je\ndoen wat het lot van je verwacht.")
          			  case 1:
/*< 32>*/ 				switch (scene_flags[37 /* 0x5 20 */]) {
          				  case 0:
/*< 48>*/ 					switch (scene_flags[103 /* 0xD 80 */]) {
          					  case 0:
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x03Wat een levendige zaailing. Ik hoop\nwerkelijk dat die uitgroeit tot een boom die\nhier nog millennia lang zal staan.")
          					  case 1:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x00\x0BAaaah, je hebt een zaailing geplant!\n\n\n\nDie ziet er heel levendig uit! Met een beetje\ngeluk groeit die uit tot een boom die hier\nnog millennia lang zal staan.")
/*< 49>*/ 						scene_flags[10 'Sealed Grounds'][103 /* 0xD 80 */] = true;
          					}
          				  case 1:
/*< 33>*/ 					switch (scene_flags[102 /* 0xD 40 */]) {
          					  case 0:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x00\x03Een boom die duizenden jaren kan blijven\nleven... Waar vind ik daar nou weer een\n<r<zaailing>> van?")
          					  case 1:
/*< 34>*/ 						printf("\x0E\x01\x09\x04\x0F\x803Hmm<pause0F>.<pause0F>.<pause0F>.\n\n\n[1]Wat is er?[2]Tot later!")
/*< 35>*/ 						switch (choice(2)) {
          						  case 0:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x00\x703O, het is niets...")
/*< 57>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 58, 'param3': 32}
/*< 58>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 6}
/*< 38>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 39, 'param3': 17}
/*< 39>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 59, 'param3': 17}
/*< 59>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 40, 'param3': 6}
/*< 40>*/ 							set_camera(5, 0)
/*< 41>*/ 							printf("Zie je dat stukje grond daar dat door de\nzon wordt verlicht?\n\n\nHet lijkt me mooi als daar een boom zou\nstaan.")
/*< 60>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 61, 'param3': 6}
/*< 61>*/ 							set_camera(-1, 0)
/*< 42>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 43, 'param3': 17}
/*< 43>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 44, 'param3': 17}
/*< 44>*/ 							printf("Ik zoek een boom die duizenden jaren kan\nblijven leven, maar het is moeilijk om van\nzo'n soort boom een <r<zaailing >>te vinden...")
/*< 45>*/ 							scene_flags[10 'Sealed Grounds'][102 /* 0xD 40 */] = true;
          						  case 1:
/*< 37>*/ 							printf("Hmm...")
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			switch (scene_flags[101 /* 0xD 20 */]) {
          			  case 0:
          				flw_28:
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x00\nMaak je geen zorgen om <b<Zelda>>. Ik zal hier\nover haar waken. Zorg jij maar dat jij\njouw taak vervult.")
          			  case 1:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ik zie dat je afscheid hebt kunnen nemen.\n\n\n\nZorg dat je je aan de belofte houdt die je\nhaar hebt gemaakt. Het is belangrijk dat je\nde <y+<Triforce>> vindt.\n\nKeer terug naar je eigen tijd. Daar zal je\nnog het een en ander te doen staan.")
/*< 30>*/ 				scene_flags[10 'Sealed Grounds'][101 /* 0xD 20 */] = true;
          				goto flw_28
          			}
          		}
          	  case 1:
/*<  4>*/ 		switch (scene_flags[82 /* 0xB 04 */]) {
          		  case 0:
/*< 18>*/ 			printf("\x0E\x01\x09\x04\x00\x03Je bent in het verleden, eeuwen voor je\neigen tijd. Nog maar kort geleden heeft de\ngodin Hylia <b<Fatalot>> verzegeld...\n\nJe hebt vast veel vragen, maar eerst kun je\nbeter een kijkje nemen in de ruimte die\nvoorbij die grote deuren daar achter je ligt.\n\nDe persoon voor wie je aan je reis bent\nbegonnen, wacht daar op je.")
          		  case 1:
/*< 19>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 11, 'param3': 32}
/*< 11>*/ 			printf("\x0E\x01\x09\x04\x00\x01Daar ben je dan. Ik wachtte al op je,\nLink.\n\n\nJe zult wel wat overdonderd zijn, dus ik zal\nproberen om het eenvoudig te houden.")
/*< 12>*/ 			set_camera(2, 0)
/*<  5>*/ 			printf("Dit is de<r< Tempel van Hylia>>, dezelfde\ntempel die ergens in de toekomst bekend\nzal staan als de <b<Verzegelde Tempel>>.\n\nJe bent in het verleden, eeuwen voor je\neigen tijd. Nog maar kort geleden heeft de\ngodin Hylia <b<Fatalot>> verzegeld...\n\nEn het is ook nog niet zo lang geleden dat\nde godin het land omhoog zond dat op een\ndag Skyloft zal heten.")
/*< 13>*/ 			set_camera(-1, 0)
/*<  6>*/ 			printf("\x0E\x01\x09\x04\xF0F\x703De Poort des Tijds heeft zijn functie\nvervuld en je naar een tijd ver in het\nverleden gebracht.\n\nJe hebt vast veel vragen, maar eerst kun je\nbeter een kijkje nemen in de ruimte die\nvoorbij de grote deuren achter je ligt.")
/*< 15>*/ 			set_camera(3, 0)
/*< 14>*/ 			printf("De persoon voor wie je aan je reis bent\nbegonnen, wacht daar op je.")
/*<  7>*/ 			story_flags[349 /* us: 805A9B01 0x08, jp: 805ACD81 0x08 */] = true;
/*<  8>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<  9>*/ 				story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */] = true;
          				flw_17:
/*< 17>*/ 				scene_flags[10 'Sealed Grounds'][82 /* 0xB 04 */] = true;
/*< 16>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				goto flw_17
          			}
          		}
          	}
          }

          void entrypoint_502_02() {
/*<  1>*/ 	start()
/*< 21>*/ 	switch (scene_flags[85 /* 0xB 20 */]) {
          	  case 0:
/*< 25>*/ 		printf("\x0E\x01\x09\x04\x00\x12<b<Ghirahim>> is door de <r<voordeuren naar\nbuiten gegaan>>. Als je snel bent, kun je hem\nmisschien nog tegenhouden!")
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x12Auuu... <pause0A>\x0E\x03\x01\x00Link? Ghirahim...<pause0A>\nIk had hem niet zien aankomen.\n\n\nMaak je... geen zorgen om mij. Ga snel\nachter hem aan!")
/*< 20>*/ 		set_camera(4, 0)
/*< 23>*/ 		printf("Hij is door de <r<voordeuren van de tempel\nnaar buiten gegaan>>. Je moet hem tegen-\nhouden voor het te laat is. Snel!")
/*< 24>*/ 		scene_flags[10 'Sealed Grounds'][85 /* 0xB 20 */] = true;
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_502_03() {
/*< 52>*/ 	start()
/*< 53>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x07\xC04Geen zorgen, <b<Zelda >>is in orde. Ze slaapt in\nde ruimte achter in de tempel.\n\n\n\x0E\x01\x09\x04\x00\x706Richt je op de strijd tegen Fatalot. Zorg\ndat je hem verslaat en onze wereld redt,\nLink.")
          	  case 1:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x07\xC0BGeen zorgen, <b<Zelda >>is in orde. Ze slaapt in\nde ruimte achter in de tempel.\n\n\n\x0E\x01\x09\x04\x0F\x700Ik had nooit gedacht dat <b<Fatalot>> herboren\nzou worden. <pause0A>Het lot van onze wereld rust\nnu op jouw schouders, \x0E\x01\x09\x04\x00\x706Link!")
/*< 55>*/ 		scene_flags[10 'Sealed Grounds'][104 /* 0xC 01 */] = true;
          	}
          }

          void entrypoint_502_04() {
/*< 62>*/ 	start()
/*< 64>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, ik heb\nbelangrijke informatie voor u.\n\n\nAls u dit portaal betreedt, is de kans 0%\ndat u nog terugkeert, tenzij u uw\ntegenstander weet te verslaan.\n\nBent u klaar voor deze strijd?\n[1]Ja, we gaan![2-]Nog niet...")
/*< 63>*/ 	switch (choice(2)) {
          	  case 0:
/*< 65>*/ 		printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester Link.<pause0F>\nWeet dat ik ook voorbij dit portaal aan uw\nzijde zal blijven...\n\n\x0E\x01\x12\x04\x00\x01En, meester...<pause1E> Succes.")
          	  case 1:
/*< 66>*/ 		printf("\x0E\x01\x12\x04\x00\x05Begrepen, meester. We kunnen hier\nterugkomen wanneer u zich heeft\nvoorbereid.")
          	}
          }

          void entrypoint_502_05() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDBrutaal joch!")
          }

