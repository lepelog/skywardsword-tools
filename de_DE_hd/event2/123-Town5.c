          void entrypoint_123_06() {
/*< 54>*/ 	start()
/*< 47>*/ 	switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          	  case 0:
/*< 48>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<266>*/ 			switch (story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 77>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 82>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 83>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 84>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07Schatz, da bist du ja wieder! Bei mir\nkannst du deine Abenteurertasche\nausschütten... Willst du?\n[1]Bitte![2-]Nicht jetzt.")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08Hallo, Schatz!\nSchön, dich zu sehen!\n\n\nDu kannst mir alles geben, was du hast!\nÄhem... Zum Verstauen, meine ich natürlich...\n\n\n[1]Bitte![2-]Jetzt nicht.")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EHallo, Link!\nFindest du nicht, dass ich von Tag zu\nTag schöner werde, seit ich den\nSchmerz der Liebe erfahren habe?\nÄh... Ach so, du willst etwas abgeben?\n[1]Ja[2-]Nein")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ah... Guten Tag,\nLink!\n\n\nEntschuldigung wegen letztem Mal...\n\n\n\nIch habe ein wenig nachgedacht...\nJetzt ist es gut.\n\n\nWenn Frauen unglücklich verliebt sind,\nwerden sie schöner, sagt man...\n\n\nUnd in diesem Sinne werde ich in\nZukunft immer schöner werden!\n\n\nDas ist schon in Ordnung...\n\n\n\nAlso, was führt dich zu mir? Willst du\nmein Item-Lager nutzen?[1]Ja[2-]Nein")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05Oh, Schatz!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Also, ich... <r<Könntest du heute Nacht zu mir nach\nHause kommen>>? Ich möchte dir etwas sagen...\n\n\n\x0E\x01\x09\x04\x08\xA00Mein Haus ist ganz in der Nähe des Basars...\nIch warte auf dich!")
          								flw_79:
/*< 79>*/ 								printf("Hast du etwas abzugeben?\n\n\n[1]Ja[2-]Nein")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05Oh, Schatz!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Also, ich... <r<Könntest du heute Nacht zu mir nach\nHause kommen>>? Ich möchte dir etwas sagen...\n\n\n\x0E\x01\x09\x04\x08\xA00Mein Haus ist ganz in der Nähe des Basars...\nIch warte auf dich!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07Hallo, <r<mein Schatz>>!\nIch habe schon auf dich gewartet!\nHast du auch heute wieder was abzuladen?\n\nGib mir alles...\nÄhem, die Ausrüstung, meine ich...\n[1]Ja[2-]Nein")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08Ah...")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00Ich... Ich bin so froh, dass du da bist!\n\n[1]...[2]Nur für dich!")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ASchau... Schau mich nicht so an, <r<Schatz>>!\nDu machst mich ja ganz verlegen...")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Wenn ich in letzter Zeit an dich denke,\nschlägt mein Herz immer ganz schnell.\n\n\nIst das vielleicht...\n\n\n\n[1]Nicht gut![2]Liebe?")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EJetzt sag es schon...")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00Hach, ich schmelze dahin...\nÄhem, zurück zur Arbeit!\n\n\n\x0E\x01\x09\x04\x0E\x1000Willst du das Item-Lager nutzen?\n\n\n\n[1]Ja[2-]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FWirklich? Ich bin so glücklich...")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0AÄhem...\nEntschuldige bitte... Das ist mir jetzt\nwirklich peinlich!\n\n\x0E\x01\x09\x04\x08\xA00Also! Du willst bestimmt etwas bei mir\nabgeben, <r<Schatz>>?\n\n[1]Ja[2-]Nein")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0DAch, sag es nicht so laut!\nDu machst mich ja ganz wild!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0AAh, ich bin so glücklich, wenn du bei mir bist!")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05Ach, da bist du ja schon wieder!\nHabe ich dir etwa gefehlt? Tihihi...\n\n\nÄhem... Willst du vielleicht ein paar\nSachen hier verstauen?\n[1]Ja[2-]Nein")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Willkommen im Item-La...\x0E\x01\x09\x04\x00\x05\nOh, du bist's!")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("Ähem...\nIch...\n\n[1]Was ist denn?[2]Du bist so anders...")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18Ähem... Ich...\nAch, nichts, hihi...")
          					flw_76:
/*< 76>*/ 					printf("Es ist nicht so, dass ich jetzt ganz aus dem\nHäuschen wäre...\n\n\nAber so oft, wie du jetzt bereits bei mir warst,\nbist du eben schon mehr als ein normaler\nKunde für mich...\n\n\x0E\x01\x09\x04\x10\x1405Ähem, ich...\nWas sage ich da eigentlich?\n\n\nEntschuldige bitte, ich bin etwas neben der\nSpur heute...\n\n\n\x0E\x01\x09\x04\x07\x800Ah, also...\nDu bist ja bestimmt hier, um das\nItem-Lager zu nutzen, oder?\n\n[1]Ja[2-]Nein")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18Das... Das glaube ich nicht...\nOder doch, hihi?")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Willkommen im Item-Lager!\nSag bloß, du bist nur meinetwegen\nhierhergekommen... Hihi!\n\nAber sag mal, willst du denn das\nItem-Lager nutzen?\n[1]Ja[2-]Nein")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Willkommen im Item-Lager!\nAch, schon wieder du?\n\n\nDich sehe ich ja häufig in letzter Zeit.\nIch glaube fast, du bist mein bester Kunde...\nTihihi!\n\n\x0E\x01\x09\x04\x00\x04...\nMoment mal!\n\n\nKo... Kommst du...\n\n\n\nKommst du etwa wegen MIR?\n\n\n\n[1]Was?!?[2]Klar!")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02Nicht? Wirklich nicht?\n\n\n\nNa ja, wieso solltest du auch?\n\n\n\n\x0E\x01\x09\x04\n\xC00Das... Das ist ja auch überhaupt kein Problem,\nwirklich nicht...")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800Zurück zum Geschäft... Möchtest du\ndas Item-Lager nutzen?\n[1]Ja[2-]Nein")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02Was? Ehrlich?\n\n\n\nDas sagst du doch jetzt nur so, um mir\nzu schmeicheln, oder?\n\n\n\x0E\x01\x09\x04\n\xC00Aber ein wenig glücklich macht es mich\nja schon...")
          				goto flw_53
          			}
          		}
          	}
          }

          void entrypoint_123_07() {
/*< 93>*/ 	start()
/*< 92>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 94>*/ 		switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          		  case 0:
/*< 95>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 96>*/ 				switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          				  case 0:
/*< 97>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
/*<105>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09Es war schön mit dir, mein Schatz!\nKomm bald wieder ins Lager, ja?")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0DSchatz, du schon wieder!\nWenn du so oft kommst, fliegt unser\nsüßes Geheimnis noch auf!\n\nWas willst du denn?\n[1]Reden[2]Nichts[3]Items lagern")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08Auch ich habe dir viel zu sagen, aber im\nAugenblick ist es wirklich etwas ungünstig...\nKomm demnächst wieder!")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00Du klingst ja schon fast wie ein Ehemann!\nFang bitte nicht so an, Schatz, das ist\nunromantisch!")
          								  case 2:
/*<113>*/ 									printf("...\nDas kannst du tagsüber im Item-Lager machen!\n\n\n\x0E\x01\x09\x04\x0E\x1000Ist das wirklich alles, an was du denkst?\nDas enttäuscht mich jetzt aber...")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14Es ist schon in Ordnung...\nAber lass mich jetzt alleine, ja?")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13In letzter Zeit ist mein Vater irgendwie immer\nguter Laune...\n\n\nUnd das, obwohl ich mich so schlecht fühle...\nOb er wohl weiß, dass mir das Herz\ngebrochen wurde?")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14Ich wollte ja nicht mehr daran denken, aber in\nder Nacht fühle ich mich oft einsam. So ist das,\nwenn einem das Herz gebrochen wurde...")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0E\x0E\x03\x01\x00Link!\nTut mir leid...\x0E\x01\x09\x04\x00\x14")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 226, 'param3': 6}
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05\x0E\x03\x01\x00Link!\nVielen Dank, dass du gekommen bist!\n\n\n\x0E\x01\x09\x04\x0E\xF00Also, ich wollte dich eigentlich etwas fragen...\n\n\n\nAch, ich frage jetzt einfach mal drauflos!")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("Wie findest du mich? Was hältst du von mir?\nAlso...\n\n\n[1]Ich mag dich![2]Na ja, du bist\ndie Item-Frau.")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FWirklich? Meinst du das ernst?\n\n\n\n[1]Klar![2]Hehe...")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08Du machst mich so glücklich! Aber ich will\nes noch einmal aus deinem Mund hören...\nSag schon...\n\n\x0E\x01\x09\x04\x0E\x1000Magst du mich wirklich-wirklich?\n\n\n\n[1]Ja![2]Tut mir\nleid...")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0AEine Lüge würde ich nicht verkraften!\nAlso?\n\n\n[1]Ich meine\nes ernst![2]War gelogen...")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09Danke!\nAuch ich mag dich, mein Schatz!\nTut mir leid, dass ich dich so auf\ndie Probe gestellt habe!")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13Aber ich weiß es ja...\n\n\n\nIm Augenblick hast du größere Probleme\nals die Liebe, richtig?\n\n\n\x0E\x01\x09\x04\x0E\x1000Du hast... einen Auftrag, ja?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Ich meine, sonst würdest du ja nicht andauernd\nzu mir kommen und Sachen bei mir abgeben...\n\n\nMach dir keine Sorgen! Ich werde immer\nauf dich warten und deine Gegenstände in\nEmpfang nehmen!\n\n\x0E\x01\x09\x04\x0E\x1000Und wenn du deinen Auftrag erfüllt hast,\nwerde ich dich meinem Vater vorstellen...\n\n\n\x0E\x01\x09\x04\x0B\xD00So lange bewahren wir unser kleines\nGeheimnis... Schatz! Komm bald wieder, ja?")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214Nun gut! Das denkst du also, ja? Ich verstehe...\n\n\n\nTut mir leid, dass ich dich derart belästigt habe.")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13Ich brauche dein Mitleid nicht!\n\n\n\nDas ist schon in Ordnung.\nIch werde damit klarkommen...\n\n\n\x0E\x01\x09\x04\x14\xD00Komm wieder ins Item-Lager,\nwenn du Sachen zum Einlagern hast...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 6}
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 327, 'param3': 6}
/*<327>*/ 										printf("Aber lass mich jetzt alleine, ja?\n\n\n\nMach es gut... Schatz!")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120AAlso wirklich!\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Du willst mir also sagen, dass ich für dich\neinfach nur die Frau aus dem Laden bin?\n\n\n[1]Aber ich hab\ndich gern![2]Was denn sonst?")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120FWas?\nDann interessierst du dich also gar\nnicht für mich?\n\n\x0E\x01\x09\x04\x0E\x1000Ach!\nDas sagst du doch nur, um deine\nVerlegenheit zu verbergen... Stimmt's?\n\n[1]Ja[2]Nein")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08Wie? Du magst mich also doch?!?\n\n\n\n[1]Klar![2]Tut mir\nleid...")
/*<313>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								  case 1:
          									goto flw_307
          								}
          							}
          						  case 1:
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210Das...\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Ha... Habe ich mich da etwa gerade verhört?!?\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Sag schon, was bin ich für dich?\n\n\n\n[1]Eine liebe\nPerson[2]Die Item-Frau")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07<r<Schatz>>, wie schön, dich zu sehen!\n\n\n\nIch bin so froh, dass du heute zu mir\ngekommen bist!")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15Sieh an! Du kommst sogar schon zu mir\nnach Hause...\n\n\nHast du mir vielleicht etwas Besonderes\nzu sagen, hihi?")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17So sehr du mich auch magst, mein Freund,\nin meinen vier Wänden hast du nichts verloren!\n\n\n\x0E\x01\x09\x04\x01\x800Du leidest wohl unter einem übertriebenen\nSelbstbewusstsein, was?")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ach...\nIrgendwo muss doch mein Traumprinz zu\nfinden sein...\n\n\x0E\x01\x09\x04\x01\x800Ähem, was hast du in meinem Haus verloren?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Vielen Dank, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900Jetzt fühle ich mich wieder wohl hier drin.\nDas Haus ist viel schöner, wenn es ab und\nzu geputzt wird!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909Also, hier ein kleiner Lohn für deine\nharte Arbeit... <r<20 Rubine>>!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900Wenn du Lust hast, kannst du mir gerne wieder\neinmal helfen. Du weißt ja, ich zahle gut!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900Aber... Cuco darf das niemals erfahren,\nverstehst du?\n\n\n\x0E\x01\x09\x04\x08\x900Wenn er herausfindet, dass ich dich fürs\nPutzen bezahle... Ich mag gar nicht daran\ndenken! Also kein Wort, ja?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Vielen Dank, Link!\n\n\n\n\x0E\x01\x09\x04\n\x900Jetzt fühle ich mich wieder wohl hier drin.\nDas Haus ist viel schöner, wenn es ab und\nzu geputzt wird!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02Sehr fleißig, Link!\n\n\n\nLass mich wissen, wenn du fertig bist,\ndamit ich dir deine Belohnung geben kann.\n\n\n\x0E\x01\x09\x04\x01\x900Oder willst du für heute aufhören?\n\n\n\n[1]Ja[2-]Noch nicht")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nWie schade...\nBis zum nächsten Mal!")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900Na, dann mach mal schön den <r<Boden>>\nweiter sauber!\n\n\nUnd vergiss nicht, auch den Staub an\nden <r<Fenstern>>, auf den <r<Möbeln>> und dem\n<r<Bett >>zu beseitigen, ja?")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("Moment mal, Link!\nIch muss dir doch noch deinen Lohn geben!\nKomm mal kurz her!")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04Aber Link, du bist doch noch gar\nnicht fertig!\n\n\nOder hast du etwa genug für heute?\n\n\n\n[1]Ja[2-]Noch nicht")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nWie schade...\nBis zum nächsten Mal!")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900Na, dann mach mal schön den <r<Boden>>\nweiter sauber!\n\n\nUnd vergiss nicht, auch den Staub an\nden <r<Fenstern>>, auf den <r<Möbeln>> und dem\n<r<Bett >>zu beseitigen, ja?")
/*<165>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 140, 'param3': 15}
          			goto flw_140
          		}
          	}
          }

          void entrypoint_123_11() {
/*<141>*/ 	start()
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 147, 'param3': 17}
/*<147>*/ 	set_camera(4, 0)
/*<142>*/ 	switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          	  case 0:
          		flw_164:
/*<164>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
          			goto flw_219
          		  case 1:
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04\x0E\x03\x01\x00Link, willst du etwa schon nach\nHause gehen?\n\n\nFalls du unterwegs Cuco begegnest,\nrede mal mit ihm, ja?")
/*<146>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*<163>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<143>*/ 		switch (story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */]) {
          		  case 0:
/*<144>*/ 			story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = false;
          			goto flw_164
          		  case 1:
          			goto flw_164
          		}
          	}
          }

          void entrypoint_123_12() {
/*<214>*/ 	start()
/*<274>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 215, 'param3': 6}
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08Sieh an!\nDu hast den ganzen Staub beseitigt,\nLink! Klasse!\n\n\x0E\x01\x09\x04\n\x900Jetzt fühle ich mich endlich wieder wohl\nin diesem Haus. Komm her, ich gebe dir\ndeine Belohnung!")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Das war ganz besonders teuer!\nEtwa <r<30 Rubine >>wirst du mir dafür wohl\ngeben müssen. Tja, das hast du nun davon,\ndu Rabauke!")
/*<382>*/ 	switch (random(4)) {
          	  case 0:
/*<383>*/ 		check_item_flag(501, 24)
/*<384>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 174}) {
          		  case 0:
          			flw_385:
/*<385>*/ 			rupees += -24;
          			flw_400:
/*<400>*/ 			entrypoint_123_14();
          		  case 1:
/*<386>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<406>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_385
          		}
          	  case 1:
/*<387>*/ 		check_item_flag(501, 26)
/*<388>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 176}) {
          		  case 0:
          			flw_389:
/*<389>*/ 			rupees += -26;
          			goto flw_400
          		  case 1:
/*<390>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<407>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_389
          		}
          	  case 2:
/*<391>*/ 		check_item_flag(501, 29)
/*<392>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 178}) {
          		  case 0:
          			flw_393:
/*<393>*/ 			rupees += -29;
          			goto flw_400
          		  case 1:
/*<394>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<408>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_393
          		}
          	  case 3:
/*<395>*/ 		check_item_flag(501, 38)
/*<396>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 180}) {
          		  case 0:
          			flw_397:
/*<397>*/ 			rupees += -38;
          			goto flw_400
          		  case 1:
/*<398>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<409>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_397
          		}
          	}
          }

          void entrypoint_123_14() {
/*<337>*/ 	start()
          	flw_246:
/*<246>*/ 	zone_temp_flags[1 /* 0x1 02 */] = false;
/*<247>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_248:
/*<248>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<245>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_248
          	}
          }

          void entrypoint_123_15() {
/*<360>*/ 	start()
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Weißt du, wie viel so etwas wert ist?\nDafür musst du mir etwa <r<20 Rubine\n>>Entschädigung zahlen. Das weiß ich\nauch ohne Gutachter...")
/*<358>*/ 	switch (random(4)) {
          	  case 0:
/*<357>*/ 		check_item_flag(501, 17)
/*<356>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 152}) {
          		  case 0:
          			flw_355:
/*<355>*/ 			rupees += -17;
          			flw_342:
/*<342>*/ 			entrypoint_123_14();
          		  case 1:
/*<354>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<410>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_355
          		}
          	  case 1:
/*<353>*/ 		check_item_flag(501, 19)
/*<352>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 150}) {
          		  case 0:
          			flw_351:
/*<351>*/ 			rupees += -19;
          			goto flw_342
          		  case 1:
/*<350>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<411>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_351
          		}
          	  case 2:
/*<349>*/ 		check_item_flag(501, 22)
/*<348>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 148}) {
          		  case 0:
          			flw_347:
/*<347>*/ 			rupees += -22;
          			goto flw_342
          		  case 1:
/*<346>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<412>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_347
          		}
          	  case 3:
/*<345>*/ 		check_item_flag(501, 23)
/*<344>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 146}) {
          		  case 0:
          			flw_343:
/*<343>*/ 			rupees += -23;
          			goto flw_342
          		  case 1:
/*<341>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Weißt du, wie selten so etwas ist?\n<r<10 Rubine>> musst du mir dafür schon geben.\nOder mehr, oder weniger... Wie auch immer!\nGeld her, du Rüpel!")
/*<362>*/ 	switch (random(4)) {
          	  case 0:
/*<363>*/ 		check_item_flag(501, 7)
/*<364>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 162}) {
          		  case 0:
          			flw_365:
/*<365>*/ 			rupees += -7;
          			flw_380:
/*<380>*/ 			entrypoint_123_14();
          		  case 1:
/*<366>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<414>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_365
          		}
          	  case 1:
/*<367>*/ 		check_item_flag(501, 8)
/*<368>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 164}) {
          		  case 0:
          			flw_369:
/*<369>*/ 			rupees += -8;
          			goto flw_380
          		  case 1:
/*<370>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<415>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_369
          		}
          	  case 2:
/*<371>*/ 		check_item_flag(501, 11)
/*<372>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 166}) {
          		  case 0:
          			flw_373:
/*<373>*/ 			rupees += -11;
          			goto flw_380
          		  case 1:
/*<374>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<416>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_373
          		}
          	  case 3:
/*<375>*/ 		check_item_flag(501, 13)
/*<376>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 168}) {
          		  case 0:
          			flw_377:
/*<377>*/ 			rupees += -13;
          			goto flw_380
          		  case 1:
/*<378>*/ 			printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<417>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_377
          		}
          	}
          }

          void entrypoint_123_00() {
          	start()
/*<  4>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<  5>*/ 		check_item_flag(49, 1)
/*<  6>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          		  case 0:
/*<  1>*/ 			switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          			  case 0:
/*<  7>*/ 				switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          				  case 0:
/*< 44>*/ 					switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          					  case 0:
/*< 43>*/ 						switch (story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */]) {
          						  case 0:
          							flw_19:
/*< 19>*/ 							switch (story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */]) {
          							  case 0:
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\nIch würde mich freuen, wenn du mir\ndemnächst mal wieder helfen könntest!")
          							  case 1:
/*<124>*/ 								switch (zone_temp_flags[0 /* 0x1 01 */]) {
          								  case 0:
/*<211>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<213>*/ 										entrypoint_123_08();
          									  case 1:
/*<212>*/ 										entrypoint_123_09();
          									}
          								  case 1:
/*<123>*/ 									switch (zone_temp_flags[1 /* 0x1 02 */]) {
          									  case 0:
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01Willst du mir nicht ein wenig beim\nPutzen helfen? Du weißt doch,\nwie ungern ich das mache...\n\n\x0E\x01\x09\x04\n\x900Ich gebe dir auch ein schönes Taschengeld...\nDa kannst du nicht ablehnen, oder?\n\n\n[1]Ist gut...[2-]Doch!")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07Das freut mich!\nDu bist wirklich ein Prachtkerl,\nLink!\n\n\x0E\x01\x09\x04\x01\xD00Also dann, an die Arbeit!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AWas?!?\nDu bist wirklich zu nichts zu\ngebrauchen, Link!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Wie geht's dir, Link?\n\n\n\n\x0E\x01\x09\x04\x08\x900Hier ist schon wieder alles total verstaubt!\nWillst du mir nicht noch einmal deine\nstarken Arme leihen? Ich zahle gut...\nNa, wie sieht's aus?\n[1]Bin dabei![2-]Nee!")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hallo, Link!\n\n\n\n\x0E\x01\x09\x04\x08\x900Was soll ich sagen?\nCuco ist sauer auf mich...\n\n\n\x0E\x01\x09\x04\n\x900Er meint, dass ich keine Rubine für eine\nHaushälterin ausgeben soll...\n\n\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09Allerdings...\nAllerdings habe ich mir gedacht, dass du\nja gar keine Haushälterin bist!\n\n\x0E\x01\x09\x04\x08\x900Von daher dürfte es doch in Ordnung sein,\nwenn du mir weiter zur Hand gehst, oder?")
/*< 46>*/ 							story_flags[580 /* us: 805A9B1B 0x08, jp: 805ACD9B 0x08 */] = true;
          						}
          					  case 1:
          						goto flw_19
          					}
          				  case 1:
/*<438>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 31}
/*<120>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<200>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<210>*/ 							entrypoint_123_08();
          						  case 1:
/*<209>*/ 							entrypoint_123_09();
          						}
          					  case 1:
/*<  8>*/ 						switch (zone_temp_flags[1 /* 0x1 02 */]) {
          						  case 0:
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Willst du mir nicht ein wenig beim\nPutzen helfen? Du weißt doch,\nwie ungern ich das mache...\n\n\x0E\x01\x09\x04\n\x900Ich gebe dir auch ein schönes Taschengeld...\nDa kannst du nicht ablehnen, oder?\n\n\n[1]Ist gut...[2-]Doch!")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07Das freut mich!\nDu bist wirklich ein Prachtkerl,\nLink!\n\n\x0E\x01\x09\x04\x08\x904Der Besen?\nWas weiß ich, wo der ist?!?\n\n\n\x0E\x01\x09\x04\x09\x900Du kannst ja den Staub einfach <r<wegblasen>>,\nmit Wind oder so...\n\n\n\x0E\x01\x09\x04\x01\x900Wie du das machst, ist mir ja egal, solange nur\nder Staub <r<davonfliegt>>!\n\n\n\x0E\x01\x09\x04\x08\x902Also, mach dich an die Arbeit, mein Junge!")
/*<119>*/ 								make_actor_do_something(0, 0)
/*<148>*/ 								story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<  3>*/ 								zone_temp_flags[0 /* 0x1 01 */] = true;
          								flw_122:
/*<122>*/ 								switch (story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */]) {
          								  case 0:
          									flw_121:
/*<121>*/ 									zone_temp_flags[1 /* 0x1 02 */] = true;
          								  case 1:
/*<118>*/ 									story_flags[574 /* us: 805A9B18 0x20, jp: 805ACD98 0x20 */] = true;
          									goto flw_121
          								}
          							  case 1:
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AWas?!?\nDu bist wirklich zu nichts zu\ngebrauchen, Link!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Hallo, Link,\nSchön, dich zu sehen!\n\n\n\x0E\x01\x09\x04\x01\x900Willst du mir nicht beim Putzen\nhelfen? Du weißt doch, wie ungern ich\ndas mache...\n\n\x0E\x01\x09\x04\n\x900Es soll dein Schaden nicht sein! Na?\n\n\n\n[1]Gut![2-]Lieber nicht.")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01Grüß dich, Link!\nWie geht's?\n\n\n\x0E\x01\x09\x04\x08\x900Tut mir leid, Link, dass mein\nHaus heute wieder so schmutzig ist.\n\n\n\x0E\x01\x09\x04\x09\x900Cuco sagt mir immer, dass ich putzen soll,\naber das mache ich doch so ungern...\n\n\n\x0E\x01\x09\x04\x08\x900Willst du mir helfen, Link?\nIch werde mich natürlich erkenntlich zeigen...\n\n\n[1]Gerne![2-]Putzen?!?")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02Ist Cuco auch schön fleißig in der Schule?\n\n\n\nEr ist ganz anders als ich, deshalb mache ich\nmir keine großen Sorgen um ihn.\n[1]So viel Staub...[2]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Den ganzen Tag lang putzen, und am nächsten\nTag ist es gleich wieder schmutzig...\n\n\n\x0E\x01\x09\x04\n\x90AUnd dabei hasse ich alles, was mit Hausarbeit\nzu tun hat! Manchmal würde ich mir eine\nHilfe wünschen...")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904Was ist denn? Willst du mir etwas sagen?")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01Hallo, Link!\nHereinspaziert!\n\n\n\x0E\x01\x09\x04\n\x900Ist Cuco auch schön fleißig in der Schule?")
/*< 16>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			}
          		}
          	  case 1:
          		goto flw_17
          	}
          }

          void entrypoint_123_01() {
/*< 22>*/ 	start()
/*<295>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1014, 'next': 23, 'param3': 24}
/*< 23>*/ 	printf("Wie oft habe ich dir das schon gesagt, Mutter?")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("Jetzt reg dich doch nicht so auf,\nmein kleiner Schatz!")
/*< 26>*/ 	printf("Natürlich reg ich mich auf!\n\n\n\nIch weiß doch, dass du <r<jemanden bezahlst>>,\ndamit er unser Haus putzt!\n\n\nWollten wir nicht Brot von den Rubinen\nkaufen?!?\n\n\nIch komme auf der Ritterschule kaum\nüber die Runden, weil du die ganze Zeit\nunsere Rubine verplemperst!\n\nUnd nebenbei schufte ich auch noch\nnachts, nur damit du hier den ganzen\nTag über faulenzen kannst!\n\nAlso wirklich! Was bist du nur für eine\nRabenmutter?!?")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 28, 'param3': 6}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 90, 'next': 32, 'param3': 6}
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 170, 'param3': 6}
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Sag mal, Link...\nWas machst du eigentlich hier?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100Du hast aber nicht mit angehört,\nwas ich gerade gesagt habe, oder?\n[1]Was denn?[2]'tschuldigung!")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Ach, nichts...\n\n\n\n\x0E\x01\x09\x04\x1208\x400Ich muss dann mal wieder auf meinen\nRundgang. Pass auf, wenn du im\nDunkeln nach Hause gehst!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Du hast es also gehört!\n\n\n\n\x0E\x01\x09\x04\x120F\x1100Ja, in Wirklichkeit laufe ich nachts\nPatrouille, um mir ein wenig Geld\nnebenbei zu verdienen.\n\n\x0E\x01\x09\x04\x1208\x1100Du kannst mich ruhig verachten dafür!\nAber du bist auch nicht viel besser!\nHörst fremden Leuten bei ihren\nPrivatgesprächen zu...\n\x0E\x01\x09\x04\x120C\xC00Also, Schwamm drüber! Vergessen wir\neinfach, dass wir uns heute begegnet sind!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Hmmm...<pause1E> In letzter Zeit sehe ich hier\ngar keine Monster mehr.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Woran mag das liegen? Andererseits...\nEs hat ja auch etwas Gutes, wenn es\nnachts etwas friedlicher zugeht.")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("Hallo, Link!\nNachts ist es dunkel, also pass auf,\nwohin du trittst!\n\n\x0E\x01\x09\x04\x11\xC09Und bitte kein Wort zu niemandem\nüber diese Sache, ja?")
          				flw_431:
/*<431>*/ 				switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          				  case 0:
/*<433>*/ 					zone_temp_flags[16 /* 0x3 01 */] = true;
          				  case 1:
          				}
          			  case 1:
/*<161>*/ 				switch (scene_flags[76 /* 0x8 10 */]) {
          				  case 0:
/*<176>*/ 					{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4376, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("\x0E\x03\x01\x00Link, ich fühle mich wirklich\nschlecht, weil du diese Szene\nmitbekommen hast...\n\n\x0E\x01\x09\x04\x0F\x1100Es ist mir furchtbar peinlich, aber meine\nMutter ist wirklich wahnsinnig faul!\nIch weiß nicht, was ich mit ihr machen soll!\n\n\x0E\x01\x09\x04\x08\xC0BAber um mich musst du dir trotzdem keine\nSorgen machen!\n\n\n\x0E\x01\x09\x04\x01\x1100Ich frage mich nur, wer bei uns immer das\nHaus putzt...\n\n\n\x0E\x01\x09\x04\x08\xC16Wer könnte so blöd sein und meiner Mutter\ndiese Aufgabe abnehmen?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Hey, Link!\nEine ruhige Nacht im Wolkenhort,\nfindest du nicht? Und das alles dank mir.\n\n\x0E\x01\x09\x04\x0C\x400Es ist die Aufgabe von uns Rittern, eine Welt\nzu schaffen, in der alle sich wohlfühlen.\n\n\n\x0E\x01\x09\x04\x01\xC52Moment...<pause1E> Was soll dieser zweifelnde Blick?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("\x0E\x03\x01\x00Link, auch du wirst das\neines Tages verstehen, wenn du ein\nechter Ritter geworden bist.")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("Hey, Link!\nPass bloß auf! In der Nacht sind allerlei\nMonster unterwegs!\n\n\x0E\x01\x09\x04\x0B\x400Ich mache hier meinen Rundgang und\nsehe nach dem Rechten!\n\n\n\x0E\x01\x09\x04\x08\x404Um diese Zeit kriechen die Geister und\nUngeheuer aus ihren Löchern...\n\n\nEs ist die Pflicht eines Ritters, die\neinfachen Menschen zu beschützen,\nfindest du nicht?\n\n[1]Du bist klasse![2]Dein Nebenjob?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09Was sagst du da? Ist es nicht normal für einen\nRitteranwärter, so etwas zu tun? Für mich\njedenfalls ist es das!\n\nDie Sicherheit und der Dank der Dorfbewohner\nsind mir Belohnung genug.\n\n\n\x0E\x01\x09\x04\x08\x400Das ist es, was einen Ritter ausmacht.\n\x0E\x01\x09\x04\x00\x05Und auch du wirst das eines Tages\nverstehen, Link.")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x0C\xC17\x0E\x03\x01\x00Link!\nIch beginne, an deinen hehren Absichten\nzu zweifeln...\n\nMan wird nicht Ritter, um damit Geld\nzu verdienen!\n\n\n\x0E\x01\x09\x04\x08\x405Ich jedenfalls werde Ritter, um die Sicherheit\nder Menschen zu garantieren. Ihr Dank ist mir\nBelohnung genug...")
          					goto flw_158
          				}
          			}
          		}
          	}
          }

          void entrypoint_123_03() {
/*<251>*/ 	start()
/*<253>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<255>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 768, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09Jetzt hast du einfach meine wertvollen\nAntiquitäten zerstört!\n\n\nBeim nächsten Mal bekommst du was\nzu hören!")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ich sammle Antiquitäten, das ist\nmein Hobby! Viele der Gegenstände\nhier sind äußerst wertvoll!\n\nPass ja auf, dass du nichts davon\nkaputtmachst!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\nWas soll das, du Flegel?!?")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300Schon wieder du?!? Warum tust du\nmir das an?!?")
          			flw_401:
/*<401>*/ 			check_item_flag(501, 1)
/*<402>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 182}) {
          			  case 0:
/*<244>*/ 				switch (random(3)) {
          				  case 0:
/*<338>*/ 					entrypoint_123_13();
          				  case 1:
/*<339>*/ 					entrypoint_123_15();
          				  case 2:
/*<340>*/ 					entrypoint_123_16();
          				}
          			  case 1:
/*<405>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<418>*/ 					printf("Du wütest hier rum, obwohl du nichts\nauf der hohen Kante hast?\nGeh mir aus den Augen, du Unhold!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("Wie, du hast überhaupt keine Rubine?!?\n\n\n\nMachst hier alles kaputt und kannst\nmich nicht mal dafür entschädigen?\nVerschwinde, aber dalli!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300Einfach so meine teuren Antiquitäten\nzu zerstören!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300Was fällt dir ein, meine kostbaren\nAntiquitäten kaputtzuschlagen!\n\n\nDie wirst du mir ersetzen, du Rabauke!\n\n\n\n\x0E\x01\x09\x04\x1F0B\x700Lass mal sehen... Ich schätze den Wert\nauf etwa... <r<20 Rubine>>! Ein paar mehr\noder weniger, was macht das schon!\n\n\x0E\x01\x09\x04\x1F01\x305Was sagst du da, du frecher Bengel?\nIch soll mir den Wert einfach nur\nausgedacht haben?\n\n\x0E\x01\x09\x04\x1F09\x309Pah! Erzähl doch keinen Blödsinn!\nIch habe das ehrlich berechnet.\nUnd jetzt will ich keine Ausflüchte\nmehr hören! Her mit dem Geld, sofort!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300Beim nächsten Mal bist du dran!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("Wie, du hast überhaupt keine Rubine?!?\n\n\n\nMachst hier alles kaputt und kannst\nmich nicht mal dafür entschädigen?\nVerschwinde, aber dalli!")
/*<422>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_235
          		}
          	}
          }

          void entrypoint_123_05() {
/*<258>*/ 	start()
/*<284>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 43, 'next': 292, 'param3': 32}
/*<292>*/ 	set_camera(13, 0)
/*<291>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 287, 'param3': 14}
/*<287>*/ 	{'type': 'type3', 'subType': 1, 'param1': 43, 'param2': 99, 'next': 259, 'param3': 50}
/*<259>*/ 	printf("")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 260, 'param3': 6}
/*<260>*/ 	changeScene(0, 0) // 
          }

