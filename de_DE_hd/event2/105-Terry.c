          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("Das hier ist die <y<Lebenskraft-Medaille>>!\nSie entfaltet ihre Wirkung schon, wenn Sie\nsie bloß bei sich tragen. Und wie der Name\nschon sagt<pause0A>.<pause0A>.<pause0A>.<pause0A>\nÄhm, um ehrlich zu sein, weiß ich gar nicht,\nwas sie bewirkt! Haha! Probieren Sie es\neinfach selbst aus!\n\nIch gebe sie Ihnen für <r<800 Rubine>>!\n[1]Ich kaufe sie![2-]Nein, danke.")
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
/*< 86>*/ 			printf("Das hier ist die <y<Lebenskraft-Medaille>>!\nSie entfaltet ihre Wirkung schon, wenn Sie\nsie bloß bei sich tragen. Und wie der Name\nschon sagt<pause0A>.<pause0A>.<pause0A>.<pause0A>\nÄhm, um ehrlich zu sein, weiß ich gar nicht,\nwas sie bewirkt! Haha! Probieren Sie es\neinfach selbst aus!\n\nFür Sie zum Sonderpreis! Statt <r<800 >>für nur\n<r<400 Rubine>>!\n[1]Ich kaufe sie![2-]Nein, danke.")
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
/*< 67>*/ 			printf("Oh! Sie sind ja schon wieder hier! Das freut\nmich sehr. Werfen Sie doch mal einen Blick\nauf mein neues Sortiment!")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf("Oh! Sie sind doch der Junge, der meinen\n<b<Dämonenkäfer >>wiedergefunden hat!\n\n\nAls Dank dürfen Sie sich einen Artikel\naussuchen, den ich Ihnen zum halben\nPreis verkaufe, egal welchen!")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf("Oh! Herzlich willkommen!\n\n\n\nWas haben Sie gefunden? Oh, darüber\nreden wir besser nicht jetzt, sonst\nstürzen wir noch ab!\n\nWir können uns aber nachts darüber\nunterhalten. Legen Sie sich einfach\nhier ins Bett und ruhen Sie sich aus!")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf("Oh! Herzlich willkommen!\n\n\n\nIch bitte Sie, finden Sie meinen kleinen\nsüßen <b<Dämonenkäfer>>!\n\n\nIch kann ihn einfach nicht vergessen,\nund es macht mich verrückt, ihn nicht\nbei mir zu haben!")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf("Wie? Sie wollen wissen, was ich hier auf dem\nFahrrad mache?\n[1]Genau![2-]Eigentlich\nnicht...")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf("\x0E\x01\x07\x04\x00\x15Oh! Sie sind aber ein ganz schön neugieriges\nKerlchen!\n\n\nDieses Fahrrad versorgt mein ganzes Haus hier\nmit Strom! Ich nenne das <b<umweltbewusste\nEnergieversorgung>>!\nToll, oder?\nJetzt, wo Sie hier sind, muss ich leider noch\nschneller in die Pedale treten, damit wir\nnicht abstürzen!")
          							flw_27:
/*< 27>*/ 							printf("Ah\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Tut mir leid! Ich habe hier eine Menge\ntoller Sachen, also sehen Sie sich einfach um!")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf("Gut! Dann würde ich Sie bitten, mich nicht\nzu unterbrechen!\n\n\nJetzt, wo Sie hier sind, muss ich nämlich noch\nschneller in die Pedale treten, damit wir\nnicht abstürzen!")
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
/*<190>*/ 									printf("Oh! Wenn Sie möchten, können wir uns ja\nspäter ein wenig unterhalten.\n\n\nLegen Sie sich einfach ins Bett und warten Sie,\nbis es Nacht wird, dann habe ich Zeit für\neinen Plausch.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf("\x0E\x01\x09\x04\x00\xB00Oh<pause0A>.<pause0A>.<pause0A>.<pause0A>!\nImmer hereinspaziert,<pause14> verehrter Kunde<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\nHm?<pause14>\nMir scheint es nicht besonders gut zu gehen?\n\n\nAch, ich kann mich nicht verstellen...\n\n\n\nIm Moment bin ich leider ein wenig beschäftigt,\naber wir können uns nachts unterhalten. Legen\nSie sich einfach hier ins Bett und schlafen Sie\neine Runde!")
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
/*<145>*/ 		printf("Mit dieser <y<Zusatztasche >>können Sie ein Item\nmehr bei sich tragen!\n\n\nDamit werden Ihre Reisen um ein Vielfaches\nangenehmer! Was sagen Sie dazu? Sie kostet\nnur <r<600 Rubine>>!\n\nWas? Sie sagen, beim letzten Mal hätte ich\nweniger verlangt? Nein, das bilden Sie sich\nbloß ein!\n\nAlso, <r<600 Rubine >>und basta! Wollen Sie sie\nnun kaufen?\n[1]Sehr gern![2-]Nein, danke.")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf("Mit dieser <y<Zusatztasche >>können Sie ein Item\nmehr bei sich tragen!\n\n\nDamit werden Ihre Reisen um ein Vielfaches\nangenehmer! Ich gebe sie Ihnen zum halben\nPreis, also insgesamt für nur <r<300 Rubine>>!\n\nWas? Sie sagen, beim letzten Mal hätte ich\nweniger verlangt? Nein, das bilden Sie sich\nbloß ein!\n\nAlso, <r<300 Rubine>>, der Preis steht! Wollen Sie\nsie nun kaufen?\n[1]Sehr gern![2-]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x07\x04\x00\x15Oh! Es ist selten, dass jemand den\nanstrengenden Weg hierher findet.\n\n\nDies ist mein Laden! Hier gibt es alles,\nwas Ihr Herz begehrt. Sehen Sie sich\nnur in Ruhe um!\n\nAh, eine Sache noch! Es wäre nett,\nwenn Sie nicht nur gucken, sondern\nauch etwas kaufen würden!")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf("Mit dieser <y<Zusatztasche >>können Sie ein Item\nmehr bei sich tragen!\n\n\nDamit werden Ihre Reisen um ein Vielfaches\nangenehmer! Was sagen Sie dazu? Sie kostet\nnur <r<1200 Rubine>>!\n\nWas? Das ist zu teuer? Nun, es zwingt Sie ja\nniemand, sie zu kaufen...\n[1]Also gut...[2-]Kein Interesse!")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf("Mit dieser <y<Zusatztasche >>können Sie ein Item\nmehr bei sich tragen!\n\n\nDamit werden Ihre Reisen um ein Vielfaches\nangenehmer! Nur für Sie zum halben Preis\nfür günstige <r<600 statt 1200 Rubine>>!\n\nWas? Das ist zu teuer? Nun, es zwingt Sie ja\nniemand, sie zu kaufen...\n[1]Also gut...[2-]Kein Interesse!")
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
/*<182>*/ 		printf("Das hier ist die <y<Insekten-Medaille>>!\nSie entfaltet ihre geheimnisvolle Wirkung\nschon, wenn Sie sie bloß bei sich tragen.\n\nSie zeigt Ihnen an, wo sich Insekten\nbefinden. Das ist doch mal richtig nützlich!\n\n\nSie ist ein wenig teuer, aber wenn Sie\n<r<1000 Rubine >>entbehren können, gehört\nsie Ihnen!\n[1]Ich kaufe sie![2-]Nein, danke.")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf("Das hier ist die <y<Insekten-Medaille>>!\nSie entfaltet ihre geheimnisvolle Wirkung\nschon, wenn Sie sie bloß bei sich tragen.\n\nSie zeigt Ihnen an, wo sich Insekten\nbefinden. Das ist doch mal richtig nützlich!\n\n\nSie kostet eigentlich <r<1000 Rubine>>, aber nur\njetzt bekommen Sie sie zum Sonderpreis\nvon <r<500 Rubinen>>!\n[1]Ich kaufe sie![2-]Nein, danke.")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf("Ihre <r<Tasche >>ist bereits voll, Sie können also\nnichts weiter tragen.\n\n\nUnd das Item-Lager ist auch voll!\n\n\n\nSie sollten lieber im <r<Item-Lager>> ein wenig\nausmisten oder Platz in Ihrer <r<Tasche >>machen.")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf("Oh! Sie haben nicht genug Geld! Wenn das ein\nScherz sein sollte, dann war er ganz und gar\nnicht lustig!")
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
/*<  8>*/ 		printf("Oh! Vielen Dank! Das gibt mir Kraft, noch\nfester in die Pedale zu treten!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf("Diesen Kauf werden Sie nicht bereuen!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf("Oh! Sehen Sie sich ruhig noch ein wenig\nweiter um!")
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
/*< 30>*/ 	printf("Oh! Bitte warten Sie einen Moment!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Sie sind ganz schön schwer! Wegen Ihnen\nmusste ich wie ein Irrer in die Pedale\ntreten!\n\nUnd jetzt wollen Sie gehen, ohne etwas\nzu kaufen? Pah! Na los, sehen Sie zu,\ndass Sie wegkommen!")
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
/*< 18>*/ 	printf("Oh! Dieses Schild bedeutet, dass der Artikel\nausverkauft ist.\n\n\nDank Ihnen läuft mein Geschäft in letzter Zeit\nwieder besser! Das rechne ich Ihnen hoch an!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf("Mit dieser <y<Zusatztasche >>können Sie ein Item\nmehr bei sich tragen!\n\n\nDamit werden Ihre Reisen um ein Vielfaches\nangenehmer! Was sagen Sie dazu? Sie kostet\nnur <r<300 Rubine>>!\n[1]Gekauft![2-]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf("Mit dieser <y<Zusatztasche >>können Sie ein Item\nmehr bei sich tragen!\n\n\nDamit werden Ihre Reisen um ein Vielfaches\nangenehmer! Nur für Sie zum Sonderpreis\nvon <r<150 Rubinen>>!\n[1]Gekauft![2-]Nein, danke.")
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
/*< 20>*/ 		printf("Sie haben ein gutes Auge! Schön, wie das\nglänzt, oder? Ich habe es hier in der\nNähe gefunden!\n\nUm ehrlich zu sein, weiß ich gar nicht,\nwozu es gut ist, aber für <r<1600 Rubine\n>>gehört es Ihnen!\n[1]Her damit![2-]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf("Sie haben ein gutes Auge! Schön, wie das\nglänzt, oder? Ich habe es hier ganz in\nder Nähe gefunden!\n\nUm ehrlich zu sein, weiß ich nicht mal,\nwozu es gut ist, aber für <r<800 Rubine\n>>gehört es Ihnen!\n\nJa, Sie haben schon richtig gehört. Nicht\nwie üblich <r<1600 Rubine>>, sondern nur\ndie Hälfte!\n[1]Her damit![2-]Nein, danke.")
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
/*< 22>*/ 		printf("Das hier ist eine überaus praktische\n<y<Zusatz-Geldbörse>>.\n\n\nDamit können Sie 300 Rubine mehr tragen.\nIst das nicht großartig? Sie wollen sie\ndoch bestimmt, oder?\n\nFür nur <r<100 Rubine >>gehört sie Ihnen!\nNa, sind Sie dabei?\n[1]Natürlich![2-]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf("Das hier ist eine überaus praktische\n<y<Zusatz-Geldbörse>>.\n\n\nDamit können Sie 300 Rubine mehr tragen.\nIst das nicht großartig? Sie wollen Sie\ndoch bestimmt, oder?\n\nUnd nur jetzt bekommen Sie sie zum\nSonderpreis von sage und schreibe\n<r<50 statt 100 Rubinen>>!\n[1]Her damit![2-]Nein, danke.")
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
/*<176>*/ 		printf("\x0E\x01\x09\x04\x00\x18Oh! Vielen, vielen Dank! Das vergesse\nich dir niemals!\n\n\nAch, mein geliebter <b<Dämonenkäfer>>!\nIch werde dich nie mehr aus den Augen\nlassen! Versprochen!")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\x18Oh! Vielen, vielen Dank! Das vergesse ich\ndir niemals!\n\n\nIch verkaufe dir eines meiner Items zum\nhalben Preis, also vergiss nicht, tagsüber\nbei mir vorbeizuschauen!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("Wie? Du möchtest mir etwas zeigen?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf("\x0E\x01\x09\x04\x1A\x815Oh! Kann es denn wirklich wahr sein?\nMein... geliebter <b<Dämonenkäfer>>!\nOh, du hast ihn wirklich gefunden!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 121, 'param3': 6}
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf("\x0E\x01\x09\x04\x00\xF00Du hast ihn gefunden! Oh, vielen Dank!\n\n\n\nWenn du mich tagsüber in meinem Laden\nbesuchst, verkaufe ich dir ein Stück deiner\nWahl zum \x0E\x01\x09\x04\x00\x18halben Preis!")
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
/*<114>*/ 							printf("\x0E\x01\x09\x04\x00\x1EIch bitte dich, finde meinen geliebten\n<b<Dämonenkäfer>>!")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf("\x0E\x01\x09\x04\x00\x1EWürdest du eventuell für mich nach meinem\ngeliebten <b<Dämonenkäfer >>suchen?\n[1]Natürlich![2-]Auf keinen\nFall.")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf("\x0E\x01\x09\x04\x11\x220Oh! Meinst du das ernst? Das wäre ja\nwundervoll!")
/*< 61>*/ 								printf("\x0E\x01\x09\x04\x1D\x200Mein geliebter <b<Dämonenkäfer>>...\nBitte finde ihn, so schnell du kannst.\x0E\x01\x09\x04\x11\xB00\nIch flehe dich an!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("\x0E\x01\x09\x04\x01!Du kannst das vielleicht nicht richtig\nnachvollziehen, aber mich schmerzt\ndieser Verlust unheimlich...")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf("\x0E\x01\x09\x04\x00\x1EIch fliege morgen wieder zurück zum\nWolkenhort. Wenn du willst, kannst du\ndich schon mal aufs Ohr hauen!")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf("\x0E\x01\x09\x04\x01\xB00Nun?\n\n\n\n\x0E\x01\x09\x04\x1D\xB00Hast du meinen <b<Dämonenkäfer>> schon\ngefunden?")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf("\x0E\x01\x09\x04\x01\x600Also, es ist so...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Ich habe etwas Wichtiges verloren... Es handelt\nsich um den <r<Insektenkäfig>>, in dem mein\n<b<Dämonenkäfer >>ist!\n\n\x0E\x01\x09\x04\x1D\xB00Ich bin furchtbar betrübt... Dieser Käfer war\nein sehr seltenes Exemplar!\n[1]Ich suche ihn![2-]Macht doch nichts!")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf("\x0E\x01\x09\x04\x00\xC00Oh\x0E\x01\x06\x02\xFBCD...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf("\x0E\x01\x09\x04\x00\x1EDu siehst aus, als würdest du wissen wollen,\nwas das ist. Ich erkläre es dir!\n\n\n\x0E\x01\x09\x04\x1C\xA00Das hier ist ein unglaublich seltenes Insekt,\nvon dem es nur sehr wenige Exemplare gibt.\nEin <b<Dämonenkäfer>>!\n\n\x0E\x01\x09\x04\x1B\x500Ich liebe ihn über alles! Hi hi! Ach, ich könnte\nihn stundenlang einfach nur still betrachten...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x00\x1EDu hast in meinem Bett geschlafen? Nun, du\nwarst bestimmt sehr müde...\n\n\n\x0E\x01\x09\x04\x00\xB00Ich bin ebenfalls müde, weil ich den Laden samt\ndeinem Gewicht hierher fliegen musste...\n\n\n\x0E\x01\x09\x04\x00\xC00<pause05>.<pause05>.<pause05>.<pause05>\x0E\x01\x09\x04\x00\x200Aber vergessen wir das! Ich bin es ja gewohnt.")
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
/*< 53>*/ 							printf("\x0E\x01\x09\x04\x00\x21EOh! Du bist also aufgewacht. Du hast so\nputzig ausgesehen, als du geschlafen\nhast, da wollte ich dich nicht wecken.\n\n\x0E\x01\x09\x04\x00\x500Aber du warst ziemlich schwer... Hi hi!\n[1]Wie?[2]Wo bin ich?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf("Was? Irgendetwas an mir ist anders als zuvor?\nMeine Sprechweise?\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200Meinen Sie? Äh, du?<pause1E> Und wenn schon!\nDas ist doch jetzt nicht von Bedeutung.")
/*<103>*/ 								printf("\x0E\x01\x09\x04\x00\x200Nun, dies ist mein Zufluchtsort, wenn man es\nso nennen möchte. Weißt du, ich übernachte\nimmer hier.\n\n\x0E\x01\x09\x04\x00\x200Im Grunde gibt es hier eigentlich nichts\nSehenswertes, aber ich bin für mich allein\nund genieße die Ruhe.\n\nDu kannst morgen mit mir zurück zum\nWolkenhort fliegen, dein Wolkenvogel\nschläft ja bereits tief und fest.\n\nWenn du willst, kannst du dich bis morgen\nim Bett ausruhen.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf("\x0E\x01\x09\x04\x00\x200Nun, dies ist mein Zufluchtsort, wenn man es\nso nennen möchte. Weißt du, ich übernachte\nimmer hier.\n\n\x0E\x01\x09\x04\x00\x200Im Grunde gibt es hier eigentlich nichts\nSehenswertes, aber ich bin für mich allein\nund genieße die Ruhe.\n\nDu kannst morgen mit mir zurück zum\nWolkenhort fliegen, dein Wolkenvogel\nschläft ja bereits tief und fest.\n\nWenn du willst, kannst du dich bis morgen\nim Bett ausruhen.")
/*<104>*/ 								printf("Was? Irgendetwas an mir ist anders als zuvor?\nMeine Sprechweise?\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200Meinen Sie? Äh, du?<pause1E> Und wenn schon!\nDas ist doch jetzt nicht von Bedeutung.")
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
/*< 42>*/ 		printf("Oh, Sie interessieren sich also für das\n<y<Schmetterlingsnetz>>?\n\n\nDamit können Sie Insekten einfangen.\nDas macht Spaß und ist zudem auch\nnoch sehr nützlich!\n\n<r<50 Rubine>> ist doch ein fairer Preis,\nfinden Sie nicht auch?\n[1]Ich nehme es![2-]Nein, danke.")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf("")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

