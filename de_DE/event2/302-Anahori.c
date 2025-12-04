          void entrypoint_302_01() {
          	start()
/*< 19>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3585, 'next': 16, 'param3': 13}
/*< 16>*/ 		switch (story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */]) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "Herzlich willkommen!")
/*<156>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 53, 'param3': 13}
          			flw_53:
/*< 53>*/ 			switch (context_related2(1)) {
          			  case 0:
/*< 84>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 54, 'param3': 13}
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Du kannst so lange nach Rubinen\ngraben, bis du auf eine Bombe stößt!\nHast du Lust auf meine spannende\n<color blue<Risiko-Rubinjagd>coloroff>?\n<0x10009:0x00141614>Oh, du siehst ganz schön müde aus.\nKomm wieder, wenn du deine Herzen\naufgefüllt hast.")
/*<118>*/ 				set_camera(5, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "Darf ich dir vielleicht diesen Platz\ndort drüben anbieten? Dort kannst\ndu dich erholen.")
          			  case 1:
/*< 83>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 6, 'next': 1, 'param3': 13}
/*<  1>*/ 				printf(/* textboxtype: 1, unk: 1, line: 0 */ "Du kannst so lange nach Rubinen\ngraben, bis du auf eine Bombe stößt!\nMöchtest du auf <color blue<Risiko-Rubinjagd\n>coloroff>gehen?\n[1-]Anfänger[2-]Fortgeschrittener[3-]Experte[4]Beenden")
          				flw_85:
/*< 85>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 3, 'param3': 13}
/*<  3>*/ 				switch (choice(4)) {
          				  case 0:
/*< 58>*/ 					switch (temp_flags[14 /* 0x0 40 */]) {
          					  case 0:
          						flw_74:
/*< 74>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 87, 'param3': 12}
/*< 87>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 59, 'param3': 13}
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1, line: 10 */ "Eine Runde auf dem Feld kostet\n<color red<30 Rubine>coloroff>. Möchtest du graben?\n[1-]Graben[2]Nicht\ngraben")
/*< 88>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 37, 'param3': 13}
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*<110>*/ 							check_item_flag(501, 30)
/*<109>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 37}) {
          							  case 0:
/*< 36>*/ 								rupees += -30;
/*< 90>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 34, 'param3': 13}
/*< 34>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ich hoffe, du gräbst tonnenweise\nRubine aus! Viel Glück!")
/*< 57>*/ 								temp_flags[14 /* 0x0 40 */] = true;
/*< 33>*/ 								make_actor_do_something(0, 0)
/*< 47>*/ 								changeScene(1, 0) // 
          							  case 1:
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 35, 'param3': 13}
/*< 35>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Du hast nicht genug Rubine. Komm\nwieder, wenn du dir das Spiel leisten\nkannst.")
          							}
          						  case 1:
/*< 75>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 38, 'param3': 12}
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "An welcher Schwierigkeitsstufe\nmöchtest du dich versuchen?\n[1-]Anfänger[2-]Fortgeschrittener[3-]Experte[4]Nicht\ngraben")
          							goto flw_85
          						}
          					  case 1:
/*< 21>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "Das Anfängerfeld bietet weniger Orte\nzum Graben. Genau das Richtige für\nEinsteiger.")
          						goto flw_74
          					}
          				  case 1:
/*< 62>*/ 					switch (temp_flags[15 /* 0x0 80 */]) {
          					  case 0:
          						flw_76:
/*< 76>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 12}
/*< 91>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 22, 'param3': 13}
/*< 22>*/ 						printf(/* textboxtype: 1, unk: 1, line: 12 */ "Eine Runde kostet <color red<50 Rubine>coloroff>.\nMöchtest du graben?\n[1-]Graben[2]Nicht\ngraben")
/*< 92>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 31, 'param3': 13}
/*< 31>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							switch (has_rupees(50)) {
          							  case 0:
/*< 30>*/ 								rupees += -50;
/*< 96>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 27, 'param3': 13}
/*< 27>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ich hoffe, du gräbst tonnenweise\nRubine aus! Viel Glück!")
/*< 60>*/ 								temp_flags[15 /* 0x0 80 */] = true;
/*< 26>*/ 								make_actor_do_something(0, 0)
/*< 45>*/ 								changeScene(2, 0) // 
          							  case 1:
/*< 95>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 29, 'param3': 13}
/*< 29>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Du hast nicht genug Rubine. Komm\nwieder, wenn du dir das Spiel leisten\nkannst.")
          							}
          						  case 1:
/*< 77>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 12}
/*< 32>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "An welcher Schwierigkeitsstufe\nmöchtest du dich versuchen?\n[1-]Anfänger[2-]Fortgeschrittener[3-]Experte[4]Nicht\ngraben")
          							goto flw_85
          						}
          					  case 1:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "Das Feld für Fortgeschrittene bietet\nmehr Orte zum Graben. Aber hüte dich\nvor fiesen <color yellow<Rubin-Fallen>coloroff>!")
          						goto flw_76
          					}
          				  case 2:
/*< 64>*/ 					switch (temp_flags[16 /* 0x3 01 */]) {
          					  case 0:
          						flw_78:
/*< 78>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 93, 'param3': 12}
/*< 93>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5638, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 14 */ "Eine Runde kostet <color red<70 Rubine>coloroff>.\nMöchtest du graben?\n[1-]Graben[2]Nicht\ngraben")
/*< 94>*/ 						{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 24, 'param3': 13}
/*< 24>*/ 						switch (choice(2)) {
          						  case 0:
/*<113>*/ 							check_item_flag(501, 70)
/*<112>*/ 							switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 39}) {
          							  case 0:
/*< 15>*/ 								rupees += -70;
/*< 98>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5400, 'next': 6, 'param3': 13}
/*<  6>*/ 								printf(/* textboxtype: 1, unk: 0, line: 1 */ "Ich hoffe, du gräbst tonnenweise\nRubine aus! Viel Glück!")
/*< 61>*/ 								temp_flags[16 /* 0x3 01 */] = true;
/*<  4>*/ 								make_actor_do_something(0, 0)
/*< 46>*/ 								changeScene(3, 0) // 
          							  case 1:
/*< 97>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4633, 'next': 13, 'param3': 13}
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "Du hast nicht genug Rubine. Komm\nwieder, wenn du dir das Spiel leisten\nkannst.")
          							}
          						  case 1:
/*< 79>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 25, 'param3': 12}
/*< 25>*/ 							printf(/* textboxtype: 1, unk: 1, line: 15 */ "An welcher Schwierigkeitsstufe\nmöchtest du dich versuchen?\n[1-]Anfänger[2-]Fortgeschrittener[3-]Experte[4]Nicht\ngraben")
          							goto flw_85
          						}
          					  case 1:
/*< 65>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "Auf dem Expertenfeld befinden sich\nmehr Bomben, aber auch wertvollere\nRubine!\n\nDie Chancen, sich dort eine goldene\nNase zu verdienen, stehen wirklich\nnicht schlecht!")
          						goto flw_78
          					}
          				  case 3:
/*< 86>*/ 					{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 5379, 'next': 5, 'param3': 13}
/*<  5>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "Bitte komm bald wieder!")
          				}
          			}
          		  case 1:
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 2, line: 5 */ "Oh! Ich sehe, dies ist dein erster\nBesuch bei mir? Danke, dass du\nhier vorbeischaust!")
/*<155>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 154, 'param3': 13}
/*<154>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Mein Name ist <color blue<Cippolino>coloroff>! Es freut\nmich sehr, deine Bekanntschaft zu\nmachen!\n\nIch habe die Aufsicht über die\n<color red<Risiko-Rubinjagd>coloroff>.")
/*< 18>*/ 			story_flags[180 /* us: 805A9AE6 0x08, jp: 805ACD66 0x08 */] = true;
          			goto flw_53
          		}
          	  case 1:
/*< 69>*/ 		story_flags[185 /* us: 805A9AE9 0x01, jp: 805ACD69 0x01 */] = true;
/*<106>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 44}
/*< 72>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 20, 'param3': 12}
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Du hast <color red<<numeric arg0 0> >coloroff><color red<<0x30004:0x01cd>>coloroff> ausgegraben!")
/*< 71>*/ 		make_actor_do_something(1, 0)
/*< 39>*/ 		switch (context_related3(2)) {
          		  case 0:
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4628, 'next': 7, 'param3': 13}
/*<  7>*/ 			switch (context_related3(3)) {
          			  case 0:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "Wie bitte? Du hast nicht einen einzigen\nRubin ausgegraben? Du... du armer,\narmer Kerl...")
          				flw_103:
/*<103>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 81, 'param3': 13}
/*< 81>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 108, 'param3': 12}
/*<108>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 45}
/*< 50>*/ 				switch (story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */]) {
          				  case 0:
          					flw_55:
/*< 55>*/ 					switch (context_related2(1)) {
          					  case 0:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5640, 'next': 56, 'param3': 13}
/*< 56>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "Du siehst abgekämpft aus. Fülle deine\nHerzen wieder auf und versuche es\ndanach erneut.")
/*<116>*/ 						set_camera(5, 0)
/*<117>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "Falls du verschnaufen möchtest, nimm\nruhig auf dem Sitz dort Platz.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 1, line: 16 */ "Du solltest es gleich noch mal\nversuchen. Hast du Interesse?\n[1-]Anfänger[2-]Fortgeschrittener[3-]Experte[4]Nicht\ngraben")
          						goto flw_85
          					}
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "Tipp gefällig? Hör gut zu! <color red<Rubine mit\nniedrigem Wert >coloroff>haben selten <color red<Bomben\n>coloroff>in ihrer Nähe.\n\nJe <color red<wertvoller der Rubin>coloroff>, desto mehr\n<color red<Bomben>coloroff> befinden sich um ihn herum.\n\n\nSolltest du beim ersten Graben direkt\nauf eine Bombe stoßen...<pause 20> Dann hast du\nwohl Pech gehabt.")
/*< 52>*/ 					story_flags[181 /* us: 805A9AE6 0x10, jp: 805ACD66 0x10 */] = true;
          					goto flw_55
          				}
          			  case 1:
/*<  8>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "Du hast einen ziemlich großen\nVerlust hinnehmen müssen.\nEs tut mir wirklich leid für dich...")
          				goto flw_103
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "Schade. Du konntest deine Ausgaben\nleider nicht decken. Das nennt man\nwohl Pech...")
          				flw_102:
/*<102>*/ 				{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 80, 'param3': 13}
/*< 80>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 12}
/*<107>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 45}
          				goto flw_55
          			}
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "Tja... Keine Verluste, aber auch kein\nGewinn. Es hätte dich schlimmer \ntreffen können.")
          			goto flw_102
          		  case 2:
/*< 44>*/ 			switch (context_related2(4)) {
          			  case 0:
/*<100>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4363, 'next': 10, 'param3': 13}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "Du konntest einen kleinen, aber feinen\nGewinn erzielen! Gut gemacht!")
          				goto flw_102
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4364, 'next': 40, 'param3': 13}
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "Du hast ein kleines Vermögen sammeln\nkönnen! Glückwunsch!")
          				goto flw_102
          			}
          		}
          	  case 2:
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 73, 'param3': 44}
/*< 73>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 159, 'param3': 12}
/*<159>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Dein Ergebnis...")
/*< 70>*/ 		make_actor_do_something(1, 0)
/*< 99>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6415, 'next': 41, 'param3': 13}
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "U-u-unglaublich! Du hast alle Rubine\nausgegraben! Dafür gebe ich dir einen\nExtrapreis!")
/*< 42>*/ 		give_item(64 0x40);
          		goto flw_102
          	}
          }

          void entrypoint_302_02() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 7, unk: 0, line: 48 */ "Herzlichen Dank, dass du dich\nan der <color red<Risiko-Rubinjagd\n>coloroff>versuchen möchtest.\n\nBeachte Folgendes:\n<color red<Rubine mit niedrigem Wert \n>coloroff>haben selten <color red<Bomben >coloroff>in\nihrer Nähe.\n\nJe <color red<wertvoller der Rubin>coloroff>, desto\nmehr <color red<Bomben>coloroff> befinden sich um\nihn herum.\n\nViel Glück!")
          }

          void entrypoint_302_03() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "Du solltest allmählich zum Ende\nkommen. Dir läuft die Zeit davon!")
          }

          void entrypoint_302_04() {
/*< 68>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 1, line: 29 */ "Trödel nicht herum! Dir steht nur eine\ngewisse Zeitspanne zur Verfügung!")
          }

          void entrypoint_302_05() {
/*<114>*/ 	start()
/*<115>*/ 	printf(/* textboxtype: 1, unk: 1, line: 31 */ "<0x10009:0x00080a04>Oh. Du gönnst dir eine Pause?\nWie wäre es mit einem kleinen\nSchwätzchen?\n\nIch habe schon lange nicht mehr\ngepflegt geplaudert.\n[1-]Gerne![2]Nein...")
/*<120>*/ 	switch (choice(2)) {
          	  case 0:
/*<122>*/ 		printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x000f110c>Wundervoll!\nNun gut. Also... Gibt es etwas,\ndas du mich fragen möchtest?<0x10009:0x00080aff>[1-]Wer bist du?[2-]Schwebst du?[3-]Ist dir zu hell hier?[4]...<0x10009:0x001316ff>")
          		flw_123:
/*<123>*/ 		switch (choice(4)) {
          		  case 0:
/*<125>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00080a04>Man nennt mich <color blue<Cippolino>coloroff>.\nIch bin Inhaber der <color red<Risiko-Rubinjagd>coloroff>!\n\n\n<0x10009:0x00090b09>Ich bin die einzige und deshalb auch\ndie wichtigste Person hier! Schön, dich\nkennenzulernen!")
          				flw_128:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 1, line: 45 */ "<0x10009:0x00131806>Möchtest du mich noch etwas fragen?[1-]Wer bist du?[2-]Schwebst du?[3-]Ist dir zu hell hier?[4]...")
          				goto flw_123
          			  case 1:
/*<158>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00080a04>Man nennt mich <color blue<Cippolino>coloroff>.\nIch bin Inhaber der sagenhaften\n<color red<Risiko-Rubinjagd>coloroff>!\n\nIch bin die einzige und deshalb auch\ndie wichtigste Person hier! <0x10009:0x000d0f01>Ich freue\nmich, dich kennenzulernen!\n\n<0x10009:0x00080a09>Ich habe die <color blue<Risiko-Rubinjagd >coloroff>ins\nLeben gerufen, um anderen zu\nReichtum zu verhelfen!\n\n<0x10009:0x00101319>Doch die <color blue<Mogma >coloroff>lachen mich nur aus.\nRubine finden sei einfach, sagen sie.\nUnd keiner will spielen...\n\n<0x10009:0x00080aff>Deshalb hoffe ich, dass du mein neuer\nStammkunde wirst! Das würde mich\nwirklich freuen!")
          					flw_124:
/*<124>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          					goto flw_128
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00080a04>Man nennt mich <color blue<Cippolino>coloroff>.\nIch bin Inhaber der sagenhaften\n<color red<Risiko-Rubinjagd>coloroff>!\n\nIch bin die einzige und deshalb auch\ndie wichtigste Person hier! <0x10009:0x000d0f01>Ich freue\nmich, dich kennenzulernen!\n\n<0x10009:0x00080a09>Ich habe die <color blue<Risiko-Rubinjagd >coloroff>ins\nLeben gerufen, um anderen zu\nReichtum zu verhelfen!\n\n<0x10009:0x00101319>Doch seit Kurzem rennen hier diese\nkomischen <color red<roten Kerle>coloroff> herum und\nvertreiben mir meine Kundschaft.\n\n<0x10009:0x00080aff>Ich wünschte, es hätte jemand den\nMumm und würde ihre <color red<Wachtürme>coloroff>\nin die <sound 4>Luft jagen. Ja, das würde mich\nrichtig glücklich machen!")
          					goto flw_124
          				}
          			}
          		  case 1:
/*<130>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00080a05>Nein, ich schwebe nicht. Ich balanciere\nbloß auf meinem Schwanz.\n\n\nDas mache ich, damit Kunden meine\n<color red<Prachtklauen >coloroff>bewundern können!")
          				goto flw_128
          			  case 1:
/*<151>*/ 				set_camera(1, 0)
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00141605>Schweben? Ich? Mumpitz!\nIch balanciere nur auf dem Schwanz.")
/*<152>*/ 				set_camera(2, 0)
/*<149>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0000000a>Das mache ich, um meine beiden\n<color red<Prachtklauen >coloroff>freizuhaben!")
/*<153>*/ 				set_camera(-1, 0)
/*<150>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00080aff>Ich fühle mich jedes Mal ziemlich\ngeschmeichelt, wenn meine Kunden\nsie bewundern.\n\nDeshalb halte ich mich mit meinem\nSchwanz in der Luft. So etwas spricht\nsich herum!")
/*<129>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          				goto flw_128
          			}
          		  case 2:
/*<133>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00080a09>Es ist nicht zu hell hier. Ich trage die\nBrille nur aus modischen Gründen.")
          				goto flw_128
          			  case 1:
/*<145>*/ 				set_camera(3, 0)
/*<134>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x0014160a>Ach, du meinst wegen meiner Brille?\nDie habe ich nur auf, weil sie mich viel\nseriöser wirken lässt.")
/*<146>*/ 				set_camera(4, 0)
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00140e0b>Passend dazu habe ich mir einen\n<color red<Schnurrbart>coloroff> stehen lassen! Ich\nkämme ihn jeden Tag!")
/*<147>*/ 				set_camera(-1, 0)
/*<144>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080aff>Das versteht sich von selbst!\nZu meinem Beruf gehört schließlich\nein gepflegtes Äußeres!")
/*<132>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_128
          			}
          		  case 3:
/*<137>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<138>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<136>*/ 					switch (zone_temp_flags[2 /* 0x1 04 */]) {
          					  case 0:
/*<140>*/ 						switch (scene_flags[39 /* 0x5 80 */]) {
          						  case 0:
          							flw_139:
/*<139>*/ 							printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00101319>Hm? Nun gut.\nWenn du bereit bist, versuche dich\nruhig an meiner <color blue<Risiko-Rubinjagd>coloroff>.")
          						  case 1:
/*<141>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00101319>Hm? Nun gut.\n\n\n\n<0x10009:0x000d100c>Danke, dass du mir Gesellschaft\ngeleistet hast. Zum Dank verrate\nich dir etwas...\n\n<0x10009:0x00080a04>Siehst du diese glitzernden Steine\nin den Wänden? Das sind Teile\neiner <color red<Rubin-Ader>coloroff>.\n\nSie ist der Grund, weshalb man hier so\nviele Rubine finden kann.\n\n\nWenn du sie mit einem <color red<Projektil>coloroff><sound 4>\ntriffst, <color red<brechen >coloroff>vielleicht ein paar\nRubine heraus. Versuch es doch mal\nbei Gelegenheit!")
/*<142>*/ 							scene_flags[4 'Eldin Volcano'][39 /* 0x5 80 */] = true;
          						}
          					  case 1:
          						goto flw_139
          					}
          				  case 1:
          					goto flw_139
          				}
          			  case 1:
          				goto flw_139
          			}
          		}
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00101319>Och... Wie schade.\nNa ja, wenn du wieder fit bist,\ngeh ruhig auf <color blue<Risiko-Rubinjagd>coloroff>.")
          	}
          }

