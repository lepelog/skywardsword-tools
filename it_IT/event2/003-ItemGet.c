          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf("")
/*<  7>*/ 	give_item(62 0x3E);
          }

          void entrypoint_003_028() {
/*<118>*/ 	start()
/*<148>*/ 	check_item_flag(505, 2)
/*<149>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 27>*/ 		check_item_flag(505, 3)
/*< 28>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 4}) {
          		  case 0:
/*< 24>*/ 			check_item_flag(505, 4)
/*< 25>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 2}) {
          			  case 0:
/*< 21>*/ 				check_item_flag(505, 5)
/*< 22>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 0}) {
          				  case 0:
/*<151>*/ 					printf("Hai ottenuto tutti i <y<frammenti di chiave>>!\nAdesso puoi aprire la porta del santuario.\n\n\nTorna in fretta sulla cima del vulcano e\nvai a cercare Zelda che è stata condotta\nall'interno del santuario!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("Hai ottenuto un <y<frammento di chiave>>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare nel\nsantuario.\nTrova l'<r<ultimo >>per completare la chiave!")
          				}
          			  case 1:
/*< 26>*/ 				printf("Hai ottenuto un <y<frammento di chiave>>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare nel\nsantuario.\nTrovane altri <r<due>> per completare\nla chiave!")
          			}
          		  case 1:
/*< 29>*/ 			printf("Hai ottenuto un <y<frammento di chiave>>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare\nnel santuario.\nOra non ti resta che trovare gli altri <r<tre>>!")
          		}
          	  case 1:
/*<150>*/ 		printf("Hai ottenuto un <y<frammento di chiave>>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare\nnel santuario.\nOra non ti resta che trovare gli\naltri <r<quattro>>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("Hai ottenuto la <y<spada da allenamento>>!\nGli studenti della scuola la usano per\nfare pratica. Premi (1) per accedere\nall\x2019inventario.\x0E\x01\x11\x02\x4CD")
/*<383>*/ 	story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */] = true;
/*<569>*/ 	story_flags[571 /* us: 805A9B18 0x04, jp: 805ACD98 0x04 */] = true;
          }

          void entrypoint_003_097() {
/*<223>*/ 	start()
/*<578>*/ 	story_flags[730 /* us: 805A9B27 0x04, jp: 805ACDA7 0x04 */] = true;
/*<221>*/ 	check_item_flag(95, 1)
/*<222>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*<224>*/ 		check_item_flag(96, 1)
/*<225>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*<582>*/ 			printf("Hai ottenuto la <y+<Triforza della Saggezza>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("Hai ottenuto la <y+<Triforza della Saggezza>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<537>*/ 			printf("Trova l'<r<ultima>> Triforza!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("Hai ottenuto la <y+<Triforza della Saggezza>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<536>*/ 			printf("Trova le altre <r<due >>Triforze!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("Hai ottenuto l'<y<amuleto demoniaco>>!\nFa apparire rupie e tesori più spesso, ma\nnon potrai aprire la tua borsa a causa di\nuna maledizione!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<268>*/ 		printf("Hai ottenuto lo <y<scudo di ferro rinforzato>>!\nQuesto modello è il più resistente tra gli\nscudi di ferro!")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("Hai ottenuto un <y<cristallo demoniaco>>!\nÈ il cuore di un demone cristallizzato,\nestremamente raro in questo stato.")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf("")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf("Hai ottenuto tutte le <y<lacrime di Nayru>>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*<447>*/ 		printf("Hai ottenuto una <y<lacrima di Nayru>>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <r<90 secondi>>. Raccogline <r<15\n>>per completare la prova!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf("")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf("")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf("Hai ottenuto la <y<chiavenigma d'oro>>!\nÈ un artefatto dalla forma molto\nparticolare e ornato da misteriosi\nmotivi.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("Hai ottenuto la <y<spada della Dea>>!\nLa sua lama emana una luce divina.\n\n\nConserva le memorie delle battaglie\npassate. Rivolgila verso il cielo affinché la\nlama possa assorbirle. <pling><r<Il potere celeste ha\nraggiunto il culmine della forza!>>")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("Hai ottenuto la <y<spada della Dea>>!\nÈ una spada misteriosa intrisa\ndi luce divina.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("Hai ottenuto la <y<carta nautica del passato>>!\nRisale all'epoca in cui questo deserto era\nun mare.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("Hai ottenuto la <y<fionda multipla>>!\nOra puoi colpire un'area maggiore con un\nsolo attacco. Tieni premuto (A) per\npotenziare il colpo.")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("Hai ottenuto lo <y<scudo sacro>>!\nIl suo sacro potere gli permette di\nautoripararsi. Inoltre, è in grado di far\nfronte a maledizoni, elettricità e fuoco!")
          		  case 1:
/*<673>*/ 			printf("Hai ottenuto lo <y<scudo sacro>>!\nIl suo sacro potere gli permette di\n<r<autoripararsi>>.\n\nHa una scarsa resistenza e si rompe\nfacilmente, ma è in grado di far fronte a\nmaledizioni, elettricità e fuoco!")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("Hai ottenuto una <y<piuma azzurra>>!\nAppartiene a un uccellino azzurro\nestremamente raro, le cui piume sono\ninestimabili.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf("")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf("Hai ottenuto tutte le <y<lacrime sacre>>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*<442>*/ 		printf("Hai ottenuto una <y<lacrima sacra>>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <r<90 secondi>>. Raccogline <r<15\n>>per completare la prova!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf("")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf("")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf("Hai ottenuto un <y<frutto di luce>>!\nÈ un frutto misterioso che, con fasci di\nluce, indica le posizioni delle lacrime per\n<r<30 secondi>>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("Hai ottenuto una <y<scaldacuore Super+>>!\nQuesta pozione non solo <r<ripristina tutti i\ncuori>>, ma un'ampolla può essere utilizzata\naddirittura <r<due volte>>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("Hai recuperato i <y<guanti Mogma>>!\nSfruttali per esplorare le gallerie\ndei Mogma.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("Hai ottenuto i <y<guanti Mogma>>!\nDi inestimabile valore, sono una rarità\npersino tra gli stessi Mogma!\n\nOra <g<potrai >><g<muoverti <g<anche <g<sottoterra>>.\nCerca le buche in cui puoi intrufolarti!\n")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf("")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<278>*/ 		printf("Hai ottenuto lo <y<scudo sacro resistente>>!\nIl suo potere sacro gli permette di\nautoripararsi e ne incrementa la\nresistenza.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("Hai ottenuto il <y<retino grande>>!\nÈ due volte più grande dell'altro e ti\npermette di catturare anche gli\ninsetti più veloci.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("Hai ottenuto un <y<teschio dorato>>!\nÈ una vera rarità tra i teschi ornamentali.\nBrilla di un insolito colore dorato.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("Hai ricevuto la <y<lettera di Ras>>!\nSi tratterà di una lettera in cui descrive i\nsuoi pensieri più segreti?\n\nTienila con cura e non usarla come\ncarta igienica!!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("Hai ottenuto l'<y<invincibilina>>!\nÈ una misteriosa pozione che dimezza il\ndanno ricevuto! Il contenuto di un'ampolla\nè efficace per<r< 3 minuti>>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("Hai ottenuto <r<una>> <y<gemma di gratitudine>>!\nÈ un conglomerato di gratitudine\ncristallizzata. Raccogline altre e\nmostrale a <b<Morsego>>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("Hai ottenuto la <y<chiavenigma del drago>>!\nL'artefatto è d'oro scintillante e raffigura\nun drago avvolto in spire.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("Hai recuperato la <y<spada suprema pura>>!\nOra puoi sfogare la tua rabbia affettando\nciò che vuoi e puoi parlare di nuovo con\n <b<<pling>Faih>>.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf("")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf("")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf("")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<277>*/ 		printf("Hai ottenuto lo <y<scudo sacro supremo>>!\nIl suo potere sacro gli permette di\nautoripararsi e ne incrementa\nnotevolmente la resistenza.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>!\nQuesti insetti si radunano in grandi sciami\nsolo una volta ogni dieci anni e distruggono\ncompletamente la vegetazione locale.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>! \nQuesti insetti si radunano in grandi sciami\nsolo una volta ogni dieci anni e distruggono\ncompletamente la vegetazione locale.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("Hai ottenuto le <y<ciglia della Dea>>.\nSi dice che la Dea ne abbia perse\nalcune in tempi remotissimi.\nSi tratta di un tesoro raro!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("Hai ottenuto la <y<gabbietta di Terry>>!\nContiene l'insetto preferito di Terry!\nRiportagliela al più presto.")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf("")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf("")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf("Hai ottenuto l'<y<invincibilina +>>!\nÈ una potente pozione che ti impedisce di\nsubire danni. Il contenuto di un'ampolla è\nefficace per<r< 3 minuti>>.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("Hai recuperato la <y<giara magica>>!\nOra potrai di nuovo generare\nraffiche di vento.")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("Hai ottenuto la <y<giara magica>>!\nÈ un oggetto antico e arcano che può\ngenerare potenti raffiche di vento.\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <r<spostando dal centro>>, premi\n(v) per sistemarlo.\x0E\x01\x11\x02\x9CD")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("Hai ottenuto la <y<chiavenigma antica>>!\nÈ di oro scintillante e ha l'aria di essere\nun componente di qualcosa. Sembra\nricoperta da circuiti.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf("")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf("")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf("Hai ottenuto il <y<portarupie medio>>!\nÈ più capiente del precedente: può\ncontenere <r<500 rupie>>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("Hai ottenuto lo <y<scudo Hylia>>!\nQuesto scudo leggendario è infuso di\npotere eroico. Non cederà sotto alcun\nattacco!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nÈ il più forte tra tutti gli insetti, ma pare\nche strofinandone il carapace lo si possa\nrendere ancora più forte.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nÈ il più forte tra tutti gli insetti, ma pare\nche strofinandone il carapace lo si possa\nrendere ancora più forte.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("Hai ottenuto l'<y<olio rigenerante Super+>>!\nRipristina interamente e <r<in modo\nautomatico>> la resistenza dello scudo e la\nvitalità di <r<8>> cuori. E puoi usarlo <r<2 volte>>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("Hai ottenuto una <s<rupia argento>>!\nVale ben <r<100 rupie>>! Non è un bel gruzzolo?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("Hai ottenuto una <y<pozione levafatica>>!\nIl tuo vigore durerà più a lungo. Il\ncontenuto di un'ampolla è efficace per\n<r<3 minuti>>.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("Hai ottenuto il <y<portarupie grande>>!\nÈ più capiente del precedente:\npuò contenere fino a <r<1000 rupie>>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("Hai ottenuto l'<y<olio rigenerante>>!\nQuesto strano olio ripristina <r<interamente\n>>la resistenza dello scudo e la vitalità di\n<r<4>> cuori.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>!\nDicono che, riscaldandone il veleno, si\npossa ricavare una medicina. Bisogna\nperò stare attenti agli sciami!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>!\nDicono che, riscaldandone il veleno, si\npossa ricavare una medicina. Bisogna\nperò stare attenti agli sciami!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("Hai ottenuto un <y<sonaglino>>!\nÈ un giocattolo per bambini. Chissà chi l'ha\nperduto.")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("Hai ottenuto la <y<zuppa di zucca>>!\nÈ una zuppa calda fatta in casa.\nSi raffredderà tra <r<5 minuti>>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("Hai ottenuto la <y<scaglia del drago d'acqua>>!\nÈ uno dei tre sacri tesori lasciati dalla Dea\ne ti permette di nuotare in apnea e di\neffettuare un turbine sott'acqua.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("Hai ottenuto la <y<mappa>>!\nMostra le stanze che devi ancora visitare\ne l'area nella sua interezza.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("Mostra anche la posizione degli scrigni...\nSarà meglio darci un'occhiata!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("Hai ottenuto una <y+<rupia oro>>!\nVale ben <r<300 rupie>>! Non dirlo a nessuno!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("Hai ottenuto una <y<pozione levafatica +>>!\nQuesta pozione miracolosa dona vigore\ninfinito per un periodo di <r<3 minuti>>.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("Hai ottenuto l'<y<olio rigenerante +>>!\nQuesto strano olio ripristina\n<r<automaticamente >>la resistenza dello\nscudo e la vitalità di <r<8>> cuori.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nQuesto insetto molto diffuso cattura le\nprede con le sue possenti mandibole.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nQuesto insetto molto diffuso cattura le\nprede con le sue possenti mandibole.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("Hai ottenuto una <y<larva d'ape>>!\nLe larve sono una grande fonte di proteine.\nPotrebbero essere usate per creare\nqualcosa.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf("")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf("")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf("")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf("")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf("Hai ottenuto una <black<baba rupia>>!\nPerdi <r<10>><r< rupie>>! Che peccato!")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("Hai ottenuto il <y<ricettacolo dello spirito>>!\nÈ una pianta misteriosa che rappresenta\nla tua anima, Link!")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("Hai ottenuto dell'<y<ossigeno liquido>>!\nSott'acqua, il tuo ossigeno si consumerà più\nlentamente. Il contenuto di un'ampolla è\nefficace per<r< 3 minuti>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("Hai ottenuto il <y<portarupie gigante>>!\nÈ più capiente del precedente:\npuò contenere <r<5>><r<000 rupie>>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("Hai ottenuto il <y<sacco per semi piccolo>>!\nOra puoi trasportare <r<10>> semi Deku in più.\nPortalo con te quando usi la fionda.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>!\nDicono che questi insetti diventino rossi\nse si nutrono di metallo. Non è difficile\ncatturarli.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>!\nDicono che questi insetti diventino rossi\nse si nutrono di metallo. Non è difficile\ncatturarli.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\xFCD>>!\nQueste piccole piume sono considerate un\noggetto prezioso a Oltrenuvola e, a volte,\npossono tornare utili.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("Hai recuperato il <y<germoglio dell'albero\ndella vita>>! Ci metterebbe troppo a crescere\nin questo posto. Sarà meglio trovare un\nluogo più adatto.")
          	  case 1:
/*<490>*/ 		printf("Hai ottenuto il <y<bulbo dell'albero della\nvita>>! È il bulbo di un albero leggendario\ni cui frutti sembra curino ogni malattia.")
/*<529>*/ 		story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */] = true;
          	}
          }

          void entrypoint_003_052() {
/*< 97>*/ 	start()
/*<415>*/ 	switch (story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */]) {
          	  case 0:
/*<597>*/ 		check_item_flag(105, 1)
/*<598>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 96}) {
          		  case 0:
/*<599>*/ 			printf("Hai recuperato la <y<fionda multipla>>!\nStordisci i tuoi nemici da lontano!")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("Hai recuperato la <y<fionda>>!\nStordisci i tuoi nemici da lontano!")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("Hai ottenuto la <y<fionda>>!\nÈ un'arma a lungo raggio che spara\ndurissimi semi Deku in grado di stordire\ni nemici.\nSe mentre miri, hai la sensazione che il\nmirino si stia <r<spostando dal centro>>, premi\n(v) per sistemarlo.\x0E\x01\x11\x02\x9CD")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("Hai ottenuto <r<cinque >><y<gemme di gratitudine>>!\nSi tratta praticamente di un conglomerato\ndi riconoscenza cristallizzata.\n\nOgni volta che aiuti qualcuno, la sua\ngratitudine darà origine a <r<cinque >>di\nqueste gemme, che riceverai come\nsegno di ringraziamento.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf("")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf("Non c'è niente di utile.")
          	  case 1:
/*<596>*/ 		printf("Non si aprono gli armadi degli altri!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("Hai ottenuto dell'<y<ossigeno liquido +>>!\nQuesta pozione fantastica ti permette di\nnon consumare ossigeno. Il contenuto di\nun'ampolla è efficace per<r< 3 minuti>>.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("Hai ottenuto il <y<portarupie di lusso>>!\nQuesto portarupie lascerebbe a bocca\naperta chiunque. Può contenere ben\n<r<9000 rupie>>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("Hai ottenuto il <y<sacco per semi medio>>!\nOra puoi trasportare <r<2>><r<0>> semi Deku in più.\nPortalo con te quando usi la fionda.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>!\nSi tratta di un tipo di insetto estremamente\ncomune. A volte lo si vede volare in posti\ninsoliti.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>!\nSi tratta di un tipo di insetto estremamente\ncomune. A volte lo si vede volare in posti\ninsoliti.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("Hai ottenuto un <y<rotolacampo>>!\nQuesta pianta potrebbe tornare utile una\nvolta essiccata e indurita.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("Hai ottenuto l'<y<emblema della prova>>!\nL'incisione guiderà l'eroe nel luogo in cui è\nnascosta la Triforza.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("Hai ottenuto il <y<frutto dell'albero della vita>>!\nSi dice che questo frutto leggendario curi\nogni malessere. Portalo al drago del\nfulmine!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("Hai ottenuto il <y<pinzabeo>>!\nCon le sue pinze più grandi può\ntrasportare gli oggetti.\n\nPremi (Z) per osservare dall'alto, in modo\nda lasciar cadere l'oggetto che stai\ntrasportando con precisione.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("Hai ottenuto lo <y<scarabeo>>!\nÈ uno strumento a forma di insetto, dotato\ndi uno straordinario potere e in grado di\nvolare!\nPunta il telecomando Wii <r<verso lo schermo>>\ne lancia lo scarabeo, quando è pronto a\nvolare, premendo (A)!\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <r<spostando dal centro>>, premi\n(v) per sistemarlo.\x0E\x01\x11\x02\x9CD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("Hai ottenuto delle <y<spore scintillanti>>!\nSono generate dai funghi luminosi.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("Hai ottenuto l'<y<arco>>!\nOra puoi colpire un bersaglio da lontano!\nLe sue frecce sono molto insidiose.\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <r<spostando dal centro>>, premi\n(v) per sistemarlo.\x0E\x01\x11\x02\x9CD")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("Hai ottenuto una <y<piccola chiave>>!\nApre una porta bloccata,\nma solo in quest'area!")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("Hai ottenuto l'<y<amuleto dell'insetto>>!\nOra puoi trovare facilmente gli insetti\nsulla mappa. Vai nel luogo segnato con \x0E\x02\x04\x02\x1ACD!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("Hai catturato una <y<fata>>! Il suo potere\nripristina <r<6 cuori>>. Conservala nell'<y<ampolla\n>>e portala con te! Se <r<esaurisci l'energia>>\nuscirà <r<automaticamente >>fuori per aiutarti.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("Hai recuperato la <y<borsa dell'avventuriero>>!\nOh... c'è anche il resto del tuo\nequipaggiamento!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("Hai ottenuto la <y<borsa dell'avventuriero>>!\nÈ un accessorio molto utile in cui riporre\ngli oggetti che ti serviranno per la tua\navventura.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>!\nLe sabbiormiche possono sopravvivere\nnell'arido deserto perché scavano i loro\nformicai presso le sorgenti d'acqua.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>!\nLe sabbiormiche possono sopravvivere\nnell'arido deserto perché scavano i loro\nformicai presso le sorgenti d'acqua.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("Hai ottenuto una <y<coda di lucertola>>!\nÈ la coda di una grossa lucertola con una\npalla chiodata alla fine. Potrebbe tornare\nutile.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("Hai ottenuto il <y<portarupie extra>>!\nAdesso puoi portare <r<300 rupie>> in più.")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("Hai ottenuto il <y<retino>>!\nTi aiuterà a catturare piccoli insetti e\nnon solo... Avvicinati in silenzio e\ncatturali con un colpo deciso!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("Hai ottenuto dell'<y<acqua>>!\nDel tutto ordinaria, è incolore e inodore.\nPotrebbe tornare utile, prima o poi.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("Hai ottenuto una <g+<rupia verde>>!\nVale <r<1 rupia>>, ti conviene raccoglierne\ntante!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("Hai allargato la <y<borsa dell'avventuriero>>!\nOra può contenere <r<un >>altro oggetto!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("Hai ottenuto il <y<sacco per semi grande>>!\nOra puoi trasportare <r<3>><r<0>> semi Deku in più.\nPortalo con te quando usi la fionda.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>!\nSembra che le larve di sabbicala restino\nsottoterra per dieci anni o più. È un insetto\ndifficilissimo da catturare.")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>!\nSembra che le larve di sabbicala restino\nsottoterra per dieci anni o più. È un insetto\ndifficilissimo da catturare.")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("Hai ottenuto del <y<metallo Oldin>>!\nQuesto pezzo di metallo brillante e\nresistente potrebbe avere innumerevoli\nutilizzi.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf("")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf("Hai catturato una <y<fata>>!\nSono creature molto utili poiché\nripristinano <r<6>> cuori! Tuttavia, non hai una\n<y<ampolla >>perciò devi lasciarla andare.")
          	  case 1:
/*<505>*/ 		printf("Hai trovato una <y<fata>>!\nSono creature molto utili poiché\nripristinano <r<6>> cuori!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("Hai ottenuto delle <y<<item37>>>!\nSono spore prelevate da un fungo gigante.\nSono molto efficaci per trattare le\nferite dei solcanubi!")
          	  case 1:
/*< 36>*/ 		printf("Hai ottenuto delle <y<spore di fungo>>!\nSono spore provenienti da un fungo\ngigante. Potrebbero tornare utili.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf("")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf("Hai recuperato gli <y<artigli>>!\nOra puoi di nuovo raggiungere luoghi\ndistanti.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("Hai ottenuto gli <y<artigli>>! Ora puoi\nraggiungere luoghi più lontani.\nÈ uno dei tre tesori della Dea.\n\nAggancia un <r<bersaglio>> o l'<r<edera>> con gli\nartigli dotati di catene retrattili e verrai\ntrasportato direttamente in quel punto!\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <r<spostando dal centro>>, premi\n(v) per sistemarlo.\x0E\x01\x11\x02\x9CD")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("Hai trovato una <b+<rupia blu>>!\nVale <r<5>> <r<rupie>>. Mettila nel portarupie.")
          	  case 1:
/*< 84>*/ 		printf("Hai ottenuto una <b+<rupia blu>>!\nVale <r<5>> <r<rupie>>. La fortuna ti sorride!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("Hai ottenuto l'<y<amuleto della vita>>!\nSe lo porti con te, la vitalità massima\naumenta di un cuore. Indispensabile nei\nmomenti di maggior bisogno.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("Hai ottenuto la <y<faretra piccola>>!\nOra puoi trasportare <r<5>> frecce in più.\nPortala con te quando usi l'arco.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>!\nQuesto insetto possiede degli\nammalianti occhi composti e delle\ngraziose ali trasparenti come il vetro!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>!\nQuesto insetto possiede degli\nammalianti occhi composti e delle\ngraziose ali trasparenti come il vetro!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("Hai ottenuto un <y<fiore antico>>!\nSi dice che questo fiore sbocciasse nel\npassato. È splendido e brilla al buio.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("Hai ottenuto i <y<talpoguanti>>!\nTi saranno utili per scavare.\nProva a utilizzarli premendo (A) quando\nvedi qualcosa di sospetto nel terreno.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("Hai ottenuto la <y<statuetta>>!\nSimboleggia la tua vittoria nella gara di\noggi. Zelda sarà orgogliosa di te!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("Hai ottenuto una <r+<rupia rossa>>!\nVale <r<20>> <r<rupie>>. Le cose vanno\nproprio bene, che fortuna!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("Hai ottenuto l'<y<arco di ferro>>!\nQuesto modello è adatto ad arcieri esperti\ned è più potente del tuo precedente arco.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("Hai ottenuto la <y<faretra media>>!\nOra puoi trasportare <r<10>> frecce in più.\nPortala con te quando usi l'arco.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("Hai ottenuto una <y<magatama ambrata>>!\nÈ un prezioso oggetto color ambra\nche si trova in terra un po' ovunque.\nNessuno sa perché abbia questa forma.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf("")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf("Hai ottenuto <r<5>> <y<semi Deku>>!\nSono dei piccoli proiettili per la fionda.\nCerca di non restare a corto di munizioni.")
          	  case 1:
/*<398>*/ 		printf("")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf("")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf("La <y+<Triforza >>è completa!\nAdesso il desiderio di Zelda di vedere\nl'\x201C<r<annientamento>>\x201D di <b<Mortipher>> potrà\nessere esaudito.")
/*<540>*/ 	story_flags[645 /* us: 805A9B1D 0x40, jp: 805ACD9D 0x40 */] = true;
/*<583>*/ 	story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */] = true;
          }

          void entrypoint_003_074() {
/*<155>*/ 	start()
/*<675>*/ 	scene_flags[11 'Faron: Skyview Temple'][119 /* 0xF 80 */] = true;
/*<600>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<676>*/ 	switch (story_flags[65 /* us: 805A9ADF 0x10, jp: 805ACD5F 0x10 */]) {
          	  case 0:
          		flw_156:
/*<156>*/ 		printf("Hai ottenuto dell'<y<acqua sacra>>!\nPuò sembrare comune acqua, ma la sua\npurezza le conferisce un grande potere.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("Hai ottenuto dell'<y<acqua sacra>>!\nQuest'acqua è così pura da poter guarire le\nferite del drago d'acqua. Possiede poteri\nassenti nell'acqua comune.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("Hai ottenuto l'<y<arco sacro>>!\nGrazie alla preghiera della Dea, possiede\nun potere sacro poderoso contro i mostri!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<262>*/ 		printf("Hai ottenuto lo <y<scudo di legno>>!\nÈ leggero e facile da usare. Tuttavia, può\nrompersi o prendere fuoco!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("Hai ottenuto la <y<faretra grande>>!\nOra puoi trasportare <r<15>> frecce in più.\nPortala con te quando usi l'arco.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>!\nQuesto piccolo insetto trasporta sempre\nuna palla di... qualcosa. Vederlo portare\nin giro il suo cibo ispira simpatia.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>!\nQuesto piccolo insetto trasporta sempre\nuna palla di... qualcosa. Vederlo portare\nin giro il suo cibo ispira simpatia.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("Hai ottenuto una <y<magatama scura>>!\nSimile alla magatama ambrata unicamente\nnella forma. La puoi trovare solo in \ndeterminati luoghi.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("Hai ottenuto <y<5 bombe>>!\nLanciale o falle rotolare per far saltare\nin aria anche le cose più dure. E, quando le\ntrovi, non dimenticare di farne scorta.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("Hai ottenuto un <y<cuore>>!\nIntriso di energia vitale,\nrigenera di <r<un>> cuore.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("Hai recuperato il <y<portabombe>>!\nChe notizia esplosiva!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("Hai ricevuto il <y<portabombe>>!\nEsprime tutta la generosità di <b<Ferrinio>>.\nFanne buon uso!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("Hai ottenuto il <y<portabombe>>!\nOra puoi portare i fiori bomba con te ed\nesplorare luoghi prima inaccessibili.\n<b<Ferrinio>> potrebbe prestartelo!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("Hai ricevuto il <y<pinzabeo>>!\nCon le sue pinze più grandi può\ntrasportare gli oggetti.\n\nPremi (Z) per osservare dall'alto, in modo\nda lasciar cadere l'oggetto che stai\ntrasportando con precisione.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<261>*/ 		printf("Hai ottenuto lo <y<scudo di legno resistente>>!\nQuesto modello in legno è leggero, ma più\nresistente del precedente scudo di legno.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("Hai ottenuto il <y<portabombe piccolo>>!\nOra puoi trasportare <r<5>> bombe in più.\nPortalo con te quando usi le bombe.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>!\nQuesto insetto piace molto ai bambini\ndi Oltrenuvola. Però, è meglio fare\nattenzione alle sue mandibole!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>!\nQuesto insetto piace molto ai bambini\ndi Oltrenuvola. Però, è meglio fare\nattenzione alle sue mandibole!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("Hai ottenuto una <y<gelatina spettrale>>!\nL'aspetto non è dei migliori, ma è fatta di\nun materiale utilizzabile in svariati modi.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf("")
          	  case 1:
/*<456>*/ 		printf("")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf("Hai appreso la <y<Melodia della Dea>>!\nÈ una misteriosa melodia che si tramanda\ndai tempi antichi.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("Hai ottenuto <y<10 bombe>>!\nLanciale o falle rotolare per farle\nesplodere. Mettile nel portabombe!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf("")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf("Hai ottenuto una <y<freccia usata>>!\nPuoi utilizzarla col tuo arco. Le frecce\nsono molto utili, non restarne a corto!")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("Hai ottenuto un <y<portacuore>>!\nLa vitalità aumenterà di <r<un cuore >>e\nsarà interamente ripristinata!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("Hai ottenuto il <y<turboscarabeo>>!\nQuesto modello è più veloce dello scarabeo.\nA tavoletta!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("Hai ottenuto l'<y<amuleto del cuore>>!\nPortalo con te e troverai cuori anche nella\n<r<modalità eroica>>. Cresceranno anche i\ntulicuori. Ottimo cardiotonico!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("Hai ottenuto l'<y<amuleto del cuore>>!\nPortalo con te e i cuori appariranno più\nspesso. Perfetto, se ti sta a cuore la salute!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<260>*/ 		printf("Hai ottenuto lo <y<scudo di legno rinforzato>>!\nQuesto modello in legno è leggero, ma è\nil più resistente tra gli scudi di legno.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("Hai ottenuto il <y<portabombe medio>>!\nOra puoi trasportare <r<10>> bombe in più.\nPortalo con te quando usi le bombe.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("Hai ottenuto <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>!\nÈ uno degli insetti volanti più rari e\npredilige i luoghi bui.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("Hai catturato <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>! \nÈ uno degli insetti volanti più rari e\npredilige i luoghi bui.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf("")
          	  case 1:
/*<461>*/ 		printf("")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf("")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf("Hai ottenuto un <y<levafatica>>!\nÈ un frutto misterioso, che rigenera il tuo\nvigore.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("Hai ottenuto la <y<chiavenigma sacra>>!\nÈ fatta di legno e la circonda un'aura\ndi sacralità. Assomiglia alla statua di\npietra che si trova al piano superiore.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("Hai ottenuto <y<10 frecce>>!\nPuoi scoccarle dal tuo arco. Ne hai un\nnumero limitato, fanne buon uso!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("Hai ottenuto lo <y<scarabeo potenziato>>!\nQuesto modello può volare più a lungo\ndello scarabeo.")
          }

          void entrypoint_003_094() {
/*<204>*/ 	start()
/*<205>*/ 	check_item_flag(489, 1)
/*<206>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          	  case 0:
/*<201>*/ 		check_item_flag(489, 2)
/*<202>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 12}) {
          		  case 0:
/*<198>*/ 			check_item_flag(489, 3)
/*<199>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<208>*/ 				printf("Hai ottenuto un <y<frammento di cuore>>!\nTrovane quattro e la vitalità aumenterà di\nun cuore. Te ne manca ancora <r<uno>>!")
          			  case 1:
/*<200>*/ 				printf("Hai ottenuto un <y<frammento di cuore>>!\nTrovane quattro e la vitalità aumenterà di\nun cuore. Te ne mancano altri <r<due>>!")
          			}
          		  case 1:
/*<203>*/ 			printf("Hai ottenuto un <y<frammento di cuore>>!\nTrovane quattro e la vitalità aumenterà di\nun cuore. Te ne mancano altri <r<tre>>!")
          		}
          	  case 1:
/*<207>*/ 		printf("Hai ottenuto un <y<frammento di cuore>>!\nAdesso hai un portacuore completo. La\nvitalità è aumentata di un cuore!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("Hai ottenuto l'<y<amuleto della rupia>>!\nPortalo con te e le rupie appariranno più\nspesso. Perfetto, se hai le mani bucate!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<270>*/ 		printf("Hai ottenuto lo <y<scudo di ferro>>!\nQuesto scudo non brucia e non si rompe\nfacilmente, ma occhio alle scosse\nelettriche!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("Hai ottenuto il <y<portabombe grande>>!\nOra puoi trasportare <r<15>> bombe in più.\nPortalo con te quando usi le bombe.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("Hai ottenuto un'<y<ampolla>>!\nPuoi metterci dentro diverse cose.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("Hai ottenuto un <y<artiglio di mostro>>!\nSembra l'artiglio perso da un demone. Ha\nl'aria di essere particolarmente affilato!")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("Hai ottenuto <r<10>> <y<semi Deku>>!\nSono dei piccoli proiettili per la fionda.\nCerca di non restare a corto di munizioni.")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("Hai raccolto tutte le<y< <y<lacrime di Farore<y<>>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*< 45>*/ 		printf("Hai ottenuto una <y<lacrima di Farore>>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <r<90 secondi>>. Raccogline <r<15\n>>per completare la prova!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("Hai ottenuto la <y<chiavenigma arcana>>!\nÈ composta da alcuni cubetti di cristallo\nche rilucono debolmente.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("Hai ottenuto una <y<scaldacuore>>!\nSe portata nella borsa, potrà essere\nusata per ripristinare <r<8 cuori>>.")
          }

          void entrypoint_003_095() {
/*<211>*/ 	start()
/*<576>*/ 	story_flags[729 /* us: 805A9B27 0x02, jp: 805ACDA7 0x02 */] = true;
/*<209>*/ 	check_item_flag(96, 1)
/*<210>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*<212>*/ 		check_item_flag(97, 1)
/*<213>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          		  case 0:
/*<580>*/ 			printf("Hai ottenuto la <y+<Triforza del Coraggio>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("Hai ottenuto la <y+<Triforza del Coraggio>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<532>*/ 			printf("Trova l'<r<ultima>> Triforza!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("Hai ottenuto la <y+<Triforza del Coraggio>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<531>*/ 			printf("Trova le altre <r<due >>Triforze!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("Hai ottenuto l'<y<amuleto del tesoro>>!\nPortalo con te e i tesori appariranno più\nspesso. Il compagno ideale per una caccia\nal tesoro!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("Hai recuperato la <y<frusta>>!\nSchiocca! Schiocca!")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("Hai ottenuto la <y<frusta>>!\nAgita il telecomando Wii per farla\nschioccare.\n\nSe vedi qualcosa di interessante dove non\npuoi arrivare, inquadralo con (Z) e agita il\ntelecomando per provare a raggiungerlo!\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("Hai ottenuto un <y<corno di mostro>>!\nÈ ricavato dal corno di un mostro. Può\nrivelarsi molto utile come materiale grezzo\ngrazie alla sua durezza.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf("")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf("")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf("")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf("Hai ottenuto la <y<chiavenigma tentacolare>>!\nÈ un artefatto dalla forma bizzarra,\nornato da curiose ventose.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("Hai ottenuto una <y<scaldacuore +>>!\nÈ una rielaborazione della scaldacuore.\nQuesta versione avanzata <r<ripristina tutti\ni cuori>>.")
          }

          void entrypoint_003_096() {
/*<217>*/ 	start()
/*<577>*/ 	story_flags[728 /* us: 805A9B27 0x01, jp: 805ACDA7 0x01 */] = true;
/*<215>*/ 	check_item_flag(95, 1)
/*<216>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*<218>*/ 		check_item_flag(97, 1)
/*<219>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          		  case 0:
/*<581>*/ 			printf("Hai ottenuto la <y+<Triforza della Forza>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("Hai ottenuto la <y+<Triforza della Forza>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<535>*/ 			printf("Trova l'<r<ultima>> Triforza!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("Hai ottenuto la <y+<Triforza della Forza>>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <r<potere universale >>vengano esauditi.")
/*<534>*/ 			printf("Trova le altre <r<due >>Triforze!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("Hai ottenuto l'<y<amuleto della durata>>!\nPortalo con te e prolungherà l'effetto di\nuna pozione. Naturalmente, devi avere\nanche la pozione.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<269>*/ 		printf("Hai ottenuto lo <y<scudo di ferro resistente>>! \nQuesto modello è più resistente del\nnormale scudo di ferro!")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("Hai ottenuto i <y<termorecchini>>!\nSono uno dei tre sacri tesori lasciati dalla\nDea, ti permettono di sopportare\ntemperature altissime.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("Hai ottenuto un <y<teschio ornamentale>>!\nÈ l'effigie di un teschio, l'emblema degli\nelettroboblin.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf("")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf("Hai ottenuto tutte le <y<lacrime di Din>>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*<437>*/ 		printf("Hai ottenuto una <y<lacrima di Din>>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <r<90 secondi>>. Raccogline <r<15 >>per\ncompletare la prova!")
          	}
          }

