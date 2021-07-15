          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf("Wanneer je alle rupees opgraaft in\nKnollerds spel <b<Delven voor durfallen>>,\ngeeft hij je een zeldzame schat.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf("Diep onder de grond, onder deze\nvulkaan, leven de aan schatzoeken\nverslaafde <b<Mogma's>>.\n\nTegenwoordig blijven de meesten\nvan hen veilig thuis. Daar genieten\nze van een zorgeloos bestaan.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf("Op de <r<top>> van deze vulkaan zou een\n<r<draak >>wonen. Maar je bent nog niet\neens in de buurt van de top!")
/*< 60>*/ 		printf("Wil je dat ik dat herhaal?\n[1]Ja.[2-]Nee.")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf("Ik heb laatst gehoord dat er hier een\ngenie rondreist die alles de eerste keer\nperfect kan onthouden...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf("Je buidel en de <r<voorwerpenbank >>zijn vol. Het\nvoorwerp wordt daarom terug in de schatkist\ngeplaatst.")
          		  case 1:
/*< 10>*/ 			printf("Je buidel zit al vol. Het voorwerp is daarom\nnaar de <r<voorwerpenbank>> gestuurd.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf("Ik hoorde dat de <r<draak>> die op de\nvulkaan woont, wel van een praatje\nhoudt.\n\nHet is zo'n kletskous! Hij praat de\noren van je hoofd!")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf("Ik hoorde dat er boven op deze vulkaan\neen <r<draak >>woont, bedekt in vlammen.\n\n\nZijn schuilplek is <r<ergens waar het zo\nheet is>>, dat bijna niemand er kan komen.")
/*< 53>*/ 		printf("Wil je dat ik dat herhaal?\n[1]Ja.[2-]Nee.")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf("Ik heb laatst gehoord dat er hier een\ngenie rondreist die alles de eerste keer\nperfect kan onthouden...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Hé! \x0E\x03\x01\x00Link! Je bent toch niet\nvan plan om ervandoor te gaan, hè?\n\n\nHa! Dat was een grap, toch? Een echte\nman maakt af waar hij aan begint!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf("Je kunt blijkbaar een <r<hartstukje>>\nverdienen met een goede tijd op de\n<b<Roekeloze Racebaan>>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x0F\x00Hoelang wil je slapen?\x0F\x01\x0F\n[1]Tot de ochtend.[2]Tot de nacht.[3-]Niet slapen.")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf("Ergens in deze woestijn schijnt een\n<r<draak>> te wonen die zijn bezoekers\ngraag test om te zien waartoe ze in\nstaat zijn.\nAls je zijn uitdagingen aankunt, dan\nzal hij je belonen met een <r<schild dat\nsterker is dan elk ander schild>>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Wilt u hier afdalen?\n[1]Ja.[2-]Nee.")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf("Men zegt dat je zeldzame insecten het\nbeste kunt vangen door langzaam op ze\naf te gaan en een <y<groot insectennet>> te\ngebruiken.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\nEr is <r<iets hoogst ongebruikelijks>> aan\nde hand in het Faron-woud. Daarom is\nhet nu niet mogelijk om daarheen af te\ndalen.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf("\x0E\x01\x0F\x00De deur zit op slot en kan alleen\nmet een <y<sleutel>> worden geopend.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf("Het schijnt dat sommige <b<godinnenblokken\n>>toegang geven tot allerlei schatten\nwanneer ze de lucht in vliegen. Soms\nzelfs tot een <r<hartstukje>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf("Richt met \x0E\x02\x04\x02\x18CD op het vogelbeeld dat u\nwilt kiezen, en bevestig uw bestemming\ndoor op (A) te drukken.")
          	  case 1:
/*< 73>*/ 		printf("Attentie, \x0E\x01\x12\x04\x00\x0Bmeester.\n\n\n\nU kunt afdalen naar een vogelbeeld\nop het <pling>oppervlak, maar u moet daarvoor\neerst het <b<vogelbeeld>> bezocht hebben en\nde locatie hebben vastgelegd.\nRicht om te kiezen met \x0E\x02\x04\x02\x18CD op het\ngebied waar u naartoe wilt en druk\nop (A) om uw keuze te bevestigen.")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x0F\x00Het bord is kapot en onleesbaar.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf("Men zegt dat je rupees tevoorschijn\nkunt toveren door op bepaalde muren\neen rupee te tekenen.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x0F\x00Vanaf hier kun je niet lezen wat\ner op het bord staat.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf("<y<<item24> >>kunnen iets laten\ngebeuren wanneer ze op insecten of\nmonsters gestrooid worden. Ze zijn van\nglinsterende paddenstoelen afkomstig.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf("Het tekenen van een cirkel op bepaalde\nmuren kan blijkbaar een rond object\ntevoorschijn toveren.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("\x0E\x01\x0F\x00De deur zit potdicht en laat zich\nniet openen.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("Door drie driehoeken op bepaalde\nmuren te tekenen kun je <y<feeën>> laten\nverschijnen. Zoiets hoorde ik ergens.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Er doet een gerucht de ronde dat hier\nergens een <y<hartstukje >>te vinden is.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf("Maar dat wist jij natuurlijk al, aangezien\nje het allang gevonden hebt. Hmpf.")
          	  case 1:
/*< 79>*/ 		printf("Ze zeggen ook dat je moet graven als\neen <b<Mogma>> om het te vinden.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf("Boing-oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Wil je dit Rijk der Stilte verlaten?\n[1]Ja.[2-]Nee, ik blijf.")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf("Als je de bamboestok bij <b<Bamboeveller>><r<\nmeer dan 28 keer>> door weet te hakken,\nkrijg je een speciale schat.\n\nPauwel, waar de dames ooit in bosjes\nvoor vielen in Skyloft, beweert dat hij\nde stok zelfs een keer 43 keer heeft\ndoorgehakt voor die omviel...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf("Wanneer je de wespentest in het\n<b<Insectenparadijs >><r<binnen twee minuten\n>>voltooit, ontvang je zeldzame moeilijk\nte vangen insecten als beloning.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf("Je kunt <r<vlinders>> vaak in de buurt van\n<b<roddelrotsen>> zoals ik vinden.\n\n\nAls je een plek vindt waar veel vlinders\nrondvliegen, speel dan <r<mooie klanken>>.\nDan kan er, boing-oing, zo een roddelrots\nopduiken!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf("Ik hoorde dat je een pijlvormig object\ntevoorschijn kunt toveren door op\nbepaalde muren een pijl te tekenen.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf("Ik heb gehoord dat je op sommige\nmuren een hart kunt tekenen en dat\nje wonden dan genezen worden.")
          }

