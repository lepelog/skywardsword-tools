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
/*< 87>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000007>Schatz, da bist du ja wieder! Bei mir\nkannst du deine Abenteurertasche\nausschütten... Willst du?\n[1-]Bitte![2]Nicht jetzt.")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000008>Hallo, Schatz!\nSchön, dich zu sehen!\n\n\nDu kannst mir alles geben, was du hast!\nÄhem... Zum Verstauen, meine ich\nnatürlich...\n\n[1-]Bitte![2]Jetzt nicht.")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x0000000e>Hallo, <heroname>!\nFindest du nicht, dass ich von Tag zu\nTag schöner werde, seit ich den\nSchmerz der Liebe erfahren habe?\nÄh... Ach so, du willst etwas abgeben?\n[1-]Ja[2]Nein")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000005>Ah... Guten Tag,\n<heroname>!\n\n\nEntschuldigung wegen letztem Mal...\n\n\n\nIch habe ein wenig nachgedacht...\nJetzt ist es gut.\n\n\nWenn Frauen unglücklich verliebt sind,\nwerden sie schöner, sagt man...\n\n\nUnd in diesem Sinne werde ich in\nZukunft immer schöner werden!\n\n\nDas ist schon in Ordnung...\n\n\n\nAlso, was führt dich zu mir? Willst du\nmein Item-Lager nutzen?[1-]Ja[2]Nein")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Oh, Schatz!\n\n\n\n<0x10009:0x000d0f00>Also, ich... <color red<Könntest du heute Nacht zu\nmir nach Hause kommen>coloroff>? Ich möchte\ndir etwas sagen...\n\n<0x10009:0x00080a00>Mein Haus ist ganz in der Nähe des\nBasars... Ich warte auf dich!")
          								flw_79:
/*< 79>*/ 								printf(/* textboxtype: 1, unk: 0, line: 76 */ "Hast du etwas abzugeben?\n\n\n[1-]Ja[2]Nein")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Oh, Schatz!\n\n\n\n<0x10009:0x000d0f00>Also, ich... <color red<Könntest du heute Nacht zu\nmir nach Hause kommen>coloroff>? Ich möchte\ndir etwas sagen...\n\n<0x10009:0x00080a00>Mein Haus ist ganz in der Nähe des\nBasars... Ich warte auf dich!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000007>Hallo, <color red<mein Schatz>coloroff>!\nIch habe schon auf dich gewartet! Hast\ndu auch heute wieder was abzuladen?\n\nGib mir alles... Ähem, die Ausrüstung,\nmeine ich...\n[1-]Ja[2]Nein")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000008>Ah...")
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080a00>Ich... Ich bin so froh, dass du da bist!\n\n[1-]...[2-]Nur für dich!")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x000d0f0a>Schau... Schau mich nicht so an,\n<color red<Schatz>coloroff>! Du machst mich ja ganz\nverlegen...")
          					flw_66:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00120a00>Wenn ich in letzter Zeit an dich denke,\nschlägt mein Herz immer ganz schnell.\n\n\nIst das vielleicht...\n\n\n\n[1-]Nicht gut![2-]Liebe?")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x000f120e>Jetzt sag es schon...")
          						flw_70:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00120a00>Hach, ich schmelze dahin...\nÄhem, zurück zur Arbeit!\n\n\n<0x10009:0x000e1000>Willst du das Item-Lager nutzen?\n\n\n\n[1-]Ja[2]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x000e100f>Wirklich? Ich bin so glücklich...")
          							flw_72:
/*< 72>*/ 							printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x000d0f0a>Ähem...\nEntschuldige bitte... Das ist mir jetzt\nwirklich peinlich!\n\n<0x10009:0x00080a00>Also! Du willst bestimmt etwas bei mir\nabgeben, <color red<Schatz>coloroff>?\n\n[1-]Ja[2]Nein")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000f0f0d>Ach, sag es nicht so laut!\nDu machst mich ja ganz wild!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x000d0f0a>Ah, ich bin so glücklich, wenn du bei\nmir bist!")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>Ach, da bist du ja schon wieder!\nHabe ich dir etwa gefehlt? Tihihi...\n\n\nÄhem... Willst du vielleicht ein paar\nSachen hier verstauen?\n[1-]Ja[2]Nein")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "Willkommen im Item-La...<0x10009:0x00000005>\nOh, du bist's!")
/*<279>*/ 				wait_frames(15)
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "Ähem...\nIch...\n\n[1-]Was ist denn?[2-]Du bist so anders...")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x000a0f18>Ähem... Ich...\nAch, nichts, hihi...")
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 64 */ "Es ist nicht so, dass ich jetzt ganz aus\ndem Häuschen wäre...\n\n\nAber so oft, wie du jetzt bereits bei mir\nwarst, bist du eben schon mehr als ein\nnormaler Kunde für mich...\n\n<0x10009:0x00101405>Ähem, ich...\nWas sage ich da eigentlich?\n\n\nEntschuldige bitte, ich bin etwas neben\nder Spur heute...\n\n\n<0x10009:0x00070800>Ah, also...\nDu bist ja bestimmt hier, um das\nItem-Lager zu nutzen, oder?\n\n[1-]Ja[2]Nein")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000a0f18>Das... Das glaube ich nicht...\nOder doch, hihi?")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000001>Willkommen im Item-Lager!\nSag bloß, du bist nur meinetwegen\nhierher gekommen... Hihi!\n\nAber sag mal, willst du denn das\nItem-Lager nutzen?\n[1-]Ja[2]Nein")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>Willkommen im Item-Lager!\nAch, schon wieder du?\n\n\nDich sehe ich ja häufig in letzter Zeit.\nIch glaube fast, du bist mein bester\nKunde... Tihihi!\n\n<0x10009:0x00000004>...\nMoment mal!\n\n\nKo... Kommst du...\n\n\n\nKommst du etwa wegen MIR?\n\n\n\n[1-]Was?!?[2-]Klar!")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000002>Nicht? Wirklich nicht?\n\n\n\nNa ja, wieso solltest du auch?\n\n\n\n<0x10009:0x000a0c00>Das... Das ist ja auch überhaupt kein\nProblem, wirklich nicht...")
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00070800>Zurück zum Geschäft... Möchtest du\ndas Item-Lager nutzen?\n[1-]Ja[2]Nein")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000002>Was? Ehrlich?\n\n\n\nDas sagst du doch jetzt nur so, um\nmir zu schmeicheln, oder?\n\n\n<0x10009:0x000a0c00>Aber ein wenig glücklich macht es\nmich ja schon...")
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
/*<106>*/ 								printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000009>Es war schön mit dir, mein Schatz!\nKomm bald wieder ins Lager, ja?")
          							  case 1:
/*<109>*/ 								printf(/* textboxtype: 1, unk: 1, line: 104 */ "<0x10009:0x0000000d>Schatz, du schon wieder!\nWenn du so oft kommst, fliegt unser\nsüßes Geheimnis noch auf!\n\nWas willst du denn?\n[1-]Reden[2-]Nichts[3-]Items lagern")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00080008>Auch ich habe dir viel zu sagen,\naber im Augenblick ist es wirklich\netwas ungünstig...\nKomm demnächst wieder!")
          								  case 1:
/*<112>*/ 									printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00080a00>Du klingst ja schon fast wie\nein Ehemann! Fang bitte nicht so an,\nSchatz, das ist unromantisch!")
          								  case 2:
/*<113>*/ 									printf(/* textboxtype: 1, unk: 0, line: 107 */ "...\nDas kannst du tagsüber im Item-Lager\nmachen!\n\n<0x10009:0x000e1000>Ist das wirklich alles, an was du\ndenkst? Das enttäuscht mich jetzt\naber...")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000014>Es ist schon in Ordnung...\nAber lass mich jetzt alleine, ja?")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00000013>In letzter Zeit ist mein Vater irgendwie\nimmer guter Laune...\n\n\nUnd das, obwohl ich mich so schlecht \nfühle... Ob er wohl weiß, dass mir das\nHerz gebrochen wurde?")
          									  case 1:
/*<116>*/ 										printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00000014>Ich wollte ja nicht mehr daran denken,\naber in der Nacht fühle ich mich oft\neinsam. So ist das, wenn einem das\nHerz gebrochen wurde...")
          									}
          								  case 1:
/*<114>*/ 									printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x0000000e><heroname>!\nTut mir leid...<0x10009:0x00000014>")
          								}
          							}
          						}
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 31}
/*<224>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 225, 'param3': 47}
/*<225>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 						wait_frames(1)
/*<226>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 227, 'param3': 17}
/*<227>*/ 						{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 229, 'param3': 13}
/*<229>*/ 						set_camera(12, 0)
/*<228>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 223, 'param3': 48}
/*<223>*/ 						printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000005><heroname>! Vielen Dank, dass\ndu gekommen bist!\n\n\n<0x10009:0x000e0f00>Also, ich wollte dich eigentlich etwas\nfragen...\n\n\nAch, ich frage jetzt einfach mal\ndrauf los!")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "Wie findest du mich? Was hältst du von\nmir? Also...\n\n\n[1-]Ich mag dich![2-]Na ja, du bist\ndie Item-Frau.")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x000e100f>Wirklich? Meinst du das ernst?\n\n\n\n[1-]Klar![2-]Hehe...")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00080a08>Du machst mich so glücklich! Aber ich\nwill es noch einmal aus deinem Mund\nhören... Sag schon...\n\n<0x10009:0x000e1000>Magst du mich wirklich-wirklich?\n\n\n\n[1-]Ja![2-]Tut mir\nleid...")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x000d0f0a>Eine Lüge würde ich nicht verkraften!\nAlso?\n\n\n[1-]Ich meine es ernst![2-]War gelogen...")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00080a09>Danke!\nAuch ich mag dich, mein Schatz!\nTut mir leid, dass ich dich so auf\ndie Probe gestellt habe!")
/*<318>*/ 										wait_frames(45)
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										wait_frames(30)
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										wait_frames(30)
/*<314>*/ 										printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000013>Aber ich weiß es ja...\n\n\n\nIm Augenblick hast du größere\nProbleme als die Liebe, richtig?\n\n\n<0x10009:0x000e1000>Du hast... einen Auftrag, ja?\n\n\n\n<0x10009:0x000d0f00>Ich meine, sonst würdest du ja nicht\nandauernd zu mir kommen und Sachen\nbei mir abgeben...\n\nMach dir keine Sorgen! Ich werde\nimmer auf dich warten und deine\nGegenstände in Empfang nehmen!\n\n<0x10009:0x000e1000>Und wenn du deinen Auftrag erfüllt\nhast, werde ich dich meinem Vater\nvorstellen...\n\n<0x10009:0x000b0d00>So lange bewahren wir unser kleines\nGeheimnis... Schatz! Komm bald\nwieder, ja?")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000f1214>Nun gut! Das denkst du also, ja?\nIch verstehe...\n\n\nTut mir leid, dass ich dich derart\nbelästigt habe.")
/*<329>*/ 										wait_frames(45)
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										wait_frames(30)
/*<332>*/ 										printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000013>Ich brauche dein Mitleid nicht!\n\n\n\nDas ist schon in Ordnung.\nIch werde damit klarkommen...\n\n\n<0x10009:0x00140d00>Komm wieder ins Item-Lager,\nwenn du Sachen zum Einlagern hast...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										wait_frames(1)
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										wait_frames(30)
/*<327>*/ 										printf(/* textboxtype: 1, unk: 0, line: 101 */ "Aber lass mich jetzt alleine, ja?\n\n\n\nMach es gut... Schatz!")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x000f120a>Also wirklich!\n\n\n\n<0x10009:0x000e1000>Du willst mir also sagen, dass ich für\ndich einfach nur die Frau aus dem\nLaden bin?\n\n[1-]Aber ich hab\ndich gern![2-]Was denn sonst?")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x000f120f>Was?\nDann interessierst du dich also gar\nnicht für mich?\n\n<0x10009:0x000e1000>Ach!\nDas sagst du doch nur, um deine\nVerlegenheit zu verbergen... Stimmt's?\n\n[1-]Ja[2-]Nein")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00080a08>Wie? Du magst mich also doch?!?\n\n\n\n[1-]Klar![2-]Tut mir\nleid...")
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
/*<298>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x000f1210>Das...\n\n\n\n<0x10009:0x000d0f00>Ha... Habe ich mich da etwa gerade\nverhört?!?\n\n\n<0x10009:0x000e1000>Sag schon, was bin ich für dich?\n\n\n\n[1-]Eine liebe\nPerson[2-]Die Item-Frau")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000007><color red<Schatz>coloroff>, wie schön, dich zu sehen!\n\n\n\nIch bin so froh, dass du heute zu mir\ngekommen bist!")
          				}
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000015>Sieh an! Du kommst sogar schon zu\nmir nach Hause...\n\n\nHast du mir vielleicht etwas\nBesonderes zu sagen, hihi?")
          			}
          		  case 1:
/*<100>*/ 			printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000017>So sehr du mich auch magst,\nmein Freund, in meinen vier Wänden\nhast du nichts verloren!\n\n<0x10009:0x00010800>Du leidest wohl unter einem\nübertriebenen Selbstbewusstsein, was?")
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000002>Ach...\nIrgendwo muss doch mein Traumprinz\nzu finden sein...\n\n<0x10009:0x00010800>Ähem, was hast du in meinem\nHaus verloren?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>Vielen Dank, <heroname>!\n\n\n\n<0x10009:0x000a0900>Jetzt fühle ich mich wieder wohl hier\ndrin. Das Haus ist viel schöner, wenn es\nab und zu geputzt wird!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00010909>Also, hier ein kleiner Lohn für\ndeine harte Arbeit... <color red<20 Rubine>coloroff>!<0x10009:0x000a0d00>")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00010900>Wenn du Lust hast, kannst du mir\ngerne wieder einmal helfen. Du weißt\nja, ich zahle gut!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x000a0900>Aber... Cuco darf das niemals\nerfahren, verstehst du?\n\n\n<0x10009:0x00080900>Wenn er herausfindet, dass ich dich\nfürs Putzen bezahle... Ich mag gar\nnicht daran denken! Also kein Wort,\nja?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>Vielen Dank, <heroname>!\n\n\n\n<0x10009:0x000a0900>Jetzt fühle ich mich wieder wohl hier\ndrin. Das Haus ist viel schöner, wenn es\nab und zu geputzt wird!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000002>Sehr fleißig, <heroname>!\n\n\n\nLass mich wissen, wenn du fertig bist,\ndamit ich dir deine Belohnung geben\nkann.\n\n<0x10009:0x00010900>Oder willst du für heute aufhören?\n\n\n\n[1-]Ja[2]Noch nicht")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000a>Wie schade...\nBis zum nächsten Mal!")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Na, dann mach mal schön den <color red<Boden>coloroff>\nweiter sauber!\n\n\nUnd vergiss nicht, auch den Staub an\nden <color red<Fenstern>coloroff>, auf den <color red<Möbeln>coloroff> und dem\n<color red<Bett >coloroff>zu beseitigen, ja?")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Moment mal, <heroname>!\nIch muss dir doch noch deinen Lohn\ngeben! Komm mal kurz her!")
          	  case 1:
/*<133>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000004>Aber <heroname>,\ndu bist doch noch gar nicht fertig!\n\n\nOder hast du etwa genug für heute?\n\n\n\n[1-]Ja[2]Noch nicht")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000a>Wie schade...\nBis zum nächsten Mal!")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Na, dann mach mal schön den <color red<Boden>coloroff>\nweiter sauber!\n\n\nUnd vergiss nicht, auch den Staub an\nden <color red<Fenstern>coloroff>, auf den <color red<Möbeln>coloroff> und dem\n<color red<Bett >coloroff>zu beseitigen, ja?")
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
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004><heroname>, willst du etwa\nschon nach Hause gehen?\n\n\nFalls du unterwegs Cuco begegnest,\nrede mal mit ihm, ja?")
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
/*<274>*/ 	wait_frames(10)
/*<215>*/ 	set_camera(10, 0)
/*<216>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000d08>Sieh an!\nDu hast den ganzen Staub beseitigt,\n<heroname>! Klasse!\n\n<0x10009:0x000a0900>Jetzt fühle ich mich endlich wieder\nwohl in diesem Haus. Komm her, ich\ngebe dir deine Belohnung!")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x1f0a0309>Das war ganz besonders teuer! Etwa\n<color red<30 Rubine>coloroff> wirst du mir dafür wohl\ngeben müssen. Tja, das hast du nun\ndavon, du Rabauke!")
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
/*<386>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<394>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<398>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<359>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x1f0a0309>Weißt du, wie viel so etwas wert ist?\nDafür musst du mir etwa <color red<20 Rubine\n>coloroff>Entschädigung zahlen. Das weiß ich\nauch ohne Gutachter...")
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
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<350>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<346>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x1f0a0309>Weißt du, wie selten so etwas ist?\n<color red<10 Rubine>coloroff> musst du mir dafür schon\ngeben. Oder mehr, oder weniger...\nWie auch immer! Geld her, du Rüpel!")
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
/*<366>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<370>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<374>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*<378>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
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
/*< 20>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000001>Hallo, <heroname>!\n\n\n\nIch würde mich freuen, wenn du mir\ndemnächst mal wieder helfen könntest!")
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
/*<125>*/ 										printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080d01>Willst du mir nicht ein wenig\nbeim Putzen helfen? Du weißt doch,\nwie ungern ich das mache...\n\n<0x10009:0x000a0900>Ich gebe dir auch ein schönes\nTaschengeld... Da kannst du nicht\nablehnen, oder?\n\n[1-]Ist gut...[2]Doch!")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00010d07>Das freut mich!\nDu bist wirklich ein Prachtkerl,\n<heroname>!\n\n<0x10009:0x00010d00>Also dann, an die Arbeit!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0001090a>Was?!?\nDu bist wirklich zu nichts zu\ngebrauchen, <heroname>!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Wie geht's dir, <heroname>?\n\n\n\n<0x10009:0x00080900>Hier ist schon wieder alles total\nverstaubt! Willst du mir nicht noch\neinmal deine starken Arme leihen?\nIch zahle gut... Na, wie sieht's aus?\n[1-]Bin dabei![2]Nee!")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000001>Hallo <heroname>!\n\n\n\n<0x10009:0x00080900>Was soll ich sagen?\nCuco ist sauer auf mich...\n\n\n<0x10009:0x000a0900>Er meint, dass ich keine Rubine für\neine Haushälterin ausgeben soll...\n\n\n<0x10009:0x00010c00>...\n\n\n\n<0x10009:0x00080d09>Allerdings...\nAllerdings habe ich mir gedacht, dass\ndu ja gar keine Haushälterin bist!\n\n<0x10009:0x00080900>Von daher dürfte es doch in Ordnung\nsein, wenn du mir weiter zur Hand\ngehst, oder?")
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
/*< 15>*/ 							printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080d01>Willst du mir nicht ein wenig\nbeim Putzen helfen? Du weißt doch,\nwie ungern ich das mache...\n\n<0x10009:0x000a0900>Ich gebe dir auch ein schönes\nTaschengeld... Da kannst du nicht\nablehnen, oder?\n\n[1-]Ist gut...[2]Doch!")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000a0d07>Das freut mich!\nDu bist wirklich ein Prachtkerl,\n<heroname>!\n\n<0x10009:0x00080904>Der Besen?\nWas weiß ich, wo der ist?!?\n\n\n<0x10009:0x00090900>Du kannst ja den Staub einfach\n<color red<wegblasen>coloroff>, mit Wind oder so...\n\n\n<0x10009:0x00010900>Wie du das machst, ist mir ja egal,\nsolange nur der Staub <color red<davonfliegt>coloroff>!\n\n\n<0x10009:0x00080902>Also, mach dich an die Arbeit,\nmein Junge!")
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
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0001090a>Was?!?\nDu bist wirklich zu nichts zu\ngebrauchen, <heroname>!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080d01>Hallo <heroname>,\nSchön, dich zu sehen!\n\n\n<0x10009:0x00010900>Willst du mir nicht beim Putzen\nhelfen? Du weißt doch, wie ungern ich\ndas mache...\n\n<0x10009:0x000a0900>Es soll dein Schaden nicht sein! Na?\n\n\n\n[1-]Gut![2]Lieber nicht.")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Grüß dich, <heroname>!\nWie geht's?\n\n\n<0x10009:0x00080900>Tut mir leid, <heroname>,\ndass mein Haus heute wieder so\nschmutzig ist.\n\n<0x10009:0x00090900>Cuco sagt mir immer, dass ich\nputzen soll, aber das mache ich doch\nso ungern...\n\n<0x10009:0x00080900>Willst du mir helfen, <heroname>?\nIch werde mich natürlich erkenntlich\nzeigen...\n\n[1-]Gerne![2]Putzen?!?")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000002>Ist Cuco auch schön fleißig in\nder Schule?\n\n\nEr ist ganz anders als ich, deshalb\nmache ich mir keine großen Sorgen um\nihn.\n[1-]So viel Staub...[2-]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00010909>Den ganzen Tag lang putzen,\nund am nächsten Tag ist es gleich\nwieder schmutzig...\n\n<0x10009:0x000a090a>Und dabei hasse ich alles, was mit\nHausarbeit zu tun hat! Manchmal\nwürde ich mir eine Hilfe wünschen...")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010904>Was ist denn? Willst du mir etwas\nsagen?")
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000d01>Hallo, <heroname>!\nHereinspaziert!\n\n\n<0x10009:0x000a0900>Ist Cuco auch schön fleißig in\nder Schule?")
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
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 1, line: 24 */ "Wie oft habe ich dir das schon gesagt,\nMutter?")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	wait_frames(30)
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	wait_frames(30)
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "Jetzt reg dich doch nicht so auf, mein\nkleiner Schatz!")
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 26 */ "Natürlich reg ich mich auf!\n\n\n\nIch weiß doch, dass du <color red<jemanden\nbezahlst>coloroff>, damit er unser Haus putzt!\n\n\nWollten wir nicht Brot von den Rubinen\nkaufen?!?\n\n\nIch komme auf der Ritterschule kaum\nüber die Runden, weil du die ganze Zeit\nunsere Rubine verplemperst!\n\nUnd nebenbei schufte ich auch noch\nnachts, nur damit du hier den ganzen\nTag über faulenzen kannst!\n\nAlso wirklich! Was bist du nur für eine\nRabenmutter?!?")
/*< 29>*/ 	story_flags[577 /* us: 805A9B1B 0x01, jp: 805ACD9B 0x01 */] = true;
/*<179>*/ 	wait_frames(1)
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 286, 'param3': 32}
/*<286>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 33, 'param3': 32}
/*< 33>*/ 	wait_frames(90)
/*< 32>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 274, 'next': 171, 'param3': 15}
/*<171>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 281, 'param3': 50}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 283, 'param3': 17}
/*<283>*/ 	wait_frames(30)
/*<170>*/ 	set_camera(2, 0)
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3072, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Sag mal, <heroname>...\nWas machst du eigentlich hier?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x120b1100>Du hast aber nicht mit angehört,\nwas ich gerade gesagt habe, oder?\n[1-]Was denn?[2-]Tschuldigung!")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x12011100>Ach, nichts...\n\n\n\n<0x10009:0x12080400>Ich muss dann mal wieder auf meinen\nRundgang. Pass auf, wenn du im\nDunkeln nach Hause gehst!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x12011100>Du hast es also gehört!\n\n\n\n<0x10009:0x120f1100>Ja, in Wirklichkeit laufe ich nachts\nPatrouille, um mir ein wenig Geld\nnebenbei zu verdienen.\n\n<0x10009:0x12081100>Du kannst mich ruhig verachten dafür!\nAber du bist auch nicht viel besser!\nHörst fremden Leuten bei ihren\nPrivatgesprächen zu...\n<0x10009:0x120c0c00>Also, Schwamm drüber! Vergessen wir\neinfach, dass wir uns heute\nbegegnet sind!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00101100>Hmmm...<pause 30> In letzter Zeit sehe ich hier\ngar keine Monster mehr.\n\n\n<0x10009:0x00ffff00>Woran mag das liegen? Andererseits...\nEs hat ja auch etwas Gutes, wenn es\nnachts etwas friedlicher zugeht.")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "Hallo, <heroname>!\nNachts ist es dunkel, also pass auf,\nwohin du trittst!\n\n<0x10009:0x00110c09>Und bitte kein Wort zu niemandem\nüber diese Sache, ja?")
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
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "<heroname>,\nich fühle mich wirklich schlecht, weil\ndu diese Szene mitbekommen hast...\n\n<0x10009:0x000f1100>Es ist mir furchtbar peinlich, aber\nmeine Mutter ist wirklich wahnsinnig\nfaul! Ich weiß nicht, was ich mit ihr\nmachen soll!\n<0x10009:0x00080c0b>Aber um mich musst du dir trotzdem\nkeine Sorgen machen!\n\n\n<0x10009:0x00011100>Ich frage mich nur, wer bei uns immer\ndas Haus putzt...\n\n\n<0x10009:0x00080c16>Wer könnte so blöd sein und meiner\nMutter diese Aufgabe abnehmen?")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "Hey, <heroname>!\nEine ruhige Nacht im Wolkenhort,\nfindest du nicht?\nUnd das alles dank mir.\n<0x10009:0x000c0400>Es ist die Aufgabe von uns Rittern,\neine Welt zu schaffen, in der alle sich\nwohlfühlen.\n\n<0x10009:0x00010c52>Moment...<pause 30> Was soll dieser zweifelnde\nBlick?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<heroname>, auch du wirst das\neines Tages verstehen, wenn du ein\nechter Ritter geworden bist.")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "Hey, <heroname>!\nPass bloß auf! In der Nacht sind allerlei\nMonster unterwegs!\n\n<0x10009:0x000b0400>Ich mache hier meinen Rundgang und\nsehe nach dem Rechten!\n\n\n<0x10009:0x00080404>Um diese Zeit kriechen die Geister und\nUngeheuer aus ihren Löchern...\n\n\nEs ist die Pflicht eines Ritters, die\neinfachen Menschen zu beschützen,\nfindest du nicht?\n\n[1-]Du bist klasse![2-]Dein Nebenjob?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00090c09>Was sagst du da? Ist es nicht normal\nfür einen Ritteranwärter, so etwas zu\ntun? Für mich jedenfalls ist es das!\n\nDie Sicherheit und der Dank der\nDorfbewohner sind mir Belohnung\ngenug.\n\n<0x10009:0x00080400>Das ist es, was einen Ritter ausmacht.\n<0x10009:0x00000005>Und auch du wirst das eines Tages\nverstehen, <heroname>.")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000c0c17><heroname>!\nIch beginne, an deinen hehren\nAbsichten zu zweifeln...\n\nMan wird nicht Ritter, um damit Geld\nzu verdienen!\n\n\n<0x10009:0x00080405>Ich jedenfalls werde Ritter, um die\nSicherheit der Menschen zu\ngarantieren. Ihr Dank ist mir\nBelohnung genug...")
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
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000009>Jetzt hast du einfach meine wertvollen\nAntiquitäten zerstört!\n\n\nBeim nächsten Mal bekommst du was\nzu hören!")
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000007>Ich sammle Antiquitäten, das ist\nmein Hobby! Viele der Gegenstände\nhier sind äußerst wertvoll!\n\nPass ja auf, dass du nichts davon\nkaputtmachst!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x1f00000a>Was soll das, du Flegel?!?")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x1f0a0300>Schon wieder du?!? Warum tust du\nmir das an?!?")
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
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 50 */ "Du wütest hier rum, obwohl du nichts\nauf der hohen Kante hast?\nGeh mir aus den Augen, du Unhold!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "Wie, du hast überhaupt keine\nRubine?!?\n\n\nMachst hier alles kaputt und kannst\nmich nicht mal dafür entschädigen?\nVerschwinde, aber dalli!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x1f090300>Einfach so meine teuren Antiquitäten\nzu zerstören!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x1f090300>Was fällt dir ein, meine kostbaren\nAntiquitäten kaputtzuschlagen!\n\n\nDie wirst du mir ersetzen, du Rabauke!\n\n\n\n<0x10009:0x1f0b0700>Lass mal sehen... Ich schätze den Wert\nauf etwa... <color red<20 Rubine>coloroff>! Ein paar mehr\noder weniger, was macht das schon!\n\n<0x10009:0x1f010305>Was sagst du da, du frecher Bengel?\nIch soll mir den Wert einfach nur\nausgedacht haben?\n\n<0x10009:0x1f090309>Pah! Erzähl doch keinen Blödsinn!\nIch habe das ehrlich berechnet. Und\njetzt will ich keine Ausflüchte mehr\nhören! Her mit dem Geld, sofort!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x1f0a0300>Beim nächsten Mal bist du dran!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Was soll das denn heißen?!?\nSo viele Rubine hast du nicht?\nDann gib mir eben das, was du hast!\n\nUnd beim nächsten Mal passt du\ngefälligst auf, verstanden?")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "Wie, du hast überhaupt keine\nRubine?!?\n\n\nMachst hier alles kaputt und kannst\nmich nicht mal dafür entschädigen?\nVerschwinde, aber dalli!")
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
/*<259>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "")
/*<290>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 43, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(6, 0)
/*<285>*/ 	make_actor_do_something(0, 43)
/*<293>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 289, 'param3': 24}
/*<289>*/ 	wait_frames(10)
/*<260>*/ 	changeScene(0, 0) // 
          }

