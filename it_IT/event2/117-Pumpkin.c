          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf("\x0E\x01\x09\x04\x11\x1153Aaaaaah! Lo hai fatto!\nAdesso ti becchi una bella sgridata!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf("\x0E\x01\x09\x04\x00\x01Quindi grazie al tuo lavoro qui hanno\npotuto mettere il lampadario, eh?\n\n\n\x0E\x01\x09\x04\x00\x300Non è che stai cercando di farti bello\nagli occhi di Pepa?!")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf("\x0E\x01\x09\x04\x00\x01Parlare di mostri e demoni...\ntutte cialtronate!\n\n\n\x0E\x01\x09\x04\x00\x300Secondo me quel tipo vuole\nsolo attirare l'attenzione!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x01Ehi, senti questa!\n\n\n\nQuesto tipo seduto al tavolo dice di\naver visto un demone...\n\n\n\x0E\x01\x09\x04\n\x300Non farà mai colpo su Pepa\ncon storielle del genere!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x11\x1104Tu non ci credi ai demoni, vero?\n\n\n\n\x0E\x01\x09\x04\n\x300Aspetta un attimo!\nNon starai pensando di provarci\nanche tu con Pepa?!")
          				  case 1:
          					goto flw_41
          				}
          			}
          		}
          	  case 1:
          		goto flw_493
          	}
          }

          void entrypoint_117_23() {
/*<292>*/ 	start()
/*<176>*/ 	printf("\x0E\x01\x09\x04\x07\x803Sono felice che tu mi abbia presentato\nquesta tua conoscenza! Mi ha aiutato\nmolto! Ho un bel po' di lavoro per lui.\n\x0E\x01\x09\x04\x13\x800Ti <pause05>ringrazio <pause05>davvero <pause05>tanto<pause05>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x09\x04\x00\x08Stai indietro! Ti faccio vedere io\ncome si fa!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf("\x0E\x01\x09\x04\x00\x04Allora, cosa vuoi fare?\n[1]Suono[2]Prendo la\nzuppa[3-]Niente")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf("\x0E\x01\x09\x04\x0E\x1000Bene, allora! Tu e Pepa potreste\nintrattenere i nostri clienti!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Mi spiace, Pepa si esibisce solo di sera!\nTorna più tardi!")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf("\x0E\x01\x09\x04\x08\x1004Vuoi un po' della mia\nzuppa? Allora ti piace, non è così?\n\n\nUna porzione costa <r<10 rupie>>.\n[1]Va bene[2-]No, grazie")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf("La zuppa è molto più buona se bevuta\ncalda. Tra 5 minuti sarà fredda.")
          					  case 1:
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x700Non hai un'ampolla vuota?\nSe vuoi bere della zuppa\nte ne servirà una!\n\nTorna dopo essertene procurata\nuna e ti darò la zuppa!")
          					}
          				  case 1:
/*<319>*/ 					printf("\x0E\x01\x09\x04\x0C\x700Sei a corto di rupie, eh?\nTorna la prossima volta.")
          				}
          			  case 1:
/*<323>*/ 				printf("\x0E\x01\x09\x04\x0D\xA00Forza, deciditi!")
          			}
          		  case 2:
/*<313>*/ 			printf("\x0E\x01\x09\x04\x08\x1000Ah sì? Beh, se ti va accomodati pure e\nrilassati.\n\n\n\x0E\x01\x09\x04\x00\x700Oh, e non scordare di andare a salutare\nPepa!")
          		}
          	  case 1:
/*<309>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ciao, Link!\nChe ne pensi del mio\nnuovo lampadario?\n\n\x0E\x01\x09\x04\x0B\x1100Ti confesso che mi è costato un po'!")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf("\x0E\x01\x09\x04\x0D\x1006...\nCredi che ci abbia speso troppo?\n\n\n\x0E\x01\x09\x04\x08\x09Ma dai! Senza il tuo aiuto non me\nne sarei mai potuto permettere\nuno così fantastico!\n\n\x0E\x01\x09\x04\x0C\x900E non distruggere anche questo,\ncapito?")
/*<311>*/ 		printf("\x0E\x01\x09\x04\x08\x700Comunque, che posso fare per te?\nTi mancano forse gli incarichi\nche ti affidavo?\n\n\x0E\x01\x09\x04\x0E\x700Ovviamente, stavolta ti pagherò.\nPuoi suonare la lira!\nO forse sei qui per della zuppa?\n[1]Voglio\nlavoro[2]Vorrei\ndella zuppa[3-]Niente")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x701Sai una cosa? Il mio ragazzo mi\naiuterà col campo di zucche!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf("\x0E\x01\x09\x04\x1B09\x702So cosa intendi!\nIo potrei arare quel campo più\nin fretta di qualunque uomo talpa!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("\x0E\x01\x09\x04\x00\x08Davvero?!\nQuesto mi rende molto felice!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf("\x0E\x01\x09\x04\x1B07\x705Ah ah!\nPer Pepa farei qualunque\ncosa! Qualunque!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oooh! In tal caso accetto la tua offerta\ncon grande piacere!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf("Vi voglio bene! Siete gentilissimi!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf("\x0E\x01\x09\x04\x00\x09Meraviglioso! Hai trovato quel\nqualcuno, allora!")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x01\x705Ma... non è una persona...\n\n\n\n\x0E\x01\x09\x04\x07\x700Oh, capisco... Allora la talpa arerà il\ncampo per me?")
          }

          void entrypoint_117_25() {
/*<394>*/ 	start()
          	flw_34:
/*< 34>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 90>*/ 		switch (scene_flags[6 /* 0x1 40 */]) {
          		  case 0:
/*<200>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<201>*/ 				printf("\x0E\x01\x09\x04\x07\x703Allora mi aiuterai?\nSapevo di poter contare su di te!\nIn bocca al lupo!\n[1]Al lavoro[2-]Non mi va")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf("\x0E\x01\x09\x04\x13\x809Grande! Sapevo che non mi\navresti delusa!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x07\x700La cosa più importante da ricordare\nmentre le porti è di <r<camminare\nlentamente>>.\n\nSe le zucche pendono a destra, vai a\ndestra. Se le zucche pendono a\nsinistra, vai a sinistra. È tutta\nquestione di equilibrio!\n\x0E\x01\x09\x04\x01\x700Cerca di mantenere la calma o farai\ncadere le zucche! <pause14>Buona fortuna!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf("\x0E\x01\x09\x04\x01\x1606Davvero?\nPensavo che ci avresti aiutato!")
          						  case 1:
/*<514>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Davvero? Sei sempre così noioso?")
          						}
          					  case 1:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x1606Davvero? Lo dirò a mio padre!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf("\x0E\x01\x09\x04\x07\x808Spero di poter contare ancora su di te\nper raccogliere le zucche.\n\x0E\x01\x06\x02\xFBCDMio bel\x0E\x01\x06\x02Í cavaliere!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf("\x0E\x01\x09\x04\x01\x700Ma certo! Ecco il mio salvatore!\nChe ne dici di guadagnare qualcosa\ncon del lavoro onesto?\n\n\x0E\x01\x09\x04\x07\x700Avrò bisogno di nuovo delle tue\ncapacità. Mi aiuterai? Ti pagherò!\n[1]Sì[2-]No")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf("\x0E\x01\x09\x04\x07\x703Mettiamoci all'opera. Ti mostrerò\ndove portare le zucche!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf("Assicurati di portare le zucche\nfino al capanno!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf("\x0E\x01\x09\x04\x00\x0FOra che la raccolta delle zucche è\nfinita, non mi resta che piantarne\nancora. Ma prima dovrò arare il\ncampo! Vediamo...\nDove posso trovare qualcuno bravo\na farlo?")
/*<396>*/ 							printf("\x0E\x01\x09\x04\x01\x700Oh, un'altra cosa. Solo un favore.\nSai, non sono riuscita a portare da sola\ntutte le zucche... \x0E\x01\x09\x04\x07\x700Credi di potermi\naiutare ancora a portarle al capanno?\nTi pagherò!\n[1]Va bene[2-]No, grazie")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x01Hai cambiato idea? Hai deciso di\naiutarmi con le zucche?\n[1]Sì[2-]No")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x01\x701Dunque il tuo prossimo lavoro è deciso!\n<r<Darai una mano>><r< a raccogliere\nle zucche>>.\n\n\x0E\x01\x09\x04\x07\x700Sai, per me è un sollievo. Non immagini\nquanto siano pesanti!\n\n\n\x0E\x01\x09\x04\x01\x1600Oh... Pensi che non sarà così difficile\ntrasportarle?\n\n\n\x0E\x01\x09\x04\x01\x700Eh eh... Perché allora non rendiamo\nla cosa più interessante? Vediamo se\nriesci a <r<portare 5 zucche >>alla volta!\n\n\x0E\x01\x09\x04\x07\x1600Ti do un consiglio: trasportale\npiano o le farai cadere tutte.\nE ora, porta un po' di zucche!\n[1]Al lavoro![2-]Non ora")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf("\x0E\x01\x09\x04\x13\x809Sapevo che saresti riuscito a portarle\ntutte! Sei un tipo su cui si può\ncontare!\n\x0E\x01\x09\x04\x07\x800Eccoti 50 rupie!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf("\x0E\x01\x09\x04\x07\x800Grazie<pause0F> mille<pause0F>! Torna pure quando vuoi!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x09\x04\x13\x809Lo sapevo! Sei riuscito a\nportarle tutte!\n\n\n\x0E\x01\x09\x04\x01\x700Questo significa che il tuo lavoro\nè finito!\n\n\n\x0E\x01\x09\x04\x19\x800Ti<pause0F> ringrazio<pause0F> davvero<pause0F> tanto<pause0F>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh no! Ti sono cadute!\nChe cosa devo fare con te?\n\n\n\x0E\x01\x09\x04\x07\x700Puoi provare di nuovo, se pensi\ndi potercela fare!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ohohoho... Questo è un ottimo\nmetodo per fare un po'\ndi esercizio!\n\n\x0E\x01\x09\x04\x0C\xD00E sai una cosa? La mia stanchezza\nsvanisce ogni volta che guardo quella\nragazza!\n\n\x0E\x01\x09\x04\x01\x900Un secondo<pause0A>.<pause0A>.<pause0A>.<pause0A> vedi anche tu come\nmi guarda?\n\n\n\x0E\x01\x09\x04\x0C\xD00Credo che abbia un debole per me!\n\x0E\x01\x09\x04\x09\xD0BDomani lavorerò con ancora più lena!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf("\x0E\x01\x09\x04\x00\nDevo occuparmi del campo tutto il\ngiorno?! Non starai mica dicendo\nsul serio? \n\nMi hai portato fin qui solo per questo?\nNon prendermi in giro dai...")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x08\x1004Vuoi un po' della mia\nzuppa? Allora ti piace, non è così?\n\n\nUna porzione costa <r<10 rupie>>.\n[1]Va bene[2-]No, grazie")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf("Finalmente! Ecco qui.")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf("La zuppa è molto più buona se bevuta\ncalda. Tra 5 minuti sarà fredda.")
          				  case 1:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x00\x700Non hai un'ampolla vuota?\nSe vuoi bere della zuppa\nte ne servirà una!\n\nTorna dopo essertene procurata\nuna e ti darò la zuppa!")
          				}
          			  case 1:
/*<114>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Sei a corto di rupie, eh?\nTorna la prossima volta.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf("\x0E\x01\x09\x04\x10\x705Certo, certo...\nMa qui non c'è solo la zuppa!\nPuoi incontrare varie persone\ne anche rilassarti.\nPerò mettiti nella zucca di non creare\nproblemi e di non rompere niente.\n\n\n\x0E\x01\x09\x04\x08\x700Soprattutto il mio lampadario!\nMe lo sono fatto costruire su richiesta.\nPer me è inestimabile.\n\n\x0E\x01\x09\x04\x00\x900Se ti pesco a farlo oscillare saranno\nguai, sono stato chiaro?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf("\x0E\x01\x09\x04\x10\x905Capisco. Dovrai lavorare per me per\nripagare il lampadario.\n\n\n\x0E\x01\x09\x04\x00\x700Torna più tardi!")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf("\x0E\x01\x09\x04\x10\x905Capisco. Dovrai lavorare per me per\nripagare il lampadario.\n\n\n\x0E\x01\x09\x04\x00\x700Torna più tardi!")
          					  case 1:
          						goto flw_437
          					}
          				}
          			}
          		}
          	  case 1:
          		goto flw_434
          	}
          }

          void entrypoint_117_44() {
/*<134>*/ 	start()
/*<136>*/ 	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          	  case 0:
/*<138>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<140>*/ 			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x09\x04\x01\x70FSpero che tu non abbia accennato a\nqualcun altro solo per confortarmi.\n\n\n\x0E\x01\x09\x04\x07\x700Però sono fiduciosa. Resterò qui ad\naspettare che questa persona arrivi!")
          			  case 1:
/*<139>*/ 				printf("\x0E\x01\x09\x04\x00\x0FOra che la raccolta delle zucche è\nfinita, non mi resta che piantarne\nancora. Ma prima dovrò arare il\ncampo! Vediamo...\nDove posso trovare qualcuno bravo\na farlo?")
          			}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\x01\x701Hai intenzione di dare una\nmano con le zucche?\n\n\n\x0E\x01\x09\x04\x07\x700Anche se è un po' tardi per\nraccoglierle... Che ne dici di tornare\nquando è giorno? Il campo\nnon se ne va mica!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?\n\n\x0E\x01\x09\x04\x01\x700Oh, giusto... <pause1E>papà ha detto che ha\ndell'altro lavoro per te.\n\n\n\x0E\x01\x09\x04\x07\x700Perché non vai a parlare con lui?")
          		  case 1:
/*<424>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?")
          		}
          	}
          }

          void entrypoint_117_27() {
/*<448>*/ 	start()
/*<456>*/ 	set_camera(30, 0)
/*<450>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 452, 'param3': 32}
/*<452>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 453, 'param3': 15}
/*<453>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 26, 'next': 451, 'param3': 14}
/*<451>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 473, 'param3': 16}
/*<473>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<472>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Devi andare a parlare con\nmio padre!\n\n\n\x0E\x01\x09\x04\x1A1A\x800Sarà molto arrabbiato!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Salve! Questa è la taverna\ndelle zucche. Qui serviamo una\nzuppa di zucca squisita!\n\n\x0E\x01\x09\x04\x1A1A\x800Non dovrai fare altro che\nmetterti comodo e rilassarti!")
          		goto flw_454
          	}
          }

          void entrypoint_117_10() {
/*<  6>*/ 	start()
/*<118>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
/*<214>*/ 		entrypoint_117_11();
          	  case 1:
          		flw_520:
/*<520>*/ 		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
/*< 12>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          			  case 0:
/*<308>*/ 				entrypoint_117_24();
          			  case 1:
/*< 14>*/ 				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x00\x0EFinalmente hai ripagato il tuo debito.\nHai fatto davvero un buon lavoro!\n\n\nA un certo punto ho pensato\nche volessi mollare, ma hai\ndel sale in zucca, dopotutto!\n\n\x0E\x01\x09\x04\x00\x1000Torna pure quando vuoi. Come cliente,\ns'intende!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf("\x0E\x01\x09\x04\x00\x01Allora suonerai ancora una\nvolta per la mia Pepa,\nvero?\n[1]Certo![2]Spiegami[3-]No")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf("\x0E\x01\x09\x04\x00\x0EOttimo!\nCominciamo!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf("\x0E\x01\x09\x04\x0D\x02OK! Sarà un successo.\nPepa!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf("\x0E\x01\x09\x04\x1A00\x08Sì, papà! Che succede?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf("\x0E\x01\x09\x04\x0B\xB00Questo giovanotto ti accompagnerà\nmentre canti! Perché non fai sentire a\ntuo padre la tua splendida voce?")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf("Ma certo! Forza, allora!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf("\x0E\x01\x09\x04\x00\x0EAllora te lo spiego di nuovo.")
          										flw_265:
/*<265>*/ 										printf("\x0E\x01\x09\x04\x00\x700Quando Pepa canta, i clienti\ncominciano a seguire il ritmo\nballando. Tu dovrai seguire quel\nritmo col tuo strumento.\n\x0E\x01\x09\x04\x0F\x700I clienti ondeggiano a destra\ne a sinistra: suona il tuo strumento\nseguendo lo stesso ritmo.\n\nNon fare caso ai movimenti che fai per\nsuonare, ma stai attento alla velocità.\nNon va bene se il tuo ritmo è troppo\nveloce o troppo lento!\n\x0E\x01\x09\x04\x08\x700Quando i clienti si fermano, quello\nè il momento dell'assolo di Pepa\ne tu puoi suonare come ti pare.\nBasta che tu segua il ritmo!\nTutto chiaro?\n[1]Sì[2-]Ripeti")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf("Hai scordato cosa ho detto?\nMettitelo nella zucca stavolta!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf("\x0E\x01\x09\x04\x00\x04Nessun problema! Ma sarà meglio\nche aspetti un po', prima di esibirti!")
          									}
          								  case 1:
/*<519>*/ 									printf("\x0E\x01\x09\x04\x00\x01Oh, salve di nuovo!\n<pause1E>Non vedi l'ora di suonare\nla tua lira, non è così?\n\nMi spiace, ma qui non si\nsuona di giorno!\nTorna di sera!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf("\x0E\x01\x09\x04\x00\x01Sei tornato! Bene bene. Che cosa\nposso farti fare?\n\n\n\x0E\x01\x09\x04\x0D\x700Oh! Che cos'è quello strano\nstrumento che hai con te?\n\n\n\x0E\x01\x09\x04\x00\x1100Ah sì?! Scommetto che non sai che\nla mia Pepa è brava a cantare.\nMagari non sembra, ma è così!\n\n\x0E\x01\x09\x04\x00\x700Non molto tempo fa cantava per i\nnostri clienti qui!\n\n\n\x0E\x01\x09\x04\x08\x00Però poi ha dovuto smettere perché\nè rimasta senza accompagnamento\nstrumentale!\n\nTi andrebbe di suonare un po'\nper accompagnare Pepa\nmentre canta?\n[1]Certo![2-]Non ora")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x100EOttimo! Lo sapevo che\neri la persona giusta!\n\n\n\x0E\x01\x09\x04\x0D\xA00Però devi metterci\nl'impegno necessario.")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf("\x0E\x01\x09\x04\x00\x11Sei proprio un bel tipo, lo sai?\nAmmetti mai di aver sbagliato?")
          									}
          								  case 1:
/*<518>*/ 									printf("\x0E\x01\x09\x04\x00\x01Sei tornato! Vediamo un po'...\nCosa posso farti fare?\n\n\n\x0E\x01\x09\x04\x00\x700Oh! Che cos'è quello strano strumento\nche hai con te?\n\n\n\x0E\x01\x09\x04\x0B\x1000Sì, ho trovato! Ecco il lavoro giusto\nper te.\n\n\n\x0E\x01\x09\x04\x00\x700Però, ho bisogno che tu lo faccia di\nsera. Ti dispiace tornare più tardi?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x06Ancora non ho trovato niente da farti\nfare! Torna più tardi!\n\n\nForse vuoi un po' della mia zuppa di\nzucca? Il mio portafoglio te ne\nsarebbe grato.\n[1]Va bene[2-]No, grazie")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf("\x0E\x01\x09\x04\x0B\x100EOttimo lavoro!\nSembra che finalmente tu\nabbia finito di raccogliere le\nzucche!\n\x0E\x01\x09\x04\x00\x700Eppure... mi sa che\nancora non hai finito di\nripagare il tuo debito\nper il lampadario!\n\x0E\x01\x09\x04\x08\x00Devo pensare a\nqualcos'altro da farti\nfare... torna più tardi.")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf("Ehi! Ascolta bene quello che dice Pepa\ne aiutala a trasportare le zucche!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf("Ricordati, però, che puoi dare\nuna mano con le zucche solo\ndi giorno. Di notte potrebbe\nessere pericoloso!")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf("Eccoti! Giusto in tempo. Ho un altro\nincarico per te!\n\n\nDovrai <r<dare una mano a portare le\nzucche>>, e non voglio sentire lamentele!\n[1]OK...[2-]Non mi va")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf("\x0E\x01\x09\x04\x08\x704Non sarà difficile per te!\nHai presente il campo di\nzucche di cui si occupa\nmia figlia?\nHo bisogno che tu porti\nle zucche al capanno!\nParlane con <b<Pepa>>.")
/*<133>*/ 											printf("Ricordati, però, che puoi dare\nuna mano con le zucche solo\ndi giorno. Di notte potrebbe\nessere pericoloso!")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf("\x0E\x01\x09\x04\x00\x11Sei proprio un bel tipo, lo sai?\nAmmetti mai di aver sbagliato?")
          										}
          									  case 1:
/*< 20>*/ 										printf("Ottimo! Sei riuscito a consegnare la\nzuppa al primo cavaliere in tempo!\n\n\n\x0E\x01\x09\x04\x0C\x700Detrarrò il tuo compenso da ciò che\nmi devi per il lampadario.\n\n\n\x0E\x01\x09\x04\x0F\x900Ma non credere che sia finita qui, sai?\n\n\n\nIl tuo prossimo incarico è <r<dare una\nmano a portare le zucche>>, e non voglio\nsentire lamentele!\n[1]OK...[2-]Non mi va")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf("\x0E\x01\x09\x04\x00\x06Che c'è ora?\nNon ho ancora deciso cosa\nfarti fare.\n\nIl lampadario non tornerà certo al suo\nposto per magia!\n\n\nChe ne dici di comprare un\npo' della mia zuppa di zucca?\n[1]Forse...[2-]Non ora")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf("\x0E\x01\x09\x04\x0B\x100EOttimo! Sei riuscito a consegnare la\nzuppa al primo cavaliere!\n\n\nLo detrarrò da ciò che mi devi per\nil lampadario.\n\n\n\x0E\x01\x09\x04\x08\x700Ma non credere di aver finito!\nSto ancora pensando a cos'altro\nfarti fare... Ho bisogno di più tempo,\ntorna a trovarmi più tardi.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf("\x0E\x01\x09\x04\x00\x01La zuppa sarà completamente fredda\ntra <r<5 minuti>>! Devi sbrigarti se vuoi\nconsegnarla al primo cavaliere\nancora calda!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf("\x0E\x01\x09\x04\x00\x08Cosa ti avevo detto?\nNon lasciare che la zuppa\nsi raffreddi!\n\nChe disastro... Ecco, dell'altra zuppa\ncalda.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf("Ma dovrai pagarla!\nCosta <r<10 rupie>>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf("\x0E\x01\x09\x04\x00\x0DChe cosa? Non hai 10 rupie?\nUhm... e va bene, ecco qui.\nMa solo per questa volta, intesi?")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf("Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf("\x0E\x01\x09\x04\x00\x07Che?\nNon hai più zuppa di zucca?!\n\n\n\x0E\x01\x09\x04\x0D\xA00Non dirmi che l'hai bevuta!\n\n\n\nSei proprio uno zuccone.\nEcco, prendine dell'altra.")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf("\x0E\x01\x09\x04\x00\x07Che?\nNon hai più zuppa di zucca calda?\n\n\n\x0E\x01\x09\x04\x0D\xA00Non dirmi che l'hai bevuta!\nBeh, pazienza! Vorrà dire che te ne\ndarò altra.")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf("Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf("\x0E\x01\x09\x04\x00\x01Oh! Vedo che questa volta ti sei\nportato un'ampolla vuota!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf("Così si parla! Eccoti\ndella <y<zuppa di zucca calda>>!\n\n\n\x0E\x01\x09\x04\x00\x700Portala al primo cavaliere.")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf("\x0E\x01\x09\x04\x01\x700Ah, un'altra cosa...\nIl primo cavaliere odia la zuppa\nfredda!\n\nQuindi dovrai fare in fretta.\n\n\n\nMmh... Credo che dovrai portargliela\n<r<entro 5 minuti >>o la zuppa sarà\nfredda!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf("Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf("Pronto a ripagare il mio\nlampadario, zuccone?\n[1]Va bene[2-]Ci penso")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf("Bene! Chi rompe paga!\nVoglio crederti!\n\n\n\x0E\x01\x09\x04\x00\x700Allora cominciamo.\nHo bisogno che tu porti la\nmia zuppa al <r<primo cavaliere\ndi Oltrenuvola>>.\n\x0E\x01\x09\x04\x08\x700Lui è un mio cliente fisso\ne non può fare a meno della\nmia zuppa quando è al lavoro.\nEbbene?\nSei pronto a portargli un po'\ndella mia zuppa?\n[1]Sì[2-]Non ora")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf("Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf("\x0E\x01\x09\x04\x0D\xA0DEhi, la parola di un uomo\nè sacra! Vorrei che tu\nportassi questa zuppa\nal primo cavaliere.\n[1]Va bene![2-]Non ora")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf("Cosa?! Hai una bella faccia\ntosta a venire qui, rompere il\nmio meraviglioso lampadario e\nandartene senza pagare i danni!")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("Non ci posso credere!\nChe hai fatto, zucca vuota?!\n\n\nIl mio fantastico lampadario\nè completamente distrutto!\n\n\nDovrai lavorare per me per un\nbel po' prima di ripagare tutti\ni danni! Quindi? Accetti o no?\n[1]OK![2-]No")
          										goto flw_75
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*<559>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<557>*/ 				printf("\x0E\x01\x09\x04\x00\x01Avanti!\nProva la mia <r<zuppa di zucca>>,\nti rimetterà in forze!\n[1]Assaggio[2-]Non ora")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf("\x0E\x01\x09\x04\x00\x01Benvenuto alla taverna delle zucche,\nil miglior ritrovo per cavalieri.\n\n\nNon troverai pietanza più squisita\ndella mia <r<zuppa di zucca>> casereccia!\n\n\nPerché non la provi? Non sai che\nti perdi!\n[1]Assaggio[2-]Non ora")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Se solo Pepa l'avesse chiesto prima a\nme l'avrei aiutata più che volentieri!\nImmagino quanto sia duro coltivare\nun campo di zucche.")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf("\x0E\x01\x09\x04\x1A00\x03Non l'ho fatto solo perché i clienti\nnon dovrebbero occuparsi\ndel campo di zucche!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ma per me non sarebbe un problema!\nMi darei il doppio da fare di quello\nstrano uomo talpa!")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oooh! In tal caso accetto la tua offerta\ncon grande piacere!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf("\x0E\x01\x09\x04\x09\x705Potrei lavorare senza tregua solo\nper quello splendido sorriso!\nAh ah ah!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf("\x0E\x01\x09\x04\x00\x03Sai, hai fatto davvero un ottimo lavoro\nper noi! Ci sei stato di molto aiuto!\n\n\nDevi tornare più spesso a trovarci,\ncome cliente naturalmente.\n\n\nE se ti va, puoi continuare a lavorare\nper noi come in passato.\nTi pagherò, sai?")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x03Credi che sia il momento per\nsedersi a fare una pausa?\nNon hai qualcosa da sbrigare?")
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ma perché stai seduto tutto il tempo?\n\n\n\n\x0E\x01\x09\x04\x0D\x700Beh, immagino che ogni tanto\nci si debba sedere a riflettere!\n\x0E\x01\x09\x04\x00\x1000Fai con comodo allora!")
          		}
          	}
          }

          void entrypoint_117_11() {
/*<213>*/ 	start()
/*<211>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*<216>*/ 		entrypoint_117_12();
          	  case 1:
/*<208>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*<212>*/ 			printf("\x0E\x01\x09\x04\x00\x04Il luogo dove offro la zuppa a <b<Narisha\n>>si trova all'interno di Cumulonembo,\nsu un'isola con un <r<arcobaleno>> eterno.<pling>\n\x0E\x01\x09\x04\x00\x700Non è difficile trovarlo!\nBuona fortuna!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf("\x0E\x01\x09\x04\x0F\x90DEhi! Ma come ti è saltato in mente di\nrimangiarti la parola dopo tutta\nla fatica che ho fatto per preparare\nquella zuppa?\n\x0E\x01\x09\x04\n\x00Quel tuo robot me l'ha riportata qui!\n[1]Mi spiace[2]Riprovo")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf("\x0E\x01\x09\x04\x0D\x900Va bene, ne farò dell'altra.\nMa solo perché è per Narisha!")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf("\x0E\x01\x09\x04\x00\x900Aspetta qui!\nNon vedo l'ora di mettermi all'opera!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 224, 'param3': 6}
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 548, 'param3': 6}
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf("\x0E\x01\x09\x04\x0B\x1009Ed eccola qui!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Sono anni che preparo la <r<zuppa\ndi zucca>>, ma questa è la migliore\nche abbia mai fatto!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf("\x0E\x01\x12\x04\x00\x01Mio signore.\nChiamerò il robot.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 337, 'param3': 6}
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 341, 'param3': 6}
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf("\x0E\x01\x12\x04\x00dAdorata signorina Faaaih!\nEccomi! Bzzz!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf("\x0E\x01\x12\x04\x00dSembra che dovrò portare qualcosa di\nmolto pesante stavolta!\n\n\nMa non c'è problema! Bzzz!\nAspetterò fuori. Ti porterò qualsiasi\ncosa ovunque ogni volta che vorrai!\nBzzz!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x04Il luogo dove offro la zuppa a <b<Narisha\n>>si trova all'interno di Cumulonembo,\nsu un'isola con un <r<arcobaleno>> eterno.<pling>\n\x0E\x01\x09\x04\x00\x700Non è difficile trovarlo!\nBuona fortuna!")
/*<210>*/ 					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
/*<385>*/ 					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
/*<467>*/ 					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<232>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
          					goto flw_462
          				}
          			  case 1:
/*<521>*/ 				switch (scene_flags[33 /* 0x5 02 */]) {
          				  case 0:
/*<203>*/ 					printf("\x0E\x01\x09\x04\x00\x01Che succede?\nHai l'aria di uno che ha\ndei grattacapi.\n[1]Ehm...[2-]Dici?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf("\x0E\x01\x09\x04\x0D\xD04<b<Narisha>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\n\x0E\x01\x09\x04\x00\x700Lo conosco bene, ma non ho\nsentito di nessun problema...\n\n\n\x0E\x01\x09\x04\x08\x700Ogni anno gli offro una enorme terrina\npiena di <r<zuppa di zucca>>!\n\n\nMa questa grossa nube, Cumulonembo,\nnon mi ha permesso di offrirgliela\nquest'anno. Mi spiace tanto...")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf("\x0E\x01\x09\x04\x0D\xD08Davvero?\nTu porteresti la mia zuppa a <b<Narisha>>?\n\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í E come credi di riuscire a\npenetrare in quell'immensa nube?\n\n\n\x0E\x01\x09\x04\x0B\x1000Comunque, per Narisha preparerò\nla miglior zuppa di zucca che abbia\nmai fatto!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf("\x0E\x01\x09\x04\x00\x05Devo essermi sbagliato!\nAllora, prego! Accomodati e\nmettiti a tuo agio.")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf("\x0E\x01\x09\x04\x00\x04Sono contento che tu\nstia bene. Che ne dici di\naltro lavoro per ripagarmi\nil lampadario?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf("\x0E\x01\x09\x04\x00\x01Benvenuto alla locanda preferita\ndai cavalieri: la taverna delle zucche!\n\n\nSolo qui puoi gustare la mia\nspeciale zuppa di zucca!\n\n\nMa a giudicare dal tuo aspetto,\nqualcosa non va...\n[1]Ehm...[2-]Dici?")
          					goto flw_204
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_46() {
/*<399>*/ 	start()
/*<403>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<404>*/ 		printf("Oh... sono senza speranze...\nPerché mi sono innamorato?")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf("<b<Pico>> è proprio bravo ad\naggiustare le cose.\n\n\nÈ la persona più adatta per\nriparare il mulino di Oltrenuvola.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf("È da un po' che non incontro\n<b<Prunello >>al <b<bazar>>...\nPeccato. È un indovino\ndavvero bravo...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf("<b<Pepa>> ha molto da fare.\nConosci qualcuno che\npossa aiutarla a scavare?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf("Hai visto la collezione di piante\ndel <b<maestro Asio Otus>>?\n\n\nChissà se ultimamente ha\nscoperto delle nuove specie...")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf("Sai per caso come se la passa <b<Dodo>>?\n\n\n\nHa lavorato sodo per costruire\nun posto dove tutti possano\ngiocare alla roulette.")
          						  case 1:
/*<416>*/ 							printf("Non credevo che qualcuno avesse il\ncoraggio di lanciarsi nel cielo sopra\nalla taverna delle zucche...\n\n\nDicono che, quando sei in caduta\nlibera, appaia un animale colorato.\n\n\nChissà se poi succede\nqualcosa di interessante...")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_29() {
/*<476>*/ 	start()
/*<486>*/ 	set_camera(31, 0)
/*<477>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 485, 'param3': 15}
/*<485>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 26, 'next': 478, 'param3': 14}
/*<478>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 483, 'param3': 16}
/*<483>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<482>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Devi andare a parlare con\nmio padre!\n\n\n\x0E\x01\x09\x04\x1A1A\x800Sarà molto arrabbiato!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Salve! Questa è la taverna\ndelle zucche. Qui serviamo una\nzuppa di zucca squisita!\n\n\x0E\x01\x09\x04\x1A1A\x800Non dovrai fare altro che\nmetterti comodo e rilassarti!")
          		goto flw_480
          	}
          }

          void entrypoint_117_12() {
/*<215>*/ 	start()
          	goto flw_520
          }

          void entrypoint_117_47() {
/*<405>*/ 	start()
/*<407>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<408>*/ 		printf("Sì? Qualcosa non va?")
          	  case 1:
/*<406>*/ 		printf("Sciocco! Loro vengono sempre di notte!")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Così mi fai paura! \nVuoi terrorizzarmi a morte?! \n\n\n\x0E\x01\x09\x04\n\x700Cosa volevi?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf("\x0E\x01\x09\x04\x00\x04Che il lampadario sia tanto grosso\nva bene, non dico di no... ma mi pare\nun po' abbagliante, ecco tutto!")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x0B\xC04Hai spostato la lapide?!\n\n\n\n\x0E\x01\x09\x04\n\xF00Hai visto il mostro?\nNon era spaventoso?\n\n\nNon mi inganni, lo so che\nti sei spaventato a morte!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf("\x0E\x01\x09\x04\x00\x01Cosa c'è? Cosa non hai capito?\n[1]Sera?[2]Cimitero?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Dunque, se vuoi che scenda\nla <r<sera>>, torna a Oltrenuvola\ne <g<dormi in un letto>>.\n\nOltrenuvola di sera cambia\nmoltissimo, sai?\n\n\n\x0E\x01\x09\x04\n\xF00Anzi, forse sarebbe meglio che tu\nnon ti avventurassi... o potresti\npentirtene! E non venire a piangere\nda me, poi!")
          						  case 1:
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Ho <r<colpito la lapide più\nvicina all'albero >>al cimitero\ne quella si è illuminata!\n\nPoi, ho <r<spinto la lapide >>e\nla porta del capanno si\nè aperta! È allora che l'ho\nvisto! Un mostro nel capanno!\n\x0E\x01\x09\x04\n\xF00Se vuoi vederlo anche tu,\nnon sarò io a impedirtelo.\nIo però non c'entro niente\nse ti capita qualcosa, OK?")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x0B\x704Il mostro di Oltrenuvola!\nMi credi, vero?\n\n\nMa è più di un mostro, è un\ndemone! Nessuno che l'abbia\nincontrato è sopravvissuto!\n\n\x0E\x01\x09\x04\x0B\x700Che? Cosa dici?\nNon l'hai visto?\n[1]No[2-]Niente")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf("\x0E\x01\x09\x04\n\xF00B\x2010beh... l'ho visto!\nSono qui a raccontarlo solo\nperché sono riuscito a fuggire\nper il rotto della cuffia!\n\x0E\x01\x09\x04\x0B\x700Nessun altro ce l'avrebbe fatta!")
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x0B\x700Comunque, io l'ho visto e\nnon c'è nessuno che me\nlo toglie dalla testa.\n\nÈ successo mentre camminavo\nvicino all'albero nel cimitero\n<r<di notte>>...\n\nHo visto che il mostro <r<ha colpito la\nlapide vicino all'albero>> e la lapide\nsi è illuminata!\n\nHa <r<spinto quella lapide >>e la porta\ndel capanno si è aperta!\nPoi il demone è entrato nel capanno\ne ha chiuso piano la porta dietro di sé.\n\x0E\x01\x09\x04\x0B\x700È stato terribile, te l'assicuro!\nNon andare mai al\n<r<cimitero di notte>>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf("Non interrompermi mentre\nracconto la mia storia!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ci credi, vero?\n[1]A cosa?[2]Sì[3-]No")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x0B\x703C'è un demone terribile che vive a\nOltrenuvola!\nC'è mancato un pelo che mi mangiasse!\n\n\x0E\x01\x09\x04\x0B\x700Forse tu sei ben allenato, ma devi\ncomunque stare attento!")
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x0B\xE04Così, così!\nSei proprio un bravo ragazzo!")
          				  case 2:
/*< 61>*/ 					printf("\x0E\x01\x09\x04\n\xF03Ehi.<pause14>.<pause14>.<pause14>\nMa cos'hanno nella zucca\ni giovani d'oggi?")
          				}
          			}
          		  case 1:
          			goto flw_56
          		}
          	  case 1:
          		goto flw_56
          	}
          }

          void entrypoint_117_13() {
/*<285>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\x08Beh, OK! Grazie tante, gentile\n<pause0A>signor <pause0A>uomo <pause0A>talpa<pause0A>!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf("\x0E\x01\x09\x04\x00\x01Wow, da quanto tempo non sentivo\nla voce di Pepa!\nCanta così bene da innamorarsene!")
          	  case 1:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x01Lo sapevi?\n<b<Pepa>> a volte sale sul palco\ne canta una canzone o due!\n\n\x0E\x01\x09\x04\x09\x700Oh, se solo riuscissi a trovare\nqualcuno per l'accompagnamento\nmusicale! Pepa canta così bene!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf("\x0E\x01\x09\x04\x00\x04Lo sapevo! Non ho mai sentito\nnessuno cantare meglio di Pepa!\nNon è neanche paragonabile alla\nterribile voce di mia moglie!")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Così mi fai paura! \nVuoi terrorizzarmi a morte?! \n\n\n\x0E\x01\x09\x04\n\x700Cosa volevi?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf("\x0E\x01\x09\x04\x00\x04Pepa canta divinamente<pause0A>.<pause0A>.<pause0A>.\n\n\n\nLa persona che l'accompagnava con\nuno strumento ha deciso di andarsene.\nQuanto vorrei che Pepa tornasse\na cantare!")
          			  case 1:
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x04Non dovresti andartene\nin giro di notte a Oltrenuvola!\nCi sono cose spaventose, lo sai?\n\nSe vuoi parlare ancora con me,\ntorna durante il giorno!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf("\x0E\x01\x09\x04\x00\x05Ma! Tu... Cioè...\nVa bene. Suppongo di poterci\nalmeno provare!")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x09Che ne dici?")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CDMa cosa stai combinando,\nzucca vuota?!\n\n\n\x0E\x01\x08\x02ÍVieni qui immediatamente!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\x09Oh uaoh! Guarda qui!\nSei straordinario!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf("Ehi! Non crederai certo che ti lasci\nandar via così dopo quello che hai fatto\nal mio lampadario!")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ohoho...\nPosso assicurarti che è stato\nuno scherzo!\n\nScavare questa terra è un gioco\nda ragazzi per un Mogma!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf("Ehi! Non crederai certo che ti lasci\nandar via così dopo quello che hai fatto\nal mio lampadario!")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x00\nPuoi farlo di nuovo?\nTi prego! Ti prego! Ti prego!")
          }

          void entrypoint_117_01() {
          	start()
/*< 82>*/ 	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          	  case 0:
/*< 93>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          			  case 0:
/*< 95>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 96>*/ 					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          						  case 0:
/*<506>*/ 							switch (temp_flags[17 /* 0x3 02 */]) {
          							  case 0:
/*<100>*/ 								printf("\x0E\x01\x09\x04\x13\x808È come avere cento braccianti\nal proprio servizio!\n\n\nSono davvero felice che sia qui\na darmi una mano!")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf("\x0E\x01\x09\x04\x13\x808Da quando l'uomo talpa è qui, lavorare\nnel campo è diventato un sogno!\n\n\nAdesso potremo far crescere\nmolte più zucche!")
/*<511>*/ 									zone_temp_flags[7 /* 0x1 80 */] = true;
          									goto flw_388
          								}
          							}
          						  case 1:
/*<607>*/ 							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          							  case 0:
/*<608>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          							  case 1:
/*<598>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 234, 'param3': 31}
/*<234>*/ 								printf("\x0E\x01\x09\x04\x0B\xE0FCredi che quella persona possa\nvenire presto, vero?")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf("Il <pling><r<rilevatore>> non è impostato per\nindividuare la persona cercata\nda questa ragazza.\n\nDesiderate impostare il <pling><r<rilevatore >>per\nla ricerca di <r<qualcuno che possa arare\n>>per la ragazza?\n[1]Sì[2-]Non ora")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\n\n\n\nIl <pling><r<rilevatore>> è stato impostato per\nindividuare la persona che la\nragazza sta cercando.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nAnnullerò la vostra richiesta di\nreimpostare il <pling>rilevatore.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ehi! Grazie ancora per avermi aiutata\na portare quelle zucche quella volta.\nOra siamo pronti per piantarne altre!\n\n\x0E\x01\x09\x04\x01\x100<pause1E>Però arare il campo per la semina\n\x0E\x01\x09\x04\x0B\xE00da sola è faticoso.\n\n\n\x0E\x01\x09\x04\x07\x700Conosci qualcuno che mi\npossa aiutare?\n[1]Sì[2-]No")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf("\x0E\x01\x09\x04\x07\x809Davvero?\nPotrei chiedergli di aiutarmi!\n\n\n\x0E\x01\x09\x04\x01\x700Se incontri questo qualcuno,\npotresti portarmelo qui al più\npresto, per favore?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf("Probabilità che questa richiesta possa\nessere correlata alle <y<gemme di\ngratitudine>>: 90%.\n\nImposterò il vostro <pling><r<rilevatore >>per\ncercare qualcuno che possa arare\nper la ragazza.\n\nTuttavia, nel caso in cui sia in corso\nla ricerca di altri oggetti, la loro\nrilevazione sarà compromessa.\n\nVolete impostare il rilevatore per la\nricerca di <r<qualcuno che possa\narare per la ragazza>>?\n[1]Sì[2-]Non ora")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nImposto come obiettivo della ricerca\nl'<r<individuo in grado di coltivare un\ncampo>>.")
/*<565>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<566>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<567>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<568>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<569>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<570>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<574>*/ 								open_dowsing_wheel(15)
          								flw_572:
/*<572>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 571, 'param3': 36}
/*<571>*/ 								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<597>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 573, 'param3': 16}
/*<573>*/ 								printf("\x0E\x01\x09\x04\x01\x70FSpero che tu non abbia accennato a\nqualcun altro solo per confortarmi.\n\n\n\x0E\x01\x09\x04\x07\x700Però sono fiduciosa. Resterò qui ad\naspettare che questa persona arrivi!")
          							  case 1:
/*<596>*/ 								printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore.\nNel caso in cui vogliate impostare il\nrilevatore, rivolgetevi a questa\npersona.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Oh, avanti!\nVuoi dire che non t'importa di una\ndolce donzella come me che\ndeve arare un campo da sola?\nCredevo fossi un gentiluomo!")
          						}
          					}
          				  case 1:
          					flw_387:
/*<387>*/ 					entrypoint_117_25();
          				}
          			  case 1:
          				goto flw_387
          			}
          		  case 1:
          			goto flw_387
          		}
          	  case 1:
/*< 84>*/ 		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          		  case 0:
          			goto flw_34
          		  case 1:
/*<540>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*< 85>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?\n\n\x0E\x01\x09\x04\x01\x700Oh, giusto... <pause1E>papà ha detto che ha\ndell'altro lavoro per te.\n\n\n\x0E\x01\x09\x04\x07\x700Perché non vai a parlare con lui?")
          			  case 1:
/*<541>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?\n\n\x0E\x01\x09\x04\x01\x700A proposito, è giunto il momento\ndi raccogliere le zucche...<pause1E>\n\n\n\x0E\x01\x09\x04\x07\x700Da sola non riesco proprio\na portarle, sai?")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf("\x0E\x01\x09\x04\x00\x0COh sì! Via!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 361, 'param3': 6}
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf("\x0E\x01\x09\x04\x13\x809Lo sapevo! Sei riuscito a\nportarle tutte!\n\n\n\x0E\x01\x09\x04\x01\x700Questo significa che il tuo lavoro\nè finito!\n\n\n\x0E\x01\x09\x04\x19\x800Ti<pause0F> ringrazio<pause0F> davvero<pause0F> tanto<pause0F>!")
          	  case 1:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh no! Ti sono cadute!\nChe cosa devo fare con te?\n\n\n\x0E\x01\x09\x04\x07\x700Puoi provare di nuovo, se pensi\ndi potercela fare!")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 368, 'param3': 6}
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x01\x1611Oh no! Ti sono cadute!\nChe cosa devo fare con te?\n\n\n\x0E\x01\x09\x04\x07\x700Puoi provare di nuovo, se pensi\ndi potercela fare!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x10\x1604Ma guarda cos'hai fatto!\nTe l'avevo detto, io!\nHo cercato di impedirtelo...\n\n\x0E\x01\x09\x04\x1A\x1600Non è colpa mia se mio padre\nti farà una bella lavata di capo!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ciao! Mio padre mi ha detto che\ndevi ripagare il lampadario.\n\n\n\x0E\x01\x09\x04\x1A\x800Non sarà facile, ma puoi farcela!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x1A\x1000Che?! È accaduto qualcosa\na Narisha?\n\n\nOra che me ne parli, papà aveva\nl'abitudine di regalare della zuppa\ndi zucca a Narisha. Dovresti\nparlare con lui.")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x10\x1604Ma guarda cos'hai fatto!\nTe l'avevo detto, io!\nHo cercato di impedirtelo...\n\n\x0E\x01\x09\x04\x1A\x1600Non è colpa mia se mio padre\nti farà una bella lavata di capo!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salve! Da come sei vestito direi che\nsei un cavaliere di Oltrenuvola!\n\n\n\x0E\x01\x09\x04\x1A\x800Mettiti comodo!\n\n\n\n\x0E\x01\x09\x04\x0D\x700Hai notato le rupie sul lampadario?\n\n\n\n\x0E\x01\x09\x04\x10\x00Qualunque cosa tu faccia, non farlo\ncadere! Basta urtare qualcosa per\nfar cadere quello che c'è sopra...\n\n\n\x0E\x01\x09\x04\x1A\x1600Ma... non \x0E\x01\x06\x02\xFCCDpensare nemmeno\n\x0E\x01\x06\x02Ídi provarci!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf("\x0E\x01\x09\x04\x00\x01Salve!\n\n\n\nBenvenuto alla taverna delle\nzucche! Accomodati pure!\n<pause1E>Tutto bene? Sembri frustrato.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 374, 'param3': 6}
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf("Ho portato il vecchio Mogma!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Uhm... Credevo fosse una buona\nidea, considerato lo strumento\nche hai con te...\n\n\x0E\x01\x09\x04\x01\x1600Non credo che ai clienti\nsia piaciuto...")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Mi pare che in un modo o nell'altro\nl'esibizione sia riuscita, ma...\n\n\n\x0E\x01\x09\x04\x01\x1600Francamente, ecco, mi aspettavo\ndi meglio.")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf("\x0E\x01\x09\x04\x16\x1309Wow! Sei un musicista\nstraordinario! Credo di averti\nsottovalutato!\n\n\x0E\x01\x09\x04\x07\x700Spero che ci saranno altre\noccasioni per suonare per i clienti!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x15\xD0ASei stato straordinario!\nLa vera star della\nnostra esibizione!\n\n\x0E\x01\x09\x04\x07\x800Sono la tua prima ammiratrice,\nnon vedo l'ora di sentirti\nsuonare di nuovo!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 381, 'param3': 6}
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf("Salutami Faih!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf("\x0E\x01\x09\x04\n\x90DChe cosa?!\nQuella musica orribile\nha rovinato persino l'esibizione\ndi Pepa!\n\x0E\x01\x09\x04\x0D\x00Ascoltami bene: non ho intenzione\ndi pagarti per una roba simile!")
          		  case 1:
/*<600>*/ 			printf("\x0E\x01\x09\x04\x00\x10Uhmmm... Non mi sembra che suoni\nmolto bene... Dovresti migliorare!\nPer un'esecuzione del genere non posso\npagarti alcun compenso!")
          		  case 2:
/*<333>*/ 			printf("\x0E\x01\x09\x04\x00\x0ENon era male.\nAnche se suonando meglio\npotresti stupire Pepa.\n\n\x0E\x01\x09\x04\x0E\x700Eccoti <r<20 rupie >>per la tua\nperformance!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CPer tutte le zucche, Link!\nÈ stata un'esibizione fantastica!\n\x0E\x01\x09\x04\x0C\x700Ecco qui il tuo compenso: <r<50 rupie>>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf("\x0E\x01\x09\x04\x0F\xA0DMa che succede?!\nTu questa la chiami musica?\n\n\n\x0E\x01\x09\x04\n\x900E non guardarmi così!\nL'esibizione è stata pessima!\nDovrai fare di meglio e ripetere\nancora una volta!")
          		  case 1:
/*<601>*/ 			printf("\x0E\x01\x09\x04\x00\x10Uhmmm... Come esecuzione non era\nproprio perfetta, anzi direi del tutto\ninsoddisfacente... Ma è la tua prima\nvolta, quindi te la passo per buona!")
          			flw_258:
/*<258>*/ 			printf("\x0E\x01\x09\x04\x0B\x700Immagino che adesso non\nlavorerai più per me!\nHai fatto un ottimo lavoro!\n\n\x0E\x01\x09\x04\x0E\x1100Ho deciso di comprare un\nnuovo lampadario!\n\n\n\x0E\x01\x09\x04\x0D\x700Comunque, poiché hai fatto\ndavvero un lavoro eccellente, ritengo\nche meriti una ricompensa.\nEcco, prendi!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf("\x0E\x01\x09\x04\x01\x700Puoi passare più tardi.\nMa stavolta come cliente!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf("\x0E\x01\x09\x04\x00\x0ENon male davvero!\nDirei che sei abbastanza bravo!")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CSei stato straordinario!\nMi sono quasi commosso! Non\ncredevo suonassi così bene.")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf("\x0E\x01\x09\x04\x03\x80COh, no. Hai combinato un disastro...\n\n\n\n\x0E\x01\x09\x04\x00\x100Scommetto che ora sei nei guai.")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ehi Link!\nSe hai così tanti insetti da non saper\nche farne, puoi darli a me!\n\n\x0E\x01\x09\x04\x12\x00Potresti portarmeli nella mia stanza\nla sera.")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf("\x0E\x01\x09\x04\x12\x01Se passerai attraverso quelle rocce,\nvolare sarà ancora più elettrizzante.\n\n\n\x0E\x01\x09\x04\x03\x104Però stai attento a non sbatterci\ncontro... quella non è proprio una\nesperienza gradevole. Eh eh eh!")
          				  case 1:
/*<580>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ciao, Link.\nVolevo dirti una cosa...\n\n\nMentre volavi, avrai senz'altro notato\nle <r<rocce con un buco in mezzo>>,\nnon è così?\n\nSi dice che dentro quelle rocce ci\nsia un potere misterioso: se ci passi\nattraverso, il tuo solcanubi sfreccerà\nvelocissimo, ma solo <r<per poco tempo>>.\n\x0E\x01\x09\x04\x12\x00I cavalieri più esperti usano quelle\nrocce per volare nel Cielo più\nrapidamente.\n")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00Non credevo di incontrarti.\nMa forse ti stai chiedendo\ncosa ci faccio qui.\n[1]Sì...[2]No")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf("\x0E\x01\x09\x04\x03\x104Forse te l'ho già detto, ma io\nadoro gli insetti.\n\n\nPer questo sono qui, per catturarne\nqualcuno. \n\n\n\x0E\x01\x09\x04\x04\x100Anche tu potresti, se avessi\ncon te un retino. Eh eh.\n\n\nSe non ne hai uno puoi sempre\ncomprarlo alla bottega di Terry.\n\n\n\x0E\x01\x09\x04\x12\x100Probabilmente Terry sta\nsorvolando Oltrenuvola.")
          				  case 1:
/*<447>*/ 					printf("\x0E\x01\x09\x04\x04\x805No?\n\n\n\n\x0E\x01\x09\x04\x04\x100Lo sapevo che non eri un appassionato\ndi insetti come me!")
          				}
          			}
          		}
          	}
          }

