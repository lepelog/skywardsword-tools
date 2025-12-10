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
/*< 87>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000007>Ciao, tesoruccio!\nVoglio custodire con amore\ntutto quello che il mio tesoruccio\nvuole affidarmi!\n[1-]Sì[2]No")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000008>Ciao tesoruccio!\nBentornato!\n\n\nSono pronta a custodire tutto\nquello che il mio tesoruccio\ndesidera! Tutto, ma proprio tutto!\n[1-]Sì[2]No")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x0000000e>Benvenuto, <heroname>.\nHai qualcosa da lasciare in custodia\nalla ragazza alla quale hai spezzato\nil cuore...\n... E che si sta facendo sempre\npiù bella ogni giorno che passa?\n[1-]Sì[2]No")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000005>Ah... Ciao, <heroname>.\n\n\n\nSenti... scusa se mi sono\ncomportata come una\nsciocca l'altra notte.\n\nCi ho pensato a lungo ed\nè acqua passata adesso.\n\n\nSi dice che le ragazze diventino\npiù belle dopo una delusione\nd'amore. Ora so cosa vuol dire...\n\nE voglio sicuramente diventare\nsempre più bella. Nessun\nrimpianto, d'accordo?\n\nD'accordo. Al lavoro dunque.\nHai qualcosa da depositare?\n[1-]Sì[2]No")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Ciao, tesoro!\n\n\n\n<0x10009:0x000d0f00>Umm... ecco, io... <color red<vorrei che tu\nmi venissi a trovare a casa, stanotte>coloroff>.\nDevo parlarti di una cosa\nimportante.\n<0x10009:0x00080a00>Casa mia sta proprio accanto al\nbazar. Verrai sicuramente, vero?\nSarò lì ad aspettarti!")
          								flw_79:
/*< 79>*/ 								printf(/* textboxtype: 1, unk: 0, line: 76 */ "Hai qualcosa da depositare?\n\n[1-]Sì[2]No")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000005>Ciao, tesoro!\n\n\n\n<0x10009:0x000d0f00>Umm... ecco, io... <color red<vorrei che tu\nmi venissi a trovare a casa, stanotte>coloroff>.\nDevo parlarti di una cosa\nimportante.\n<0x10009:0x00080a00>Casa mia sta proprio accanto al\nbazar. Verrai sicuramente, vero?\nSarò lì ad aspettarti!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000007>Benvenuto, <color red<tesoro>coloroff>! Ti stavo\naspettando! Hai tante belle\ncose per me oggi?\n\nDammi pure tutto... ehm, voglio\ndire... oggetti da depositare?\n[1-]Sì[2]No")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000008>... Aaaaah...")
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080a00>Tu... sei venuto a trovarmi!\nSono così felice!\n\n[1-]...[2-]Sì")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x000d0f0a>Non fissarmi in quel modo.\nMi fai arrossire, <color red<tesoro>coloroff>!")
          					flw_66:
/*< 66>*/ 					printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00120a00>Sai, ti penso sempre, mi sembra\ndi essere in un sogno, e il mio\ncuore inizia a battere forte.\n\nMi manca il fiato e tutto mi gira\nintorno! Forse... potrebbe forse\nessere...?\n[1-]Stai male![2-]Amore?")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x000f120e>Oh, che giocherellone che sei...")
          						flw_70:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00120a00>Ops. Mi son fatta prendere la mano.\nTorniamo al lavoro!\n\n\n<0x10009:0x000e1000>Allora, dov'eravamo?\nAh, dovevo chiederti se vuoi che\nti alleggerisca un po'...\n[1-]Sì, grazie[2]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x000e100f>Davvero...? Mi sento così felice...")
          							flw_72:
/*< 72>*/ 							printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x000d0f0a>Oh cielo! Mi spiace davvero!\nNon volevo mica raccontarti\ni miei sogni più reconditi!\n\n<0x10009:0x00080a00>Accidenti, non avrei dovuto dire\nneanche questo!\nVuoi depositare qualcosa, <color red<tesoruccio>coloroff>?\n[1-]Sì[2]No")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000f0f0d>Aaah!\nNon posso credere che tu l'abbia detto!\nChe vergogna!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x000d0f0a>Tu... mi rendi così felice...\nMi sento venir meno...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000005>Benvenuto. Mi fa piacere vederti.\nQui prendiamo in consegna\ngli oggetti che non vuoi\nportarti dietro.\nChe cosa ci lasci oggi?\nVuoi depositare un oggetto\ndalla tua borsa?\n[1-]Sì[2]No")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "Ciao. Benvenuto al deposito... <0x10009:0x00000005>Ah.")
/*<279>*/ 				wait_frames(15)
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "Oh. Io... ehm...\nB‐benvenuto...\n\n[1-]Che c'è?[2-]Sei strana")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x000a0f18>No... niente.\nÈ tutto normale.")
          					flw_76:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 64 */ "Non è che io non sia\ncontenta di vederti.\n\n\nSolo che... se pensi a quante volte ci\nvediamo, sembra che la nostra\nrelazione non sia semplicemente\nquella tra una commessa e un cliente.\n<0x10009:0x00101405>Io... cioè non volevo dire...\nMa perché non sto zitta?\n\n\nPerdonami. Guarda, dimentica\nquello che ho detto, va bene?\n\n\n<0x10009:0x00070800>Bene... Meglio che torni in me e\nmi rimetta a lavorare...\n\n\nVuoi depositare qualcosa?\n[1-]Sì[2]No")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000a0f18>Io... non capisco...\nforse ti stai sbagliando!")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000001>Benvenuto al deposito!\nSei tornato a farmi visita?\nOoh, così mi fai arrossire!\n\nBeh, come posso aiutarti?\nVuoi lasciare o riprendere qualcosa?\n[1-]Sì[2]No")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>Ciao. Questo è il deposito.\nOh... sei di nuovo tu...\n\n\nVieni qui spesso. Sai, in questi\ngiorni sei il mio miglior cliente.\n\n\n<0x10009:0x00000004>Eh? Aspetta un attimo.\n\n\n\nMa tu...? Cioè...?\n\n\n\nNon vieni qui solo per vedere\nme, vero?\n[1-]Ti sbagli[2-]Sì")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000002>Oh... capisco...\n\n\n\nChe sciocchina che sono.\nPerché mai dovresti?\n\n\n<0x10009:0x000a0c00>Oh, ma mica me la sono presa.\nPer niente, guarda.")
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00070800>Quasi dimenticavo! Io sono qui per\nlavorare. Hai qualcosa da depositare\no da riprendere?\n[1-]Sì[2]No")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000002>Davvero?!\n\n\n\nEhi! Ma stai scherzando?\nGuarda che io non ci\ncasco tanto facilmente!\n\n<0x10009:0x000a0c00>Però... se sei sincero, sappi che\nnon mi dispiacerebbe...")
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
/*<106>*/ 								printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000009>Mi fa piacere quando mi\nparli dei tuoi sentimenti, tesoruccio.\nCi vediamo presto al negozio!")
          							  case 1:
/*<109>*/ 								printf(/* textboxtype: 1, unk: 1, line: 104 */ "<0x10009:0x0000000d>Tesoruccio! Ti ho detto che la nostra\nrelazione deve restare segreta!\nSe mi vieni a trovare così spesso,\nverremo scoperti!\nE poi cosa vuoi a quest'ora\ndella notte?\n[1-]Parlare[2-]Niente[3-]Depositare")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00080008>Parlerei con te tutto il tempo che\nvuoi, però qui c'è mio padre che\nci fissa! Dai, parliamo un'altra\nvolta!")
          								  case 1:
/*<112>*/ 									printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00080a00>Ehi, non c'è bisogno di fare il\nprepotente! Anche se... non\nposso dire che non mi piaccia!")
          								  case 2:
/*<113>*/ 									printf(/* textboxtype: 1, unk: 0, line: 107 */ "... ...\nMa per quello devi farmi visita\ndurante il giorno, al negozio...\n\n<0x10009:0x000e1000>O vuoi forse dire che... per te\nnon significo niente?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000014>Sono forte. Mi passerà.\nTi prego, lasciami da sola.")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00000013>Non so perché,\nma mio padre è di ottimo\numore in questi giorni...\n\nNon si rende conto che\nsua figlia soffre perché le\nè stato spezzato il cuore?")
          									  case 1:
/*<116>*/ 										printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00000014>So che non stiamo insieme, ma...\nCerte volte, di notte, fa così male...\nChe pena soffrir le pene d'amor...")
          									}
          								  case 1:
/*<114>*/ 									printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x0000000e><heroname>...\nCi si sente davvero così male\nad avere il cuore in mille pezzi?<0x10009:0x00000014>")
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
/*<223>*/ 						printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000005><heroname>... sei venuto a\ntrovarmi... grazie.\n\n\n<0x10009:0x000e0f00>La verità è che... <heroname> \nmuoio dalla voglia di dirti una cosa.\n\n\nMa devi prepararti a non trarre\nconclusioni affrettate, va bene?")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf(/* textboxtype: 1, unk: 0, line: 86 */ "Che cosa pensi di me?\nPer te sono solo un'addetta\ndel deposito?\n[1-]Mi piaci[2-]Sì")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x000e100f>Davvero? Dici sul serio?!\nNon stai scherzando?!\n\n[1-]Davvero[2-]Scherzavo")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00080a08>Sono così felice! Mi sembra di\nessere in un sogno. Devo sentirtelo\nripetere, per esserne sicura!\n\n<0x10009:0x000e1000>Ti piaccio davvero, davvero, davvero?\n[1-]Mi piaci[2-]Mentivo,\nscusa")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x000d0f0a>Non stai mentendo, vero?\nSe scoprissi che stai dicendo una\nbugia non so cosa potrei fare!\n[1-]È vero[2-]Bugia")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00080a09>... Grazie! Ti amo così tanto,\ntesoruccio! Scusami se non\nmi sono fidata di te!")
/*<318>*/ 										wait_frames(45)
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										wait_frames(30)
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										wait_frames(30)
/*<314>*/ 										printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000013>Ma lo so, capisco.\nDavvero, non fa niente.\n\n\nAdesso come adesso hai molte altre\ncose più importanti a cui pensare.\n\n\n<0x10009:0x000e1000>Hai un destino da realizzare, vero?\n\n\n\n<0x10009:0x000d0f00>Lo so perché vieni sempre al negozio\nper depositare oggetti. E proprio\nper questo non ti importunerò più.\n\nHo deciso che ti assisterò nel \nmigliore dei modi.\n\n\n<0x10009:0x000e1000>Poi quando avrai finito con quello\nche hai da fare, ti presenterò a\nmio padre.\n\n<0x10009:0x000b0d00>Fino a quel giorno, manteniamo\nil segreto! Tesoruccio, io...\nCi rivediamo al negozio.")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x000f1214>... Capisco. Questa è la tua risposta...\n\n\n\nMi spiace averti messo in imbarazzo...")
/*<329>*/ 										wait_frames(45)
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										wait_frames(30)
/*<332>*/ 										printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000013>... No. Non ho bisogno della tua\ncompassione.\n\n\nSto bene.\nMi passerà presto...\n\n\n<0x10009:0x00140d00>La prossima volta che ci\nincontreremo, ti saluterò\ncordialmente come ogni\naltro cliente...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										wait_frames(1)
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										wait_frames(30)
/*<327>*/ 										printf(/* textboxtype: 1, unk: 0, line: 101 */ "Ma, stanotte voglio restare sola...\n\n\n\nBuonanotte, tesoruccio.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x000f120a>M‐ma...\n\n\n\n<0x10009:0x000e1000>Io non ti piaccio e per te sono solo\nuna conoscente, l'addetta del\ndeposito. Vero?\n[1-]Mi piaci[2-]È così")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x000f120f>Dici sul serio? Questo è tutto quello\nche sono per te?\n\n\n<0x10009:0x000e1000>Ah! Ora capisco! Stai solo cercando\ndi mascherare i tuoi sentimenti,\nvero?\n[1-]Sì[2-]No")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00080a08>Cosa? Allora ti piaccio davvero?\n\n\n[1-]Mi piaci[2-]Mentivo,\nscusa")
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
/*<298>*/ 							printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x000f1210>... Ma?\n\n\n\n<0x10009:0x000d0f00>F‐forse non te l'ho chiesto nel\nmodo giusto...\n\n\n<0x10009:0x000e1000>Va bene. Fammi pensare...\nChe cosa sono io per te?\n[1-]Mi piaci[2-]Nessuno")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000007>Ciao, <color red<tesoruccio>coloroff>.\nEntra pure...\n\n\nSei venuto a trovarmi a casa...\nSono così felice!")
          				}
          			  case 1:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000015>Oh, ciao! Sei venuto a trovarmi\na casa...\n\n\nNon è che vuoi farmi capire quanto\nsono speciale per te, vero?")
          			}
          		  case 1:
/*<100>*/ 			printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000017>Non importa quanto tu abbia\nvoglia di vedermi, non posso\naccogliere chiunque in casa!\n\n<0x10009:0x00010800>O forse sono troppo giudiziosa?")
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000002>Aaah... ma non c'è nessuno lì fuori\nche riesca a farmi sentire viva?\nQuanto vorrei trovare qualcuno\nda amare!\n<0x10009:0x00010800>Aspetta un attimo. Chi ti ha detto\ndi entrare in casa mia senza\ninvito?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>Ti ringrazio tantissimo,\n<heroname>!\n\n\n<0x10009:0x000a0900>La casa è così pulita adesso!\nSenza polvere sembra di\nessere in un altro posto!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00010909>Te le sei guadagnate.\nUn'ottima ricompensa \nper un ottimo lavoro!\nEccoti <color red<20 rupie>coloroff>!<0x10009:0x000a0d00>")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00010900>Se la casa si riempie di nuovo\ndi polvere, puoi tornare ad aiutarmi.\nPago bene, lo sai!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x000a0900>Oh... un'ultima cosa.\nNon dire niente a Sparvio!\n\n\n<0x10009:0x00080900>Altrimenti si arrabbia\ncon me perché sperpero\nil denaro. Me lo prometti?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000d02>Ti ringrazio tantissimo,\n<heroname>!\n\n\n<0x10009:0x000a0900>La casa è così pulita adesso!\nSenza polvere sembra di\nessere in un altro posto!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000002>Apprezzo il tuo impegno,\n<heroname>!\n\n\nQuando non ci sarà più un \ngranello di polvere in giro\nti darò la tua paga. Che ne dici?\n\n<0x10009:0x00010900>Oppure ne hai abbastanza per oggi?\n[1-]Ho finito[2]Non ancora")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000a>Oh, che peccato...\nVa bene, non ti preoccupare.\nPerò se puoi tornare ad aiutarmi\nfammelo sapere, capito?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Non c'è problema.\nDai, rimboccati le maniche.\nOvviamente il <color red<pavimento>coloroff> è ridotto\nmale, ma...\n... c'è molta polvere anche sulle\n<color red<finestre>coloroff>, sugli <color red<scaffali >coloroff>e persino sui\n<color red<letti>coloroff>. La polvere si posa dappertutto!")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<heroname>?\nLa tua paga è qui,\nvieni a prenderla.")
          	  case 1:
/*<133>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000004>Oh, <heroname>.\nNon hai ancora finito?\n\n\nNe hai abbastanza per oggi?\n\n\n[1-]Ho finito[2]Continuo")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x0000000a>Oh, che peccato...\nVa bene, non ti preoccupare.\nPerò se puoi tornare ad aiutarmi\nfammelo sapere, capito?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000a0900>Non c'è problema.\nDai, rimboccati le maniche.\nOvviamente il <color red<pavimento>coloroff> è ridotto\nmale, ma...\n... c'è molta polvere anche sulle\n<color red<finestre>coloroff>, sugli <color red<scaffali >coloroff>e persino sui\n<color red<letti>coloroff>. La polvere si posa dappertutto!")
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
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Ehi, <heroname>.\nGià te ne vai?\n\n\nSalutami Sparvio se lo incontri\nmentre è in servizio, va bene?")
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
/*<216>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000d08>Oh cielo!\nNon c'è più nemmeno\nun granello di polvere!\nGrazie, <heroname>!\n<0x10009:0x000a0900>Mi hai davvero cambiato la\ngiornata. Vieni qui, voglio\ndarti una bella ricompensa.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x1f0a0309>Devo insistere, mi devi pagare\n<color red<circa 30 rupie>coloroff>, perché era un pezzo\ndi gran valore!\nE ti garantisco che valeva anche di più!")
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
/*<386>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<394>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<398>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<359>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x1f0a0309>Mi devi <color red<circa 20 rupie>coloroff>,\nper quel pezzo! Era molto raro!\nE ti garantisco che le valeva!")
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
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<350>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<346>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x1f0a0309>Mi devi <color red<circa 20 rupie>coloroff>, perché era\nun oggetto rarissimo!\nE ti garantisco che le valeva tutte!")
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
/*<366>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<370>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<374>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<378>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*< 20>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000001>Ciao, <heroname>.\nQuando avrò bisogno di pulire\nla casa di nuovo, te lo farò\nsapere, va bene?")
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
/*<125>*/ 										printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080d01>Ti spiacerebbe pulire un po'?\nÈ che io proprio non ce la faccio.\n\n\n<0x10009:0x000a0900>Guarda che pago bene, che ne dici?\n[1-]Certo[2]Mai")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00010d07>Lo farai? Benissimo!\nSei proprio la persona giusta per\nquesto lavoro, <heroname>.\n\n<0x10009:0x00010d00>Mettiti all'opera appena puoi.\nGrazie!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0001090a>Eh?\n<heroname>, speravo che tu\npotessi aiutarmi!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Ciao, <heroname>.\n\n\n\n<0x10009:0x00080900>La casa è di nuovo piena di polvere.\nTi dispiacerebbe pulirla?\nOvviamente ti pagherò. Va bene?\n[1-]Certo[2]Mai")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000001>Ciao, <heroname>.\n\n\n\n<0x10009:0x00080900>Sparvio ce l'ha su con me...\n\n\n\n<0x10009:0x000a0900>Ha detto che non avrei\ndovuto spendere soldi\nper far pulire la casa\nda un inserviente.\n<0x10009:0x00010c00>...\n\n\n\n<0x10009:0x00080d09>... Ma tu non sei un inserviente,\nvero <heroname>?\nQuindi non vedo il problema!\n\n<0x10009:0x00080900>Perciò ti chiederò di pulire di tanto in\ntanto, va bene?")
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
/*< 15>*/ 							printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00080d01>Ti spiacerebbe pulire un po'?\nÈ che io proprio non ce la faccio.\n\n\n<0x10009:0x000a0900>Guarda che pago bene, che ne dici?\n[1-]Certo[2]Mai")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000a0d07>Davvero?! Grandioso!\nSapevo che eri la persona giusta\nper questo lavoro, <heroname>.\n\n<0x10009:0x00080904>Dove ho messo la scopa...?\nUhmm... mi sa che ho\ndimenticato dove sta...\n\n<0x10009:0x00090900>Beh, tutto quello che devi fare\nè <color red<sbarazzarti della polvere>coloroff>.\n\n\n<0x10009:0x00010900>Non importa come lo fai, basta che tu\nriesca a <color red<soffiarla tutta via >coloroff>per me.\n\n\n<0x10009:0x00080902>Bene, mettiti pure al lavoro!")
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
/*< 13>*/ 								printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0001090a>Eh?\n<heroname>, speravo che tu\npotessi aiutarmi!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00080d01>Ciao, <heroname>.\nCome stai?\n\n\n<0x10009:0x00010900>Ti dispiacerebbe pulire un po' la casa?\nSai, le pulizie sono il mio punto debole!\n<0x10009:0x000a0900>Ti pagherò, va bene?\n[1-]Certo[2]Mai")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Ciao, <heroname>.\nCome stai?\n\n\n<0x10009:0x00080900>Vieni qui, devo parlarti di una\ncosa, <heroname>.\nCasa mia è sporchissima...\n\n<0x10009:0x00090900>Sparvio mi assilla che devo pulire\ntutto, ma io non sopporto\nle faccende domestiche.\n\n<0x10009:0x00080900>Perciò volevo chiederti...\npotresti farlo tu al posto mio?\nOvviamente ti pagherò!\n[1-]Certo[2]Mai!")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000002>Come va a scuola\nil mio Sparvio?\n\n\nLui è esattamente l'opposto di me,\nquindi non c'è di che preoccuparsi.\n[1-]Oh, quanta\npolvere[2-]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00010909>Oh, uno passa tutto il tempo a\npulire, e il giorno dopo siamo\npunto e a capo!\n\n<0x10009:0x000a090a>Che noia spolverare!\nCi vorrebbe qualcuno\nche lo facesse per me...")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010904>Cosa c'è che non va?\nHai la faccia di uno che vuole\ndirmi qualcosa.")
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000d01>Ciao, <heroname>.\nCome stai?\n\n\n<0x10009:0x000a0900>Come sta andando a scuola\nil mio Sparvio?")
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
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 1, line: 24 */ "Quante volte te l'ho ripetuto, mamma?")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	wait_frames(30)
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	wait_frames(30)
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 2, line: 25 */ "Calmati, Sparvio.\nNon ti arrabbiare...")
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 1, line: 26 */ "Ma certo che mi arrabbio!\n\n\n\nLo so che hai <color red<pagato qualcuno>coloroff>\nper farti pulire la casa!\n\n\nMa io ti ho dato i soldi per\ncomprare da mangiare!\n\n\nSe continui a spendere tutto\ncosì, poi non mi resterà denaro\nper andare alla scuola d'armi!\n\nMica vado a fare le ronde\nper farti vivere nel lusso!\n\n\nBasta! Questa storia deve finire!")
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
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Oh... ciao, <heroname>...\nÈ un po' tardi.\nChe ci fai qui?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x120b1100>Tu... non hai mica sentito, vero?\nDì la verità, hai sentito?\n[1-]C‐cosa?[2-]Scusa")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x12011100>Niente, niente.\n\n\n\n<0x10009:0x12080400>Va bene, io torno di pattuglia!\nE tu faresti bene a tenere\ngli occhi aperti mentre te\nne vai in giro!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x12011100>Oh... hai sentito!\n\n\n\n<0x10009:0x120f1100>È vero. Lavoro come guardia\nnotturna per guadagnare\nqualcosa.\n\n<0x10009:0x12081100>E non m'importa se mi guardi\ndall'alto in basso! E comunque...\nnon dovresti origliare\nle conversazioni altrui!\n<0x10009:0x120c0c00>Fai come se non avessi sentito\nun bel niente, capito?!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00101100>Mmh...<pause 30> Comunque si direbbe che di\nrecente ci siano molti meno mostri\nin giro...\n<0x10009:0x00ffff00>Cosa sarà mai successo?\nComunque, vivere in pace è una cosa\nbellissima!")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "Ehi, <heroname>!\nLe strade di notte sono pericolose.\nFa' attenzione.\n\n<0x10009:0x00110c09>Umm... a proposito dell'altra notte.\nAcqua in bocca, mi raccomando!")
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
/*< 39>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "<heroname>...\nChe vergogna, non avresti dovuto\nassistere alla scena.\n\n<0x10009:0x000f1100>Che imbarazzo!\nMa è colpa di mia madre!\nQuella è così pigra!\nE io non so proprio come fare.\n<0x10009:0x00080c0b>Comunque sia, sono affari miei.\nNon preoccuparti per me.\n\n\n<0x10009:0x00011100>Anche se non ho ancora ben capito chi\nè stato a pulire tutto così bene.\n\n\n<0x10009:0x00080c16>Chi sarà mai così tonto da ripulire\ntutta la casa? Mi sembra proprio\nun'esagerazione!")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "Ehi, <heroname>.\nSto mantenendo la pace\nsu Oltrenuvola!\n\n<0x10009:0x000c0400>Voglio che questo sia il posto più\nsicuro al mondo, dove tutti\npossano vivere in armonia!\n<0x10009:0x00010c52>Uhmm... <pause 30>perché mi guardi così?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<heroname>! Un giorno anche tu\ncapirai cosa vuol dire essere\nun cavaliere! Non preoccuparti!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "Ehi, <heroname>!\nDi notte qui è pericoloso,\nquindi tieni gli occhi aperti!\n\n<0x10009:0x000b0400>Questa zona fa parte della\nmia ronda.\n\n\n<0x10009:0x00080404>Qui di notte brulica di mostri!\n\n\n\nEd è compito di ogni cavaliere\ndifendere la popolazione inerme!\n[1-]Grande![2-]Lavoro?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00090c09>Di cosa stai parlando? Questo è\nproprio il tipo di lavoro che spetta a un\ncavaliere che si rispetti!\nMa mi hai visto, giusto?\nCome ricompensa voglio solo il sorriso\ndella gente che proteggo!\n<0x10009:0x00080400>Questo è il dovere di un cavaliere!\n\n<0x10009:0x00000005>Proprio così, <heroname>!\nAnche tu un giorno capirai come\nci si sente!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x000c0c17><heroname>!\nPer quale ragione hai deciso\ndi diventare un cavaliere?\nPer brama di ricchezze?\nTe lo chiedo perché non si\ndovrebbe cadere preda\ndella cupidigia!\n\n<0x10009:0x00080405>Guarda me! Ambisco alla felicità\ndel popolo, non ai soldi!\nQuesto è il nobile animo\ndi un cavaliere!")
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
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000009>Guarda cosa hai fatto!\nHai rotto un pezzo importantissimo!\n\n\nPeggio per te se rompi qualcos'altro!")
          	  case 1:
/*<252>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000007>Sai, mi piace collezionare pezzi\nd'antiquariato. Tutte le cose che\nvedi qui a casa mia sono di gran\nvalore.\nMi raccomando, non rompere nulla!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x1f00000a>ECCO!!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x1f0a0300>Ancora tu!\nMa ce l'hai con me per caso?!")
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
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 50 */ "... Non hai nemmeno una\nrupia in tasca! Rompere la roba\naltrui e non avere i soldi per\nripagarla è davvero oltraggioso!\nVattene, non farti più vedere!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0, line: 49 */ "Non hai nemmeno una rupia\nin tasca!\n\n\nCioè, secondo te puoi andartene\nin giro a rompere la roba della\ngente senza neanche avere i\nsoldi per ripagarla?\nMa sei matto?! Guarda, non mi\nservono i tuoi soldi! Sparisci!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x1f090300>Hai una bella faccia tosta\na venire qui e rompere i miei pezzi\nd'antiquariato!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x1f090300>Guarda che cosa hai combinato!\nHai rotto un pezzo di gran valore!\n\n\nOra me lo devi ripagare!\n\n\n\n<0x10009:0x1f0b0700>Vediamo un po'... era davvero\nun pezzo raro... diciamo che\n<color red<20 rupie >coloroff>dovrebbero bastare!\n\n<0x10009:0x1f010305>Perché quella faccia?!\nVorresti insinuare che la cifra\nè troppo alta?! Come ti permetti?\n\n<0x10009:0x1f090309>Che ragazzo insolente!\nConosco benissimo il valore\ndelle mie rarità e ora me lo\nripaghi fino all'ultima rupia!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x1f0a0300>Guarda che se lo rifai\ndovrò passare per le vie legali!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "Non hai nemmeno una rupia\nin tasca!\n\n\nCioè, secondo te puoi andartene\nin giro a rompere la roba della\ngente senza neanche avere i\nsoldi per ripagarla?\nMa sei matto?! Guarda, non mi\nservono i tuoi soldi! Sparisci!")
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

