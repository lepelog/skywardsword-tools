          void entrypoint_107_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 6, unk: 0, line: 3 */ "<icon 20> Standbeeld van de godin")
          }

          void entrypoint_107_21() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 22, unk: 0, line: 21 */ "Badkamer")
          }

          void entrypoint_107_56() {
/*< 63>*/ 	start()
/*<158>*/ 	story_flags[104 /* us: 805A9ADE 0x20, jp: 805ACD5E 0x20 */] = true;
/*<153>*/ 	check_item_flag(502, 80)
/*<152>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 6, unk: 0, line: 72 */ "Attentie, <0x10012:0x0000000b>meester.\n\n\n\nDankzij de verbeteringen aan uw zwaard\nkunt u met de <color red<detectiefunctie>coloroff> voortaan\nconcentraties van dankbaarheid waar-\nnemen.\nIk heb <color red<dankbaarheidskristallen >coloroff>aan uw\nlijst met doelen voor <color red<detectie >coloroff>toegevoegd.<sound 4>")
/*<159>*/ 		open_dowsing_wheel(19)
/*<160>*/ 		printf(/* textboxtype: 0, unk: 1, line: 73 */ "Volgens mijn gegevens heeft u echter al\nalle dankbaarheidskristallen gevonden.\nMijn felicitaties daarvoor, <0x10012:0x00000002>meester.")
          	  case 1:
/*< 64>*/ 		printf(/* textboxtype: 0, unk: 0, line: 71 */ "Attentie, <0x10012:0x0000000b>meester.\n\n\n\nDankzij de verbeteringen aan uw zwaard\nkunt u met de <color red<detectiefunctie>coloroff> voortaan\nconcentraties van dankbaarheid waar-\nnemen.\nIk heb <color red<dankbaarheidskristallen>coloroff> aan uw\nlijst met doelen voor <color red<detectie >coloroff>toegevoegd.<sound 4>")
/*< 65>*/ 		open_dowsing_wheel(19)
          	}
          }

          void entrypoint_107_39() {
/*<137>*/ 	start()
/*<145>*/ 	printf(/* textboxtype: 0, unk: 22, line: 40 */ "Onze heerlijke pompoensoep is\nhet lekkerst als hij zo heet wordt\ngegeten als hij wordt opgediend!")
          }

          void entrypoint_107_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 0, unk: 6, line: 4 */ "<icon 20> Het grote plein")
          }

          void entrypoint_107_22() {
/*< 45>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 22, line: 22 */ "Trainingsruimte")
          }

          void entrypoint_107_57() {
/*< 78>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Attentie, <0x10012:0x0000000b>meester.\n\n\n\nVolgens mijn analyse kunnen Loftwings\nniet 's nachts vliegen. Ik raad u aan in een\nbed te slapen tot de ochtend.")
          }

          void entrypoint_107_06() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<icon 20> Ridderacademie")
          }

          void entrypoint_107_58() {
/*< 79>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 75 */ "Attentie, <0x10012:0x0000000b>meester.\n\n\n\nIk heb vastgesteld dat er een <color red<beproevings-\npoort>coloroff> is op een van de vliegende eilanden\nhier. Met het Heldenlied kunt u die\nopenen.\nIk raad u aan er met de <color red<detectie->coloroff>functie\nnaar te zoeken.")
/*<161>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 162, 'param3': 58}
/*<162>*/ 	open_dowsing_wheel(6)
/*<163>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_107_23() {
/*< 82>*/ 	start()
/*< 84>*/ 	switch (story_flags[712 /* us: 805A9B25 0x04, jp: 805ACDA5 0x04 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10008:0x00cd>Huis van Paulah\n<0x10008:0xffcd>Voorwerpenbankeigenares")
          	  case 1:
          	}
          }

          void entrypoint_107_40() {
/*<138>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 41 */ "Hulp gezocht bij het omploegen\nvan de pompoenvelden.")
          }

          void entrypoint_107_07() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 6, unk: 0, line: 6 */ "Niet rennen in de gangen!")
          }

          void entrypoint_107_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	switch (story_flags[713 /* us: 805A9B25 0x08, jp: 805ACDA5 0x08 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 22, unk: 0, line: 24 */ "Huis van Lepula")
          	  case 1:
          	}
          }

          void entrypoint_107_59() {
/*<117>*/ 	start()
/*<118>*/ 	printf(/* textboxtype: 0, unk: 2, line: 76 */ "<0x10012:0x00000001>Mijn felicitaties, meester.\n\n\n\nU heeft alle beproevingen met succes volbracht.")
/*<121>*/ 	set_camera(6, 0)
/*<119>*/ 	printf(/* textboxtype: 2, unk: 0, line: 77 */ "<0x10012:0x00000002>Meester, de <color red<steen der beproeving >coloroff>die u\nheeft ontvangen, is onderdeel van een\npaar.\n\nMijn aanname is dat de tweede steen zich\nin Skyloft bevindt. Er is een kans van\n90% dat die u dichter bij de <color yellow white<Triforce\n>coloroff>brengt.\n<0x1000A:0xffff00cd>Ik raad u aan die tweede steen te zoeken.")
/*<120>*/ 	story_flags[769 /* us: 805A9B2A 0x02, jp: 805ACDAA 0x02 */] = true;
          }

          void entrypoint_107_41() {
/*<139>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 22, unk: 0, line: 42 */ "Skyloft is een paar vleugelslagen\nrichting het noordwesten.")
          }

          void entrypoint_107_25() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[714 /* us: 805A9B25 0x10, jp: 805ACDA5 0x10 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 0, unk: 22, line: 25 */ "Huis van Sijsje")
          	  case 1:
          	}
          }

          void entrypoint_107_08() {
/*<113>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "Duik altijd vanaf een van de\nsteigers als je met je Loftwing gaat\nvliegen.")
          }

          void entrypoint_107_42() {
/*<140>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 0, unk: 22, line: 43 */ "Karane + K...")
          }

          void entrypoint_107_26() {
/*< 91>*/ 	start()
/*< 92>*/ 	switch (story_flags[715 /* us: 805A9B25 0x20, jp: 805ACDA5 0x20 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 0, unk: 0, line: 26 */ "Huis van Alba en Couw")
          	  case 1:
          	}
          }

          void entrypoint_107_09() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 0, unk: 6, line: 7 */ "Een ridderorde kan niet zonder\norde op zaken. Houd je kamer\ndaarom netjes opgeruimd.")
          }

          void entrypoint_107_60() {
/*<124>*/ 	start()
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 356, 'next': 127, 'param3': 15}
/*<127>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 128, 'param3': 51}
/*<128>*/ 	set_camera(12, 0)
/*<125>*/ 	printf(/* textboxtype: 2, unk: 0, line: 78 */ "<0x10012:0x0000000b>Meester <heroname>, ik heb\nherinneringen aan dit eiland.\n\n\nHet staat bekend als het <color blue<Eiland der\nLiederen>coloroff>. Het lijkt erop dat dit eiland\ndoor de godin voor u is achtergelaten,\n<0x10012:0x00000002>meester.\nIk ben echter niet in staat vast te stellen\nhoe u binnenkomt. Daarom raad ik u aan\nde omgeving goed te bestuderen.")
/*<131>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 36}
/*<132>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_107_43() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "Draai de delen in het midden om\nde brug af te maken die toegang\ngeeft tot de toren van het Eiland\nder Liederen.")
          }

          void entrypoint_107_27() {
/*< 94>*/ 	start()
/*< 95>*/ 	switch (story_flags[716 /* us: 805A9B25 0x40, jp: 805ACDA5 0x40 */]) {
          	  case 0:
/*< 96>*/ 		printf(/* textboxtype: 8, unk: 0, line: 27 */ "<0x10008:0x00cd>Huis van Rupin\n<0x10008:0xffcd>Voorwerpenhandelaar")
          	  case 1:
          	}
          }

          void entrypoint_107_61() {
/*<154>*/ 	start()
/*<156>*/ 	printf(/* textboxtype: 0, unk: 2, line: 79 */ "<0x10012:0x0000000b>Meester, ik heb vastgesteld dat er een\ntweede opening is in de wolkenbarrière.\nU vindt die in de lucht ten noorden van\nhier.\nVia die opening kunt u een nieuw gebied\nbereiken op het oppervlak. Zodra u er\nklaar voor bent, raad ik u aan daarheen\nte gaan.")
          }

          void entrypoint_107_44() {
/*<178>*/ 	start()
/*<179>*/ 	printf(/* textboxtype: 7, unk: 0, line: 45 */ "De bazaar is nu gesloten, maar\nwe zijn morgenvroeg weer open.\n\n\nVoor dringende zaken kun je bij\nhandelaren thuis terecht.\n-Bazaarhandelvereniging")
          }

          void entrypoint_107_10() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 8, unk: 0, line: 9 */ "<0x30001:0x><heroname>")
          }

          void entrypoint_107_28() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (story_flags[717 /* us: 805A9B25 0x80, jp: 805ACDA5 0x80 */]) {
          	  case 0:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 8, line: 28 */ "Huis van Pimmus")
          	  case 1:
          	}
          }

          void entrypoint_107_62() {
/*<155>*/ 	start()
/*<157>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10012:0x0000000b>Meester, ik heb vastgesteld dat er een\nderde opening is in de wolkenbarrière.\nU vindt die ten zuidwesten van hier.\n\nVia die opening kunt u een nieuw gebied\nbereiken op het oppervlak. Ik raad u aan\nu klaar te maken en daarheen te gaan.")
          }

          void entrypoint_107_45() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 0, unk: 22, line: 46 */ "Schone handen zijn vrolijke\nhanden!")
          }

          void entrypoint_107_11() {
/*< 21>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 8, line: 10 */ "Ganderd")
          }

          void entrypoint_107_29() {
/*<100>*/ 	start()
/*<101>*/ 	switch (story_flags[718 /* us: 805A9B24 0x01, jp: 805ACDA4 0x01 */]) {
          	  case 0:
/*<102>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10008:0x00cd>Huis van Turel\n<0x10008:0xffcd>Waarzegger")
          	  case 1:
          	}
          }

          void entrypoint_107_63() {
/*<165>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 2, unk: 0, line: 81 */ "<0x10012:0x0000000b>Meester <heroname>...\n\n\n\nU zult de luchtbooraanval moeten leren\nom Levias van de duistere macht te\nbevrijden.\n\nCornuylius wacht op u <color red<bij het vogelbeeld>coloroff>\nin het noordoosten van Skyloft. Ik raad\nu aan hem op te zoeken.")
          }

          void entrypoint_107_46() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Hou het netjes.")
          }

          void entrypoint_107_12() {
/*< 22>*/ 	start()
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 0, line: 11 */ "Kol & Struiz")
          }

          void entrypoint_107_64() {
/*<170>*/ 	start()
/*<172>*/ 	switch (story_flags[649 /* us: 805A9B1C 0x04, jp: 805ACD9C 0x04 */]) {
          	  case 0:
/*<174>*/ 		printf(/* textboxtype: 0, unk: 2, line: 82 */ "<0x10012:0x0000000b>Meester <heroname>...\n\n\n\n<0x1000A:0x000d00cd>Deze schatkist stamt uit een ver verleden.\nHij is achtergelaten door de godin voor\nhaar uitverkoren held.")
/*<176>*/ 		set_camera(-1, 0)
/*<175>*/ 		printf(/* textboxtype: 2, unk: 0, line: 84 */ "Het lijkt erop dat iedere schatkist\ngeopend kan worden door de energie\nvan het <color red<godinnenblok>coloroff> is waar hij mee\nverbonden is.\nZoek het land onder de wolken af naar de\ngodinnenblokken. Dat is de enige manier\nom de godinnenschatkisten te openen.")
          	  case 1:
/*<171>*/ 		printf(/* textboxtype: 0, unk: 2, line: 82 */ "<0x10012:0x0000000b>Meester <heroname>...\n\n\n\n<0x1000A:0x000d00cd>Deze schatkist stamt uit een ver verleden.\nHij is achtergelaten door de godin voor\nhaar uitverkoren held.")
/*<177>*/ 		set_camera(-1, 0)
/*<173>*/ 		printf(/* textboxtype: 0, unk: 0, line: 83 */ "Ik kan u op het moment helaas geen\ninformatie bieden over hoe u hem kunt\nopenen.")
          	}
          }

          void entrypoint_107_47() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 22, unk: 0, line: 48 */ "Ben onderweg voor werk. Wie\nmij wil spreken, kan mij hier\n's nachts vinden.\n<0x10006:0x05cd>-Beedle")
          }

          void entrypoint_107_13() {
/*< 23>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 8, unk: 0, line: 12 */ "Federik")
          }

          void entrypoint_107_30() {
/*< 47>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 22, unk: 0, line: 30 */ "Laat het lied van de godin schallen\nen de klanken op haar held vallen.\nHet lied dat de uitverkorene leidt\nals een hemels baken in de strijd.")
          }

          void entrypoint_107_14() {
/*< 24>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 22, line: 13 */ "Rector Gaepora")
          }

          void entrypoint_107_31() {
/*<103>*/ 	start()
/*<104>*/ 	switch (story_flags[719 /* us: 805A9B24 0x02, jp: 805ACDA4 0x02 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 0, unk: 22, line: 31 */ "<0x10008:0x00cd>Huis van Rogyr\n<0x10008:0xffcd>Werkplaatseigenaar")
          	  case 1:
          	}
          }

          void entrypoint_107_15() {
/*< 25>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "Meester Cornuylius")
          }

          void entrypoint_107_32() {
/*<106>*/ 	start()
/*<107>*/ 	switch (story_flags[720 /* us: 805A9B24 0x04, jp: 805ACDA4 0x04 */]) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10008:0x00cd>Huis van Meerko en Merula\n<0x10008:0xffcd>Drankjeshandelaren")
          	  case 1:
          	}
          }

          void entrypoint_107_50() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "Attentie, <0x10012:0x00000004>meester <heroname>... Daar\nis een <color red<groene lichtzuil>coloroff>. Dat is een plaats\nwaar u het oppervlak kunt bereiken.")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 30}
/*< 72>*/ 	printf(/* textboxtype: 8, unk: 0, line: 51 */ "Op uw kaart kunt u zien waar u momen-\nteel bent. Zo kunt u controleren hoe ver u\nvan Skyloft bent.")
/*< 71>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 34}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 8, line: 52 */ "Het lijkt erop dat u het oppervlak kunt\nbereiken bij het gat in de wolken waar\nlicht uit komt.")
/*< 14>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
          }

          void entrypoint_107_16() {
/*< 26>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 22, unk: 0, line: 15 */ "Meester Rafaël")
          }

          void entrypoint_107_33() {
/*<109>*/ 	start()
/*<110>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 22, unk: 0, line: 33 */ "Huis van Vleros")
          	  case 1:
          	}
          }

          void entrypoint_107_51() {
/*< 15>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10012:0x00000001>Meester, ik heb nieuws over het stenen\nfragment en de lichtzuil die erdoor is\ngecreëerd.\n\nTen zuiden van onze huidige locatie is\neen lichtzuil verschenen. Die duidt een\nopening in de wolkenbarrière aan waar-\ndoor u het oppervlak kunt bereiken.")
/*< 66>*/ 	printf(/* textboxtype: 8, unk: 0, line: 54 */ "Ik moet u waarschuwen dat uw over-\nlevingskans met alleen een zwaard\nbeperkt zal zijn.\n\nMocht u nog niet over een <color red<schild >coloroff>en\n<color red<drankjes >coloroff>beschikken, dan raad ik u aan\ndie voor uw reis aan te schaffen in de\nbazaar.")
/*< 53>*/ 	story_flags[198 /* us: 805A9AEF 0x01, jp: 805ACD6F 0x01 */] = true;
/*< 67>*/ 	story_flags[679 /* us: 805A9B22 0x02, jp: 805ACDA2 0x02 */] = true;
/*<167>*/ 	story_flags[358 /* us: 805A9B00 0x10, jp: 805ACD80 0x10 */] = true;
          }

          void entrypoint_107_17() {
/*< 27>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 22, line: 16 */ "Karane")
          }

          void entrypoint_107_34() {
/*<122>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 0, unk: 22, line: 34 */ "Plattegrond van Skyloft\nN: Standbeeld van de godin\nO: Woonwijk Z: Het grote plein\nW: Ridderacademie")
          }

          void entrypoint_107_52() {
/*< 18>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10012:0x00000001>Meester, vanaf hier is de lichtzuil te zien.")
/*< 75>*/ 	set_camera(2, 0)
/*< 74>*/ 	printf(/* textboxtype: 8, unk: 0, line: 57 */ "Spring over de rand vanaf een plek waar\nu de lichtzuil kunt zien en roep dan uw\nLoftwing.")
/*< 77>*/ 	set_camera(-1, 0)
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 8, line: 58 */ "Uw zoektocht naar Zelda kan beginnen.\nIn de lucht kunt u uw Loftwing met een\nsignaal roepen met (v).<0x10011:0x09cd>")
          }

          void entrypoint_107_18() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Zelda")
          }

          void entrypoint_107_35() {
/*<133>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Probeer onze pompoensoep! Om\nje kom bij leeg te likken en nog\ngezond ook! 10 rupees per kom!")
          }

          void entrypoint_107_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 6, unk: 0, line: 0 */ "Watervalgrot\n\nKijk uit: bloedzuigende monsters!\nGeen toegang voor kinderen.")
          }

          void entrypoint_107_19() {
/*< 37>*/ 	start()
/*< 49>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*< 50>*/ 		printf(/* textboxtype: 0, unk: 22, line: 19 */ "Zelda wordt vermist!\n(En <heroname> heeft de\nVleugelceremonie gewonnen.)")
          	  case 1:
/*< 38>*/ 		printf(/* textboxtype: 22, unk: 0, line: 18 */ "Vandaag is de Vleugelceremonie\nDeelnemers: Ganderd, Kol,\nStruiz en <heroname>.\nWie wint de grote prijs?")
          	}
          }

          void entrypoint_107_53() {
/*< 43>*/ 	start()
/*<186>*/ 	switch (scene_flags[25 /* 0x2 02 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 0, unk: 8, line: 61 */ "<0x10012:0x00000004>Meester <heroname>, plaats het <color red<stenen\nfragment>coloroff> dat ik u heb gegeven\nin de sokkel.")
          	  case 1:
/*< 68>*/ 		switch (story_flags[38 /* us: 805A9AE5 0x10, jp: 805ACD65 0x10 */]) {
          		  case 0:
/*< 44>*/ 			printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10012:0x00000004>Meester <heroname>, met een <color red<hemel-\nstraal >coloroff>kunt u dat teken van kracht\nvoorzien. Vervolgens kunt u het fragment\nplaatsen.\n\nOm een <color red<hemelstraal>coloroff> op te laden <color green<dient u\nuw zwaard ten hemel te heffen>coloroff>.")
          		  case 1:
/*< 69>*/ 			printf(/* textboxtype: 8, unk: 0, line: 60 */ "Mijn naam is <color blue<Fi>coloroff>... Ga voor het voetstuk\nstaan en trek het zwaard eruit.")
          		}
          	}
          }

          void entrypoint_107_36() {
/*<134>*/ 	start()
/*<149>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 22, line: 37 */ "Kala's podium - Regelmatige\navondoptredens (als het uitkomt)")
          	  case 1:
/*<142>*/ 		printf(/* textboxtype: 22, unk: 0, line: 36 */ "Kala zoekt muzikale begeleiding!\nHelaas zijn er tot die tijd geen\noptredens.")
          	}
          }

          void entrypoint_107_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 6, line: 1 */ "<icon 22> Ridderacademie\n    Woonwijk <icon 23>")
          }

          void entrypoint_107_54() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10012:0x00000004>Meester <heroname>...\n\n\n\nToen u dat <color red<godinnenblok>coloroff> met een <color red<hemel-\nstraal >coloroff>raakte, nam ik waar hoe de energie\nervan naar een plaats in het hemelrijk\nging.")
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 7, 'next': 151, 'param3': 30}
/*<151>*/ 	wait_frames(60)
/*< 56>*/ 	printf(/* textboxtype: 0, unk: 8, line: 64 */ "De locatie die ik heb gemarkeerd op uw\nkaart, geeft aan waar ik de energie heb\nwaargenomen.")
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 57, 'param3': 34}
/*< 57>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Mijn advies is om het gebied rond die locatie af\nte zoeken.")
/*< 62>*/ 	scene_flags[21 'The Sky'][13 /* 0x0 20 */] = true;
          }

          void entrypoint_107_37() {
/*<135>*/ 	start()
/*<143>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "Klanten kunnen de beroemde\nkroonluchter van De Oranje Poen\nvanaf de tweede etage bewonderen.")
          }

          void entrypoint_107_03() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<icon 20> Bazaar")
          }

          void entrypoint_107_20() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Toilet")
          }

          void entrypoint_107_55() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 0, unk: 9, line: 70 */ "Als u hier een zaailing plant, duurt het\nduizenden jaren tot die is volgroeid.\nDaarom raad ik u aan een andere locatie\nte zoeken.")
          }

          void entrypoint_107_38() {
/*<136>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 22, unk: 0, line: 39 */ "Kijk uit waar je loopt! De kroon-\nluchter kan gaan schommelen als je\nergens tegenaan botst.")
          }

