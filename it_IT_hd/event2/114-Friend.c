          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf("\x0E\x01\x09\x04\x07\x02Link!\nHai trovato qualche indizio su Zelda?\nPensi di trovarla?\nCi conto, eh! Datti da fare!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf("\x0E\x01\x09\x04\x00\x09Link!\nTorna, mi raccomando!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf("\x0E\x01\x09\x04\x07\x811Zelda è caduta dal suo solcanubi...\n\n\n\nEppure era così brava...\n\n\n\n\x0E\x01\x09\x04\x00\xE00A uno scarso come me,\nnon resta che pregare...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x811Che sventura, Link!<pause19>\nSperiamo che lo ritrovi presto\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x708Come sei agitato, Link,\nche ti succede?\n\n\n\x0E\x01\x09\x04\x07\xC00Eh? No, non so niente del tuo\nsolcanubi...<pause19>\nChe cosa?!\n\nNon risponde al richiamo!?\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x01\x09\x04\x01\x800Ah\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í In tal caso...<pause19>\n\x0E\x01\x08\x02\xFFCDQuesto significa...\n\n\n\x0E\x01\x09\x04\x08\x807Eh? <pause19>Cosa...<pause19> no niente, <pause14>niente...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf("\x0E\x01\x09\x04\x00\x09Io resto qui a tenere d'occhio la scuola.\nLink, tu fai del tuo\nmeglio al <r<battesimo del volo>>!\nFaccio il tifo per te!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf("\x0E\x01\x09\x04\x00\x809Io non sono come te,\nLink...\nSono una frana in tutto quello\nche faccio.\nPerciò mi esercito ancora <g<sollevando\n>>con (A) le botti e gli orci...\n\n\n\x0E\x01\x09\x04\x07\xE00E poi mi pagano anche...")
          							  case 1:
/*<  3>*/ 								printf("\x0E\x01\x09\x04\x00\x02Buongiorno, Link!\nOggi è il giorno del <r<battesimo del volo>>,\nvero?\n\n\x0E\x01\x09\x04\x01\x800Avrei voluto partecipare anch'io,\nma\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í sono stato eliminato alle\nselezioni. Oggi resto a custodire\nla scuola.\n\x0E\x01\x09\x04\x07\x800Devo anche portare queste <r<botti\n>>alla mensa...\n\n\n\x0E\x01\x09\x04\x01\x800Avrei tanto voluto vedere la tua\nsagoma librarsi in cielo,\nLink...\n\n\x0E\x01\x09\x04\x07\xA00Pazienza, <pause14>farò il tifo per te da qui!")
/*< 26>*/ 								scene_flags[0 'Skyloft'][39 /* 0x5 80 */] = true;
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_114_20() {
/*< 55>*/ 	start()
/*< 77>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<107>*/ 		switch (scene_flags[31 /* 0x2 80 */]) {
          		  case 0:
          			flw_72:
/*< 72>*/ 			switch (story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */]) {
          			  case 0:
/*<117>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 				switch (temp_flags[6 /* 0x1 40 */]) {
          				  case 0:
/*< 85>*/ 					printf("\x0E\x01\x09\x04\x00\x02Vuoi provare di nuovo\nil Tiro alla zucca? Ti costerà <r<20 rupie>>.\n[1]Sì[2]Le regole?[3-]No, grazie")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x07\xA0ABene, allora cominciamo!\nForza, Link!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x01\x811Ah... forse il problema sono i soldi?\nPovero Link...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ora lancerò delle zucche in aria per\n<r<90 secondi>>! Ogni volta che ne\ncolpirai una otterrai 10 punti.\n\n\x0E\x01\x09\x04\x00\xA00Però, se riesci a colpirle ripetutamente\ne senza fare cilecca otterrai molti più\npunti. Cerca di colpire le zucche più\nvolte in rapida successione!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf("\x0E\x01\x09\x04\x07\x200Ah... dimenticavo. Devo chiederti\n20 rupie per ogni tentativo!\n\n\n\x0E\x01\x09\x04\x08\xA00Se fosse gratis, non ci sarebbe\ndivertimento... allora, vuoi provare\nil Tiro alla zucca? Costa <r<20 rupie>>.\n[1]Certo![2-]No")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf("\x0E\x01\x09\x04\x07\x811Ah...\nHai da fare...?\nGià, hai l'incarico di salvare Zelda, vero?\n<pause0A>Scusa!")
          					}
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x02Ehi! Link!\nTi senti in forma?\n\n\nVuoi provare il Tiro alla zucca per\n<r<20 rupie>>?\n[1]Sì[2]Le regole?[3-]No, grazie")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf("\x0E\x01\x09\x04\x07\x202Ehi, Link! Se faccio\naltre flessioni finisco con la faccia\na terra... non ci sarà un altro\nesercizio più adatto a me?\n\x0E\x01\x09\x04\x00\x207Ehi!<pause1E> Ma tu hai un arco bellissimo!\nScommetto che sei un tiratore\nprovetto, vero, Link?\n[1]Sì[2]Ma va!")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf("\x0E\x01\x09\x04\x07\xAFFSei incredibile, Link!\n\n\n\n\x0E\x01\x09\x04\x01\x200Mi sono allenato e sono riuscito\na fare 3000 flessioni! Ora devo\npensare alle gambe...")
          					flw_59:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x07\xA00Bene! Allora fammi vedere cosa sei\ncapace di fare con l'arco!\n\n\nLancerò delle zucche in aria...\n\n\n\n\x0E\x01\x09\x04\x00\x200Fammi vedere se riesci a colpirle!\n\n\n\n\x0E\x01\x09\x04\x07\xA00Lanciando le zucche alleno comunque\nle braccia... come dire... due\npiccioni con una fava!\n[1]Ci provo[2-]Lascia stare")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf("\x0E\x01\x09\x04\x07\x811Ah...\nHai da fare...?\nGià, hai l'incarico di salvare Zelda, vero?\n<pause0A>Scusa!")
          					}
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x00\xA09Non sentirti in imbarazzo!\nSto solo dicendo la verità!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x501Ehi, Link!\nChe sciagura! È scomparsa\nl'Isola della Dea!\nCosa sarà successo...?\n<pause0A>.<pause0A>.<pause0A>. <pause0A>.<pause0A>.<pause0A>.<pause0A> \x0E\x01\x09\x04\x00\x800Ah, \x0E\x01\x06\x02\xFBCDsì...?!\x0E\x01\x06\x02Í Sai tutto, eh?\n\x0E\x01\x09\x04\x00\x200Certo, era una cosa necessaria\nper cercare Zelda.\n\nHo capito. Non mi sorprenderò\npiù, qualunque cosa accada... ma\nmi raccomando, trova Zelda!")
/*<110>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 83>*/ 		temp_flags[6 /* 0x1 40 */] = true;
/*< 90>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 78, 'param3': 44}
/*< 78>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 28, 'param2': 9472, 'next': 79, 'param3': 13}
/*< 79>*/ 			printf("\x0E\x01\x09\x04\x00\x12Hai totalizzato <numeric arg0> punti...\nLink oggi non sei\nmolto in forma... purtroppo non\nhai diritto ad alcun premio...\n\x0E\x01\x09\x04\x07\x200Il trucco è mirare un po' più avanti\nsulla traiettoria di volo della zucca.\nFacendo così, otterrai facilmente\n<r<150 punti>>...\n\x0E\x01\x09\x04\x01\xA00Oh, scusa... lo so che non hai bisogno\ndi nessun consiglio!")
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Quando vorrai provare\ndi nuovo, torna a trovarmi!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> punti!\nNiente male, Link!\n\n\nNon bene, ma nemmeno male...\nComunque senza troppa fatica\nda parte tua! Ora prova a\nottenere più di <r<400 punti>>!\n\x0E\x01\x09\x04\x07\xA00Bene! Ti do le 50 rupie guadagnate\ncon i lavoretti che ho fatto\nper la nonna.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\x0BUn punteggio totale di <numeric arg0>!\nOttimo, Link!\nProprio come pensavo...\nLink fa le cose fatte bene!\n\x0E\x01\x09\x04\x07\xA00Eccoti il premio!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf("\x0E\x01\x09\x04\x07\xA00Chissà se riesci a ottenere più di\n<r<600 punti>>! Vediamo se ce la fai!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\x0BUn totale di <numeric arg0> punti!!!\nFantastico!\nFantastico, Link!\n\n\x0E\x01\x09\x04\x07\xA00Sei davvero la speranza della scuola\nd'armi, Link!\nTi regalo questo!!!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0B<numeric arg0> punti!!!\nFantastico!\nFantastico, Link!\n\nSei davvero la speranza della scuola\nd'armi, Link!\n\n\n\x0E\x01\x09\x04\x07\xA00Accetta questo in <r<segno della nostra\namicizia>>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x08\x02\x1CDLink!\x0E\x01\x0D\x02\x1906")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf("\x0E\x01\x09\x04\x01\x800\x0E\x01\x08\x02\xFFCDSe...<pause14> senti...\n\n\n\n\x0E\x01\x09\x04\x07\x800No, niente...<pause14> scusa...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x07\xA0BGrazie, Link!\nIl tuo aiuto è stato prezioso!\n\n\n\x0E\x01\x09\x04\x00\x209Per ringraziarti, ti cederò la metà del\nmio compenso. Non è molto, ma...")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x09Io resto qui a tenere d'occhio la scuola.\nLink, tu fai del tuo\nmeglio al <r<battesimo del volo>>!\nFaccio il tifo per te!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ah, Link...\nSei qui per darmi una mano?\n\n\nSei sempre così gentile...\nAccetto il tuo aiuto con molto piacere!\n\n\n\x0E\x01\x09\x04\x07\x203Avrei bisogno che tu portassi una\ndi queste <r<botti >>alla cuoca.\n\n\nAfferra la botte con (A) e <g<posala a terra\n>>premendo di nuovo (A).\n\n\n\x0E\x01\x09\x04\x01\x200Quando sollevi qualcosa, la puoi anche\n<g<lanciare>>. E puoi <g<far rotolare>> oggetti più\npiccoli, come le giare.\n\n\x0E\x01\x09\x04\xC07\x200Ma se rompiamo una di quelle botti,\nfiniremo nei guai, quindi evita di lanciarle\no di farle rotolare, mi raccomando.")
/*<114>*/ 			printf("\x0E\x01\x09\x04\x01\x200Se ti dovessi dimenticare i comandi,\nprova a <g<premere>> <g<\x0E\x02\x04\x02\x13CD>>.\x0E\x01\x11\x02\xBCD\n\n\nTi verranno mostrati tutti i comandi che puoi\nusare in quel momento. È comodissimo!")
          		  case 1:
/*< 33>*/ 			printf("")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf("")
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x00\x03Ah, Link...\nSei qui per darmi una mano?\n\n\nSei sempre così gentile...\nAccetto il tuo aiuto con molto piacere!\n\n\n\x0E\x01\x09\x04\x07\x203Avrei bisogno che tu portassi una\ndi queste <r<botti >>alla cuoca.\n\n\nAfferra la botte con (A) e <g<posala a terra\n>>premendo di nuovo (A).\n\n\n\x0E\x01\x09\x04\x01\x200Quando sollevi qualcosa, la puoi anche\n<g<lanciare>>. E puoi <g<far rotolare>> oggetti più\npiccoli, come le giare.\n\n\x0E\x01\x09\x04\xC07\x200Ma se rompiamo una di quelle botti,\nfiniremo nei guai, quindi evita di lanciarle\no di farle rotolare, mi raccomando.")
/*<113>*/ 				printf("\x0E\x01\x09\x04\x01\x200Se ti dovessi dimenticare i comandi,\nprova a <g<premere>> <g<\x0E\x02\x04\x02\x13CD>>.\x0E\x01\x11\x02\xBCD\n\n\nTi verranno mostrati tutti i comandi che puoi\nusare in quel momento. È comodissimo!")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf("")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("\x0E\x01\x09\x04\x07\x201Link!!!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf("\x0E\x01\x09\x04\x07\x1800Quell'uniforme verde... ti sta benissimo!\nSembri un vero cavaliere!")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf("\x0E\x01\x09\x04\x0B\x200Il direttore mi ha detto che stai per\npartire alla ricerca di Zelda...\n\n\n\x0E\x01\x09\x04\x00\x1700Sei davvero coraggioso...\nIo non ce la farei mai...\n\n\n\x0E\x01\n\x04\x05ÍPerò ti ho fatto questa!\nSe ti piace, te la regalo!")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 50, 'param3': 6}
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf("È la <r<borsa dell'avventuriero >>e può\ncontenere fino a <r<4>> oggetti che ti\npossono tornare utili in viaggio.\n\nAl bazar puoi comprare vari oggetti.\nPerché non ci fai un salto?\n\n\n\x0E\x01\x09\x04\x07\xA09In particolare ti torneranno utili\nle <y<pozioni >>e gli <y<scudi>>!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf("Link!\n\x0E\x01\x09\x04\x01\xC00Sono sicuro che troverai Zelda!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("")
          }

