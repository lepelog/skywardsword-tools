          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x00\x04Je kunt 's nachts niet gaan vliegen. Geloof\nme nou maar.\n\n\nAls je niet kunt wachten om het luchtruim\nte kiezen, kun je beter snel in bed kruipen\ntot het weer licht is buiten.")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf("\x0E\x01\x09\x04\x00\x01Waaarom lig jij nog niet in je bed?!\n\n\n\n\x0E\x01\x09\x04\x0C\xC09Wat?! Wou je serieus met je Loftwing\ngaan vliegen?!\n\n\n\x0E\x01\x09\x04\x09\xC00Luister. Loftwings kunnen 's nachts voor\ngeen meter vliegen! Ze zijn nachtblind en\ner zijn maar een paar mensen in staat om\nze in het donker te besturen.\n\x0E\x01\x09\x04\x08\x400Je zult dus tot de ochtend moeten wachten\nvoordat je het luchtruim kunt kiezen.")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Hierbinnen zul je je vogel niet vinden,\ntenzij hij hier is om zich als student in te\nschrijven.\n\nIk zal het je zeggen als ik iets te weten\nkom. Ga jij maar buiten zoeken.")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06Loop je nou nog steeds rond in de\nacademie?!\n\n\n\x0E\x01\x09\x04\x0C\xC09Wat?!<pause14> Je Loftwing komt niet als je hem\nroept? \x0E\x01\x09\x04\x01\xC00Waarom zou een beschermvogel\nniet komen als je hem een signaal geeft?\n\nVan zoiets heb ik nog nooit gehoord. Ik\nheb geen idee wat er aan de hand kan\nzijn...\n\n\x0E\x01\x09\x04\x08\x400Maar als oudere student kan ik een\njongeling als jij niet in de steek laten!\n\n\n\x0E\x01\x09\x04\x0B\xC00Als jij op het grote plein gaat zoeken, dan\nvraag ik het wel even aan de mensen hier.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405<b<Pimmus>> de vogelexpert, dat ben ik! Laat\nhet me gerust weten als je ooit vragen\nhebt.")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Goeiemorgen, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x400Vandaag is dus de <r<Vleugelceremonie>>.\nBen je er klaar voor?\n\n\nDe anderen zijn aan het opwarmen op het\ngrote plein. Hoef jij dat niet te doen?\n\n\n\x0E\x01\x09\x04\x0B\x400Ergens snap ik het ook wel. Die <r<rode\nLoftwing>> van je kan zo goed vliegen dat\nje vast vol zelfvertrouwen bent over de\nrace!\nMijn vogel heeft vorige keer de race\ngewonnen, maar ik denk dat zelfs hij dat\nrode snelheidsmonster van je niet kan\nverslaan...\n\x0E\x01\x09\x04\x08\x400Natuurlijk hangt de snelheid van een\nvogel sterk af van de vaardigheden van de\nrijder.\n\nJa, ik weet aardig wat af van vogels. \x0E\x01\x09\x04\x0C\x405Als\nje ooit vragen hebt, dan kan ik, <b<Pimmus\n>>de vogelexpert, je vast en zeker helpen.")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<137>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<138>*/ 			printf("\x0E\x01\x09\x04\x00\x06<b<Pimmus>> is buiten bij de <r<trainingsruimte>>.\nJe weet wel, achter de ridderacademie.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Huh?<pause28> Waarom wil je weten waar <b<Ganderd>>\nis?\n\n\n\x0E\x01\x09\x04\x00\xD00Zorgt hij weer voor problemen?\n\n\n\nIk\x0E\x01\x09\x04\x0C\x400 heb geen idee waar hij nu kan zijn.\nWaarschijnlijk weet <b<Pimmus>> daar meer\nvan. Als ik jou was, zou ik het aan hem\nvragen.\n\x0E\x01\x09\x04\x08\xE04Toevallig wil hij jou ook spreken\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í dus ga\nhem maar zoeken bij de <r<trainingsruimte>>.")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x01\x406O! Jij bent het, Link... Je\nziet er nogal van slag uit. Is er iets mis?\n\n\n\x0E\x01\x09\x04\x08\xD00Wat?! <pause28>Kun je je Loftwing niet vinden?\n\n\n\n\x0E\x01\x09\x04\x0C\xD12Ehhh\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Ik heb geen idee waar hij kan zijn.\nIk ben al de hele dag op de academie.")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDZijn er geen mannen meer die de deur opendoen\nvoor een dame? Hoelang moet ik hier staan voor\neen beetje hoffelijkheid?! Bah...")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406O! Jij bent het, Link... Je\nziet er nogal van slag uit. Is er iets mis?\n\n\n\x0E\x01\x09\x04\x08\xD00Wat?! <pause28>Kun je je Loftwing niet vinden?\n\n\n\n\x0E\x01\x09\x04\x0C\xD12Ehhh\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Ik heb geen idee waar hij kan zijn.\nIk ben al de hele dag op de academie.")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\x900Als je de <r<ceremonie>> wint, kom je bij ons\nin de <r<hogere klas>> te zitten. Succes!")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Goeiemorgen, Link!\nSucces bij de <r<Vleugelceremonie>>\nzo meteen!\n\n\x0E\x01\x09\x04\x00\x400Denk je eens in. Als je de race wint, kom\nje bij ons in de <r<hogere klas>> te zitten en\nben je een stapje dichter bij je\n<r<ridderschap>>.\n\x0E\x01\x09\x04\x08\x900Dan krijg je ook net zo'n <r<ridderuniform>>\nals ik. Ik weet zeker dat dat je goed zal\nstaan!\n\n\x0E\x01\x09\x04\x0B\x713Al zal niemand er ooit zo goed uitzien in\neen uniform... als hij...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Jeetje, moet je dit ding toch eens zien.\nHoelang zou dit beeld hier al staan?\n\n\nEn het beeld heeft maar één oog. Ach,\ngossie... Hé, je wist dit waarschijnlijk al,\nmaar druk op (^) om rond te kijken!\x0E\x01\x11\x02\x8CD")
          }

          void entrypoint_100_30() {
/*<172>*/ 	start()
/*<173>*/ 	set_camera(30, 0)
/*<175>*/ 	set_camera(31, 0)
/*<174>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<152>*/ 	start()
/*<157>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<158>*/ 		printf("\x0E\x01\x09\x04\x00\x04HmmmMMM! Dat wordt weer een\nheerlijk, vers soepje!")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ik krijg een punthoofd van die jongen!\nHet eten is bijna klaar en hij is nergens\nte bekennen! Als hij het maar niet waagt\nom weer achter insecten aan te zitten!")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Hé, waar gaat dat heen? Als je mijn\nspullen meeneemt, kan ik niet werken!\n\n\n\x0E\x01\x09\x04\x00\x1200Maak af waar je voor gekomen bent en\nzorg dat je me niet voor de voeten loopt!")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x08\x909Ah! \x0E\x03\x01\x00Link! Dank je wel voor\nal je hulp! Ik ben zooo gelukkig dat het\ngoed is gekomen!\n\nMijn vriend gaat vanavond weer op\npatrouille. Niet omdat ze dat van hem\nvragen, maar omdat hij zelf mee wil\nhelpen...\n\x0E\x01\x09\x04\x0E\x90AIedere keer als ik aan hem denk, gaat\nmijn hart tekeer alsof ik net een trap op\nben gerend!")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Ik weet niet wat ik moet doen met die\nbrief van Kol!\n\n\n\x0E\x01\x09\x04\x0B\xE00Wat zal Pimmus wel niet denken als hij\nerachter komt?")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Wil je me spreken? Daar moeten we het\nmorgen dan maar over hebben, oké?")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf("\x0E\x01\x09\x04\n\xE57Hoe durf je zo laat bij een meisje naar\nbinnen te sluipen?!\n\n\nIk moet een bad nemen, dus maak dat je\nwegkomt, Link!\n\n\n\x0E\x01\x09\x04\x0C\xE14Ik wou dat de persoon in de badkamer\nook op zou schieten. Op deze manier kom\nik nooit aan mijn bad toe...")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Niet te geloven dat Zelda door de wolken-\nbarrière is gevallen. Normaal zijn haar\nvogel en zij op alles voorbereid...\n\n\x0E\x01\x09\x04\n\xD06Wat zeg je? Heb je een spook gezien?!\nWeet je zeker dat je je niet van de schrik\nrare dingen aan het inbeelden bent?")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02\x0E\x03\x01\x00Link!\x0E\x01\x0D\x02\x1906")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf("Als je naar het grote plein wilt, kom je er\nhet snelst via de deur op de begane grond.\n\n\n\x0E\x01\x09\x04\x09\x400De deur boven zit nog steeds op slot, dus\ndaar kom je er sowieso niet uit.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Waar blijft het eten? Ik ga zo maar eens\nkijken of de kokkin hulp nodig heeft.")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Luister. Als oudere student heb ik advies\nvoor je. Er is iets wat je altijd moet\nregelen voordat je iets gewaagds gaat\ndoen.\nHet is verstandig om eerst een vogelbeeld\nte zoeken en <r<tot de godin te bidden om je\nvoortgang op te slaan>>.\n\nZorg dat je daar een gewoonte van maakt!\nOp je kaart kun je zien waar <r<vogelbeelden>>\nstaan. Daarmee moet je ze dus makkelijk\nkunnen vinden.")
          		  case 1:
/*<278>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Wees voorzichtig als je naar de grot bij de\nwaterval gaat. Het stikt daar van de\nmonsters! Zorg in ieder geval dat je een\n<r<zwaard>> bij je hebt.\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍIk denk dat de<b< riddercommandant>> op het\nmoment in de trainingsruimte is.\nMisschien wil hij je wel een zwaard lenen!")
          		}
          	  case 1:
/*<102>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 31}
/*< 72>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 191, 'param3': 32}
/*<191>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 192, 'param3': 47}
/*<192>*/ 		set_camera(13, 0)
/*<193>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 195, 'param3': 15}
/*<195>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 194, 'param3': 16}
/*<194>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 70, 'param3': 48}
/*< 70>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x08\x401Hé, Link! Ik was net naar je\nop zoek!")
          			flw_71:
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ik heb mee lopen zoeken naar je Loftwing...\n\n\n\n\x0E\x01\x09\x04\x00\xC00En moet je horen wat ik heb ontdekt:\ntoen ik Federik vroeg of hij wat wist,\nreageerde hij heel raar.")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Het spijt me, Link!\n\n\n\n\x0E\x01\x09\x04\xC00\x800Ik wilde het tegen je zeggen, maar...\x0E\x01\x06\x02Í ik\nwas bang dat <b<Ganderd>> erachter zou\nkomen als ik het aan jou had verteld...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Blijkbaar heeft <b<Ganderd>> lopen dreigen\nover dat hij zijn mond moest houden.")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf("\x0E\x01\x09\x04\x08\xC00En?<pause23> Vertel hem hoe het zit!")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Een poosje geleden toen ik de eetzaal\nschoon aan het maken was, kwamen\nGanderd en zijn makkers binnen.\n\n\x0E\x01\x09\x04\xC00\x800Ze hadden het over een <r<plan om je\nLoftwing te verbergen>>. Blijkbaar hadden\nze niet gezien dat ik er ook was.\n\n\x0E\x01\x09\x04\xC00\x800Ik wilde je gaan waarschuwen,\nLink, maar net toen ik\nprobeerde om weg te sluipen...\n\n\x0E\x01\x09\x04\xC01\xE00...namen Ganderd en zijn bende me te\ngrazen!\n\n\n\x0E\x01\x09\x04\xC07\xE00Ze zeiden dat als ik ook maar iets aan jou\nzou verklappen, ze ervoor zouden zorgen\ndat ik nooit meer op een vogel zou kunnen\nvliegen!")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Ik geloof dat Ganderd van plan was om je\nvogel bij de <r<<pling>waterval>> te verbergen.\n\n\n\x0E\x01\x09\x04\x08\xC00Bij de waterval... Dat betekent\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n<pause28>Ik heb een idee! Open snel je <r<kaart>>!")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf("Hier moet het zijn! Bij de <r<waterval>>, die\nje kunt herkennen aan \x0E\x02\x04\x02\x19CD.")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf("\x0E\x01\x09\x04\x00\x404Je weet toch hoe je een kaart moet lezen?\nDruk wanneer je maar wilt op \x0E\x02\x04\x02\x2CD om een\nkaart van je omgeving te zien.\x0E\x01\x11\x02\x2CD \x0E\x01\x09\x04\x08\x400Dus als je\ndenkt dat je verdwaald bent, druk op \x0E\x02\x04\x02\x2CD!\x0E\x01\x11\x02\x2CD")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf("\x0E\x01\x09\x04\xC00\x819Sorry, Link! Ik kan er niets\naan doen dat ik zo'n bangbroek ben. Het\nspijt me echt.")
/*< 87>*/ 					scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<285>*/ 					switch (temp_flags[54 /* 0x7 40 */]) {
          					  case 0:
/*<154>*/ 						story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          						flw_156:
/*<156>*/ 						story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<149>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						goto flw_156
          					}
          				  case 1:
          					goto flw_85
          				}
          			  case 1:
/*<280>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
          					goto flw_283
          				  case 1:
/*<281>*/ 					temp_flags[54 /* 0x7 40 */] = true;
          					goto flw_283
          				}
          			}
          		  case 1:
/*<101>*/ 			printf("\x0E\x01\x09\x04\x00\xC01\x0E\x03\x01\x00Link! Perfecte timing.")
/*<148>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_71
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 48>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 50>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Druk op \x0E\x02\x04\x02\x2CD om je <r<kaart >>te bekijken en\nhet standbeeld van de godin te vinden.\nDaar heb je een goed uitzicht over\nSkyloft!\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf("\x0E\x01\x09\x04\x00\x04Wat is er, Link?<pause28>\x0E\x01\x09\x04\x00\x1100 Wat?! Is je\nLoftwing <pause32>vermist?\n\n\n\x0E\x01\x09\x04\x11\x1100Dat is vreselijk! Ik keek er al naar uit\nom die rode bliksemschicht door de hemel\nte zien schieten.\n\nNee, nee\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Ik heb hem niet gezien.\n\n\n\n\x0E\x01\x09\x04\n\x1100Hmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Neem anders eens een kijkje bij\nhet standbeeld van de godin. Vanaf daar\nheb je een goed uitzicht over heel Skyloft.")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x00\x04Wat is er, Link?<pause28>\x0E\x01\x09\x04\x00\x1100 Wat?! Is je\nLoftwing <pause32>vermist?\n\n\n\x0E\x01\x09\x04\x11\x1100Dat is vreselijk! Ik keek er al naar uit\nom die rode bliksemschicht door de hemel\nte zien schieten.\n\nNee, nee\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Ik heb hem niet gezien.\n\n\n\n\x0E\x01\x09\x04\n\x1100Hmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Neem anders eens een kijkje bij\nhet standbeeld van de godin. Vanaf daar\nheb je een goed uitzicht over heel Skyloft.")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf("Het <r<standbeeld van de godin>> is dat\nenorme beeld in het noorden van Skyloft.\nJe herkent het op de kaart aan het\n\x0E\x02\x04\x02\x19CD-teken.")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf("\x0E\x01\x09\x04\x00\x404Je kunt wel kaartlezen, toch? Druk op \x0E\x02\x04\x02\x2CD\nom een kaart van het gebied te zien!\x0E\x01\x11\x02\x2CD")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf("\x0E\x01\x09\x04\n\x705Ik kijk ernaar uit om je Loftwing in actie\nte zien!")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hé, Link! Hoe gaat het? Gaat\nde Vleugelceremonie niet zo beginnen?\n\n\nWeet je nog dat <b<Pimmus>> de vorige keer\nheeft gewonnen? Toen was het echt\nspannend op het eind...\n\n\x0E\x01\x09\x04\n\x700O, maar nu krijgen we allemaal te zien\nhoe je rode Loftwing het ervan afbrengt!\n<pause28>Ik ben benieuwd!")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé!\x0E\x01\x0D\x02\x1906 \x0E\x03\x01\x00Link!")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf("\x0E\x01\x08\x02\x2CDHé, ik moet je wat vertellen!\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍIk heb informatie over je Loftwing!\nKom snel hierheen!")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Je Loftwing? Moet dat nu?\n\n\n\n\x0E\x01\x09\x04\x10\xE00Sorry, ik heb het op het moment veel te\ndruk.")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf("\x0E\x01\x09\x04\x00\x01De <r<Vleugelceremonie>> gaat bijna beginnen!\nZorg dat jullie er allemaal op tijd bij zijn!")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Waar blijft <b<Federik>> toch? Hij zou me nog\neen paar <r<vaten>> brengen!\n\n\n\x0E\x01\x09\x04\x10\xF00Waar loopt die jongen nu toch weer over\nte dagdromen?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Meester, ik acht de kans zeer groot dat\ndie lichtstraal ons naar informatie zal\nleiden over de locaties van de drie heilige\nvlammen.\nIk raad u aan uit te zoeken waar de\nlichtstraal heen leidt.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf("\x0E\x01\x09\x04\x00\x04Nog één dingetje, Link!")
/*< 96>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Wees voorzichtig als je naar de grot bij de\nwaterval gaat. Het stikt daar van de\nmonsters! Zorg in ieder geval dat je een\n<r<zwaard>> bij je hebt.\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍIk denk dat de<b< riddercommandant>> op het\nmoment in de trainingsruimte is.\nMisschien wil hij je wel een zwaard lenen!")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf("\x0E\x01\x09\x04\x00\x05Is er nog iets dat je me wilt vragen?\n[1]Mijn vogel! [2]Ik zoek Ganderd.")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x12Eh, nou... Ehm... Eerlijk gezegd weet ik\necht niet waar ze naartoe zijn gegaan.")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x00\x04O, <b<Ganderd >>en zijn kornuiten hadden het\nerover dat ze onderweg waren naar de\n<r<Vleugelceremonie>> op het grote plein.")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x05Is er iets? Waarom ren je zo van hot naar\nher?\n\n\nWat?! Ben je je Loftwing kwijt?! <pause32>Maar<pling> ik\n<r<zag>> hem kortgeleden nog. Het leek alsof\n<b<de vogel van Ganderd>> achter hem aan zat.\n[1]Waar zijn ze nu?[2]Waar is Ganderd?")
          				goto flw_16
          			  case 1:
/*<235>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 31}
          				goto flw_61
          			}
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ik ben nog steeds met deze poort bezig,\ndus tot de ceremonie kun je hier helaas\nniet langs.\n[1]Waar is Zelda? [2]Ceremonie?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x05<b<Zelda>>? <pause1E>O, die was net nog bij het stand-\nbeeld van de godin, samen met rector\nGaepora.\n\nDe snelste weg naar het standbeeld? Dat\nkun je makkelijk zelf uitvinden, knul.\nDruk maar op \x0E\x02\x04\x02\x22CD en kijk goed rond. Je\nkunt het niet missen!\x0E\x01\x11\x02\x8CD")
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x00\x03Welja, de <r<Vleugelceremonie>> waar je aan\ndeelneemt. Ben je er klaar voor?\n\n\nAls je de race wint, mag je door naar de\n<r<hogere klas>>. En als je daar slaagt, kun je\naan de slag als <r<ridder-in-nood>>.\n\nDe ridders zorgen voor de veiligheid hier\nop Skyloft. Zoals je weet is het een hele\neer om ridder te mogen worden. Ik hoop\ndat je de race zult winnen.")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Môgge, Link. Alles goed? Heb\nje enigszins kunnen slapen vannacht?\n\n\nJe hebt vast geen oog dicht kunnen doen\nvanwege de <r<ceremonie>> van vandaag.\n\n\nWaar ik mee bezig ben? <pause28>O, gewoon. Ik\nben deze poort aan het repareren...\n\n\nHij piept nogal. Dat is niet zo fraai op de\ndag van een grote ceremonie!\n\n\n\x0E\x01\x09\x04\x0C\xC00Ik hoop trouwens dat je je <r<gebed tot de\ngodin>> niet bent vergeten.\n\n\n\x0E\x01\n\x04\x06ÍGa maar even snel voor dat <r<vogelbeeld\n>>staan en zeg je gebedje om je <r<voortgang\nop te slaan>>.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍDie beelden staan niet voor niets overal\nop Skyloft. Denk eraan dat je van tijd\ntot tijd bij een beeld langsgaat.\n\n\x0E\x01\x09\x04\x00\x08<r<Je kunt beter stipt bidden dan nipt\nbidden>>, snappie?")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCDEh...\x0E\x01\x06\x02Í Denk je dat je nog op tijd zult zijn,\nLink?\n\n\n\x0E\x01\x09\x04\xC00\xE06Wat ben ik toch een watje\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Het spijt me.")
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf("\x0E\x01\x09\x04\x00\x02Kijk uit waar je loopt! Hebben ze je op de\nacademie niet geleerd dat een ridder op-\nlettend moet zijn? Kijk maar uit, anders\nkun je je ridderschap op je buik schrijven.")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x00\x02Kijk uit je doppen! Ridders als ik zijn er\nom mensen te redden, maar je kunt beter\ngeen risico's nemen!")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0F\x1300Ahhhhh! Mijn <b<wolkenhert>>... Ik had het\nbijna... \x0E\x01\x09\x04\n\x900Zonder net zijn insecten echt\nonmogelijk te vangen...\n\nIk had er ooit een van <r<Beedles wolken-\nwinkel>>, maar dat heb ik weggedaan.\n\x0E\x01\x09\x04\x11\x200Ahhhhh...")
          		  case 1:
/*<103>*/ 			printf("\x0E\x01\x09\x04\x00\x04Als je ergens tegenaan wilt <g<rollen>>, moet je\neerst keihard sprinten...\n\n\nEn terwijl je sprint, BAM! Als je het goed\nweet te timen, valt er soms zelfs iets naar\nbeneden. Dus... <pause1E>probeer dat maar eens!")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Hé, Link! Wacht even,\nLink!\n\n\x0E\x01\x0D\x02\x500\nKun je me ergens mee helpen? Je hoeft\nalleen maar te <g<sprinten >>en tegen die boom\naan te <g<rollen>>.\n\nPrecies zoals ik heb gedaan. Sprinten en\ndan wanneer je vlak voor de boom bent...\nBAM! <g<Rol >>je er zo tegenaan! Toe nou...<pause1E>\nAlsjeblieeeeft?")
/*<224>*/ 		scene_flags[0 'Skyloft'][61 /* 0x6 20 */] = true;
/*<226>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          	}
          }

          void entrypoint_100_22() {
/*<170>*/ 	start()
/*<198>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<199>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<200>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_212:
/*<212>*/ 				printf("\x0E\x01\x09\x04\x00\x01Die stem in het toilet heb ik niet meer\ngehoord. Ik vraag me af wie dat was.")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf("\x0E\x01\x09\x04\x00\x01De laatste tijd hoor ik zo nu en dan <r<een\nvreemde stem als ik 's nachts voorbij het\ntoilet loop>>.\n\nGeen idee wie het kan zijn, maar ik wou\ndat diegene zich wat stiller kon houden!")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ik heb Ganderd al een tijd niet gezien.\nIk vraag me af hoe het met die jongen\ngaat.")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hoe gaat het met je? Denk eraan dat je op\ntijd naar <r<bed>> gaat om uit te rusten.")
          				  case 1:
/*<171>*/ 					printf("\x0E\x01\x09\x04\x00\x01O, ga je op reis? <pause14>Dan neem ik het je niet\nkwalijk als je niet meer iedere dag met\nons mee-eet.\n\n\x0E\x01\x09\x04\n\xC00Zorg goed voor jezelf, jongen!\n\n\n\n\x0E\x01\x09\x04\x09\x800En kom af en toe nog eens naar huis.\nHet is fijn om zo nu en dan in je eigen\nbed te kunnen slapen.")
          				}
          			}
          		}
          	  case 1:
          		goto flw_214
          	}
          }

          void entrypoint_100_57() {
/*<206>*/ 	start()
/*<207>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x02Rustig aan, aspirant! Als je zulke stunts\nuithaalt, word je nooit een ridder.\n\n\n's Nachts vliegen kan ik je ook niet\naanraden, want daar moet je een speciale\ntraining voor hebben. Kruip je bed in en\nwacht tot de ochtend voor je eropuit gaat.")
          	  case 1:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x00\x02Pas op waar je loopt! Vooral in het\ndonker is een misstap zo gemaakt en val\nje voor je het weet over de rand.\n\nO, en waag het niet om 's nachts te\nvliegen. Dat lukt alleen getrainde ridders\nals ik. Ik hoop dat je voortaan voor-\nzichtiger zult zijn. Goedenacht!")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf("In het zuiden van Skyloft, de plek op de\nkaart met het \x0E\x02\x04\x02\x19CD-teken, ligt het grote\nplein. Daar houden we vandaag de\n<r<Vleugelceremonie>>!")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf("\x0E\x01\x09\x04\x00\x404Heb je weleens kaartgelezen, knul? Je\nkunt altijd op \x0E\x02\x04\x02\x2CD drukken om een kaart\nvan het gebied te zien.\x0E\x01\x11\x02\x2CD")
/*<236>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	}
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<161>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<210>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<211>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<203>*/ 				printf("\x0E\x01\x09\x04\x00\x01Die stem in het toilet heb ik niet meer\ngehoord.\n\n\nMaar nu hoor ik steeds Kol die zich in de\nkamer van Ganderd in slaap huilt...\nZouden we iets voor die jongen kunnen\ndoen?")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ik heb Ganderd al een tijd niet gezien.\nIk vraag me af hoe het met die jongen\ngaat.")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hoe gaat het met je? Denk eraan dat je op\ntijd naar <r<bed>> gaat om uit te rusten.")
          				  case 1:
/*<162>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Zelfs die ondeugende kinderen slapen.\nAhhh, wat heerlijk om rust te hebben.\n\n\n\x0E\x01\x09\x04\n\x800Dus... Denk je dat je Zelda zult vinden?\nIk hoop dat het je lukt!")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Deze deur zit op slot! We willen 's nachts\ngeen eng gespuis over de vloer.\n\n\nDe deur boven laat ik open, maar waag\nhet niet om in het donker naar buiten te\ngaan!\n\nIk weet dat je vriendin Zelda vermist\nwordt, maar dat betekent niet dat je\n's nachts als een dief door Skyloft kunt\nrondsluipen.")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf("\x0E\x01\x09\x04\x00\x08Waaaaaaaaauw!<pause1E> Je hebt er een gevonden!\nEen <b<wolkenhert>>!\n\n\nHé! Wacht!")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf("Ik denk dus dat ze wel op het grote plein\nzullen zijn. Normaal gesproken kom je\ndaar het snelst door dit pad door deze\npoort te volgen...\nMaar ik moet nog wat aan dit scharnier\nsleutelen voor de poort open kan, dus ga\nmaar via de academie. Vergeet niet om\nop \x0E\x02\x04\x02\x2CD te drukken als je verdwaald bent!\x0E\x01\x11\x02\x2CD")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf("O, jeetje, je bent nog steeds op zoek naar\nhet zuidelijke deel van Skyloft? Zie je die\n\x0E\x02\x04\x02\x19CD op je kaart? Daar ligt het grote plein.\n\nDaar wordt de <r<Vleugelceremonie>> vandaag\ngehouden. Dus je kunt dat plein maar\nbeter zo snel mogelijk vinden!")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDHet is mooi geweest!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍIk zal eens een woordje wisselen met de\nrector, zodat hij je van de academie\nschopt!")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDOphouden nu! \x0E\x01\x0D\x02\x1906Kleine snotsnavel!\n\n\n\n\x0E\x01\n\x04\x0FÍAls je dat nog eens waagt, laat ik je de\nhele week de keukenvloer dweilen!")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Waar ben je mee bezig?!\n\n\n\n\x0E\x01\x0D\x02\x1906\x0E\x01\n\x04\x0FÍGa dat als de wiedeweerga opruimen!")
/*<116>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00\x04Druk op \x0E\x02\x04\x02\x2CD om je <r<kaart >>te bekijken en\nhet standbeeld van de godin te vinden.\nDaar heb je een goed uitzicht over\nSkyloft!\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf("\x0E\x01\x09\x04\x00WWat is er, Link? Heb je haast?\n\n\n\nWat is er met je vogel? Ja, die aparte\nrode Loftwing... <pause28>Of ik die gezien heb?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\x200Sorry, nee.\n\n\x0E\x01\x09\x04\x09\x204Neem anders eens een kijkje bij het\nstandbeeld van de godin. Vanaf daar\nheb je een goed uitzicht over heel Skyloft.")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf("\x0E\x01\x09\x04\x00WWat is er, Link? Heb je haast?\n\n\n\nWat is er met je vogel? Ja, die aparte\nrode Loftwing... <pause28>Of ik die gezien heb?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\x200Sorry, nee.\n\n\x0E\x01\x09\x04\x09\x204Neem anders eens een kijkje bij het\nstandbeeld van de godin. Vanaf daar\nheb je een goed uitzicht over heel Skyloft.")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf("Het <r<standbeeld van de godin>> is dat\nenorme beeld in het noorden van Skyloft.\nDaar ben je toch weleens geweest? Je\nherkent het op de kaart aan het \x0E\x02\x04\x02\x19CD-teken.")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf("\x0E\x01\x09\x04\x00\x404Als je ooit verdwaald raakt, kun je op \x0E\x02\x04\x02\x2CD\ndrukken om een kaart van het gebied te\nzien waar je je in bevindt.\x0E\x01\x11\x02\x2CD")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209Ik droom ervan om een keer de rol van de\ngodin te spelen bij de Vleugelceremonie!\nEen romantische ceremonie met een\nknappe ridder... Dat zou niet slecht zijn.")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hé, Link! Lekker windje,\nhè? Perfect weer voor de ceremonie!\n\n\n\x0E\x01\x09\x04\x11\x200Wie denk jij dat er vandaag gaat winnen?\n<b<Ganderd>> is een sterke kandidaat, maar of\nhij de winnaar zal zijn...\n\n\x0E\x01\x09\x04\x0C\x200De winnaar zal gezegend worden door een\nmeisje uit het dorp dat de rol van de\ngodin vervult... \x0E\x01\x09\x04\x00\x609Wat romantisch!")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf("\x0E\x01\x09\x04\x09\x802Bedankt. Ik had <b<Federik>> gevraagd om te\nsjouwen, maar ergens is het wel goed dat\niemand anders het doet. Die magere knul\nwas vast door zo'n vat platgewalst.\n\x0E\x01\x09\x04\n\xC00Zeg, heb jij vandaag niet een of andere\nbelangrijke ceremonie? Hm! Nou, aardig\ndat je me hebt geholpen.")
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\n\x401O? \x0E\x03\x01\x00Link! Ga jij me helpen?\n\n\n\n\x0E\x01\x09\x04\x10\x802Ik dacht dat <b<Federik>> dat zou doen...\n\n\n\n\x0E\x01\x09\x04\x09\x400Maar goed, breng dat <r<vat>> maar hierheen.\nJa, hierheen.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

