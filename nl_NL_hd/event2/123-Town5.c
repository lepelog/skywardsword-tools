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
/*< 87>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000007>Hallo, lieverd! Ik bewaar hier alles voor\nje dat je maar kwijt wil.\n[1-]Te gek![2]Nee, dank je.")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000008>Welkom terug, lieverd!\n\n\n\nKan ik iets voor mijn lieverd betekenen?\nIk sta open voor alles dat je maar kwijt\nwil! Echt alles!\n[1-]Te gek![2]Nee, dank je.")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x0000000e>Welkom, <heroname>. Heb je iets bij\nje waar ik, de steeds mooiere vrouw die\nallang hersteld is van haar gebroken hart,\nop kan letten?\n[1-]Ja, alsjeblieft![2]Nee, dank je.")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000005>O... Welkom, <heroname>.\n\n\n\nSorry dat ik me laatst zo raar gedroeg.\nIk heb er lang en goed over nagedacht\nen mijn liefde voor jou is weer voorbij.\n\nZe zeggen dat een vrouw nog mooier is\nnadat iemand haar hart gebroken heeft.\nIk denk dat ik nu begrijp wat daarmee\nbedoeld wordt...\nDus ik heb me voorgenomen om mezelf\nelke dag een beetje mooier te maken.\n\n\nDus zit er maar niet al te veel mee.\n\n\n\nMaar... Waar waren we? Heb je iets bij je\nwaar ik voor je op kan letten?\n[1-]Ja, alsjeblieft![2]Nee, dank je.")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Hallo, lieverd!\n\n\n\n<0x10009:0x000d0f00>Hmm... Ik, eh... <color red<Ik wil graag dat je me\nvannacht thuis komt opzoeken>coloroff>. Er is iets\ndat ik je moet vertellen.\n\n<0x10009:0x00080a00>Mijn huis staat vlak naast de bazaar. Je\nkomt wel even langs, toch? Ik zal op je\nwachten!")
          								flw_79:
/*< 79>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "O, en heb je iets bij je waar ik voor je op\nmoet letten? Of kom je iets ophalen?\n[1-]Ja![2]Nee, dank je.")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Hallo, lieverd!\n\n\n\n<0x10009:0x000d0f00>Hmm... Ik, eh... <color red<Ik wil graag dat je me\nvannacht thuis komt opzoeken>coloroff>. Er is iets\ndat ik je moet vertellen.\n\n<0x10009:0x00080a00>Mijn huis staat vlak naast de bazaar. Je\nkomt wel even langs, toch? Ik zal op je\nwachten!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>Welkom, <color red<lieverd>coloroff>! Ik heb geduldig op je\ngewacht! Je kunt me echt alles toever-\ntrouwen! Eh, ik heb het natuurlijk over je\nspullen...\nWil je dat ik ergens op let voor je? Of\nkom je iets ophalen?\n[1-]Ja.[2]Nee.")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00000008>O...")
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080a00>Daar... Daar ben je dan! Ik heb me hier\nzo op verheugd!\n[1-]...[2-]Ja, dat klopt.")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x000d0f0a>O, kijk me niet zo aan. Ik moet er van\nblozen, <color red<lieverd>coloroff>!")
          					flw_66:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00120a00>Wanneer ik aan je denk, krijg ik vlinders\nin mijn buik en gaat m'n hart tekeer en\nword ik zelfs een beetje duizelig en,\npfoeh...\nJe denkt toch niet... Ik ben toch niet...\n\n\n\n[1-]Klinkt ernstig.[2-]Ja, je bent verliefd.")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x000f120e>O, plaag me niet zo... Tihihi.")
          						flw_70:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00120a00>Oeps. Ik had mezelf eventjes niet meer in\nde hand. Tijd om terug aan het werk te\ngaan!\n\n<0x10009:0x000e1000>Goh, waar was ik? O ja, ik stond op\nhet punt om je te vragen of je me iets\nwil geven... zoals je eeuwige liefde.\n[1-]Ja, alsjeblieft.[2]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x000e100f>Echt? Ik kan m'n geluk niet op!")
          							flw_72:
/*< 72>*/ 							printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x000d0f0a>O nee! Het spijt me zo! Ik moet mezelf\nen mijn gekke dromen beter in bedwang\nzien te houden.\n\n<0x10009:0x00080a00>Eh... Nee, wacht... Ah! Ik bedoel, heb je\niets waar ik voor je op kan letten?\n<color red<Lieverd>coloroff>?\n[1-]Alsjeblieft![2]Nee, dank je.")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x000f0f0d>Aaaah! Dat kun je toch niet zomaar\nzeggen?! O, wat erg!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x000d0f0a>Je... Je maakt me zo blij dat mijn hart er\nsneller van gaat kloppen. Ik krijg het er\nwarm van...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>O, hallo, daar ben je weer. Als je iets hebt\ndat je graag aan mij wil geven, geef dan\neen gil.\n\nDus heb je vandaag iets in je buidel dat je\naf wilt geven? Of ben je hier gekomen om\niets op te halen?\n[1-]Ja![2]Nee.")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "Hallo en welkom bij de voorwerpenbank.\n<0x10009:0x00000005>O...")
/*<279>*/ 				wait_frames(15)
/*< 57>*/ 				printf(/* textboxtype: 0, unk: 1, line: 61 */ "O. Ik, eh... W-Welkom...\n[1-]Wat is er?[2-]Wat doe je raar.")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x000a0f18>Eh... Niks, hoor! Er is niks aan de hand.")
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 0, unk: 1, line: 64 */ "Het is niet alsof ik hier zo zit van: \"O,\nkijk, hij is er weer! Hoera!\", of iets\ndergelijks...\n\nMaar we zien elkaar wel erg vaak de\nlaatste tijd. Vind jij ook niet dat onze\nrelatie inmiddels wat verder gaat dan die\ntussen klant en verkoper?\n<0x10009:0x00101405>O, nee... Daar bedoelde ik niks mee! Wat\nzeg ik nu?!\n\n\nVergeet dat maar gewoon allemaal, oké?\n\n\n\n<0x10009:0x00070800>Oké, Paulah. Cool en professioneel blijven\nnu. Heb je nog iets bij je waar ik voor je\nop kan letten?\n[1-]Ja, alsjeblieft.[2]Nee, dank je.")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000a0f18>H-Huh? Ik weet niet wat je bedoelt. Weet\nje het heel zeker?")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00000001>Hoi. Welkom bij de voorwerpenbank. Al\ndenk ik dat je hier vooral bent om mij te\nzien, of niet? Ha! Fijn, hè? Wen er maar\nniet aan.\nMaar zeg het eens. Heb je iets aan te\ngeven?\n[1-]Ja![2]Nee.")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00000001>Hallo. Welkom bij de voorwerpenbank.\nO, jij bent het...\n\n\nJe komt wel erg vaak langs de laatste tijd.\nEn eigenlijk ben je ook de enige die zo\nvaak langskomt...\n\n<0x10009:0x00000004>Maar, wacht eens even...\n\n\n\nHet zal toch niet zo zijn...\n\n\n\nKom je hier soms alleen maar om mij te\nzien? Tihihi.\n\n\n[1-]Eh, nee.[2-]Ja.")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000002>O... Nee, natuurlijk niet...\n\n\n\nDat zou ook helemaal niet logisch zijn,\nof wel?\n\n\n<0x10009:0x000a0c00>Ach, ik vind het ook niet heel erg dat dat\nniet zo is, hoor. Geeft helemaal niet.")
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00070800>Voordat ik het vergeet! Ik zit hier niet\nom bewonderd te worden. Heb je iets dat\nik voor je kan bewaren?\n[1-]Ja, hier.[2]Nee, dank je.")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000002>Wat?! Echt waar?\n\n\n\nHa! Dacht je nu echt dat ik voor zo'n\noude versiertruc zou vallen?\n\n\n<0x10009:0x000a0c00>Maar als het echt waar was... dan zou dat\nbest fijn zijn...")
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
/*<106>*/ 								printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000009>Ik ben blij dat je me eerlijk verteld hebt\nhoe je je voelt, lieverd. Tot snel!")
          							  case 1:
/*<109>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x0000000d>Lieverd! Ik zei je toch dat we onze relatie\ngeheim moesten houden! Als je te vaak\nlangskomt, heeft m'n vader ons straks nog\ndoor!\nWaarom wil je me zo laat nog spreken?\n[1-]Ik wil praten![2-]Laat maar.[3-]Voorwerpen!")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00080008>Ik zou echt graag met je praten, voor\neeuwig, maar m'n vader ziet ons! Kom\neen andere keer terug!")
          								  case 1:
/*<112>*/ 									printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00080a00>Tihihi. Jij bent dus zo'n sterk en\ndominant type? Maar dat is ook precies\nwaarom ik van je houd, lieverd!")
          								  case 2:
/*<113>*/ 									printf(/* textboxtype: 0, unk: 0, line: 107 */ "Als dat het enige is dat je van me wilt,\ndan kun je me toch gewoon overdag\nopzoeken bij de voorwerpenbank?\n\n<0x10009:0x000e1000>Of is dat het enige waar ik goed voor ben\nvoor jou?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000014>Ik ben sterk. Ik ben zo weer over je heen.\nMaar laat me nu alsjeblieft alleen in deze\nkoude nacht...")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00000013>Mijn vader is de laatste tijd echt in een\ngeweldig humeur...\n\n\nHeeft hij wel door dat zijn dochter voor\nhet eerst de pijn van een gebroken hart\nervaart? Bah, wat irritant...")
          									  case 1:
/*<116>*/ 										printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10009:0x00000014>Ik zei wel dat ik snel over je heen zou zijn,\nmaar soms moet ik 's nachts even huilen.\nDus zo voelt liefdesverdriet...")
          									}
          								  case 1:
/*<114>*/ 									printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x0000000e>O, <heroname>... Ik had nooit gedacht\ndat een gebroken hart zo'n pijn kon\ndoen...<0x10009:0x00000014>")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						wait_frames(1)
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000005><0x30001:0x><heroname>, ben je hier om mij op\nte zoeken? O, dank je wel.\n\n\n<0x10009:0x000e0f00>Het zit zo, ik wil je al een tijdje iets\nvragen, <heroname>...\n\n\nIk doe het gewoon! Ben je er klaar voor?")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf(/* textboxtype: 0, unk: 0, line: 86 */ "Wat beteken ik voor jou?\n\n\n[1-]Ik hou van je.[2-]Je bewaart spullen.")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x000e100f>Je... wat? Echt?! Je houdt me niet voor\nde gek?!\n[1-]Echt waar![2-]Gefopt...")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00080a08>O, ik ben zo opgelucht! Dit voelt als een\ndroom! Ik moet het nog een keer horen,\ngewoon om het zeker te weten!\n\n<0x10009:0x000e1000>Je houdt echt, echt, echt van me?\n\n\n\n[1-]Echt waar![2-]Nou, nee...")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x000d0f0a>Je liegt niet, toch? Ik zou niet weten wat\nik zou doen als ik erachter kwam dat je\nhierover liegt!\n\n\n[1-]Het is echt waar![2-]Ik lieg wel.")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00080a09>O, dank je! Ik hou ook heel veel van jou,\nlieverd! Sorry dat ik ooit aan je twijfelde\nen je al die vragen stelde!")
/*<318>*/ 										wait_frames(45)
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										wait_frames(30)
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										wait_frames(30)
/*<314>*/ 										printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000013>Maar ik weet hoe je je echt voelt. Ik weet\nhet beter dan je denkt...\n\n\nIk voel dat je er nog niet helemaal klaar\nvoor bent om je volledig op onze relatie te\nrichten... Ik voel dat je het daar op dit\nmoment veel te druk voor hebt.\n<0x10009:0x000e1000>Er is nu iets waar je je eerst op moet\nrichten, of niet?\n\n\n<0x10009:0x000d0f00>Als je niet op een of ander avontuur was,\ndan zou je waarschijnlijk ook niet meer zo\nvaak naar de voorwerpenbank komen.\n\nDus vanaf nu zal ik niets meer van je\nvragen. Ik zal alleen nog vanuit de verte\nop je letten, en natuurlijk ook op je\nspullen.\n<0x10009:0x000e1000>En als je dan eindelijk klaar bent met je\nbelangrijke werk, dan vertellen we mijn\nvader dat we verliefd zijn!\n\n<0x10009:0x000b0d00>Maar tot die tijd, mondje dicht! O,\nlieverd, ik hoop dat ik je snel weer bij de\nvoorwerpenbank zie.")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000f1214>Oké... Als dat je antwoord is...\n\n\n\nSorry dat ik je hiermee heb\nlastiggevallen...")
/*<329>*/ 										wait_frames(45)
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										wait_frames(30)
/*<332>*/ 										printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000013>Nee. Ik wil niet dat je medelijden met me\nhebt.\n\n\nHet gaat wel. Ik ben zo weer over je\nheen...\n\n\n<0x10009:0x00140d00>De volgende keer dat ik je tegenkom, dan\nbegroet ik je als elke andere klant...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										wait_frames(1)
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										wait_frames(30)
/*<327>*/ 										printf(/* textboxtype: 0, unk: 0, line: 101 */ "Maar vanavond wil ik alleen zijn...\n\n\n\nGoedenacht... lieverd.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x000f120a>Meen je dat nou?!\n\n\n\n<0x10009:0x000e1000>Voel je dan echt niets voor mij? Ben ik\nvoor jou enkel het meisje dat op je spullen\npast? Is dat het?\n[1-]Nee, ik hou van je![2-]Ja.")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x000f120f>Wat zeg je?! Hoe kun je me dit aandoen?\n\n\n\n<0x10009:0x000e1000>O, wacht... Ik snap het al, denk ik... Je\nbent gewoon te verlegen om me te\nvertellen hoe je je voelt, of niet?\n[1-]Ja, ik ben verlegen![2-]Nee...")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00080a08>Wat? Dus je houdt wel van me?\n\n\n\n[1-]Ik hou van je![2-]Sorry, nee.")
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
/*<298>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x000f1210>Huh?\n\n\n\n<0x10009:0x000d0f00>M-Misschien moet ik het op een andere\nmanier vragen...\n\n\n<0x10009:0x000e1000>Oké. Eens denken... Wat voor iemand ben\nik voor jou?\n[1-]Mijn liefje![2-]Een zakenvrouw.")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000007>Hallo, <color red<lieverd>coloroff>! Kom binnen...\n\n\n\nJe komt me thuis opzoeken... O, ik kan\nm'n geluk niet op!")
          				}
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000015>O, hallo! Dus je hebt besloten om me nu\nook thuis op te zoeken...\n\n\nProbeer je me iets te zeggen? Ben ik zo\nbijzonder voor jou?")
          			}
          		  case 1:
/*<100>*/ 			printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000017>Al mis je me nog zo zeer, ik ben niet van\nplan klanten in mijn huis te verwelkomen\nwanneer ik eindelijk even vrij heb.\n\n<0x10009:0x00010800>Of projecteer ik nu alleen maar iets?")
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000002>Ach... Waar zou mijn droomprins nu zijn?\nIk wil hem dolgraag mijn hart geven...\n\n\n<0x10009:0x00010800>Eh... Hé, knul, wat moet dat? Vind je het\nsoms normaal om zonder kloppen iemands\nhuis binnen te lopen?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>O, <heroname>, dank je wel!\n\n\n\n<0x10009:0x000a0900>Mijn huis is weer brandschoon dankzij\njou! Wat is het toch fijn om mijn huisje\nzo te zien, zonder een dikke laag stof.")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00010909>Toe, vergeet niet je beloning, want zo kan\nik je toch niet laten gaan. Hier, <color red<20 rupees\n>coloroff>voor je harde werk. Niet slecht, hè?<0x10009:0x000a0d00>")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00010900>Als het hier weer zo stoffig wordt, dan\nheb ik misschien wel weer je hulp nodig\nbij het schoonmaken. Tegen betaling,\nnatuurlijk.")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x000a0900>O en dan nog iets. Vertel Pimmus niet dat\nje me geholpen hebt, hoor.\n\n\n<0x10009:0x00080900>Hij wordt vast boos als hij hoort dat ik\ngeld uitgeef aan iets waarvan hij vindt\ndat ik het zelf moet doen. Maar jij kunt\nwel een geheimpje bewaren, toch?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>O, <heroname>, dank je wel!\n\n\n\n<0x10009:0x000a0900>Mijn huis is weer brandschoon dankzij\njou! Wat is het toch fijn om mijn huisje\nzo te zien, zonder een dikke laag stof.")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000002>Het is zo fijn om eindelijk hulp te\nhebben! Je bent een ijverige jongeman,\n<heroname>.\n\nZodra al het stof weg is, dan geef ik je\nwat rupees. Laat maar even weten\nwanneer je klaar bent!\n\n<0x10009:0x00010900>Of ben je al klaar?\n[1-]Al klaar![2]Nog niet.")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000a>O, jeetje... Wat jammer. Laat het me\nweten als je de volgende keer wel kunt\nhelpen, oké?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>O, nou, geef niet op! Als je hard werkt, is\ndat stof zo weg. Ik raad je aan met de\nvloer te beginnen...\n\nEr ligt waarschijnlijk ook nog wat stof bij\n<color red<het raam>coloroff>, op <color red<de meubels>coloroff> en op <color red<het bed>coloroff>.\nKijk goed rond en zorg ervoor dat je alles\ngoed afstoft!")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "Hallo, <heroname>. Wacht even! Ik\nheb hier nog je beloning voor het helpen\nbij het opruimen. Kom maar hier.")
          	  case 1:
/*<133>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000004>O. Hallo, <heroname>. Ben je nog\ndruk aan het stoffen?\n\n\nOf ben je al klaar met schoonmaken?\n[1-]Al klaar![2]Bijna...")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000a>O, jeetje... Wat jammer. Laat het me\nweten als je de volgende keer wel kunt\nhelpen, oké?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>O, nou, geef niet op! Als je hard werkt, is\ndat stof zo weg. Ik raad je aan met de\nvloer te beginnen...\n\nEr ligt waarschijnlijk ook nog wat stof bij\n<color red<het raam>coloroff>, op <color red<de meubels>coloroff> en op <color red<het bed>coloroff>.\nKijk goed rond en zorg ervoor dat je alles\ngoed afstoft!")
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
/*<145>*/ 			printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Ga je al naar huis, <heroname>?\n\n\n\nDoe Pimmus de groetjes als je hem\ntegenkomt. Hij zou nu op patrouille\nmoeten zijn!")
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
/*<274>*/ 	wait_frames(10)
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000d08>O, jeetje! Er is geen stofdeeltje meer in\ndit huis te bekennen! Dank je wel, lieve\n<heroname>!\n\n<0x10009:0x000a0900>Ik heb me in dagen niet zo goed gevoeld\nals nu. Kom hier, ik heb een beloning voor je.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x1f0a0309>Dat was een heel kostbaar voorwerp. Je\nbent me minstens <color red<30 rupees >coloroff>verschuldigd!\nEn dat bedrag heb ik niet net uit mijn\nduim gezogen!")
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
/*<386>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<394>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<398>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<359>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x1f0a0309>Dat was een waardevol stuk antiek en het\nwas toch zeker<color red< 20 rupees>coloroff> waard! Dat\nverzin ik toch echt niet zomaar!")
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
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<350>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<346>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x1f0a0309>Dat was een mooi stuk antiek, Ja, dat gaat\nje wel <color red<10 rupees>coloroff> kosten! En ja, zoveel was\nhet echt waard!")
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
/*<366>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<370>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<374>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*<378>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
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
/*< 20>*/ 								printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000001>Kom binnen, <heroname>.\n\n\n\nAls alles weer met een dikke laag stof\nbedekt is, dan zal ik jou eerst om hulp\nvragen!")
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
/*<125>*/ 										printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080d01>Wil je me wat helpen bij de grote\nschoonmaak? Ik heb gewoon zo'n hekel\naan schoonmaken...\n\n<0x10009:0x000a0900>Ik geef je er zelfs wat rupees voor, oké?\n[1-]Prima![2]Nee, sorry.")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00010d07>Ik ben zo blij dat je besloten hebt me te\nhelpen! Ik wist wel dat je me niet met\ndeze zooi zou laten zitten, <heroname>.\n\n<0x10009:0x00010d00>Dan laat ik je nu je ding doen. Hup, hup,\naan de slag!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0001090a>O... <0x30001:0x><heroname>, je bent al net zo'n\nnietsnut als ik!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Kom binnen, <heroname>.\n\n\n\n<0x10009:0x00080900>Mijn huis is weer een stoffige bende. Help\nje me bij het schoonmaken? Dan geef ik\nje wat rupees...\n[1-]Prima![2]Nee, sorry.")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000001>Hallo, <heroname>.\n\n\n\n<0x10009:0x00080900>Pimmus is heel boos op me...\n\n\n\n<0x10009:0x000a0900>Hij vindt dat ik mijn geld niet aan een\nschoonmaker uit moet geven.\n\n\n<0x10009:0x00010c00>...\n\n\n\n<0x10009:0x00080d09>Maar... jij bent niet een schoonmaker van\nberoep, of wel, <heroname>? Dus dat\nzou in orde moeten zijn, toch?\n\n<0x10009:0x00080900>Ik vind in elk geval dat het in orde is. Als\nhet aan mij ligt, dan betaal ik je telkens\nwanneer mijn huis stoffig is om het weer\nschoon te maken.")
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
/*< 15>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080d01>Wil je me wat helpen bij de grote\nschoonmaak? Ik heb gewoon zo'n hekel\naan schoonmaken...\n\n<0x10009:0x000a0900>Ik geef je er zelfs wat rupees voor, oké?\n[1-]Prima![2]Nee, sorry.")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000a0d07>Echt waar?! Geweldig! Ik wist wel dat je\nme niet alleen met al deze viezigheid\nachter zou laten, <heroname>.\n\n<0x10009:0x00080904>Een bezem? Ik zal je eens wat vertellen;\nik heb geen idee waar ik dat gekke ding\ngelaten heb... <0x10008:0xffcd>En of we er eigenlijk ooit een in\nhuis hebben gehad...\n<0x10009:0x00090900>Meestal wacht ik gewoon tot het eens goed\nwaait en alle stof vanzelf <color red<weggeblazen\n>coloroff>wordt.\n\n<0x10009:0x00010900>Luister goed. Hoe je het doet, vind ik niet\nbelangrijk, maar <color red<blaas al dat stof weg\n>coloroff>voor mij.\n\n<0x10009:0x00080902>Aan de slag, jongeman!")
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
/*< 13>*/ 								printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0001090a>O... <0x30001:0x><heroname>, je bent al net zo'n\nnietsnut als ik!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080d01>Hallo, <heroname>. Kom binnen.\n\n\n\n<0x10009:0x00010900>Zou jij me niet willen helpen bij het\nschoonmaken? Ik heb daar zo'n hekel\naan...\n\n<0x10009:0x000a0900>Ik geef je zelfs wat rupees voor de moeite,\noké?\n\n\n[1-]Natuurlijk![2]Nee, sorry.")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>O, hallo, <heroname>. Kom binnen.\n\n\n\n<0x10009:0x00080900>En let maar niet op de vreselijke bende,\n<heroname>. Mijn huis is aan een\ngrote schoonmaak toe...\n\n<0x10009:0x00090900>Pimmus zegt altijd, \"waarom stof je niet\neens wat af?\" Maar het lukt me gewoon\nniet om de tijd ervoor te vinden.\n\n<0x10009:0x00080900>En dus wilde ik jou, heel brutaal, vragen\nof jij me niet een handje wil helpen. Ik\nwil je zelfs wat betalen voor de moeite,\n<heroname>.[1-]Oké![2]Nee...")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000002>Doet mijn Pimmusje nog zijn best op\nschool?\n\n\nHij is niet zoals ik, want hij is altijd heel\ndoelgericht bezig. Ik weet dat ik me dus\neigenlijk niet druk hoef te maken.\n[1-]Wat een bende![2-]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00010909>Ja, je hebt gelijk... Het is hier een zootje.\nDit overkomt me dus telkens weer!\n\n\n<0x10009:0x000a090a>Ik heb toch zo'n hekel aan schoonmaken\nen opruimen. Kon iemand me maar een\nhandje helpen...")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010904>O, pardon, wat is er? Wilde je iets\nzeggen?")
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000d01>O, <heroname>, jij bent het.\nWelkom.\n\n\n<0x10009:0x000a0900>Vertel eens hoe het met mijn Pimmusje\ngaat op school.")
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
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ik dacht dat we het eens waren, mam!")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	wait_frames(30)
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	wait_frames(30)
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "O, wind je niet zo op, Pimmus.\nAlsjeblieft...")
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "Natuurlijk wind ik me wel op!\n\n\n\nIk zie toch dat je de laatste tijd iemand\nvoor je hebt laten schoonmaken! En dat\nje daar <color red<rupees voor betaalt>coloroff>!\n\nIk heb je die rupees gegeven om er brood\nmee te kopen!\n\n\nAls je zo met je geld om blijft gaan, dan\nis er straks niks over voor mijn schoolgeld\nvoor de ridderacademie!\n\nIk loop geen extra patrouilles zodat jij\nhier een luxe leventje kan leiden!\n\n\nDit moet echt ophouden!")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	wait_frames(1)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	wait_frames(90)
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	wait_frames(30)
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "O... Hé, <heroname>... Wat kom jij\nhier zo laat nog doen?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x120b1100>J-Je hebt niks gehoord, toch? Van wat er\nzojuist is gezegd?\n[1-]Wat gehoord?[2-]Sorry...")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x12011100>Niets! Helemaal niets...\n\n\n\n<0x10009:0x12080400>Hoe dan ook, ik moet weer op patrouille!\nZorg goed voor jezelf en kijk uit wanneer\nje 's nachts buiten bent!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x12011100>O nee... Je hebt ons gehoord!\n\n\n\n<0x10009:0x120f1100>Het is waar! Ik doe de nachtpatrouille\nom wat extra rupees te verdienen!\n\n\n<0x10009:0x12081100>Kijk niet zo raar, joh! Jij bent ook niet\nbepaald de ideale ridder, of wel, meneer\nLuistervink?!\n\n<0x10009:0x120c0c00>Ach, misschien moeten we dit hele voorval\nmaar gewoon snel vergeten!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00101100>Hmm...<pause 30> De monsters die normaal 's nachts\ntevoorschijn komen, zijn vandaag nergens\nte vinden.\n\n<0x10009:0x00ffff00>Wat zou er aan de hand zijn... Al mis ik\ndie monsters natuurlijk helemaal niet!\nRustige avonden zijn de beste avonden.")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hé, <heroname>! Het kan 's nachts\nbest gevaarlijk worden buiten, dus wees\nvoorzichtig.\n\n<0x10009:0x00110c09>O, en vergeet niet om je mond te houden\nover ons geheim van die ene avond...\nOké?")
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
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "Ik vind het zo vervelend dat je dat hebt\ngezien, <heroname>. Ik schaam me\ndood...\n\n<0x10009:0x000f1100>Soms schaam ik me echt enorm voor mijn\nmoeder. Ze is soms gewoon zo lui! Ik weet\nniet wat ik eraan kan doen.\n\n<0x10009:0x00080c0b>Maar maak je om mij niet druk, hoor.\nHet komt wel goed.\n\n\n<0x10009:0x00011100>Maar ik ben er nog steeds niet achter wie\nmijn moeder geholpen heeft bij het\nschoonmaken...\n\n<0x10009:0x00080c16>Waar was die persoon mee bezig? Om zich\nzomaar met andermans zaken bemoeien!")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf(/* textboxtype: 1, unk: 1, line: 36 */ "Hallo, <heroname>. Vind je Skyloft\nook niet een schitterende, vredige plek?\nDat is dankzij mijn werk hier!\n\n<0x10009:0x000c0400>Laten we er als ridders alles aan doen om\nde vrede van Skyloft te bewaren!\n\n\n<0x10009:0x00010c52>Hmm...<pause 30> Waarom kijk je me zo vreemd\naan?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x30001:0x><heroname>! Ik beloof je dat jij ook\nop een dag zult begrijpen wat het\nbetekent om een ridder te zijn!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf(/* textboxtype: 0, unk: 1, line: 31 */ "Hé, <heroname>! Het is 's nachts erg\ngevaarlijk buiten, dus kijk goed uit!\n\n\n<0x10009:0x000b0400>Ik patrouilleer in dit gebied, dus houd\nhier de wacht.\n\n\n<0x10009:0x00080404>De monsters komen hier 's nachts massaal\ntevoorschijn!\n\n\nHet is de eervolle taak van ridders als ik\nom onze dorpsgenoten te beschermen!\n[1-]Wat goed![2-]Eervol of betaald?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00090c09>Wat goed?! Nee, joh! Wij zijn ridders\nin opleiding! Dit is wat van ons verwacht\nwordt. Dit is nu eenmaal wat ridders\ndoen; wij helpen de mensen van Skyloft.\nEn dat is wat ik doe! De glimlachende\ngezichten van de mensen die ik beschermd\nheb, zijn voor mij genoeg beloning!\n\n<0x10009:0x00080400>Dat is wat het betekent om een ridder te\nzijn. <0x10009:0x00000005>Op een dag zul jij ook begrijpen wat\nhoe dat voelt, <heroname>!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000c0c17><0x30001:0x><heroname>! Kom op, zeg! En waarom\nwilde jij zelf ridder worden?\n\n\nVoor de rupees?! Dat is toch niet eervol\nen al helemaal niet ridderlijk?!\n\n\n<0x10009:0x00080405>Zo zie ik het! De lachende gezichten van\nblije mensen die zich veilig voelen, daar\ndoe ik het allemaal voor. En dat is wat\neen echte ridder belangrijk vindt!")
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
/*<254>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000009>Je hebt mijn waardevolle antiek kapot\ngemaakt!\n\n\nLaat dat niet nog eens gebeuren, anders\nzwaait er wat!")
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 1, unk: 1, line: 39 */ "<0x10009:0x00000007>Ik verzamel antiek, dat is mijn hobby.\nAlle spulletjes in mijn huisje zijn heel\noud en heel kostbaar.\n\nPas maar goed op dat je niks omstoot!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x1f00000a>Nee?! Jij vlegel!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x1f0a0300>Jij daar! Ja, jij! Waar heb ik dit aan\nverdiend? Wat heb ik jou ooit aangedaan?")
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
/*<418>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "Ik weet al dat je geen rooie rupee op zak\nhebt... DUS STOP MET HET SLOPEN\nVAN MIJN ANTIEK!\n\nMaak dat je wegkomt!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "Wat? Je hebt geen rooie rupee op zak?!\n\n\n\nVind je het soms normaal om zonder ook\nmaar een rupee op zak huizen binnen te\ndringen en spullen te slopen? Sta niet zo\ndom te grijnzen!\nJij hebt lef! Nou, ik wil je rupees al niet\nmeer. Maak dat je wegkomt! Vort!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x1f090300>Mijn waardevolle antiek!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x1f090300>Je hebt mijn waardevolle antiek kapot\ngemaakt!\n\n\nBasta! Slopen is kopen!\n\n\n\n<0x10009:0x1f0b0700>Eens zien... Dat was een heel waardevol\nstuk antiek, voor <color red<zo'n>coloroff> <color red<20 rupees >coloroff>staan\nwe wat mij betreft quitte!\n\n<0x10009:0x1f010305>Hè? Kijk me niet zo raar aan. Of denk je\ndat ik dat bedrag uit mijn duim zuig?\n\n\n<0x10009:0x1f090309>Doe niet zo gek! Ik weet de exacte waarde\nvan elk van deze voorwerpen, dus met\nminder zal ik geen genoegen nemen!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x1f0a0300>Als ik dat nog eens zie gebeuren, dan\nzwaait er wat!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Maar je hebt niet eens genoeg rupees om\nhiervoor te betalen! Jij vandaal!\n\n\nIn dat geval zul je me gewoon al je rupees\nmoeten geven. En wees voortaan\nvoorzichtig!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "Wat? Je hebt geen rooie rupee op zak?!\n\n\n\nVind je het soms normaal om zonder ook\nmaar een rupee op zak huizen binnen te\ndringen en spullen te slopen? Sta niet zo\ndom te grijnzen!\nJij hebt lef! Nou, ik wil je rupees al niet\nmeer. Maak dat je wegkomt! Vort!")
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
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	wait_frames(10)
/*<260>*/ 	changeScene(0, 0) // 
          }

