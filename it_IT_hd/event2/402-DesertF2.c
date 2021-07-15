          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf("Che paura! Bzzz.<pause05>.<pause05>.\n\n\n\n\x0E\x01\x09\x04\x07\x00Però, a pensarci bene,\ndovrebbero essere tutti morti!\n\n\n\x0E\x01\x09\x04\x07\x00Se la mia persona è qui, è\nsolo grazie alla pietra del tempo.\n\n\n\x0E\x01\x09\x04\x07\x00Niente paura, quindi!\nAllora, Link,\nvai a cercare la mia nave!\n\n\x0E\x01\x09\x04\x07\x00Il grande capitano aspetta qui.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf("Verso il cantiere")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nGuardate qui.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf("Probabilità che questa vela\nprovenga dalla nave su cui si\ntrova la <r<fiamma di Nayru>>: 60%.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf("Ora attivo il <r<rilevatore >>per effettuare\nla ricerca della nave su cui si trova\nla <r<<pling>fiamma di Nayru>>.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf("Avvicinati e poi sali\npremendo (A).")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, sembra che col passare\ndel tempo questo edificio sia diventato\nuna tana di mostri.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf("Segui le curve, facendo\ninclinare il carrello.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf("Capitano, grazie di tutto!\nL'equipaggio.")
          }

          void entrypoint_402_02() {
/*<  2>*/ 	start()
/*< 21>*/ 	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
          		  case 0:
/*<220>*/ 			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          			  case 0:
/*<221>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<223>*/ 					printf("Allora? Sbrigati!\nDevi cercare quella persona, no? Bzzz!\n\n\nOppure vuoi tornare da qualche parte\ncon la barca? Dove vuoi tornare?\n[1]Mare[2]Galeone\ndelle sabbie[3-]Resto qui")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf("\x0E\x01\x09\x04\x07\x00Allora salpiamo! Bzzz!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ti accompagno fino alla mia nave! Bzzz!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf("\x0E\x01\x09\x04\x07\x00Torna a trovarmi! Bzzz!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf("Finalmente! Bzzz!\nHai trovato quella persona?\n\n\nVuoi andare da qualche parte\ncon la barca? Dove ti porto?\n[1]Mare[2]Galeone\ndelle sabbie[3-]Resto qui")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf("Stai cercando un drago? Bzzz?\n\n\n\nSe si tratta del<b<\x0E\x01\x09\x04\x07\x00>> <b<drago del fulmine>>,\npotresti trovarlo a sud delle <b<grotte di\nRanel>>. Se invece è un altro drago,\nnon ne ho la più pallida idea... Bzzz...\n\x0E\x01\x09\x04\x07\x00Vuoi andare da qualche parte con\nla barca? Dove ti porto?\n[1]Mare[2]Galeone\ndelle sabbie[3-]Resto qui")
          								goto flw_263
          							  case 1:
/*<293>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 294, 'param3': 31}
/*<294>*/ 								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          								goto flw_282
          							}
          						}
          					  case 1:
          						goto flw_222
          					}
          				}
          			  case 1:
          				flw_150:
/*<150>*/ 				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x07\x00Salpiamo? Bzzz? Dove mi dirigo?\n[1]Mare... [2]Galeone\ndelle sabbie[3-]Resta qui")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x07\x00Allora salpiamo! Bzzz!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ti accompagno fino alla mia nave! Bzzz!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x07\x00Presto! Leviamo le ancore! Bzzz!")
          					}
          				  case 1:
/*<155>*/ 					printf("\x0E\x01\x09\x04\x07\x00Salpiamo? Bzzz.\n[1]Si salpa![2-]Un attimo...")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x07\x00Allora salpiamo! Bzzz!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf("\x0E\x01\x09\x04\x07\x00Presto! Leviamo le ancore! Bzzz!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf("Che succede? Bzzz? Hai cambiato idea?\n\n\n\nHai deciso di aiutare la mia persona\na recuperare la nave?\n[1]Ti aiuto[2-]Non mi va")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x07\x00Davvero? Bene, allora...")
/*< 25>*/ 				printf("Uhm<pause0A>.<pause0A>.<pause0A>. Quella mappa che hai ha qualcosa\ndi strano.\n\n\n\x0E\x01\x09\x04\x07\x00Per navigare in mare occorre una vera\ne propria <y<carta nautica>>! Bzzz!\n\n\nA <b<casa mia >>ho una <y<carta nautica>>!\nSali sulla barca e andiamo a prenderla\na <b<casa mia>>! Bzzz!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf("\x0E\x01\x09\x04\x07\x00Se la metti così, bzzz, non ti faccio salire\nsulla mia barca!\n\n\nE poi voglio vedere come fai ad arrivare\ndove devi!")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf("Uhm<pause0A>.<pause0A>.<pause0A>. E tu chi sei? Bzzz... Un umano?\n\n\n\nNon sai chi sono io<pause05>.<pause05>.<pause05>.?\n\n\n\n\x0E\x01\x09\x04\x07\x00<pling>Io sono il grande <b<Capitanbot>>,\ncapitano della nave che custodisce\nla sacra <r<fiamma di Nayru>>! Bzzz!\n[1]Fiamma?[2]Nave?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf("<pause0A>.<pause0A>.<pause0A>.\n\n\n\nIn quella giornata di tempesta<pause05>.<pause05>.<pause05>.\nL'equipaggio e il suo grande capitano,\ncioè io, navigavamo come sempre.\n\nMa improvvisamente<pause05>.<pause05>.<pause05>. fummo\nattaccati dai pirati. Bzzz...\n\n\nPer sottrarci la <r<fiamma di Nayru>>\nsequestrarono l'equipaggio\ne io fui gettato in mare. Bzzz!")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf("\x0E\x01\x09\x04\x07\x00Per fortuna la corrente mi trasportò\nfino al porto<pause05>.<pause05>.<pause05>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf("\x0E\x01\x09\x04\x07\x00Poi, grazie a questa barca, sono\ncoraggiosamente salpato più di cento\nvolte per cercare la mia nave e la mia\nciurma. Bzzz...")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf("\x0E\x01\x09\x04\x07\x00Ma ora non riesco più a trovare la mia\nnave.<pause05>.<pause05>. sicuramente hanno usato quel\ncongegno per renderla invisibile! Bzzz!\n[1]Invisibile?[2]Scomparsa?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf("\x0E\x01\x09\x04\x07\x00Per difendere la <r<fiamma di Nayru>>,\nla nave è dotata di un dispositivo\nche la rende invisibile<pause05>.<pause05>.<pause05>.\n\nCosa?! Stai cercando la\n<r<fiamma di Nayru>>?\n\n\nTi serve la <r<fiamma di Nayru >>per\nritrovare una persona importante<pause05>.<pause05>.<pause05>.<pause05>?\n\n\n\x0E\x01\x09\x04\x07\x00In tal caso, mi aiuti a cercare la mia\nnave e il mio equipaggio... Bzzz...?")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf("Se mi aiuti, ti faccio salire sulla barca\ncon me. Che fai? Bzzz.\n[1]Ti aiuto[2-]Non mi va")
/*<215>*/ 				set_camera(-1, 0)
          				goto flw_134
          			  case 1:
          				goto flw_209
          			}
          		  case 1:
          			goto flw_212
          		}
          	}
          }

          void entrypoint_401_20() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf("Se la velocità aumenta troppo,\nrallenta con (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf("Buon lavoro, papà!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf("Salta per superare gli ostacoli.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf("Verso il molo")
          }

          void entrypoint_402_04() {
/*< 13>*/ 	start()
/*< 41>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 42>*/ 		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
          		  case 0:
/*<284>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<283>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_44:
/*< 44>*/ 					printf("Quella casa è piena di ricordi\ndella mia famiglia... bzzz...\n\n\nChissà quando ci potrò tornare...\nVorrei tanto rivedere i miei.<pause05>.<pause05>.\n")
          					flw_46:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x07\x00Leviamo le ancore?\n[1]Sì![2-]Un attimo")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("\x0E\x01\x09\x04\x07\x00Si salpa! Bzzz!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ah...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf("Stai cercando un drago? Bzzz?\nSe si tratta del <b<\x0E\x01\x09\x04\x07\x00drago del fulmine>>,\npotresti trovarlo a sud delle <b<grotte di\nRanel>>.\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
          						goto flw_46
          					  case 1:
/*<296>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 31}
/*<297>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_285
          					}
          				}
          			  case 1:
          				goto flw_44
          			}
          		  case 1:
/*< 43>*/ 			printf("Ottimo! Con la <y<carta nautica>> possiamo\nfinalmente navigare come si deve!\n\n\nBene! Andiamo a cercare la mia nave!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf("Che succede? Presto, vai a prendere\nla <y<carta nautica >>a casa mia!\n\n\nOppure vuoi uscire in mare?\n[1]Sì[2-]No, grazie")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x12\x04\x00dHai visto? Quella è la mia nave!\n\n\n\nFuoco ai cannoni! Bzzz!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Capolinea \x2010 Cantiere")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Grazie per avermi aiutato\na recuperare la nave! Bzzz!\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Era in condizioni pessime... Però io e\nla mia ciurma ce l'abbiamo messa\ntutta per ripararla.\n\n<b<\x0E\x01\x09\x04\x07\x00>>Anche tu, metticela tutta\ne ritrova quella persona!\n<b<\x0E\x01\x09\x04\x07\x00>>Se vorrai tornare a trovarmi\nsarai sempre il benvenuto!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf("Bene! Apriamo la <y<carta nautica\n>>che hai portato!")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 102, 'param3': 6}
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf("Nel luogo contrassegnato con \x0E\x02\x04\x02\x19CD\nc'è il <b<<pling>cantiere>>!")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x00Il cantiere è il luogo dove si costruiscono\nle navi. Anche la mia nave è nata lì! Bzzz!\n\n\n\x0E\x01\x09\x04\x07\x00Andando al cantiere forse troveremo\nindizi sulla nave. Bzzz.")
/*<110>*/ 	printf("\x0E\x01\x09\x04\x07\x00Si salpa!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf("Zona minacciata dai pirati!\nAttenzione!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf("Ma ho paura<pause05>.<pause05>.<pause05>.<pause05>!\n\n\n\nIl capo dei pirati è un androide\nfortissimo! E ha un sacco di\nscagnozzi!\n\n\x0E\x01\x09\x04\x07\x00Preferirei non doverlo incontrare\ndi nuovo. Ma<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Se vogliamo recuperare la nave\nnon ci resta altro da fare!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf("Nel luogo contrassegnato con \x0E\x02\x04\x02\x19CD\nc'è il <b<<pling>covo dei pirati>>!")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf("\x0E\x01\x09\x04\x07\x00Forza! Decidiamoci e partiamo!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf("\x0E\x01\x09\x04\x07\x00Uhm... la nave non è al cantiere.\nE ora<pause05>.<pause05>.<pause05>.<pause05>?\n\n\n\x0E\x01\x09\x04\x07\x00Certo non sarà una crociera...\nMa dobbiamo andare al covo\ndei pirati che hanno rubato la nave!\n\n\x0E\x01\x09\x04\x07\x00Il capo dei pirati è un androide\nfortissimo! E ha un sacco di\nscagnozzi! \x0E\x01\x09\x04\x07\x00Preferirei non\ndoverlo incontrare di nuovo. Bzzz.\nMa<pause05>.<pause05>.<pause05>. \x0E\x01\x09\x04\x07\x00se vogliamo\nrecuperare la nave\nnon c'è altro da fare!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore. Guardate!")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf("Questa è una <y<<pling>sfera del tempo>>.\n\n\n\nLa forma differente dalle comuni\npietre del tempo è un adattamento\nper facilitarne il trasporto.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf("Il carrello è fuori servizio\nper tutto il giorno a causa\ndella manutenzione mensile.\nCi scusiamo per il disagio.")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x07\x00Riusciremo mai a trovarla in un mare\ncosì immenso?\n\x0E\x01\x09\x04\x07\x00Non mi resta che credere\na quello che dici. Bzzz.\nSono un grande capitano\nma conto su di te!\n\n\n\x0E\x01\x09\x04\x07\x00Le probabilità che la nave sia al\nmomento invisibile sono alte.\nPerò se riuscissimo a <pling><g<colpirla\n>>tornerebbe a essere visibile!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf("Uhm... la nave non è nel covo dei pirati<pause05>.<pause05>.<pause05>.\n\n\n\nUhm... hai trovato qualche indizio?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Conosci la zona? Cosa?\nHai un <r<rilevatore>>? Fantastico! Bzzz!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore...\nGuardate là!")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf("Quella è la nave che custodisce\nla fiamma di Nayru.\nProbabilità che il suo equipaggio\nsia costituito da androidi: 90%.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf("Si suppone che il capitano, circondato\ndal suo equipaggio, abbia trascorso\ngiorni felici.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf("Speriamo che il progetto\ndella mia nave sia pronto\npresto!")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore. Guardate!")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf("Ma in questo dispositivo, non ci sono\n<r<pietre del tempo>>!\n\n\nProbabilità che appartenga allo stesso\ntipo di dispositivi trovati nella <b<miniera\ndi Ranel>>: 95%.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf("Si suppone che anche in questo edificio\nle <r<<pling>pietre del tempo >>siano usate come\nfonte di alimentazione.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf("\x0E\x01\x05\x04\x0F\x00\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\n\n\n\n\x0E\x01\x05\x04<\x00Questo è il <b<mare di sabbia di Ranel>>\nUn tempo era un vasto oceano.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore...\nSiamo arrivati all'interno del cantiere.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf("Dopo così lungo tempo la sabbia è riuscita\na penetrare anche all'interno dell'edificio.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf("Suggerisco di ricercare sotto la sabbia\nindizi utili riguardo alla nave.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x05\x04Z\x00Ora si è completamente prosciugato e\nsi è trasformato in un mare di sabbia.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf("\x0E\x01\x12\x04\x00\x01Mio signore, è mio dovere avvertirvi\nche è preferibile raggiungere l'obiettivo\nprima di effettuare una pausa.\nCerchiamo prima la carta nautica.")
/*<233>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 36}
/*<235>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
          }

          void entrypoint_402_10() {
/*<  5>*/ 	start()
/*< 64>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<274>*/ 		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          		  case 0:
/*<287>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<286>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_275:
/*<275>*/ 					printf("Che gioia il giorno che\nla mia nave fu varata... proprio qui!\nChe nostalgia! Bzzz.<pause05>.<pause05>.")
          					flw_67:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x07\x00Leviamo le ancore?\n[1]Sì![2-]Un attimo")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x07\x00Si salpa! Bzzz!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ah...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf("Stai cercando un drago? Bzzz?\nSe si tratta del <b<\x0E\x01\x09\x04\x07\x00drago del fulmine>>,\npotresti trovarlo a sud delle <b<grotte di\nRanel>>.\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
          						goto flw_67
          					  case 1:
/*<302>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 303, 'param3': 31}
/*<303>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_288
          					}
          				}
          			  case 1:
          				goto flw_275
          			}
          		  case 1:
/*< 65>*/ 			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          			  case 0:
/*< 73>*/ 				printf("Deciso! Bzzz!\nDirigiamoci al <b<covo dei pirati>>!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x07\x00Uhm... la nave non è qui.\nE ora<pause05>.<pause05>.<pause05>.<pause05>?\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Certo non sarà una crociera...\nMa dobbiamo andare al covo\ndei pirati che hanno rubato la nave!\n\n<b<\x0E\x01\x09\x04\x07\x00>>Allora decidiamoci e salpiamo! Bzzz!\n[1]Andiamo![2-]Aspetta...")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf("Ma che fai?\nDevi andare subito al <b<cantiere>>\na cercare indizi! Bzzz!\n\n\x0E\x01\x09\x04\x07\x00O preferisci tornare in mare?\n[1]Sì![2-]No, grazie")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf("\x0E\x01\x05\x04Z\x00Questo probabilmente doveva essere\nun porto per lo sbocco sul mare.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf("Rilevo la presenza di insetti nella parte\nsuperiore della casa.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x12\x04\x00dChe paura! Che paura! Bzzz!\nQuesto è il covo dei pirati!\nNon ti avvicinare, che è pericoloso!\nPrima dobbiamo andare al <b<cantiere>>!")
          	  case 1:
/*<  8>*/ 		printf("\x0E\x01\x12\x04\x00dNon devi andare di là!\nPer prima cosa dobbiamo andare a\n<b<casa mia>>! Bzzz!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x05\x04<\x00Si tratta di una regione sviluppatasi\ngrazie a una nuova energia.\nProbabilità che sia presente la <r<fiamma\ndi Nayru>>: 90%.\n\x0E\x01\x05\x04\x1E\x00Suggerisco di esplorare il mare di\nsabbia.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto. L'edificio\nha subito delle modifiche provocate\ndall'energia della sfera del tempo.\n\nVi suggerisco di andare a verificare\nla situazione all'esterno.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Da quanto tempo non mi trovavo\nal timone! Bzzz! Ora ti spiego come\nsi naviga...\n\n\x0E\x01\x09\x04\x07\x00Con \x0E\x02\x04\x02\x8CD ci si sposta. Tenendo premuto (B)\nmentre si è in movimento, si accelera!\x0E\x01\x11\x02\x1CD\nCon \x0E\x02\x04\x02\x29CD si carica il cannone... e con \x0E\x02\x04\x02\x29CD\nancora, si spara!\x0E\x01\x11\x02\xFCD")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf("Il luogo contrassegnato con \x0E\x02\x04\x02\x19CD\nè l'isola dove c'è la mia casa!\n\n\nSull'isola c'è un <r<molo>>. Bzzz.\nNon sarà difficile sbarcare!")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x07\x00Si parte! Bzzz!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\nProbabilità di trovare la nave\nin questo luogo: 0%.\n\nSuggerirei di fare rapporto al capitano\ne di lasciare l'isola.")
/*<273>*/ 	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
          }

          void entrypoint_402_14() {
/*< 17>*/ 	start()
/*< 53>*/ 	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          	  case 0:
/*<276>*/ 		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          		  case 0:
/*<290>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<289>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_277:
/*<277>*/ 					printf("Ancora sogno quel giorno in cui fummo\nattaccati dai pirati! Bzzz! Che paura.<pause05>.<pause05>.<pause05>!")
          					flw_56:
/*< 56>*/ 					printf("\x0E\x01\x09\x04\x07\x00Leviamo le ancore?\n[1]Sì![2-]Un attimo")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("\x0E\x01\x09\x04\x07\x00Si salpa! Bzzz!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ah...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf("Stai cercando un drago? Bzzz?\nSe si tratta del <b<\x0E\x01\x09\x04\x07\x00drago del fulmine>>,\npotresti trovarlo a sud delle <b<grotte di\nRanel>>.\nSe invece è un altro drago, non\nne ho la più pallida idea... Bzzz...")
          						goto flw_56
          					  case 1:
/*<299>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 300, 'param3': 31}
/*<300>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_291
          					}
          				}
          			  case 1:
          				goto flw_277
          			}
          		  case 1:
/*< 54>*/ 			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          			  case 0:
/*< 63>*/ 				printf("Presto! Andiamo a cercare la mia nave!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf("Uhm... la mia nave non è nemmeno qui<pause05>.<pause05>.<pause05>.\n\n\n\nUhm... hai trovato qualche indizio?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Conosci la zona?\nCosa? Hai un <r<rilevatore>>?\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Fantastico! Bzzz! Ah! Questa volta\ntroveremo sicuramente la mia nave!\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Salpiamo?\n[1]Sì[2-]Aspetta...")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf("<pling>Vicino al ponte che si trova all'interno\ndella bocca c'è qualcosa!\n\n\nPotrebbe essere un indizio sulla mia nave!\nBzzz! Vai un po' a dare un'occhiata!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf("\x0E\x01\x09\x04\x07\x00Oppure vuoi tornare in mare?\n[1]In mare[2-]No, grazie")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf("Link! Incredibile! Bzzz!\n\n\n\nLa grande bocca si è aperta!\nMa come hai fatto?")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf("<pling>Vicino al ponte che si trova all'interno\ndella bocca c'è qualcosa!\n\n\nPotrebbe essere un indizio sulla mia nave!\nBzzz! Vai un po' a dare un'occhiata!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf("Che ti succede? Bzzz? Hai paura\ndei pirati? Ma sono già tutti morti...\n\n\nOppure vuoi tornare in mare?\n[1]In mare[2-]No, grazie")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("Arrivati! Bzzz!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf("La mia casa è proprio sulla cima! Bzzz!\nDa vero capitano!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf("\x0E\x01\x09\x04\x07\x00La <y<<pling>carta nautica >>è in casa.\nValla a prendere! Bzzz!\n\n\n\x0E\x01\x09\x04\x07\x00Se lascio la barca ho paura di non\nfunzionare più... perciò aspetto qui!\nBzzz!\n\nE poi un grande capitano come me\nnon abbandona mai la sua nave! Bzzz!")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf("Arrivati! Bzzz!\n\n\n\nQuesta è l'isola dove si trova il cantiere\ne dove vivono gli operai che ci lavorano.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf("Quell'edificio è il cantiere!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf("Però l'ingresso è chiuso e non possiamo\nentrare.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf("\x0E\x01\x09\x04\x07\x00Gli edifici dell'isola sono collegati\ntra di loro dai binari del carrello!")
/*<164>*/ 	printf("\x0E\x01\x09\x04\x07\x00Usando il carrello forse riuscirai\na entrare nel cantiere dall'entrata\nposteriore! Bzzz!")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf("Là c'è una fermata del carrello! Bzzz!")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf("\x0E\x01\x09\x04\x07\x00Sarà meglio andare alla\nfermata, come prima cosa! Bzzz!\nIo, da vero capitano, aspetto qui!")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf("Verso il centro")
          }

