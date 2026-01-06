          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Wanneer je alle rupees opgraaft in\nKnollerds spel <color blue<Delven voor durfallen>coloroff>,\ngeeft hij je een zeldzame schat.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Diep onder de grond, onder deze\nvulkaan, leven de aan schatzoeken\nverslaafde <color blue<Mogma's>coloroff>.\n\nTegenwoordig blijven de meesten\nvan hen veilig thuis. Daar genieten\nze van een zorgeloos bestaan.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "Op de <color red<top>coloroff> van deze vulkaan zou een\n<color red<draak >coloroff>wonen. Maar je bent nog niet\neens in de buurt van de top!")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Wil je dat ik dat herhaal?\n[1-]Ja.[2]Nee.")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ik heb laatst gehoord dat er hier een\ngenie rondreist die alles de eerste keer\nperfect kan onthouden...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 9, unk: 2, line: 9 */ "Je buidel en de <color red<voorwerpenbank >coloroff>zijn vol. Het\nvoorwerp wordt daarom terug in de schatkist\ngeplaatst.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "Je buidel zit al vol. Het voorwerp is daarom\nnaar de <color red<voorwerpenbank>coloroff> gestuurd.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ik hoorde dat de <color red<draak>coloroff> die op de\nvulkaan woont, wel van een praatje\nhoudt.\n\nHet is zo'n kletskous! Hij praat de\noren van je hoofd!")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Ik hoorde dat er boven op deze vulkaan\neen <color red<draak >coloroff>woont, bedekt in vlammen.\n\n\nZijn schuilplek is <color red<ergens waar het zo\nheet is>coloroff>, dat bijna niemand er kan komen.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Wil je dat ik dat herhaal?\n[1-]Ja.[2]Nee.")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ik heb laatst gehoord dat er hier een\ngenie rondreist die alles de eerste keer\nperfect kan onthouden...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Hé! <0x30001:0x><heroname>! Je bent toch niet\nvan plan om ervandoor te gaan, hè?\n\n\nHa! Dat was een grap, toch? Een echte\nman maakt af waar hij aan begint!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Je kunt blijkbaar een <color red<hartstukje>coloroff>\nverdienen met een goede tijd op de\n<color blue<Roekeloze Racebaan>coloroff>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x1000F:0x>Hoelang wil je slapen?\n[1-]Tot de ochtend.[2-]Tot de nacht.[3]Niet slapen.")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ergens in deze woestijn schijnt een\n<color red<draak>coloroff> te wonen die zijn bezoekers\ngraag test om te zien waartoe ze in\nstaat zijn.\nAls je zijn uitdagingen aankunt, dan\nzal hij je belonen met een <color red<schild dat\nsterker is dan elk ander schild>coloroff>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Wilt u hier afdalen?\n[1-]Ja.[2]Nee.")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Men zegt dat je zeldzame insecten het\nbeste kunt vangen door langzaam op ze\naf te gaan en een <color yellow<groot insectennet>coloroff> te\ngebruiken.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Attentie, <0x10012:0x0000000b>meester.\n\n\n\nEr is <color red<iets hoogst ongebruikelijks>coloroff> aan\nde hand in het Faron-woud. Daarom is\nhet nu niet mogelijk om daarheen af te\ndalen.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0, line: 0 */ "<0x1000F:0x>De deur zit op slot en kan alleen\nmet een <color yellow<sleutel>coloroff> worden geopend.")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Het schijnt dat sommige <color blue<godinnenblokken\n>coloroff>toegang geven tot allerlei schatten\nwanneer ze de lucht in vliegen. Soms\nzelfs tot een <color red<hartstukje>coloroff>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Richt met (Hand) op het vogelbeeld dat u\nwilt kiezen, en bevestig uw bestemming\ndoor op (A) te drukken.")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Attentie, <0x10012:0x0000000b>meester.\n\n\n\nU kunt afdalen naar een vogelbeeld\nop het <sound 4>oppervlak, maar u moet daarvoor\neerst het <color blue<vogelbeeld>coloroff> bezocht hebben en\nde locatie hebben vastgelegd.\nRicht om te kiezen met (Hand) op het\ngebied waar u naartoe wilt en druk\nop (A) om uw keuze te bevestigen.")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x1000F:0x>Het bord is kapot en onleesbaar.")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Men zegt dat je rupees tevoorschijn\nkunt toveren door op bepaalde muren\neen rupee te tekenen.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0, line: 3 */ "<0x1000F:0x>Vanaf hier kun je niet lezen wat\ner op het bord staat.")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<item 36> >coloroff>kunnen iets laten\ngebeuren wanneer ze op insecten of\nmonsters gestrooid worden. Ze zijn van\nglinsterende paddenstoelen afkomstig.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Het tekenen van een cirkel op bepaalde\nmuren kan blijkbaar een rond object\ntevoorschijn toveren.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 9, line: 1 */ "<0x1000F:0x>De deur zit potdicht en laat zich\nniet openen.")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "Door drie driehoeken op bepaalde\nmuren te tekenen kun je <color yellow<feeën>coloroff> laten\nverschijnen. Zoiets hoorde ik ergens.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "Er doet een gerucht de ronde dat hier\nergens een <color yellow<hartstukje >coloroff>te vinden is.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Maar dat wist jij natuurlijk al, aangezien\nje het allang gevonden hebt. Hmpf.")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "Ze zeggen ook dat je moet graven als\neen <color blue<Mogma>coloroff> om het te vinden.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 9, line: 10 */ "Boing-oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 9, line: 4 */ "Wil je dit Rijk der Stilte verlaten?\n[1-]Ja.[2]Nee, ik blijf.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "Als je de bamboestok bij <color blue<Bamboeveller>coloroff><color red<\nmeer dan 28 keer>coloroff> door weet te hakken,\nkrijg je een speciale schat.\n\nPauwel, waar de dames ooit in bosjes\nvoor vielen in Skyloft, beweert dat hij\nde stok zelfs een keer 43 keer heeft\ndoorgehakt voor die omviel...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "Wanneer je de wespentest in het\n<color blue<Insectenparadijs >coloroff><color red<binnen twee minuten\n>coloroff>voltooit, ontvang je zeldzame moeilijk\nte vangen insecten als beloning.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "Je kunt <color red<vlinders>coloroff> vaak in de buurt van\n<color blue<roddelrotsen>coloroff> zoals ik vinden.\n\n\nAls je een plek vindt waar veel vlinders\nrondvliegen, speel dan <color red<mooie klanken>coloroff>.\nDan kan er, boing-oing, zo een roddelrots\nopduiken!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Ik hoorde dat je een pijlvormig object\ntevoorschijn kunt toveren door op\nbepaalde muren een pijl te tekenen.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Ik heb gehoord dat je op sommige\nmuren een hart kunt tekenen en dat\nje wonden dan genezen worden.")
          }

