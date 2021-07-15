          void entrypoint_123_06() {
/*< 54>*/ 	start()
/*< 47>*/ 	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          	  case 0:
/*< 48>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<266>*/ 			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 77>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 82>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 83>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 84>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07Hallo, lieverd! Ik bewaar hier alles voor\nje dat je maar kwijt wil.\n[1]Te gek![2-]Nee, dank je.")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08Welkom terug, lieverd!\n\n\n\nKan ik iets voor mijn lieverd betekenen?\nIk sta open voor alles dat je maar kwijt\nwil! Echt alles!\n[1]Te gek![2-]Nee, dank je.")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EWelkom, Link. Heb je iets bij\nje waar ik, de steeds mooiere vrouw die\nallang hersteld is van haar gebroken hart,\nop kan letten?\n[1]Ja, alsjeblieft![2-]Nee, dank je.")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05O... Welkom, Link.\n\n\n\nSorry dat ik me laatst zo raar gedroeg.\nIk heb er lang en goed over nagedacht\nen mijn liefde voor jou is weer voorbij.\n\nZe zeggen dat een vrouw nog mooier is\nnadat iemand haar hart gebroken heeft.\nIk denk dat ik nu begrijp wat daarmee\nbedoeld wordt...\nDus ik heb me voorgenomen om mezelf\nelke dag een beetje mooier te maken.\n\n\nDus zit er maar niet al te veel mee.\n\n\n\nMaar... Waar waren we? Heb je iets bij je\nwaar ik voor je op kan letten?\n[1]Ja, alsjeblieft![2-]Nee, dank je.")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05Hallo, lieverd!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Hmm... Ik, eh... <r<Ik wil graag dat je me\nvannacht thuis komt opzoeken>>. Er is iets\ndat ik je moet vertellen.\n\n\x0E\x01\x09\x04\x08\xA00Mijn huis staat vlak naast de bazaar. Je\nkomt wel even langs, toch? Ik zal op je\nwachten!")
          								flw_79:
/*< 79>*/ 								printf("O, en heb je iets bij je waar ik voor je op\nmoet letten? Of kom je iets ophalen?\n[1]Ja![2-]Nee, dank je.")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05Hallo, lieverd!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Hmm... Ik, eh... <r<Ik wil graag dat je me\nvannacht thuis komt opzoeken>>. Er is iets\ndat ik je moet vertellen.\n\n\x0E\x01\x09\x04\x08\xA00Mijn huis staat vlak naast de bazaar. Je\nkomt wel even langs, toch? Ik zal op je\nwachten!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07Welkom, <r<lieverd>>! Ik heb geduldig op je\ngewacht! Je kunt me echt alles toever-\ntrouwen! Eh, ik heb het natuurlijk over je\nspullen...\nWil je dat ik ergens op let voor je? Of\nkom je iets ophalen?\n[1]Ja.[2-]Nee.")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08O...")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00Daar... Daar ben je dan! Ik heb me hier\nzo op verheugd!\n[1]...[2]Ja, dat klopt.")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0AO, kijk me niet zo aan. Ik moet er van\nblozen, <r<lieverd>>!")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Wanneer ik aan je denk, krijg ik vlinders\nin mijn buik en gaat m'n hart tekeer en\nword ik zelfs een beetje duizelig en,\npfoeh...\nJe denkt toch niet... Ik ben toch niet...\n\n\n\n[1]Klinkt ernstig.[2]Ja, je bent verliefd.")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EO, plaag me niet zo... Tihihi.")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00Oeps. Ik had mezelf eventjes niet meer in\nde hand. Tijd om terug aan het werk te\ngaan!\n\n\x0E\x01\x09\x04\x0E\x1000Goh, waar was ik? O ja, ik stond op\nhet punt om je te vragen of je me iets\nwil geven... zoals je eeuwige liefde.\n[1]Ja, alsjeblieft.[2-]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FEcht? Ik kan m'n geluk niet op!")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0AO nee! Het spijt me zo! Ik moet mezelf\nen mijn gekke dromen beter in bedwang\nzien te houden.\n\n\x0E\x01\x09\x04\x08\xA00Eh... Nee, wacht... Ah! Ik bedoel, heb je\niets waar ik voor je op kan letten?\n<r<Lieverd>>?\n[1]Alsjeblieft![2-]Nee, dank je.")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0DAaaah! Dat kun je toch niet zomaar\nzeggen?! O, wat erg!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0AJe... Je maakt me zo blij dat mijn hart er\nsneller van gaat kloppen. Ik krijg het er\nwarm van...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05O, hallo, daar ben je weer. Als je iets hebt\ndat je graag aan mij wil geven, geef dan\neen gil.\n\nDus heb je vandaag iets in je buidel dat je\naf wilt geven? Of ben je hier gekomen om\niets op te halen?\n[1]Ja![2-]Nee.")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Hallo en welkom bij de voorwerpenbank.\n\x0E\x01\x09\x04\x00\x05O...")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("O. Ik, eh... W-Welkom...\n[1]Wat is er?[2]Wat doe je raar.")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18Eh... Niks, hoor! Er is niks aan de hand.")
          					flw_76:
/*< 76>*/ 					printf("Het is niet alsof ik hier zo zit van: \"O,\nkijk, hij is er weer! Hoera!\", of iets\ndergelijks...\n\nMaar we zien elkaar wel erg vaak de\nlaatste tijd. Vind jij ook niet dat onze\nrelatie inmiddels wat verder gaat dan die\ntussen klant en verkoper?\n\x0E\x01\x09\x04\x10\x1405O, nee... Daar bedoelde ik niks mee! Wat\nzeg ik nu?!\n\n\nVergeet dat maar gewoon allemaal, oké?\n\n\n\n\x0E\x01\x09\x04\x07\x800Oké, Paulah. Cool en professioneel blijven\nnu. Heb je nog iets bij je waar ik voor je\nop kan letten?\n[1]Ja, alsjeblieft.[2-]Nee, dank je.")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18H-Huh? Ik weet niet wat je bedoelt. Weet\nje het heel zeker?")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hoi. Welkom bij de voorwerpenbank. Al\ndenk ik dat je hier vooral bent om mij te\nzien, of niet? Ha! Fijn, hè? Wen er maar\nniet aan.\nMaar zeg het eens. Heb je iets aan te\ngeven?\n[1]Ja![2-]Nee.")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hallo. Welkom bij de voorwerpenbank.\nO, jij bent het...\n\n\nJe komt wel erg vaak langs de laatste tijd.\nEn eigenlijk ben je ook de enige die zo\nvaak langskomt...\n\n\x0E\x01\x09\x04\x00\x04Maar, wacht eens even...\n\n\n\nHet zal toch niet zo zijn...\n\n\n\nKom je hier soms alleen maar om mij te\nzien? Tihihi.\n\n\n[1]Eh, nee.[2]Ja.")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02O... Nee, natuurlijk niet...\n\n\n\nDat zou ook helemaal niet logisch zijn,\nof wel?\n\n\n\x0E\x01\x09\x04\n\xC00Ach, ik vind het ook niet heel erg dat dat\nniet zo is, hoor. Geeft helemaal niet.")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800Voordat ik het vergeet! Ik zit hier niet\nom bewonderd te worden. Heb je iets dat\nik voor je kan bewaren?\n[1]Ja, hier.[2-]Nee, dank je.")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02Wat?! Echt waar?\n\n\n\nHa! Dacht je nu echt dat ik voor zo'n\noude versiertruc zou vallen?\n\n\n\x0E\x01\x09\x04\n\xC00Maar als het echt waar was... dan zou dat\nbest fijn zijn...")
          				goto flw_53
          			}
          		}
          	}
          }

          void entrypoint_123_07() {
/*< 93>*/ 	start()
/*< 92>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 94>*/ 		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          		  case 0:
/*< 95>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 96>*/ 				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          				  case 0:
/*< 97>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
/*<105>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09Ik ben blij dat je me eerlijk verteld hebt\nhoe je je voelt, lieverd. Tot snel!")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0DLieverd! Ik zei je toch dat we onze relatie\ngeheim moesten houden! Als je te vaak\nlangskomt, heeft m'n vader ons straks nog\ndoor!\nWaarom wil je me zo laat nog spreken?\n[1]Ik wil praten![2]Laat maar.[3]Voorwerpen!")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08Ik zou echt graag met je praten, voor\neeuwig, maar m'n vader ziet ons! Kom\neen andere keer terug!")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00Tihihi. Jij bent dus zo'n sterk en\ndominant type? Maar dat is ook precies\nwaarom ik van je houd, lieverd!")
          								  case 2:
/*<113>*/ 									printf("Als dat het enige is dat je van me wilt,\ndan kun je me toch gewoon overdag\nopzoeken bij de voorwerpenbank?\n\n\x0E\x01\x09\x04\x0E\x1000Of is dat het enige waar ik goed voor ben\nvoor jou?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14Ik ben sterk. Ik ben zo weer over je heen.\nMaar laat me nu alsjeblieft alleen in deze\nkoude nacht...")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13Mijn vader is de laatste tijd echt in een\ngeweldig humeur...\n\n\nHeeft hij wel door dat zijn dochter voor\nhet eerst de pijn van een gebroken hart\nervaart? Bah, wat irritant...")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14Ik zei wel dat ik snel over je heen zou zijn,\nmaar soms moet ik 's nachts even huilen.\nDus zo voelt liefdesverdriet...")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0EO, Link... Ik had nooit gedacht\ndat een gebroken hart zo'n pijn kon\ndoen...\x0E\x01\x09\x04\x00\x14")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 226, 'param3': 6}
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link, ben je hier om mij op\nte zoeken? O, dank je wel.\n\n\n\x0E\x01\x09\x04\x0E\xF00Het zit zo, ik wil je al een tijdje iets\nvragen, Link...\n\n\nIk doe het gewoon! Ben je er klaar voor?")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("Wat beteken ik voor jou?\n\n\n[1]Ik hou van je.[2]Je bewaart spullen.")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FJe... wat? Echt?! Je houdt me niet voor\nde gek?!\n[1]Echt waar![2]Gefopt...")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08O, ik ben zo opgelucht! Dit voelt als een\ndroom! Ik moet het nog een keer horen,\ngewoon om het zeker te weten!\n\n\x0E\x01\x09\x04\x0E\x1000Je houdt echt, echt, echt van me?\n\n\n\n[1]Echt waar![2]Nou, nee...")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0AJe liegt niet, toch? Ik zou niet weten wat\nik zou doen als ik erachter kwam dat je\nhierover liegt!\n\n\n[1]Het is echt waar![2]Ik lieg wel.")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09O, dank je! Ik hou ook heel veel van jou,\nlieverd! Sorry dat ik ooit aan je twijfelde\nen je al die vragen stelde!")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13Maar ik weet hoe je je echt voelt. Ik weet\nhet beter dan je denkt...\n\n\nIk voel dat je er nog niet helemaal klaar\nvoor bent om je volledig op onze relatie te\nrichten... Ik voel dat je het daar op dit\nmoment veel te druk voor hebt.\n\x0E\x01\x09\x04\x0E\x1000Er is nu iets waar je je eerst op moet\nrichten, of niet?\n\n\n\x0E\x01\x09\x04\x0D\xF00Als je niet op een of ander avontuur was,\ndan zou je waarschijnlijk ook niet meer zo\nvaak naar de voorwerpenbank komen.\n\nDus vanaf nu zal ik niets meer van je\nvragen. Ik zal alleen nog vanuit de verte\nop je letten, en natuurlijk ook op je\nspullen.\n\x0E\x01\x09\x04\x0E\x1000En als je dan eindelijk klaar bent met je\nbelangrijke werk, dan vertellen we mijn\nvader dat we verliefd zijn!\n\n\x0E\x01\x09\x04\x0B\xD00Maar tot die tijd, mondje dicht! O,\nlieverd, ik hoop dat ik je snel weer bij de\nvoorwerpenbank zie.")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214Oké... Als dat je antwoord is...\n\n\n\nSorry dat ik je hiermee heb\nlastiggevallen...")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13Nee. Ik wil niet dat je medelijden met me\nhebt.\n\n\nHet gaat wel. Ik ben zo weer over je\nheen...\n\n\n\x0E\x01\x09\x04\x14\xD00De volgende keer dat ik je tegenkom, dan\nbegroet ik je als elke andere klant...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 6}
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 327, 'param3': 6}
/*<327>*/ 										printf("Maar vanavond wil ik alleen zijn...\n\n\n\nGoedenacht... lieverd.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120AMeen je dat nou?!\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Voel je dan echt niets voor mij? Ben ik\nvoor jou enkel het meisje dat op je spullen\npast? Is dat het?\n[1]Nee, ik hou van je![2]Ja.")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120FWat zeg je?! Hoe kun je me dit aandoen?\n\n\n\n\x0E\x01\x09\x04\x0E\x1000O, wacht... Ik snap het al, denk ik... Je\nbent gewoon te verlegen om me te\nvertellen hoe je je voelt, of niet?\n[1]Ja, ik ben verlegen![2]Nee...")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08Wat? Dus je houdt wel van me?\n\n\n\n[1]Ik hou van je![2]Sorry, nee.")
/*<313>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								  case 1:
          									goto flw_307
          								}
          							}
          						  case 1:
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210Huh?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00M-Misschien moet ik het op een andere\nmanier vragen...\n\n\n\x0E\x01\x09\x04\x0E\x1000Oké. Eens denken... Wat voor iemand ben\nik voor jou?\n[1]Mijn liefje![2]Een zakenvrouw.")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07Hallo, <r<lieverd>>! Kom binnen...\n\n\n\nJe komt me thuis opzoeken... O, ik kan\nm'n geluk niet op!")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15O, hallo! Dus je hebt besloten om me nu\nook thuis op te zoeken...\n\n\nProbeer je me iets te zeggen? Ben ik zo\nbijzonder voor jou?")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17Al mis je me nog zo zeer, ik ben niet van\nplan klanten in mijn huis te verwelkomen\nwanneer ik eindelijk even vrij heb.\n\n\x0E\x01\x09\x04\x01\x800Of projecteer ik nu alleen maar iets?")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ach... Waar zou mijn droomprins nu zijn?\nIk wil hem dolgraag mijn hart geven...\n\n\n\x0E\x01\x09\x04\x01\x800Eh... Hé, knul, wat moet dat? Vind je het\nsoms normaal om zonder kloppen iemands\nhuis binnen te lopen?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02O, Link, dank je wel!\n\n\n\n\x0E\x01\x09\x04\n\x900Mijn huis is weer brandschoon dankzij\njou! Wat is het toch fijn om mijn huisje\nzo te zien, zonder een dikke laag stof.")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909Toe, vergeet niet je beloning, want zo kan\nik je toch niet laten gaan. Hier, <r<20 rupees\n>>voor je harde werk. Niet slecht, hè?\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900Als het hier weer zo stoffig wordt, dan\nheb ik misschien wel weer je hulp nodig\nbij het schoonmaken. Tegen betaling,\nnatuurlijk.")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900O en dan nog iets. Vertel Pimmus niet dat\nje me geholpen hebt, hoor.\n\n\n\x0E\x01\x09\x04\x08\x900Hij wordt vast boos als hij hoort dat ik\ngeld uitgeef aan iets waarvan hij vindt\ndat ik het zelf moet doen. Maar jij kunt\nwel een geheimpje bewaren, toch?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02O, Link, dank je wel!\n\n\n\n\x0E\x01\x09\x04\n\x900Mijn huis is weer brandschoon dankzij\njou! Wat is het toch fijn om mijn huisje\nzo te zien, zonder een dikke laag stof.")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02Het is zo fijn om eindelijk hulp te\nhebben! Je bent een ijverige jongeman,\nLink.\n\nZodra al het stof weg is, dan geef ik je\nwat rupees. Laat maar even weten\nwanneer je klaar bent!\n\n\x0E\x01\x09\x04\x01\x900Of ben je al klaar?\n[1]Al klaar![2-]Nog niet.")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nO, jeetje... Wat jammer. Laat het me\nweten als je de volgende keer wel kunt\nhelpen, oké?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900O, nou, geef niet op! Als je hard werkt, is\ndat stof zo weg. Ik raad je aan met de\nvloer te beginnen...\n\nEr ligt waarschijnlijk ook nog wat stof bij\n<r<het raam>>, op <r<de meubels>> en op <r<het bed>>.\nKijk goed rond en zorg ervoor dat je alles\ngoed afstoft!")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("Hallo, Link. Wacht even! Ik\nheb hier nog je beloning voor het helpen\nbij het opruimen. Kom maar hier.")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04O. Hallo, Link. Ben je nog\ndruk aan het stoffen?\n\n\nOf ben je al klaar met schoonmaken?\n[1]Al klaar![2-]Bijna...")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nO, jeetje... Wat jammer. Laat het me\nweten als je de volgende keer wel kunt\nhelpen, oké?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900O, nou, geef niet op! Als je hard werkt, is\ndat stof zo weg. Ik raad je aan met de\nvloer te beginnen...\n\nEr ligt waarschijnlijk ook nog wat stof bij\n<r<het raam>>, op <r<de meubels>> en op <r<het bed>>.\nKijk goed rond en zorg ervoor dat je alles\ngoed afstoft!")
/*<165>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 140, 'param3': 15}
          			goto flw_140
          		}
          	}
          }

          void entrypoint_123_11() {
/*<141>*/ 	start()
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 147, 'param3': 17}
/*<147>*/ 	set_camera(4, 0)
/*<142>*/ 	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          	  case 0:
          		flw_164:
/*<164>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
          			goto flw_219
          		  case 1:
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ga je al naar huis, Link?\n\n\n\nDoe Pimmus de groetjes als je hem\ntegenkomt. Hij zou nu op patrouille\nmoeten zijn!")
/*<146>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*<163>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<143>*/ 		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          		  case 0:
/*<144>*/ 			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
          			goto flw_164
          		  case 1:
          			goto flw_164
          		}
          	}
          }

          void entrypoint_123_12() {
/*<214>*/ 	start()
/*<274>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 215, 'param3': 6}
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08O, jeetje! Er is geen stofdeeltje meer in\ndit huis te bekennen! Dank je wel, lieve\nLink!\n\n\x0E\x01\x09\x04\n\x900Ik heb me in dagen niet zo goed gevoeld\nals nu. Kom hier, ik heb een beloning voor je.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Dat was een heel kostbaar voorwerp. Je\nbent me minstens <r<30 rupees >>verschuldigd!\nEn dat bedrag heb ik niet net uit mijn\nduim gezogen!")
/*<382>*/ 	switch (random(4)) {
          	  case 0:
/*<383>*/ 		check_item_flag(501, 24)
/*<384>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 174}) {
          		  case 0:
          			flw_385:
/*<385>*/ 			rupees += -24;
          			flw_400:
/*<400>*/ 			entrypoint_123_14();
          		  case 1:
/*<386>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<406>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_385
          		}
          	  case 1:
/*<387>*/ 		check_item_flag(501, 26)
/*<388>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 176}) {
          		  case 0:
          			flw_389:
/*<389>*/ 			rupees += -26;
          			goto flw_400
          		  case 1:
/*<390>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<407>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_389
          		}
          	  case 2:
/*<391>*/ 		check_item_flag(501, 29)
/*<392>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 178}) {
          		  case 0:
          			flw_393:
/*<393>*/ 			rupees += -29;
          			goto flw_400
          		  case 1:
/*<394>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<408>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_393
          		}
          	  case 3:
/*<395>*/ 		check_item_flag(501, 38)
/*<396>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 180}) {
          		  case 0:
          			flw_397:
/*<397>*/ 			rupees += -38;
          			goto flw_400
          		  case 1:
/*<398>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<409>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_397
          		}
          	}
          }

          void entrypoint_123_14() {
/*<337>*/ 	start()
          	flw_246:
/*<246>*/ 	zone_temp_flags[1 /* 0x1 02 */] = false;
/*<247>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_248:
/*<248>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<245>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_248
          	}
          }

          void entrypoint_123_15() {
/*<360>*/ 	start()
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Dat was een waardevol stuk antiek en het\nwas toch zeker<r< 20 rupees>> waard! Dat\nverzin ik toch echt niet zomaar!")
/*<358>*/ 	switch (random(4)) {
          	  case 0:
/*<357>*/ 		check_item_flag(501, 17)
/*<356>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 152}) {
          		  case 0:
          			flw_355:
/*<355>*/ 			rupees += -17;
          			flw_342:
/*<342>*/ 			entrypoint_123_14();
          		  case 1:
/*<354>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<410>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_355
          		}
          	  case 1:
/*<353>*/ 		check_item_flag(501, 19)
/*<352>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 150}) {
          		  case 0:
          			flw_351:
/*<351>*/ 			rupees += -19;
          			goto flw_342
          		  case 1:
/*<350>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<411>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_351
          		}
          	  case 2:
/*<349>*/ 		check_item_flag(501, 22)
/*<348>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 148}) {
          		  case 0:
          			flw_347:
/*<347>*/ 			rupees += -22;
          			goto flw_342
          		  case 1:
/*<346>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<412>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_347
          		}
          	  case 3:
/*<345>*/ 		check_item_flag(501, 23)
/*<344>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 146}) {
          		  case 0:
          			flw_343:
/*<343>*/ 			rupees += -23;
          			goto flw_342
          		  case 1:
/*<341>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Dat was een mooi stuk antiek, Ja, dat gaat\nje wel <r<10 rupees>> kosten! En ja, zoveel was\nhet echt waard!")
/*<362>*/ 	switch (random(4)) {
          	  case 0:
/*<363>*/ 		check_item_flag(501, 7)
/*<364>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 162}) {
          		  case 0:
          			flw_365:
/*<365>*/ 			rupees += -7;
          			flw_380:
/*<380>*/ 			entrypoint_123_14();
          		  case 1:
/*<366>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<414>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_365
          		}
          	  case 1:
/*<367>*/ 		check_item_flag(501, 8)
/*<368>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 164}) {
          		  case 0:
          			flw_369:
/*<369>*/ 			rupees += -8;
          			goto flw_380
          		  case 1:
/*<370>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<415>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_369
          		}
          	  case 2:
/*<371>*/ 		check_item_flag(501, 11)
/*<372>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 166}) {
          		  case 0:
          			flw_373:
/*<373>*/ 			rupees += -11;
          			goto flw_380
          		  case 1:
/*<374>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<416>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_373
          		}
          	  case 3:
/*<375>*/ 		check_item_flag(501, 13)
/*<376>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 168}) {
          		  case 0:
          			flw_377:
/*<377>*/ 			rupees += -13;
          			goto flw_380
          		  case 1:
/*<378>*/ 			printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<417>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_377
          		}
          	}
          }

          void entrypoint_123_00() {
          	start()
/*<  4>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<  5>*/ 		check_item_flag(49, 1)
/*<  6>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          		  case 0:
/*<  1>*/ 			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          			  case 0:
/*<  7>*/ 				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          				  case 0:
/*< 44>*/ 					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          					  case 0:
/*< 43>*/ 						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
          						  case 0:
          							flw_19:
/*< 19>*/ 							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          							  case 0:
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Kom binnen, Link.\n\n\n\nAls alles weer met een dikke laag stof\nbedekt is, dan zal ik jou eerst om hulp\nvragen!")
          							  case 1:
/*<124>*/ 								switch (zone_temp_flags[0 /* 0x1 01 */]) {
          								  case 0:
/*<211>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<213>*/ 										entrypoint_123_08();
          									  case 1:
/*<212>*/ 										entrypoint_123_09();
          									}
          								  case 1:
/*<123>*/ 									switch (zone_temp_flags[1 /* 0x1 02 */]) {
          									  case 0:
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01Wil je me wat helpen bij de grote\nschoonmaak? Ik heb gewoon zo'n hekel\naan schoonmaken...\n\n\x0E\x01\x09\x04\n\x900Ik geef je er zelfs wat rupees voor, oké?\n[1]Prima![2-]Nee, sorry.")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07Ik ben zo blij dat je besloten hebt me te\nhelpen! Ik wist wel dat je me niet met\ndeze zooi zou laten zitten, Link.\n\n\x0E\x01\x09\x04\x01\xD00Dan laat ik je nu je ding doen. Hup, hup,\naan de slag!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AO... \x0E\x03\x01\x00Link, je bent al net zo'n\nnietsnut als ik!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Kom binnen, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Mijn huis is weer een stoffige bende. Help\nje me bij het schoonmaken? Dan geef ik\nje wat rupees...\n[1]Prima![2-]Nee, sorry.")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hallo, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Pimmus is heel boos op me...\n\n\n\n\x0E\x01\x09\x04\n\x900Hij vindt dat ik mijn geld niet aan een\nschoonmaker uit moet geven.\n\n\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09Maar... jij bent niet een schoonmaker van\nberoep, of wel, Link? Dus dat\nzou in orde moeten zijn, toch?\n\n\x0E\x01\x09\x04\x08\x900Ik vind in elk geval dat het in orde is. Als\nhet aan mij ligt, dan betaal ik je telkens\nwanneer mijn huis stoffig is om het weer\nschoon te maken.")
/*< 46>*/ 							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
          						}
          					  case 1:
          						goto flw_19
          					}
          				  case 1:
/*<438>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 31}
/*<120>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<200>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<210>*/ 							entrypoint_123_08();
          						  case 1:
/*<209>*/ 							entrypoint_123_09();
          						}
          					  case 1:
/*<  8>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Wil je me wat helpen bij de grote\nschoonmaak? Ik heb gewoon zo'n hekel\naan schoonmaken...\n\n\x0E\x01\x09\x04\n\x900Ik geef je er zelfs wat rupees voor, oké?\n[1]Prima![2-]Nee, sorry.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07Echt waar?! Geweldig! Ik wist wel dat je\nme niet alleen met al deze viezigheid\nachter zou laten, Link.\n\n\x0E\x01\x09\x04\x08\x904Een bezem? Ik zal je eens wat vertellen;\nik heb geen idee waar ik dat gekke ding\ngelaten heb... \x0E\x01\x08\x02\xFFCDEn of we er eigenlijk ooit een in\nhuis hebben gehad...\n\x0E\x01\x09\x04\x09\x900Meestal wacht ik gewoon tot het eens goed\nwaait en alle stof vanzelf <r<weggeblazen\n>>wordt.\n\n\x0E\x01\x09\x04\x01\x900Luister goed. Hoe je het doet, vind ik niet\nbelangrijk, maar <r<blaas al dat stof weg\n>>voor mij.\n\n\x0E\x01\x09\x04\x08\x902Aan de slag, jongeman!")
/*<119>*/ 								make_actor_do_something(0, 0)
/*<148>*/ 								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<  3>*/ 								zone_temp_flags[0 /* 0x1 01 */] = true;
          								flw_122:
/*<122>*/ 								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          								  case 0:
          									flw_121:
/*<121>*/ 									zone_temp_flags[1 /* 0x1 02 */] = true;
          								  case 1:
/*<118>*/ 									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
          									goto flw_121
          								}
          							  case 1:
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AO... \x0E\x03\x01\x00Link, je bent al net zo'n\nnietsnut als ik!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Hallo, Link. Kom binnen.\n\n\n\n\x0E\x01\x09\x04\x01\x900Zou jij me niet willen helpen bij het\nschoonmaken? Ik heb daar zo'n hekel\naan...\n\n\x0E\x01\x09\x04\n\x900Ik geef je zelfs wat rupees voor de moeite,\noké?\n\n\n[1]Natuurlijk![2-]Nee, sorry.")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01O, hallo, Link. Kom binnen.\n\n\n\n\x0E\x01\x09\x04\x08\x900En let maar niet op de vreselijke bende,\nLink. Mijn huis is aan een\ngrote schoonmaak toe...\n\n\x0E\x01\x09\x04\x09\x900Pimmus zegt altijd, \"waarom stof je niet\neens wat af?\" Maar het lukt me gewoon\nniet om de tijd ervoor te vinden.\n\n\x0E\x01\x09\x04\x08\x900En dus wilde ik jou, heel brutaal, vragen\nof jij me niet een handje wil helpen. Ik\nwil je zelfs wat betalen voor de moeite,\nLink.[1]Oké![2-]Nee...")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02Doet mijn Pimmusje nog zijn best op\nschool?\n\n\nHij is niet zoals ik, want hij is altijd heel\ndoelgericht bezig. Ik weet dat ik me dus\neigenlijk niet druk hoef te maken.\n[1]Wat een bende![2]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Ja, je hebt gelijk... Het is hier een zootje.\nDit overkomt me dus telkens weer!\n\n\n\x0E\x01\x09\x04\n\x90AIk heb toch zo'n hekel aan schoonmaken\nen opruimen. Kon iemand me maar een\nhandje helpen...")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904O, pardon, wat is er? Wilde je iets\nzeggen?")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01O, Link, jij bent het.\nWelkom.\n\n\n\x0E\x01\x09\x04\n\x900Vertel eens hoe het met mijn Pimmusje\ngaat op school.")
/*< 16>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			}
          		}
          	  case 1:
          		goto flw_17
          	}
          }

          void entrypoint_123_01() {
/*< 22>*/ 	start()
/*<295>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1014, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf("Ik dacht dat we het eens waren, mam!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("O, wind je niet zo op, Pimmus.\nAlsjeblieft...")
/*< 26>*/ 	printf("Natuurlijk wind ik me wel op!\n\n\n\nIk zie toch dat je de laatste tijd iemand\nvoor je hebt laten schoonmaken! En dat\nje daar <r<rupees voor betaalt>>!\n\nIk heb je die rupees gegeven om er brood\nmee te kopen!\n\n\nAls je zo met je geld om blijft gaan, dan\nis er straks niks over voor mijn schoolgeld\nvoor de ridderacademie!\n\nIk loop geen extra patrouilles zodat jij\nhier een luxe leventje kan leiden!\n\n\nDit moet echt ophouden!")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 28, 'param3': 6}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 90, 'next': 32, 'param3': 6}
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 170, 'param3': 6}
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("O... Hé, Link... Wat kom jij\nhier zo laat nog doen?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100J-Je hebt niks gehoord, toch? Van wat er\nzojuist is gezegd?\n[1]Wat gehoord?[2]Sorry...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Niets! Helemaal niets...\n\n\n\n\x0E\x01\x09\x04\x1208\x400Hoe dan ook, ik moet weer op patrouille!\nZorg goed voor jezelf en kijk uit wanneer\nje 's nachts buiten bent!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100O nee... Je hebt ons gehoord!\n\n\n\n\x0E\x01\x09\x04\x120F\x1100Het is waar! Ik doe de nachtpatrouille\nom wat extra rupees te verdienen!\n\n\n\x0E\x01\x09\x04\x1208\x1100Kijk niet zo raar, joh! Jij bent ook niet\nbepaald de ideale ridder, of wel, meneer\nLuistervink?!\n\n\x0E\x01\x09\x04\x120C\xC00Ach, misschien moeten we dit hele voorval\nmaar gewoon snel vergeten!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Hmm...<pause1E> De monsters die normaal 's nachts\ntevoorschijn komen, zijn vandaag nergens\nte vinden.\n\n\x0E\x01\x09\x04ÿ\xFF00Wat zou er aan de hand zijn... Al mis ik\ndie monsters natuurlijk helemaal niet!\nRustige avonden zijn de beste avonden.")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("Hé, Link! Het kan 's nachts\nbest gevaarlijk worden buiten, dus wees\nvoorzichtig.\n\n\x0E\x01\x09\x04\x11\xC09O, en vergeet niet om je mond te houden\nover ons geheim van die ene avond...\nOké?")
          				flw_431:
/*<431>*/ 				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          				  case 0:
/*<433>*/ 					zone_temp_flags[16 /* 0x3 01 */] = true;
          				  case 1:
          				}
          			  case 1:
/*<161>*/ 				switch (scene_flags[76 /* 0x8 10 */]) {
          				  case 0:
/*<176>*/ 					{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4376, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("Ik vind het zo vervelend dat je dat hebt\ngezien, Link. Ik schaam me\ndood...\n\n\x0E\x01\x09\x04\x0F\x1100Soms schaam ik me echt enorm voor mijn\nmoeder. Ze is soms gewoon zo lui! Ik weet\nniet wat ik eraan kan doen.\n\n\x0E\x01\x09\x04\x08\xC0BMaar maak je om mij niet druk, hoor.\nHet komt wel goed.\n\n\n\x0E\x01\x09\x04\x01\x1100Maar ik ben er nog steeds niet achter wie\nmijn moeder geholpen heeft bij het\nschoonmaken...\n\n\x0E\x01\x09\x04\x08\xC16Waar was die persoon mee bezig? Om zich\nzomaar met andermans zaken bemoeien!")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Hallo, Link. Vind je Skyloft\nook niet een schitterende, vredige plek?\nDat is dankzij mijn werk hier!\n\n\x0E\x01\x09\x04\x0C\x400Laten we er als ridders alles aan doen om\nde vrede van Skyloft te bewaren!\n\n\n\x0E\x01\x09\x04\x01\xC52Hmm...<pause1E> Waarom kijk je me zo vreemd\naan?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("\x0E\x03\x01\x00Link! Ik beloof je dat jij ook\nop een dag zult begrijpen wat het\nbetekent om een ridder te zijn!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("Hé, Link! Het is 's nachts erg\ngevaarlijk buiten, dus kijk goed uit!\n\n\n\x0E\x01\x09\x04\x0B\x400Ik patrouilleer in dit gebied, dus houd\nhier de wacht.\n\n\n\x0E\x01\x09\x04\x08\x404De monsters komen hier 's nachts massaal\ntevoorschijn!\n\n\nHet is de eervolle taak van ridders als ik\nom onze dorpsgenoten te beschermen!\n[1]Wat goed![2]Eervol of betaald?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09Wat goed?! Nee, joh! Wij zijn ridders\nin opleiding! Dit is wat van ons verwacht\nwordt. Dit is nu eenmaal wat ridders\ndoen; wij helpen de mensen van Skyloft.\nEn dat is wat ik doe! De glimlachende\ngezichten van de mensen die ik beschermd\nheb, zijn voor mij genoeg beloning!\n\n\x0E\x01\x09\x04\x08\x400Dat is wat het betekent om een ridder te\nzijn. \x0E\x01\x09\x04\x00\x05Op een dag zul jij ook begrijpen wat\nhoe dat voelt, Link!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x0C\xC17\x0E\x03\x01\x00Link! Kom op, zeg! En waarom\nwilde jij zelf ridder worden?\n\n\nVoor de rupees?! Dat is toch niet eervol\nen al helemaal niet ridderlijk?!\n\n\n\x0E\x01\x09\x04\x08\x405Zo zie ik het! De lachende gezichten van\nblije mensen die zich veilig voelen, daar\ndoe ik het allemaal voor. En dat is wat\neen echte ridder belangrijk vindt!")
          					goto flw_158
          				}
          			}
          		}
          	}
          }

          void entrypoint_123_03() {
/*<251>*/ 	start()
/*<253>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<255>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 768, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09Je hebt mijn waardevolle antiek kapot\ngemaakt!\n\n\nLaat dat niet nog eens gebeuren, anders\nzwaait er wat!")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ik verzamel antiek, dat is mijn hobby.\nAlle spulletjes in mijn huisje zijn heel\noud en heel kostbaar.\n\nPas maar goed op dat je niks omstoot!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\nNee?! Jij vlegel!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300Jij daar! Ja, jij! Waar heb ik dit aan\nverdiend? Wat heb ik jou ooit aangedaan?")
          			flw_401:
/*<401>*/ 			check_item_flag(501, 1)
/*<402>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 182}) {
          			  case 0:
/*<244>*/ 				switch (random(3)) {
          				  case 0:
/*<338>*/ 					entrypoint_123_13();
          				  case 1:
/*<339>*/ 					entrypoint_123_15();
          				  case 2:
/*<340>*/ 					entrypoint_123_16();
          				}
          			  case 1:
/*<405>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<418>*/ 					printf("Ik weet al dat je geen rooie rupee op zak\nhebt... DUS STOP MET HET SLOPEN\nVAN MIJN ANTIEK!\n\nMaak dat je wegkomt!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("Wat? Je hebt geen rooie rupee op zak?!\n\n\n\nVind je het soms normaal om zonder ook\nmaar een rupee op zak huizen binnen te\ndringen en spullen te slopen? Sta niet zo\ndom te grijnzen!\nJij hebt lef! Nou, ik wil je rupees al niet\nmeer. Maak dat je wegkomt! Vort!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300Mijn waardevolle antiek!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300Je hebt mijn waardevolle antiek kapot\ngemaakt!\n\n\nBasta! Slopen is kopen!\n\n\n\n\x0E\x01\x09\x04\x1F0B\x700Eens zien... Dat was een heel waardevol\nstuk antiek, voor <r<zo'n>> <r<20 rupees >>staan\nwe wat mij betreft quitte!\n\n\x0E\x01\x09\x04\x1F01\x305Hè? Kijk me niet zo raar aan. Of denk je\ndat ik dat bedrag uit mijn duim zuig?\n\n\n\x0E\x01\x09\x04\x1F09\x309Doe niet zo gek! Ik weet de exacte waarde\nvan elk van deze voorwerpen, dus met\nminder zal ik geen genoegen nemen!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300Als ik dat nog eens zie gebeuren, dan\nzwaait er wat!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("Wat? Je hebt geen rooie rupee op zak?!\n\n\n\nVind je het soms normaal om zonder ook\nmaar een rupee op zak huizen binnen te\ndringen en spullen te slopen? Sta niet zo\ndom te grijnzen!\nJij hebt lef! Nou, ik wil je rupees al niet\nmeer. Maak dat je wegkomt! Vort!")
/*<422>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_235
          		}
          	}
          }

          void entrypoint_123_05() {
/*<258>*/ 	start()
/*<284>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 43, 'next': 292, 'param3': 32}
/*<292>*/ 	set_camera(13, 0)
/*<291>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 287, 'param3': 14}
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 43, 'param2': 99, 'next': 259, 'param3': 50}
/*<259>*/ 	printf("")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 260, 'param3': 6}
/*<260>*/ 	changeScene(0, 0) // 
          }

