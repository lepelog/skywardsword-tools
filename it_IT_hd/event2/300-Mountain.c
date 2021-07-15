          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf("La tua amica ti sta aspettando\ndi certo, quindi non mollare!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ehi! Guarda chi si vede!\nGrazie ancora per l'altra volta!\n\n\nHai poi trovato la tua amica?\n[1]Sì[2]No")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf("\x0E\x01\x09\x04\x11\x808Bene! Sono contento per te!<pause14> Non sei\nancora riuscito ad aiutarla?\n\n\n\x0E\x01\x09\x04\x09\x8FFNon ti abbattere così! Stai tranquillo,\nvedrai che ce la farai! Non mollare!")
          		  case 1:
/*<226>*/ 			printf("\x0E\x01\x09\x04\x13\x100DCapisco...\nNon è che i tipi rossi l'hanno...<pause14>\n\n\n\x0E\x01\x09\x04\x11\x80ECome? Sai che è viva? E allora!\nNon fare quella faccia, si risolve tutto!\n\n\n\x0E\x01\x09\x04\x09\x800Se molli tu è la fine!\nQuindi non mollare assolutamente!")
          		}
          	}
          }

          void entrypoint_300_07() {
/*<324>*/ 	start()
/*<325>*/ 	make_actor_do_something(3, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 327, 'param3': 17}
/*<327>*/ 	switch (zone_temp_flags[16 /* 0x3 01 */]) {
          	  case 0:
          		flw_329:
/*<329>*/ 		printf("\x0E\x01\x09\x04\x11\x800EHI! Non fuggire! Falli fuori!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf("\x0E\x01\x09\x04\x11\x812Ehi, ehi! Oramai si sono accorti di te\ne non ti lasciano certo andare!\n\n\n\x0E\x01\x09\x04\x15\xD00Prenditi le tue responsabilità e falli fuori!")
/*<330>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          			goto flw_334
          		}
          	}
          }

          void entrypoint_300_08() {
/*< 20>*/ 	start()
/*< 56>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 57, 'param3': 32}
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': -1, 'next': 338, 'param3': 16}
/*<338>*/ 	make_actor_do_something(4, 16)
/*<155>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 17}
/*< 59>*/ 	set_camera(2, 0)
/*<339>*/ 	switch (scene_flags[27 /* 0x2 08 */]) {
          	  case 0:
/*<341>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 340, 'param3': 13}
/*<340>*/ 		printf("ARGH! Eccone un altro! Nooo! Sono\nriusciti ad attraversare la lava...\nHo parlato troppo presto!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf("Ah! Aiuto!!!\n\n\n\nEh?! Non sei uno dei tipi rossi!?\n<pause0F>\x0E\x01\x09\x04\x1009\x807Mi hai fatto prendere un colpo!\n\n\n\x0E\x01\x09\x04\x100A\xFF00Scusami... è che ultimamente\nnon fanno altro che venire dei tipi\nrossi a invadere il nostro territorio.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf("Visto che sono arrivati da una buca\ndietro di me, per non farli avanzare\nabbiamo riempito il varco con la lava!")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf("Tanto noi possiamo passare attraverso\nla terra... eh eh eh! \x0E\x01\x09\x04\x1011\x80BSiamo furbi, eh?!")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf("Perciò non toccare quel tappo! È\npericoloso! Ci vediamo, ciao!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf("\x0E\x01\x09\x04\x15\xD0CMi chiedevo...<pause14> Chissà che cosa mangiano\nquei tipi rossi...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf("Ogni tanto vengono fuori dei <r<cosi rossi\ngelatinosi>>. Stai attento a non farti\nprendere!\n")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf("AH! Mi hai messo paura!<pause14> \x0E\x01\x09\x04\x11\xD00Non è educato\nscavare proprio sulla testa della gente!\n\n\n\x0E\x01\x09\x04\x15\x809Però posso capirti... non puoi mai sapere\ncosa c'è se non provi a scavare!\n\n\nCerto, puoi trovare le <r<\x0E\x01\x09\x04ÿ\xFFFFrupie>>,\nma anche dei<r< minerali>>!\n\n\n<r<\x0E\x01\x09\x04\x15\xD11>>Ultimamente di <r<cuori>> non se ne trovano\npiù... Alle volte si verificano cose molto\nstrane...\n\n\x0E\x01\x09\x04ÿ\xFFFFNon smettere mai di scavare qua e là,\nquando trovi un buco!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf("AH! Mi hai messo paura!<pause14> \x0E\x01\x09\x04\x11\xD00Non è educato\nscavare proprio sulla testa della gente!\n\n\n\x0E\x01\x09\x04\x15\x809Però posso capirti... non puoi mai sapere\ncosa c'è se non provi a scavare!\n\n\nCerto, puoi trovare le <r<\x0E\x01\x09\x04ÿ\xFFFFrupie>>, ma anche\ndei<r< minerali >>o anche un <r<cuore>>!\n\n\nNon smettere mai di scavare qua e là,\nquando trovi un buco!")
          			goto flw_75
          		}
          	}
          }

          void entrypoint_300_26() {
/*<230>*/ 	start()
/*<231>*/ 	switch (scene_flags[44 /* 0x4 10 */]) {
          	  case 0:
/*<234>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<238>*/ 			switch (scene_flags[75 /* 0x8 08 */]) {
          			  case 0:
          				flw_236:
/*<236>*/ 				printf("\x0E\x01\x09\x04\x09\x8FFPuoi trovare muri che si possono\ndistruggere non solo sotto terra,\nma anche in superficie.\nSono sicuro che li troverai!")
          			  case 1:
/*<235>*/ 				printf("\x0E\x01\x09\x04\x15\xD10Oh! Era lì? Te la sai cavare, mi pare!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf("Da queste parti, spesso ci sono\ndei muri sottili dietro ai quali\nsi nascondono delle cose...")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ehi, mi sembri in forma!\nSei venuto in cerca di tesori?\n\n\n\x0E\x01\x09\x04\x11\x800Forse lo saprai già, ma senti questa:\npresso il <b<vulcano di Oldin>> ci sono punti\nin cui i muri sono sottili.\n\n\x0E\x01\x09\x04\x09\x8FFDietro si sono create delle grotte che\nnascondono parecchie cose...\nSi trova di tutto, soprattutto <y<rupie>>!\n\x0E\x01\x09\x04\x11\x8FFPerché non provi a cercarne?")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x15\x80CQualcosa mi dice che ce ne sia uno\nqui vicino!")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ciao! Sembri in forma!\n\n\n\n\x0E\x01\x09\x04\x11\x8FFQuesta volta sei qui in cerca di qualche\ntesoro? Ti dico un paio di cosette...\n\n\n<b<\x0E\x01\x09\x04\x09\x80B>>Qui e lì presso il <b<vulcano di Oldin>>,\nci sono delle grotte nascoste dietro\nad alcuni muri sottili.\n\nSpesso si trovano robe nascoste,\nil più delle volte si tratta di <y<rupie>>!\n\n\n\x0E\x01\x09\x04\x15\x80CQualcosa mi dice che ce n'è una\nanche qui vicino!")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf("\x0E\x01\x09\x04\x15\x80BDelle rovine di cui nessuno\nsa niente in fondo al vulcano...\ntutto ciò solletica il mio spirito di\n<b<ricercatore di tesori>>!")
          	  case 1:
/*<246>*/ 		printf("\x0E\x01\x09\x04\x11\x801Ah, sei tu! Stai trattando bene\nil mio <y<portabombe>>?\n\n\n\x0E\x01\x09\x04\x09\x9FFTi sei mai inoltrato fino al cuore\ndel <b<vulcano di Oldin>>?\n\n\n\x0E\x01\x09\x04\x15\x816In fondo al vulcano c'è una zona\nin cui la temperatura è elevatissima,\nfa bruciare i vestiti e si rischia la vita!\n\n\x0E\x01\x09\x04\x09\x9FFPerò si dice che lì in fondo\nci siano delle rovine incredibili\ncon indicibili tesori!\n\n\x0E\x01\x09\x04\x11\x80BPer noi il calore è del tutto sopportabile,\nquindi credo proprio che andrò a darci\nun'occhiata!")
/*<247>*/ 		scene_flags[4 'Eldin Volcano'][77 /* 0x8 20 */] = true;
          	}
          }

          void entrypoint_300_10() {
/*< 23>*/ 	start()
/*<278>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1000, 'next': 81, 'param3': 24}
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 147, 'param3': 32}
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 277, 'param3': 32}
/*<277>*/ 	make_actor_do_something(1, 16)
/*< 82>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 250, 'param3': 16}
/*<250>*/ 	set_camera(20, 0)
/*<258>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 298, 'param3': 6}
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf("Mmh, mi pare che quei tipi stessero\nseppellendo qualcosa qui...\nMa non trovo niente...")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf("Ehi, <b<Ferrinio>>! Sei sicuro che fosse\nproprio qui? Ma che cos'è che hanno\nseppellito poi?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf("La <r<chiave>>! La <r<chiave>>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 149, 'param3': 6}
/*<149>*/ 	printf("Quei tipi hanno rotto la <r<chiave della\nporta >>qua davanti e ne hanno\nsparpagliato i pezzi qui in giro!\n\nErano <r<cinque >>pezzi e uno dev'essere\nseppellito proprio da queste parti!")
/*<260>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 251, 'param3': 6}
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf("Mmh, ma hai visto prima quella\n<r<tipa bionda vestita strana>>...\n<pling>l'hanno portata via!")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x1011\xD0BGià!!! Scommetto che lì dentro\nhanno nascosto qualcosa di\nimportantissimo!\n\n\x0E\x01\x09\x04\x1009\x800E probabilmente la tipa che hanno\nrapito sarà la loro cena, eh eh!\nFidati, sento odore di tesoro fin\nda qui fuori!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf("E cosa vuoi fare una volta che abbiamo\nraccolto tutti i pezzi della chiave?!")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x1011\xD09Mi pare chiaro, no?! Ci sgraffigniamo\nil tesoro che c'è lì dentro!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Ma, allora...<pause0F> A che ci serve la chiave?!\nPossiamo scavare fin dentro, no?!")
/*<262>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 254, 'param3': 6}
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf("... ... ...<pause1E>")
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 255, 'param3': 16}
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf("... ... ...<pause1E>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 34, 'param3': 6}
/*< 34>*/ 	printf("Sei proprio furbo!")
/*<257>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 345, 'param3': 6}
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nCi troviamo presso il <b<vulcano di Oldin>>,\nun luogo ricco di energia terrestre.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore Link, Faih a\nrapporto. Il discorso dei <b<Mogma >>ci ha\nrivelato delle informazioni\ninteressanti.\nLa \x201C<r<tipa vestita strana>>\" a cui hanno\nfatto riferimento è...\n[1]Zelda![2]Quella\nin nero?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf("\x0E\x01\x12\x04\x00\x05Esatto, mio signore.\nProbabilità che si tratti di Zelda: 90%.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf("Inoltre, probabilità che la chiave che\napre questo ingresso sia fatta dello\nstesso materiale della serratura: 95%.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf("Rilevo nei dintorni la presenza di\noggetti dello stesso materiale.\n\n\nTrovandoli tutti potremmo riuscire\nad arrivare a <r<Zelda>>, quindi li ho\nregistrati nel <r<rilevatore>>.<pling>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf("Probabilità che si tratti della ragazza\nvestita di nero:\x0E\x01\x08\x02\x1CD 10%.\n\n\nQuella che è stata rapita ritengo\nsia <r<Zelda>>.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf("\x0E\x01\x05\x04Z\x00La regione è composta per il 65% di\nlava ed è abitata da creature capaci\ndi usare il fuoco.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf("Tienilo bene in mente! Le <g+<rupie verdi\n>>attorno <r<non hanno insidie>>.\n\n\nQuelle <b+<blu>>, <r<una o due>>.<r+<\n>>Quelle <r+<rosse>>, <r<tre o quattro>>...\nQuelle <s<argento>>, <r<cinque o sei>>.\nQuelle <y+<oro>>, <r<sette o otto>>...\nQuesta è la regola generale, ma in fin\ndei conti è un gioco basato sul caso!\n\x0E\x01\x09\x04\x15\x509Buona fortuna! Eh eh eh!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf("Allora? Non vedi l'ora di conoscere\nle mie informazioni segrete, vero?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf("<r<\x0E\x01\x09\x04ÿ\xFF00>>Per sole <r<20 rupie>>, ti svelerò informazioni\nsegrete su come <r<stanare le rupie>>!\n[1]Dimmi tutto![2-]No, grazie.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf("Bene, bene! Grazie! Allora, è una cosa\nche saprai soltanto tu...")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf("\x0E\x01\x09\x04\x11\xFF00Devi sapere che ogni tipo di rupia\nha attorno un numero fisso di insidie.\n\n\n\x0E\x01\x09\x04ÿ\xFF0BPer esempio, se è una <g+<rupia verde>>\ndi sicuro attorno <r<non avrà insidie>>!\n\n\nNel caso di una <b+<blu>>, ne avrà <r<1 o 2>>.<r<\n>>Una <r+<rossa >>ne avrà <r<3 o 4>>.<r<\n>>Una <s<argento >><r<5 o 6>>...\n\nInoltre, non le troverai spesso, ma sappi\nche le <y+<rupie oro>> ne avranno <r<7 o 8>>...\nin pratica, attorno hanno solo insidie.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf("Che te ne pare?\nCosì dovrebbe essere più facile scovare\nle rupie!\n\n\x0E\x01\x09\x04ÿ\xFF09Però ricordati che è comunque\nun gioco basato sul rischio!\nBuona fortuna!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf("Ehi! Non hai abbastanza rupie!\n\n\n\n\x0E\x01\x09\x04\x14\x1209Se non mi dai <r<20 rupie>>,\nnon ti dico un bel niente.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf("Sei proprio tirchietto tu, eh!\nE dire che potresti\narricchirti sul serio!\n\n\x0E\x01\x09\x04ÿ\xFF00Vabbè, comunque se cambi idea,\nalla modica cifra di <r<20 rupie>>,\nti dirò tutto!")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf("Ehilà! Stai per andare a <r<stanare\nrupie >>da <b<Raduncolo>>?\n\n\n\x0E\x01\x09\x04\x15\x80BTi do <r<un'informazione segreta>>!\nCosì farai un sacco di soldi!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ov\x2010<pause0A>via\x2010<pause0A>men\x2010<pause0A>te<pause0A>, visto che ti\npuoi arricchire, non è certo\ngratis!")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf("\x0E\x01\x09\x04\x11\x8FFVisto che sei tu, ti farò un prezzo\nstracciato! Che ne dici di <r<20 rupie>>?\n[1]Dimmi tutto![2-]No, grazie")
          			goto flw_44
          		}
          	}
          }

          void entrypoint_300_13() {
/*< 67>*/ 	start()
/*<297>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
/*<205>*/ 	check_item_flag(505, 5)
/*<204>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
          		flw_207:
/*<207>*/ 		printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto. Da questo\npunto in poi la temperatura è\n<r<estremamente elevata>>.\n\n\x0E\x01\x12\x04\x00\x02Signore, il vostro numero attuale\ndi cuori non basta. Suggerisco di\ntornare indietro.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\n\n\n\nDa questo punto in poi la temperatura\nè <r<estremamente elevata>>. \x0E\x01\x12\x04\x00\x02Signore,\nil vostro numero di cuori non basta.\n\nInoltre, la reazione del <r<rilevatore>>\nin quella direzione è pari a zero.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf("\x0E\x01\x05\x04Z\x00Il <r<legno >>e i <r<vestiti>> prendono fuoco\nfacilmente, fate attenzione.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf("Mi pare proprio che fosse vestita di nero,\nma non ricordo altro...")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf("Eh? Eccone un altro! Oggi è già il\nsecondo tipo non rosso che passa...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf("Prima ho visto entrare in quel buco\n<r<una tipa vestita in modo strano>>.<pling>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf("Cosa?! Potrebbe essere l'amica che stai\ncercando?! Vuoi sapere com'era vestita...?")
/*<349>*/ 		printf("\x0E\x01\x09\x04\x14\x120CDuuunque...<pause1E>\nMi pare proprio che fosse <r<vestita di\nnero>>. Purtroppo non ricordo altro!")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x05\x04K\x00In caso di combustione, impegnatevi\nimmediatamente in qualche movimento\nrapido. L'<g<attacco rotante >>o quello <g<con\ncapriola>> spengono le fiamme.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf("Quella tipa che è passata correndo\nti somigliava parecchio!\n\n\nPerò non mi pare fosse vestita\ndi verde, eh...")
          	  case 1:
/*< 97>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Come? Non cerchi tesori,\nma un'amica?!\n\n\n\x0E\x01\x09\x04ÿ\xFF0EAllora forse era quella che è\npassata prima! <r<È corsa via >>senza\ndegnarci di uno sguardo!<pling>\n\nÈ successo tutto così\nvelocemente che non ho\nvisto bene che tipo fosse...\n\nDi certo non era uno di quelli\nrossi! È andata da questa\nparte, prova a seguirla!")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nGrazie al miglioramento della\nvostra spada, posso impostare\nil <r<rilevatore >>sulle <y<rupie>>.\nHo aggiunto le <y<rupie >>agli obiettivi\nreperibili dal <r<rilevatore>>.<pling>\nPotrà tornarvi utile.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf("In questa zona si trovano facilmente <y<rupie\n>>rosse, blu e verdi! Ogni tanto anche quelle\n<r<argento >>e <r<oro>>!\n\nE poi, anche se non è proprio un tesoro,\nsi trova spesso un <r<minerale>> che potrebbe\nessere utile come <r<materia prima>>!")
          		  case 1:
/*<101>*/ 			printf("Noi siamo i <b<Mogma >>e questo è il nostro\nterritorio. Siamo dei <b<cercatori di tesori>>!\n\n\nIn questa zona si trovano facilmente\n<y<rupie >>rosse, blu e verdi! Ogni tanto\nanche quelle <r<argento >>e <r<oro>>!\n\nE poi, anche se non è proprio un tesoro,\nsi trova spesso un <r<minerale>> che potrebbe\nessere utile come <r<materia prima>>!\n\nDato che ti trovi qui, perché non ne\napprofitti per cercare qualche tesoro?!")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x11\xD11Come? Non cerchi tesori,\nma un'amica?!\n\n\n\x0E\x01\x09\x04ÿ\xFF0EAllora forse era quella che è\npassata prima! <r<È corsa via >>senza\ndegnarci di uno sguardo!<pling>\n\nÈ successo tutto così\nvelocemente che non ho\nvisto bene che tipo fosse...\n\nDi certo non era uno di quelli\nrossi! È andata da questa\nparte, prova a seguirla!")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf("Dove posso andare a cercare tesori, ora?\nOvunque sia, questa volta scavo di certo!")
          		  case 1:
/*<287>*/ 			printf("Ciao! Sei entrato nelle rovine\ndi cui parlavamo?\n\n\n\x0E\x01\x09\x04\x13\x100DIo poi ho lasciato perdere, ma il mio\ncompare s'è arrabbiato tantissimo!\n\n\n\x0E\x01\x09\x04\x09\x8FFUrlava che noi possiamo andare ovunque\nscavando...<pause0F> e il resto l'ho scordato!")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf("Dove posso andare in cerca di tesori?\nNoi <b<cercatori di tesori >>non smettiamo\nmai di viaggiare!")
          		  case 1:
/*<292>*/ 			printf("\x0E\x01\x09\x04\x11\x801Ehi, tu! Stai trattando bene\nil mio <y<portabombe>>, vero?\n\n\n\x0E\x01\x09\x04\x09\x8FFNon vorrei averlo sprecato,\nquindi usalo saggiamente!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("Ooh! Questa volta è uno verde!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf("Proprio poco fa ho visto correre\n<r<una tipa vestita di nero >>e aveva\ntutta l'aria di essere della tua specie!\nSiete amici?<pling>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf("Di là non si può passare normalmente,\ninvece lei ha fatto un balzo e... oplà!\nÈ passata come se niente fosse.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf("Credimi, saltare fin lassù...<pause0F> non è cosa\nda poco!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf("Più avanti, vicino alla montagna,\nla zona brulica di tipi rossi...\n\n\nQuella tipa, invece, è stata furba.\nNon avrà avuto problemi a\nsalire su.\n\nCerto che per lei, la ricerca di\ntesori deve essere uno scherzo!\n\x0E\x01\x09\x04\x15\x2FFChe amici ganzi che hai!")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nPerdonate l'interruzione nella ricerca\ndi <r<Zelda>>, ma...\n\nVi ricordate ancora come impostare\nil <r<rilevatore >>sulle tracce di Zelda?\n[1]Certo![2]No...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf("\x0E\x01\x12\x04\x00\x05Sì, mio signore. Perdonatemi. Possiamo\nriprendere la nostra ricerca di Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf("\x0E\x01\x12\x04\x00\x05Mio signore, per attivare il <r<rilevatore>>,\nper prima cosa tenete premuto\na lungo (^).\x0E\x01\x11\x02\x8CD\n\n\x0E\x01\x12\x04\x00\x01Scegliete il soggetto della vostra ricerca\ned io lo cercherò attraverso la punta\ndella vostra spada.\n\nPiù vi avvicinerete all'oggetto, più il\n<r<segnale sarà forte >>e verrà trasmesso\ntramite un suono e delle vibrazioni.\n\nInoltre, un <r<cursore >>vi indicherà\nprecisamente la direzione nella quale\ndirigervi.\n\nOra potrete scegliere come soggetto Zelda\ne proseguire le ricerche.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf("Zelda si trova più avanti...<pause14> Affrettati!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf("Uff... quelli spadroneggiano sul nostro\nterritorio, fanno quello che vogliono.")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf("ARGH! Cosa... che vuoi?!\nM'hai spaventato!\n\n\nCome? Cerchi un'amica?\n\x0E\x01\x09\x04\x14\x12FFNon ne ho la più pallida idea.\n\n\n\x0E\x01\x09\x04ÿ\xFFFFNon ho visto passare nessuno...\x0E\x01\n\x04\x09Í\nMagari è passata da lassù?")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf("Uff... ... ...<pause14>\nSe solo qualcuno li mandasse via!")
/*<104>*/ 	scene_flags[4 'Eldin Volcano'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_300_03() {
/*<  4>*/ 	start()
/*<336>*/ 	switch (zone_temp_flags[19 /* 0x3 08 */]) {
          	  case 0:
/*<337>*/ 		set_camera(26, 0)
          		flw_314:
/*<314>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 346, 'param3': 40}
/*<346>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 256, 'next': 313, 'param3': 13}
/*<313>*/ 		{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 320, 'param3': 14}
/*<320>*/ 		make_actor_do_something(3, 0)
/*<263>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 150, 'param3': 17}
/*<150>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2056, 'next': 5, 'param3': 13}
/*<  5>*/ 		printf("Grazie! Grazie mille!\nSei proprio forte!\n\n\n\x0E\x01\x09\x04ÿ\xFF0BNoi <b<Mogma>>, nonostante le apparenze,\nabbiamo uno spiccato senso dell'onore\ne conosciamo la gratitudine...\n\nCome posso ricompensarti?\n[1]Proseguo[2]Rupie!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf("Certo, certo... stai cercando la tua amica...\n\n\n\n\x0E\x01\x09\x04\x09\x809Allora ecco, ti do questi. Sono utilissimi!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf("Con questi puoi anche arrivare lassù!\x0E\x01\n\x04\x0BÍ\nProva a scavare lì!")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf("Spero proprio che la tua amica non sia\nstata catturata da quei tipi rossi!")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf("Cosa?!?!?! Vuoi delle\nrupie?! Ma sei sicuro?\n\n\n\x0E\x01\x09\x04\x15\x1204\x0E\x01\x08\x02\xFFCDCerto, mi è stato d'aiuto, ma delle rupie mi\npare troppo...<pause14> mmh... gli darò qualcos'altro!\n\n\n\x0E\x01\x09\x04\x14\x12FFEcco... dunque...<pause0F>\nSono un po' al verde per ora...\n\n\n\x0E\x01\x09\x04\x11\x809Ma tu... non avevi detto che stavi cercando\nun'amica? Allora, ti darò questi!")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf("Con questi puoi anche arrivare lassù!\x0E\x01\n\x04\x0BÍ\nProva a scavare lì!")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf("\x0E\x01\x08\x02\xFFCDIo non me ne faccio più niente... me ne separo\npiù volentieri che dalle rupie!")
/*<161>*/ 			{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 137, 'param3': 13}
          			goto flw_137
          		}
          	  case 1:
/*<315>*/ 		set_camera(25, 0)
          		goto flw_314
          	}
          }

          void entrypoint_300_20() {
/*<140>*/ 	start()
/*<144>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 16, 'next': 322, 'param3': 32}
/*<322>*/ 	make_actor_do_something(3, 16)
/*<352>*/ 	make_actor_do_something(4, 16)
/*<143>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 272, 'next': 142, 'param3': 15}
/*<142>*/ 	set_camera(14, 0)
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 1799, 'next': 141, 'param3': 13}
/*<141>*/ 	printf("Pazzesco!!! <pause0F>Li hai fatti fuori tutti!<pause0F>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf("Ti auguro di trovare presto la tua amica,\nsana e salva!")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf("Se <r<quello con il cappello blu>>\nsuona il corno, arrivano i rinforzi\na frotte! Che si può fare?!")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf("\x0E\x01\x09\x04\x11\x809Credo proprio che tu li abbia\nfatti arrabbiare... e non poco!\n\n\n\x0E\x01\x09\x04ÿ\xFFFFOcchio! Il loro capo, quello col\n<r<cappello blu>><pling>, <r<chiama i rinforzi col suo\ncorno>>! E quelli arrivano subito e non\nfiniscono mai!")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf("\x0E\x01\x09\x04\x11\x80ECosa? Vuoi davvero scacciarli?\n\n\n\n\x0E\x01\x09\x04\x15\x1200Mmh, tanto se ne sono già accorti che sei\nnei paraggi, quindi tanto vale affrontarli.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Però occhio! Il loro capo, quello col\n<r<cappello blu>><pling>, <r<chiama i rinforzi col suo\ncorno>>! Quelli arrivano subito e non\nfiniscono mai!")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf("Senti, se non hai niente di meglio\nda fare perché non li scacci tu?\n\x0E\x01\x09\x04\x14\x1209No, lascia perdere...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf("Come ti dicevo, i <y<fiori bomba >>funzionano\nproprio come le giare: con (A) puoi <g<raccoglierli\no lasciarli>>.\n\nQuando hai qualcosa in mano, puoi lanciarla\no farla rotolare.\n\n\nSe non ricordi come si fa, raccogli un oggetto\ne premi \x0E\x02\x04\x02\x13CD per avere dell'aiuto. È semplice.\x0E\x01\x11\x02\xBCD\n\n\nOra prova con i <y<fiori bomba >>laggiù!")
          		  case 1:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x15\xD11Ma...? Non hai un\n<y<portabombe>>?\n\n\n<y<\x0E\x01\x09\x04\x11\xDFF>>Senza <y<portabombe >>non puoi\nraccogliere i <y<fiori bomba >>e\nportarli con te. Tutti i <b<Mogma\n>>ne hanno uno!\n\x0E\x01\x09\x04ÿ\xFFFF...<pause14> Perché mi\nfissi in quel modo?!\n\n\n\x0E\x01\x09\x04\x14\x1209Non ci pensare nemmeno!\nNon te lo do il mio! Accontentati\ndi far scoppiare le rocce vicine!")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf("\x0E\x01\x09\x04\x15\xD11Mmh?! Credo di non averti mai visto...\n\n\n\nAH! \x0E\x01\x09\x04\x11\xD12Non sarai mica un amico\ndi quei tipi rossi?!\n[1]No![2]Tipi rossi?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF07Ah... meglio così...<pause0F>\nIn effetti, non vi somigliate molto...\n\n\n\x0E\x01\x09\x04\x15\xFF00Sei venuto a prendere quei <y<fiori bomba>>?\n[1]Che sono?![2]Esatto!")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf("<y<\x0E\x01\x09\x04ÿ\xFF00>>Non sai cosa sono i <y<fiori bomba>>?!\n\x0E\x01\n\x04\x11ÍGuarda! Sbocciano anche lì!")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf("Sono dei fiori pericolosi che, quando\nli raccogli con (A), si innescano e poi\nscoppiano!\n\n\x0E\x01\x09\x04\x11\x80BSe impari a usarli a dovere,\npossono essere un'arma formidabile!\nNon a caso li usiamo anche noi <b<Mogma>>!\n\n\x0E\x01\x09\x04ÿ\xFFFFProprio come le giare, li puoi\n<g<lanciare >>o <g<far rotolare>>...\nProva con i <y<fiori bomba >>lì vicino!\n\n\x0E\x01\x06\x02\xFFCD... ... ...<pause0F>\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Che? Non sai nemmeno\n<g<come far rotolare >>qualcosa?\n[1]Lo so[2]Non lo so")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf("\x0E\x01\x09\x04\x09\x809Immaginavo... per lanciare un oggetto lo\ndevi <g<sollevare>>, mentre per farlo rotolare\ndevi prima <g<tenerlo in basso>>. Naturale, no?\n")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Certo che non sai proprio niente...<pause0F>\nE va bene, significa che ti dirò tutto io...\n\n\n\x0E\x01\x09\x04\x09\x8FFDopo aver preso un <y<fiore bomba>>,\n<g<sollevalo>>!\n\n\nComparirà la traiettoria, quindi ti basterà\nallinearla con il tuo bersaglio e lanciare!\n\n\nLa traiettoria apparirà anche se <g<lo tieni\nin basso>>. <g<Lancialo>> per farlo rotolare lungo\nquella traiettoria!\n\n<r<\x0E\x01\x09\x04\x11\x8FF>>Puoi lanciarlo su <r<un posto alto >>o farlo\nrotolare in <r<posti lontani o stretti>>!\nUtile, no?")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf("\x0E\x01\x09\x04\x11\x20BBene, allora! Quelli che trovi qui sono\nparticolarmente potenti!\n\n\n\x0E\x01\x09\x04ÿ\xFFFF\x0E\x01\n\x04\x11ÍGuarda! Ne crescono anche lì!\nPrendine pure quanti ne vuoi!")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf("Penso tu sappia che con (A) li puoi\nraccogliere, si innescano e dopo poco\nesplodono!\n\nProprio come le giare, li puoi\n<g<lanciare >>o <g<far rotolare>>! Prova, su!\n\n\n\x0E\x01\x06\x02\xFFCD... ... ...<pause0F>\x0E\x01\x06\x02Í\n\x0E\x01\x09\x04\x11\xD11Che? Non sai nemmeno\n<g<come far rotolare >>qualcosa?\n[1]Lo so[2]Non lo so...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF00Hai visto quei mostri armati fino ai\ndenti?! Ultimamente ne girano parecchi.\n\n\n\x0E\x01\x09\x04\x15\xFF07Beh, se non ne sai nulla, significa che\nnon sono amici tuoi. Meglio così!\n\n\nSei venuto a prendere quei <y<fiori bomba>>?\n[1]Che sono?![2]Esatto!")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf("Ehi, ehi, ehi, fermo là tu!\nSe ti vedo ancora da queste parti\nte la faccio pagare, capito?!")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf("Ah, ma questo è diverso...<pause0F> <b<Ferrinio>>, questo\nqui ti pare uno dei tipi rossi? No, vero?")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x01\x800Mah... a guardarlo bene...\nNo, non direi... però ci ha fatto\nprendere un colpo!\n\n\x0E\x01\x09\x04\x11\xD01Scusaci... è che di questi tempi\nabbiamo un po' di problemi con\ndei mostri che vogliono invadere\nil nostro territorio!\n\x0E\x01\x09\x04\x15\x800Perciò ho pensato di restare\nqui io,<b< Ferrinio>>, ad aspettarli\nper dar loro una lezione!")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf("\x0E\x01\x08\x02\xFFCDSei bravo a parlare... ma se stai ancora tremando!")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf("Comunque sia, se sei venuto in cerca di\ntesori, stai molto attento a quei tipi rossi!")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00\x0BSignore, Faih a rapporto.\nDa questo punto in avanti la\ntemperatura è <r<estremamente\nelevata>>.\nProbabilità che i vostri vestiti\nprendano fuoco: 95%.\nVi raccomando prudenza.\n\nC'è la possibilità di sopravvivere\n<g<correndo>>, ma in tal caso suggerirei\ndi controllare prima la direzione con\nil <r<rilevatore>>.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x00\x02Oh, tu, prescelto dalla Dea...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf("Capito? Non andare in giro a <g<fare\ncapriole>>! Sollevi un sacco di polvere!")
          		  case 1:
/*<218>*/ 			printf("Oh, eccoti di nuovo! Non fare caso a me,\nfai pure con comodo!\n\n\n\x0E\x01\x09\x04\x1011\xD0ECome? Non ti piace che sbuchi così\nall'improvviso? Non dire così...\n\n\n\x0E\x01\x09\x04\x1015\x809Anch'io ho bisogno di prendere\nuna boccata d'aria ogni tanto!\n\n\n\x0E\x01\x09\x04\x1009\x9FFFammi un favore, anche se sei pieno\nd'energia, non andare in giro a\n<g<fare capriole>>!")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf("Benvenuto nella mia dimora!\n\n\n\n\x0E\x01\x09\x04\x1011\x80ECosa c'è che non va nella mia casa?\n\n\n\n\x0E\x01\x09\x04\x1015\x80APer un po' l'hanno usata quei\ntipi rossi...<pause14> ma sono andati via,\nora ci sto io!\n\n\x0E\x01\x09\x04\x1009\x8FFNoi <b<Mogma >>viviamo sottoterra,\nnon abbiamo una vera e propria casa.\n\n\n\x0E\x01\x09\x04\x1015\x80DPer questo ho voluto provare\nl'ebbrezza di usare un saluto\nsimile!")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

