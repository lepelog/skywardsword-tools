          void entrypoint_114_03() {
          	start()
/*< 48>*/ 	switch (story_flags[202 /* us: 805A9AEF 0x10, jp: 805ACD6F 0x10 */]) {
          	  case 0:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070002><heroname>!\nHai trovato qualche indizio\nsu Zelda? Pensi di trovarla?\nCi conto, eh! Datti da fare!")
          	  case 1:
/*< 12>*/ 		switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          		  case 0:
/*< 13>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000009><heroname>!\nTorna, mi raccomando!")
          		  case 1:
/*< 53>*/ 			switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          			  case 0:
/*< 54>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00070811>Zelda è caduta dal suo solcanubi...\n\n\n\nEppure era così brava...\n\n\n\n<0x10009:0x00000e00>A uno scarso come me,\nnon resta che pregare...")
          			  case 1:
/*<  7>*/ 				switch (scene_flags[40 /* 0x4 01 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000811>Che sventura, <heroname>!<pause 25>\nSperiamo che lo ritrovi presto<0x10006:0xfbcd>...<0x10006:0x00cd>")
          				  case 1:
/*<  4>*/ 					switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          					  case 0:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00010708>Come sei agitato, <heroname>,\nche ti succede?\n\n\n<0x10009:0x00070c00>Eh? No, non so niente del tuo\nsolcanubi...<pause 25>\nChe cosa?!\n\nNon risponde al richiamo!?<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n\n\n<0x10009:0x00010800>Ah<0x10006:0xfbcd>...<0x10006:0x00cd> In tal caso...<pause 25>\n<0x10008:0xffcd>Questo significa...\n\n\n<0x10009:0x00080807>Eh? <pause 25>Cosa...<pause 25> no niente, <pause 20>niente...")
/*< 29>*/ 						scene_flags[0 'Skyloft'][40 /* 0x4 01 */] = true;
          					  case 1:
/*< 10>*/ 						switch (scene_flags[23 /* 0x3 80 */]) {
          						  case 0:
/*< 11>*/ 							printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>Io resto qui a tenere d'occhio la scuola.\n<heroname>, tu fai del tuo\nmeglio al <color red<battesimo del volo>coloroff>!\nFaccio il tifo per te!")
          						  case 1:
/*<  1>*/ 							switch (scene_flags[39 /* 0x5 80 */]) {
          							  case 0:
/*<  2>*/ 								printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000809>Io non sono come te,\n<heroname>...\nSono una frana in tutto quello\nche faccio.\nPerciò mi esercito ancora <color green<sollevando\n>coloroff>con (A) le botti e gli orci...\n\n\n<0x10009:0x00070e00>E poi mi pagano anche...")
          							  case 1:
/*<  3>*/ 								printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000002>Buongiorno, <heroname>!\nOggi è il giorno del <color red<battesimo del volo>coloroff>,\nvero?\n\n<0x10009:0x00010800>Avrei voluto partecipare anch'io,\nma<0x10006:0xfbcd>...<0x10006:0x00cd> sono stato eliminato alle\nselezioni. Oggi resto a custodire\nla scuola.\n<0x10009:0x00070800>Devo anche portare queste <color red<botti\n>coloroff>alla mensa...\n\n\n<0x10009:0x00010800>Avrei tanto voluto vedere la tua\nsagoma librarsi in cielo,\n<heroname>...\n\n<0x10009:0x00070a00>Pazienza, <pause 20>farò il tifo per te da qui!")
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
/*< 85>*/ 					printf(/* textboxtype: 1, unk: 1, line: 34 */ "<0x10009:0x00000002>Vuoi provare di nuovo\nil Tiro alla zucca? Ti costerà <color red<20 rupie>coloroff>.\n[1-]Sì[2-]Le regole?[3]No, grazie")
          					flw_74:
/*< 74>*/ 					switch (choice(3)) {
          					  case 0:
          						flw_67:
/*< 67>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*< 68>*/ 							rupees += -20;
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00070a0a>Bene, allora cominciamo!\nForza, <heroname>!")
/*< 71>*/ 							make_actor_do_something(0, 0)
          						  case 1:
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010811>Ah... forse il problema sono i soldi?\nPovero <heroname>...")
          						}
          					  case 1:
          						flw_63:
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00070200>Ora lancerò delle zucche in aria per\n<color red<90 secondi>coloroff>! Ogni volta che ne\ncolpirai una otterrai 10 punti.\n\n<0x10009:0x00000a00>Però, se riesci a colpirle ripetutamente\ne senza fare cilecca otterrai molti più\npunti. Cerca di colpire le zucche più\nvolte in rapida successione!")
/*< 69>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 64, 'param3': 12}
/*< 64>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070200>Ah... dimenticavo. Devo chiederti\n20 rupie per ogni tentativo!\n\n\n<0x10009:0x00080a00>Se fosse gratis, non ci sarebbe\ndivertimento... allora, vuoi provare\nil Tiro alla zucca? Costa <color red<20 rupie>coloroff>.\n[1-]Certo![2]No")
/*< 65>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_67
          						  case 1:
          							goto flw_66
          						}
          					  case 2:
/*< 75>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00070811>Ah...\nHai da fare...?\nGià, hai l'incarico di salvare\nZelda, vero?<pause 10> Scusa!")
          					}
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 1, line: 33 */ "<0x10009:0x00000002>Ehi! <heroname>!\nTi senti in forma?\n\n\nVuoi provare il Tiro alla zucca per\n<color red<20 rupie>coloroff>?\n[1-]Sì[2-]Le regole?[3]No, grazie")
          					goto flw_74
          				}
          			  case 1:
/*<102>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 				story_flags[400 /* us: 805A9B10 0x01, jp: 805ACD90 0x01 */] = true;
/*< 56>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070202>Ehi, <heroname>! Se faccio\naltre flessioni finisco con la faccia\na terra... non ci sarà un altro\nesercizio più adatto a me?\n<0x10009:0x00000207>Ehi!<pause 30> Ma tu hai un arco bellissimo!\nScommetto che sei un tiratore\nprovetto, vero, <heroname>?\n[1-]Sì[2-]Ma va!")
/*< 58>*/ 				switch (choice(2)) {
          				  case 0:
/*< 57>*/ 					printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00070aff>Sei incredibile, <heroname>!\n\n\n\n<0x10009:0x00010200>Mi sono allenato e sono riuscito\na fare 3000 flessioni! Ora devo\npensare alle gambe...")
          					flw_59:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00070a00>Bene! Allora fammi vedere cosa sei\ncapace di fare con l'arco!\n\n\nLancerò delle zucche in aria...\n\n\n\n<0x10009:0x00000200>Fammi vedere se riesci a colpirle!\n\n\n\n<0x10009:0x00070a00>Lanciando le zucche alleno comunque\nle braccia... come dire... due\npiccioni con una fava!\n[1-]Ci provo[2]Lascia stare")
/*< 61>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_63
          					  case 1:
/*< 62>*/ 						printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00070811>Ah...\nHai da fare...?\nGià, hai l'incarico di salvare\nZelda, vero?<pause 10> Scusa!")
          					}
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000a09>Non sentirti in imbarazzo!\nSto solo dicendo la verità!")
          					goto flw_59
          				}
          			}
          		  case 1:
/*<108>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<109>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000501>Ehi, <heroname>!\nChe sciagura! È scomparsa\nl'Isola della Dea!\nCosa sarà successo...?\n<pause 10>.<pause 10>.<pause 10>. <pause 10>.<pause 10>.<pause 10>.<pause 10> <0x10009:0x00000800>Ah, <0x10006:0xfbcd>sì...?!<0x10006:0x00cd> Sai tutto, eh?\n<0x10009:0x00000200>Certo, era una cosa necessaria\nper cercare Zelda.\n\nHo capito. Non mi sorprenderò\npiù, qualunque cosa accada... ma\nmi raccomando, trova Zelda!")
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
/*< 79>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000012>Hai totalizzato <numeric arg0 0> punti...\n<heroname> oggi non sei\nmolto in forma... purtroppo non\nhai diritto ad alcun premio...\n<0x10009:0x00070200>Il trucco è mirare un po' più avanti\nsulla traiettoria di volo della zucca.\nFacendo così, otterrai facilmente\n<color red<150 punti>coloroff>...\n<0x10009:0x00010a00>Oh, scusa... vedo che lo stai già\nfacendo da solo!!!")
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070a00>Quando vorrai provare\ndi nuovo, torna a trovarmi!")
          			flw_91:
/*< 91>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 103, 'param3': 45}
/*<103>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 93>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 80, 'param3': 13}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x0000000b><numeric arg0 0> punti!\nNiente male, <heroname>!\n\n\nNon bene, ma nemmeno male...\nComunque senza troppa fatica\nda parte tua! Ora prova a\nottenere più di <color red<400 punti>coloroff>!\n<0x10009:0x00070a00>Bene! Ti do le 50 rupie guadagnate\ncon i lavoretti che ho fatto\nper la nonna.")
/*< 87>*/ 			rupees += 50;
          			goto flw_86
          		  case 2:
/*< 94>*/ 			{'type': 'type3', 'subType': 4, 'param1': 29, 'param2': 9728, 'next': 81, 'param3': 13}
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0000000b>Un punteggio totale di <numeric arg0 0>!\nOttimo, <heroname>!\nProprio come pensavo...\n<heroname> fa le cose fatte bene!\n<0x10009:0x00070a00>Eccoti il premio!")
/*<106>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 88, 'param3': 42}
/*< 88>*/ 			give_item(62 0x3E);
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00070a00>Chissà se riesci a ottenere\npiù di <color red<600 punti>coloroff>! Vediamo\nse ce la fai!")
          			goto flw_91
          		  case 3:
/*< 95>*/ 			{'type': 'type3', 'subType': 4, 'param1': 30, 'param2': 9984, 'next': 97, 'param3': 13}
/*< 97>*/ 			switch (story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */]) {
          			  case 0:
/*< 82>*/ 				printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0000000b>Un totale di <numeric arg0 0> punti!!!\nFantastico!\nFantastico, <heroname>!\n\n<0x10009:0x00070a00>Sei davvero la speranza della scuola\nd'armi, <heroname>!\nTi regalo questo!!!")
/*<105>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 89, 'param3': 42}
/*< 89>*/ 				give_item(64 0x40);
          				goto flw_91
          			  case 1:
/*< 96>*/ 				story_flags[359 /* us: 805A9B00 0x20, jp: 805ACD80 0x20 */] = true;
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000b><numeric arg0 0> punti!!!\nFantastico!\nFantastico, <heroname>!\n\nSei davvero la speranza della scuola\nd'armi, <heroname>!\n\n\n<0x10009:0x00070a00>Accetta questo in <color red<segno della nostra\namicizia>coloroff>!")
/*<104>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 99, 'param3': 42}
/*< 99>*/ 				give_item(94 0x5E);
          				goto flw_86
          			}
          		}
          	}
          }

          void entrypoint_114_04() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000001><0x10008:0x01cd><heroname>!<0x1000D:0x1906>")
/*< 39>*/ 	set_camera(4, 0)
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010800><0x10008:0xffcd>Se...<pause 20> senti...\n\n\n\n<0x10009:0x00070800>No, niente...<pause 20> scusa...")
          }

          void entrypoint_114_05() {
/*< 32>*/ 	start()
/*< 41>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00070a0b>Grazie, <heroname>!\nIl tuo aiuto è stato prezioso!\n\n\n<0x10009:0x00000209>Per ringraziarti, ti cederò la metà del\nmio compenso. Non è molto, ma...")
/*< 43>*/ 		give_item(4 0x04);
/*<116>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000009>Io resto qui a tenere d'occhio la scuola.\n<heroname>, tu fai del tuo\nmeglio al <color red<battesimo del volo>coloroff>!\nFaccio il tifo per te!")
/*< 45>*/ 		scene_flags[0 'Skyloft'][23 /* 0x3 80 */] = true;
          	  case 1:
/*< 40>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070203>Puoi portare una <color red<botte >coloroff>alla cuoca?\nAfferra la botte con (A) e <color green<posala a\nterra>coloroff> premendo di nuovo (A).\n\n<0x10009:0x00010200>Quando la botte è sollevata, se <color green<punti\nil telecomando verso l'alto e lo scuoti>coloroff>,\nla puoi <color green<lanciare>coloroff>.\n\nPuoi <color green<far rotolare >coloroff>oggetti piccoli come\nle giare, <color green<puntando il telecomando\nverso il basso e scuotendolo>coloroff>.\n\n<0x10009:0x0c070200>Ma se si rompono è un guaio, quindi fai\nattenzione!")
/*<114>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Se ti dovessi dimenticare i comandi,\nprova a <color green<premere>coloroff> <color green<(2)>coloroff>.<0x10011:0x05cd>\n\n\nTi verranno mostrati tutti i comandi\nche puoi usare in quel momento.\nÈ comodissimo!")
          		  case 1:
/*< 33>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Ehi, <heroname>!\nMi puoi dare una mano?\n[1-]Sì[2]Ho da fare!")
/*< 34>*/ 			switch (choice(2)) {
          			  case 0:
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000a0b>Grazie!\nAllora...")
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070203>Puoi portare una <color red<botte >coloroff>alla cuoca?\nAfferra la botte con (A) e <color green<posala a\nterra>coloroff> premendo di nuovo (A).\n\n<0x10009:0x00010200>Quando la botte è sollevata, se <color green<punti\nil telecomando verso l'alto e lo scuoti>coloroff>,\nla puoi <color green<lanciare>coloroff>.\n\nPuoi <color green<far rotolare >coloroff>oggetti piccoli come\nle giare, <color green<puntando il telecomando\nverso il basso e scuotendolo>coloroff>.\n\n<0x10009:0x0c070200>Ma se si rompono è un guaio, quindi fai\nattenzione!")
/*<113>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00010200>Se ti dovessi dimenticare i comandi,\nprova a <color green<premere>coloroff> <color green<(2)>coloroff>.<0x10011:0x05cd>\n\n\nTi verranno mostrati tutti i comandi\nche puoi usare in quel momento.\nÈ comodissimo!")
/*<  8>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 36>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000019>Ah<0x10006:0xfbcd>... <0x10006:0x00cd>dimenticavo... oggi è il\ngiorno del tuo battesimo del \nvolo, vero?\n\nAllora lascia perdere.")
          			}
          		}
          	}
          }

          void entrypoint_114_01() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00070201><heroname>!!!")
/*< 23>*/ 	set_camera(1, 0)
/*< 18>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 100, 'next': 25, 'param3': 15}
/*< 25>*/ 	set_camera(3, 0)
/*< 17>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 0, 'next': 22, 'param3': 14}
/*< 22>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 20, 'param3': 16}
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00071800>Quell'uniforme verde... ti sta\nbenissimo! Sembri un vero\ncavaliere!")
/*<111>*/ 	set_camera(2, 0)
/*<112>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000b0200>Il direttore mi ha detto che stai per\npartire alla ricerca di Zelda...\n\n\n<0x10009:0x00001700>Sei davvero coraggioso...\nIo non ce la farei mai...\n\n\n<0x1000A:0x000500cd>Però ti ho fatto questa!\nSe ti piace, te la regalo!")
/*< 51>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4096, 'next': 52, 'param3': 13}
/*< 52>*/ 	wait_frames(20)
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 16, 'param3': 42}
/*< 16>*/ 	give_item(112 0x70);
/*< 19>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "È la <color red<borsa dell'avventuriero >coloroff>e può\ncontenere fino a <color red<4>coloroff> oggetti che ti\npossono tornare utili in viaggio.\n\nAl bazar puoi comprare\nvari oggetti. Perché\nnon ci fai un salto?\n\n<0x10009:0x00070a09>In particolare ti torneranno\nutili le <color yellow<pozioni >coloroff>e gli <color yellow<scudi>coloroff>!")
/*< 24>*/ 	set_camera(2, 0)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<heroname>! \n<0x10009:0x00010c00>Sono sicuro che\ntroverai Zelda!")
/*<100>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = true;
/*<101>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = true;
/*< 47>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_114_02() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "")
          }

