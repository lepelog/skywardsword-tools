          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 5, unk: 1, line: 85 */ "")
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
/*<151>*/ 					printf(/* textboxtype: 5, unk: 1, line: 38 */ "Hai ottenuto tutti i <color yellow<frammenti di chiave>coloroff>!\nAdesso puoi aprire la porta del santuario.\n\n\nTorna in fretta sulla cima del vulcano e\nvai a cercare Zelda che è stata condotta\nall'interno del santuario!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 5, unk: 1, line: 37 */ "Hai ottenuto un <color yellow<frammento di chiave>coloroff>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare nel\nsantuario.\nTrova l'<color red<ultimo >coloroff>per completare la chiave!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1, line: 36 */ "Hai ottenuto un <color yellow<frammento di chiave>coloroff>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare nel\nsantuario.\nTrovane altri <color red<due>coloroff> per completare\nla chiave!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 5, unk: 1, line: 35 */ "Hai ottenuto un <color yellow<frammento di chiave>coloroff>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare\nnel santuario.\nOra non ti resta che trovare gli altri <color red<tre>coloroff>!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 5, unk: 1, line: 34 */ "Hai ottenuto un <color yellow<frammento di chiave>coloroff>!\nÈ uno dei cinque frammenti che\ncompongono la chiave per entrare\nnel santuario.\nOra non ti resta che trovare gli\naltri <color red<quattro>coloroff>!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 5, unk: 1, line: 13 */ "Hai ottenuto la <color yellow<spada da allenamento>coloroff>!\nGli studenti della scuola la usano per\nfare pratica. Premi (1) per accedere\nall’inventario.<0x10011:0x04cd>")
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
/*<582>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Hai ottenuto la <color yellow white<Triforza della Saggezza>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Hai ottenuto la <color yellow white<Triforza della Saggezza>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<537>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Trova l'<color red<ultima>coloroff> Triforza!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Hai ottenuto la <color yellow white<Triforza della Saggezza>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<536>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Trova le altre <color red<due >coloroff>Triforze!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1, line: 138 */ "Hai ottenuto l'<color yellow<amuleto demoniaco>coloroff>!\nFa apparire rupie e tesori più spesso, ma\nnon potrai aprire la tua borsa a causa di\nuna maledizione!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 5, unk: 1, line: 157 */ "Hai ottenuto lo <color yellow<scudo di ferro rinforzato>coloroff>!\nQuesto modello è il più resistente tra gli\nscudi di ferro!")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1, line: 177 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 5, unk: 1, line: 223 */ "Hai ottenuto un <color yellow<cristallo demoniaco>coloroff>!\nÈ il cuore di un demone cristallizzato,\nestremamente raro in questo stato.")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 5, unk: 1, line: 206 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 5, unk: 1, line: 58 */ "Hai ottenuto tutte le <color yellow<lacrime di Nayru>coloroff>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1, line: 57 */ "Hai ottenuto una <color yellow<lacrima di Nayru>coloroff>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <color red<90 secondi>coloroff>. Raccogline <color red<15\n>coloroff>per completare la prova!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1, line: 240 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 5, unk: 1, line: 86 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1, line: 39 */ "Hai ottenuto la <color yellow<chiavenigma d'oro>coloroff>!\nÈ un artefatto dalla forma molto\nparticolare e ornato da misteriosi\nmotivi.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1, line: 15 */ "Hai ottenuto la <color yellow<spada della Dea>coloroff>!\nLa sua lama emana una luce divina.\n\n\nConserva le memorie delle battaglie\npassate. Rivolgila verso il cielo affinché la\nlama possa assorbirle. <sound 4><color red<Il potere celeste ha\nraggiunto il culmine della forza!>coloroff>")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 5, unk: 1, line: 14 */ "Hai ottenuto la <color yellow<spada della Dea>coloroff>!\nÈ una spada misteriosa intrisa\ndi luce divina.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 5, unk: 1, line: 106 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 5, unk: 1, line: 131 */ "Hai ottenuto la <color yellow<carta nautica del passato>coloroff>!\nRisale all'epoca in cui questo deserto era\nun mare.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 5, unk: 1, line: 139 */ "Hai ottenuto la <color yellow<fionda multipla>coloroff>!\nOra puoi colpire un'area maggiore con un\nsolo attacco. Tieni premuto (A) per\npotenziare il colpo.")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1, line: 159 */ "Hai ottenuto lo <color yellow<scudo sacro>coloroff>!\nIl suo sacro potere gli permette di\nautoripararsi. Inoltre, è in grado di far\nfronte a maledizoni, elettricità e fuoco!")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 5, unk: 1, line: 158 */ "Hai ottenuto lo <color yellow<scudo sacro>coloroff>!\nIl suo sacro potere gli permette di\n<color red<autoripararsi>coloroff>.\n\nHa una scarsa resistenza e si rompe\nfacilmente, ma è in grado di far fronte a\nmaledizioni, elettricità e fuoco!")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 5, unk: 1, line: 224 */ "Hai ottenuto una <color yellow<piuma azzurra>coloroff>!\nAppartiene a un uccellino azzurro\nestremamente raro, le cui piume sono\ninestimabili.")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1, line: 207 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1, line: 60 */ "Hai ottenuto tutte le <color yellow<lacrime sacre>coloroff>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 5, unk: 1, line: 59 */ "Hai ottenuto una <color yellow<lacrima sacra>coloroff>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <color red<90 secondi>coloroff>. Raccogline <color red<15\n>coloroff>per completare la prova!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 5, unk: 1, line: 241 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1, line: 87 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 5, unk: 1, line: 61 */ "Hai ottenuto un <color yellow<frutto di luce>coloroff>!\nÈ un frutto misterioso che, con fasci di\nluce, indica le posizioni delle lacrime per\n<color red<30 secondi>coloroff>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 5, unk: 1, line: 16 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 5, unk: 1, line: 107 */ "Hai ottenuto una <color yellow<scaldacuore Super+>coloroff>!\nQuesta pozione non solo <color red<ripristina tutti i\ncuori>coloroff>, ma un'ampolla può essere utilizzata\naddirittura <color red<due volte>coloroff>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 5, unk: 1, line: 76 */ "Hai recuperato i <color yellow<guanti Mogma>coloroff>!\nSfruttali per esplorare le gallerie\ndei Mogma.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1, line: 132 */ "Hai ottenuto i <color yellow<guanti Mogma>coloroff>!\nDi inestimabile valore, sono una rarità\npersino tra gli stessi Mogma!\n\nOra <color green<potrai >coloroff><color green<muoverti <color green<anche <color green<sottoterra>coloroff>.\nCerca le buche in cui puoi intrufolarti!\n")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 5, unk: 1, line: 140 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 5, unk: 1, line: 160 */ "Hai ottenuto lo <color yellow<scudo sacro resistente>coloroff>!\nIl suo potere sacro gli permette di\nautoripararsi e ne incrementa la\nresistenza.")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 5, unk: 1, line: 178 */ "Hai ottenuto il <color yellow<retino grande>coloroff>!\nÈ due volte più grande dell'altro e ti\npermette di catturare anche gli\ninsetti più veloci.")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1, line: 225 */ "Hai ottenuto un <color yellow<teschio dorato>coloroff>!\nÈ una vera rarità tra i teschi ornamentali.\nBrilla di un insolito colore dorato.")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 5, unk: 1, line: 208 */ "Hai ricevuto la <color yellow<lettera di Ras>coloroff>!\nSi tratterà di una lettera in cui descrive i\nsuoi pensieri più segreti?\n\nTienila con cura e non usarla come\ncarta igienica!!")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 5, unk: 1, line: 242 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 5, unk: 1, line: 88 */ "Hai ottenuto l'<color yellow<invincibilina>coloroff>!\nÈ una misteriosa pozione che dimezza il\ndanno ricevuto! Il contenuto di un'ampolla\nè efficace per<color red< 3 minuti>coloroff>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 5, unk: 1, line: 62 */ "Hai ottenuto <color red<una>coloroff> <color yellow<gemma di gratitudine>coloroff>!\nÈ un conglomerato di gratitudine\ncristallizzata. Raccogline altre e\nmostrale a <color blue<Morsego>coloroff>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 5, unk: 1, line: 40 */ "Hai ottenuto la <color yellow<chiavenigma del drago>coloroff>!\nL'artefatto è d'oro scintillante e raffigura\nun drago avvolto in spire.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1, line: 18 */ "Hai recuperato la <color yellow<spada suprema pura>coloroff>!\nOra puoi sfogare la tua rabbia affettando\nciò che vuoi e puoi parlare di nuovo con\n <color blue<<sound 4>Faih>coloroff>.")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 5, unk: 1, line: 17 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1, line: 108 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1, line: 141 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 5, unk: 1, line: 161 */ "Hai ottenuto lo <color yellow<scudo sacro supremo>coloroff>!\nIl suo potere sacro gli permette di\nautoripararsi e ne incrementa\nnotevolmente la resistenza.")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1, line: 180 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nQuesti insetti si radunano in grandi sciami\nsolo una volta ogni dieci anni e distruggono\ncompletamente la vegetazione locale.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 5, unk: 1, line: 179 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>! \nQuesti insetti si radunano in grandi sciami\nsolo una volta ogni dieci anni e distruggono\ncompletamente la vegetazione locale.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 5, unk: 1, line: 226 */ "Hai ottenuto le <color yellow<ciglia della Dea>coloroff>.\nSi dice che la Dea ne abbia perse\nalcune in tempi remotissimi.\nSi tratta di un tesoro raro!")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 5, unk: 1, line: 209 */ "Hai ottenuto la <color yellow<gabbietta di Terry>coloroff>!\nContiene l'insetto preferito di Terry!\nRiportagliela al più presto.")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1, line: 243 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 5, unk: 1, line: 251 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 5, unk: 1, line: 89 */ "Hai ottenuto l'<color yellow<invincibilina +>coloroff>!\nÈ una potente pozione che ti impedisce di\nsubire danni. Il contenuto di un'ampolla è\nefficace per<color red< 3 minuti>coloroff>.")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 5, unk: 1, line: 64 */ "Hai recuperato la <color yellow<giara magica>coloroff>!\nOra potrai di nuovo generare\nraffiche di vento.")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1, line: 63 */ "Hai ottenuto la <color yellow<giara magica>coloroff>!\nÈ un oggetto antico e arcano che può\ngenerare potenti raffiche di vento.\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <color red<spostando dal centro>coloroff>, premi\n(v) per sistemarlo.<0x10011:0x09cd>")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 5, unk: 1, line: 41 */ "Hai ottenuto la <color yellow<chiavenigma antica>coloroff>!\nÈ di oro scintillante e ha l'aria di essere\nun componente di qualcosa. Sembra\nricoperta da circuiti.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 5, unk: 1, line: 19 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 5, unk: 1, line: 109 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 5, unk: 1, line: 142 */ "Hai ottenuto il <color yellow<portarupie medio>coloroff>!\nÈ più capiente del precedente: può\ncontenere <color red<500 rupie>coloroff>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1, line: 162 */ "Hai ottenuto lo <color yellow<scudo Hylia>coloroff>!\nQuesto scudo leggendario è infuso di\npotere eroico. Non cederà sotto alcun\nattacco!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 5, unk: 1, line: 182 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nÈ il più forte tra tutti gli insetti, ma pare\nche strofinandone il carapace lo si possa\nrendere ancora più forte.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 5, unk: 1, line: 181 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nÈ il più forte tra tutti gli insetti, ma pare\nche strofinandone il carapace lo si possa\nrendere ancora più forte.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 5, unk: 1, line: 227 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 5, unk: 1, line: 244 */ "Hai ottenuto l'<color yellow<olio rigenerante Super+>coloroff>!\nRipristina interamente e <color red<in modo\nautomatico>coloroff> la resistenza dello scudo e la\nvitalità di <color red<8>coloroff> cuori. E puoi usarlo <color red<2 volte>coloroff>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1, line: 90 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1, line: 42 */ "Hai ottenuto una <color silver<rupia argento>coloroff>!\nVale ben <color red<100 rupie>coloroff>! Non è un bel gruzzolo?")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 5, unk: 1, line: 20 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 5, unk: 1, line: 110 */ "Hai ottenuto una <color yellow<pozione levafatica>coloroff>!\nIl tuo vigore durerà più a lungo. Il\ncontenuto di un'ampolla è efficace per\n<color red<3 minuti>coloroff>.")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 5, unk: 1, line: 143 */ "Hai ottenuto il <color yellow<portarupie grande>coloroff>!\nÈ più capiente del precedente:\npuò contenere fino a <color red<1000 rupie>coloroff>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 5, unk: 1, line: 163 */ "Hai ottenuto l'<color yellow<olio rigenerante>coloroff>!\nQuesto strano olio ripristina <color red<interamente\n>coloroff>la resistenza dello scudo e la vitalità di\n<color red<4>coloroff> cuori.")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 5, unk: 1, line: 184 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nDicono che, riscaldandone il veleno, si\npossa ricavare una medicina. Bisogna\nperò stare attenti agli sciami!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1, line: 183 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nDicono che, riscaldandone il veleno, si\npossa ricavare una medicina. Bisogna\nperò stare attenti agli sciami!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1, line: 210 */ "Hai ottenuto un <color yellow<sonaglino>coloroff>!\nÈ un giocattolo per bambini. Chissà chi l'ha\nperduto.")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1, line: 228 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 5, unk: 1, line: 245 */ "Hai ottenuto la <color yellow<zuppa di zucca>coloroff>!\nÈ una zuppa calda fatta in casa.\nSi raffredderà tra <color red<5 minuti>coloroff>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 5, unk: 1, line: 91 */ "Hai ottenuto la <color yellow<scaglia del drago d'acqua>coloroff>!\nÈ uno dei tre sacri tesori lasciati dalla Dea\ne ti permette di nuotare in apnea e di\neffettuare un turbine sott'acqua.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 5, unk: 1, line: 65 */ "Hai ottenuto la <color yellow<mappa>coloroff>!\nMostra le stanze che devi ancora visitare\ne l'area nella sua interezza.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1, line: 66 */ "Mostra anche la posizione degli scrigni...\nSarà meglio darci un'occhiata!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 5, unk: 1, line: 43 */ "Hai ottenuto una <color gold<rupia oro>coloroff>!\nVale ben <color red<300 rupie>coloroff>! Non dirlo a nessuno!")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1, line: 21 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1, line: 111 */ "Hai ottenuto una <color yellow<pozione levafatica +>coloroff>!\nQuesta pozione miracolosa dona vigore\ninfinito per un periodo di <color red<3 minuti>coloroff>.")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 5, unk: 1, line: 164 */ "Hai ottenuto l'<color yellow<olio rigenerante +>coloroff>!\nQuesto strano olio ripristina\n<color red<automaticamente >coloroff>la resistenza dello\nscudo e la vitalità di <color red<8>coloroff> cuori.")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1, line: 186 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nQuesto insetto molto diffuso cattura le\nprede con le sue possenti mandibole.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 5, unk: 1, line: 185 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nQuesto insetto molto diffuso cattura le\nprede con le sue possenti mandibole.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 5, unk: 1, line: 211 */ "Hai ottenuto una <color yellow<larva d'ape>coloroff>!\nLe larve sono una grande fonte di proteine.\nPotrebbero essere usate per creare\nqualcosa.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 5, unk: 1, line: 229 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1, line: 246 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 5, unk: 1, line: 92 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 5, unk: 1, line: 67 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 5, unk: 1, line: 44 */ "Hai ottenuto una <color black<baba rupia>coloroff>!\nPerdi <color red<10>coloroff><color red< rupie>coloroff>! Che peccato!")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 5, unk: 1, line: 22 */ "Hai ottenuto il <color yellow<ricettacolo dello spirito>coloroff>!\nÈ una pianta misteriosa che rappresenta\nla tua anima, <heroname>!")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 5, unk: 1, line: 112 */ "Hai ottenuto dell'<color yellow<ossigeno liquido>coloroff>!\nSott'acqua, il tuo ossigeno si consumerà più\nlentamente. Il contenuto di un'ampolla è\nefficace per<color red< 3 minuti>coloroff>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1, line: 144 */ "Hai ottenuto il <color yellow<portarupie gigante>coloroff>!\nÈ più capiente del precedente:\npuò contenere <color red<5>coloroff><color red<000 rupie>coloroff>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1, line: 165 */ "Hai ottenuto il <color yellow<sacco per semi piccolo>coloroff>!\nOra puoi trasportare <color red<10>coloroff> semi Deku in più.\nPortalo con te quando usi la fionda.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 5, unk: 1, line: 188 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>!\nDicono che questi insetti diventino rossi\nse si nutrono di metallo. Non è difficile\ncatturarli.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 5, unk: 1, line: 187 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>!\nDicono che questi insetti diventino rossi\nse si nutrono di metallo. Non è difficile\ncatturarli.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 5, unk: 1, line: 212 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x0fcd>>coloroff>!\nQueste piccole piume sono considerate un\noggetto prezioso a Oltrenuvola e, a volte,\npossono tornare utili.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 5, unk: 1, line: 248 */ "Hai recuperato il <color yellow<germoglio dell'albero\ndella vita>coloroff>! Ci metterebbe troppo a crescere\nin questo posto. Sarà meglio trovare un\nluogo più adatto.")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 5, unk: 1, line: 247 */ "Hai ottenuto il <color yellow<bulbo dell'albero della\nvita>coloroff>! È il bulbo di un albero leggendario\ni cui frutti sembra curino ogni malattia.")
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
/*<599>*/ 			printf(/* textboxtype: 5, unk: 1, line: 70 */ "Hai recuperato la <color yellow<fionda multipla>coloroff>!\nStordisci i tuoi nemici da lontano!")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1, line: 69 */ "Hai recuperato la <color yellow<fionda>coloroff>!\nStordisci i tuoi nemici da lontano!")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 5, unk: 1, line: 68 */ "Hai ottenuto la <color yellow<fionda>coloroff>!\nÈ un'arma a lungo raggio che spara\ndurissimi semi Deku in grado di stordire\ni nemici.\nSe mentre miri, hai la sensazione che il\nmirino si stia <color red<spostando dal centro>coloroff>, premi\n(v) per sistemarlo.<0x10011:0x09cd>")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1, line: 45 */ "Hai ottenuto <color red<cinque >coloroff><color yellow<gemme di gratitudine>coloroff>!\nSi tratta praticamente di un conglomerato\ndi riconoscenza cristallizzata.\n\nOgni volta che aiuti qualcuno, la sua\ngratitudine darà origine a <color red<cinque >coloroff>di\nqueste gemme, che riceverai come\nsegno di ringraziamento.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 5, unk: 1, line: 23 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1, line: 0 */ "Non c'è niente di utile.")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 5, unk: 1, line: 1 */ "Non si aprono gli armadi degli altri!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 5, unk: 1, line: 113 */ "Hai ottenuto dell'<color yellow<ossigeno liquido +>coloroff>!\nQuesta pozione fantastica ti permette di\nnon consumare ossigeno. Il contenuto di\nun'ampolla è efficace per<color red< 3 minuti>coloroff>.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 5, unk: 1, line: 145 */ "Hai ottenuto il <color yellow<portarupie di lusso>coloroff>!\nQuesto portarupie lascerebbe a bocca\naperta chiunque. Può contenere ben\n<color red<9000 rupie>coloroff>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 5, unk: 1, line: 166 */ "Hai ottenuto il <color yellow<sacco per semi medio>coloroff>!\nOra puoi trasportare <color red<2>coloroff><color red<0>coloroff> semi Deku in più.\nPortalo con te quando usi la fionda.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 5, unk: 1, line: 190 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>!\nSi tratta di un tipo di insetto estremamente\ncomune. A volte lo si vede volare in posti\ninsoliti.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1, line: 189 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>!\nSi tratta di un tipo di insetto estremamente\ncomune. A volte lo si vede volare in posti\ninsoliti.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1, line: 213 */ "Hai ottenuto un <color yellow<rotolacampo>coloroff>!\nQuesta pianta potrebbe tornare utile una\nvolta essiccata e indurita.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 5, unk: 1, line: 230 */ "Hai ottenuto l'<color yellow<emblema della prova>coloroff>!\nL'incisione guiderà l'eroe nel luogo in cui è\nnascosta la Triforza.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1, line: 249 */ "Hai ottenuto il <color yellow<frutto dell'albero della vita>coloroff>!\nSi dice che questo frutto leggendario curi\nogni malessere. Portalo al drago del\nfulmine!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 5, unk: 1, line: 101 */ "Hai ottenuto il <color yellow<pinzabeo>coloroff>!\nCon le sue pinze più grandi può\ntrasportare gli oggetti.\n\nPremi (Z) per osservare dall'alto, in modo\nda lasciar cadere l'oggetto che stai\ntrasportando con precisione.<0x10011:0x07cd>")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 5, unk: 1, line: 71 */ "Hai ottenuto lo <color yellow<scarabeo>coloroff>!\nÈ uno strumento a forma di insetto, dotato\ndi uno straordinario potere e in grado di\nvolare!\nPunta il telecomando Wii <color red<verso lo schermo>coloroff>\ne lancia lo scarabeo, quando è pronto a\nvolare, premendo (A)!\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <color red<spostando dal centro>coloroff>, premi\n(v) per sistemarlo.<0x10011:0x09cd>")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 5, unk: 1, line: 46 */ "Hai ottenuto delle <color yellow<spore scintillanti>coloroff>!\nSono generate dai funghi luminosi.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1, line: 24 */ "Hai ottenuto l'<color yellow<arco>coloroff>!\nOra puoi colpire un bersaglio da lontano!\nLe sue frecce sono molto insidiose.\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <color red<spostando dal centro>coloroff>, premi\n(v) per sistemarlo.<0x10011:0x09cd>")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 5, unk: 1, line: 2 */ "Hai ottenuto una <color yellow<piccola chiave>coloroff>!\nApre una porta bloccata,\nma solo in quest'area!")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1, line: 93 */ "Hai ottenuto l'<color yellow<amuleto dell'insetto>coloroff>!\nOra puoi trovare facilmente gli insetti\nsulla mappa. Vai nel luogo segnato con (O)!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1, line: 114 */ "Hai catturato una <color yellow<fata>coloroff>! Il suo potere\nripristina <color red<6 cuori>coloroff>. Conservala nell'<color yellow<ampolla\n>coloroff>e portala con te! Se <color red<esaurisci l'energia>coloroff>\nuscirà <color red<automaticamente >coloroff>fuori per aiutarti.")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1, line: 147 */ "Hai recuperato la <color yellow<borsa dell'avventuriero>coloroff>!\nOh... c'è anche il resto del tuo\nequipaggiamento!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 5, unk: 1, line: 146 */ "Hai ottenuto la <color yellow<borsa dell'avventuriero>coloroff>!\nÈ un accessorio molto utile in cui riporre\ngli oggetti che ti serviranno per la tua\navventura.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1, line: 192 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nLe sabbiormiche possono sopravvivere\nnell'arido deserto perché scavano i loro\nformicai presso le sorgenti d'acqua.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 5, unk: 1, line: 191 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nLe sabbiormiche possono sopravvivere\nnell'arido deserto perché scavano i loro\nformicai presso le sorgenti d'acqua.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 5, unk: 1, line: 214 */ "Hai ottenuto una <color yellow<coda di lucertola>coloroff>!\nÈ la coda di una grossa lucertola con una\npalla chiodata alla fine. Potrebbe tornare\nutile.")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1, line: 231 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 5, unk: 1, line: 250 */ "Hai ottenuto il <color yellow<portarupie extra>coloroff>!\nAdesso puoi portare <color red<300 rupie>coloroff> in più.")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 5, unk: 1, line: 94 */ "Hai ottenuto il <color yellow<retino>coloroff>!\nTi aiuterà a catturare piccoli insetti e\nnon solo... Avvicinati in silenzio e\ncatturali con un colpo deciso!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1, line: 72 */ "Hai ottenuto dell'<color yellow<acqua>coloroff>!\nDel tutto ordinaria, è incolore e inodore.\nPotrebbe tornare utile, prima o poi.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 5, unk: 1, line: 47 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1, line: 3 */ "Hai ottenuto una <color green rupee<rupia verde>coloroff>!\nVale <color red<1 rupia>coloroff>, ti conviene raccoglierne\ntante!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 5, unk: 1, line: 115 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 5, unk: 1, line: 148 */ "Hai allargato la <color yellow<borsa dell'avventuriero>coloroff>!\nOra può contenere <color red<un >coloroff>altro oggetto!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 5, unk: 1, line: 167 */ "Hai ottenuto il <color yellow<sacco per semi grande>coloroff>!\nOra puoi trasportare <color red<3>coloroff><color red<0>coloroff> semi Deku in più.\nPortalo con te quando usi la fionda.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 5, unk: 1, line: 194 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nSembra che le larve di sabbicala restino\nsottoterra per dieci anni o più. È un insetto\ndifficilissimo da catturare.")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 5, unk: 1, line: 193 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nSembra che le larve di sabbicala restino\nsottoterra per dieci anni o più. È un insetto\ndifficilissimo da catturare.")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 5, unk: 1, line: 215 */ "Hai ottenuto del <color yellow<metallo Oldin>coloroff>!\nQuesto pezzo di metallo brillante e\nresistente potrebbe avere innumerevoli\nutilizzi.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 5, unk: 1, line: 232 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1, line: 96 */ "Hai catturato una <color yellow<fata>coloroff>!\nSono creature molto utili poiché\nripristinano <color red<6>coloroff> cuori! Tuttavia, non hai una\n<color yellow<ampolla >coloroff>perciò devi lasciarla andare.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 5, unk: 1, line: 95 */ "Hai trovato una <color yellow<fata>coloroff>!\nSono creature molto utili poiché\nripristinano <color red<6>coloroff> cuori!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 5, unk: 1, line: 74 */ "Hai ottenuto delle <color yellow<<item 55>>coloroff>!\nSono spore prelevate da un fungo gigante.\nSono molto efficaci per trattare le\nferite dei solcanubi!")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 5, unk: 1, line: 73 */ "Hai ottenuto delle <color yellow<spore di fungo>coloroff>!\nSono spore provenienti da un fungo\ngigante. Potrebbero tornare utili.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1, line: 48 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 5, unk: 1, line: 26 */ "Hai recuperato gli <color yellow<artigli>coloroff>!\nOra puoi di nuovo raggiungere luoghi\ndistanti.")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 5, unk: 1, line: 25 */ "Hai ottenuto gli <color yellow<artigli>coloroff>! Ora puoi\nraggiungere luoghi più lontani.\nÈ uno dei tre tesori della Dea.\n\nAggancia un <color red<bersaglio>coloroff> o l'<color red<edera>coloroff> con gli\nartigli dotati di catene retrattili e verrai\ntrasportato direttamente in quel punto!\n\nSe mentre miri, hai la sensazione che il\nmirino si stia <color red<spostando dal centro>coloroff>, premi\n(v) per sistemarlo.<0x10011:0x09cd>")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 5, unk: 1, line: 5 */ "Hai trovato una <color blue rupee<rupia blu>coloroff>!\nVale <color red<5>coloroff> <color red<rupie>coloroff>. Mettila nel portarupie.")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 5, unk: 1, line: 4 */ "Hai ottenuto una <color blue rupee<rupia blu>coloroff>!\nVale <color red<5>coloroff> <color red<rupie>coloroff>. La fortuna ti sorride!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 5, unk: 1, line: 149 */ "Hai ottenuto l'<color yellow<amuleto della vita>coloroff>!\nSe lo porti con te, la vitalità massima\naumenta di un cuore. Indispensabile nei\nmomenti di maggior bisogno.")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1, line: 168 */ "Hai ottenuto la <color yellow<faretra piccola>coloroff>!\nOra puoi trasportare <color red<5>coloroff> frecce in più.\nPortala con te quando usi l'arco.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 5, unk: 1, line: 196 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nQuesto insetto possiede degli\nammalianti occhi composti e delle\ngraziose ali trasparenti come il vetro!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1, line: 195 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nQuesto insetto possiede degli\nammalianti occhi composti e delle\ngraziose ali trasparenti come il vetro!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1, line: 216 */ "Hai ottenuto un <color yellow<fiore antico>coloroff>!\nSi dice che questo fiore sbocciasse nel\npassato. È splendido e brilla al buio.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 5, unk: 1, line: 233 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1, line: 75 */ "Hai ottenuto i <color yellow<talpoguanti>coloroff>!\nTi saranno utili per scavare.\nProva a utilizzarli premendo (A) quando\nvedi qualcosa di sospetto nel terreno.")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 5, unk: 1, line: 49 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1, line: 27 */ "Hai ottenuto la <color yellow<statuetta>coloroff>!\nSimboleggia la tua vittoria nella gara di\noggi. Zelda sarà orgogliosa di te!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1, line: 6 */ "Hai ottenuto una <color red rupee<rupia rossa>coloroff>!\nVale <color red<20>coloroff> <color red<rupie>coloroff>. Le cose vanno\nproprio bene, che fortuna!")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 5, unk: 1, line: 97 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 5, unk: 1, line: 116 */ "Hai ottenuto l'<color yellow<arco di ferro>coloroff>!\nQuesto modello è adatto ad arcieri esperti\ned è più potente del tuo precedente arco.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1, line: 150 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 5, unk: 1, line: 169 */ "Hai ottenuto la <color yellow<faretra media>coloroff>!\nOra puoi trasportare <color red<10>coloroff> frecce in più.\nPortala con te quando usi l'arco.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 5, unk: 1, line: 217 */ "Hai ottenuto una <color yellow<magatama ambrata>coloroff>!\nÈ un prezioso oggetto color ambra\nche si trova in terra un po' ovunque.\nNessuno sa perché abbia questa forma.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1, line: 234 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 5, unk: 1, line: 77 */ "Hai ottenuto <color red<5>coloroff> <color yellow<semi Deku>coloroff>!\nSono dei piccoli proiettili per la fionda.\nCerca di non restare a corto di munizioni.")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1, line: 78 */ "")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 5, unk: 1, line: 28 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 5, unk: 1, line: 7 */ "La <color yellow white<Triforza >coloroff>è completa!\nAdesso il desiderio di Zelda di vedere\nl'“<color red<annientamento>coloroff>” di <color blue<Mortipher>coloroff> potrà\nessere esaudito.")
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
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1, line: 99 */ "Hai ottenuto dell'<color yellow<acqua sacra>coloroff>!\nPuò sembrare comune acqua, ma la sua\npurezza le conferisce un grande potere.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 5, unk: 1, line: 98 */ "Hai ottenuto dell'<color yellow<acqua sacra>coloroff>!\nQuest'acqua è così pura da poter guarire le\nferite del drago d'acqua. Possiede poteri\nassenti nell'acqua comune.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1, line: 117 */ "Hai ottenuto l'<color yellow<arco sacro>coloroff>!\nGrazie alla preghiera della Dea, possiede\nun potere sacro poderoso contro i mostri!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 5, unk: 1, line: 151 */ "Hai ottenuto lo <color yellow<scudo di legno>coloroff>!\nÈ leggero e facile da usare. Tuttavia, può\nrompersi o prendere fuoco!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 5, unk: 1, line: 170 */ "Hai ottenuto la <color yellow<faretra grande>coloroff>!\nOra puoi trasportare <color red<15>coloroff> frecce in più.\nPortala con te quando usi l'arco.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1, line: 198 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nQuesto piccolo insetto trasporta sempre\nuna palla di... qualcosa. Vederlo portare\nin giro il suo cibo ispira simpatia.")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 5, unk: 1, line: 197 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nQuesto piccolo insetto trasporta sempre\nuna palla di... qualcosa. Vederlo portare\nin giro il suo cibo ispira simpatia.")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 5, unk: 1, line: 218 */ "Hai ottenuto una <color yellow<magatama scura>coloroff>!\nSimile alla magatama ambrata unicamente\nnella forma. La puoi trovare solo in \ndeterminati luoghi.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 5, unk: 1, line: 235 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 5, unk: 1, line: 50 */ "Hai ottenuto <color yellow<5 bombe>coloroff>!\nLanciale o falle rotolare per far saltare\nin aria anche le cose più dure. E, quando le\ntrovi, non dimenticare di farne scorta.")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 5, unk: 1, line: 29 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 5, unk: 1, line: 8 */ "Hai ottenuto un <color yellow<cuore>coloroff>!\nIntriso di energia vitale,\nrigenera di <color red<un>coloroff> cuore.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1, line: 120 */ "Hai recuperato il <color yellow<portabombe>coloroff>!\nChe notizia esplosiva!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 5, unk: 0, line: 119 */ "Hai ricevuto il <color yellow<portabombe>coloroff>!\nEsprime tutta la generosità di <color blue<Ferrinio>coloroff>.\nFanne buon uso!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 5, unk: 1, line: 118 */ "Hai ottenuto il <color yellow<portabombe>coloroff>!\nOra puoi portare i fiori bomba con te ed\nesplorare luoghi prima inaccessibili.\n<color blue<Ferrinio>coloroff> potrebbe prestartelo!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 5, unk: 1, line: 100 */ "Hai ricevuto il <color yellow<pinzabeo>coloroff>!\nCon le sue pinze più grandi può\ntrasportare gli oggetti.\n\nPremi (Z) per osservare dall'alto, in modo\nda lasciar cadere l'oggetto che stai\ntrasportando con precisione.<0x10011:0x07cd>")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1, line: 153 */ "Hai ottenuto lo <color yellow<scudo di legno resistente>coloroff>!\nQuesto modello in legno è leggero, ma più\nresistente del precedente scudo di legno.")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1, line: 171 */ "Hai ottenuto il <color yellow<portabombe piccolo>coloroff>!\nOra puoi trasportare <color red<5>coloroff> bombe in più.\nPortalo con te quando usi le bombe.")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 5, unk: 1, line: 200 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nQuesto insetto piace molto ai bambini\ndi Oltrenuvola. Però, è meglio fare\nattenzione alle sue mandibole!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 5, unk: 1, line: 199 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nQuesto insetto piace molto ai bambini\ndi Oltrenuvola. Però, è meglio fare\nattenzione alle sue mandibole!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1, line: 219 */ "Hai ottenuto una <color yellow<gelatina spettrale>coloroff>!\nL'aspetto non è dei migliori, ma è fatta di\nun materiale utilizzabile in svariati modi.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 5, unk: 1, line: 80 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 5, unk: 1, line: 79 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 5, unk: 1, line: 236 */ "Hai appreso la <color yellow<Melodia della Dea>coloroff>!\nÈ una misteriosa melodia che si tramanda\ndai tempi antichi.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1, line: 51 */ "Hai ottenuto <color yellow<10 bombe>coloroff>!\nLanciale o falle rotolare per farle\nesplodere. Mettile nel portabombe!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1, line: 30 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1, line: 9 */ "Hai ottenuto una <color yellow<freccia usata>coloroff>!\nPuoi utilizzarla col tuo arco. Le frecce\nsono molto utili, non restarne a corto!")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 5, unk: 1, line: 10 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 5, unk: 1, line: 121 */ "Hai ottenuto un <color yellow<portacuore>coloroff>!\nLa vitalità aumenterà di <color red<un cuore >coloroff>e\nsarà interamente ripristinata!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1, line: 102 */ "Hai ottenuto il <color yellow<turboscarabeo>coloroff>!\nQuesto modello è più veloce dello scarabeo.\nA tavoletta!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 5, unk: 1, line: 134 */ "Hai ottenuto l'<color yellow<amuleto del cuore>coloroff>!\nPortalo con te e troverai cuori anche nella\n<color red<modalità eroica>coloroff>. Cresceranno anche i\ntulicuori. Ottimo cardiotonico!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 5, unk: 1, line: 133 */ "Hai ottenuto l'<color yellow<amuleto del cuore>coloroff>!\nPortalo con te e i cuori appariranno più\nspesso. Perfetto, se ti sta a cuore la salute!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 5, unk: 1, line: 154 */ "Hai ottenuto lo <color yellow<scudo di legno rinforzato>coloroff>!\nQuesto modello in legno è leggero, ma è\nil più resistente tra gli scudi di legno.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 5, unk: 1, line: 172 */ "Hai ottenuto il <color yellow<portabombe medio>coloroff>!\nOra puoi trasportare <color red<10>coloroff> bombe in più.\nPortalo con te quando usi le bombe.")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 5, unk: 1, line: 202 */ "Hai ottenuto <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>!\nÈ uno degli insetti volanti più rari e\npredilige i luoghi bui.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1, line: 201 */ "Hai catturato <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>! \nÈ uno degli insetti volanti più rari e\npredilige i luoghi bui.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 5, unk: 1, line: 80 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 5, unk: 1, line: 79 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1, line: 237 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 5, unk: 1, line: 52 */ "Hai ottenuto un <color yellow<levafatica>coloroff>!\nÈ un frutto misterioso, che rigenera il tuo\nvigore.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 5, unk: 1, line: 31 */ "Hai ottenuto la <color yellow<chiavenigma sacra>coloroff>!\nÈ fatta di legno e la circonda un'aura\ndi sacralità. Assomiglia alla statua di\npietra che si trova al piano superiore.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 5, unk: 1, line: 11 */ "Hai ottenuto <color yellow<10 frecce>coloroff>!\nPuoi scoccarle dal tuo arco. Ne hai un\nnumero limitato, fanne buon uso!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 5, unk: 1, line: 103 */ "Hai ottenuto lo <color yellow<scarabeo potenziato>coloroff>!\nQuesto modello può volare più a lungo\ndello scarabeo.")
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
/*<208>*/ 				printf(/* textboxtype: 5, unk: 1, line: 124 */ "Hai ottenuto un <color yellow<frammento di cuore>coloroff>!\nTrovane quattro e la vitalità aumenterà di\nun cuore. Te ne manca ancora <color red<uno>coloroff>!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1, line: 123 */ "Hai ottenuto un <color yellow<frammento di cuore>coloroff>!\nTrovane quattro e la vitalità aumenterà di\nun cuore. Te ne mancano altri <color red<due>coloroff>!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 5, unk: 1, line: 122 */ "Hai ottenuto un <color yellow<frammento di cuore>coloroff>!\nTrovane quattro e la vitalità aumenterà di\nun cuore. Te ne mancano altri <color red<tre>coloroff>!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 5, unk: 1, line: 125 */ "Hai ottenuto un <color yellow<frammento di cuore>coloroff>!\nAdesso hai un portacuore completo. La\nvitalità è aumentata di un cuore!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1, line: 135 */ "Hai ottenuto l'<color yellow<amuleto della rupia>coloroff>!\nPortalo con te e le rupie appariranno più\nspesso. Perfetto, se hai le mani bucate!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 5, unk: 1, line: 155 */ "Hai ottenuto lo <color yellow<scudo di ferro>coloroff>!\nQuesto scudo non brucia e non si rompe\nfacilmente, ma occhio alle scosse\nelettriche!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 5, unk: 1, line: 173 */ "Hai ottenuto il <color yellow<portabombe grande>coloroff>!\nOra puoi trasportare <color red<15>coloroff> bombe in più.\nPortalo con te quando usi le bombe.")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 5, unk: 1, line: 203 */ "Hai ottenuto un'<color yellow<ampolla>coloroff>!\nPuoi metterci dentro diverse cose.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 5, unk: 1, line: 220 */ "Hai ottenuto un <color yellow<artiglio di mostro>coloroff>!\nSembra l'artiglio perso da un demone. Ha\nl'aria di essere particolarmente affilato!")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 5, unk: 1, line: 238 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 5, unk: 1, line: 83 */ "Hai ottenuto <color red<10>coloroff> <color yellow<semi Deku>coloroff>!\nSono dei piccoli proiettili per la fionda.\nCerca di non restare a corto di munizioni.")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1, line: 54 */ "Hai raccolto tutte le<color yellow< <color yellow<lacrime di Farore<color yellow<>coloroff>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 5, unk: 1, line: 53 */ "Hai ottenuto una <color yellow<lacrima di Farore>coloroff>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <color red<90 secondi>coloroff>. Raccogline <color red<15\n>coloroff>per completare la prova!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 5, unk: 1, line: 32 */ "Hai ottenuto la <color yellow<chiavenigma arcana>coloroff>!\nÈ composta da alcuni cubetti di cristallo\nche rilucono debolmente.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 5, unk: 1, line: 104 */ "Hai ottenuto una <color yellow<scaldacuore>coloroff>!\nSe portata nella borsa, potrà essere\nusata per ripristinare <color red<8 cuori>coloroff>.")
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
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Hai ottenuto la <color yellow white<Triforza del Coraggio>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Hai ottenuto la <color yellow white<Triforza del Coraggio>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<532>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Trova l'<color red<ultima>coloroff> Triforza!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Hai ottenuto la <color yellow white<Triforza del Coraggio>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<531>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Trova le altre <color red<due >coloroff>Triforze!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 5, unk: 1, line: 136 */ "Hai ottenuto l'<color yellow<amuleto del tesoro>coloroff>!\nPortalo con te e i tesori appariranno più\nspesso. Il compagno ideale per una caccia\nal tesoro!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 5, unk: 1, line: 175 */ "Hai recuperato la <color yellow<frusta>coloroff>!\nSchiocca! Schiocca!")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1, line: 174 */ "Hai ottenuto la <color yellow<frusta>coloroff>!\nAgita il telecomando Wii per farla\nschioccare.\n\nSe vedi qualcosa di interessante dove non\npuoi arrivare, inquadralo con (Z) e agita il\ntelecomando per provare a raggiungerlo!<0x10011:0x07cd>")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 5, unk: 1, line: 221 */ "Hai ottenuto un <color yellow<corno di mostro>coloroff>!\nÈ ricavato dal corno di un mostro. Può\nrivelarsi molto utile come materiale grezzo\ngrazie alla sua durezza.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1, line: 204 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 5, unk: 1, line: 239 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1, line: 84 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1, line: 33 */ "Hai ottenuto la <color yellow<chiavenigma tentacolare>coloroff>!\nÈ un artefatto dalla forma bizzarra,\nornato da curiose ventose.")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1, line: 105 */ "Hai ottenuto una <color yellow<scaldacuore +>coloroff>!\nÈ una rielaborazione della scaldacuore.\nQuesta versione avanzata <color red<ripristina tutti\ni cuori>coloroff>.")
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
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Hai ottenuto la <color yellow white<Triforza della Forza>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Hai ottenuto la <color yellow white<Triforza della Forza>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<535>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Trova l'<color red<ultima>coloroff> Triforza!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Hai ottenuto la <color yellow white<Triforza della Forza>coloroff>!\nImmenso potere creato dagli antichi dei.\nSi dice che i desideri di colui che possiede\nquesto <color red<potere universale >coloroff>vengano esauditi.")
/*<534>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Trova le altre <color red<due >coloroff>Triforze!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 5, unk: 1, line: 137 */ "Hai ottenuto l'<color yellow<amuleto della durata>coloroff>!\nPortalo con te e prolungherà l'effetto di\nuna pozione. Naturalmente, devi avere\nanche la pozione.")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Il tuo scudo è stato riparato!\nOra è come nuovo!")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1, line: 156 */ "Hai ottenuto lo <color yellow<scudo di ferro resistente>coloroff>! \nQuesto modello è più resistente del\nnormale scudo di ferro!")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 5, unk: 1, line: 176 */ "Hai ottenuto i <color yellow<termorecchini>coloroff>!\nSono uno dei tre sacri tesori lasciati dalla\nDea, ti permettono di sopportare\ntemperature altissime.")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1, line: 222 */ "Hai ottenuto un <color yellow<teschio ornamentale>coloroff>!\nÈ l'effigie di un teschio, l'emblema degli\nelettroboblin.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 5, unk: 1, line: 205 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 5, unk: 1, line: 56 */ "Hai ottenuto tutte le <color yellow<lacrime di Din>coloroff>.\nIl tuo cuore è temprato! La prova non è\nterminata finché non tornerai al mondo\nreale...\nDirigiti cautamente al portale per\nsuperare definitivamente la prova.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 5, unk: 1, line: 55 */ "Hai ottenuto una <color yellow<lacrima di Din>coloroff>!\nHa il potere di paralizzare i guardiani, ma\nsolo per <color red<90 secondi>coloroff>. Raccogline <color red<15 >coloroff>per\ncompletare la prova!")
          	}
          }

