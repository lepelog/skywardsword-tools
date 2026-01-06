          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00070002>Hé, <heroname>! Heb je al een idee\nwaar Zelda kan zijn? Je gaat haar wel\nvinden, hoor. Ik weet dat je het kunt! Dus\ngeef het niet op!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009>Hé, <heroname>! Kom later wel nog\neven terug.")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>Zelda is van haar Loftwing gevallen...\nIk kan het haast niet geloven...\n\n\nZe is juist zo'n goede Loftwingrijder...\n\n\n\n<0x10009:0x00000e00>Ik ben zo ongeveer de slechtste Loftwing-\nrijder hier, dus ik kan alleen maar\nhopen dat ze in orde is.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000811>Het is echt een ernstig probleem,\n<heroname>.<pause 25> Ik hoop dat je je\nLoftwing snel vindt<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>Hé, wat is er mis, <heroname>?\n\n\n\n<0x10009:0x00070c00>Je... weet niet waar je Loftwing is? <pause 25>Wat\nbedoel je daarmee, <heroname>?\n\n\nJe hebt 'm geroepen, maar<0x10006:0xfbcd>...<0x10006:0x00cd> hij kwam\nniet?\n\n\n<0x10009:0x00010800><0x10006:0xfbcd>Dat...<0x10006:0x00cd> betekent...<pause 25> <0x10008:0xffcd>Ja... Ik dacht het al...\n\n\n\n<0x10009:0x00080807>O? <pause 25>Eh, laat maar.<pause 25> Echt waar, ik was, eh...<pause 20>\ntegen mezelf aan het praten. Dat doe ik\nwel vaker...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Ik blijf hier om de academie te bewaken.\nVeel succes tijdens de <color red<ceremonie>coloroff>,\n<heroname>!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000809>Ik ben niet zoals jij, <heroname>.\nAlles wat ik probeer te doen, mislukt.\n\n\nDaarom oefen ik hier in het <color green<optillen >coloroff>van\nvaten met (A).\n\n\n<0x10009:0x00070e00>Het kon erger. Ik krijg er tenminste voor\nbetaald.")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000002>Goedemorgen, <heroname>! Vandaag\nvindt de <color red<Vleugelceremonie>coloroff> toch plaats?\n\n\n<0x10009:0x00010800>Ik wilde ook graag vliegen, maar<0x10006:0xfbcd>...<0x10006:0x00cd> ik ben\nniet goed genoeg, dus kan ik er niet aan\nmeedoen.\n\n<0x10009:0x00070800>Daarnaast moet ik deze <color red<vaten >coloroff>nog naar de\nkeuken brengen.\n\n\n<0x10009:0x00010800>Ik hoopte eigenlijk dat ik daar op tijd mee\nklaar zou zijn om je aan te moedigen,\n<heroname>, maar... <0x10009:0x00070a00>dat lijkt niet te\ngaan lukken.<pause 20>\nDaarom wens ik je nu alvast succes. Zet\n'm op zo dadelijk! Ik duim voor je!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000002>Wil je het opnieuw proberen voor nog eens\n<color red<20 rupees>coloroff>?\n[1-]Prima![2-]Regels?[3]Nee, bedankt.")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00070a0a>Oké! Daar gaan we dan. Laat maar zien\nwat je kunt, <heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010811>Kun je het je niet veroorloven? Het is\nvast heel vervelend om niet eens genoeg\nrupees te hebben om een spelletje te\nspelen, hè, <heroname>?")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070200>Ik gooi <color red<90 seconden>coloroff> lang pompoenen de\nlucht in! Voor elke pompoen die je raakt,\nkrijg je 10 punten.\n\n<0x10009:0x00000a00>Hoe meer pompoenen je achterelkaar\nraakt, hoe meer punten je krijgt. Zorg dus\ndat je niet mist!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>O, en nog iets. Voor elke poging betaal je\n20 rupees.\n\n\n<0x10009:0x00080a00>Gratis spelen is saai, nietwaar?\nDacht ik ook! Dus, ga je ervoor voor\n<color red<20 rupees>coloroff>?\n[1-]Natuurlijk![2]Nee, bedankt.")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Oké, <heroname>. Ik weet dat je het\ndruk hebt.\n\n\nIk zal je niet langer van je zoektocht naar\nZelda afhouden.<pause 10> Sorry voor het storen.")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>Hé, <heroname>! Hoe gaat het?\n\n\n\nWil je proberen om wat pompoenen te\nraken met pijlen? Eén poging kost je <color red<20\nrupees>coloroff>!\n[1-]Prima![2-]Regels?[3]Nee, bedankt.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070202>Hé, <heroname>!\n\n\n\nIk heb me zo vaak opgedrukt als ik kan.\nIk vraag me af welke oefening ik nu kan\ndoen...\n\n<0x10009:0x00000207>Wauw! <pause 30>Wat is dat een prachtige boog,\n<heroname>!\n\n\nIk durf te wedden dat je er heel handig\nmee bent.\n[1-]Natuurlijk![2-]Eh...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00070aff>Je bent geweldig, <heroname>!\n\n\n\n<0x10009:0x00010200>Zelfs als ik me 3000 keer kon opdrukken,\nwas ik nog niet zo cool as jij.")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>Ik heb een idee! Waarom laat je me niet\nzien hoe goed je je boog kunt gebruiken?\n\n\nIk gooi wat pompoenen in de lucht, oké?\n\n\n\n<0x10009:0x00000200>En dan laat jij zien hoe goed je met je\nboog bent door ze kapot te schieten!\n\n\n<0x10009:0x00070a00>En het gooien van die pompoenen is gelijk\nook een mooie krachttraining voor mij!\nTwee vliegen in één klap dus!\n[1-]Oké![2]Nee, bedankt.")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00070811>Oké, <heroname>. Ik weet dat je het\ndruk hebt.\n\n\nIk zal je niet langer van je zoektocht naar\nZelda afhouden.<pause 10> Sorry voor het storen.")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000a09>Waarom bloos je? Er is niks van gelogen,\nhoor!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501>Hé, <heroname>! Het eiland van de\ngodin is verdwenen! Wat zou er aan de\nhand zijn?\n\n<0x10009:0x00000800>O<0x10006:0xfbcd>...<0x10006:0x00cd> dus dat wist je al, <heroname>?\n\n\n\n<0x10009:0x00000200>Het heeft vast iets te maken met Zelda's\nverdwijning. Ik sta onderhand nergens\nmeer van te kijken. Maar zorg er wel voor\ndat je Zelda vindt, oké?")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 78, 'param3': 44}
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 28, 'param2': 9472, 'next': 79, 'param3': 13}
/*< 79>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000012>Je hebt <numeric arg0 0> <0x30004:0x02cd> verdiend.\n\n\n\nHet lukt niet zo goed vandaag, hè,\n<heroname>? Sorry, maar met die\nscore krijg je geen prijs.\n\n<0x10009:0x00070200>De makkelijkste manier om een pompoen\nte raken, is door 'm voor te zijn. Dat doe\nje door te richten op de plek waar de\npompoen zich kort daarna zal bevinden.\nAls je dat doet, scoor je binnen de kortste\ntijd meer dan <color red<150 punten>coloroff>.\n\n\n<0x10009:0x00010a00>Niet dat ik je advies hoef te geven, want je\nweet vast heel goed wat je doet.")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070a00>Kom maar langs wanneer je het nog eens\nwilt proberen!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "Wauw, <0x10009:0x0000000b><numeric arg0 0> <0x30004:0x02cd>! Goed gedaan,\n<heroname>!\n\n\nJe hebt geen nieuw record gezet, maar je\nwas heel goed bezig, <heroname>!\n\n\nDe volgende keer zou je eens moeten\nproberen om <color red<400 punten>coloroff> te halen!\n\n\n<0x10009:0x00070a00>Maar hier heb je de 50 rupees die ik heb\nverdiend met het doen van klusjes voor de\nhumeurige kokkin.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b>Wauw, <numeric arg0 0> <0x30004:0x02cd>! Dat is geweldig,\n<heroname>!\n\n\nJe bent werkelijk overal goed in,\n<heroname>.\n\n\n<0x10009:0x00070a00>Hier is je prijs!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070a00>Het zou fantastisch zijn als je de volgende\nkeer een record zou breken door <color red<600\npunten >coloroff>te halen. Doe je best!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0000000b>Je hebt <numeric arg0 0> <0x30004:0x02cd> gehaald! Dat is echt niet\nte geloven, <heroname>!\n\n\n<0x10009:0x00070a00>Je bent de trots van de ridderacademie,\n<heroname>! Hier, dit is voor jou!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0000000b>Je hebt <numeric arg0 0> <0x30004:0x02cd> gehaald! Dat is echt niet\nte geloven, <heroname>!\n\n\n<0x10009:0x00070a00>Je bent de trots van de ridderacademie,\n<heroname>! Hier, dit is voor jou!\n\n\n<0x10009:0x00070a00>Neem dit<color red< teken van vriendschap >coloroff>tussen\njou en mij aan, <heroname>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001><0x10008:0x01cd><0x30001:0x><heroname>!<0x1000D:0x1906>")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Hé,<pause 20> eh... Kijk, het zit zo...\n\n\n\n<0x10009:0x00070800>Ach, laat ook maar. Ik heb niets gezegd.<pause 20>\nSorry...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00070a0b>Bedankt! Je hebt me daar enorm mee\ngeholpen, <heroname>!\n\n\n<0x10009:0x00000209>Ik weet dat het niet veel voorstelt, maar\nhier heb je de helft van het loon dat de\noude dame me ervoor heeft gegeven.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000009>Ik blijf hier om de academie te bewaken.\nVeel succes tijdens de <color red<ceremonie>coloroff>,\n<heroname>!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>O, <heroname>... Ben je hier om mij te\nhelpen?\n\n\nWat aardig van je! Tegen zo'n vriendelijk\naanbod zeg ik geen nee!\n\n\n<0x10009:0x00070203>Je zou me enorm helpen als je een van\ndeze <color red<vaten >coloroff>naar de oude dame brengt die\nin de keuken werkt.\n\nDruk op (A) om een vat op te tillen en\ndruk opnieuw op (A) om het aan je voeten\n<color green<neer te zetten>coloroff>.\n\n<0x10009:0x00010200>Als je iets boven je hoofd houdt, kun je\nermee <color green<gooien>coloroff>. Je kunt kleine voorwerpen,\nzoals potten, ook <color green<rollen>coloroff>.\n\n<0x10009:0x0c070200>Maar we krijgen flink op onze kop als\ndeze vaten kapot gaan, dus waag het niet\nom ermee te gooien of rollen.")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Als je even vergeten bent wat ik zojuist\nheb verteld, <color green<druk >coloroff>dan op<color green< <icon 19>>coloroff>.<0x10011:0x0bcd>\n\n\n\nDan krijg je een uitleg te zien over de\nacties die op dat moment beschikbaar\nvoor je zijn. Handig, hè?")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "")
/*<  9>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000003>O, <heroname>... Ben je hier om mij te\nhelpen?\n\n\nWat aardig van je! Tegen zo'n vriendelijk\naanbod zeg ik geen nee!\n\n\n<0x10009:0x00070203>Je zou me enorm helpen als je een van\ndeze <color red<vaten >coloroff>naar de oude dame brengt die\nin de keuken werkt.\n\nDruk op (A) om een vat op te tillen en\ndruk opnieuw op (A) om het aan je voeten\n<color green<neer te zetten>coloroff>.\n\n<0x10009:0x00010200>Als je iets boven je hoofd houdt, kun je\nermee <color green<gooien>coloroff>. Je kunt kleine voorwerpen,\nzoals potten, ook <color green<rollen>coloroff>.\n\n<0x10009:0x0c070200>Maar we krijgen flink op onze kop als\ndeze vaten kapot gaan, dus waag het niet\nom ermee te gooien of rollen.")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Als je even vergeten bent wat ik zojuist\nheb verteld, <color green<druk >coloroff>dan op<color green< <icon 19>>coloroff>.<0x10011:0x0bcd>\n\n\n\nDan krijg je een uitleg te zien over de\nacties die op dat moment beschikbaar\nvoor je zijn. Handig, hè?")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00070201><0x30001:0x><heroname>!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00071800>Dat groene uniform is zo... avontuurlijk!\nJe ziet er nu echt uit als een ridder.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000b0200>De rector zei dat je op zoek gaat naar Zelda.\n\n\n\n<0x10009:0x00001700>Weet je, je bent echt een bijzondere jongen.\nWaar jij zo aan gaat beginnen, zou ik nooit\nkunnen doen.\n\n<0x1000A:0x000500cd>Ik heb hard gewerkt om dit te maken. Neem jij\nhet maar mee.")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "Het is een<color red< buidel>coloroff>. Hij is erg handig, want je\nkunt er <color red<vier >coloroff>dingen in doen die je nodig kunt\nhebben tijdens je grote avontuur.\n\nIn de bazaar kun je allerlei dingen kopen om in\ndeze buidel te doen. Neem er maar eens een\nkijkje!\n\n<0x10009:0x00070a09>Je kunt er <color yellow<drankjes >coloroff>kopen en een <color yellow<schild>coloroff>. Ze\npassen in de buidel en komen misschien wel van\npas tijdens je reizen.")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x30001:0x><heroname>! <0x10009:0x00010c00>Ik weet zeker dat je Zelda\nvoor ons gaat vinden!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "")
          }

