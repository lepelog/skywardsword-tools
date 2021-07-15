          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf("")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	check_item_flag(505, 2)
/*<149>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 27>*/ 		check_item_flag(505, 3)
/*< 28>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          		  case 0:
/*< 24>*/ 			check_item_flag(505, 4)
/*< 25>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 2}) {
          			  case 0:
/*< 21>*/ 				check_item_flag(505, 5)
/*< 22>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          				  case 0:
/*<151>*/ 					printf("Je hebt het laatste <y<stuk van de sleutel>>! Je\nkunt nu de deur van de tempel openen.\n\n\nHaast je terug naar de bergtop en de deur van\nde tempel zodat je je zoektocht naar Zelda\nkunt vervolgen. Zij moet ergens diep in de\ngewelven van de tempel te vinden zijn!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("Dat is het vierde <y<stuk van de sleutel>>!\nVerzamel alle vijf de stukken om de sleutel\nvoor de deur van de tempel te voltooien. Ga\nsnel op zoek naar dat <r<laatste stuk>>!")
          				}
          			  case 1:
/*< 26>*/ 				printf("Je hebt het derde <y<stuk van de sleutel>>!\nVerzamel alle vijf de stukken om de sleutel\nvoor de deur van de tempel te voltooien. Nog\nmaar <r<twee stukken>> te gaan!")
          			}
          		  case 1:
/*< 29>*/ 			printf("Je hebt het tweede <y<stuk van de sleutel>>!\nVerzamel alle vijf de stukken om de sleutel\nvoor de deur van de tempel te voltooien. Je\nhebt nog <r<drie stukken>> te gaan!")
          		}
          	  case 1:
/*<150>*/ 		printf("Je hebt het eerste <y<stuk van de sleutel>>! Je hebt\nalle vijf de stukken nodig om de sleutel voor\nde deur van de tempel te repareren. Zoek snel\nde andere <r<vier stukken>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("Je hebt een <y<oefenzwaard>>! Dit is waar de\nstudenten van de ridderacademie mee trainen.\nDe kling is best scherp!\n\nDruk wanneer je wilt op \x0E\x02\x04\x02\x3CD om de\nvoorwerpen te bekijken die je bij je draagt.\x0E\x01\x11\x02\x3CD")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	check_item_flag(95, 1)
/*<222>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*<224>*/ 		check_item_flag(96, 1)
/*<225>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*<582>*/ 			printf("Je hebt de <y+<<item61>>>! De Triforce\nis lang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("Je hebt de <y+<<item61>>>! De Triforce\nis lang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<537>*/ 			printf("Nog <r<één>> stuk te gaan!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("Je hebt de <y+<<item61>>>! De Triforce\nis lang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<536>*/ 			printf("Nog <r<twee>> stukken te gaan!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("Je hebt de <y<vervloekte medaille>>! Dankzij deze\nmedaille zul je meer rupees en schatten\nvinden, maar je kunt je buidel niet openen\nzolang je de medaille bij je hebt!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<268>*/ 		printf("Je hebt nu een <y<gepantserd schild>>! Dankzij het\nenorm harde metaal is dit het sterkste ijzeren\nschild dat er is.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("Je hebt een <y<kwaadaardig kristal>>! Dit massieve\nbrok gekristalliseerde monsterhaat is extreem\nzeldzaam!")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf("")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf("Je hebt elke <y<traan van Nayru>> verzameld!\n\x0E\x03\x01\x00Link is nu spiritueel sterker! \n\n\nDe proef is pas voorbij zodra je Nayru's Rijk\nder Stilte verlaat. Wees voorzichtig op weg\nnaar de uitgang, zodat je een bewijs van je\nspirituele groei kunt verzamelen.")
          	  case 1:
/*<447>*/ 		printf("Je hebt een <y<traan van Nayru>>! De kracht die\nvan dit voorwerp uitgaat, kan Hoeders voor\n<r<90 seconden>> uitschakelen. Verzamel er <r<15\n>>om de proef te volbrengen!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf("")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf("Je hebt de <y<gouden sculptuur>>! Dit vreemde\ngouden kunstwerk is bedekt met mysterieuze\npatronen.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("Je hebt het <y<godinnenzwaard>>! Het zwaard lijkt\nte gloeien met het mysterieuze licht van de\ngodin.\n\nHerinneringen aan het heetst van de strijd\nkolken in dit zwaard rond wanneer je het\nten hemel heft. <pling>Je <r<hemelstraal brengt nu\nmaximale schade toe>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("Je hebt het <y<godinnenzwaard>>! Het zwaard lijkt\nte gloeien met het mysterieuze licht van de\ngodin.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("Je hebt de <y<oude zeekaart>>! Op deze oude kaart\nis te zien hoe dit gebied er lang geleden uit-\nzag, lang voordat de zeeën opdroogden en\nwoestijn werden.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("Je hebt nu de <y<multikatapult>>! Je schoten\ndekken een groter bereik. Houd \x0E\x02\x04\x02\x29CD ingedrukt\n voor een krachtiger schot.\x0E\x01\x11\x02\xFCD")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("Je hebt een <y<heilig schild>>! De goddelijke\nkracht van dit schild repareert het schild\nwanneer het beschadigd raakt en beschermt\nhet tegen vuur, elektriciteit en vloeken.")
          		  case 1:
/*<673>*/ 			printf("Je hebt een <y<heilig schild>>! De goddelijke\nkracht van dit schild <r<repareert het schild\nlangzaam >>als het beschadigd raakt.\n\nHet schild gaat vrij snel kapot, maar het\nbeschermt je tegen vuur, elektrische aanvallen\nen vloeken!")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("Je hebt een <y<blauwe vogelveer>>! Maar weinig\nkleine vogels hebben zulke hemelsblauwe\nveren, waardoor ze extreem zeldzaam zijn.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf("")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf("Je hebt elke <y<godinnentraan>> verzameld!\n\x0E\x03\x01\x00Link, je bent nu spiritueel sterker! \n\n\nDe proef is pas voorbij zodra je het Rijk der Stilte\nverlaat. Wees voorzichtig op weg naar de\nuitgang, zodat je een bewijs van je spirituele\ngroei kunt verzamelen.")
          	  case 1:
/*<442>*/ 		printf("Je hebt een <y<godinnentraan>>! De kracht die\nvan dit voorwerp uitgaat, kan Hoeders voor\n<r<90 seconden>> uitschakelen. Verzamel er <r<15\n>>om de proef te volbrengen!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf("")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf("")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf("Je hebt een <y<lichtvrucht>>! Dit eigenaardige\nfruit laat <r<30 seconden>> lang lichtstralen\nverschijnen op de locaties van godinnen-\ntranen.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("Je hebt een <y<geneesdrankje ++>>! Dit krachtige\nelixer <r<herstelt al je hartjes >>in één keer en het\nflesje bevat <r<twee >>porties!")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("Je hebt je <y<<item63> >>terug!\nGebruik ze om een ontsnapping te plannen\nwaar een Mogma nog een puntje aan kan\nzuigen.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("Je hebt de <y<<item63>>>! Van dit stel\ngraafhandschoenen zullen zelfs de Mogma's\nonder de indruk zijn!\n\nJe kunt hiermee gaten graven, die je ook kunt\n<g<gebruiken om je onder de grond voort te\nbewegen>>. Ga op zoek naar gaten die geschikt\nzijn voor het graven van een tunnel!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf("")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<278>*/ 		printf("Je hebt nu een <y<goddelijk schild>>! Dit\nmysterieuze schild repareert zichzelf en gaat\nminder snel kapot.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("Je hebt nu het <y<grote insectennet>>! Dit net is\ntwee keer zo groot als het normale net zodat\nje zelfs de snelste insecten makkelijk kunt\nvangen!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("Je hebt een <y<gouden schedelsieraad>>! Deze\nschedelsieraden van glanzend goud zijn een\nstuk zeldzamer dan standaardschedelsieraden.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("Je hebt nu de <y<brief van Kol>>! Het is\nnauwelijks voor te stellen, maar in deze\nbrief laat Kol daadwerkelijk zijn gevoelige\nkant zien...\nZorg ervoor dat je dit stuk papier niet per\nongeluk als een stuk vuil behandelt!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("Je hebt een <y<weerstandsdrankje>>! Dit eigen-\naardige drankje voorkomt de helft van alle\nschade die je normaal op zou lopen! Dit\ndrankje werkt <r<drie minuten>> lang.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("Je hebt een <y<dankbaarheidskristal>> gevonden!\nDeze kristallen ontstaan wanneer iemand zich\nzo dankbaar voelt dat de dankbaarheid\nspontaan kristalliseert.\nVerzamel deze kristallen en breng ze naar\n<b<Vleros>>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("Je hebt het <y<drakenbeeld>>! Dit sprankelende\ngouden beeldje heeft de vorm van een\nopgerolde draak.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("Je hebt het <y<gezegende Meesterzwaard>> terug!\nJe kunt eindelijk weer knopen én vijanden\ndoorhakken! En je kunt weer met <pling><b<Fi>> praten.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf("")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf("")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf("")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<277>*/ 		printf("Je hebt nu een <y<godinnenschild>>! Dit schild\nrepareert zichzelf met zijn heilige krachten\nen is zelfs nog steviger dan de andere versies\nvan het schild.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>> gekregen! Er\nwordt beweerd dat deze insecten zich eens in de\ntien jaar massaal voortplanten en daarna elke\nplant opeten die ze maar kunnen vinden.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>> gevangen! Er\nwordt beweerd dat deze insecten zich eens in\nde tien jaar massaal voortplanten en daarna\nelke plant opeten die ze maar kunnen vinden.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("Je hebt een <y<godinnenpluim>>! Men zegt dat de\ngodin deze pluimen lang geleden achterge-\nlaten heeft in onze wereld. Zo'n legendarische\nschat zie je maar zelden!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("Je hebt nu <y<Beedles insectenkooi>>... met daarin\nBeedles goede kevervriend! Haast je om de\ntwee te herenigen!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf("")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf("")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf("Je hebt een <y<weerstandsdrankje +>>! Dit\nkrachtige drankje voorkomt <r<drie minuten\n>>lang alle schade die je normaal zou oplopen.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("Je hebt je <y<windkruik>> terug! Je kunt weer naar\nhartenlust blazen tegen wat je maar wilt!")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("Je hebt de <y<windkruik>>! Dit oude en\nmysterieuze werktuig kan een eindeloze\nwindvlaag voortblazen.")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("Je hebt een <y<eeuwenoude schakeling>>! Dit\nvreemde voorwerp is gemaakt van glanzend\ngoud. Het lijkt ergens in te passen en is\nbedekt met een elektronisch circuit.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf("")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf("")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf("Je hebt nu een <y<middelgrote beurs>>! Deze flink\ngrote beurs laat je wel <r<500 rupees >>bij je\ndragen!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("Je hebt het <y<Hyliaanse schild>>! Dit legen-\ndarische schild bevat een heldhaftige kracht,\ndie het schild totaal onverwoestbaar maakt!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>> gekregen!\nVerzamelaars boenen de schilden van deze\nkevers regelmatig op om ze sterker te maken.\nDit is het sterkste insect dat er is.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>> gevangen!\nVerzamelaars boenen de schilden van deze\nkevers regelmatig op om ze sterker te maken.\nDit is het sterkste insect dat er is.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("Je hebt een <y<oplapdrankje ++>>! Dit drankje\nherstelt <r<automatisch >>je schild wanneer dat\nkapot gaat en herstelt <r<acht >>hartjes. Dit\ndrankje is twee keer bruikbaar!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("Je hebt een <s<zilveren rupee>>! Die is wel <r<100\nrupees>> waard! Met zoveel glitter en glamour\nzul je je vast een ster voelen.")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("Je hebt een <y<energiedrankje>>! Je energiemeter\nloopt minder snel leeg wanneer je dit drankje\ndrinkt! Het effect duurt <r<drie minuten>>.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("Je hebt nu een <y<grote beurs>>! Met deze uit de\nkluiten gewassen beurs kun je <r<1000 rupees >>bij\nje hebben.")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("Je hebt een <y<oplapdrankje>>! Dit drankje\n<r<vult je schildmeter volledig>> en geneest\nbovendien <r<vier >>hartjes! ")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>> gekregen! Het gif\nvan deze insecten wordt gebruikt om een\nkrachtig geneesmiddel te maken. Pas op dat je\nniet door een boze zwerm wordt aangevallen!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>> gevangen! Het\ngif van deze insecten wordt gebruikt om een\nkrachtig geneesmiddel te maken. Pas op dat je\nniet door een boze zwerm wordt aangevallen!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("Je hebt nu een <y<rammelaar>>! Is iemand dit\nkinderspeeltje misschien kwijt?")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("Je hebt wat <y<hete pompoensoep>>! Deze\nspecialiteit van De Oranje Poen is door Bhas\ngemaakt. Laat de soep niet koud worden, hij\nblijft maar<r< vijf minuten >>warm!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("Je hebt de <y<waterdrakenschub>>! Dit heilige\ngeschenk van de godin geeft je het vermogen\nom onder water op ontdekking te gaan en een\nwaterbooraanval uit te voeren!")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("Je hebt de <y<kerkerkaart>>! Deze kaart laat je\nzien waar ruimtes zich ten opzichte van elkaar\nbevinden en waar er ruimtes zijn die je nog\nniet hebt verkend.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("Hij toont je ook de locaties van kisten, dus\nwerp er zo nu en dan een blik op!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("Je hebt een <y+<gouden rupee>>! Deze is een\nongelofelijke <r<300 rupees>> waard! Ssst... Loop\nniet zo met je rijkdom te koop!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("Je hebt een <y<energiedrankje +>>! Dit bijzondere\nbrouwsel zorgt ervoor dat je energiemeter\n<r<drie minuten>> lang niet leegloopt!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("Je hebt een <y<oplapdrankje +>>! Dit krachtige\nelixer repareert <r<automatisch >>je schild wanneer\nhet kapot gaat en herstelt maar liefst <r<acht\n>>hartjes!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>> gekregen!\nDeze killers gebruiken hun scherpe kaken om\nhun prooi te vangen. Je komt ze vooral boven\nde wolken tegen.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>> gevangen!\nDeze killers gebruiken hun scherpe kaken om\nhun prooi te vangen. Je komt ze vooral boven\nde wolken tegen.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("Je hebt <y<hoornaarlarven>>! Deze larven,\nafkomstig uit een nest van Deku-hoornaars,\nzijn een goede bron van eiwitten. Wellicht\nkomt dit van pas wanneer je iets wilt maken.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf("")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf("")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf("")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf("")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf("Je hebt een <black<pechrupee>>! O, nee! Dat kost je <r<10\nrupees>>. Wat een pech...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("Je hebt de <y<spirituele bloem>>! Deze mysterieuze\nplant toont je een weerspiegeling van je ziel,\nLink.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("Je hebt een <y<zuurstofdrankje>>! Het drinken van\ndit drankje zorgt ervoor dat je zuurstofmeter\nlangzamer leegloopt. Dit effect duurt <r<drie\nminuten>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("Je hebt nu een <y<enorme beurs>>! In deze\ngigantische portemonnee kun je wel <r<5000\nrupees >>kwijt!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("Je hebt nu de <y<kleine zaadjeszak>>! Hiermee kun\nje overal 10 extra <item39> mee naartoe\nnemen. Neem dit zakje zeker mee wanneer je\nje katapult wil gaan gebruiken!")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>> gekregen! Deze\ninsecten krijgen hun intens rode kleur van de\nmineralen die ze eten. Ze zijn langzaam en\nbewegen zich maar zelden.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x7CD >>gevangen!\nDeze insecten krijgen hun intens rode kleur\nvan de mineralen die ze eten. Ze zijn lang-\nzaam en bewegen zich maar zelden.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xFCD>>! Deze veren zijn\nafkomstig van vogels die niet op Skyloft\nvoorkomen. Ze worden veelal gebruikt om\nallerlei dingen van te maken.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("Je hebt de <y<levensboomzaailing>> opgegraven!\nAls je de zaailing hier zou planten, zou het te\nlang duren voor de boom volgroeid is.\nMisschien moet je een ander plekje vinden...")
          	  case 1:
/*<490>*/ 		printf("Je hebt de <y<levensboomzaailing>>! Deze jonge\nzaailing zal op een dag in een legendarische\nboom veranderen, waarvan wordt gezegd dat\nde vruchten elke ziekte kunnen genezen.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		check_item_flag(105, 1)
/*<598>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 96}) {
          		  case 0:
/*<599>*/ 			printf("Je hebt je <y<multikatapult >>terug! Breng\npatrouillerende vijanden tot stilstand door ze\nhiermee te raken.")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("Je hebt je <y<katapult >>weer terug! Breng\npatrouillerende vijanden tot stilstand door ze\nhiermee te raken.")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("Je hebt de <y<katapult>>! Daarmee kun je Deku-\nzaadjes op je vijanden afvuren. De harde\nzaadjes brengen de vijanden tot stilstand.")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("Je hebt <r<vijf>> <y<dankbaarheidskristallen>>! Deze\nkristallen bestaan uit massieve, gekristal-\nliseerde dankbaarheid.\n\nEr moet flink wat dankbaarheid nodig\ngeweest zijn om deze <r<vijf kristallen>> te\nvormen! Is het niet fijn om mensen te\nhelpen?")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf("")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf("Er is hier niets te vinden!")
          	  case 1:
/*<596>*/ 		printf("Het is niet beleefd om zonder toestemming in\niemands kastjes te rommelen...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("Je hebt een <y<zuurstofdrankje +>>! Dit geweldige\ndrankje zorgt ervoor dat je zuurstofmeter\n<r<drie minuten >>lang niet leegloopt.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("Je hebt nu de <y<zakenbeurs>>! Geen portemonnee\nkan op tegen deze joekel van een beurs, want\nhij biedt ruimte voor wel <r<9000 rupees>>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("Je hebt nu de <y<middelgrote zaadjeszak>>! Hier\npassen wel <r<20>> extra <item39> in! Zorg dat\nje dit zakje meeneemt wanneer je je katapult\ngaat gebruiken!")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>> gekregen! Deze\ninsecten komen in alle streken voor. En heel\nsoms kun je ze ook op vreemde plekken\ntegenkomen.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>> gevangen! Deze\ninsecten komen in alle streken voor. En heel\nsoms kun je ze ook op vreemde plekken tegen-\nkomen.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("Je hebt een bundel <y<tuimelkruid>> te pakken!\nDeze bundel van opgedroogd plantaardig\nmateriaal kan nog eens van pas komen. Je\nkunt hem dus net zo goed meteen meenemen.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("Je hebt de <y<steen der beproeving>>! Er staan\nmysterieuze symbolen in deze steen gekrast\ndie de held naar de geheime locatie van de\nTriforce moeten leiden!")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("Je hebt de <y<levensboomvrucht>>! Deze vrucht\ngeneest elke ziekte. Breng de vrucht naar de\ndonderdraak!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("Je hebt de <y<kever>>! Dankzij de onverklaarbare\nkracht in dit insectvormige voorwerp laat het\nzich besturen terwijl het door de lucht vliegt.\n\nRicht de cursor op een bestemming en druk\nop \x0E\x02\x04\x02\x29CD om de kever op weg te sturen.\x0E\x01\x11\x02\xFCD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("Je hebt wat <y<glinsterende sporen>>! Dit\nmateriaal is afkomstig van lichtgevende\npaddenstoelen.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("Je hebt de <y<boog>>! Nu kun je je doelen ook van\nver weg raken. Pijlen richten bovendien meer\nschade aan dan Deku-zaadjes.")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("Je hebt een <y<kleine sleutel>>! Gebruik deze\nsleutel om een deur te openen die op slot zit.\nHij is alleen bruikbaar in dit gebied.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("Je hebt nu een <y<insectenmedaille>>! Gebieden\nwaar zich insecten bevinden, staan nu met\n\x0E\x02\x04\x02\x1ACD op je kaart aangegeven! Bekijk je kaart\nom te zien waar de insecten uithangen.")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("Je hebt een <y<fee>>! Dit speelse wezentje vult <r<zes\n>>van je hartjes aan!\n\n\nAls je deze fee in een fles bewaart en overal\nmee naartoe neemt, dan komt hij je <r<auto-\nmatisch >>te hulp als je <r<hartjes op zijn>>.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("Je hebt je <y<buidel >>terug! En kijk! Je spullen zitten\ner nog allemaal in!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("Je hebt nu de <y<buidel>>! Bewaar allerlei handige\nvoorwerpen in deze buidel tot ze van pas komen.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>> gekregen! Deze\nmieren bewaren diep in hun nesten een water-\nvoorraad om in de ziedende hitte van de\nwoestijn te kunnen overleven.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>> gevangen! Deze\nmieren bewaren diep in hun nesten een water-\nvoorraad om in de ziedende hitte van de\nwoestijn te kunnen overleven.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("Je hebt een <y<<itemA4>>>! Dit is een staart\nvan een enorme hagedis, met een stekelig\nuiteinde. Ja, het is smerig, maar je weet nooit\nwanneer zoiets van pas komt.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("Je hebt nu de <y<extra beurs>>! Hiermee kun je\nnog eens <r<300 extra rupees>> meenemen!")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("Je hebt nu een <y<net>>! Gebruik dit net om\ninsecten en andere kleine dingen te vangen.\nBenader insecten voorzichtig en sla snel toe.")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("Je hebt wat <y<water>>! Het is maar gewoon water,\nmaar misschien komt het nog ergens van pas.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("Je hebt een <g+<groene rupee>>! Deze is slechts <r<1\nrupee>> waard, dus vind er zoveel mogelijk!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("Je hebt je <y<buidel >>groter gemaakt. Nu is er nog\nmeer ruimte in je buidel voor voorwerpen!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("Je hebt nu de <y<grote zaadjeszak>>! Hier passen\nwel <r<30 >>extra <item39> in! Zorg dat je dit\nzakje meeneemt wanneer je je katapult gaat\ngebruiken!")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xACD>> gekregen! De larven\nvan deze soort blijven soms wel meer dan\n10 jaar lang onder de grond. Ze zijn dan ook\nlastig te vangen!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xACD>> gevangen! De larven\nvan deze soort blijven soms wel meer dan 10\njaar lang onder de grond. Ze zijn dan ook\nlastig te vangen!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("Je hebt <y<<itemA5>>>! Dit keiharde materiaal\nglinstert fel. Het heeft bovendien allerlei\nnuttige toepassingen.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf("")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf("Je hebt een <y<fee>>! Dit speelse wezentje vult <r<zes\n>>van je hartjes aan!\n\n\nJe hebt echter geen <y<fles>> bij je, dus deze fee zul\nje helaas moeten laten gaan.")
          	  case 1:
/*<505>*/ 		printf("Je hebt een <y<fee>>! Dit speelse wezentje vult <r<zes\n>>van je hartjes aan!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("Je hebt wat <y<paddenstoelsporen>>! Deze sporen,\ndie afkomstig zijn van een enorme padden-\nstoel, kunnen de wonden van vogels genezen.")
          	  case 1:
/*< 36>*/ 		printf("Je hebt <y<paddenstoelsporen>>! Deze sporen zijn\nafkomstig van een enorme paddenstoel.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf("")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf("Je hebt je <y<grijpklauwen>> terug! Nu kun je weer\nop moeilijk te bereiken plekken komen.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("Je hebt de <y<grijpklauwen>>! Dankzij dit heilige\ngeschenk kun je gebieden verkennen die eerst\nbuiten je bereik lagen.\n\nRicht op speciale <r<doelwitten>> en vuur de\nklauwen af. De kettingen zullen je naar je\ndoelwit toe trekken.")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("Je hebt een <b+<blauwe rupee>>! Die is <r<5 rupees\n>>waard. Stop hem maar snel in je beurs.")
          	  case 1:
/*< 84>*/ 		printf("Je hebt een <b+<blauwe rupee>>! Die is <r<5 rupees\n>>waard. Stop hem maar snel in je beurs.")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("Je hebt een <y<levensmedaille>>! Zolang je deze\nmedaille bij je hebt, heb je <r<één >>hartje meer\ndan normaal. Neem de medaille mee wanneer\nje dat extra hartje nodig hebt.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("Je hebt nu een <y<kleine pijlkoker>>! Je kunt nu <r<5\n>>extra pijlen meenemen. Als je van plan bent je\npijl-en-boog te gebruiken, vergeet deze dan\nniet mee te nemen!")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>> gekregen! Deze\nbeeldschone insecten hebben ogen zo mooi als\nrupees en vleugels zo doorzichtig als glas!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>> gevangen! Deze\nbeeldschone insecten hebben ogen zo mooi als\nrupees en vleugels zo doorzichtig als glas!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("Het is een <y<oerbloem>>! Volgens de legendes\nwerd deze beeldschone bloem vroeger veel\ngezien. De bloem geeft zachtjes licht in het\ndonker.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("Je hebt de <y<graafhandschoenen>>! Gebruik deze\nklauwen om zachte grond om te spitten.\n\n\nAls je ergens een aanwijzing ziet dat er op een\nplek misschien iets begraven ligt, druk dan op\n(A) om de klauwen te gebruiken.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("Je hebt het <y<vogelbeeldje>>! Dit beeldje bewijst je\noverwinning bij de Vleugelceremonie. Zelda\nzal heel blij zijn wanneer ze dit beeldje in jouw\nhanden ziet!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("Je hebt een <r+<rode rupee>>! Die is <r<20 rupees\n>>waard. Wees er zuinig op!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("Je hebt nu een <y<ijzeren boog>>! Deze boog is\nspeciaal ontworpen voor ervaren boog-\nschutters en pijlen die ermee afgeschoten\nworden, gaan harder en verder!")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("Je hebt nu de <y<middelgrote pijlkoker>>! Je kunt\nnu <r<10 >>extra pijlen meenemen. Als je van plan\nbent je pijl-en-boog te gebruiken, vergeet deze\ndan niet mee te nemen!")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("Je hebt een <y<barnstenen amulet>>! Deze amber-\nkleurige sieraden zijn op allerlei plekken te\nvinden, maar niemand weet hoe ze aan die\nvreemde vorm komen.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf("")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf("Je hebt <y<5 <item39>>>! Je kunt deze als\nmunitie gebruiken voor je katapult. Zorg dat\nje er altijd een paar bij de hand hebt!")
          	  case 1:
/*<398>*/ 		printf("")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf("")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf("De <y+<<item05> >>is compleet! Met deze nieuwe\nkracht kun je Zelda's droom verwezenlijken\nen <b<Fatalot>> voorgoed <r<verslaan>>.")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf("Je hebt <y<heilig water>>! Het lijkt misschien\nnormaal water, maar dit bijzonder zuivere\nwater zit vol krachtige energie.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("Je hebt wat <y<heilig water>>! Dit zeer zuivere\nwater kan de wonden van de waterdraak\ngenezen. Deze mystieke eigenschappen komen\nniet voor in gewoon water.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("Je hebt nu de <y<heilige boog>>! Laat het pijlen\nregenen op je vijanden met de heilige kracht\nvan de godin.")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<262>*/ 		printf("Je hebt nu een <y<houten schild>>! Dit lichte schild\ngaat makkelijk kapot en kan verbranden, dus\nwees voorzichtig.")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("Je hebt nu de <y<grote pijlkoker>>! Je kunt nu <r<15\n>>extra pijlen meenemen. Als je van plan bent je\npijl-en-boog te gebruiken, vergeet deze dan\nniet mee te nemen!")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>> gekregen! Deze\ninsecten gebruiken hun kleine lichaampjes\nom een grote bal... te rollen. Het is erg\naandoenlijk om ze zo hard te zien werken.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>> gevangen! Deze\ninsecten gebruiken hun kleine lichaampjes om\neen grote bal ... te rollen. Het is erg aan-\ndoenlijk om ze zo hard te zien werken.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("Je hebt een <y<droomamulet>>! Dit voorwerp lijkt\nop de barnstenen amulet, maar is absoluut\nniet hetzelfde. Deze amulet is ook nog eens\nveel zeldzamer.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("Je hebt <y<<item28>>>! Gooi ze of rol ze om\nmassieve objecten op te blazen. Zorg dat je ze\nopraapt en meeneemt als je ze ergens tegen-\nkomt.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("Je hebt een <y<hartje>>! De genezende kracht van\ndit voorwerp herstelt een van je hartjes.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("Je hebt je <y<bommenzak >>terug! Het is tijd om\niets op te blazen.")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("Je hebt een <y<bommenzak>>! <b<Lóhd>> heeft gezegd\ndat hij nu van jou is, dus zorg dat je hem niet\nkwijtraakt en maak er goed gebruik van.")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("Je hebt een <y<bommenzak>>! Gebruik deze zak\nom bommen op te bergen en ze later te\ngebruiken.\n\nMet behulp van bommen kun je nu op plekken\nkomen waar je nog niet eerder geweest bent.\nVraag <b<Lóhd >>of je de bommenzak mag lenen!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("Je hebt nu de <y<grijpschaarkever>>! Gebruik de\ngrote grijpscharen om dingen op te tillen en\nte verplaatsen!\n\nDruk op (Z) terwijl je een voorwerp beet hebt\nom omlaag te kijken en om het voorwerp te\nlaten vallen. Bommen los!\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<261>*/ 		printf("Je hebt nu een <y<omboord schild>>! Dit schild is\nveel steviger dan het simpele houten schild en\nkan beter tegen een stootje.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("Je hebt nu een <y<kleine bommenzak>>! Hierin kun\nje <r<5 >>extra bommen kwijt, dus neem deze met\nje mee als je een explosief avontuur wilt\nbeleven.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>> gekregen! De\nkinderen op Skyloft zijn dol op deze insecten.\nPas wel goed op je vingers, want ze kunnen\nhard knijpen!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>> gevangen! De\nkinderen op Skyloft zijn dol op deze insecten.\nPas wel goed op je vingers, want ze kunnen\nflink hard knijpen!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("Je hebt <y<monstergelei>>! Dit lijkt misschien op\neen saai hoopje slijm, maar je kunt er van\nalles mee maken!")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf("")
          	  case 1:
/*<456>*/ 		printf("")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf("Je hebt de <y<Ballade van de Godin>> geleerd!\nDeze mysterieuze melodie is overgeleverd uit\nlang vervlogen tijden.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("Je hebt <y<<item29>>>! Gooi ze of rol ze ergens\ntegenaan om iets op te blazen. Stop ze maar\nsnel in je bommenzak!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf("")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf("Je hebt een <y<pijl>>! Met een boog kun je deze\nopnieuw gebruiken, dus het zou zonde zijn\nhem te laten liggen.")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("Je hebt een <y<extra hartje>>! Je maximale aantal\nhartjes is nu met <r<één >>toegenomen en je hartjes\nzijn volledig hersteld!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("Je hebt nu de <y<turbokever>>! Deze vliegt sneller\ndan de standaardkever, maar kijk uit waar je\nvliegt!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("Je hebt de <y<hartmedaille>>! Wanneer je deze\nmedaille bij je hebt, verschijnen hartjes zelfs\nwanneer de <r<Heldenstand>> geactiveerd is.\n\nDe medaille brengt ook hartsbloemen tot\nbloei. Als je bang bent dat je niet genoeg\nhartjes zult hebben, neem deze medaille dan\nmet je mee!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("Je hebt een <y<hartmedaille>>! Zolang je deze\nmedaille bij je hebt, zul je vaker hartjes tegen-\nkomen op je reis.\n\nAls je bang bent dat je niet genoeg hartjes zult\nhebben, neem deze medaille dan met je mee!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<260>*/ 		printf("Je hebt nu een <y<beslagen schild>>! Dit extra\nversterkte schild is vele malen steviger dan\nhet houten schild.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("Je hebt nu de <y<middelgrote bommenzak>>!\nHierin kun je <r<10 >>extra bommen kwijt, dus\nneem deze met je mee als je een explosief\navontuur wilt beleven.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xECD>> gekregen! Deze\ninsecten zijn zeer zeldzaam en komen enkel\nop donkere plekken voor.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("Je hebt <numeric arg0> <y<\x0E\x03\x04\x02\xECD>> gevangen!\nDeze insecten zijn zeer zeldzaam en komen\nenkel op donkere plekken voor.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf("")
          	  case 1:
/*<461>*/ 		printf("")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf("")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf("Je hebt een <y<energievrucht>>! Deze eigenaardige\nvrucht vult je energiemeter weer aan!")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("Je hebt het <y<priestersbeeld>>! Dit uit hout\ngesneden beeld lijkt dankbaarheid uit te\nstralen. Het beeld lijkt ook erg op een stenen\nbeeld dat op de bovenste verdieping staat.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("Je hebt <y<<item08>>>! Gebruik deze met je boog.\nRicht goed, want je pijlkoker kan ook leeg\nraken.")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("Je hebt nu de <y<pantserkever>>! Je kever kan nu\nverder vliegen dan ooit tevoren!")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	check_item_flag(489, 1)
/*<206>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          	  case 0:
/*<201>*/ 		check_item_flag(489, 2)
/*<202>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          		  case 0:
/*<198>*/ 			check_item_flag(489, 3)
/*<199>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<208>*/ 				printf("Je hebt een <y<hartstukje>>! Verzamel er vier om\neen extra hartje te ontvangen. Nog <r<één >>te\ngaan!")
          			  case 1:
/*<200>*/ 				printf("Je hebt een <y<hartstukje>>! Verzamel er vier om\neen extra hartje te ontvangen. Nog <r<twee >>te\ngaan!")
          			}
          		  case 1:
/*<203>*/ 			printf("Je hebt een <y<hartstukje>>! Verzamel er vier om\neen extra hartje te ontvangen. Nog <r<drie >>te\ngaan!")
          		}
          	  case 1:
/*<207>*/ 		printf("Je hebt een <y<hartstukje>>! Het hartje is nu\ncompleet, dus je krijgt een extra hartje!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("Je hebt de <y<rupeemedaille>>! Zolang je deze\nmedaille bij je hebt, zul je op mysterieuze wijze\nmeer rupees vinden. Neem deze medaille mee\nals je beurs leeg dreigt te raken!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<270>*/ 		printf("Je hebt een <y<ijzeren schild>>! Dit metalen schild\nkan goed tegen een stootje en zelfs tegen\nvuur, maar pas goed op voor elektrische\naanvallen!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("Je hebt nu de <y<grote bommenzak>>! Hierin kun\nje <r<15 >>extra bommen kwijt, dus neem deze met\nje mee als je een explosief avontuur wilt\nbeleven.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("Je hebt nu een <y<fles>>! Je kunt hier allerlei\nnuttige dingen in opbergen.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("Je hebt een <y<monsterklauw>>! Deze klauw ziet er\nextreem gevaarlijk uit, of was dat in elk geval\ntoen hij nog aan een monster vastzat!")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("Je hebt <y<10 <item39>>>! Deze zaadjes kun je\nals munitie gebruiken voor je katapult. Zorg\ndat je er altijd een paar bij je hebt!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("Je hebt elke <y<traan van Farore>> verzameld!\n\x0E\x03\x01\x00Link is nu spiritueel sterker! \n\n\nDe proef is pas voorbij zodra je Farores Rijk\nder Stilte verlaat. Wees voorzichtig op weg\nnaar de uitgang, zodat je een bewijs van je\nspirituele groei kunt verzamelen.")
          	  case 1:
/*< 45>*/ 		printf("Je hebt een <y<traan van Farore>>! De kracht die\nvan dit voorwerp uitgaat, kan Hoeders voor\n<r<90 seconden>> uitschakelen. Verzamel er <r<15\n>>om de proef te volbrengen!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("Je hebt de <y<mysterieuze kristallen>>! Deze klomp\nzachtjes gloeiende vierkante kristallen lijkt\neen paar kristallen te missen.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("Je hebt een <y<geneesdrankje>>! Bewaar het in je\nbuidel en gebruik het om maar liefst <r<acht\nhartjes>> te herstellen.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	check_item_flag(96, 1)
/*<210>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*<212>*/ 		check_item_flag(97, 1)
/*<213>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          		  case 0:
/*<580>*/ 			printf("Je hebt de <y+<<item5F>>>! De Triforce is\nlang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("Je hebt de <y+<<item5F>>>! De Triforce is\nlang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<532>*/ 			printf("Nog <r<één>> stuk te gaan!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("Je hebt de <y+<<item5F>>>! De Triforce is\nlang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<531>*/ 			printf("Nog <r<twee>> stukken te gaan!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("Je hebt de <y<schattenmedaille>>! Als je deze\nmedaille bij je hebt, zul je vaker schatten\nvinden. Het is het perfecte voorwerp om mee\nte nemen als je gaat schatzoeken!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("Je hebt je <y<zweep>> weer terug! Kijk eens goed\nom je heen, misschien is er iets dat je met je\nzweep kunt grijpen.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("Je hebt de <y<zweep>>! Aan de punt zit een\nvreemde, lichtgevende bol die zich rond\nverschillende dingen vast kan haken.\n\nAls je iets ziet waar je niet bij kunt,\nkun je erop focussen met (Z) om het te\ngrijpen met je zweep.\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("Je hebt een <y<monsterhoorn>>! Deze hoorn is\ngemaakt van een stevig bot, afkomstig van\neen dier. De hoorn komt misschien nog van\npas als materiaal.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf("")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf("")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf("")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf("Je hebt de <y<inktvissculptuur>>! Dit beeldje heeft\nde vorm van een inktvis met tentakels bedekt\nmet eigenaardige zuignappen.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("Je hebt een <y<geneesdrankje +>>! Dit verbeterde\ngeneesdrankje zal in één keer <r<al je hartjes\nherstellen>>.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	check_item_flag(95, 1)
/*<216>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*<218>*/ 		check_item_flag(97, 1)
/*<219>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*<581>*/ 			printf("Je hebt de <y+<<item60>>>! De Triforce\nis lang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("Je hebt de <y+<<item60>>>! De Triforce\nis lang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<535>*/ 			printf("Nog <r<één>> stuk te gaan!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("Je hebt de <y+<<item60>>>! De Triforce\nis lang geleden door de oude goden gecreëerd.\nDe <r<ultieme kracht>> van dit magische object kan\nelke wens doen uitkomen!")
/*<534>*/ 			printf("Nog <r<twee>> stukken te gaan!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("Je hebt de <y<drankjesmedaille>>! Het dragen van\ndit medaillon zorgt ervoor dat de effecten van\ndrankjes langer doorwerken. Vergeet niet\ngenoeg drankjes mee te nemen!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("Je schild is gerepareerd en ziet er weer zo\ngoed als nieuw uit!")
          	  case 1:
/*<269>*/ 		printf("Je hebt nu een <y<stalen schild>>! Dit zware schild\nkan nog meer klappen aan dan het ijzeren\nschild.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("Je hebt nu de <y<vuurwerende oorbellen>>!\nHiermee trotseer je zonder een druppeltje\nzweet de heetste vuren. Dit is één van de drie\nheilige geschenken van de godin.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("Je hebt een <y<schedelsieraad>>! Dit simpele,\nietwat duistere accessoire heeft de vorm van\neen symbool dat door Bokoblins gebruikt\nwordt.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf("")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf("Je hebt elke <y<traan van Din>> verzameld!\n\x0E\x03\x01\x00Link is nu spiritueel sterker! \n\n\nDe proef is pas voorbij zodra je Dins Rijk der\nStilte verlaat. Wees voorzichtig op weg naar\nde uitgang, zodat je een bewijs van je\nspirituele groei kunt verzamelen.")
          	  case 1:
/*<437>*/ 		printf("Je hebt een <y<traan van Din>>! De kracht die\nvan dit voorwerp uitgaat, kan Hoeders voor\n<r<90 seconden>> uitschakelen. Verzamel er <r<15\n>>om de proef te volbrengen!")
          	}
          }

