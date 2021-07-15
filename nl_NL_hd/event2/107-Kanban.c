          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x02\x04\x02\x14CD Standbeeld van de godin")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("Badkamer")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\nDankzij de verbeteringen aan uw zwaard\nkunt u met de <r<detectiefunctie>> voortaan\nconcentraties van dankbaarheid waar-\nnemen.\nIk heb <r<dankbaarheidskristallen >>aan uw\nlijst met doelen voor <r<detectie >>toegevoegd.<pling>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf("Volgens mijn gegevens heeft u echter al\nalle dankbaarheidskristallen gevonden.\nMijn felicitaties daarvoor, \x0E\x01\x12\x04\x00\x02meester.")
          	  case 1:
/*< 64>*/ 		printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\nDankzij de verbeteringen aan uw zwaard\nkunt u met de <r<detectiefunctie>> voortaan\nconcentraties van dankbaarheid waar-\nnemen.\nIk heb <r<dankbaarheidskristallen>> aan uw\nlijst met doelen voor <r<detectie >>toegevoegd.<pling>")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf("Onze heerlijke pompoensoep is\nhet lekkerst als hij zo heet wordt\ngegeten als hij wordt opgediend!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x02\x04\x02\x14CD Het grote plein")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf("Trainingsruimte")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\nVolgens mijn analyse kunnen Loftwings\nniet 's nachts vliegen. Ik raad u aan in een\nbed te slapen tot de ochtend.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x02\x04\x02\x14CD Ridderacademie")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\nIk heb vastgesteld dat er een <r<beproevings-\npoort>> is op een van de vliegende eilanden\nhier. Met het Heldenlied kunt u die\nopenen.\nIk raad u aan er met de <r<detectie->>functie\nnaar te zoeken.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf("\x0E\x01\x08\x02ÍHuis van Paulah\n\x0E\x01\x08\x02\xFFCDVoorwerpenbankeigenares")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf("Hulp gezocht bij het omploegen\nvan de pompoenvelden.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Niet rennen in de gangen!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf("Huis van Lepula")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mijn felicitaties, meester.\n\n\n\nU heeft alle beproevingen met succes volbracht.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf("\x0E\x01\x12\x04\x00\x02Meester, de <r<steen der beproeving >>die u\nheeft ontvangen, is onderdeel van een\npaar.\n\nMijn aanname is dat de tweede steen zich\nin Skyloft bevindt. Er is een kans van\n90% dat die u dichter bij de <y+<Triforce\n>>brengt.\n\x0E\x01\n\x04\xFFFFÍIk raad u aan die tweede steen te zoeken.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf("Skyloft is een paar vleugelslagen\nrichting het noordwesten.")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf("Huis van Sijsje")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf("Duik altijd vanaf een van de\nsteigers als je met je Loftwing gaat\nvliegen.")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf("Karane + K...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf("Huis van Alba en Couw")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf("Een ridderorde kan niet zonder\norde op zaken. Houd je kamer\ndaarom netjes opgeruimd.")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link, ik heb\nherinneringen aan dit eiland.\n\n\nHet staat bekend als het <b<Eiland der\nLiederen>>. Het lijkt erop dat dit eiland\ndoor de godin voor u is achtergelaten,\n\x0E\x01\x12\x04\x00\x02meester.\nIk ben echter niet in staat vast te stellen\nhoe u binnenkomt. Daarom raad ik u aan\nde omgeving goed te bestuderen.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf("Draai de delen in het midden om\nde brug af te maken die toegang\ngeeft tot de toren van het Eiland\nder Liederen.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf("\x0E\x01\x08\x02ÍHuis van Rupin\n\x0E\x01\x08\x02\xFFCDVoorwerpenhandelaar")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb vastgesteld dat er een\ntweede opening is in de wolkenbarrière.\nU vindt die in de lucht ten noorden van\nhier.\nVia die opening kunt u een nieuw gebied\nbereiken op het oppervlak. Zodra u er\nklaar voor bent, raad ik u aan daarheen\nte gaan.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf("De bazaar is nu gesloten, maar\nwe zijn morgenvroeg weer open.\n\n\nVoor dringende zaken kun je bij\nhandelaren thuis terecht.\n-Bazaarhandelvereniging")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("\x0E\x03\x01\x00Link")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf("Huis van Pimmus")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb vastgesteld dat er een\nderde opening is in de wolkenbarrière.\nU vindt die ten zuidwesten van hier.\n\nVia die opening kunt u een nieuw gebied\nbereiken op het oppervlak. Ik raad u aan\nu klaar te maken en daarheen te gaan.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf("Schone handen zijn vrolijke\nhanden!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf("Ganderd")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf("\x0E\x01\x08\x02ÍHuis van Turel\n\x0E\x01\x08\x02\xFFCDWaarzegger")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester Link...\n\n\n\nU zult de luchtbooraanval moeten leren\nom Levias van de duistere macht te\nbevrijden.\n\nCornuylius wacht op u <r<bij het vogelbeeld>>\nin het noordoosten van Skyloft. Ik raad\nu aan hem op te zoeken.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf("Hou het netjes.")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf("Kol & Struiz")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMeester Link...\n\n\n\n\x0E\x01\n\x04\x0DÍDeze schatkist stamt uit een ver verleden.\nHij is achtergelaten door de godin voor\nhaar uitverkoren held.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf("Het lijkt erop dat iedere schatkist\ngeopend kan worden door de energie\nvan het <r<godinnenblok>> is waar hij mee\nverbonden is.\nZoek het land onder de wolken af naar de\ngodinnenblokken. Dat is de enige manier\nom de godinnenschatkisten te openen.")
          	  case 1:
/*<171>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMeester Link...\n\n\n\n\x0E\x01\n\x04\x0DÍDeze schatkist stamt uit een ver verleden.\nHij is achtergelaten door de godin voor\nhaar uitverkoren held.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf("Ik kan u op het moment helaas geen\ninformatie bieden over hoe u hem kunt\nopenen.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf("Ben onderweg voor werk. Wie\nmij wil spreken, kan mij hier\n's nachts vinden.\n\x0E\x01\x06\x02\x5CD-Beedle")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf("Federik")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf("Laat het lied van de godin schallen\nen de klanken op haar held vallen.\nHet lied dat de uitverkorene leidt\nals een hemels baken in de strijd.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf("Rector Gaepora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x08\x02ÍHuis van Rogyr\n\x0E\x01\x08\x02\xFFCDWerkplaatseigenaar")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf("Meester Cornuylius")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x08\x02ÍHuis van Meerko en Merula\n\x0E\x01\x08\x02\xFFCDDrankjeshandelaren")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x04meester Link... Daar\nis een <r<groene lichtzuil>>. Dat is een plaats\nwaar u het oppervlak kunt bereiken.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf("Op uw kaart kunt u zien waar u momen-\nteel bent. Zo kunt u controleren hoe ver u\nvan Skyloft bent.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf("Het lijkt erop dat u het oppervlak kunt\nbereiken bij het gat in de wolken waar\nlicht uit komt.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf("Meester Rafaël")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf("Huis van Vleros")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, ik heb nieuws over het stenen\nfragment en de lichtzuil die erdoor is\ngecreëerd.\n\nTen zuiden van onze huidige locatie is\neen lichtzuil verschenen. Die duidt een\nopening in de wolkenbarrière aan waar-\ndoor u het oppervlak kunt bereiken.")
/*< 66>*/ 	printf("Ik moet u waarschuwen dat uw over-\nlevingskans met alleen een zwaard\nbeperkt zal zijn.\n\nMocht u nog niet over een <r<schild >>en\n<r<drankjes >>beschikken, dan raad ik u aan\ndie voor uw reis aan te schaffen in de\nbazaar.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf("Karane")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf("Plattegrond van Skyloft\nN: Standbeeld van de godin\nO: Woonwijk Z: Het grote plein\nW: Ridderacademie")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, vanaf hier is de lichtzuil te zien.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf("Spring over de rand vanaf een plek waar\nu de lichtzuil kunt zien en roep dan uw\nLoftwing.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf("Uw zoektocht naar Zelda kan beginnen.\nIn de lucht kunt u uw Loftwing met een\nsignaal roepen met (v).\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf("Probeer onze pompoensoep! Om\nje kom bij leeg te likken en nog\ngezond ook! 10 rupees per kom!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf("Watervalgrot\n\nKijk uit: bloedzuigende monsters!\nGeen toegang voor kinderen.")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf("Zelda wordt vermist!\n(En Link heeft de\nVleugelceremonie gewonnen.)")
          	  case 1:
/*< 38>*/ 		printf("Vandaag is de Vleugelceremonie\nDeelnemers: Ganderd, Kol,\nStruiz en Link.\nWie wint de grote prijs?")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00\x04Meester Link, plaats het <r<stenen\nfragment>> dat ik u heb gegeven\nin de sokkel.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x12\x04\x00\x04Meester Link, met een <r<hemel-\nstraal >>kunt u dat teken van kracht\nvoorzien. Vervolgens kunt u het fragment\nplaatsen.\n\nOm een <r<hemelstraal>> op te laden <g<dient u\nuw zwaard ten hemel te heffen>>.")
          		  case 1:
/*< 69>*/ 			printf("Mijn naam is <b<Fi>>... Ga voor het voetstuk\nstaan en trek het zwaard eruit.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf("Kala's podium - Regelmatige\navondoptredens (als het uitkomt)")
          	  case 1:
/*<142>*/ 		printf("Kala zoekt muzikale begeleiding!\nHelaas zijn er tot die tijd geen\noptredens.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x02\x04\x02\x16CD Ridderacademie\n    Woonwijk \x0E\x02\x04\x02\x17CD")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link...\n\n\n\nToen u dat <r<godinnenblok>> met een <r<hemel-\nstraal >>raakte, nam ik waar hoe de energie\nervan naar een plaats in het hemelrijk\nging.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 56, 'param3': 6}
/*< 56>*/ 	printf("De locatie die ik heb gemarkeerd op uw\nkaart, geeft aan waar ik de energie heb\nwaargenomen.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf("Mijn advies is om het gebied rond die locatie af\nte zoeken.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf("Klanten kunnen de beroemde\nkroonluchter van De Oranje Poen\nvanaf de tweede etage bewonderen.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x02\x04\x02\x14CD Bazaar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Toilet")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("Als u hier een zaailing plant, duurt het\nduizenden jaren tot die is volgroeid.\nDaarom raad ik u aan een andere locatie\nte zoeken.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf("Kijk uit waar je loopt! De kroon-\nluchter kan gaan schommelen als je\nergens tegenaan botst.")
          }

