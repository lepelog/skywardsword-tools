          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00111153>Aaaaaah! Lo hai fatto!\nAdesso ti becchi una bella sgridata!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x00000001>Quindi grazie al tuo lavoro qui hanno\npotuto mettere il lampadario, eh?\n\n\n<0x10009:0x00000300>Non è che stai cercando di farti bello\nagli occhi di Pepa?!")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00000001>Parlare di mostri e demoni...\ntutte cialtronate!\n\n\n<0x10009:0x00000300>Secondo me quel tipo vuole\nsolo attirare l'attenzione!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000001>Ehi, senti questa!\n\n\n\nQuesto tipo seduto al tavolo dice di\naver visto un demone...\n\n\n<0x10009:0x000a0300>Non farà mai colpo su Pepa\ncon storielle del genere!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00111104>Tu non ci credi ai demoni, vero?\n\n\n\n<0x10009:0x000a0300>Aspetta un attimo!\nNon starai pensando di provarci\nanche tu con Pepa?!")
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
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070803>Sono felice che tu mi abbia presentato\nquesta tua conoscenza! Mi ha aiutato\nmolto! Ho un bel po' di lavoro per lui.\n<0x10009:0x00130800>Ti <pause 5>ringrazio <pause 5>davvero <pause 5>tanto<pause 5>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000008>Stai indietro! Ti faccio vedere io\ncome si fa!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf(/* textboxtype: 1, unk: 1, line: 179 */ "<0x10009:0x00000004>Allora, cosa vuoi fare?\n[1-]Suono[2-]Prendo la\nzuppa[3]Niente")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "<0x10009:0x000e1000>Bene, allora! Tu e Pepa potreste\nintrattenere i nostri clienti!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf(/* textboxtype: 1, unk: 0, line: 178 */ "<0x10009:0x000c0700>Mi spiace, Pepa si esibisce solo di sera!\nTorna più tardi!")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>Vuoi un po' della mia\nzuppa? Allora ti piace, non è così?\n\n\nUna porzione costa <color red<10 rupie>coloroff>.\n[1-]Va bene[2]No, grazie")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "La zuppa è molto più buona se bevuta\ncalda. Tra 5 minuti sarà fredda.")
          					  case 1:
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>Non hai un'ampolla vuota?\nSe vuoi bere della zuppa\nte ne servirà una!\n\nTorna dopo essertene procurata\nuna e ti darò la zuppa!")
          					}
          				  case 1:
/*<319>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x000c0700>Sei a corto di rupie, eh?\nTorna la prossima volta.")
          				}
          			  case 1:
/*<323>*/ 				printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x000d0a00>Forza, deciditi!")
          			}
          		  case 2:
/*<313>*/ 			printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00081000>Ah sì? Beh, se ti va accomodati pure e\nrilassati.\n\n\n<0x10009:0x00000700>Oh, e non scordare di andare a salutare\nPepa!")
          		}
          	  case 1:
/*<309>*/ 		printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00000001>Ciao, <heroname>!\nChe ne pensi del mio\nnuovo lampadario?\n\n<0x10009:0x000b1100>Ti confesso che mi è costato un po'!")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x000d1006>...\nCredi che ci abbia speso troppo?\n\n\n<0x10009:0x00080009>Ma dai! Senza il tuo aiuto non me\nne sarei mai potuto permettere\nuno così fantastico!\n\n<0x10009:0x000c0900>E non distruggere anche questo,\ncapito?")
/*<311>*/ 		printf(/* textboxtype: 1, unk: 1, line: 174 */ "<0x10009:0x00080700>Comunque, che posso fare per te?\nTi mancano forse gli incarichi\nche ti affidavo?\n\n<0x10009:0x000e0700>Ovviamente, stavolta ti pagherò.\nPuoi suonare la lira!\nO forse sei qui per della zuppa?\n[1-]Voglio\nlavoro[2-]Vorrei\ndella zuppa[3]Niente")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00070701>Sai una cosa? Il mio ragazzo mi\naiuterà col campo di zucche!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x1b090702>So cosa intendi!\nIo potrei arare quel campo più\nin fretta di qualunque uomo talpa!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000008>Davvero?!\nQuesto mi rende molto felice!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x1b070705>Ah ah!\nPer Pepa farei qualunque\ncosa! Qualunque!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x1a000009>Oooh! In tal caso accetto la tua offerta\ncon grande piacere!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Vi voglio bene! Siete gentilissimi!<0x10009:0x00070703>")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000009>Meraviglioso! Hai trovato quel\nqualcuno, allora!")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010705>Ma... non è una persona...\n\n\n\n<0x10009:0x00070700>Oh, capisco... Allora la talpa arerà il\ncampo per me?")
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
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00070703>Allora mi aiuterai?\nSapevo di poter contare su di te!\nIn bocca al lupo!\n[1-]Al lavoro[2]Non mi va")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00130809>Grande! Sapevo che non mi\navresti delusa!<0x10005:0x001e0000>")
          					flw_87:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070700>La cosa più importante da ricordare\nmentre le porti è di <color red<camminare\nlentamente>coloroff>.\n\nSe le zucche pendono a destra, vai a\ndestra. Se le zucche pendono a\nsinistra, vai a sinistra. È tutta\nquestione di equilibrio!\n<0x10009:0x00010700>Cerca di mantenere la calma o farai\ncadere le zucche! <pause 20>Buona fortuna!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00011606>Davvero?\nPensavo che ci avresti aiutato!")
          						  case 1:
/*<514>*/ 							printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00011611>Davvero? Sei sempre così noioso?")
          						}
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00011606>Davvero? Lo dirò a mio padre!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070808>Spero di poter contare ancora su di te\nper raccogliere le zucche.\n<0x10006:0xfbcd>Mio bel<0x10006:0x00cd> cavaliere!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010700>Ma certo! Ecco il mio salvatore!\nChe ne dici di guadagnare qualcosa\ncon del lavoro onesto?\n\n<0x10009:0x00070700>Avrò bisogno di nuovo delle tue\ncapacità. Mi aiuterai? Ti pagherò!\n[1-]Sì[2]No")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00070703>Mettiamoci all'opera. Ti mostrerò\ndove portare le zucche!")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "Assicurati di portare le zucche\nfino al capanno!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Ora che la raccolta delle zucche è\nfinita, non mi resta che piantarne\nancora. Ma prima dovrò arare il\ncampo! Vediamo...\nDove posso trovare qualcuno bravo\na farlo?")
/*<396>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00010700>Oh, un'altra cosa. Solo un favore.\nSai, non sono riuscita a portare da sola\ntutte le zucche... <0x10009:0x00070700>Credi di potermi\naiutare ancora a portarle al capanno?\nTi pagherò!\n[1-]Va bene[2]No, grazie")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Hai cambiato idea? Hai deciso di\naiutarmi con le zucche?\n[1-]Sì[2]No")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010701>Dunque il tuo prossimo lavoro è deciso!\n<color red<Darai una mano>coloroff><color red< a raccogliere\nle zucche>coloroff>.\n\n<0x10009:0x00070700>Sai, per me è un sollievo. Non immagini\nquanto siano pesanti!\n\n\n<0x10009:0x00011600>Oh... Pensi che non sarà così difficile\ntrasportarle?\n\n\n<0x10009:0x00010700>Eh eh... Perché allora non rendiamo\nla cosa più interessante? Vediamo se\nriesci a <color red<portare 5 zucche >coloroff>alla volta!\n\n<0x10009:0x00071600>Ti do un consiglio: trasportale\npiano o le farai cadere tutte.\nE ora, porta un po' di zucche!\n[1-]Al lavoro![2]Non ora")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00130809>Sapevo che saresti riuscito a portarle\ntutte! Sei un tipo su cui si può\ncontare!\n<0x10009:0x00070800>Eccoti 50 rupie!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00070800>Grazie<pause 15> mille<pause 15>! Torna pure quando vuoi!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130809>Lo sapevo! Sei riuscito a\nportarle tutte!\n\n\n<0x10009:0x00010700>Questo significa che il tuo lavoro\nè finito!\n\n\n<0x10009:0x00190800>Ti<pause 15> ringrazio<pause 15> davvero<pause 15> tanto<pause 15>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh no! Ti sono cadute!\nChe cosa devo fare con te?\n\n\n<0x10009:0x00070700>Puoi provare di nuovo, se pensi\ndi potercela fare!")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00000006>Ohohoho... Questo è un ottimo\nmetodo per fare un po'\ndi esercizio!\n\n<0x10009:0x000c0d00>E sai una cosa? La mia stanchezza\nsvanisce ogni volta che guardo quella\nragazza!\n\n<0x10009:0x00010900>Un secondo<pause 10>.<pause 10>.<pause 10>.<pause 10> vedi anche tu come\nmi guarda?\n\n\n<0x10009:0x000c0d00>Credo che abbia un debole per me!\n<0x10009:0x00090d0b>Domani lavorerò con ancora più lena!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Devo occuparmi del campo tutto il\ngiorno?! Non starai mica dicendo\nsul serio? \n\nMi hai portato fin qui solo per questo?\nNon prendermi in giro dai...")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>Vuoi un po' della mia\nzuppa? Allora ti piace, non è così?\n\n\nUna porzione costa <color red<10 rupie>coloroff>.\n[1-]Va bene[2]No, grazie")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "Finalmente! Ecco qui.")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "La zuppa è molto più buona se bevuta\ncalda. Tra 5 minuti sarà fredda.")
          				  case 1:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>Non hai un'ampolla vuota?\nSe vuoi bere della zuppa\nte ne servirà una!\n\nTorna dopo essertene procurata\nuna e ti darò la zuppa!")
          				}
          			  case 1:
/*<114>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x000c0700>Sei a corto di rupie, eh?\nTorna la prossima volta.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00100705>Certo, certo...\nMa qui non c'è solo la zuppa!\nPuoi incontrare varie persone\ne anche rilassarti.\nPerò mettiti nella zucca di non creare\nproblemi e di non rompere niente.\n\n\n<0x10009:0x00080700>Soprattutto il mio lampadario!\nMe lo sono fatto costruire su richiesta.\nPer me è inestimabile.\n\n<0x10009:0x00000900>Se ti pesco a farlo oscillare saranno\nguai, sono stato chiaro?")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00100905>Capisco. Dovrai lavorare per me per\nripagare il lampadario.\n\n\n<0x10009:0x00000700>Torna più tardi!")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00100905>Capisco. Dovrai lavorare per me per\nripagare il lampadario.\n\n\n<0x10009:0x00000700>Torna più tardi!")
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
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>Spero che tu non abbia accennato a\nqualcun altro solo per confortarmi.\n\n\n<0x10009:0x00070700>Però sono fiduciosa. Resterò qui ad\naspettare che questa persona arrivi!")
          			  case 1:
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Ora che la raccolta delle zucche è\nfinita, non mi resta che piantarne\nancora. Ma prima dovrò arare il\ncampo! Vediamo...\nDove posso trovare qualcuno bravo\na farlo?")
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00010701>Hai intenzione di dare una\nmano con le zucche?\n\n\n<0x10009:0x00070700>Anche se è un po' tardi per\nraccoglierle... Che ne dici di tornare\nquando è giorno? Il campo\nnon se ne va mica!")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?\n\n<0x10009:0x00010700>Oh, giusto... <pause 30>papà ha detto che ha\ndell'altro lavoro per te.\n\n\n<0x10009:0x00070700>Perché non vai a parlare con lui?")
          		  case 1:
/*<424>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?")
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
/*<472>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x1a000001>Devi andare a parlare con\nmio padre!\n\n\n<0x10009:0x1a1a0800>Sarà molto arrabbiato!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x1a000001>Salve! Questa è la taverna\ndelle zucche. Qui serviamo una\nzuppa di zucca squisita!\n\n<0x10009:0x1a1a0800>Non dovrai fare altro che\nmetterti comodo e rilassarti!")
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
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000e>Finalmente hai ripagato il tuo debito.\nHai fatto davvero un buon lavoro!\n\n\nA un certo punto ho pensato\nche volessi mollare, ma hai\ndel sale in zucca, dopotutto!\n\n<0x10009:0x00001000>Torna pure quando vuoi. Come cliente,\ns'intende!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf(/* textboxtype: 1, unk: 1, line: 97 */ "<0x10009:0x00000001>Allora suonerai ancora una\nvolta per la mia Pepa,\nvero?\n[1-]Certo![2-]Spiegami[3]No")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000e>Ottimo!\nCominciamo!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x000d0002>OK! Sarà un successo.\nPepa!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x1a000008>Sì, papà! Che succede?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x000b0b00>Questo giovanotto ti accompagnerà\nmentre canti! Perché non fai sentire a\ntuo padre la tua splendida voce?")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf(/* textboxtype: 1, unk: 0, line: 95 */ "Ma certo! Forza, allora!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0000000e>Allora te lo spiego di nuovo.")
          										flw_265:
/*<265>*/ 										printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x00000700>Quando Pepa canta, i clienti\ncominciano a seguire il ritmo\nballando. Tu dovrai seguire quel\nritmo col tuo strumento.\n<0x10009:0x000f0700>I clienti ondeggiano a destra\ne a sinistra: suona il tuo strumento\nseguendo lo stesso ritmo.\n\nNon fare caso ai movimenti che fai per\nsuonare, ma stai attento alla velocità.\nNon va bene se il tuo ritmo è troppo\nveloce o troppo lento!\n<0x10009:0x00080700>Quando i clienti si fermano, quello\nè il momento dell'assolo di Pepa\ne tu puoi suonare come ti pare.\nBasta che tu segua il ritmo!\nTutto chiaro?\n[1-]Sì[2]Ripeti")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf(/* textboxtype: 1, unk: 0, line: 96 */ "Hai scordato cosa ho detto?\nMettitelo nella zucca stavolta!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000004>Nessun problema! Ma sarà meglio\nche aspetti un po', prima di esibirti!")
          									}
          								  case 1:
/*<519>*/ 									printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00000001>Oh, salve di nuovo!\n<pause 30>Non vedi l'ora di suonare\nla tua lira, non è così?\n\nMi spiace, ma qui non si\nsuona di giorno!\nTorna di sera!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>Sei tornato! Bene bene. Che cosa\nposso farti fare?\n\n\n<0x10009:0x000d0700>Oh! Che cos'è quello strano\nstrumento che hai con te?\n\n\n<0x10009:0x00001100>Ah sì?! Scommetto che non sai che\nla mia Pepa è brava a cantare.\nMagari non sembra, ma è così!\n\n<0x10009:0x00000700>Non molto tempo fa cantava per i\nnostri clienti qui!\n\n\n<0x10009:0x00080000>Però poi ha dovuto smettere perché\nè rimasta senza accompagnamento\nstrumentale!\n\nTi andrebbe di suonare un po'\nper accompagnare Pepa\nmentre canta?\n[1-]Certo![2]Non ora")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x0000100e>Ottimo! Lo sapevo che\neri la persona giusta!\n\n\n<0x10009:0x000d0a00>Però devi metterci\nl'impegno necessario.")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>Sei proprio un bel tipo, lo sai?\nAmmetti mai di aver sbagliato?")
          									}
          								  case 1:
/*<518>*/ 									printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>Sei tornato! Vediamo un po'...\nCosa posso farti fare?\n\n\n<0x10009:0x00000700>Oh! Che cos'è quello strano strumento\nche hai con te?\n\n\n<0x10009:0x000b1000>Sì, ho trovato! Ecco il lavoro giusto\nper te.\n\n\n<0x10009:0x00000700>Però, ho bisogno che tu lo faccia di\nsera. Ti dispiace tornare più tardi?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000006>Ancora non ho trovato niente da farti\nfare! Torna più tardi!\n\n\nForse vuoi un po' della mia zuppa di\nzucca? Il mio portafoglio te ne\nsarebbe grato.\n[1-]Va bene[2]No, grazie")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x000b100e>Ottimo lavoro!\nSembra che finalmente tu\nabbia finito di raccogliere le\nzucche!\n<0x10009:0x00000700>Eppure... mi sa che\nancora non hai finito di\nripagare il tuo debito\nper il lampadario!\n<0x10009:0x00080000>Devo pensare a\nqualcos'altro da farti\nfare... torna più tardi.")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 85 */ "Ehi! Ascolta bene quello che dice Pepa\ne aiutala a trasportare le zucche!")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf(/* textboxtype: 1, unk: 0, line: 87 */ "Ricordati, però, che puoi dare\nuna mano con le zucche solo\ndi giorno. Di notte potrebbe\nessere pericoloso!")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf(/* textboxtype: 1, unk: 0, line: 62 */ "Eccoti! Giusto in tempo. Ho un altro\nincarico per te!\n\n\nDovrai <color red<dare una mano a portare le\nzucche>coloroff>, e non voglio sentire lamentele!\n[1-]OK...[2]Non mi va")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00080704>Non sarà difficile per te!\nHai presente il campo di\nzucche di cui si occupa\nmia figlia?\nHo bisogno che tu porti\nle zucche al capanno!\nParlane con <color blue<Pepa>coloroff>.")
/*<133>*/ 											printf(/* textboxtype: 1, unk: 0, line: 87 */ "Ricordati, però, che puoi dare\nuna mano con le zucche solo\ndi giorno. Di notte potrebbe\nessere pericoloso!")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>Sei proprio un bel tipo, lo sai?\nAmmetti mai di aver sbagliato?")
          										}
          									  case 1:
/*< 20>*/ 										printf(/* textboxtype: 1, unk: 0, line: 61 */ "Ottimo! Sei riuscito a consegnare la\nzuppa al primo cavaliere in tempo!\n\n\n<0x10009:0x000c0700>Detrarrò il tuo compenso da ciò che\nmi devi per il lampadario.\n\n\n<0x10009:0x000f0900>Ma non credere che sia finita qui, sai?\n\n\n\nIl tuo prossimo incarico è <color red<dare una\nmano a portare le zucche>coloroff>, e non voglio\nsentire lamentele!\n[1-]OK...[2]Non mi va")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000006>Che c'è ora?\nNon ho ancora deciso cosa\nfarti fare.\n\nIl lampadario non tornerà certo al suo\nposto per magia!\n\n\nChe ne dici di comprare un\npo' della mia zuppa di zucca?\n[1-]Forse...[2]Non ora")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000b100e>Ottimo! Sei riuscito a consegnare la\nzuppa al primo cavaliere!\n\n\nLo detrarrò da ciò che mi devi per\nil lampadario.\n\n\n<0x10009:0x00080700>Ma non credere di aver finito!\nSto ancora pensando a cos'altro\nfarti fare... Ho bisogno di più tempo,\ntorna a trovarmi più tardi.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000001>La zuppa sarà completamente fredda\ntra <color red<5 minuti>coloroff>! Devi sbrigarti se vuoi\nconsegnarla al primo cavaliere\nancora calda!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000008>Cosa ti avevo detto?\nNon lasciare che la zuppa\nsi raffreddi!\n\nChe disastro... Ecco, dell'altra zuppa\ncalda.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf(/* textboxtype: 1, unk: 0, line: 76 */ "Ma dovrai pagarla!\nCosta <color red<10 rupie>coloroff>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0000000d>Che cosa? Non hai 10 rupie?\nUhm... e va bene, ecco qui.\nMa solo per questa volta, intesi?")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000007>Che?\nNon hai più zuppa di zucca?!\n\n\n<0x10009:0x000d0a00>Non dirmi che l'hai bevuta!\n\n\n\nSei proprio uno zuccone.\nEcco, prendine dell'altra.")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000007>Che?\nNon hai più zuppa di zucca calda?\n\n\n<0x10009:0x000d0a00>Non dirmi che l'hai bevuta!\nBeh, pazienza! Vorrà dire che te ne\ndarò altra.")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Oh! Vedo che questa volta ti sei\nportato un'ampolla vuota!")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf(/* textboxtype: 1, unk: 0, line: 69 */ "Così si parla! Eccoti\ndella <color yellow<zuppa di zucca calda>coloroff>!\n\n\n<0x10009:0x00000700>Portala al primo cavaliere.")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00010700>Ah, un'altra cosa...\nIl primo cavaliere odia la zuppa\nfredda!\n\nQuindi dovrai fare in fretta.\n\n\n\nMmh... Credo che dovrai portargliela\n<color red<entro 5 minuti >coloroff>o la zuppa sarà\nfredda!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf(/* textboxtype: 1, unk: 0, line: 67 */ "Pronto a ripagare il mio\nlampadario, zuccone?\n[1-]Va bene[2]Ci penso")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf(/* textboxtype: 1, unk: 0, line: 66 */ "Bene! Chi rompe paga!\nVoglio crederti!\n\n\n<0x10009:0x00000700>Allora cominciamo.\nHo bisogno che tu porti la\nmia zuppa al <color red<primo cavaliere\ndi Oltrenuvola>coloroff>.\n<0x10009:0x00080700>Lui è un mio cliente fisso\ne non può fare a meno della\nmia zuppa quando è al lavoro.\nEbbene?\nSei pronto a portargli un po'\ndella mia zuppa?\n[1-]Sì[2]Non ora")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf(/* textboxtype: 1, unk: 0, line: 78 */ "Cosa?! Non hai un'ampolla vuota?!\n\n\n\nTi servirà se vuoi portare la zuppa!\nVai a procurartene una e torna qui!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x000d0a0d>Ehi, la parola di un uomo\nè sacra! Vorrei che tu\nportassi questa zuppa\nal primo cavaliere.\n[1-]Va bene![2]Non ora")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf(/* textboxtype: 1, unk: 0, line: 71 */ "Cosa?! Hai una bella faccia\ntosta a venire qui, rompere il\nmio meraviglioso lampadario e\nandartene senza pagare i danni!")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 65 */ "Non ci posso credere!\nChe hai fatto, zucca vuota?!\n\n\nIl mio fantastico lampadario\nè completamente distrutto!\n\n\nDovrai lavorare per me per un\nbel po' prima di ripagare tutti\ni danni! Quindi? Accetti o no?\n[1-]OK![2]No")
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
/*<557>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Avanti!\nProva la mia <color red<zuppa di zucca>coloroff>,\nti rimetterà in forze!\n[1-]Assaggio[2]Non ora")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000001>Benvenuto alla taverna delle zucche,\nil miglior ritrovo per cavalieri.\n\n\nNon troverai pietanza più squisita\ndella mia <color red<zuppa di zucca>coloroff> casereccia!\n\n\nPerché non la provi? Non sai che\nti perdi!\n[1-]Assaggio[2]Non ora")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00000001>Se solo Pepa l'avesse chiesto prima a\nme l'avrei aiutata più che volentieri!\nImmagino quanto sia duro coltivare\nun campo di zucche.")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x1a000003>Non l'ho fatto solo perché i clienti\nnon dovrebbero occuparsi\ndel campo di zucche!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x00000002>Ma per me non sarebbe un problema!\nMi darei il doppio da fare di quello\nstrano uomo talpa!")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x1a000009>Oooh! In tal caso accetto la tua offerta\ncon grande piacere!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00090705>Potrei lavorare senza tregua solo\nper quello splendido sorriso!\nAh ah ah!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0, line: 200 */ "<0x10009:0x00000003>Sai, hai fatto davvero un ottimo lavoro\nper noi! Ci sei stato di molto aiuto!\n\n\nDevi tornare più spesso a trovarci,\ncome cliente naturalmente.\n\n\nE se ti va, puoi continuare a lavorare\nper noi come in passato.\nTi pagherò, sai?")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 199 */ "<0x10009:0x00000003>Credi che sia il momento per\nsedersi a fare una pausa?\nNon hai qualcosa da sbrigare?")
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00000003>Ma perché stai seduto tutto il tempo?\n\n\n\n<0x10009:0x000d0700>Beh, immagino che ogni tanto\nci si debba sedere a riflettere!\n<0x10009:0x00001000>Fai con comodo allora!")
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
/*<212>*/ 			printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Il luogo dove offro la zuppa a <color blue<Narisha\n>coloroff>si trova all'interno di Cumulonembo,\nsu un'isola con un <color red<arcobaleno>coloroff> eterno.<sound 4>\n<0x10009:0x00000700>Non è difficile trovarlo!\nBuona fortuna!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x000f090d>Ehi! Ma come ti è saltato in mente di\nrimangiarti la parola dopo tutta\nla fatica che ho fatto per preparare\nquella zuppa?\n<0x10009:0x000a0000>Quel tuo robot me l'ha riportata qui!\n[1-]Mi spiace[2-]Riprovo")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf(/* textboxtype: 1, unk: 0, line: 157 */ "<0x10009:0x000d0900>Va bene, ne farò dell'altra.\nMa solo perché è per Narisha!")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x00000900>Aspetta qui!\nNon vedo l'ora di mettermi all'opera!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					wait_frames(45)
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					wait_frames(10)
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x000b1009>Ed eccola qui!\n\n\n\n<0x10009:0x000f1100>Sono anni che preparo la <color red<zuppa\ndi zucca>coloroff>, ma questa è la migliore\nche abbia mai fatto!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf(/* textboxtype: 2, unk: 0, line: 151 */ "<0x10012:0x00000001>Mio signore.\nChiamerò il robot.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					wait_frames(10)
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					wait_frames(15)
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10012:0x00000064>Adorata signorina Faaaih!\nEccomi! Bzzz!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10012:0x00000064>Sembra che dovrò portare qualcosa di\nmolto pesante stavolta!\n\n\nMa non c'è problema! Bzzz!\nAspetterò fuori. Ti porterò qualsiasi\ncosa ovunque ogni volta che vorrai!\nBzzz!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>Il luogo dove offro la zuppa a <color blue<Narisha\n>coloroff>si trova all'interno di Cumulonembo,\nsu un'isola con un <color red<arcobaleno>coloroff> eterno.<sound 4>\n<0x10009:0x00000700>Non è difficile trovarlo!\nBuona fortuna!")
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
/*<203>*/ 					printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00000001>Che succede?\nHai l'aria di uno che ha\ndei grattacapi.\n[1-]Ehm...[2]Dici?")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf(/* textboxtype: 1, unk: 0, line: 147 */ "<0x10009:0x000d0d04><color blue<Narisha>coloroff><0x10006:0xfbcd>...<0x10006:0x00cd>?\n\n\n\n<0x10009:0x00000700>Lo conosco bene, ma non ho\nsentito di nessun problema...\n\n\n<0x10009:0x00080700>Ogni anno gli offro una enorme terrina\npiena di <color red<zuppa di zucca>coloroff>!\n\n\nMa questa grossa nube, Cumulonembo,\nnon mi ha permesso di offrirgliela\nquest'anno. Mi spiace tanto...")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf(/* textboxtype: 1, unk: 0, line: 148 */ "<0x10009:0x000d0d08>Davvero?\nTu porteresti la mia zuppa a <color blue<Narisha>coloroff>?\n\n\n<0x10009:0x00000700><0x10006:0xfdcd>...<0x10006:0x00cd> E come credi di riuscire a\npenetrare in quell'immensa nube?\n\n\n<0x10009:0x000b1000>Comunque, per Narisha preparerò\nla miglior zuppa di zucca che abbia\nmai fatto!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000005>Devo essermi sbagliato!\nAllora, prego! Accomodati e\nmettiti a tuo agio.")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf(/* textboxtype: 1, unk: 0, line: 145 */ "<0x10009:0x00000004>Sono contento che tu\nstia bene. Che ne dici di\naltro lavoro per ripagarmi\nil lampadario?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "<0x10009:0x00000001>Benvenuto alla locanda preferita\ndai cavalieri: la taverna delle zucche!\n\n\nSolo qui puoi gustare la mia\nspeciale zuppa di zucca!\n\n\nMa a giudicare dal tuo aspetto,\nqualcosa non va...\n[1-]Ehm...[2]Dici?")
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
/*<404>*/ 		printf(/* textboxtype: 1, unk: 0, line: 186 */ "Oh... sono senza speranze...\nPerché mi sono innamorato?")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<color blue<Pico>coloroff> è proprio bravo ad\naggiustare le cose.\n\n\nÈ la persona più adatta per\nriparare il mulino di Oltrenuvola.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf(/* textboxtype: 1, unk: 0, line: 184 */ "È da un po' che non incontro\n<color blue<Prunello >coloroff>al <color blue<bazar>coloroff>...\nPeccato. È un indovino\ndavvero bravo...")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 183 */ "<color blue<Pepa>coloroff> ha molto da fare.\nConosci qualcuno che\npossa aiutarla a scavare?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf(/* textboxtype: 1, unk: 0, line: 182 */ "Hai visto la collezione di piante\ndel <color blue<maestro Asio Otus>coloroff>?\n\n\nChissà se ultimamente ha\nscoperto delle nuove specie...")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf(/* textboxtype: 1, unk: 0, line: 181 */ "Sai per caso come se la passa <color blue<Dodo>coloroff>?\n\n\n\nHa lavorato sodo per costruire\nun posto dove tutti possano\ngiocare alla roulette.")
          						  case 1:
/*<416>*/ 							printf(/* textboxtype: 1, unk: 0, line: 180 */ "Non credevo che qualcuno avesse il\ncoraggio di lanciarsi nel cielo sopra\nalla taverna delle zucche...\n\n\nDicono che, quando sei in caduta\nlibera, appaia un animale colorato.\n\n\nChissà se poi succede\nqualcosa di interessante...")
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
/*<482>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x1a000001>Devi andare a parlare con\nmio padre!\n\n\n<0x10009:0x1a1a0800>Sarà molto arrabbiato!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x1a000001>Salve! Questa è la taverna\ndelle zucche. Qui serviamo una\nzuppa di zucca squisita!\n\n<0x10009:0x1a1a0800>Non dovrai fare altro che\nmetterti comodo e rilassarti!")
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
/*<408>*/ 		printf(/* textboxtype: 1, unk: 0, line: 188 */ "Sì? Qualcosa non va?")
          	  case 1:
/*<406>*/ 		printf(/* textboxtype: 1, unk: 0, line: 187 */ "Sciocco! Loro vengono sempre di notte!")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x000b0704>Così mi fai paura! \nVuoi terrorizzarmi a morte?! \n\n\n<0x10009:0x000a0700>Cosa volevi?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x00000004>Che il lampadario sia tanto grosso\nva bene, non dico di no... ma mi pare\nun po' abbagliante, ecco tutto!")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0c04>Hai spostato la lapide?!\n\n\n\n<0x10009:0x000a0f00>Hai visto il mostro?\nNon era spaventoso?\n\n\nNon mi inganni, lo so che\nti sei spaventato a morte!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x00000001>Cosa c'è? Cosa non hai capito?\n[1-]Sera?[2-]Cimitero?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x000b0704>Dunque, se vuoi che scenda\nla <color red<sera>coloroff>, torna a Oltrenuvola\ne <color green<dormi in un letto>coloroff>.\n\nOltrenuvola di sera cambia\nmoltissimo, sai?\n\n\n<0x10009:0x000a0f00>Anzi, forse sarebbe meglio che tu\nnon ti avventurassi... o potresti\npentirtene! E non venire a piangere\nda me, poi!")
          						  case 1:
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x000b0704>Ho <color red<colpito la lapide più\nvicina all'albero >coloroff>al cimitero\ne quella si è illuminata!\n\nPoi, ho <color red<spinto la lapide >coloroff>e\nla porta del capanno si\nè aperta! È allora che l'ho\nvisto! Un mostro nel capanno!\n<0x10009:0x000a0f00>Se vuoi vederlo anche tu,\nnon sarò io a impedirtelo.\nIo però non c'entro niente\nse ti capita qualcosa, OK?")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x000b0704>Il mostro di Oltrenuvola!\nMi credi, vero?\n\n\nMa è più di un mostro, è un\ndemone! Nessuno che l'abbia\nincontrato è sopravvissuto!\n\n<0x10009:0x000b0700>Che? Cosa dici?\nNon l'hai visto?\n[1-]No[2]Niente")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x000a0f00>B‐beh... l'ho visto!\nSono qui a raccontarlo solo\nperché sono riuscito a fuggire\nper il rotto della cuffia!\n<0x10009:0x000b0700>Nessun altro ce l'avrebbe fatta!")
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000b0700>Comunque, io l'ho visto e\nnon c'è nessuno che me\nlo toglie dalla testa.\n\nÈ successo mentre camminavo\nvicino all'albero nel cimitero\n<color red<di notte>coloroff>...\n\nHo visto che il mostro <color red<ha colpito la\nlapide vicino all'albero>coloroff> e la lapide\nsi è illuminata!\n\nHa <color red<spinto quella lapide >coloroff>e la porta\ndel capanno si è aperta!\nPoi il demone è entrato nel capanno\ne ha chiuso piano la porta dietro di sé.\n<0x10009:0x000b0700>È stato terribile, te l'assicuro!\nNon andare mai al\n<color red<cimitero di notte>coloroff>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 0, line: 123 */ "Non interrompermi mentre\nracconto la mia storia!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x00000001>Ci credi, vero?\n[1-]A cosa?[2-]Sì[3]No")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x000b0703>C'è un demone terribile che vive a\nOltrenuvola!\nC'è mancato un pelo che mi mangiasse!\n\n<0x10009:0x000b0700>Forse tu sei ben allenato, ma devi\ncomunque stare attento!")
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x000b0e04>Così, così!\nSei proprio un bravo ragazzo!")
          				  case 2:
/*< 61>*/ 					printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000a0f03>Ehi.<pause 20>.<pause 20>.<pause 20>\nMa cos'hanno nella zucca\ni giovani d'oggi?")
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
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000008>Beh, OK! Grazie tante, gentile\n<pause 10>signor <pause 10>uomo <pause 10>talpa<pause 10>!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x00000001>Wow, da quanto tempo non sentivo\nla voce di Pepa!\nCanta così bene da innamorarsene!")
          	  case 1:
/*<422>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000001>Lo sapevi?\n<color blue<Pepa>coloroff> a volte sale sul palco\ne canta una canzone o due!\n\n<0x10009:0x00090700>Oh, se solo riuscissi a trovare\nqualcuno per l'accompagnamento\nmusicale! Pepa canta così bene!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000004>Lo sapevo! Non ho mai sentito\nnessuno cantare meglio di Pepa!\nNon è neanche paragonabile alla\nterribile voce di mia moglie!")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x000b0704>Così mi fai paura! \nVuoi terrorizzarmi a morte?! \n\n\n<0x10009:0x000a0700>Cosa volevi?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10009:0x00000004>Pepa canta divinamente<pause 10>.<pause 10>.<pause 10>.\n\n\n\nLa persona che l'accompagnava con\nuno strumento ha deciso di andarsene.\nQuanto vorrei che Pepa tornasse\na cantare!")
          			  case 1:
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000004>Non dovresti andartene\nin giro di notte a Oltrenuvola!\nCi sono cose spaventose, lo sai?\n\nSe vuoi parlare ancora con me,\ntorna durante il giorno!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000005>Ma! Tu... Cioè...\nVa bene. Suppongo di poterci\nalmeno provare!")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00000009>Che ne dici?")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000012><0x10008:0x02cd>Ma cosa stai combinando,\nzucca vuota?!\n\n\n<0x10008:0x00cd>Vieni qui immediatamente!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000009>Oh uaoh! Guarda qui!\nSei straordinario!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Ehi! Non crederai certo che ti lasci\nandar via così dopo quello che hai fatto\nal mio lampadario!")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000006>Ohoho...\nPosso assicurarti che è stato\nuno scherzo!\n\nScavare questa terra è un gioco\nda ragazzi per un Mogma!")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Ehi! Non crederai certo che ti lasci\nandar via così dopo quello che hai fatto\nal mio lampadario!")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Puoi farlo di nuovo?\nTi prego! Ti prego! Ti prego!")
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
/*<100>*/ 								printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00130808>È come avere cento braccianti\nal proprio servizio!\n\n\nSono davvero felice che sia qui\na darmi una mano!")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00130808>Da quando l'uomo talpa è qui, lavorare\nnel campo è diventato un sogno!\n\n\nAdesso potremo far crescere\nmolte più zucche!")
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
/*<234>*/ 								printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000b0e0f>Credi che quella persona possa\nvenire presto, vero?")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf(/* textboxtype: 2, unk: 0, line: 38 */ "Il <sound 4><color red<rilevatore>coloroff> non è impostato per\nindividuare la persona cercata\nda questa ragazza.\n\nDesiderate impostare il <sound 4><color red<rilevatore >coloroff>per\nla ricerca di <color red<qualcuno che possa arare\n>coloroff>per la ragazza?\n[1-]Sì[2]Non ora")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf(/* textboxtype: 2, unk: 0, line: 39 */ "<0x10012:0x00000005>Sì, mio signore.\n\n\n\nIl <sound 4><color red<rilevatore>coloroff> è stato impostato per\nindividuare la persona che la\nragazza sta cercando.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf(/* textboxtype: 2, unk: 0, line: 40 */ "<0x10012:0x00000005>Sì, mio signore.\nAnnullerò la vostra richiesta di\nreimpostare il <sound 4>rilevatore.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Ehi! Grazie ancora per avermi aiutata\na portare quelle zucche quella volta.\nOra siamo pronti per piantarne altre!\n\n<0x10009:0x00010100><pause 30>Però arare il campo per la semina\n<0x10009:0x000b0e00>da sola è faticoso.\n\n\n<0x10009:0x00070700>Conosci qualcuno che mi\npossa aiutare?\n[1-]Sì[2]No")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070809>Davvero?\nPotrei chiedergli di aiutarmi!\n\n\n<0x10009:0x00010700>Se incontri questo qualcuno,\npotresti portarmelo qui al più\npresto, per favore?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf(/* textboxtype: 2, unk: 0, line: 35 */ "Probabilità che questa richiesta possa\nessere correlata alle <color yellow<gemme di\ngratitudine>coloroff>: 90%.\n\nImposterò il vostro <sound 4><color red<rilevatore >coloroff>per\ncercare qualcuno che possa arare\nper la ragazza.\n\nTuttavia, nel caso in cui sia in corso\nla ricerca di altri oggetti, la loro\nrilevazione sarà compromessa.\n\nVolete impostare il rilevatore per la\nricerca di <color red<qualcuno che possa\narare per la ragazza>coloroff>?\n[1-]Sì[2]Non ora")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf(/* textboxtype: 2, unk: 0, line: 37 */ "<0x10012:0x00000005>Sì, mio signore.\nImposto come obiettivo della ricerca\nl'<color red<individuo in grado di coltivare un\ncampo>coloroff>.")
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
/*<573>*/ 								printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>Spero che tu non abbia accennato a\nqualcun altro solo per confortarmi.\n\n\n<0x10009:0x00070700>Però sono fiduciosa. Resterò qui ad\naspettare che questa persona arrivi!")
          							  case 1:
/*<596>*/ 								printf(/* textboxtype: 2, unk: 0, line: 36 */ "<0x10012:0x00000005>Sì, mio signore.\nNel caso in cui vogliate impostare il\nrilevatore, rivolgetevi a questa\npersona.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00011611>Oh, avanti!\nVuoi dire che non t'importa di una\ndolce donzella come me che\ndeve arare un campo da sola?\nCredevo fossi un gentiluomo!")
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
/*< 85>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?\n\n<0x10009:0x00010700>Oh, giusto... <pause 30>papà ha detto che ha\ndell'altro lavoro per te.\n\n\n<0x10009:0x00070700>Perché non vai a parlare con lui?")
          			  case 1:
/*<541>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000001>Oh! Sei il cavaliere che ha rotto il\nnostro lampadario! Lo stai\nancora ripagando?\n\n<0x10009:0x00010700>A proposito, è giunto il momento\ndi raccogliere le zucche...<pause 30>\n\n\n<0x10009:0x00070700>Da sola non riesco proprio\na portarle, sai?")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000c>Oh sì! Via!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	wait_frames(45)
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130809>Lo sapevo! Sei riuscito a\nportarle tutte!\n\n\n<0x10009:0x00010700>Questo significa che il tuo lavoro\nè finito!\n\n\n<0x10009:0x00190800>Ti<pause 15> ringrazio<pause 15> davvero<pause 15> tanto<pause 15>!")
          	  case 1:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh no! Ti sono cadute!\nChe cosa devo fare con te?\n\n\n<0x10009:0x00070700>Puoi provare di nuovo, se pensi\ndi potercela fare!")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	wait_frames(45)
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh no! Ti sono cadute!\nChe cosa devo fare con te?\n\n\n<0x10009:0x00070700>Puoi provare di nuovo, se pensi\ndi potercela fare!")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00101604>Ma guarda cos'hai fatto!\nTe l'avevo detto, io!\nHo cercato di impedirtelo...\n\n<0x10009:0x001a1600>Non è colpa mia se mio padre\nti farà una bella lavata di capo!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000001>Ciao! Mio padre mi ha detto che\ndevi ripagare il lampadario.\n\n\n<0x10009:0x001a0800>Non sarà facile, ma puoi farcela!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x001a1000>Che?! È accaduto qualcosa\na Narisha?\n\n\nOra che me ne parli, papà aveva\nl'abitudine di regalare della zuppa\ndi zucca a Narisha. Dovresti\nparlare con lui.")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00101604>Ma guarda cos'hai fatto!\nTe l'avevo detto, io!\nHo cercato di impedirtelo...\n\n<0x10009:0x001a1600>Non è colpa mia se mio padre\nti farà una bella lavata di capo!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Salve! Da come sei vestito direi che\nsei un cavaliere di Oltrenuvola!\n\n\n<0x10009:0x001a0800>Mettiti comodo!\n\n\n\n<0x10009:0x000d0700>Hai notato le rupie sul lampadario?\n\n\n\n<0x10009:0x00100000>Qualunque cosa tu faccia, non farlo\ncadere! Basta urtare qualcosa per\nfar cadere quello che c'è sopra...\n\n\n<0x10009:0x001a1600>Ma... non <0x10006:0xfccd>pensare nemmeno\n<0x10006:0x00cd>di provarci!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Salve!\n\n\n\nBenvenuto alla taverna delle\nzucche! Accomodati pure!\n<pause 30>Tutto bene? Sembri frustrato.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	wait_frames(45)
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf(/* textboxtype: 1, unk: 0, line: 141 */ "Ho portato il vecchio Mogma!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf(/* textboxtype: 1, unk: 0, line: 158 */ "<0x10009:0x00171411>Uhm... Credevo fosse una buona\nidea, considerato lo strumento\nche hai con te...\n\n<0x10009:0x00011600>Non credo che ai clienti\nsia piaciuto...")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf(/* textboxtype: 1, unk: 0, line: 161 */ "<0x10009:0x00171411>Mi pare che in un modo o nell'altro\nl'esibizione sia riuscita, ma...\n\n\n<0x10009:0x00011600>Francamente, ecco, mi aspettavo\ndi meglio.")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00161309>Wow! Sei un musicista\nstraordinario! Credo di averti\nsottovalutato!\n\n<0x10009:0x00070700>Spero che ci saranno altre\noccasioni per suonare per i clienti!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf(/* textboxtype: 1, unk: 0, line: 160 */ "<0x10009:0x00150d0a>Sei stato straordinario!\nLa vera star della\nnostra esibizione!\n\n<0x10009:0x00070800>Sono la tua prima ammiratrice,\nnon vedo l'ora di sentirti\nsuonare di nuovo!")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	wait_frames(45)
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 142 */ "Salutami Faih!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x000a090d>Che cosa?!\nQuella musica orribile\nha rovinato persino l'esibizione\ndi Pepa!\n<0x10009:0x000d0000>Ascoltami bene: non ho intenzione\ndi pagarti per una roba simile!")
          		  case 1:
/*<600>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "<0x10009:0x00000010>Uhmmm... Non mi sembra che suoni\nmolto bene... Dovresti migliorare!\nPer un'esecuzione del genere non posso\npagarti alcun compenso!")
          		  case 2:
/*<333>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x0000000e>Non era male.\nAnche se suonando meglio\npotresti stupire Pepa.\n\n<0x10009:0x000e0700>Eccoti <color red<20 rupie >coloroff>per la tua\nperformance!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x000b100c>Per tutte le zucche, <heroname>!\nÈ stata un'esibizione fantastica!\n<0x10009:0x000c0700>Ecco qui il tuo compenso: <color red<50 rupie>coloroff>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x000f0a0d>Ma che succede?!\nTu questa la chiami musica?\n\n\n<0x10009:0x000a0900>E non guardarmi così!\nL'esibizione è stata pessima!\nDovrai fare di meglio e ripetere\nancora una volta!")
          		  case 1:
/*<601>*/ 			printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00000010>Uhmmm... Come esecuzione non era\nproprio perfetta, anzi direi del tutto\ninsoddisfacente... Ma è la tua prima\nvolta, quindi te la passo per buona!")
          			flw_258:
/*<258>*/ 			printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x000b0700>Immagino che adesso non\nlavorerai più per me!\nHai fatto un ottimo lavoro!\n\n<0x10009:0x000e1100>Ho deciso di comprare un\nnuovo lampadario!\n\n\n<0x10009:0x000d0700>Comunque, poiché hai fatto\ndavvero un lavoro eccellente, ritengo\nche meriti una ricompensa.\nEcco, prendi!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0, line: 166 */ "<0x10009:0x00010700>Puoi passare più tardi.\nMa stavolta come cliente!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf(/* textboxtype: 1, unk: 0, line: 163 */ "<0x10009:0x0000000e>Non male davvero!\nDirei che sei abbastanza bravo!")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x000b100c>Sei stato straordinario!\nMi sono quasi commosso! Non\ncredevo suonassi così bene.")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0003080c>Oh, no. Hai combinato un disastro...\n\n\n\n<0x10009:0x00000100>Scommetto che ora sei nei guai.")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf(/* textboxtype: 1, unk: 0, line: 193 */ "<0x10009:0x00000001>Ehi <heroname>!\nSe hai così tanti insetti da non saper\nche farne, puoi darli a me!\n\n<0x10009:0x00120000>Potresti portarmeli nella mia stanza\nla sera.")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00120001>Se passerai attraverso quelle rocce,\nvolare sarà ancora più elettrizzante.\n\n\n<0x10009:0x00030104>Però stai attento a non sbatterci\ncontro... quella non è proprio una\nesperienza gradevole. Eh eh eh!")
          				  case 1:
/*<580>*/ 					printf(/* textboxtype: 1, unk: 0, line: 194 */ "<0x10009:0x00000001>Ciao, <heroname>.\nVolevo dirti una cosa...\n\n\nMentre volavi, avrai senz'altro notato\nle <color red<rocce con un buco in mezzo>coloroff>,\nnon è così?\n\nSi dice che dentro quelle rocce ci\nsia un potere misterioso: se ci passi\nattraverso, il tuo solcanubi sfreccerà\nvelocissimo, ma solo <color red<per poco tempo>coloroff>.\n<0x10009:0x00120000>I cavalieri più esperti usano quelle\nrocce per volare nel Cielo più\nrapidamente.\n")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000001>Ehi, <heroname>!\n\n\n\n<0x10009:0x00120000>Non credevo di incontrarti.\nMa forse ti stai chiedendo\ncosa ci faccio qui.\n[1-]Sì...[2-]No")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf(/* textboxtype: 1, unk: 0, line: 190 */ "<0x10009:0x00030104>Forse te l'ho già detto, ma io\nadoro gli insetti.\n\n\nPer questo sono qui, per catturarne\nqualcuno. \n\n\n<0x10009:0x00040100>Anche tu potresti, se avessi\ncon te un retino. Eh eh.\n\n\nSe non ne hai uno puoi sempre\ncomprarlo alla bottega di Terry.\n\n\n<0x10009:0x00120100>Probabilmente Terry sta\nsorvolando Oltrenuvola.")
          				  case 1:
/*<447>*/ 					printf(/* textboxtype: 1, unk: 0, line: 191 */ "<0x10009:0x00040805>No?\n\n\n\n<0x10009:0x00040100>Lo sapevo che non eri un appassionato\ndi insetti come me!")
          				}
          			}
          		}
          	}
          }

