          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf("\x0E\x01\x09\x04\x07\x02Hé, Link! Heb je al een idee\nwaar Zelda kan zijn? Je gaat haar wel\nvinden, hoor. Ik weet dat je het kunt! Dus\ngeef het niet op!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x09Hé, Link! Kom later wel nog\neven terug.")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf("\x0E\x01\x09\x04\x07\x811Zelda is van haar Loftwing gevallen...\nIk kan het haast niet geloven...\n\n\nZe is juist zo'n goede Loftwingrijder...\n\n\n\n\x0E\x01\x09\x04\x00\xE00Ik ben zo ongeveer de slechtste Loftwing-\nrijder hier, dus ik kan alleen maar\nhopen dat ze in orde is.")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x811Het is echt een ernstig probleem,\nLink.<pause19> Ik hoop dat je je\nLoftwing snel vindt\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x708Hé, wat is er mis, Link?\n\n\n\n\x0E\x01\x09\x04\x07\xC00Je... weet niet waar je Loftwing is? <pause19>Wat\nbedoel je daarmee, Link?\n\n\nJe hebt 'm geroepen, maar\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í hij kwam\nniet?\n\n\n\x0E\x01\x09\x04\x01\x800\x0E\x01\x06\x02\xFBCDDat...\x0E\x01\x06\x02Í betekent...<pause19> \x0E\x01\x08\x02\xFFCDJa... Ik dacht het al...\n\n\n\n\x0E\x01\x09\x04\x08\x807O? <pause19>Eh, laat maar.<pause19> Echt waar, ik was, eh...<pause14>\ntegen mezelf aan het praten. Dat doe ik\nwel vaker...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf("\x0E\x01\x09\x04\x00\x09Ik blijf hier om de academie te bewaken.\nVeel succes tijdens de <r<ceremonie>>,\nLink!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf("\x0E\x01\x09\x04\x00\x809Ik ben niet zoals jij, Link.\nAlles wat ik probeer te doen, mislukt.\n\n\nDaarom oefen ik hier in het <g<optillen >>van\nvaten met (A).\n\n\n\x0E\x01\x09\x04\x07\xE00Het kon erger. Ik krijg er tenminste voor\nbetaald.")
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x00\x02Goedemorgen, Link! Vandaag\nvindt de <r<Vleugelceremonie>> toch plaats?\n\n\n\x0E\x01\x09\x04\x01\x800Ik wilde ook graag vliegen, maar\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í ik ben\nniet goed genoeg, dus kan ik er niet aan\nmeedoen.\n\n\x0E\x01\x09\x04\x07\x800Daarnaast moet ik deze <r<vaten >>nog naar de\nkeuken brengen.\n\n\n\x0E\x01\x09\x04\x01\x800Ik hoopte eigenlijk dat ik daar op tijd mee\nklaar zou zijn om je aan te moedigen,\nLink, maar... \x0E\x01\x09\x04\x07\xA00dat lijkt niet te\ngaan lukken.<pause14>\nDaarom wens ik je nu alvast succes. Zet\n'm op zo dadelijk! Ik duim voor je!")
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
/*< 85>*/ 					printf("\x0E\x01\x09\x04\x00\x02Wil je het opnieuw proberen voor nog eens\n<r<20 rupees>>?\n[1]Prima![2]Regels?[3-]Nee, bedankt.")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x07\xA0AOké! Daar gaan we dan. Laat maar zien\nwat je kunt, Link!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x01\x811Kun je het je niet veroorloven? Het is\nvast heel vervelend om niet eens genoeg\nrupees te hebben om een spelletje te\nspelen, hè, Link?")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ik gooi <r<90 seconden>> lang pompoenen de\nlucht in! Voor elke pompoen die je raakt,\nkrijg je 10 punten.\n\n\x0E\x01\x09\x04\x00\xA00Hoe meer pompoenen je achterelkaar\nraakt, hoe meer punten je krijgt. Zorg dus\ndat je niet mist!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf("\x0E\x01\x09\x04\x07\x200O, en nog iets. Voor elke poging betaal je\n20 rupees.\n\n\n\x0E\x01\x09\x04\x08\xA00Gratis spelen is saai, nietwaar?\nDacht ik ook! Dus, ga je ervoor voor\n<r<20 rupees>>?\n[1]Natuurlijk![2-]Nee, bedankt.")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf("\x0E\x01\x09\x04\x07\x811Oké, Link. Ik weet dat je het\ndruk hebt.\n\n\nIk zal je niet langer van je zoektocht naar\nZelda afhouden.<pause0A> Sorry voor het storen.")
          					}
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Hoe gaat het?\n\n\n\nWil je proberen om wat pompoenen te\nraken met pijlen? Eén poging kost je <r<20\nrupees>>!\n[1]Prima![2]Regels?[3-]Nee, bedankt.")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x07\x202Hé, Link!\n\n\n\nIk heb me zo vaak opgedrukt als ik kan.\nIk vraag me af welke oefening ik nu kan\ndoen...\n\n\x0E\x01\x09\x04\x00\x207Wauw! <pause1E>Wat is dat een prachtige boog,\nLink!\n\n\nIk durf te wedden dat je er heel handig\nmee bent.\n[1]Natuurlijk![2]Eh...")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf("\x0E\x01\x09\x04\x07\xAFFJe bent geweldig, Link!\n\n\n\n\x0E\x01\x09\x04\x01\x200Zelfs als ik me 3000 keer kon opdrukken,\nwas ik nog niet zo cool as jij.")
          					flw_59:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x07\xA00Ik heb een idee! Waarom laat je me niet\nzien hoe goed je je boog kunt gebruiken?\n\n\nIk gooi wat pompoenen in de lucht, oké?\n\n\n\n\x0E\x01\x09\x04\x00\x200En dan laat jij zien hoe goed je met je\nboog bent door ze kapot te schieten!\n\n\n\x0E\x01\x09\x04\x07\xA00En het gooien van die pompoenen is gelijk\nook een mooie krachttraining voor mij!\nTwee vliegen in één klap dus!\n[1]Oké![2-]Nee, bedankt.")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf("\x0E\x01\x09\x04\x07\x811Oké, Link. Ik weet dat je het\ndruk hebt.\n\n\nIk zal je niet langer van je zoektocht naar\nZelda afhouden.<pause0A> Sorry voor het storen.")
          					}
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x00\xA09Waarom bloos je? Er is niks van gelogen,\nhoor!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x501Hé, Link! Het eiland van de\ngodin is verdwenen! Wat zou er aan de\nhand zijn?\n\n\x0E\x01\x09\x04\x00\x800O\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í dus dat wist je al, Link?\n\n\n\n\x0E\x01\x09\x04\x00\x200Het heeft vast iets te maken met Zelda's\nverdwijning. Ik sta onderhand nergens\nmeer van te kijken. Maar zorg er wel voor\ndat je Zelda vindt, oké?")
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
/*< 79>*/ 			printf("\x0E\x01\x09\x04\x00\x12Je hebt <numeric arg0> \x0E\x03\x04\x02\x2CD verdiend.\n\n\n\nHet lukt niet zo goed vandaag, hè,\nLink? Sorry, maar met die\nscore krijg je geen prijs.\n\n\x0E\x01\x09\x04\x07\x200De makkelijkste manier om een pompoen\nte raken, is door 'm voor te zijn. Dat doe\nje door te richten op de plek waar de\npompoen zich kort daarna zal bevinden.\nAls je dat doet, scoor je binnen de kortste\ntijd meer dan <r<150 punten>>.\n\n\n\x0E\x01\x09\x04\x01\xA00Niet dat ik je advies hoef te geven, want je\nweet vast heel goed wat je doet.")
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Kom maar langs wanneer je het nog eens\nwilt proberen!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf("Wauw, \x0E\x01\x09\x04\x00\x0B<numeric arg0> \x0E\x03\x04\x02\x2CD! Goed gedaan,\nLink!\n\n\nJe hebt geen nieuw record gezet, maar je\nwas heel goed bezig, Link!\n\n\nDe volgende keer zou je eens moeten\nproberen om <r<400 punten>> te halen!\n\n\n\x0E\x01\x09\x04\x07\xA00Maar hier heb je de 50 rupees die ik heb\nverdiend met het doen van klusjes voor de\nhumeurige kokkin.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\x0BWauw, <numeric arg0> \x0E\x03\x04\x02\x2CD! Dat is geweldig,\nLink!\n\n\nJe bent werkelijk overal goed in,\nLink.\n\n\n\x0E\x01\x09\x04\x07\xA00Hier is je prijs!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Het zou fantastisch zijn als je de volgende\nkeer een record zou breken door <r<600\npunten >>te halen. Doe je best!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\x0BJe hebt <numeric arg0> \x0E\x03\x04\x02\x2CD gehaald! Dat is echt niet\nte geloven, Link!\n\n\n\x0E\x01\x09\x04\x07\xA00Je bent de trots van de ridderacademie,\nLink! Hier, dit is voor jou!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0BJe hebt <numeric arg0> \x0E\x03\x04\x02\x2CD gehaald! Dat is echt niet\nte geloven, Link!\n\n\n\x0E\x01\x09\x04\x07\xA00Je bent de trots van de ridderacademie,\nLink! Hier, dit is voor jou!\n\n\n\x0E\x01\x09\x04\x07\xA00Neem dit<r< teken van vriendschap >>tussen\njou en mij aan, Link!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CD\x0E\x03\x01\x00Link!\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf("\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDHé,<pause14> eh... Kijk, het zit zo...\n\n\n\n\x0E\x01\x09\x04\x07\x800Ach, laat ook maar. Ik heb niets gezegd.<pause14>\nSorry...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x07\xA0BBedankt! Je hebt me daar enorm mee\ngeholpen, Link!\n\n\n\x0E\x01\x09\x04\x00\x209Ik weet dat het niet veel voorstelt, maar\nhier heb je de helft van het loon dat de\noude dame me ervoor heeft gegeven.")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x09Ik blijf hier om de academie te bewaken.\nVeel succes tijdens de <r<ceremonie>>,\nLink!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x03O, Link... Ben je hier om mij te\nhelpen?\n\n\nWat aardig van je! Tegen zo'n vriendelijk\naanbod zeg ik geen nee!\n\n\n\x0E\x01\x09\x04\x07\x203Je zou me enorm helpen als je een van\ndeze <r<vaten >>naar de oude dame brengt die\nin de keuken werkt.\n\nDruk op (A) om een vat op te tillen en\ndruk opnieuw op (A) om het aan je voeten\n<g<neer te zetten>>.\n\n\x0E\x01\x09\x04\x01\x200Als je iets boven je hoofd houdt, kun je\nermee <g<gooien>>. Je kunt kleine voorwerpen,\nzoals potten, ook <g<rollen>>.\n\n\x0E\x01\x09\x04\xC07\x200Maar we krijgen flink op onze kop als\ndeze vaten kapot gaan, dus waag het niet\nom ermee te gooien of rollen.")
/*<114>*/ 			printf("\x0E\x01\x09\x04\x01\x200Als je even vergeten bent wat ik zojuist\nheb verteld, <g<druk >>dan op<g< \x0E\x02\x04\x02\x13CD>>.\x0E\x01\x11\x02\xBCD\n\n\n\nDan krijg je een uitleg te zien over de\nacties die op dat moment beschikbaar\nvoor je zijn. Handig, hè?")
          		  case 1:
/*< 33>*/ 			printf("")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf("")
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x00\x03O, Link... Ben je hier om mij te\nhelpen?\n\n\nWat aardig van je! Tegen zo'n vriendelijk\naanbod zeg ik geen nee!\n\n\n\x0E\x01\x09\x04\x07\x203Je zou me enorm helpen als je een van\ndeze <r<vaten >>naar de oude dame brengt die\nin de keuken werkt.\n\nDruk op (A) om een vat op te tillen en\ndruk opnieuw op (A) om het aan je voeten\n<g<neer te zetten>>.\n\n\x0E\x01\x09\x04\x01\x200Als je iets boven je hoofd houdt, kun je\nermee <g<gooien>>. Je kunt kleine voorwerpen,\nzoals potten, ook <g<rollen>>.\n\n\x0E\x01\x09\x04\xC07\x200Maar we krijgen flink op onze kop als\ndeze vaten kapot gaan, dus waag het niet\nom ermee te gooien of rollen.")
/*<113>*/ 				printf("\x0E\x01\x09\x04\x01\x200Als je even vergeten bent wat ik zojuist\nheb verteld, <g<druk >>dan op<g< \x0E\x02\x04\x02\x13CD>>.\x0E\x01\x11\x02\xBCD\n\n\n\nDan krijg je een uitleg te zien over de\nacties die op dat moment beschikbaar\nvoor je zijn. Handig, hè?")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf("")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("\x0E\x01\x09\x04\x07\x201\x0E\x03\x01\x00Link!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf("\x0E\x01\x09\x04\x07\x1800Dat groene uniform is zo... avontuurlijk!\nJe ziet er nu echt uit als een ridder.")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf("\x0E\x01\x09\x04\x0B\x200De rector zei dat je op zoek gaat naar Zelda.\n\n\n\n\x0E\x01\x09\x04\x00\x1700Weet je, je bent echt een bijzondere jongen.\nWaar jij zo aan gaat beginnen, zou ik nooit\nkunnen doen.\n\n\x0E\x01\n\x04\x05ÍIk heb hard gewerkt om dit te maken. Neem jij\nhet maar mee.")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 50, 'param3': 6}
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf("Het is een<r< buidel>>. Hij is erg handig, want je\nkunt er <r<vier >>dingen in doen die je nodig kunt\nhebben tijdens je grote avontuur.\n\nIn de bazaar kun je allerlei dingen kopen om in\ndeze buidel te doen. Neem er maar eens een\nkijkje!\n\n\x0E\x01\x09\x04\x07\xA09Je kunt er <y<drankjes >>kopen en een <y<schild>>. Ze\npassen in de buidel en komen misschien wel van\npas tijdens je reizen.")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf("\x0E\x03\x01\x00Link! \x0E\x01\x09\x04\x01\xC00Ik weet zeker dat je Zelda\nvoor ons gaat vinden!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("")
          }

