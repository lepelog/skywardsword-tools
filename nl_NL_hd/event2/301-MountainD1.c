          void entrypoint_301_11() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik neem een nieuw type vijand\nwaar. Deze wezens lijken over aanzienlijke\nfysieke capaciteiten te beschikken.\n\nDruk op (Z) om op een vijand te<g< focussen>>\nen daarna op (v) om me te roepen. Ik deel\ndan alle beschikbare informatie over die\nvijand met u.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_301_01() {
          	start()
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2064, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("Die vervloekte rooie types overal. En nu\nben ik ook nog m'n maat kwijt! Was ik\nhier maar nooit naartoe gekomen.")
/*< 31>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -255, 'next': 33, 'param3': 13}
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 32, 'param3': 17}
/*< 32>*/ 	printf("Hé, jij ook hier? Ben je hier om die\nvriendin van je te vinden?\n\n\nO, trouwens...<pause0F> Ik zag wel een <r<blonde meid\ndie er vreemd uitzag>>, ergens naartoe\ngesleurd worden.\n\nMaar \x0E\x01\x09\x04\x14\x1215met al die schurken in de buurt\nkun je haar echt niet redden. Ze zitten\noveral!\n\n\x0E\x01\x09\x04ÿ\xFF00Als je leven je lief is, kun je maar beter\nnaar huis toe gaan, maat!")
/*< 23>*/ 	scene_flags[14 'Eldin: Earth Temple'][51 /* 0x7 08 */] = true;
          }

          void entrypoint_301_03() {
/*<  2>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x12\x04\x00\x04Meester Link, Zelda heeft zich\nin het water van deze fontein spiritueel\ngereinigd.\n\nAls mijn inschattingen correct zijn, dan is\nze nu onderweg naar een gebied dat\nbekend staat als <b<Lanayru>>.\n\nBreng dit fragment terug naar de tempel,\nwaar een nieuwe pilaar van licht het pad\nnaar <b<Lanayru>> zichtbaar zal maken.\n\nIk stel voor dat u nu terugkeert naar\n<b<Skyloft >>en daarna verder reist naar\nLanayru.")
/*< 20>*/ 	story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */] = true;
/*< 21>*/ 	zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 60, 'param3': 36}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': -1, 'param3': 6}
          }

          void entrypoint_301_04() {
/*<  4>*/ 	start()
/*< 25>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("Vervloekt! Ik heb dat ding vast net ergens\nlaten vallen...")
/*< 87>*/ 	make_actor_do_something(3, 0)
/*< 28>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 30, 'param3': 17}
/*< 30>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3346, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("Hé! Mooie timing, maat. Ik ben het,\n<b<Lóhd>>!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFDat je hier toevallig nu bent, moet iets\nbetekenen, weet je. Dat is het lot of zo. Dus\nnu we een band hebben, help je me toch\nwel om m'n <y<bommenzak>> terug te vinden?")
/*<102>*/ 	set_camera(16, 0)
/*<101>*/ 	printf("Ik was achter die rotsblokken naar schatten\nop zoek en zag opeens die griezels.<pause0F> Ik ging\ner in paniek vandoor en toen...\x0E\x01\x09\x04\x13\x100D toen ben ik\n'm kwijtgeraakt!")
/*<104>*/ 	set_camera(-1, 0)
/*<103>*/ 	printf("\x0E\x01\x09\x04\x09\x8FFHet is een <r<zak om bombloemen in te\nbewaren>>. Wat moet ik zonder zo'n zak\nbeginnen? O, nee! Daar ga ik nu achter\nkomen, of niet soms?\nHij ligt daarginds ergens... <pause0A>\x0E\x01\x09\x04\x11\xDFFHelp me uit de\nbrand en breng me mijn <y<bommenzak\n>>terug, ik smeek 't je!")
          }

          void entrypoint_301_05() {
/*<  5>*/ 	start()
/*< 94>*/ 	set_camera(14, 0)
/*< 93>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 92, 'param3': 40}
/*< 92>*/ 	{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 100, 'next': 88, 'param3': 14}
/*< 88>*/ 	make_actor_do_something(3, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 95, 'param3': 17}
/*< 95>*/ 	set_camera(15, 0)
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x11\xD08Hé, kijk aan! Je hebt m'n <y<bommenzak>>!\n\n\n\n\x0E\x01\x09\x04ÿ\x8FFBedankt voor alle moeite, ik sta bij je in\nhet krijt. Maar geef me nu die zak!<pause14>\n\n\n\x0E\x01\x09\x04\x11\xD0EWat krijgen we nou? Je wilt 'm lenen\nzodat je dieper de vulkaan in kunt gaan?\n\n\n\x0E\x01\x09\x04ÿ\xFFFFO, dat is waar ook. Je was naar die\nvriendin van je op zoek. Je hebt wel veel\nvoor haar over, zeg...\n\n\x0E\x01\x09\x04\x15\xD11O, wacht!<pause0F> Hoe is het met MIJN maat?\n[1]Hij is weg...[2]Hij is bezorgd![3]Geen idee.")
/*< 34>*/ 	switch (choice(3)) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x13\x1007Echt? Je kunt echt op niemand meer\nrekenen tegenwoordig...\n\n\n\x0E\x01\x09\x04ÿ\x8FFWacht, dat neem ik terug. Jouw vriendin\nkan op jou rekenen, toch? Je zet je leven\nvoor haar op het spel.\n\n\x0E\x01\x09\x04\x14\x1209Maar ik laat je alsnog niet mijn zak lenen.\nNee, ik GEEF je die zak gewoon! Maar\nwees er voorzichtig mee...")
          		flw_105:
/*<105>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 19, 'param3': 42}
/*< 19>*/ 		give_item(92 0x5C);
/*< 26>*/ 		{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -245, 'next': 18, 'param3': 13}
/*< 18>*/ 		printf("Zo, nu heb je mijn <y<bommenzak>>. Ga snel\ndie vriendin van je vinden!")
/*<106>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x00\x1004Hij maakt zich zorgen? Om mij?<pause0F> Wat voor\nmaat doet zijn maat zoiets aan?\n\n\n\x0E\x01\x09\x04ÿ\x8FFJij zult ook wel bezorgd zijn. Je weet niet\neens of jouw vriendin nog leeft...\n\n\n\x0E\x01\x09\x04\x14\x1209Maar ik laat je alsnog niet mijn zak lenen.\nNee, ik GEEF je die zak gewoon! Maar\nwees er voorzichtig mee...")
          		goto flw_105
          	  case 2:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x804Is dat zo? Hm... <pause0F>Ik hoop dat het goed met\n'm gaat. Hé... Die monsters zullen hem toch\nniet opge...\n\n\x0E\x01\x09\x04\x00\x8FFJij zult je vast ook veel zorgen maken. Je\nweet niet eens of je maat nog leeft of niet,\nof ergens ertussenin...\n\n\x0E\x01\x09\x04\x14\x1209Maar ik laat je alsnog niet mijn zak lenen.\nNee, ik GEEF je die zak gewoon! Maar\nwees er voorzichtig mee...")
          		goto flw_105
          	}
          }

          void entrypoint_301_06() {
/*< 11>*/ 	start()
/*< 89>*/ 	make_actor_do_something(3, 0)
/*< 27>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 10, 'param3': 17}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x11\xD12Wacht even! Ik vergeet nog iets!\n\n\n\n\x0E\x01\x09\x04\x09\x8FFEr zit nog niets in die zak, dus pak aan.\nHiermee kun je gelijk aan de slag gaan.")
/*< 16>*/ 	give_item(40 0x28);
/*< 17>*/ 	printf("Als je bommen op zijn, zoek dan gewoon\nwat nieuwe om de zak weer mee te vullen.\n\n\n\x0E\x01\x09\x04\x11\x80BDruk op <g<(B)>> wanneer je een bom beet hebt\n<g<om hem in de zak te stoppen>>.\x0E\x01\x11\x02\x1CD\n\n\n\x0E\x01\x09\x04\x09\x8FFEr passen <r<maximaal 10 bommen>> in de zak.\nVergeet niet de zak te vullen als je ergens\nbombloemen tegenkomt.")
          }

          void entrypoint_301_07() {
/*<  7>*/ 	start()
/*< 90>*/ 	make_actor_do_something(3, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 9, 'param3': 17}
/*<  9>*/ 	check_item_flag(92, 1)
/*<  8>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          	  case 0:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x11\xD00Hé, ben je eigenlijk al eens in brand\ngevlogen terwijl je met een schurk vocht?\n\n\n\x0E\x01\x09\x04\x09\x8FFZorg dat je jezelf snel blust als dat gebeurt!\nO, en haal NOOIT een <y<bom>> uit je zak\nterwijl je in brand staat, oké? Slecht idee,\nneem dat van mij aan!")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x15\x809Dat zag er goed uit, maat! Je rolde\ndie <y<bombloem >>als een doorgewinterde\navonturier!\n\n\x0E\x01\x09\x04\x11\x800Ga zo door en breng me mijn <y<bommenzak\n>>terug!")
          		  case 1:
/*< 96>*/ 			switch (temp_flags[57 /* 0x6 02 */]) {
          			  case 0:
/*< 13>*/ 				printf("Met een explosief kom je daar wel naar\nbinnen, denk ik. Zoek anders hier in de\nbuurt naar een <y<bombloem>>.")
          			  case 1:
/*< 97>*/ 				printf("O ja... <pause0F>Jij kunt er niet een tunnel naartoe\ngraven, dus hoe kom je daar? Hmm...\n\n\n\x0E\x01\x09\x04\x15\x120CMet een <y<bombloem>> kun je misschien een\npad vrijmaken.\n\n\n\x0E\x01\x09\x04\x09\xFF00<y<Bombloemen >>kun je hier vast wel ergens in\nde buurt vinden.")
/*< 98>*/ 				temp_flags[57 /* 0x6 02 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_301_08() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Tempel der Aarde")
          }

          void entrypoint_301_09() {
/*< 39>*/ 	start()
/*< 80>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1006, 'next': 54, 'param3': 24}
/*< 54>*/ 	story_flags[686 /* us: 805A9B21 0x08, jp: 805ACDA1 0x08 */] = true;
/*< 82>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = true;
/*< 50>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 13, 'next': 49, 'param3': 32}
/*< 49>*/ 	{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 99, 'next': 56, 'param3': 16}
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 1, 'next': 52, 'param3': 40}
/*< 52>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1279, 'next': 70, 'param3': 13}
/*< 70>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 51, 'param3': 6}
/*< 51>*/ 	set_camera(2, 0)
/*< 40>*/ 	printf("\x0E\x01\x09\x04\xD08\x5FFO, jij bent het...")
/*< 79>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xD00\x5FFEens even denken<pause01>.<pause01>.<pause01>.<pause01><pause08> Hm, nee, dat was het\nniet.<pause14> Wat gênant... Ik ben totáál vergeten hoe\nje heet!\n\n\x0E\x01\x09\x04\xD0A\x5FFNiet dat jouw, ongetwijfeld, sullige naam me\nook maar iets boeit. Ik heb wel wat beters aan\nmijn hoofd... Bepaalde frustraties waar ik mijn\nhart over moet luchten.")
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3339, 'param2': 3327, 'next': 72, 'param3': 13}
/*< 72>*/ 	set_camera(6, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\xD00\x900Ik ben hiernaartoe gekomen, omdat ik hoorde\ndat mijn dienaren eindelijk de priesteres te\npakken hadden. Wat een heerlijk nieuws was\ndat... Ik heb de hele reis lopen huppelen.\nMaar wat trof ik hier aan? \x0E\x01\x09\x04\xD00\xCFFDie bemoeierige\nhelper van de godin...")
/*< 74>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3340, 'param2': 3327, 'next': 65, 'param3': 13}
/*< 65>*/ 	printf("\x0E\x01\x08\x02\xFECD\x0E\x01\n\x04\x0CÍZe heeft het weer voor elkaar...\n\n\n\n\x0E\x01\x09\x04\xD00\xCFF\x0E\x01\x08\x02\xFECD<pause0F>\x0E\x01\n\x04\x0DÍDat... Dat...")
/*< 75>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3341, 'param2': 3583, 'next': 66, 'param3': 13}
/*< 66>*/ 	printf("\x0E\x01\x05\x04-\x00\x0E\x01\x08\x02\x2CDDat sloofje van de godin\n\x0E\x01\n\x04\x0BÍis er met de priesteres vandoor!")
/*< 81>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3342, 'param2': 3583, 'next': 63, 'param3': 13}
/*< 63>*/ 	printf("\x0E\x01\x08\x02\x1CDIk MOET die priesteres hebben om\nmijn meester te laten ontwaken!")
/*< 77>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 76, 'param3': 13}
/*< 76>*/ 	set_camera(9, 0)
/*< 64>*/ 	printf("Pfoe<pause05>.<pause05>.<pause05>.<pause05><pause0A> Ik liet me een beetje meeslepen. Ik heb\nweinig geduld voor mormels die mijn zorgvuldig\nuitgedachte plannen in het honderd laten lopen.\nZo ben ik nu eenmaal...\n\x0E\x01\x09\x04\xD08\x5FFMaar de dag is nog niet voorbij en het is een\ngeluk bij een ongeluk dat jij hier ook heen bent\ngewaggeld. Erg lief dat je me nu wat vermaak\nkomt bieden.")
/*< 67>*/ 	set_camera(3, 0)
/*< 61>*/ 	printf("\x0E\x01\x09\x04\xD0A\x5FFEr is iemand aan wie ik je wil voorstellen.\nIemand die er net als ik enorm van geniet om\npijn aan te richten.")
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3335, 'param2': 1535, 'next': 68, 'param3': 13}
/*< 68>*/ 	set_camera(4, 0)
/*< 62>*/ 	printf("Kom, wees maar niet bang. Mijn vurige vriend\nkan niet wachten om je een warme knuffel\nte geven.")
/*< 47>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3337, 'param2': 1791, 'next': 69, 'param3': 13}
/*< 69>*/ 	set_camera(5, 0)
/*< 53>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 65, 'next': 48, 'param3': 6}
/*< 48>*/ 	story_flags[189 /* us: 805A9AE9 0x10, jp: 805ACD69 0x10 */] = true;
/*< 83>*/ 	story_flags[748 /* us: 805A9B29 0x10, jp: 805ACDA9 0x10 */] = false;
/*< 55>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*< 84>*/ 	switch (scene_flags[28 /* 0x2 10 */]) {
          	  case 0:
/*< 85>*/ 		zone_temp_flags[3 /* 0x1 08 */] = true;
          		flw_57:
/*< 57>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 86>*/ 		scene_flags[14 'Eldin: Earth Temple'][28 /* 0x2 10 */] = true;
          		goto flw_57
          	}
          }

          void entrypoint_301_10() {
/*< 41>*/ 	start()
/*< 42>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMeester, ik neem sporen van Zelda's aura\nwaar in dit gebied.")
/*< 44>*/ 	set_camera(1, 0)
/*< 43>*/ 	printf("De energiesporen op deze ketting zijn\nbijzonder sterk. Ik acht het 95% zeker\ndat Zelda hier onlangs vastgeketend zat.")
/*< 45>*/ 	set_camera(-1, 0)
/*< 46>*/ 	printf("Ik kan enkel concluderen dat Zelda daarna\nontsnapt is en vervolgens dit pad heeft\ngenomen. Ik raad u aan om haast te\nmaken.")
          }

