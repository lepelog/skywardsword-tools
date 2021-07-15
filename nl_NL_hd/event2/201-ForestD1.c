          void entrypoint_201_51() {
/*<  2>*/ 	start()
/*< 12>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 10>*/ 		printf("")
          	  case 1:
/*< 11>*/ 		printf("")
          	}
          }

          void entrypoint_201_17() {
/*< 49>*/ 	start()
/*< 50>*/ 	printf("Een analyse van het insectachtige\nprofiel en de vleugels van het\nzojuist gevonden object duidt aan\ndat <pling>het kan <r<vliegen>>.\nNa het lanceren van het apparaat kunt u\nhet <r<besturen>>. De scherpe voorkant kan\ndraden doorsnijden en kleine objecten\ntreffen.\nDruk op \x0E\x02\x04\x02\x29CD om het apparaat gereed te\nhouden voor gebruik, gevolgd door \x0E\x02\x04\x02\x25CD om\nmeer over het apparaat te weten te komen.\x0E\x01\x11\x02\xFCD\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_201_52() {
/*<  3>*/ 	start()
/*<  4>*/ 	printf("")
          }

          void entrypoint_201_18() {
/*< 72>*/ 	start()
/*<228>*/ 	scene_flags[11 'Faron: Skyview Temple'][21 /* 0x3 20 */] = true;
/*< 75>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 77>*/ 		printf("Ik bespeur de aanwezigheid van\n<y<heilig water >>in de tempel. Helaas\nkunt u hier <r<niet de <pling>detectiefunctie\ngebruiken>>.\nGebaseerd op mijn berekeningen acht\nik het waarschijnlijk dat het water zich\nin het diepste deel van de tempel\nbevindt.")
/*<209>*/ 		scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = true;
/*<204>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 30}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 206, 'param3': 6}
/*<206>*/ 		scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = true;
/*<208>*/ 		printf("Ik raad u aan om ter oriëntering een \x0E\x02\x04\x02\x19CD\nop de kaart te zetten om het diepste deel\nvan de tempel later weer te kunnen\nvinden.")
/*<207>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 78, 'param3': 34}
/*< 78>*/ 		printf("Ik neem de aura van een sterkere vijand\nwaar in deze omgeving, dan wat u tijdens\nuw eerdere bezoek bent tegengekomen.\nWees voorzichtig.")
          	  case 1:
/*< 76>*/ 		printf("Ik neem de aura van een sterkere vijand\nwaar in deze omgeving, dan wat u tijdens\nuw eerdere bezoek bent tegengekomen.\nWees voorzichtig.")
          	}
          }

          void entrypoint_201_01() {
          	start()
/*<  1>*/ 	printf("Kijk naar je kaart tot je ogen\nop de \x0E\x02\x04\x02\x19CD vallen. Raak de stenen\ndaar om een pad te onthullen.\n\nVind de tempelkaart in de\nruimte met de twee edelstenen.\n\n\n")
          }

          void entrypoint_201_53() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester, zoals ik meldde in mijn\neerdere vertaling, lijkt het erop dat\n<b<Zelda >>zich in deze bron spiritueel\nheeft gereinigd.\nIk acht het 97% zeker dat ze al op weg\nis naar <b<Eldin>>, waar zich nog een bron\nbevindt.\n\nHet is echter niet duidelijk welk vervoer\nZelda gebruikt om er te komen.")
/*< 87>*/ 	set_camera(1, 0)
/*< 86>*/ 	printf("Mijn analyse duidt aan dat u dit fragment\nnaar de sokkel op Skyloft moet brengen.\n\n\nDoor dit te doen verschijnt waarschijnlijk\neen <pling><r<lichtzuil >>op het oppervlak, waardoor\nu naar een ander gebied kunt gaan om uw\nzoektocht naar Zelda te vervolgen.")
/*< 88>*/ 	set_camera(-1, 0)
/*<  9>*/ 	switch (story_flags[86 /* us: 805A9AE8 0x04, jp: 805ACD68 0x04 */]) {
          	  case 0:
/*<  7>*/ 		printf("Laten we naar het hemelrijk terugkeren\nvoor we verder zoeken. Het <b<vogelbeeld\n>>dat buiten staat, kan ons brengen.")
          		flw_79:
/*< 79>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 80>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 81, 'param3': 36}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          	  case 1:
/*<  8>*/ 		printf("In het woud waar u eerder doorheen\ngereisd bent, vindt u beslist een vogel-\nbeeld waarmee u naar het hemelrijk\nterug kunt keren.")
          		goto flw_79
          	}
          }

          void entrypoint_201_19() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Ik bespeur <r<heilig water>> hier in de\nbuurt. Er lijken geen monsteraura's\nte zijn, dus u kunt hier de <r<detectie-\nfunctie >>gebruiken.")
          }

          void entrypoint_201_02() {
/*< 21>*/ 	start()
/*< 22>*/ 	printf("Hij die van boven is gekomen:\nluister naar de wijze stem van\nde dienaar die je naar de vaste\ngrond bracht.")
          }

          void entrypoint_201_54() {
/*< 23>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 47, 'param2': 0, 'next': 167, 'param3': 40}
/*<167>*/ 	{'type': 'type3', 'subType': 1, 'param1': 330, 'param2': 0, 'next': 168, 'param3': 51}
/*<168>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 169, 'param3': 17}
/*<169>*/ 	set_camera(9, 0)
/*< 26>*/ 	switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          	  case 0:
/*< 24>*/ 		printf("Ik acht het 95% zeker dat het water\nhier identiek is aan het water in het\nbad van de waterdraak. Ik stel voor\nom dit water naar te haar brengen.")
/*< 82>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
/*<264>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 84, 'param3': 36}
/*< 84>*/ 		set_camera(10, 0)
/*<170>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          	  case 1:
/*< 25>*/ 		printf("Volgens mijn analyse van het water\nhier heeft het een buitengewoon hoge\nconcentratie energie.\n\nHet is zeer waarschijnlijk dat deze\nenergie versterkt wordt als hij met\neen object met een gelijke golflengte\nin contact komt.")
/*<166>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          	}
          }

          void entrypoint_201_03() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("Links en rechts zijn twee deuren.\nHoe je die opent, dat is de vraag.\nMet edelstenen moet iets gebeuren.\nRaak er een hoog en een laag.")
          }

          void entrypoint_201_55() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("Zo...<pause0F> Je biedt meer weerstand dan ik\nhad verwacht van zo'n koddig kindje.\n\n\nMaar prijs jezelf niet te gelukkig.\n<pause0F>Je hebt je leven enkel aan dat zwaard\nvan je te danken.")
          }

          void entrypoint_201_20() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link, het is\nwaarschijnlijk dat ik de dienaar ben\nwaarnaar verwezen wordt.\n\nOm u te helpen\x0E\x01\x12\x04\x00\x02 met uw missie heeft\nde godin me veel kennis geschonken\nover dit land.\n\nMocht u informatie nodig hebben,\nneem dan gerust contact met mij op\ndoor op (v) te drukken.\x0E\x01\x11\x02\x9CD\n\nAls u op een object <g<focust >>met (Z) en\ndan op (v) <r<drukt>>, geef ik u alle\ninformatie die ik erover heb.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*< 93>*/ 	scene_flags[11 'Faron: Skyview Temple'][68 /* 0x9 10 */] = true;
          }

          void entrypoint_201_04() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("")
          }

          void entrypoint_201_56() {
/*< 36>*/ 	start()
/*< 33>*/ 	printf("Ik ben bang dat ik veel te lang met je\nheb gespeeld.\n\n\nDe aanwezigheid van het meisje is\nbijna geheel vervaagd, dus ik heb\ngeen reden om hier langer te blijven.\n\nVaarwel, hemelkind. Deze keer laat\nik je gaan. Ga maar fijn ergens zonder\nmij spelen. En niet achter me aan komen,\nanders ga je dood.")
/*< 85>*/ 	story_flags[83 /* us: 805A9AE9 0x80, jp: 805ACD69 0x80 */] = true;
          }

          void entrypoint_201_21() {
/*<214>*/ 	start()
/*<215>*/ 	printf("De wachters die u hier ziet, zijn uit\nkwaadaardige magie ontstaan. Ze\nrichten hun blik op alle bewegende\nobjecten in hun zicht.")
/*<216>*/ 	set_camera(13, 0)
/*<217>*/ 	printf("Deze wachters zijn met elkaar verbonden,\nwaardoor ze niet makkelijk onafhankelijk\nvan elkaar zullen draaien.")
/*<218>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 219, 'param3': 6}
/*<219>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_91() {
/*< 42>*/ 	start()
/*<195>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 196, 'param3': 32}
/*<196>*/ 	make_actor_do_something(3, 16)
/*<197>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 198, 'param3': 16}
/*<198>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 194, 'param3': 6}
/*<194>*/ 	set_camera(12, 0)
/*<212>*/ 	scene_flags[11 'Faron: Skyview Temple'][31 /* 0x2 80 */] = true;
/*<265>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<193>*/ 	make_actor_do_something(4, 16)
/*<255>*/ 	switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          	  case 0:
/*<257>*/ 		entrypoint_201_96();
          	  case 1:
/*< 48>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 46, 'param3': 13}
/*< 46>*/ 		printf("Fantaaastisch. Ik werk me kapot om\ndie sleutel van dat monster te jatten\nen dan raak ik 'm kwijt.")
/*< 47>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 43, 'param3': 13}
/*< 43>*/ 		printf("Kon ik me nu maar herinneren in\nwelk gat ik 'm heb verborgen.")
/*<258>*/ 		switch (scene_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<259>*/ 			entrypoint_201_96();
          		  case 1:
/*< 44>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 			printf("Ach, waar heb ik ook een sleutel voor\nnodig? Zodra ik die schat heb gevonden,\nkan ik een hele kist vol sleutels kopen!")
/*< 89>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	}
          }

          void entrypoint_201_57() {
/*<210>*/ 	start()
/*<211>*/ 	printf("\x0E\x01\x05\x04K\x00Ha, je hebt een prachtig zwaard.<pause0F>\nMaar zolang je <r<je aanvallen zo\nduidelijk aankondigt>>, lukt het je\nnooit om me te raken.")
          }

          void entrypoint_201_22() {
/*<220>*/ 	start()
/*<221>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester, ik neem in uw directe omgeving\nobjecten waarop u kunt focussen.\n\n\nAls u op (v) drukt terwijl u met\n(Z) op een persoon of object <g<focust>>,\nzal ik u daar informatie over geven.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<222>*/ 	scene_flags[11 'Faron: Skyview Temple'][113 /* 0xF 02 */] = true;
/*<223>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 224, 'param3': 32}
/*<224>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 225, 'param3': 17}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 226, 'param3': 6}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 227, 'param3': 36}
/*<227>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_92() {
/*< 51>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 154, 'param3': 32}
/*<154>*/ 	make_actor_do_something(3, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 161, 'param3': 17}
/*<161>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 57, 'param3': 16}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3342, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("Wacht eens even... Jij bent dat joch.\nHet joch dat ik in de vulkaan heb\nontmoet!")
/*< 56>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2065, 'next': 52, 'param3': 13}
/*< 52>*/ 	printf("Ben je ook hier om naar schatten\nte zoeken?\n[1]Ja![2]Nee.")
/*< 58>*/ 	switch (choice(2)) {
          	  case 0:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 60, 'param3': 13}
/*< 60>*/ 		printf("Ik wist het wel! Je gezicht schreeuwt\n\"schattenjager\"!")
          		flw_61:
/*< 61>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2059, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("Heeft die grote stenen kerel buiten\njou ook over de buit verteld?\n[1]Stenen kerel?[2]Buit?")
/*< 95>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 2050, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf("Ja, wat zei ie ook alweer? \"<pling><g<Speel een\nklank>> die prachtig klinkt, op de plek\nin de tempel waar de vlinders dansen.\"")
/*< 97>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 2057, 'next': 98, 'param3': 13}
/*< 98>*/ 		printf("Dus toen ik hier aankwam, heb ik\neen paar prachtige liedjes geneuried...\nEr gebeurde helemaal niks!")
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 100, 'param3': 13}
/*<100>*/ 		printf("Maar ik ben nu al zo ver gekomen,\ndus ik geef deze schattenjacht nog\nniet op!")
/*<157>*/ 		story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<156>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 53>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 54, 'param3': 13}
/*< 54>*/ 		printf("Je bent een slechte leugenaar, jochie.\nJe gezicht schreeuwt \"schattenjager\".")
          		goto flw_61
          	}
          }

          void entrypoint_201_23() {
/*<229>*/ 	start()
/*<230>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link, het water\nin deze kamer is... <pause0F><r<normaal water>>.\n\n\nHet <y<heilige water >>dat de waterdraak\nzoekt, bevindt zich waarschijnlijk in\nhet diepste deel van de tempel.")
          }

          void entrypoint_201_93() {
/*< 63>*/ 	start()
/*<199>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 200, 'param3': 32}
/*<200>*/ 	make_actor_do_something(3, 16)
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 202, 'param3': 16}
/*<202>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 160, 'param3': 6}
/*<160>*/ 	set_camera(11, 0)
/*<213>*/ 	zone_temp_flags[56 /* 0x6 01 */] = true;
/*<203>*/ 	make_actor_do_something(4, 16)
/*< 69>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4364, 'next': 67, 'param3': 13}
/*< 67>*/ 	printf("Jeetje. Na al dat graafwerk voor die\nschat sta ik hier toch met lege klauwen.\nWat een pech!")
/*< 68>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4112, 'next': 64, 'param3': 13}
/*< 64>*/ 	printf("Volgens mij was een of andere geniepige\ndief me voor. Er is hier nu alleen maar\n<r<water >>te vinden.")
/*< 65>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4615, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("Welke sukkel maakt nou zo'n lange\nreis voor water? Niet deze sukkel,\ndat kan ik je wel vertellen!")
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2061, 'next': 71, 'param3': 13}
/*< 71>*/ 	printf("Ik geef het op en ga naar huis.\nTot ziens!")
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_94() {
/*<101>*/ 	start()
/*<140>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 46}
/*<138>*/ 	set_camera(2, 0)
/*<141>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 143, 'param3': 32}
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 139, 'param3': 49}
/*<139>*/ 	make_actor_do_something(4, 16)
/*<137>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 49}
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4096, 'param2': 1, 'next': 113, 'param3': 13}
/*<113>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 136, 'param3': 40}
/*<136>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 106, 'param3': 17}
/*<106>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 107, 'param3': 6}
/*<107>*/ 	set_camera(3, 0)
/*<108>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 109, 'param3': 15}
/*<109>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 100, 'next': 111, 'param3': 17}
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 110, 'param3': 6}
/*<110>*/ 	set_camera(4, 0)
/*<104>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 112, 'param3': 14}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 16, 'next': 103, 'param3': 17}
/*<103>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 102, 'param3': 6}
/*<102>*/ 	entrypoint_201_92();
          }

          void entrypoint_201_95() {
/*<114>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 148, 'param3': 46}
/*<148>*/ 	set_camera(5, 0)
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 149, 'param3': 32}
/*<149>*/ 	make_actor_do_something(4, 17)
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 145, 'param3': 49}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 146, 'param3': 40}
/*<146>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 17, 'next': 144, 'param3': 17}
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 162, 'param3': 6}
/*<162>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': -1, 'next': 115, 'param3': 16}
/*<115>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 117, 'param3': 13}
/*<117>*/ 		printf("Wacht eens even, vriend. Volgens mij wil\nje snel op mij vooruit lopen om de beste\nbuit in te pikken.")
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 119, 'param3': 13}
/*<119>*/ 		printf("Nou, dan sta je op het punt om flink\nteleurgesteld te worden.<pause1E>\n\n\nDat er een vreemd tekeningetje op de\nmuur staat, betekent niet dat je in de\nbuurt van een schat bent, oké?")
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 2057, 'next': 121, 'param3': 13}
/*<121>*/ 		printf("Volgens mij heeft dat rotsblok met benen\nje goed voor de gek gehouden!")
/*<122>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2050, 'next': 123, 'param3': 13}
/*<123>*/ 		printf("Of je hier blijft, mag je zelf weten. Ik ga\nverder!")
/*<124>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<128>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3329, 'next': 126, 'param3': 13}
/*<126>*/ 		printf("Wacht eens even... Jij bent dat joch.\nHet joch dat ik in de vulkaan heb\nontmoet!")
/*<127>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3345, 'next': 125, 'param3': 13}
/*<125>*/ 		printf("Ben je ook hier om naar schatten\nte zoeken?\n[1]Ja![2]Nee.")
/*<131>*/ 		switch (choice(2)) {
          		  case 0:
/*<132>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3346, 'next': 133, 'param3': 13}
/*<133>*/ 			printf("Ik wist het wel! Je gezicht schreeuwt\n\"schattenjager\"!")
          			flw_152:
/*<152>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 153, 'param3': 13}
/*<153>*/ 			printf("Heeft die grote stenen kerel buiten\njou ook over de buit verteld?\n[1]Stenen kerel?[2]Buit?")
/*<134>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4369, 'param2': 3339, 'next': 135, 'param3': 13}
/*<135>*/ 			printf("Mooi niet dat ik al die mooie buit voor\nmijn neus weg laat graaien!")
/*<159>*/ 			story_flags[493 /* us: 805A9B13 0x08, jp: 805ACD93 0x08 */] = true;
/*<158>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4617, 'next': 130, 'param3': 13}
/*<130>*/ 			printf("Je bent een slechte leugenaar, jochie.\nJe gezicht schreeuwt \"schattenjager\".")
          			goto flw_152
          		}
          	}
          }

          void entrypoint_201_96() {
/*<172>*/ 	start()
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 261, 'param3': 32}
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 173, 'param3': 16}
/*<173>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<174>*/ 		switch (scene_flags[69 /* 0x9 20 */]) {
          		  case 0:
/*<181>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3345, 'next': 177, 'param3': 13}
/*<177>*/ 			printf("Wat? Je hebt m'n sleutel gevonden\nen ook gebruikt?!")
          			flw_182:
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4116, 'param2': 4617, 'next': 178, 'param3': 13}
/*<178>*/ 			printf("Hm, ik bedenk me net dat een Mogma als\nik eigenlijk weinig aan een sleutel\nheeft. Mogma's kunnen altijd een weg\nnaar binnen of buiten graven!")
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 179, 'param3': 13}
/*<179>*/ 			printf("Nou, het is fijn om te weten waar die\nsleutel was. Nu ga ik weer op jacht\nnaar schatten. Hopelijk worden we\nhier allebei schatrijk. Tot ziens!")
/*<192>*/ 			scene_flags[11 'Faron: Skyview Temple'][55 /* 0x7 80 */] = true;
          			flw_256:
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<180>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3346, 'next': 176, 'param3': 13}
/*<176>*/ 			printf("Dat is de sleutel die ik zocht! Je hebt\n'm gevonden en teruggebracht!")
          			goto flw_182
          		}
          	  case 1:
/*<249>*/ 		switch (story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */]) {
          		  case 0:
/*<254>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 251, 'param3': 13}
/*<251>*/ 			printf("Hè, ik kan 'm niet vinden...")
/*<252>*/ 			story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = false;
          			flw_189:
/*<189>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 188, 'param3': 13}
/*<188>*/ 			printf("Nu ik erover nadenk... Ik weet bijna\nzeker dat ik die sleutel heb begraven.\nIk weet alleen niet meer waar...")
/*<191>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3345, 'next': 190, 'param3': 13}
/*<190>*/ 			printf("Nou, waar zou hij zijn? Misschien toch\nniet in deze kamer. Heb jij misschien\neen kaart bij je?")
          			goto flw_256
          		  case 1:
/*<253>*/ 			{'type': 'type3', 'subType': 4, 'param1': 4113, 'param2': 3329, 'next': 250, 'param3': 13}
/*<250>*/ 			printf("Hé, wat moet je van me?\n[1]Sleutel?[2]Schat?[3-]Laat maar.")
/*<175>*/ 			switch (choice(3)) {
          			  case 0:
          				goto flw_189
          			  case 1:
/*<185>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4105, 'param2': 2050, 'next': 184, 'param3': 13}
/*<184>*/ 				printf("Ken je die grote kerel? Je weet wel,\ndie op een rotsblok met benen lijkt?\nHij heeft ook fantastische wenkbrauwen.\n\nNou ja, hij heeft me dus over een\n<r<gouden beeld >>verteld dat de deur\nopent naar een of andere sjieke\nplek.")
/*<187>*/ 				{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3332, 'next': 186, 'param3': 13}
/*<186>*/ 				printf("Hééé, waarom grijns je zo? Weet je soms\niets dat ik niet weet? Kom op, jochie,\nvertel!")
          				goto flw_256
          			  case 2:
          			}
          		}
          	}
          }

          void entrypoint_201_97() {
/*<231>*/ 	start()
/*<241>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 242, 'param3': 32}
/*<242>*/ 	make_actor_do_something(3, 16)
/*<243>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 99, 'next': 244, 'param3': 16}
/*<244>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 240, 'param3': 6}
/*<240>*/ 	set_camera(12, 0)
/*<245>*/ 	zone_temp_flags[55 /* 0x7 80 */] = true;
/*<266>*/ 	story_flags[1112 /* us: 805A9B54 0x40, jp: 805ACDD4 0x40 */] = true;
/*<248>*/ 	story_flags[1111 /* us: 805A9B54 0x20, jp: 805ACDD4 0x20 */] = true;
/*<239>*/ 	make_actor_do_something(4, 16)
/*<237>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4115, 'param2': 4100, 'next': 235, 'param3': 13}
/*<235>*/ 	printf("Fantaaastisch. Ik werk me kapot om\ndie sleutel van dat monster te jatten\nen dan raak ik 'm kwijt.")
/*<236>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 4103, 'next': 232, 'param3': 13}
/*<232>*/ 	printf("Kon ik me nu maar herinneren in\nwelk gat ik 'm heb verborgen.")
/*<246>*/ 	switch (scene_flags[15 /* 0x0 80 */]) {
          	  case 0:
/*<247>*/ 		entrypoint_201_96();
          	  case 1:
/*<233>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': 2057, 'next': 234, 'param3': 13}
/*<234>*/ 		printf("Hè, ik dacht nog wel dat die sleutel\nmij schatrijk zou maken.<pause0F> Ik zou\ntoch zweren dat ik 'm <r<hier ergens\nhad begraven>>...")
/*<238>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_201_11() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("Ik neem Zelda's aura waar! Er is een\ngrote kans dat ze zich achter deze\ngrote deur bevindt.")
/*< 31>*/ 	scene_flags[11 'Faron: Skyview Temple'][32 /* 0x5 01 */] = true;
          }

          void entrypoint_201_12() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
          }

          void entrypoint_201_99() {
/*<163>*/ 	start()
/*<164>*/ 	switch (temp_flags[63 /* 0x6 80 */]) {
          	  case 0:
/*<165>*/ 		scene_flags[11 'Faron: Skyview Temple'][16 /* 0x3 01 */] = true;
          	  case 1:
          	}
          }

          void entrypoint_201_13() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("Het mechanisme van het slot op deze\ndeur lijkt gedeactiveerd te zijn.")
/*< 32>*/ 	scene_flags[11 'Faron: Skyview Temple'][34 /* 0x5 04 */] = true;
          }

          void entrypoint_201_14() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik heb slecht nieuws. In deze\ntempel echoën de aura's van veel\nwezens.\n\nIk kan de aura van Zelda hier niet van\nafzonderen\x0E\x01\x06\x02\xFECD. <pause0F>U zult haar hier <r<niet\nkunnen detecteren>>.\n\n\x0E\x01\x12\x04\x00\x01Ik raad u aan <g<rond te kijken >>om te\nbepalen waar u het beste naartoe kunt\ngaan.")
/*< 94>*/ 	temp_flags[50 /* 0x7 04 */] = true;
/*<262>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<263>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_201_15() {
/*< 37>*/ 	start()
/*< 38>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link, ik heb\ninformatie voor u betreffende het\nmechanisme dat de deuren opent.\n\nGezien hun functie is het zeer\nwaarschijnlijk dat de mechanismen\nzich in de buurt van de deuren\nbevinden die ze openen.\nAls u <g<op verkenning uitgaat>>, acht ik het\n80% zeker dat u deze mechanismen\nvindt.")
          }

          void entrypoint_201_16() {
/*< 39>*/ 	start()
/*< 40>*/ 	printf("Het lijkt erop dat een van Ghirahims\ndienaren het slot heeft gereactiveerd.\nU zult het gebied opnieuw moeten\ndoorzoeken voor de sleutel.")
/*< 41>*/ 	scene_flags[11 'Faron: Skyview Temple'][20 /* 0x3 10 */] = true;
          }

