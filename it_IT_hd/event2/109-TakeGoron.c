          void entrypoint_109_02() {
/*< 80>*/ 	start()
/*< 81>*/ 	switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
          	  case 0:
/*< 54>*/ 		switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          		  case 0:
/*<106>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<128>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_134:
/*<134>*/ 					{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 55, 'param3': 13}
/*< 55>*/ 					printf("\x0E\x01\x09\x04\x00\x01Senti, non avvicinarti a mia figlia!\nNon la guardare nemmeno!")
          				  case 1:
/*< 53>*/ 					switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          					  case 0:
/*< 63>*/ 						switch (story_flags[634 /* us: 805A9B1A 0x10, jp: 805ACD9A 0x10 */]) {
          						  case 0:
/*< 65>*/ 							switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          							  case 0:
/*< 67>*/ 								switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
          								  case 0:
/*< 68>*/ 									switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          									  case 0:
/*< 70>*/ 										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          										  case 0:
/*<141>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3584, 'next': 71, 'param3': 13}
/*< 71>*/ 											printf("\x0E\x01\x09\x04\x00\x16Non posso crederci! Aspetta solo\nche metta le mani sul tipo che ha\nsedotto mia figlia!\n\n\x0E\x01\x09\x04\x0E\xE13Beh, ecco... devo ammetterlo...\nimmaginavo che questo giorno\nsarebbe arrivato...")
          										  case 1:
/*<140>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 4608, 'next': 69, 'param3': 13}
/*< 69>*/ 											printf("\x0E\x01\x09\x04\x00\x13Brutte notizie, Link!\nMia figlia s'è trovata un ragazzo!\n\n\n\x0E\x01\x09\x04\x0E\x1200Aaargh! Se solo potessi mettergli\nle mani addosso!\n\n\n\x0E\x01\x09\x04\x00\x1215E in quanto a te, Link,\nnon avrei mai dovuto chiederti\ndi aiutarmi! Aaah... cosa devo\nfare adesso?")
/*< 76>*/ 											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
          										}
          									  case 1:
/*< 72>*/ 										switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          										  case 0:
/*<139>*/ 											{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 77, 'param3': 13}
/*< 77>*/ 											printf("\x0E\x01\x09\x04\x00\x01Senti un po', Link!\nNon ti sarai mica innamorato di\nmia figlia?!\n\nSo che nessuno può resistere alla\nsua bellezza, ma dovrai fare i conti\ncon me!\nChiaro?")
          										  case 1:
/*< 73>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 138, 'param3': 31}
/*<138>*/ 											{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 74, 'param3': 13}
/*< 74>*/ 											printf("\x0E\x01\x09\x04\x00\x0CLink! Senti qua!\nSembra che mia figlia abbia\nrotto col suo ragazzo!\n\n\x0E\x01\x09\x04\x0E\x1200Certo, sono mortificato per lei.\nTu mi credi, vero? VERO?\n\n\n\x0E\x01\x09\x04\x0F\x1809Aah, sono al settimo cielo perché\nil tipo non è più tra i piedi!\n\n\nDimmi, Link. Devo\nringraziare te per questo?\nAh! Ma che importa!\n\n\x0E\x01\x09\x04\x0E\x180ABisogna festeggiare!\nSono troppo felice!\nAh ah ah!")
/*< 79>*/ 											give_gratitude_crystals();
/*< 75>*/ 											story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<142>*/ 											{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          										}
          									}
          								  case 1:
          									flw_137:
/*<137>*/ 									{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 5120, 'next': 66, 'param3': 13}
/*< 66>*/ 									printf("\x0E\x01\x09\x04\x00\x06Salve, Link.\nChe posso fare per te?\n\n\nMia figlia non è più la stessa.\nSarà qualcosa di importante?")
          								}
          							  case 1:
          								goto flw_137
          							}
          						  case 1:
/*<136>*/ 							{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 64, 'param3': 13}
/*< 64>*/ 							printf("\x0E\x01\x09\x04\x00\x15Conto su di te, Link!\nLiberati del tipo che corteggia mia\nfiglia e saremo tutti più tranquilli!")
          						}
          					  case 1:
/*< 56>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 						{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 4608, 'next': 57, 'param3': 13}
/*< 57>*/ 						printf("\x0E\x01\x09\x04\x00\xE14Link! Che tempismo!\n[1]Che c'è?[2]Si tratta\ndi tua figlia?")
/*< 58>*/ 						switch (choice(2)) {
          						  case 0:
/*< 59>*/ 							printf("\x0E\x01\x09\x04\x0F\x1215Sai, ho un gran problema!\nMia figlia.")
          							flw_61:
/*< 61>*/ 							printf("\x0E\x01\x09\x04\x0E\x1200Esatto! Il problema è proprio la mia\nadorata figlia, responsabile del\ndeposito! È molto strana negli\nultimi tempi.\nSogna a occhi aperti e poi arrossisce\nsenza nessuna ragione apparente.\n\n\n\x0E\x01\x09\x04\x0F\x1200Aspetta un po'... Forse...\nHo capito finalmente!\n\n\n\x0E\x01\x09\x04\x00\x1400<r<Ha un corteggiatore indesiderato!>>\nMa è naturale! Con quel suo bel\ncarattere e... e...\n\n... \x0E\x01\x09\x04\x0E\x1400La sua impareggiabile bellezza!\nForse è inevitabile che qualcuno\nle si avvicini.")
/*< 78>*/ 							printf("\x0E\x01\x09\x04\x0F\x1216E invece no... un padre non può\npermetterlo! Gente così merita\nuna bella affettata!\n\n\x0E\x01\x09\x04\x0E\x1200E qui entri in gioco tu. Devi dire a\nquel tipo di lasciare in pace\nmia figlia!\n\n\x0E\x01\x09\x04\x0F\x1200La terrò d'occhio, ma non posso\nsorvegliarla tutto il tempo.\n\n\nTi pagherò volentieri e se riesci\na liberarti di quel tizio potresti\nanche parlare con mia figlia.")
/*<122>*/ 							printf("\x0E\x01\x09\x04\x0E\x1400Oh, non c'è nemmeno bisogno\ndi rispondere.\n\n\n\x0E\x01\x09\x04\x0F\x1809Chi mai rifiuterebbe un'offerta\ncosì straordinaria?\n\n\n\x0E\x01\x09\x04\x00\x1200Toglile quel tipo di torno e io potrò\nstare tranquillo! Tu sei la persona\nadatta, Link!")
/*< 62>*/ 							story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
          						  case 1:
/*< 60>*/ 							printf("\x0E\x01\x09\x04\x00\x0BÈ così. Mi hai letto nel pensiero.")
          							goto flw_61
          						}
          					}
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
          			goto flw_134
          		}
          	  case 1:
/*<133>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 84, 'param3': 13}
/*< 84>*/ 		printf("\x0E\x01\x09\x04\x00\x09Salve! Benvenuto nella casa del\nmodello di Oltrenuvola! Ex e in carica.")
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x0E\xE00Che? Mai sentito parlare di me?\nMi chiamavano <b<il modello di\nOltrenuvola>> sai?\n\n\x0E\x01\x09\x04\x00\x700O\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Íforse questo ti dice qualcosa.\nSono il <b<padre di >><b<Vania del deposito>>,\nattuale modella di Oltrenuvola.\n\n\x0E\x01\x09\x04\x0F\x180AAncora tabula rasa?\nEh eh eh!")
/*< 86>*/ 		story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*<127>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_109_03() {
/*<107>*/ 	start()
/*< 31>*/ 	story_flags[216 /* us: 805A9AF3 0x08, jp: 805ACD73 0x08 */] = true;
/*<151>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 48>*/ 		printf("\x0E\x01\x09\x04\x00\x0BChe ne dici di affettare un po' di\nbambù? Sono <r<10 rupie>> per tentativo!\n[1]Accetto[2]Le regole?[3-]Rifiuto")
          		flw_3:
/*<  3>*/ 		switch (choice(3)) {
          		  case 0:
          			flw_16:
/*< 16>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 19>*/ 				rupees += -10;
/*< 28>*/ 				switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
          				  case 0:
/*< 26>*/ 					printf("Il punteggio più alto è <numeric arg1>!!!\nVediamo se riesci a batterlo!")
          					flw_6:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xFF09Bene allora! Voglio vedere dei colpi\nfulminei!")
/*<  4>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					goto flw_6
          				}
          			  case 1:
/*< 17>*/ 				printf("\x0E\x01\x09\x04\x07\xFF06Ah, non te lo puoi permettere... beh,\nin questo caso... mi sa che devo farti\nprovare gratis...\n\n\x0E\x01\x09\x04\x0C\xE12Non dirmi che ci hai creduto davvero!\nAh ah! I giovani d'oggi!\n\n\n\x0E\x01\x09\x04\x00\xE00Credo proprio che tu abbia parecchio\nda imparare, persino mia figlia è meno\ningenua di te!")
          			}
          		  case 1:
/*< 29>*/ 			printf("\x0E\x01\x09\x04\x0B\xFF09Devi tagliare il bambù che si trova\nqui in mezzo.\nE cercare di tagliare più pezzi possibili\nprima che cada a terra!\nIn base al numero di fette che riesci a\ntotalizzare ti darò un premio.")
/*<154>*/ 			printf("\x0E\x01\x09\x04\x07\x0BChe ne dici di affettare un po' di\nbambù? Sono <r<10 rupie>> per tentativo!\n[1]Accetto[2]Le regole?[3-]Rifiuto")
          			goto flw_3
          		  case 2:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x03Capito. Alla prossima!")
          		}
          	  case 1:
/*<112>*/ 		switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          		  case 0:
/*<113>*/ 			switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          			  case 0:
/*<114>*/ 				switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          				  case 0:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x0C\xE13Ah...! Aspetta che metta le mani su\nquello che ha sedotto mia figlia!\n\n\n\x0E\x01\x09\x04\x10\xFF00È in momenti come questi che a un\nuomo serve un bambù da affettare!\nChe ne dici? Solo <r<10 rupie >>a turno.\n[1]Accetto[2]Le regole?[3-]Rifiuto")
          					goto flw_3
          				  case 1:
/*<117>*/ 					printf("\x0E\x01\x09\x04\x00\x0BÈ bello rivederti, Link!\nSembra che quel ragazzo abbia\nsmesso d'importunare mia figlia.\n\nChe ne dici di una bella affettata?\nSono <r<10 rupie>> per ogni turno.\n[1]Accetto[2]Le regole?[3-]Rifiuto")
          					goto flw_3
          				}
          			  case 1:
/*<115>*/ 				printf("\x0E\x01\x09\x04\x00\x15Link!\nHai trovato quello che dava\nnoie a mia figlia?\n\nChe ne dici di affettare del bambù?\nCosta solo <r<10 rupie>>!\n[1]Accetto[2]Le regole?[3-]Rifiuto")
          				goto flw_3
          			}
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salve, Link!\nPiacere di rivederti!\n\n\nAllora? Siamo pronti per affettare del\nbambù? Ogni turno ti costerà <r<10 rupie>>.\n[1]Accetto[2]Le regole?[3-]Rifiuto")
          			goto flw_3
          		}
          	}
          }

          void entrypoint_109_04() {
/*<108>*/ 	start()
          	goto flw_3
          }

          void entrypoint_109_01() {
          	start()
/*< 25>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 20>*/ 		switch (story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */]) {
          		  case 0:
/*<126>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
          				flw_109:
/*<109>*/ 				entrypoint_109_03();
          			  case 1:
/*< 50>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*<104>*/ 					switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          					  case 0:
/*< 51>*/ 						switch (story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */]) {
          						  case 0:
/*< 52>*/ 							switch (story_flags[638 /* us: 805A9B1D 0x01, jp: 805ACD9D 0x01 */]) {
          							  case 0:
/*< 87>*/ 								switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          								  case 0:
/*< 89>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<119>*/ 										entrypoint_109_03();
          									  case 1:
/*<148>*/ 										{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 3584, 'next': 88, 'param3': 13}
/*< 88>*/ 										printf("\x0E\x01\x09\x04\x00\x13Brutte notizie, Link!\nMia figlia s'è trovata un ragazzo!\n\n\n\x0E\x01\x09\x04\x10\xFF15Aaargh! Se solo potessi mettergli\nle mani addosso!\n\n\n\x0E\x01\x09\x04\x0C\xE13E in quanto a te, Link,\nnon avrei mai dovuto chiederti\ndi aiutarmi! Aaah... cosa devo\nfare adesso?")
/*< 94>*/ 										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<120>*/ 										printf("\x0E\x01\x09\x04\x10\xFF00In momenti come questi, la cosa\nmigliore da fare è affettare del\nbambù! Che ne dici? <r<10 rupie>>!\n[1]Accetto[2]Le regole?[3-]Rifiuto")
/*<121>*/ 										entrypoint_109_04();
          									}
          								  case 1:
/*< 90>*/ 									switch (story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */]) {
          									  case 0:
/*<118>*/ 										entrypoint_109_03();
          									  case 1:
/*< 91>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 147, 'param3': 31}
/*<147>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': -256, 'next': 92, 'param3': 13}
/*< 92>*/ 										printf("\x0E\x01\x09\x04\x00\x0CLink! Senti qua!\nSembra che mia figlia abbia rotto col\nsuo ragazzo!\n\n\x0E\x01\x09\x04\x07\xFF00Certo, sono mortificato per lei.\nTu mi credi, vero? VERO?\n\n\n\x0E\x01\x09\x04\x0B\x1809Aah, sono al settimo cielo perché\nil tipo non è più tra i piedi!\n\n\nDimmi, Link, devo\nringraziare te per questo?\nAh! Ma che importa!\n\n\x0E\x01\x09\x04\x07\x180ABisogna festeggiare!\nSono troppo felice!\nAh ah ah!")
/*< 95>*/ 										give_gratitude_crystals();
/*< 93>*/ 										story_flags[639 /* us: 805A9B1D 0x02, jp: 805ACD9D 0x02 */] = true;
/*<149>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          									}
          								}
          							  case 1:
/*<110>*/ 								entrypoint_109_03();
          							}
          						  case 1:
/*< 96>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 146, 'param3': 31}
/*<146>*/ 							{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': -256, 'next': 97, 'param3': 13}
/*< 97>*/ 							printf("\x0E\x01\x09\x04\x00\x08Link! Che tempismo!\n[1]Che c'è?[2]Si tratta\ndi tua figlia?")
/*< 98>*/ 							switch (choice(2)) {
          							  case 0:
/*< 99>*/ 								printf("\x0E\x01\x09\x04\x00\xE15Sai, ho un gran problema!\nMia figlia.")
          								flw_101:
/*<101>*/ 								printf("\x0E\x01\x09\x04\x10\xE00Esatto! Il problema è proprio la mia\nadorata figlia, responsabile del\ndeposito!\n\n\x0E\x01\x09\x04\x00\xE00È molto strana negli ultimi tempi.\nSogna a occhi aperti e poi arrossisce\nsenza nessuna ragione apparente.\n\n\x0E\x01\x09\x04\x0C\xE13Aspetta un po'... forse... ho capito\nfinalmente! <r<Ha un corteggiatore\nindesiderato!\n\n>>Ma è naturale! Con quel suo bel\ncarattere e la sua impareggiabile\nbellezza!\n\n\x0E\x01\x09\x04\x00\x700Forse è inevitabile che qualcuno\nle si avvicini.")
/*<103>*/ 								printf("\x0E\x01\x09\x04\x10\xFF16E invece no... Un padre non può\npermetterlo! Gente così merita\nuna bella affettata!\n\n\x0E\x01\x09\x04\x01\xFF00E qui entri in gioco tu. Devi dire\na quel tipo di lasciare in pace\nmia figlia!\n\n\x0E\x01\x09\x04\x07\xFF00La terrò d'occhio, ma non posso\nsorvegliarla tutto il tempo.\n\n\nTi pagherò volentieri e se riesci a\nliberarti di quel tizio potresti anche\nparlare con mia figlia.")
/*<123>*/ 								printf("\x0E\x01\x09\x04\x0B\xFF0BOh, non c'è nemmeno bisogno di\nrispondere.\n\n\n\x0E\x01\x09\x04\x00\x1800Chi mai rifiuterebbe un'offerta\ncosì straordinaria?\n\n\n\x0E\x01\x09\x04\x01\xFF00Toglile quel tipo di torno e io potrò\nstare tranquillo! Tu sei la persona\nadatta, Link!")
/*<102>*/ 								story_flags[633 /* us: 805A9B1A 0x08, jp: 805ACD9A 0x08 */] = true;
/*<105>*/ 								printf("\x0E\x01\x09\x04\x07\xFF00Che ne dici di affettare un po' di\nbambù? Sono <r<10 rupie>> per tentativo!\n[1]Accetto[2]Le regole?[3-]Rifiuto")
/*<111>*/ 								entrypoint_109_04();
          							  case 1:
/*<100>*/ 								printf("\x0E\x01\x09\x04\x07\x70BÈ così. Mi hai letto nel pensiero.")
          								goto flw_101
          							}
          						}
          					  case 1:
          						goto flw_109
          					}
          				  case 1:
          					goto flw_109
          				}
          			}
          		  case 1:
/*<125>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
/*< 41>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x00\x06Allora, pronti alla sfida?\n[1]Sì[2-]No")
          				flw_35:
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf("\x0E\x01\x09\x04\x0B\x60COttima risposta! Allora diamoci sotto\ne affettiamo questo bambù!\n\n\nEhi, aspetta un attimo... vediamo di\nrendere la cosa più interessante.\n\x0E\x01\x09\x04\x01\x600Mmh<pause05>.<pause05>.<pause05>.\n\n\x0E\x01\x09\x04\x0B\x60BAh ecco! Ho trovato!")
/*< 22>*/ 					story_flags[150 /* us: 805A9AE1 0x10, jp: 805ACD61 0x10 */] = true;
/*<144>*/ 					set_camera(1, 0)
/*< 18>*/ 					printf("Vedi questo bambù qua in mezzo?\nTaglialo in tanti pezzi.\n\n\nFacile dici? Forse, ma quante volte\nriesci a tagliarlo prima che cada?\nC'è un premio in palio!")
/*<145>*/ 					set_camera(-1, 0)
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 44, 'param3': 12}
/*< 44>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF09E quindi? Solo <r<10 rupie>> per turno.\n[1]Accetto[2-]Si paga?")
/*< 42>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_16
          					  case 1:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x0C\xE07Ma ci sei o ci fai? Ho detto che c'è\nun premio in palio! Sai, ho messo su\nun bel gruzzolo come modello, ma\nnon posso certo farti giocare gratis!\n\x0E\x01\x09\x04ÿ\xFF06Allora? Ti costerà <r<10 rupie>>.\n[1]Ci sto![2-]Non ora")
/*< 43>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_16
          						  case 1:
/*< 45>*/ 							printf("\x0E\x01\x09\x04\x00\x03Capito. Alla prossima!")
          						}
          					}
          				  case 1:
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x0C\xE05Non sei divertente! Non piacerai mai\na nessuna ragazza di questo passo.\n\n\n\x0E\x01\x09\x04\x10\xFF00E scordati di mia figlia! Non voglio\nnemmeno che un ragazzo le tenga\nla mano!")
/*< 40>*/ 					zone_temp_flags[0 /* 0x1 01 */] = true;
          				}
          			  case 1:
/*<143>*/ 				{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': -256, 'next': 82, 'param3': 13}
/*< 82>*/ 				switch (story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */]) {
          				  case 0:
/*< 83>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh! Sei tu Link!\nÈ bello vedere qualcuno di tanto in tanto.")
          					flw_33:
/*< 33>*/ 					printf("\x0E\x01\x09\x04\x07\xFF00Questo è il mio piccolo rifugio dove mi\nalleno in segreto con la spada.\nUna volta tutti mi chiamavano\nil <b<modello di Oltrenuvola>>. <b<\n>>\x0E\x01\x09\x04\x10\xFF00Poi però, con lo stress di ogni giorno e\nmia figlia... ho messo su qualche chilo.\nE ora eccomi qui ad affettare bambù.\nNon c'è esercizio migliore, sai?\n\x0E\x01\x09\x04\x00\x700M'è venuta un'idea, Link!\nPerché non provi?\n[1]Sì![2-]No")
          					goto flw_35
          				  case 1:
/*< 21>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh! Eccoti qui, Link!\nSai, non vedo spesso della gente da\nqueste parti.\n[1]Che fai?[2]Chi sei?")
/*<124>*/ 					story_flags[644 /* us: 805A9B1D 0x20, jp: 805ACD9D 0x20 */] = true;
/*< 32>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_33
          					  case 1:
/*< 34>*/ 						printf("\x0E\x01\x09\x04\x0B\xE06Che? Mai sentito parlare di me?\nMi chiamavano <b<il modello di\nOltrenuvola>> sai?\n\n\x0E\x01\x09\x04\x01\xFF00O\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Íforse questo ti dice qualcosa.\nSono il padre di <b<Vania del deposito>>,\nattuale modella di Oltrenuvola.\n\n\x0E\x01\x09\x04\x07\x180AAncora tabula rasa?\nEh eh eh!")
          						goto flw_33
          					}
          				}
          			}
          		}
          	  case 1:
/*<129>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 38, 'param3': 44}
/*< 38>*/ 		printf("Vediamo quante volte hai tagliato\nil bambù...\n\n\nDunque... <numeric arg0>!\nBene! Ora riposati, ragazzo!")
/*< 30>*/ 		switch (story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */]) {
          		  case 0:
/*< 23>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x0B\xFF0CCosì si fa! Hai battuto il tuo precedente\nrecord! Ottimo lavoro!")
          				flw_7:
/*<  7>*/ 				switch (context_related4(0)) {
          				  case 0:
/*< 11>*/ 					printf("\x0E\x01\x09\x04\x0C\xE12Con risultati del genere non vincerai\nalcun premio! Devi affettarlo almeno\n<r<15 >>volte!\n\n\x0E\x01\x09\x04\x00\xE00Forza, concentrati o te ne tornerai\na casa a mani vuote!")
          					flw_152:
/*<152>*/ 					switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          					  case 0:
          						flw_27:
/*< 27>*/ 						story_flags[153 /* us: 805A9AE1 0x20, jp: 805ACD61 0x20 */] = true;
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x10\x700Bene allora. Torna pure se ti va\ndi affettare del bambù!")
/*<130>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 49, 'param3': 45}
/*< 49>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*<153>*/ 						printf("\x0E\x01\x09\x04\x07\xFF06Uhm! <pause0F>A guardar bene, la tua spada è\ndavvero corta!<pause0A>\nEppure te la cavi bene, nonostante\nquella spada minuscola!\nComunque per tagliare il bambù è\nmeglio avere una spada più lunga.\nSi fanno tantissime fettine in più!\n\nTorna quando avrai una spada\npiù lunga!")
          						goto flw_27
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x07\xE05Mmh... Non male, non male...\nPremio di consolazione per te.\nEccoti 30 rupie!")
/*< 13>*/ 					rupees += 30;
/*<131>*/ 					printf("\x0E\x01\x09\x04\x01\xFF00Punta alle <r<20 volte >>al prossimo giro.")
          					goto flw_152
          				  case 2:
/*<  9>*/ 					printf("\x0E\x01\x09\x04\x07\xFF0BHai del talento! Notevole performance.\nEcco, ti sei guadagnato questo!")
/*< 14>*/ 					give_item(63 0x3F);
/*<132>*/ 					printf("\x0E\x01\x09\x04\x01\xFF00Ne voglio <r<28 >>la prossima volta!")
          					goto flw_27
          				  case 3:
/*< 10>*/ 					printf("\x0E\x01\x09\x04\x0B\xFF0CChe punteggio! Persino io ho raggiunto\nun simile risultato raramente!\nEcco il tuo premio!")
/*< 15>*/ 					give_item(64 0x40);
          					goto flw_27
          				}
          			  case 1:
          				goto flw_7
          			}
          		  case 1:
          			goto flw_7
          		}
          	  case 2:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x07\xE07Che cerchi di fare? Il tempo è scaduto!")
          	}
          }

