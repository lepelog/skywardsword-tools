          void entrypoint_204_25() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 59>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*< 60>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 83>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_116:
/*<116>*/ 				switch (story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */]) {
          				  case 0:
          					flw_119:
/*<119>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "Stai attento quando <color red<fai\nscoppiare >coloroff>quei pesci con\ngli aculei! Blub!\nSono come delle bombe!")
          				  case 1:
/*<117>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 118, 'param3': 31}
/*<118>*/ 					story_flags[78 /* us: 805A9AE8 0x80, jp: 805ACD68 0x80 */] = true;
          					goto flw_119
          				}
          			  case 1:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_116
          		}
          	}
          }

          void entrypoint_204_26() {
/*< 99>*/ 	start()
/*<100>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*<102>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<104>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_138:
/*<138>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_141:
/*<141>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "Le cromanime sono amiche di\ntutti, le trovi nuotare spesso\n<color red<vicino ai piccoli pesci>coloroff>.")
          				  case 1:
/*<139>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 140, 'param3': 31}
/*<140>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_141
          				}
          			  case 1:
/*<103>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_138
          		}
          	}
          }

          void entrypoint_204_09() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "<0x10009:0x0000000e>Ehi! <heroname>!\nHo visto in giro dei pesci non\nproprio gentili! Se li incontri,\nfai attenzione!")
          }

          void entrypoint_204_27() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "La foresta s'è allagata, blub!")
          }

          void entrypoint_204_10() {
/*< 35>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 2, line: 24 */ "<0x10009:0x0000000e>Ehi, <heroname>!\nHai raccolto tutte\nle cromanime! Bravo!\n\nOra sbrigati ad andare\ndal <color blue<drago d'acqua>coloroff>.")
/*<195>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          }

          void entrypoint_204_28() {
/*<168>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Il drago d'acqua freme di rabbia!\nBlub!")
          }

          void entrypoint_204_29() {
/*<170>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Nella foresta stanno\ndiminuendo i mostri!")
          }

          void entrypoint_204_12() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "Ehi, umano!\nQui la corrente è troppo\nforte! Blub!\n\nÈ pericoloso per un umano,\nusa l'altra uscita!")
          }

          void entrypoint_204_30() {
/*< 41>*/ 	start()
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 23, 'param2': 0, 'next': 145, 'param3': 35}
/*<145>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 42, 'param3': 16}
/*< 42>*/ 	printf(/* textboxtype: 2, unk: 0, line: 48 */ "Suppongo che ciò a cui\nfa riferimento sia il <color red<rilevatore>coloroff>.\n\n\nÈ un consiglio utile, <0x10012:0x00000002>mio signore.\nHo aggiunto le caratteristiche\ndelle cromanime.")
/*<183>*/ 	story_flags[81 /* us: 805A9AEB 0x04, jp: 805ACD6B 0x04 */] = true;
/*<184>*/ 	open_dowsing_wheel(9)
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 49 */ "Il <sound 4><color red<rilevatore >coloroff>adesso può\nriconoscere le cromanime.\nPotete utilizzarlo per la ricerca.\n\nTuttavia fate attenzione, il\nrilevatore <color red<non funziona in acqua>coloroff>.")
/*<181>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*< 54>*/ 	scene_flags[3 'Flooded Faron Woods'][20 /* 0x3 10 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          }

          void entrypoint_204_13() {
/*<147>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ehi, ehi! Blub!\nQui la corrente è troppo\nforte, esci dall'alto!")
          }

          void entrypoint_204_31() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "La foresta è allagata! Blub!")
          }

          void entrypoint_204_14() {
/*<174>*/ 	start()
/*<176>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          	  case 1:
/*<177>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "")
          	}
          }

          void entrypoint_204_32() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*<188>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*<190>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_191:
/*<191>*/ 				switch (story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */]) {
          				  case 0:
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 40 */ "Le cromanime contengono\ndell'ossigeno, quindi quando\nne prendi una <color red<recuperi ossigeno>coloroff>.")
          				  case 1:
/*<192>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 193, 'param3': 31}
/*<193>*/ 					story_flags[79 /* us: 805A9AEB 0x01, jp: 805ACD6B 0x01 */] = true;
          					goto flw_194
          				}
          			  case 1:
/*<189>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_191
          		}
          	}
          }

          void entrypoint_204_01() {
          	start()
/*<  2>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00000007>Anche sott'acqua...\nsopravviveremo! Porta i miei\nsaluti al <color blue<drago d'acqua>coloroff>.")
          		  case 1:
/*<120>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<121>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_123:
/*<123>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>La sai una cosa interessante?!\nAlcune pietre rotolano via se\nvengono attaccate!")
          				  case 1:
/*<122>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Il saggio ti chiama!\nVa' a vedere di cosa vuole\nparlarti!")
          				}
          			  case 1:
          				goto flw_123
          			}
          		}
          	  case 1:
/*< 43>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000004>Dalle <color red<radici del grande albero>coloroff><sound 4>\nè uscita tantissima acqua!\nCi siamo stupiti moltissimo!\n\nE poi con tutta quest'acqua\nnon ci si può nascondere!\n<0x10009:0x00110005>Non si può far tornare come prima?!")
          	}
          }

          void entrypoint_204_02() {
/*<  3>*/ 	start()
/*<  5>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 25>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0009000c>Ma quando se ne andrà tutta\nquest'acqua?! Io non so nuotare!")
          		  case 1:
/*<124>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<125>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<137>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0009000c>Usa il rilevatore o quello che vuoi...\nma trova in fretta le cromanime!")
          				  case 1:
/*<126>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Il saggio ti chiama!\nVa' a vedere di cosa vuole\nparlarti!")
          				}
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009000c>Il <color blue<drago d'acqua >coloroff>ha voluto\nsommergerci tutti?!\nCi vuole mangiare!")
          			}
          		}
          	  case 1:
/*< 44>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 4, 'param3': 31}
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0009000c>Buuuh! È finita!\nCosa sta succedendo\nalla foresta?!")
          	}
          }

          void entrypoint_204_03() {
/*<  6>*/ 	start()
/*<  8>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 26>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000007>Siamo in infusione come il tè!<color blue<\n>coloroff>Porta i miei saluti al <color blue<drago d'acqua>coloroff>!")
          		  case 1:
/*<128>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<129>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_131:
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x0011000b>Se vuoi sapere qualcosa\nsulle cromanime, devi chiedere\nai Paraduzi!\n[1-]Paraduzi?[2]Sì, lo so")
/*<178>*/ 					switch (choice(2)) {
          					  case 0:
/*<180>*/ 						printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c0001>Sono quelle creature con la bocca a\ntrombetta che fluttuano mollemente\nnell'acqua.")
          						flw_179:
/*<179>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000b0005>Prova a rivolger loro\nla parola se li incontri!")
          					  case 1:
          						goto flw_179
          					}
          				  case 1:
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Il saggio ti chiama!\nVa' a vedere di cosa vuole\nparlarti!")
          				}
          			  case 1:
          				goto flw_131
          			}
          		}
          	  case 1:
/*< 45>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 7, 'param3': 31}
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>È arrivato il <color blue<drago d'acqua>coloroff>!\nTutta quest'acqua nella foresta\nnon può che essere opera sua!")
          	}
          }

          void entrypoint_204_20() {
/*< 30>*/ 	start()
/*< 39>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*< 48>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 77>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_105:
/*<105>*/ 				switch (story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */]) {
          				  case 0:
          					flw_31:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 28 */ "Puoi racimolare le <color blue<cromanime>coloroff>\npiù sfuggenti usando il <color green<turbine>coloroff>!\nCosì le prenderai a gruppi! Blub blub!\n\nBlub...<pause 30> Però visto che sei un umano,\nnon farlo spesso! Ti fa <color red<sprecare\n>coloroff>l'ossigeno! Blub!")
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					story_flags[74 /* us: 805A9AE8 0x08, jp: 805ACD68 0x08 */] = true;
          					goto flw_31
          				}
          			  case 1:
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_105
          		}
          	}
          }

          void entrypoint_204_04() {
/*<  9>*/ 	start()
/*< 11>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 28>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000014>Torna presto dal <color blue<drago d'acqua>coloroff>!")
          		  case 1:
/*<132>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*<133>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000014>Prova a usare il rilevatore per\ntrovare le cromanime!")
          				  case 1:
/*<134>*/ 					printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000007>Il saggio ti chiama!\nVa' a vedere di cosa vuole\nparlarti!")
          				}
          			  case 1:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00000014>Se raccogli le cromanime, potrai\nricomporre la partitura!\nTrovale tutte!")
          			}
          		}
          	  case 1:
/*< 46>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 10, 'param3': 31}
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000004>Ho visto il <color blue<drago d'acqua>coloroff>!\nS'è dovuta nascondere da\nqualche parte!")
          	}
          }

          void entrypoint_204_21() {
/*< 61>*/ 	start()
/*< 62>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 63>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*< 64>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 79>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_108:
/*<108>*/ 				switch (story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */]) {
          				  case 0:
          					flw_111:
/*<111>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "Attento a quelle bolle viola!\nC'è del <color red<veleno>coloroff> dentro! Se lo inali, ti\n<color red<soffoca>coloroff>! Fai attenzione, blub!")
          				  case 1:
/*<109>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 					story_flags[75 /* us: 805A9AE8 0x10, jp: 805ACD68 0x10 */] = true;
          					goto flw_111
          				}
          			  case 1:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_108
          		}
          	}
          }

          void entrypoint_204_05() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[80 /* us: 805A9AEB 0x02, jp: 805ACD6B 0x02 */]) {
          	  case 0:
/*< 18>*/ 		switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          		  case 0:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0000000e>Sbrigati a tornare dal <color blue<drago d'acqua>coloroff>!")
          		  case 1:
/*< 55>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x0000000e>Ecco, ecco! Il rilevatore!\nCon quello non puoi forse\ntrovare le cromanime\nche ti mancano?!")
          			  case 1:
/*< 50>*/ 				switch (scene_flags[25 /* 0x2 02 */]) {
          				  case 0:
/*< 51>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 52, 'param3': 31}
/*< 52>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000001>Eccoti qui, <heroname>!\n\n\n<color blue<\n>coloroff>Procede la raccolta delle <color blue<cromanime>coloroff>?\nM'è venuta un'idea geniale!\n\n\n<0x10009:0x00040011>Come si chiamava\nquella roba... quella lì...\n\n\nHai usato una qualche cosa\nper trovare i miei compagni...\nQuella cosa lì!\n\n<0x10009:0x00060009>Ho pensato che magari\npotresti usarla anche per\ntrovare le cromanime!")
/*<144>*/ 					scene_flags[3 'Flooded Faron Woods'][26 /* 0x2 04 */] = true;
          				  case 1:
/*< 15>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000e>Ah! <heroname>!\n\n\n\n<0x10009:0x00060003>Il <color blue<drago d'acqua>coloroff>? È stata\nlei a provocare l'inondazione? Era\nfuriosa per tutti quei mostri nella\nforesta?!\n<0x10009:0x0001000c>Quindi la foresta resterà così\nper un bel po'?! Ma... ma...?")
          				}
          			}
          		}
          	  case 1:
/*<163>*/ 		switch (scene_flags[27 /* 0x2 08 */]) {
          		  case 0:
/*<164>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00060001>Tutt'a un tratto, dalle <color red<radici del grande\nalbero>coloroff> dietro di me ha iniziato a venir\nfuori un sacco d'acqua e s'è inondata\nla foresta!\n<0x10009:0x00010006>Ti dirò... non mi dispiace affatto!\nOh oh oh!")
          		  case 1:
/*< 47>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 13, 'param3': 31}
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x0000000e>Ehi!\nIo ti ho già visto.<pause 15>.<pause 15>.<pause 20> ma non mi hai\ndetto il tuo nome!\n\n<0x10009:0x00000003>...<pause 25> Mmh...\n<heroname>?\nChe nome strano!\n\n<0x10009:0x00000000>Quindi... cosa posso fare per te?\n[1-]Acqua...[2-]Foresta...")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_162:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000002>Hai visto cos'è successo?\n\n\n\n<0x10009:0x00040000>Tutt'a un tratto dalle <color red<radici del grande\nalbero >coloroff>dietro di me<sound 4> ha iniziato a venir\nfuori un sacco d'acqua e s'è inondata\nla foresta!\n<0x10009:0x00000003>Non so da cosa possa dipendere, ma in\nquesto modo i mostri si stanno\ndisperdendo, mica male!")
/*< 32>*/ 				wait_frames(1)
/*<165>*/ 				scene_flags[3 'Flooded Faron Woods'][27 /* 0x2 08 */] = true;
          			  case 1:
          				goto flw_162
          			}
          		}
          	}
          }

          void entrypoint_204_22() {
/*< 65>*/ 	start()
/*< 67>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*< 70>*/ 		switch (story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */]) {
          		  case 0:
/*< 75>*/ 			switch (scene_flags[25 /* 0x2 02 */]) {
          			  case 0:
/*< 81>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "Se non <color red<raccogli tutte in una volta>coloroff>\nle cromanime amiche tra loro,\nti scapperanno dal pentagramma.\n\nSfrutta la corrente generata dal\n<color green<nuoto avvitato >coloroff>e <color red<attira a te >coloroff>le\ncromanime vicine! Blub!")
          				  case 1:
/*< 80>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "La foresta s'è allagata, blub!")
          				}
          			  case 1:
          				goto flw_76
          			}
          		  case 1:
/*< 69>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 66, 'param3': 31}
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Stai raccogliendo le cromanime?\nBlub?\n\n[1-]Esatto![2-]No")
/*< 71>*/ 			switch (choice(2)) {
          			  case 0:
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 32 */ "Ti dirò qualcosa di\ninteressante! Blub!\n\n\nSe non <color red<raccogli tutte in una volta>coloroff>\nle cromanime amiche tra loro,\nti scapperanno dal pentagramma.\n\nSfrutta la corrente generata dal <color green<nuoto\navvitato >coloroff>e <color red<attira a te >coloroff>le cromanime\nvicine! Blub!\nE poi...<pause 30> forza e coraggio! Blub!")
/*< 74>*/ 				story_flags[76 /* us: 805A9AE8 0x20, jp: 805ACD68 0x20 */] = true;
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "Blub... scusa, blub!")
          			}
          		}
          	}
          }

          void entrypoint_204_06() {
/*< 16>*/ 	start()
/*< 19>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 21>*/ 		story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */] = true;
/*<182>*/ 		story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = false;
/*<160>*/ 		story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = false;
/*< 36>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 37>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 38>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          				flw_34:
/*< 34>*/ 				changeScene(7, 0) // 
          			  case 1:
          				goto flw_34
          			}
          		  case 1:
          			goto flw_34
          		}
          	  case 1:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000006>Se vuoi dimostrarmi il tuo valore,\nportami in fretta le <color red<cromanime>coloroff>!")
          	}
          }

          void entrypoint_204_23() {
/*< 84>*/ 	start()
/*< 85>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*< 87>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 89>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_112:
/*<112>*/ 				switch (story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */]) {
          				  case 0:
          					flw_115:
/*<115>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "Se non <color red<raccogli tutte insieme >coloroff>le\ncromanime dello stesso colore,\nti scapperanno dal pentagramma.")
          				  case 1:
/*<113>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 114, 'param3': 31}
/*<114>*/ 					story_flags[77 /* us: 805A9AE8 0x40, jp: 805ACD68 0x40 */] = true;
          					goto flw_115
          				}
          			  case 1:
/*< 88>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_112
          		}
          	}
          }

          void entrypoint_204_24() {
/*< 90>*/ 	start()
/*< 91>*/ 	switch (story_flags[18 /* us: 805A9AD9 0x08, jp: 805ACD59 0x08 */]) {
          	  case 0:
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Torna velocemente dal\n<color blue<drago d'acqua>coloroff>! Blub!")
          	  case 1:
/*< 93>*/ 		switch (scene_flags[25 /* 0x2 02 */]) {
          		  case 0:
/*< 95>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
          				flw_96:
/*< 96>*/ 				switch (scene_flags[24 /* 0x2 01 */]) {
          				  case 0:
/*<196>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
          						flw_98:
/*< 98>*/ 						printf(/* textboxtype: 1, unk: 0, line: 39 */ "Sono tornati quei <color blue<pesci feroci>coloroff>!\nScappa! Blublub!\n\n\nNon ti inseguiranno se\nandrai <color red<in profondità>coloroff>!")
          					  case 1:
/*<152>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 197, 'param3': 31}
/*<197>*/ 						scene_flags[3 'Flooded Faron Woods'][70 /* 0x9 40 */] = true;
          						goto flw_98
          					}
          				  case 1:
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "I pesci grossi sono terribili!\nBlub! Ti caricano! Per fortuna\nper ora non se ne vedono...")
          				}
          			  case 1:
/*< 94>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il saggio della foresta ti chiama, blub!\nVai a sentire cos'ha da dirti!")
          			}
          		  case 1:
          			goto flw_96
          		}
          	}
          }

          void entrypoint_204_07() {
/*<153>*/ 	start()
/*<154>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 155, 'param3': 47}
/*<155>*/ 	set_camera(4, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 158, 'param3': 48}
/*<158>*/ 	wait_frames(15)
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000e>Ehi! <heroname>!\nMi senti?\n\n\nHo avuto un'idea geniale!\nVieni un attimo qui che\nte ne parlo!")
/*<159>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

