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
/*< 87>*/ 										printf("\x0E\x01\x09\x04\x00\x07Ciao, tesoruccio!\nVoglio custodire con amore\ntutto quello che il mio tesoruccio\nvuole affidarmi!\n[1]Sì[2-]No")
          										flw_273:
/*<273>*/ 										entrypoint_112_06();
          									  case 1:
/*< 86>*/ 										printf("\x0E\x01\x09\x04\x00\x08Ciao tesoruccio!\nBentornato!\n\n\nSono pronta a custodire tutto\nquello che il mio tesoruccio\ndesidera! Tutto, ma proprio tutto!\n[1]Sì[2-]No")
/*< 90>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_273
          									}
          								  case 1:
/*< 85>*/ 									switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          									  case 0:
/*< 89>*/ 										printf("\x0E\x01\x09\x04\x00\x0EBenvenuto, Link.\nHai qualcosa da lasciare in custodia\nalla ragazza alla quale hai spezzato\nil cuore...\n... E che si sta facendo sempre\npiù bella ogni giorno che passa?\n[1]Sì[2-]No")
          										flw_272:
/*<272>*/ 										entrypoint_112_06();
          									  case 1:
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x05Ah... Ciao, Link.\n\n\n\nSenti... scusa se mi sono\ncomportata come una\nsciocca l'altra notte.\n\nCi ho pensato a lungo ed\nè acqua passata adesso.\n\n\nSi dice che le ragazze diventino\npiù belle dopo una delusione\nd'amore. Ora so cosa vuol dire...\n\nE voglio sicuramente diventare\nsempre più bella. Nessun\nrimpianto, d'accordo?\n\nD'accordo. Al lavoro dunque.\nHai qualcosa da depositare?\n[1]Sì[2-]No")
/*< 91>*/ 										story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */] = true;
          										goto flw_272
          									}
          								}
          							  case 1:
/*<435>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 81, 'param3': 31}
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x05Ciao, tesoro!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Umm... ecco, io... <r<vorrei che tu\nmi venissi a trovare a casa, stanotte>>.\nDevo parlarti di una cosa\nimportante.\n\x0E\x01\x09\x04\x08\xA00Casa mia sta proprio accanto al\nbazar. Verrai sicuramente, vero?\nSarò lì ad aspettarti!")
          								flw_79:
/*< 79>*/ 								printf("Hai qualcosa da depositare?\n\n[1]Sì[2-]No")
/*< 80>*/ 								story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */] = true;
/*<271>*/ 								entrypoint_112_06();
          							}
          						  case 1:
/*<280>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 78, 'param3': 31}
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x00\x05Ciao, tesoro!\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Umm... ecco, io... <r<vorrei che tu\nmi venissi a trovare a casa, stanotte>>.\nDevo parlarti di una cosa\nimportante.\n\x0E\x01\x09\x04\x08\xA00Casa mia sta proprio accanto al\nbazar. Verrai sicuramente, vero?\nSarò lì ad aspettarti!")
          							goto flw_79
          						}
          					  case 1:
          						flw_267:
/*<267>*/ 						printf("\x0E\x01\x09\x04\x00\x07Benvenuto, <r<tesoro>>! Ti stavo\naspettando! Hai tante belle\ncose per me oggi?\n\nDammi pure tutto... ehm, voglio\ndire... oggetti da depositare?\n[1]Sì[2-]No")
          						flw_270:
/*<270>*/ 						entrypoint_112_06();
          					}
          				  case 1:
          					goto flw_267
          				}
          			  case 1:
/*<256>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 20480, 'next': 61, 'param3': 13}
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x08... Aaaaah...")
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x08\xA00Tu... sei venuto a trovarmi!\nSono così felice!\n\n[1]...[2]Sì")
/*< 62>*/ 				switch (choice(2)) {
          				  case 0:
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ANon fissarmi in quel modo.\nMi fai arrossire, <r<tesoro>>!")
          					flw_66:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x12\xA00Sai, ti penso sempre, mi sembra\ndi essere in un sogno, e il mio\ncuore inizia a battere forte.\n\nMi manca il fiato e tutto mi gira\nintorno! Forse... potrebbe forse\nessere...?\n[1]Stai male![2]Amore?")
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x0F\x120EOh, che giocherellone che sei...")
          						flw_70:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x12\xA00Ops. Mi son fatta prendere la mano.\nTorniamo al lavoro!\n\n\n\x0E\x01\x09\x04\x0E\x1000Allora, dov'eravamo?\nAh, dovevo chiederti se vuoi che\nti alleggerisca un po'...\n[1]Sì, grazie[2-]...")
/*< 71>*/ 						switch (choice(2)) {
          						  case 0:
/*< 73>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FDavvero...? Mi sento così felice...")
          							flw_72:
/*< 72>*/ 							printf("\x0E\x01\x09\x04\x0D\xF0AOh cielo! Mi spiace davvero!\nNon volevo mica raccontarti\ni miei sogni più reconditi!\n\n\x0E\x01\x09\x04\x08\xA00Accidenti, non avrei dovuto dire\nneanche questo!\nVuoi depositare qualcosa, <r<tesoruccio>>?\n[1]Sì[2-]No")
/*<257>*/ 							story_flags[691 /* us: 805A9B20 0x01, jp: 805ACDA0 0x01 */] = true;
          							goto flw_270
          						  case 1:
          							goto flw_72
          						}
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x0F\xF0DAaah!\nNon posso credere che tu l'abbia detto!\nChe vergogna!")
          						goto flw_70
          					}
          				  case 1:
/*< 65>*/ 					printf("\x0E\x01\x09\x04\x0D\xF0ATu... mi rendi così felice...\nMi sento venir meno...")
          					goto flw_66
          				}
          			}
          		  case 1:
/*<264>*/ 			switch (story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */]) {
          			  case 0:
/*<265>*/ 				printf("\x0E\x01\x09\x04\x00\x05Benvenuto. Mi fa piacere vederti.\nQui prendiamo in consegna\ngli oggetti che non vuoi\nportarti dietro.\nChe cosa ci lasci oggi?\nVuoi depositare un oggetto\ndalla tua borsa?\n[1]Sì[2-]No")
          				flw_60:
/*< 60>*/ 				entrypoint_112_06();
          			  case 1:
/*< 55>*/ 				printf("Ciao. Benvenuto al deposito... \x0E\x01\x09\x04\x00\x05Ah.")
/*<279>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 57, 'param3': 6}
/*< 57>*/ 				printf("Oh. Io... ehm...\nB\x2010benvenuto...\n\n[1]Che c'è?[2]Sei strana")
/*< 56>*/ 				switch (choice(2)) {
          				  case 0:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\n\xF18No... niente.\nÈ tutto normale.")
          					flw_76:
/*< 76>*/ 					printf("Non è che io non sia\ncontenta di vederti.\n\n\nSolo che... se pensi a quante volte ci\nvediamo, sembra che la nostra\nrelazione non sia semplicemente\nquella tra una commessa e un cliente.\n\x0E\x01\x09\x04\x10\x1405Io... cioè non volevo dire...\nMa perché non sto zitta?\n\n\nPerdonami. Guarda, dimentica\nquello che ho detto, va bene?\n\n\n\x0E\x01\x09\x04\x07\x800Bene... Meglio che torni in me e\nmi rimetta a lavorare...\n\n\nVuoi depositare qualcosa?\n[1]Sì[2-]No")
/*<269>*/ 					story_flags[690 /* us: 805A9B21 0x80, jp: 805ACDA1 0x80 */] = true;
          					goto flw_60
          				  case 1:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\n\xF18Io... non capisco...\nforse ti stai sbagliando!")
          					goto flw_76
          				}
          			}
          		}
          	  case 1:
/*<261>*/ 		switch (story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */]) {
          		  case 0:
/*<262>*/ 			printf("\x0E\x01\x09\x04\x00\x01Benvenuto al deposito!\nSei tornato a farmi visita?\nOoh, così mi fai arrossire!\n\nBeh, come posso aiutarti?\nVuoi lasciare o riprendere qualcosa?\n[1]Sì[2-]No")
          			flw_263:
/*<263>*/ 			entrypoint_112_06();
          		  case 1:
/*< 50>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ciao. Questo è il deposito.\nOh... sei di nuovo tu...\n\n\nVieni qui spesso. Sai, in questi\ngiorni sei il mio miglior cliente.\n\n\n\x0E\x01\x09\x04\x00\x04Eh? Aspetta un attimo.\n\n\n\nMa tu...? Cioè...?\n\n\n\nNon vieni qui solo per vedere\nme, vero?\n[1]Ti sbagli[2]Sì")
/*< 49>*/ 			switch (choice(2)) {
          			  case 0:
/*< 51>*/ 				printf("\x0E\x01\x09\x04\x00\x02Oh... capisco...\n\n\n\nChe sciocchina che sono.\nPerché mai dovresti?\n\n\n\x0E\x01\x09\x04\n\xC00Oh, ma mica me la sono presa.\nPer niente, guarda.")
          				flw_53:
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x07\x800Quasi dimenticavo! Io sono qui per\nlavorare. Hai qualcosa da depositare\no da riprendere?\n[1]Sì[2-]No")
/*<268>*/ 				story_flags[689 /* us: 805A9B21 0x40, jp: 805ACDA1 0x40 */] = true;
          				goto flw_263
          			  case 1:
/*< 52>*/ 				printf("\x0E\x01\x09\x04\x00\x02Davvero?!\n\n\n\nEhi! Ma stai scherzando?\nGuarda che io non ci\ncasco tanto facilmente!\n\n\x0E\x01\x09\x04\n\xC00Però... se sei sincero, sappi che\nnon mi dispiacerebbe...")
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
/*<106>*/ 								printf("\x0E\x01\x09\x04\x00\x09Mi fa piacere quando mi\nparli dei tuoi sentimenti, tesoruccio.\nCi vediamo presto al negozio!")
          							  case 1:
/*<109>*/ 								printf("\x0E\x01\x09\x04\x00\x0DTesoruccio! Ti ho detto che la nostra\nrelazione deve restare segreta!\nSe mi vieni a trovare così spesso,\nverremo scoperti!\nE poi cosa vuoi a quest'ora\ndella notte?\n[1]Parlare[2]Niente[3]Depositare")
/*<110>*/ 								switch (choice(3)) {
          								  case 0:
/*<111>*/ 									printf("\x0E\x01\x09\x04\x08\x08Parlerei con te tutto il tempo che\nvuoi, però qui c'è mio padre che\nci fissa! Dai, parliamo un'altra\nvolta!")
          								  case 1:
/*<112>*/ 									printf("\x0E\x01\x09\x04\x08\xA00Ehi, non c'è bisogno di fare il\nprepotente! Anche se... non\nposso dire che non mi piaccia!")
          								  case 2:
/*<113>*/ 									printf("... ...\nMa per quello devi farmi visita\ndurante il giorno, al negozio...\n\n\x0E\x01\x09\x04\x0E\x1000O vuoi forse dire che... per te\nnon significo niente?")
          								}
          							}
          						  case 1:
/*<104>*/ 							switch (zone_temp_flags[0 /* 0x1 01 */]) {
          							  case 0:
/*<107>*/ 								printf("\x0E\x01\x09\x04\x00\x14Sono forte. Mi passerà.\nTi prego, lasciami da sola.")
          							  case 1:
/*<108>*/ 								switch (story_flags[637 /* us: 805A9B1A 0x80, jp: 805ACD9A 0x80 */]) {
          								  case 0:
/*<115>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<117>*/ 										printf("\x0E\x01\x09\x04\x00\x13Non so perché,\nma mio padre è di ottimo\numore in questi giorni...\n\nNon si rende conto che\nsua figlia soffre perché le\nè stato spezzato il cuore?")
          									  case 1:
/*<116>*/ 										printf("\x0E\x01\x09\x04\x00\x14So che non stiamo insieme, ma...\nCerte volte, di notte, fa così male...\nChe pena soffrir le pene d'amor...")
          									}
          								  case 1:
/*<114>*/ 									printf("\x0E\x01\x09\x04\x00\x0ELink...\nCi si sente davvero così male\nad avere il cuore in mille pezzi?\x0E\x01\x09\x04\x00\x14")
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
/*<223>*/ 						printf("\x0E\x01\x09\x04\x00\x05Link... sei venuto a\ntrovarmi... grazie.\n\n\n\x0E\x01\x09\x04\x0E\xF00La verità è che... Link \nmuoio dalla voglia di dirti una cosa.\n\n\nMa devi prepararti a non trarre\nconclusioni affrettate, va bene?")
/*<222>*/ 						set_camera(11, 0)
/*<297>*/ 						printf("Che cosa pensi di me?\nPer te sono solo un'addetta\ndel deposito?\n[1]Mi piaci[2]Sì")
/*<296>*/ 						switch (choice(2)) {
          						  case 0:
/*<299>*/ 							printf("\x0E\x01\x09\x04\x0E\x100FDavvero? Dici sul serio?!\nNon stai scherzando?!\n\n[1]Davvero[2]Scherzavo")
/*<300>*/ 							switch (choice(2)) {
          							  case 0:
          								flw_302:
/*<302>*/ 								printf("\x0E\x01\x09\x04\x08\xA08Sono così felice! Mi sembra di\nessere in un sogno. Devo sentirtelo\nripetere, per esserne sicura!\n\n\x0E\x01\x09\x04\x0E\x1000Ti piaccio davvero, davvero, davvero?\n[1]Mi piaci[2]Mentivo,\nscusa")
/*<304>*/ 								switch (choice(2)) {
          								  case 0:
/*<305>*/ 									printf("\x0E\x01\x09\x04\x0D\xF0ANon stai mentendo, vero?\nSe scoprissi che stai dicendo una\nbugia non so cosa potrei fare!\n[1]È vero[2]Bugia")
/*<312>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_309:
/*<309>*/ 										printf("\x0E\x01\x09\x04\x08\xA09... Grazie! Ti amo così tanto,\ntesoruccio! Scusami se non\nmi sono fidata di te!")
/*<318>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 317, 'param3': 6}
/*<317>*/ 										set_camera(12, 0)
/*<321>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 320, 'param3': 6}
/*<320>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 319, 'param3': 13}
/*<319>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 314, 'param3': 6}
/*<314>*/ 										printf("\x0E\x01\x09\x04\x00\x13Ma lo so, capisco.\nDavvero, non fa niente.\n\n\nAdesso come adesso hai molte altre\ncose più importanti a cui pensare.\n\n\n\x0E\x01\x09\x04\x0E\x1000Hai un destino da realizzare, vero?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00Lo so perché vieni sempre al negozio\nper depositare oggetti. E proprio\nper questo non ti importunerò più.\n\nHo deciso che ti assisterò nel \nmigliore dei modi.\n\n\n\x0E\x01\x09\x04\x0E\x1000Poi quando avrai finito con quello\nche hai da fare, ti presenterò a\nmio padre.\n\n\x0E\x01\x09\x04\x0B\xD00Fino a quel giorno, manteniamo\nil segreto! Tesoruccio, io...\nCi rivediamo al negozio.")
/*<316>*/ 										give_gratitude_crystals();
/*<315>*/ 										story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */] = true;
          										flw_333:
/*<333>*/ 										story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */] = true;
/*<334>*/ 										zone_temp_flags[0 /* 0x1 01 */] = true;
/*<335>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          									  case 1:
          										flw_310:
/*<310>*/ 										printf("\x0E\x01\x09\x04\x0F\x1214... Capisco. Questa è la tua risposta...\n\n\n\nMi spiace averti messo in imbarazzo...")
/*<329>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 328, 'param3': 6}
/*<328>*/ 										set_camera(12, 0)
/*<331>*/ 										{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 330, 'param3': 13}
/*<330>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 332, 'param3': 6}
/*<332>*/ 										printf("\x0E\x01\x09\x04\x00\x13... No. Non ho bisogno della tua\ncompassione.\n\n\nSto bene.\nMi passerà presto...\n\n\n\x0E\x01\x09\x04\x14\xD00La prossima volta che ci\nincontreremo, ti saluterò\ncordialmente come ogni\naltro cliente...")
/*<323>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 324, 'param3': 32}
/*<324>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 6}
/*<322>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 325, 'param3': 17}
/*<325>*/ 										{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 5120, 'next': 326, 'param3': 13}
/*<326>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 327, 'param3': 6}
/*<327>*/ 										printf("Ma, stanotte voglio restare sola...\n\n\n\nBuonanotte, tesoruccio.")
          										goto flw_333
          									}
          								  case 1:
          									flw_307:
/*<307>*/ 									printf("\x0E\x01\x09\x04\x0F\x120AM\x2010ma...\n\n\n\n\x0E\x01\x09\x04\x0E\x1000Io non ti piaccio e per te sono solo\nuna conoscente, l'addetta del\ndeposito. Vero?\n[1]Mi piaci[2]È così")
/*<311>*/ 									switch (choice(2)) {
          									  case 0:
          										goto flw_309
          									  case 1:
          										goto flw_310
          									}
          								}
          							  case 1:
          								flw_303:
/*<303>*/ 								printf("\x0E\x01\x09\x04\x0F\x120FDici sul serio? Questo è tutto quello\nche sono per te?\n\n\n\x0E\x01\x09\x04\x0E\x1000Ah! Ora capisco! Stai solo cercando\ndi mascherare i tuoi sentimenti,\nvero?\n[1]Sì[2]No")
/*<306>*/ 								switch (choice(2)) {
          								  case 0:
/*<308>*/ 									printf("\x0E\x01\x09\x04\x08\xA08Cosa? Allora ti piaccio davvero?\n\n\n[1]Mi piaci[2]Mentivo,\nscusa")
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
/*<298>*/ 							printf("\x0E\x01\x09\x04\x0F\x1210... Ma?\n\n\n\n\x0E\x01\x09\x04\x0D\xF00F\x2010forse non te l'ho chiesto nel\nmodo giusto...\n\n\n\x0E\x01\x09\x04\x0E\x1000Va bene. Fammi pensare...\nChe cosa sono io per te?\n[1]Mi piaci[2]Nessuno")
/*<301>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_302
          							  case 1:
          								goto flw_303
          							}
          						}
          					}
          				  case 1:
/*<102>*/ 					printf("\x0E\x01\x09\x04\x00\x07Ciao, <r<tesoruccio>>.\nEntra pure...\n\n\nSei venuto a trovarmi a casa...\nSono così felice!")
          				}
          			  case 1:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x15Oh, ciao! Sei venuto a trovarmi\na casa...\n\n\nNon è che vuoi farmi capire quanto\nsono speciale per te, vero?")
          			}
          		  case 1:
/*<100>*/ 			printf("\x0E\x01\x09\x04\x00\x17Non importa quanto tu abbia\nvoglia di vedermi, non posso\naccogliere chiunque in casa!\n\n\x0E\x01\x09\x04\x01\x800O forse sono troppo giudiziosa?")
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x00\x02Aaah... ma non c'è nessuno lì fuori\nche riesca a farmi sentire viva?\nQuanto vorrei trovare qualcuno\nda amare!\n\x0E\x01\x09\x04\x01\x800Aspetta un attimo. Chi ti ha detto\ndi entrare in casa mia senza\ninvito?")
          	}
          }

          void entrypoint_123_08() {
/*<184>*/ 	start()
/*<188>*/ 	switch (story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */]) {
          	  case 0:
/*<189>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Ti ringrazio tantissimo,\nLink!\n\n\n\x0E\x01\x09\x04\n\x900La casa è così pulita adesso!\nSenza polvere sembra di\nessere in un altro posto!")
/*<195>*/ 		make_actor_do_something(1, 0)
          		flw_190:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x01\x909Te le sei guadagnate.\nUn'ottima ricompensa \nper un ottimo lavoro!\nEccoti <r<20 rupie>>!\x0E\x01\x09\x04\n\xD00")
/*<191>*/ 		give_item(4 0x04);
/*<428>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 192, 'param3': 12}
/*<192>*/ 		printf("\x0E\x01\x09\x04\x01\x900Se la casa si riempie di nuovo\ndi polvere, puoi tornare ad aiutarmi.\nPago bene, lo sai!")
/*<430>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 429, 'param3': 12}
/*<429>*/ 		printf("\x0E\x01\x09\x04\n\x900Oh... un'ultima cosa.\nNon dire niente a Sparvio!\n\n\n\x0E\x01\x09\x04\x08\x900Altrimenti si arrabbia\ncon me perché sperpero\nil denaro. Me lo prometti?")
/*<193>*/ 		story_flags[581 /* us: 805A9B1B 0x10, jp: 805ACD9B 0x10 */] = true;
/*<194>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<196>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x00\xD02Ti ringrazio tantissimo,\nLink!\n\n\n\x0E\x01\x09\x04\n\x900La casa è così pulita adesso!\nSenza polvere sembra di\nessere in un altro posto!")
/*<187>*/ 		make_actor_do_something(1, 0)
/*<186>*/ 		give_gratitude_crystals();
/*<198>*/ 		story_flags[575 /* us: 805A9B18 0x40, jp: 805ACD98 0x40 */] = true;
/*<197>*/ 		story_flags[361 /* us: 805A9B00 0x80, jp: 805ACD80 0x80 */] = true;
          		goto flw_190
          	}
          }

          void entrypoint_123_09() {
/*<208>*/ 	start()
/*<201>*/ 	printf("\x0E\x01\x09\x04\x00\x02Apprezzo il tuo impegno,\nLink!\n\n\nQuando non ci sarà più un \ngranello di polvere in giro\nti darò la tua paga. Che ne dici?\n\n\x0E\x01\x09\x04\x01\x900Oppure ne hai abbastanza per oggi?\n[1]Ho finito[2-]Non ancora")
/*<202>*/ 	switch (choice(2)) {
          	  case 0:
/*<204>*/ 		printf("\x0E\x01\x09\x04\x00\nOh, che peccato...\nVa bene, non ti preoccupare.\nPerò se puoi tornare ad aiutarmi\nfammelo sapere, capito?")
/*<205>*/ 		make_actor_do_something(1, 0)
/*<206>*/ 		zone_temp_flags[0 /* 0x1 01 */] = false;
/*<207>*/ 		story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          	  case 1:
/*<203>*/ 		printf("\x0E\x01\x09\x04\n\x900Non c'è problema.\nDai, rimboccati le maniche.\nOvviamente il <r<pavimento>> è ridotto\nmale, ma...\n... c'è molta polvere anche sulle\n<r<finestre>>, sugli <r<scaffali >>e persino sui\n<r<letti>>. La polvere si posa dappertutto!")
          	}
          }

          void entrypoint_123_10() {
/*<132>*/ 	start()
/*<437>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 139, 'param3': 17}
/*<139>*/ 	set_camera(4, 0)
          	flw_219:
/*<219>*/ 	switch (zone_temp_flags[8 /* 0x0 01 */]) {
          	  case 0:
/*<220>*/ 		printf("Link?\nLa tua paga è qui,\nvieni a prenderla.")
          	  case 1:
/*<133>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh, Link.\nNon hai ancora finito?\n\n\nNe hai abbastanza per oggi?\n\n\n[1]Ho finito[2-]Continuo")
/*<134>*/ 		switch (choice(2)) {
          		  case 0:
/*<136>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, che peccato...\nVa bene, non ti preoccupare.\nPerò se puoi tornare ad aiutarmi\nfammelo sapere, capito?")
/*<294>*/ 			{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 137, 'param3': 15}
/*<137>*/ 			make_actor_do_something(1, 0)
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
/*<150>*/ 			story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = false;
          			flw_140:
/*<140>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\n\x900Non c'è problema.\nDai, rimboccati le maniche.\nOvviamente il <r<pavimento>> è ridotto\nmale, ma...\n... c'è molta polvere anche sulle\n<r<finestre>>, sugli <r<scaffali >>e persino sui\n<r<letti>>. La polvere si posa dappertutto!")
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
/*<145>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ehi, Link.\nGià te ne vai?\n\n\nSalutami Sparvio se lo incontri\nmentre è in servizio, va bene?")
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
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\xD08Oh cielo!\nNon c'è più nemmeno\nun granello di polvere!\nGrazie, Link!\n\x0E\x01\x09\x04\n\x900Mi hai davvero cambiato la\ngiornata. Vieni qui, voglio\ndarti una bella ricompensa.")
/*<217>*/ 	zone_temp_flags[9 /* 0x0 02 */] = false;
/*<221>*/ 	zone_temp_flags[8 /* 0x0 01 */] = true;
/*<218>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_123_13() {
/*<399>*/ 	start()
/*<381>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Devo insistere, mi devi pagare\n<r<circa 30 rupie>>, perché era un pezzo\ndi gran valore!\nE ti garantisco che valeva anche di più!")
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
/*<386>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<390>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<394>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<398>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<359>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Mi devi <r<circa 20 rupie>>,\nper quel pezzo! Era molto raro!\nE ti garantisco che le valeva!")
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
/*<354>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<350>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<346>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<341>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
/*<413>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_343
          		}
          	}
          }

          void entrypoint_123_16() {
/*<379>*/ 	start()
/*<361>*/ 	printf("\x0E\x01\x09\x04\x1F0A\x309Mi devi <r<circa 20 rupie>>, perché era\nun oggetto rarissimo!\nE ti garantisco che le valeva tutte!")
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
/*<366>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<370>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<374>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*<378>*/ 			printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
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
/*< 20>*/ 								printf("\x0E\x01\x09\x04\x00\x01Ciao, Link.\nQuando avrò bisogno di pulire\nla casa di nuovo, te lo farò\nsapere, va bene?")
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
/*<125>*/ 										printf("\x0E\x01\x09\x04\x08\xD01Ti spiacerebbe pulire un po'?\nÈ che io proprio non ce la faccio.\n\n\n\x0E\x01\x09\x04\n\x900Guarda che pago bene, che ne dici?\n[1]Certo[2-]Mai")
          										flw_126:
/*<126>*/ 										switch (choice(2)) {
          										  case 0:
/*<128>*/ 											printf("\x0E\x01\x09\x04\x01\xD07Lo farai? Benissimo!\nSei proprio la persona giusta per\nquesto lavoro, Link.\n\n\x0E\x01\x09\x04\x01\xD00Mettiti all'opera appena puoi.\nGrazie!")
/*<130>*/ 											make_actor_do_something(0, 0)
/*<149>*/ 											story_flags[377 /* us: 805A9B02 0x80, jp: 805ACD82 0x80 */] = true;
/*<129>*/ 											zone_temp_flags[0 /* 0x1 01 */] = true;
          										  case 1:
/*<127>*/ 											printf("\x0E\x01\x09\x04\x01\x90AEh?\nLink, speravo che tu\npotessi aiutarmi!")
/*<131>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          										}
          									  case 1:
/*<276>*/ 										{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("\x0E\x01\x09\x04\x00\x01Ciao, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900La casa è di nuovo piena di polvere.\nTi dispiacerebbe pulirla?\nOvviamente ti pagherò. Va bene?\n[1]Certo[2-]Mai")
          										goto flw_126
          									}
          								}
          							}
          						  case 1:
/*<277>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 45, 'param3': 13}
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ciao, Link.\n\n\n\n\x0E\x01\x09\x04\x08\x900Sparvio ce l'ha su con me...\n\n\n\n\x0E\x01\x09\x04\n\x900Ha detto che non avrei\ndovuto spendere soldi\nper far pulire la casa\nda un inserviente.\n\x0E\x01\x09\x04\x01\xC00...\n\n\n\n\x0E\x01\x09\x04\x08\xD09... Ma tu non sei un inserviente,\nvero Link?\nQuindi non vedo il problema!\n\n\x0E\x01\x09\x04\x08\x900Perciò ti chiederò di pulire di tanto in\ntanto, va bene?")
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
/*< 15>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Ti spiacerebbe pulire un po'?\nÈ che io proprio non ce la faccio.\n\n\n\x0E\x01\x09\x04\n\x900Guarda che pago bene, che ne dici?\n[1]Certo[2-]Mai")
          							flw_2:
/*<  2>*/ 							switch (choice(2)) {
          							  case 0:
/*< 12>*/ 								printf("\x0E\x01\x09\x04\n\xD07Davvero?! Grandioso!\nSapevo che eri la persona giusta\nper questo lavoro, Link.\n\n\x0E\x01\x09\x04\x08\x904Dove ho messo la scopa...?\nUhmm... mi sa che ho\ndimenticato dove sta...\n\n\x0E\x01\x09\x04\x09\x900Beh, tutto quello che devi fare\nè <r<sbarazzarti della polvere>>.\n\n\n\x0E\x01\x09\x04\x01\x900Non importa come lo fai, basta che tu\nriesca a <r<soffiarla tutta via >>per me.\n\n\n\x0E\x01\x09\x04\x08\x902Bene, mettiti pure al lavoro!")
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
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x01\x90AEh?\nLink, speravo che tu\npotessi aiutarmi!")
          								goto flw_122
          							}
          						  case 1:
/*< 14>*/ 							printf("\x0E\x01\x09\x04\x08\xD01Ciao, Link.\nCome stai?\n\n\n\x0E\x01\x09\x04\x01\x900Ti dispiacerebbe pulire un po' la casa?\nSai, le pulizie sono il mio punto debole!\n\x0E\x01\x09\x04\n\x900Ti pagherò, va bene?\n[1]Certo[2-]Mai")
          							goto flw_2
          						}
          					}
          				}
          			  case 1:
/*<  9>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 31}
/*<275>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2304, 'next': 11, 'param3': 13}
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ciao, Link.\nCome stai?\n\n\n\x0E\x01\x09\x04\x08\x900Vieni qui, devo parlarti di una\ncosa, Link.\nCasa mia è sporchissima...\n\n\x0E\x01\x09\x04\x09\x900Sparvio mi assilla che devo pulire\ntutto, ma io non sopporto\nle faccende domestiche.\n\n\x0E\x01\x09\x04\x08\x900Perciò volevo chiederti...\npotresti farlo tu al posto mio?\nOvviamente ti pagherò!\n[1]Certo[2-]Mai!")
          				goto flw_2
          			}
          		  case 1:
          			flw_17:
/*< 17>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x00\x02Come va a scuola\nil mio Sparvio?\n\n\nLui è esattamente l'opposto di me,\nquindi non c'è di che preoccuparsi.\n[1]Oh, quanta\npolvere[2]...")
/*<166>*/ 				switch (choice(2)) {
          				  case 0:
/*<167>*/ 					printf("\x0E\x01\x09\x04\x01\x909Oh, uno passa tutto il tempo a\npulire, e il giorno dopo siamo\npunto e a capo!\n\n\x0E\x01\x09\x04\n\x90AChe noia spolverare!\nCi vorrebbe qualcuno\nche lo facesse per me...")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x01\x904Cosa c'è che non va?\nHai la faccia di uno che vuole\ndirmi qualcosa.")
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\xD01Ciao, Link.\nCome stai?\n\n\n\x0E\x01\x09\x04\n\x900Come sta andando a scuola\nil mio Sparvio?")
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
/*< 23>*/ 	printf("Quante volte te l'ho ripetuto, mamma?")
/*<180>*/ 	set_camera(7, 0)
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 24, 'param3': 6}
/*< 24>*/ 	set_camera(1, 0)
/*<172>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 169, 'param3': 6}
/*<169>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 100, 'next': 25, 'param3': 14}
/*< 25>*/ 	printf("Calmati, Sparvio.\nNon ti arrabbiare...")
/*< 26>*/ 	printf("Ma certo che mi arrabbio!\n\n\n\nLo so che hai <r<pagato qualcuno>>\nper farti pulire la casa!\n\n\nMa io ti ho dato i soldi per\ncomprare da mangiare!\n\n\nSe continui a spendere tutto\ncosì, poi non mi resterà denaro\nper andare alla scuola d'armi!\n\nMica vado a fare le ronde\nper farti vivere nel lusso!\n\n\nBasta! Questa storia deve finire!")
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
/*< 27>*/ 	printf("Oh... ciao, Link...\nÈ un po' tardi.\nChe ci fai qui?")
/*<182>*/ 	set_camera(8, 0)
/*<183>*/ 	printf("\x0E\x01\x09\x04\x120B\x1100Tu... non hai mica sentito, vero?\nDì la verità, hai sentito?\n[1]C\x2010cosa?[2]Scusa")
/*<151>*/ 	switch (choice(2)) {
          	  case 0:
/*<152>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Niente, niente.\n\n\n\n\x0E\x01\x09\x04\x1208\x400Va bene, io torno di pattuglia!\nE tu faresti bene a tenere\ngli occhi aperti mentre te\nne vai in giro!")
          		flw_181:
/*<181>*/ 		set_camera(2, 0)
/*< 30>*/ 		{'type': 'type3', 'subType': 2, 'param1': 26, 'param2': 18, 'next': 31, 'param3': 14}
/*< 31>*/ 		story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */] = true;
/*< 34>*/ 		story_flags[578 /* us: 805A9B1B 0x02, jp: 805ACD9B 0x02 */] = true;
/*< 35>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x1201\x1100Oh... hai sentito!\n\n\n\n\x0E\x01\x09\x04\x120F\x1100È vero. Lavoro come guardia\nnotturna per guadagnare\nqualcosa.\n\n\x0E\x01\x09\x04\x1208\x1100E non m'importa se mi guardi\ndall'alto in basso! E comunque...\nnon dovresti origliare\nle conversazioni altrui!\n\x0E\x01\x09\x04\x120C\xC00Fai come se non avessi sentito\nun bel niente, capito?!")
/*<154>*/ 		scene_flags[0 'Skyloft'][76 /* 0x8 10 */] = true;
          		goto flw_181
          	}
          }

          void entrypoint_123_02() {
/*< 36>*/ 	start()
/*<434>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
/*<432>*/ 		printf("\x0E\x01\x09\x04\x10\x1100Mmh...<pause1E> Comunque si direbbe che di\nrecente ci siano molti meno mostri\nin giro...\n\x0E\x01\x09\x04ÿ\xFF00Cosa sarà mai successo?\nComunque, vivere in pace è una cosa\nbellissima!")
          	  case 1:
/*< 37>*/ 		switch (story_flags[576 /* us: 805A9B18 0x80, jp: 805ACD98 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */]) {
          			  case 0:
/*<178>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 41, 'param3': 13}
/*< 41>*/ 				printf("Ehi, Link!\nLe strade di notte sono pericolose.\nFa' attenzione.\n\n\x0E\x01\x09\x04\x11\xC09Umm... a proposito dell'altra notte.\nAcqua in bocca, mi raccomando!")
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
/*< 39>*/ 					printf("Link...\nChe vergogna, non avresti dovuto\nassistere alla scena.\n\n\x0E\x01\x09\x04\x0F\x1100Che imbarazzo!\nMa è colpa di mia madre!\nQuella è così pigra!\nE io non so proprio come fare.\n\x0E\x01\x09\x04\x08\xC0BComunque sia, sono affari miei.\nNon preoccuparti per me.\n\n\n\x0E\x01\x09\x04\x01\x1100Anche se non ho ancora ben capito chi\nè stato a pulire tutto così bene.\n\n\n\x0E\x01\x09\x04\x08\xC16Chi sarà mai così tonto da ripulire\ntutta la casa? Mi sembra proprio\nun'esagerazione!")
/*< 40>*/ 					story_flags[579 /* us: 805A9B1B 0x04, jp: 805ACD9B 0x04 */] = true;
          				  case 1:
/*<177>*/ 					{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 162, 'param3': 13}
/*<162>*/ 					printf("Ehi, Link.\nSto mantenendo la pace\nsu Oltrenuvola!\n\n\x0E\x01\x09\x04\x0C\x400Voglio che questo sia il posto più\nsicuro al mondo, dove tutti\npossano vivere in armonia!\n\x0E\x01\x09\x04\x01\xC52Uhmm... <pause1E>perché mi guardi così?")
          					goto flw_431
          				}
          			}
          		  case 1:
/*<159>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<175>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1029, 'next': 160, 'param3': 13}
/*<160>*/ 				printf("Link! Un giorno anche tu\ncapirai cosa vuol dire essere\nun cavaliere! Non preoccuparti!")
          				goto flw_431
          			  case 1:
/*<174>*/ 				{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1025, 'next': 42, 'param3': 13}
/*< 42>*/ 				printf("Ehi, Link!\nDi notte qui è pericoloso,\nquindi tieni gli occhi aperti!\n\n\x0E\x01\x09\x04\x0B\x400Questa zona fa parte della\nmia ronda.\n\n\n\x0E\x01\x09\x04\x08\x404Qui di notte brulica di mostri!\n\n\n\nEd è compito di ogni cavaliere\ndifendere la popolazione inerme!\n[1]Grande![2]Lavoro?")
/*<155>*/ 				switch (choice(2)) {
          				  case 0:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x09\xC09Di cosa stai parlando? Questo è\nproprio il tipo di lavoro che spetta a un\ncavaliere che si rispetti!\nMa mi hai visto, giusto?\nCome ricompensa voglio solo il sorriso\ndella gente che proteggo!\n\x0E\x01\x09\x04\x08\x400Questo è il dovere di un cavaliere!\n\n\x0E\x01\x09\x04\x00\x05Proprio così, Link!\nAnche tu un giorno capirai come\nci si sente!")
          					flw_158:
/*<158>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x0C\xC17Link!\nPer quale ragione hai deciso\ndi diventare un cavaliere?\nPer brama di ricchezze?\nTe lo chiedo perché non si\ndovrebbe cadere preda\ndella cupidigia!\n\n\x0E\x01\x09\x04\x08\x405Guarda me! Ambisco alla felicità\ndel popolo, non ai soldi!\nQuesto è il nobile animo\ndi un cavaliere!")
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
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x09Guarda cosa hai fatto!\nHai rotto un pezzo importantissimo!\n\n\nPeggio per te se rompi qualcos'altro!")
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x00\x07Sai, mi piace collezionare pezzi\nd'antiquariato. Tutte le cose che\nvedi qui a casa mia sono di gran\nvalore.\nMi raccomando, non rompere nulla!")
          	}
          }

          void entrypoint_123_04() {
/*<231>*/ 	start()
/*<250>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 31, 'next': 278, 'param3': 32}
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 249, 'param3': 50}
/*<249>*/ 	{'type': 'type3', 'subType': 4, 'param1': 7945, 'param2': 768, 'next': 233, 'param3': 13}
/*<233>*/ 	printf("\x0E\x01\x09\x04\x1F00\nECCO!!!")
/*<241>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 100, 'next': 242, 'param3': 16}
/*<242>*/ 	set_camera(3, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 232, 'param3': 24}
/*<232>*/ 	switch (story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */]) {
          	  case 0:
/*<237>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x1F0A\x300Ancora tu!\nMa ce l'hai con me per caso?!")
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
/*<418>*/ 					printf("... Non hai nemmeno una\nrupia in tasca! Rompere la roba\naltrui e non avere i soldi per\nripagarla è davvero oltraggioso!\nVattene, non farti più vedere!")
          					goto flw_246
          				  case 1:
/*<403>*/ 					printf("Non hai nemmeno una rupia\nin tasca!\n\n\nCioè, secondo te puoi andartene\nin giro a rompere la roba della\ngente senza neanche avere i\nsoldi per ripagarla?\nMa sei matto?! Guarda, non mi\nservono i tuoi soldi! Sparisci!")
/*<404>*/ 					zone_temp_flags[2 /* 0x1 04 */] = true;
          					goto flw_246
          				}
          			}
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x09\x04\x1F09\x300Hai una bella faccia tosta\na venire qui e rompere i miei pezzi\nd'antiquariato!")
          			goto flw_401
          		}
          	  case 1:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x1F09\x300Guarda che cosa hai combinato!\nHai rotto un pezzo di gran valore!\n\n\nOra me lo devi ripagare!\n\n\n\n\x0E\x01\x09\x04\x1F0B\x700Vediamo un po'... era davvero\nun pezzo raro... diciamo che\n<r<20 rupie >>dovrebbero bastare!\n\n\x0E\x01\x09\x04\x1F01\x305Perché quella faccia?!\nVorresti insinuare che la cifra\nè troppo alta?! Come ti permetti?\n\n\x0E\x01\x09\x04\x1F09\x309Che ragazzo insolente!\nConosco benissimo il valore\ndelle mie rarità e ora me lo\nripaghi fino all'ultima rupia!")
/*<419>*/ 		check_item_flag(501, 1)
/*<420>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 186}) {
          		  case 0:
/*<423>*/ 			check_item_flag(501, 18)
/*<424>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 188}) {
          			  case 0:
          				flw_425:
/*<425>*/ 				rupees += -18;
/*<234>*/ 				printf("\x0E\x01\x09\x04\x1F0A\x300Guarda che se lo rifai\ndovrò passare per le vie legali!")
          				flw_235:
/*<235>*/ 				story_flags[378 /* us: 805A9B05 0x01, jp: 805ACD85 0x01 */] = true;
/*<236>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
/*<243>*/ 				zone_temp_flags[1 /* 0x1 02 */] = false;
          				goto flw_248
          			  case 1:
/*<426>*/ 				printf("Non hai nemmeno abbastanza\nsoldi per pagare!\nChe faccia tosta!\n\nGuarda, allora dammi\nqualcos'altro. E la prossima\nvolta presta più attenzione!")
/*<427>*/ 				zone_temp_flags[2 /* 0x1 04 */] = true;
          				goto flw_425
          			}
          		  case 1:
/*<421>*/ 			printf("Non hai nemmeno una rupia\nin tasca!\n\n\nCioè, secondo te puoi andartene\nin giro a rompere la roba della\ngente senza neanche avere i\nsoldi per ripagarla?\nMa sei matto?! Guarda, non mi\nservono i tuoi soldi! Sparisci!")
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

