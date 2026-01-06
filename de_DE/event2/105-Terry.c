          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "Das hier ist die <color yellow<Lebenskraft-Medaille>coloroff>!\nSie entfaltet ihre Wirkung schon, wenn\ndu sie bloß bei dir trägst. Und wie der\nName schon sagt<pause 10>.<pause 10>.<pause 10>.<pause 10>\nÄhm, um ehrlich zu sein, weiß ich gar\nnicht, was sie bewirkt! Haha! Probier\nes einfach selbst aus!\n\nIch gebe sie dir für <color red<800 Rubine>coloroff>!\n[1-]Ich kaufe sie![2]Nein, danke.")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Das hier ist die <color yellow<Lebenskraft-Medaille>coloroff>!\nSie entfaltet ihre Wirkung schon, wenn\ndu sie bloß bei dir trägst. Und wie der\nName schon sagt<pause 10>.<pause 10>.<pause 10>.<pause 10>\nÄhm, um ehrlich zu sein, weiß ich gar\nnicht, was sie bewirkt! Haha! Probier\nes einfach selbst aus!\n\n\nFür dich zum Sonderpreis! Statt <color red<800\n>coloroff>für nur <color red<400 Rubine>coloroff>!\n[1-]Ich kaufe sie![2]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 67, 'param3': 13}
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "Oh! Du bist ja schon wieder hier! Das\nfreut mich sehr. Wirf doch mal einen\nBlick auf mein neues Sortiment!")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "Oh! Du bist doch der Junge, der meinen\n<color blue<Dämonenkäfer >coloroff>wiedergefunden hat!\n\n\nAls Dank darfst du dir einen Artikel\naussuchen, den ich dir zum halben\nPreis verkaufe, egal welchen!")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Oh! Herzlich Willkommen!\n\n\n\nWas hast du gefunden? Oh, darüber\nreden wir besser nicht jetzt, sonst\nstürzen wir noch ab!\n\nWir können uns aber nachts darüber\nunterhalten. Leg dich einfach hier ins\nBett und ruh dich aus!")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Oh! Herzlich Willkommen!\n\n\n\nIch bitte dich, finde meinen kleinen\nsüßen <color blue<Dämonenkäfer>coloroff>!\n\n\nIch kann ihn einfach nicht vergessen,\nund es macht mich verrückt, ihn nicht\nbei mir zu haben!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Wie? Du willst wissen, was ich hier auf\ndem Fahrrad mache?\n[1-]Genau![2]Eigentlich\nnicht...")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10007:0x00000015>Oh! Du bist aber ein ganz schön\nneugieriges Kerlchen!\n\n\nDieses Fahrrad versorgt mein ganzes\nHaus hier mit Strom! Ich nenne das\n<color blue<umweltbewusste Energieversorgung>coloroff>!\nToll, oder?\nJetzt, wo du hier bist, muss ich leider\nnoch schneller in die Pedale treten,\ndamit wir nicht abstürzen!")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Ah<0x10006:0xfecd>...<0x10006:0x00cd> Tut mir leid! Ich habe hier eine\nMenge toller Sachen, also sieh dich\neinfach um!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "Gut! Dann würde ich dich bitten, mich\nnicht zu unterbrechen!\n\n\nJetzt, wo du hier bist, muss ich nämlich\nnoch schneller in die Pedale treten,\ndamit wir nicht abstürzen!")
/*< 88>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 27, 'param3': 13}
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2838, 'next': 188, 'param3': 13}
/*<188>*/ 								switch (zone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0, line: 9 */ "Oh! Wenn du möchtest, können wir uns\nja später ein wenig unterhalten.\n\n\nLeg dich einfach ins Bett und warte, bis\nes Nacht wird, dann habe ich Zeit für\neinen Plausch.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000b00>Oh<pause 10>.<pause 10>.<pause 10>.<pause 10>!\nImmer hereinspaziert,<pause 20> verehrter\nKunde<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\nHm?<pause 20>\nMir scheint es nicht besonders gut zu\ngehen?\n\nAch, ich kann mich nicht verstellen...\n\n\n\nIm Moment bin ich leider ein wenig\nbeschäftigt, aber wir können uns\nnachts unterhalten. Leg dich einfach\nhier ins Bett und schlaf eine Runde!")
/*<189>*/ 									zone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 12}
/*<138>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 149, 'param3': 13}
/*<149>*/ 	zone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "Mit dieser <color yellow<Zusatztasche >coloroff>kannst du\nein Item mehr bei dir tragen!\n\n\nDamit werden deine Reisen um ein\nVielfaches angenehmer! Was sagst\ndu dazu? Sie kostet nur <color red<600 Rubine>coloroff>!\n\nWas? Du sagst, beim letzten Mal hätte\nich weniger verlangt? Nein, das bildest\ndu dir bloß ein!\n\nAlso, <color red<600 Rubine >coloroff>und basta! Willst du\nsie nun kaufen?\n[1-]Sehr gern![2]Nein, danke.")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Mit dieser <color yellow<Zusatztasche >coloroff>kannst du\nein Item mehr bei dir tragen!\n\n\nDamit werden deine Reisen um ein\nVielfaches angenehmer! Ich gebe sie\ndir zum halben Preis, also insgesamt\nfür nur <color red<300 Rubine>coloroff>!\nWas? Du sagst, beim letzten Mal hätte\nich weniger verlangt? Nein, das bildest\ndu dir bloß ein!\n\nAlso, <color red<300 Rubine>coloroff>, der Preis steht!\nWillst du sie nun kaufen?\n[1-]Sehr gern![2]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10007:0x00000015>Oh! Es ist selten, dass jemand den\nanstrengenden Weg hierher findet.\n\n\nDies ist mein Laden! Hier gibt es alles,\nwas dein Herz begehrt. Sieh dich nur in\nRuhe um!\n\nAh, eine Sache noch! Es wäre nett,\nwenn du nicht nur gucken, sondern\nauch etwas kaufen würdest!")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "Mit dieser <color yellow<Zusatztasche >coloroff>kannst du\nein Item mehr bei dir tragen!\n\n\nDamit werden deine Reisen um ein\nVielfaches angenehmer! Was sagst du\ndazu? Sie kostet nur <color red<1200 Rubine>coloroff>!\n\nWas? Das ist zu teuer? Nun, es zwingt\ndich ja niemand, sie zu kaufen...\n[1-]Also gut...[2]Kein\nInteresse!")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Mit dieser <color yellow<Zusatztasche >coloroff>kannst du\nein Item mehr bei dir tragen!\n\n\nDamit werden deine Reisen um ein\nVielfaches angenehmer! Nur für dich\nzum halben Preis für günstige <color red<600 statt\n1200 Rubine>coloroff>!\nWas? Das ist zu teuer? Nun, es zwingt\ndich ja niemand, sie zu kaufen...\n[1-]Also gut...[2]Kein\nInteresse!")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 12}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 181, 'param3': 13}
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Das hier ist die <color yellow<Insekten-Medaille>coloroff>! Sie\nentfaltet ihre geheimnisvolle Wirkung\nschon, wenn du sie bloß bei dir trägst.\n\nSie zeigt dir an, wo sich Insekten\nbefinden. Das ist doch mal richtig\nnützlich!\n\nSie ist ein wenig teuer, aber wenn du\n<color red<1000 Rubine >coloroff>entbehren kannst, gehört\nsie dir!\n[1-]Ich kaufe sie![2]Nein, danke.")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "Das hier ist die <color yellow<Insekten-Medaille>coloroff>! Sie\nentfaltet ihre geheimnisvolle Wirkung\nschon, wenn du sie bloß bei dir trägst.\n\nSie zeigt dir an, wo sich Insekten\nbefinden. Das ist doch mal richtig\nnützlich!\n\nSie kostet eigentlich <color red<1000 Rubine>coloroff>,\naber nur jetzt bekommst du sie zum\nSonderpreis von <color red<500 Rubinen>coloroff>!\n[1-]Ich kaufe sie![2]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "Deine <color red<Tasche >coloroff>ist bereits voll, du kannst\nalso nichts weiter tragen.\n\n\nUnd das Item-Lager ist auch voll!\n\n\n\nDu solltest lieber im <color red<Item-Lager>coloroff> ein\nwenig ausmisten oder Platz in deiner\n<color red<Tasche >coloroff>machen.")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Oh! Du hast nicht genug Geld! Wenn\ndas ein Scherz sein sollte, dann war er\nganz und gar nicht lustig!")
/*<151>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 1304, 'next': 7, 'param3': 13}
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "Oh! Vielen Dank! Das gibt mir Kraft,\nnoch fester in die Pedale zu treten!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Diesen Kauf wirst du nicht bereuen!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "Oh! Sieh dich ruhig noch ein wenig\nweiter um!")
/*<153>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 30, 'param3': 13}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Oh! Bitte warte einen Moment!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "Du bist ganz schön schwer! Wegen dir\nmusste ich wie ein Irrer in die Pedale\ntreten!\n\nUnd jetzt willst du gehen, ohne etwas\nzu kaufen? Pah! Na los, sieh zu, dass\ndu wegkommst!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (zone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (zone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 31, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Oh! Dieses Schild bedeutet, dass der\nArtikel ausverkauft ist.\n\n\nDank dir läuft mein Geschäft in letzter\nZeit wieder besser! Das rechne ich dir\nhoch an!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "Mit dieser <color yellow<Zusatztasche >coloroff>kannst du\nein Item mehr bei dir tragen!\n\n\nDamit werden deine Reisen um ein\nVielfaches angenehmer! Was sagst\ndu dazu? Sie kostet nur <color red<300 Rubine>coloroff>!\n[1-]Gekauft![2]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "Mit dieser <color yellow<Zusatztasche >coloroff>kannst du\nein Item mehr bei dir tragen!\n\n\nDamit werden deine Reisen um ein\nVielfaches angenehmer! Nur für dich\nzum Sonderpreis von <color red<150 Rubinen>coloroff>!\n[1-]Gekauft![2]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 70, 'param3': 12}
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 76, 'param3': 13}
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Du hast ein gutes Auge! Schön, wie das\nglänzt, oder? Ich habe es hier in der\nNähe gefunden!\n\nUm ehrlich zu sein, weiß ich gar nicht,\nwozu es gut ist, aber für <color red<1600 Rubine\n>coloroff>gehört es dir!\n[1-]Her damit![2]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "Du hast ein gutes Auge! Schön, wie das\nglänzt, oder? Ich habe es hier ganz in\nder Nähe gefunden!\n\nUm ehrlich zu sein, weiß ich nicht mal,\nwozu es gut ist, aber für <color red<800 Rubine\n>coloroff>gehört es dir!\n\nJa, du hast schon richtig gehört. Nicht\nwie üblich <color red<1600 Rubine>coloroff>, sondern nur\ndie Hälfte!\n[1-]Her damit![2]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 71, 'param3': 12}
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 79, 'param3': 13}
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Das hier ist eine überaus praktische\n<color yellow<Zusatz-Geldbörse>coloroff>.\n\n\nDamit kannst du 300 Rubine mehr\ntragen. Ist das nicht großartig? Du\nwillst sie doch bestimmt, oder?\n\nFür nur <color red<100 Rubine >coloroff>gehört sie dir! Na,\nbist du dabei?\n[1-]Natürlich![2]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Das hier ist eine überaus praktische\n<color yellow<Zusatz-Geldbörse>coloroff>.\n\n\nDamit kannst du 300 Rubine mehr\ntragen. Ist das nicht großartig? Du\nwillst sie doch bestimmt, oder?\n\nUnd nur jetzt bekommst du sie zum\nSonderpreis von sage und schreibe\n<color red<50 statt 100 Rubinen>coloroff>!\n[1-]Her damit![2]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000018>Oh! Vielen, vielen Dank! Das vergesse\nich dir niemals!\n\n\nAch, mein geliebter <color blue<Dämonenkäfer>coloroff>!\nIch werde dich nie mehr aus den Augen\nlassen! Versprochen!")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000018>Oh! Vielen, vielen Dank! Das vergesse\nich dir niemals!\n\n\nIch verkaufe dir eines meiner Items\nzum halben Preis, also vergiss nicht,\ntagsüber bei mir vorbeizuschauen!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Wie? Du möchtest mir etwas zeigen?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x001a0815>Oh! Kann es denn wirklich wahr sein?\nMein... geliebter <color blue<Dämonenkäfer>coloroff>! Oh,\ndu hast ihn wirklich gefunden!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				wait_frames(50)
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000f00>Du hast ihn gefunden! Oh, vielen Dank!\n\n\n\nWenn du mich tagsüber in meinem\nLaden besuchst, verkaufe ich dir ein\nStück deiner Wahl zum <0x10009:0x00000018>halben Preis!")
/*<133>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 115, 'param3': 42}
/*<115>*/ 				give_gratitude_crystals();
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (zone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 114, 'param3': 31}
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000001e>Ich bitte dich, finde meinen geliebten\n<color blue<Dämonenkäfer>coloroff>!")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000001e>Würdest du eventuell für mich nach\nmeinem geliebten <color blue<Dämonenkäfer\n>coloroff>suchen?\n[1-]Natürlich![2]Auf keinen\nFall.")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00110220>Oh! Meinst du das ernst? Das wäre ja\nwundervoll!")
/*< 61>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x001d0200>Mein geliebter <color blue<Dämonenkäfer>coloroff>...\nBitte finde ihn so schnell du kannst.<0x10009:0x00110b00>\nIch flehe dich an!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00010021>Du kannst das vielleicht nicht richtig\nnachvollziehen, aber mich schmerzt\ndieser Verlust unheimlich...")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000001e>Ich fliege morgen wieder zurück zum\nWolkenhort. Wenn du willst, kannst du\ndich schon mal aufs Ohr hauen!")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010b00>Nun?\n\n\n\n<0x10009:0x001d0b00>Hast du meinen <color blue<Dämonenkäfer>coloroff> schon\ngefunden?")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010600>Also, es ist so...\n\n\n\n<0x10009:0x00000b00>Ich habe etwas Wichtiges verloren...\nEs handelt sich um den <color red<Insektenkäfig>coloroff>,\nin dem mein <color blue<Dämonenkäfer >coloroff>ist!\n\n<0x10009:0x001d0b00>Ich bin furchtbar betrübt... Dieser\nKäfer war ein sehr seltenes Exemplar!\n[1-]Ich suche ihn![2]Macht doch\nnichts!")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c00>Oh<0x10006:0xfbcd>...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000001e>Du siehst aus, als würdest du wissen\nwollen, was das ist. Ich erkläre es dir!\n\n\n<0x10009:0x001c0a00>Das hier ist ein unglaublich seltenes\nInsekt, von dem es nur sehr wenige\nExemplare gibt. Ein <color blue<Dämonenkäfer>coloroff>!\n\n<0x10009:0x001b0500>Ich liebe ihn über alles! Hi hi! Ach, ich\nkönnte ihn stundenlang einfach nur\nstill betrachten...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000001e>Du hast in meinem Bett geschlafen?\nNun, du warst bestimmt sehr müde...\n\n\n<0x10009:0x00000b00>Ich bin ebenfalls müde, weil ich den\nLaden samt deinem Gewicht hierher\nfliegen musste...\n\n<0x10009:0x00000c00><pause 5>.<pause 5>.<pause 5>.<pause 5><0x10009:0x00000200>Aber vergessen wir das!\nIch bin es ja gewohnt.")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 116, 'param3': 31}
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0000021e>Oh! Du bist also aufgewacht. Du hast so\nputzig ausgesehen, als du geschlafen\nhast, da wollte ich dich nicht wecken.\n\n<0x10009:0x00000500>Aber du warst ziemlich schwer... Hi hi!\n[1-]Wie?[2-]Wo bin ich?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Was? Irgendetwas an mir ist anders\nals zuvor? Meine Sprechweise?\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>... <0x10006:0x00cd><0x10009:0x00000200>Ist dem so?<pause 30> Und wenn schon! Das ist\ndoch jetzt nicht von Bedeutung.")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>Nun, dies ist mein Zufluchtsort, wenn\nman es so nennen möchte. Weißt du,\nich übernachte immer hier.\n\n<0x10009:0x00000200>Im Grunde gibt es hier eigentlich nichts\nSehenswertes, aber ich bin für mich\nallein und genieße die Ruhe.\n\nDu kannst morgen mit mir zurück zum\nWolkenhort fliegen, dein Wolkenvogel\nschläft ja bereits tief und fest.\n\nWenn du willst, kannst du dich bis\nmorgen im Bett ausruhen.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>Nun, dies ist mein Zufluchtsort, wenn\nman es so nennen möchte. Weißt du,\nich übernachte immer hier.\n\n<0x10009:0x00000200>Im Grunde gibt es hier eigentlich nichts\nSehenswertes, aber ich bin für mich\nallein und genieße die Ruhe.\n\nDu kannst morgen mit mir zurück zum\nWolkenhort fliegen, dein Wolkenvogel\nschläft ja bereits tief und fest.\n\nWenn du willst, kannst du dich bis\nmorgen im Bett ausruhen.")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Was? Irgendetwas an mir ist anders\nals zuvor? Meine Sprechweise?\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>... <0x10006:0x00cd><0x10009:0x00000200>Ist dem so?<pause 30> Und wenn schon! Das ist\ndoch jetzt nicht von Bedeutung.")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 72, 'param3': 12}
/*< 72>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 82, 'param3': 13}
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Oh, du interessierst dich also für das\n<color yellow<Schmetterlingsnetz>coloroff>?\n\n\nDamit kannst du Insekten einfangen.\nDas macht Spaß und ist zudem auch\nnoch sehr nützlich!\n\n<color red<50 Rubine>coloroff> ist doch ein fairer Preis,\nfindest du nicht auch?\n[1-]Ich nehme es![2]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

