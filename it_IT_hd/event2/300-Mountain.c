          void entrypoint_300_24() {
/*<220>*/ 	start()
/*<221>*/ 	switch (scene_flags[73 /* 0x8 02 */]) {
          	  case 0:
/*<223>*/ 		printf(/* textboxtype: 1, unk: 1, line: 96 */ "La tua amica ti sta aspettando\ndi certo, quindi non mollare!")
          	  case 1:
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][73 /* 0x8 02 */] = true;
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000001>Ehi! Guarda chi si vede!\nGrazie ancora per l'altra volta!\n\n\nHai poi trovato la tua amica?\n[1-]Sì[2-]No")
/*<225>*/ 		switch (choice(2)) {
          		  case 0:
/*<227>*/ 			printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00110808>Bene! Sono contento per te!<pause 20> Non sei\nancora riuscito ad aiutarla?\n\n\n<0x10009:0x000908ff>Non ti abbattere così! Stai tranquillo,\nvedrai che ce la farai! Non mollare!")
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x0013100d>Capisco...\nNon è che i tipi rossi l'hanno...<pause 20>\n\n\n<0x10009:0x0011080e>Come? Sai che è viva? E allora!\nNon fare quella faccia, si risolve tutto!\n\n\n<0x10009:0x00090800>Se molli tu è la fine!\nQuindi non mollare assolutamente!")
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
/*<329>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00110800>EHI! Non fuggire! Falli fuori!")
          		flw_334:
/*<334>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*<333>*/ 		switch (zone_temp_flags[18 /* 0x3 04 */]) {
          		  case 0:
          			goto flw_329
          		  case 1:
/*<328>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00110812>Ehi, ehi! Oramai si sono accorti di te\ne non ti lasciano certo andare!\n\n\n<0x10009:0x00150d00>Prenditi le tue responsabilità e falli fuori!")
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
/*<340>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "ARGH! Eccone un altro! Nooo! Sono\nriusciti ad attraversare la lava...\nHo parlato troppo presto!")
          	  case 1:
/*<166>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4114, 'param2': 3590, 'next': 58, 'param3': 13}
/*< 58>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "Ah! Aiuto!!!\n\n\n\nEh?! Non sei uno dei tipi rossi!?\n<pause 15><0x10009:0x10090807>Mi hai fatto prendere un colpo!\n\n\n<0x10009:0x100aff00>Scusami... è che ultimamente\nnon fanno altro che venire dei tipi\nrossi a invadere il nostro territorio.")
/*< 61>*/ 		set_camera(3, 0)
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 57 */ "Visto che sono arrivati da una buca\ndietro di me, per non farli avanzare\nabbiamo riempito il varco con la lava!")
/*< 63>*/ 		set_camera(4, 0)
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "Tanto noi possiamo passare attraverso\nla terra... eh eh eh! <0x10009:0x1011080b>Siamo furbi, eh?!")
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -1, 'next': 65, 'param3': 13}
/*< 65>*/ 		set_camera(5, 0)
/*< 64>*/ 		printf(/* textboxtype: 0, unk: 0, line: 59 */ "Perciò non toccare quel tappo! È\npericoloso! Ci vediamo, ciao!")
          	}
          }

          void entrypoint_300_25() {
/*<228>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00150d0c>Mi chiedevo...<pause 20> Chissà che cosa mangiano\nquei tipi rossi...")
          }

          void entrypoint_300_09() {
/*< 21>*/ 	start()
/*< 74>*/ 	switch (temp_flags[53 /* 0x7 20 */]) {
          	  case 0:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ogni tanto vengono fuori dei <color red<cosi rossi\ngelatinosi>coloroff>. Stai attento a non farti\nprendere!\n")
          	  case 1:
/*<303>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 2559, 'next': 350, 'param3': 13}
/*<350>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 0, unk: 0, line: 62 */ "AH! Mi hai messo paura!<pause 20> <0x10009:0x00110d00>Non è educato\nscavare proprio sulla testa della gente!\n\n\n<0x10009:0x00150809>Però posso capirti... non puoi mai sapere\ncosa c'è se non provi a scavare!\n\n\nCerto, puoi trovare le <color red<<0x10009:0x00ffffff>rupie>coloroff>,\nma anche dei<color red< minerali>coloroff>!\n\n\n<color red<<0x10009:0x00150d11>>coloroff>Ultimamente di <color red<cuori>coloroff> non se ne trovano\npiù... Alle volte si verificano cose molto\nstrane...\n\n<0x10009:0x00ffffff>Non smettere mai di scavare qua e là,\nquando trovi un buco!")
          			flw_75:
/*< 75>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		  case 1:
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "AH! Mi hai messo paura!<pause 20> <0x10009:0x00110d00>Non è educato\nscavare proprio sulla testa della gente!\n\n\n<0x10009:0x00150809>Però posso capirti... non puoi mai sapere\ncosa c'è se non provi a scavare!\n\n\nCerto, puoi trovare le <color red<<0x10009:0x00ffffff>rupie>coloroff>, ma anche\ndei<color red< minerali >coloroff>o anche un <color red<cuore>coloroff>!\n\n\nNon smettere mai di scavare qua e là,\nquando trovi un buco!")
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
/*<236>*/ 				printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x000908ff>Puoi trovare muri che si possono\ndistruggere non solo sotto terra,\nma anche in superficie.\nSono sicuro che li troverai!")
          			  case 1:
/*<235>*/ 				printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00150d10>Oh! Era lì? Te la sai cavare, mi pare!")
/*<237>*/ 				scene_flags[4 'Eldin Volcano'][75 /* 0x8 08 */] = true;
          				goto flw_236
          			}
          		  case 1:
/*<243>*/ 			switch (scene_flags[76 /* 0x8 10 */]) {
          			  case 0:
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "Da queste parti, spesso ci sono\ndei muri sottili dietro ai quali\nsi nascondono delle cose...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000001>Ehi, mi sembri in forma!\nSei venuto in cerca di tesori?\n\n\n<0x10009:0x00110800>Forse lo saprai già, ma senti questa:\npresso il <color blue<vulcano di Oldin>coloroff> ci sono punti\nin cui i muri sono sottili.\n\n<0x10009:0x000908ff>Dietro si sono create delle grotte che\nnascondono parecchie cose...\nSi trova di tutto, soprattutto <color yellow<rupie>coloroff>!\n<0x10009:0x001108ff>Perché non provi a cercarne?")
/*<241>*/ 				scene_flags[4 'Eldin Volcano'][76 /* 0x8 10 */] = true;
/*<272>*/ 				scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          			}
          		}
          	  case 1:
/*<240>*/ 		switch (scene_flags[74 /* 0x8 04 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x0015080c>Qualcosa mi dice che ce ne sia uno\nqui vicino!")
          		  case 1:
/*<232>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>Ciao! Sembri in forma!\n\n\n\n<0x10009:0x001108ff>Questa volta sei qui in cerca di qualche\ntesoro? Ti dico un paio di cosette...\n\n\n<color blue<<0x10009:0x0009080b>>coloroff>Qui e lì presso il <color blue<vulcano di Oldin>coloroff>,\nci sono delle grotte nascoste dietro\nad alcuni muri sottili.\n\nSpesso si trovano robe nascoste,\nil più delle volte si tratta di <color yellow<rupie>coloroff>!\n\n\n<0x10009:0x0015080c>Qualcosa mi dice che ce n'è una\nanche qui vicino!")
/*<233>*/ 			scene_flags[4 'Eldin Volcano'][74 /* 0x8 04 */] = true;
/*<273>*/ 			scene_flags[4 'Eldin Volcano'][79 /* 0x8 80 */] = true;
          		}
          	}
          }

          void entrypoint_300_27() {
/*<245>*/ 	start()
/*<249>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<248>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0015080b>Delle rovine di cui nessuno\nsa niente in fondo al vulcano...\ntutto ciò solletica il mio spirito di\n<color blue<ricercatore di tesori>coloroff>!")
          	  case 1:
/*<246>*/ 		printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x00110801>Ah, sei tu! Stai trattando bene\nil mio <color yellow<portabombe>coloroff>?\n\n\n<0x10009:0x000909ff>Ti sei mai inoltrato fino al cuore\ndel <color blue<vulcano di Oldin>coloroff>?\n\n\n<0x10009:0x00150816>In fondo al vulcano c'è una zona\nin cui la temperatura è elevatissima,\nfa bruciare i vestiti e si rischia la vita!\n\n<0x10009:0x000909ff>Però si dice che lì in fondo\nci siano delle rovine incredibili\ncon indicibili tesori!\n\n<0x10009:0x0011080b>Per noi il calore è del tutto sopportabile,\nquindi credo proprio che andrò a darci\nun'occhiata!")
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
/*<258>*/ 	wait_frames(45)
/*<298>*/ 	make_actor_do_something(2, 16)
/*<168>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': 3340, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Mmh, mi pare che quei tipi stessero\nseppellendo qualcosa qui...\nMa non trovo niente...")
/*< 83>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 25, 'param3': 16}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "Ehi, <color blue<Ferrinio>coloroff>! Sei sicuro che fosse\nproprio qui? Ma che cos'è che hanno\nseppellito poi?")
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 170, 'param3': 16}
/*<170>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4351, 'param2': -245, 'next': 26, 'param3': 13}
/*< 26>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "La <color red<chiave>coloroff>! La <color red<chiave>coloroff>!")
/*<148>*/ 	set_camera(24, 0)
/*<259>*/ 	wait_frames(15)
/*<149>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "Quei tipi hanno rotto la <color red<chiave della\nporta >coloroff>qua davanti e ne hanno\nsparpagliato i pezzi qui in giro!\n\nErano <color red<cinque >coloroff>pezzi e uno dev'essere\nseppellito proprio da queste parti!")
/*<260>*/ 	wait_frames(30)
/*<251>*/ 	set_camera(21, 0)
/*< 85>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 169, 'param3': 16}
/*<169>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4373, 'param2': 3330, 'next': 27, 'param3': 13}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "Mmh, ma hai visto prima quella\n<color red<tipa bionda vestita strana>coloroff>...\n<sound 4>l'hanno portata via!")
/*<252>*/ 	set_camera(22, 0)
/*< 86>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 28, 'param3': 16}
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x10110d0b>Già!!! Scommetto che lì dentro\nhanno nascosto qualcosa di\nimportantissimo!\n\n<0x10009:0x10090800>E probabilmente la tipa che hanno\nrapito sarà la loro cena, eh eh!\nFidati, sento odore di tesoro fin\nda qui fuori!")
/*<253>*/ 	set_camera(23, 0)
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 171, 'param3': 16}
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4607, 'param2': -254, 'next': 29, 'param3': 13}
/*< 29>*/ 	printf(/* textboxtype: 1, unk: 70, line: 41 */ "E cosa vuoi fare una volta che abbiamo\nraccolto tutti i pezzi della chiave?!")
/*< 88>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 30, 'param3': 16}
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x10110d09>Mi pare chiaro, no?! Ci sgraffigniamo\nil tesoro che c'è lì dentro!")
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': -1, 'next': 89, 'param3': 13}
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 172, 'param3': 16}
/*<172>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4371, 'param2': 4103, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "Ma, allora...<pause 15> A che ci serve la chiave?!\nPossiamo scavare fin dentro, no?!")
/*<262>*/ 	wait_frames(15)
/*<254>*/ 	set_camera(22, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 173, 'param3': 16}
/*<173>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4097, 'param2': 511, 'next': 174, 'param3': 13}
/*<174>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': 511, 'next': 32, 'param3': 13}
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "... ... ...<pause 30>")
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 17, 'param2': 16, 'next': 255, 'param3': 16}
/*<255>*/ 	set_camera(21, 0)
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "... ... ...<pause 30>")
/*<256>*/ 	set_camera(23, 0)
/*< 91>*/ 	{'type': 'type3', 'subType': 1, 'param1': 16, 'param2': 17, 'next': 175, 'param3': 16}
/*<175>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4117, 'param2': -1, 'next': 261, 'param3': 13}
/*<261>*/ 	wait_frames(30)
/*< 34>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "Sei proprio furbo!")
/*<257>*/ 	wait_frames(45)
/*<145>*/ 	scene_flags[4 'Eldin Volcano'][72 /* 0x8 01 */] = true;
/*<146>*/ 	wait_frames(45)
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_28() {
/*<265>*/ 	start()
/*<282>*/ 	temp_flags[30 /* 0x2 40 */] = true;
/*<264>*/ 	printf(/* textboxtype: 0, unk: 2, line: 1 */ "<0x10005:0x004b0000><0x10012:0x0000000b>Signore, Faih a rapporto.\nCi troviamo presso il <color blue<vulcano di Oldin>coloroff>,\nun luogo ricco di energia terrestre.")
          }

          void entrypoint_300_11() {
/*< 35>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10012:0x0000000b>Signore <heroname>, Faih a\nrapporto. Il discorso dei <color blue<Mogma >coloroff>ci ha\nrivelato delle informazioni\ninteressanti.\nLa “<color red<tipa vestita strana>coloroff>\" a cui hanno\nfatto riferimento è...\n[1-]Zelda![2-]Quella\nin nero?")
/*< 37>*/ 	switch (choice(2)) {
          	  case 0:
/*< 38>*/ 		printf(/* textboxtype: 2, unk: 0, line: 6 */ "<0x10012:0x00000005>Esatto, mio signore.\nProbabilità che si tratti di Zelda: 90%.")
          		flw_92:
/*< 92>*/ 		set_camera(7, 0)
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "Inoltre, probabilità che la chiave che\napre questo ingresso sia fatta dello\nstesso materiale della serratura: 95%.")
/*< 93>*/ 		set_camera(-1, 0)
/*< 94>*/ 		printf(/* textboxtype: 2, unk: 0, line: 9 */ "Rilevo nei dintorni la presenza di\noggetti dello stesso materiale.\n\n\nTrovandoli tutti potremmo riuscire\nad arrivare a <color red<Zelda>coloroff>, quindi li ho\nregistrati nel <color red<rilevatore>coloroff>.<sound 4>")
/*<310>*/ 		story_flags[106 /* us: 805A9ADE 0x80, jp: 805ACD5E 0x80 */] = true;
/*<347>*/ 		open_dowsing_wheel(2)
/*<344>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 2, line: 7 */ "Probabilità che si tratti della ragazza\nvestita di nero:<0x10008:0x01cd> 10%.\n\n\nQuella che è stata rapita ritengo\nsia <color red<Zelda>coloroff>.")
          		goto flw_92
          	}
          }

          void entrypoint_300_29() {
/*<267>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10005:0x005a0000>La regione è composta per il 65% di\nlava ed è abitata da creature capaci\ndi usare il fuoco.")
          }

          void entrypoint_300_12() {
/*< 40>*/ 	start()
/*< 46>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 47>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "Tienilo bene in mente! Le <color green rupee<rupie verdi\n>coloroff>attorno <color red<non hanno insidie>coloroff>.\n\n\nQuelle <color blue rupee<blu>coloroff>, <color red<una o due>coloroff>.<color red rupee<\n>coloroff>Quelle <color red rupee<rosse>coloroff>, <color red<tre o quattro>coloroff>...\nQuelle <color silver<argento>coloroff>, <color red<cinque o sei>coloroff>.\nQuelle <color gold<oro>coloroff>, <color red<sette o otto>coloroff>...\nQuesta è la regola generale, ma in fin\ndei conti è un gioco basato sul caso!\n<0x10009:0x00150509>Buona fortuna! Eh eh eh!")
          	  case 1:
/*< 42>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*<176>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2059, 'next': 53, 'param3': 13}
/*< 53>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Allora? Non vedi l'ora di conoscere\nle mie informazioni segrete, vero?")
/*<308>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 309, 'param3': 12}
/*<309>*/ 			printf(/* textboxtype: 0, unk: 1, line: 73 */ "<color red<<0x10009:0x00ffff00>>coloroff>Per sole <color red<20 rupie>coloroff>, ti svelerò informazioni\nsegrete su come <color red<stanare le rupie>coloroff>!\n[1-]Dimmi tutto![2]No, grazie.")
          			flw_44:
/*< 44>*/ 			switch (choice(2)) {
          			  case 0:
/*< 50>*/ 				switch (has_rupees(20)) {
          				  case 0:
/*< 51>*/ 					rupees += -20;
/*<179>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2057, 'next': 45, 'param3': 13}
/*< 45>*/ 					printf(/* textboxtype: 1, unk: 0, line: 66 */ "Bene, bene! Grazie! Allora, è una cosa\nche saprai soltanto tu...")
/*<305>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 306, 'param3': 12}
/*<306>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x0011ff00>Devi sapere che ogni tipo di rupia\nha attorno un numero fisso di insidie.\n\n\n<0x10009:0x00ffff0b>Per esempio, se è una <color green rupee<rupia verde>coloroff>\ndi sicuro attorno <color red<non avrà insidie>coloroff>!\n\n\nNel caso di una <color blue rupee<blu>coloroff>, ne avrà <color red<1 o 2>coloroff>.<color red<\n>coloroff>Una <color red rupee<rossa >coloroff>ne avrà <color red<3 o 4>coloroff>.<color red<\n>coloroff>Una <color silver<argento >coloroff><color red<5 o 6>coloroff>...\n\nInoltre, non le troverai spesso, ma sappi\nche le <color gold<rupie oro>coloroff> ne avranno <color red<7 o 8>coloroff>...\nin pratica, attorno hanno solo insidie.")
/*<178>*/ 					{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': -245, 'next': 54, 'param3': 13}
/*< 54>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "Che te ne pare?\nCosì dovrebbe essere più facile scovare\nle rupie!\n\n<0x10009:0x00ffff09>Però ricordati che è comunque\nun gioco basato sul rischio!\nBuona fortuna!")
/*< 48>*/ 					scene_flags[4 'Eldin Volcano'][55 /* 0x7 80 */] = true;
          				  case 1:
/*< 52>*/ 					printf(/* textboxtype: 0, unk: 0, line: 71 */ "Ehi! Non hai abbastanza rupie!\n\n\n\n<0x10009:0x00141209>Se non mi dai <color red<20 rupie>coloroff>,\nnon ti dico un bel niente.")
          				}
          			  case 1:
/*<177>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 49, 'param3': 13}
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Sei proprio tirchietto tu, eh!\nE dire che potresti\narricchirti sul serio!\n\n<0x10009:0x00ffff00>Vabbè, comunque se cambi idea,\nalla modica cifra di <color red<20 rupie>coloroff>,\nti dirò tutto!")
          			}
          		  case 1:
/*< 43>*/ 			scene_flags[4 'Eldin Volcano'][54 /* 0x7 40 */] = true;
/*< 41>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "Ehilà! Stai per andare a <color red<stanare\nrupie >coloroff>da <color blue<Raduncolo>coloroff>?\n\n\n<0x10009:0x0015080b>Ti do <color red<un'informazione segreta>coloroff>!\nCosì farai un sacco di soldi!\n\n\n<0x10009:0x00ffff00>Ov‐<pause 10>via‐<pause 10>men‐<pause 10>te<pause 10>, visto che ti\npuoi arricchire, non è certo\ngratis!")
/*<304>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 307, 'param3': 12}
/*<307>*/ 			printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x001108ff>Visto che sei tu, ti farò un prezzo\nstracciato! Che ne dici di <color red<20 rupie>coloroff>?\n[1-]Dimmi tutto![2]No, grazie")
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
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10012:0x0000000b>Signore, Faih a rapporto. Da questo\npunto in poi la temperatura è\n<color red<estremamente elevata>coloroff>.\n\n<0x10012:0x00000002>Signore, il vostro numero attuale\ndi cuori non basta. Suggerisco di\ntornare indietro.")
          		flw_296:
/*<296>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
          	  case 1:
/*<206>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
          			goto flw_207
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 0, unk: 2, line: 13 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\n\n\n\nDa questo punto in poi la temperatura\nè <color red<estremamente elevata>coloroff>. <0x10012:0x00000002>Signore,\nil vostro numero di cuori non basta.\n\nInoltre, la reazione del <color red<rilevatore>coloroff>\nin quella direzione è pari a zero.")
/*<208>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          			goto flw_296
          		}
          	}
          }

          void entrypoint_300_30() {
/*<269>*/ 	start()
/*<268>*/ 	printf(/* textboxtype: 2, unk: 0, line: 3 */ "<0x10005:0x005a0000>Il <color red<legno >coloroff>e i <color red<vestiti>coloroff> prendono fuoco\nfacilmente, fate attenzione.")
          }

          void entrypoint_300_14() {
/*< 69>*/ 	start()
/*< 72>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "Mi pare proprio che fosse vestita di nero,\nma non ricordo altro...")
          	  case 1:
/*<153>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2065, 'next': 70, 'param3': 13}
/*< 70>*/ 		printf(/* textboxtype: 0, unk: 0, line: 74 */ "Eh? Eccone un altro! Oggi è già il\nsecondo tipo non rosso che passa...")
/*< 77>*/ 		set_camera(6, 0)
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Prima ho visto entrare in quel buco\n<color red<una tipa vestita in modo strano>coloroff>.<sound 4>")
/*< 79>*/ 		set_camera(-1, 0)
/*<154>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3342, 'next': 80, 'param3': 13}
/*< 80>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "Cosa?! Potrebbe essere l'amica che stai\ncercando?! Vuoi sapere com'era vestita...?")
/*<349>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x0014120c>Duuunque...<pause 30>\nMi pare proprio che fosse <color red<vestita di\nnero>coloroff>. Purtroppo non ricordo altro!")
/*< 73>*/ 		scene_flags[4 'Eldin Volcano'][22 /* 0x3 40 */] = true;
          	}
          }

          void entrypoint_300_31() {
/*<271>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 0, unk: 2, line: 4 */ "<0x10005:0x004b0000>In caso di combustione, impegnatevi\nimmediatamente in qualche movimento\nrapido. L'<color green<attacco rotante >coloroff>o quello <color green<con\ncapriola>coloroff> spengono le fiamme.")
          }

          void entrypoint_300_15() {
/*< 95>*/ 	start()
/*< 18>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Quella tipa che è passata correndo\nti somigliava parecchio!\n\n\nPerò non mi pare fosse vestita\ndi verde, eh...")
          	  case 1:
/*< 97>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00110d11>Come? Non cerchi tesori,\nma un'amica?!\n\n\n<0x10009:0x00ffff0e>Allora forse era quella che è\npassata prima! <color red<È corsa via >coloroff>senza\ndegnarci di uno sguardo!<sound 4>\n\nÈ successo tutto così\nvelocemente che non ho\nvisto bene che tipo fosse...\n\nDi certo non era uno di quelli\nrossi! È andata da questa\nparte, prova a seguirla!")
/*< 17>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_32() {
/*<274>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\nGrazie al miglioramento della\nvostra spada, posso impostare\nil <color red<rilevatore >coloroff>sulle <color yellow<rupie>coloroff>.\nHo aggiunto le <color yellow<rupie >coloroff>agli obiettivi\nreperibili dal <color red<rilevatore>coloroff>.<sound 4>\nPotrà tornarvi utile.")
/*<276>*/ 	story_flags[105 /* us: 805A9ADE 0x40, jp: 805ACD5E 0x40 */] = true;
/*<348>*/ 	open_dowsing_wheel(20)
          }

          void entrypoint_300_16() {
/*< 96>*/ 	start()
/*< 98>*/ 	switch (scene_flags[36 /* 0x5 10 */]) {
          	  case 0:
/*<102>*/ 		switch (scene_flags[61 /* 0x6 20 */]) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 1, line: 55 */ "In questa zona si trovano facilmente <color yellow<rupie\n>coloroff>rosse, blu e verdi! Ogni tanto anche quelle\n<color red<argento >coloroff>e <color red<oro>coloroff>!\n\nE poi, anche se non è proprio un tesoro,\nsi trova spesso un <color red<minerale>coloroff> che potrebbe\nessere utile come <color red<materia prima>coloroff>!")
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "Noi siamo i <color blue<Mogma >coloroff>e questo è il nostro\nterritorio. Siamo dei <color blue<cercatori di tesori>coloroff>!\n\n\nIn questa zona si trovano facilmente\n<color yellow<rupie >coloroff>rosse, blu e verdi! Ogni tanto\nanche quelle <color red<argento >coloroff>e <color red<oro>coloroff>!\n\nE poi, anche se non è proprio un tesoro,\nsi trova spesso un <color red<minerale>coloroff> che potrebbe\nessere utile come <color red<materia prima>coloroff>!\n\nDato che ti trovi qui, perché non ne\napprofitti per cercare qualche tesoro?!")
/*<103>*/ 			scene_flags[4 'Eldin Volcano'][61 /* 0x6 20 */] = true;
          		}
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00110d11>Come? Non cerchi tesori,\nma un'amica?!\n\n\n<0x10009:0x00ffff0e>Allora forse era quella che è\npassata prima! <color red<È corsa via >coloroff>senza\ndegnarci di uno sguardo!<sound 4>\n\nÈ successo tutto così\nvelocemente che non ho\nvisto bene che tipo fosse...\n\nDi certo non era uno di quelli\nrossi! È andata da questa\nparte, prova a seguirla!")
/*<100>*/ 		scene_flags[4 'Eldin Volcano'][36 /* 0x5 10 */] = true;
          	}
          }

          void entrypoint_300_33() {
/*<286>*/ 	start()
/*<291>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<290>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<289>*/ 			printf(/* textboxtype: 0, unk: 0, line: 107 */ "Dove posso andare a cercare tesori, ora?\nOvunque sia, questa volta scavo di certo!")
          		  case 1:
/*<287>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "Ciao! Sei entrato nelle rovine\ndi cui parlavamo?\n\n\n<0x10009:0x0013100d>Io poi ho lasciato perdere, ma il mio\ncompare s'è arrabbiato tantissimo!\n\n\n<0x10009:0x000908ff>Urlava che noi possiamo andare ovunque\nscavando...<pause 15> e il resto l'ho scordato!")
/*<288>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	  case 1:
/*<295>*/ 		switch (zone_temp_flags[2 /* 0x1 04 */]) {
          		  case 0:
/*<294>*/ 			printf(/* textboxtype: 0, unk: 1, line: 109 */ "Dove posso andare in cerca di tesori?\nNoi <color blue<cercatori di tesori >coloroff>non smettiamo\nmai di viaggiare!")
          		  case 1:
/*<292>*/ 			printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10009:0x00110801>Ehi, tu! Stai trattando bene\nil mio <color yellow<portabombe>coloroff>, vero?\n\n\n<0x10009:0x000908ff>Non vorrei averlo sprecato,\nquindi usalo saggiamente!")
/*<293>*/ 			zone_temp_flags[2 /* 0x1 04 */] = true;
          		}
          	}
          }

          void entrypoint_300_17() {
/*<121>*/ 	start()
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3589, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "Ooh! Questa volta è uno verde!")
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 181, 'param3': 13}
/*<181>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "Proprio poco fa ho visto correre\n<color red<una tipa vestita di nero >coloroff>e aveva\ntutta l'aria di essere della tua specie!\nSiete amici?<sound 4>")
/*<125>*/ 	set_camera(13, 0)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 126, 'param3': 13}
/*<126>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "Di là non si può passare normalmente,\ninvece lei ha fatto un balzo e... oplà!\nÈ passata come se niente fosse.")
/*<127>*/ 	set_camera(-1, 0)
/*<128>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "Credimi, saltare fin lassù...<pause 15> non è cosa\nda poco!")
          }

          void entrypoint_300_18() {
/*<122>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Più avanti, vicino alla montagna,\nla zona brulica di tipi rossi...\n\n\nQuella tipa, invece, è stata furba.\nNon avrà avuto problemi a\nsalire su.\n\nCerto che per lei, la ricerca di\ntesori deve essere uno scherzo!\n<0x10009:0x001502ff>Che amici ganzi che hai!")
          }

          void entrypoint_300_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 2, unk: 0, line: 0 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\nPerdonate l'interruzione nella ricerca\ndi <color red<Zelda>coloroff>, ma...\n\nVi ricordate ancora come impostare\nil <color red<rilevatore >coloroff>sulle tracce di Zelda?\n[1-]Certo![2-]No...")
/*<279>*/ 	switch (choice(2)) {
          	  case 0:
/*<280>*/ 		printf(/* textboxtype: 0, unk: 2, line: 10 */ "<0x10012:0x00000005>Sì, mio signore. Perdonatemi. Possiamo\nriprendere la nostra ricerca di Zelda.")
          		flw_311:
/*<311>*/ 		scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          	  case 1:
/*<281>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10012:0x00000005>Mio signore, per attivare il <color red<rilevatore>coloroff>,\nper prima cosa tenete premuto\na lungo (^).<0x10011:0x08cd>\n\n<0x10012:0x00000001>Scegliete il soggetto della vostra ricerca\ned io lo cercherò attraverso la punta\ndella vostra spada.\n\nPiù vi avvicinerete all'oggetto, più il\n<color red<segnale sarà forte >coloroff>e verrà trasmesso\ntramite un suono e delle vibrazioni.\n\nInoltre, un <color red<cursore >coloroff>vi indicherà\nprecisamente la direzione nella quale\ndirigervi.\n\nOra potrete scegliere come soggetto Zelda\ne proseguire le ricerche.")
/*<343>*/ 		story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<342>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		goto flw_311
          	}
          }

          void entrypoint_300_19() {
/*<129>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 0, unk: 1, line: 115 */ "Zelda si trova più avanti...<pause 20> Affrettati!")
/*<131>*/ 	story_flags[184 /* us: 805A9AE6 0x80, jp: 805ACD66 0x80 */] = true;
          }

          void entrypoint_300_02() {
/*<  2>*/ 	start()
/*<107>*/ 	set_camera(10, 0)
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 108, 'param3': 13}
/*<108>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "Uff... quelli spadroneggiano sul nostro\nterritorio, fanno quello che vogliono.")
/*<319>*/ 	make_actor_do_something(3, 0)
/*<106>*/ 	set_camera(-1, 0)
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3590, 'next': 3, 'param3': 13}
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "ARGH! Cosa... che vuoi?!\nM'hai spaventato!\n\n\nCome? Cerchi un'amica?\n<0x10009:0x001412ff>Non ne ho la più pallida idea.\n\n\n<0x10009:0x00ffffff>Non ho visto passare nessuno...<0x1000A:0x000900cd>\nMagari è passata da lassù?")
/*<105>*/ 	set_camera(-1, 0)
/*<158>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4103, 'next': 55, 'param3': 13}
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Uff... ... ...<pause 20>\nSe solo qualcuno li mandasse via!")
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
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "Grazie! Grazie mille!\nSei proprio forte!\n\n\n<0x10009:0x00ffff0b>Noi <color blue<Mogma>coloroff>, nonostante le apparenze,\nabbiamo uno spiccato senso dell'onore\ne conosciamo la gratitudine...\n\nCome posso ricompensarti?\n[1-]Proseguo[2-]Rupie!")
/*<132>*/ 		switch (choice(2)) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "Certo, certo... stai cercando la tua amica...\n\n\n\n<0x10009:0x00090809>Allora ecco, ti do questi. Sono utilissimi!")
/*<316>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 6, 'param3': 42}
/*<  6>*/ 			give_item(56 0x38);
/*<  7>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Con questi puoi anche arrivare lassù!<0x1000A:0x000b00cd>\nProva a scavare lì!")
/*<109>*/ 			set_camera(-1, 0)
          			flw_137:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "Spero proprio che la tua amica non sia\nstata catturata da quei tipi rossi!")
/*<318>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<159>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 3599, 'next': 134, 'param3': 13}
/*<134>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Cosa?!?!?! Vuoi delle\nrupie?! Ma sei sicuro?\n\n\n<0x10009:0x00151204><0x10008:0xffcd>Certo, mi è stato d'aiuto, ma delle rupie mi\npare troppo...<pause 20> mmh... gli darò qualcos'altro!\n\n\n<0x10009:0x001412ff>Ecco... dunque...<pause 15>\nSono un po' al verde per ora...\n\n\n<0x10009:0x00110809>Ma tu... non avevi detto che stavi cercando\nun'amica? Allora, ti darò questi!")
/*<317>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 135, 'param3': 42}
/*<135>*/ 			give_item(56 0x38);
/*<136>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "Con questi puoi anche arrivare lassù!<0x1000A:0x000b00cd>\nProva a scavare lì!")
/*<138>*/ 			set_camera(-1, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 2048, 'next': 139, 'param3': 13}
/*<139>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10008:0xffcd>Io non me ne faccio più niente... me ne separo\npiù volentieri che dalle rupie!")
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
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "Pazzesco!!! <pause 15>Li hai fatti fuori tutti!<pause 15>")
/*<335>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          }

          void entrypoint_300_04() {
/*<  8>*/ 	start()
/*<321>*/ 	make_actor_do_something(3, 0)
/*<323>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 14, 'param3': 17}
/*< 14>*/ 	switch (scene_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "Ti auguro di trovare presto la tua amica,\nsana e salva!")
          	  case 1:
/*<110>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
/*<111>*/ 			switch (zone_temp_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*<113>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Se <color red<quello con il cappello blu>coloroff>\nsuona il corno, arrivano i rinforzi\na frotte! Che si può fare?!")
          			  case 1:
/*<331>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<332>*/ 					printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x00110809>Credo proprio che tu li abbia\nfatti arrabbiare... e non poco!\n\n\n<0x10009:0x00ffffff>Occhio! Il loro capo, quello col\n<color red<cappello blu>coloroff><sound 4>, <color red<chiama i rinforzi col suo\ncorno>coloroff>! E quelli arrivano subito e non\nfiniscono mai!")
          					flw_114:
/*<114>*/ 					zone_temp_flags[18 /* 0x3 04 */] = true;
          				  case 1:
/*<112>*/ 					printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0011080e>Cosa? Vuoi davvero scacciarli?\n\n\n\n<0x10009:0x00151200>Mmh, tanto se ne sono già accorti che sei\nnei paraggi, quindi tanto vale affrontarli.\n\n\n<0x10009:0x00ffff00>Però occhio! Il loro capo, quello col\n<color red<cappello blu>coloroff><sound 4>, <color red<chiama i rinforzi col suo\ncorno>coloroff>! Quelli arrivano subito e non\nfiniscono mai!")
          					goto flw_114
          				}
          			}
          		  case 1:
/*< 15>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Senti, se non hai niente di meglio\nda fare perché non li scacci tu?\n<0x10009:0x00141209>No, lascia perdere...")
          		}
          	}
          }

          void entrypoint_300_21() {
/*<184>*/ 	start()
/*<193>*/ 	switch (scene_flags[65 /* 0x9 02 */]) {
          	  case 0:
/*<194>*/ 		switch (scene_flags[97 /* 0xD 02 */]) {
          		  case 0:
/*<196>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "Come ti dicevo, i <color yellow<fiori bomba >coloroff>funzionano\nproprio come le giare: con (A) puoi <color green<raccoglierli\no lasciarli>coloroff>.\n\nQuando hai qualcosa in mano, puoi lanciarla\no farla rotolare.\n\n\nSe non ricordi come si fa, raccogli un oggetto\ne premi <icon 19> per avere dell'aiuto. È semplice.<0x10011:0x0bcd>\n\n\nOra prova con i <color yellow<fiori bomba >coloroff>laggiù!")
          		  case 1:
/*<195>*/ 			printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00150d11>Ma...? Non hai un\n<color yellow<portabombe>coloroff>?\n\n\n<color yellow<<0x10009:0x00110dff>>coloroff>Senza <color yellow<portabombe >coloroff>non puoi\nraccogliere i <color yellow<fiori bomba >coloroff>e\nportarli con te. Tutti i <color blue<Mogma\n>coloroff>ne hanno uno!\n<0x10009:0x00ffffff>...<pause 20> Perché mi\nfissi in quel modo?!\n\n\n<0x10009:0x00141209>Non ci pensare nemmeno!\nNon te lo do il mio! Accontentati\ndi far scoppiare le rocce vicine!")
/*<197>*/ 			scene_flags[4 'Eldin Volcano'][97 /* 0xD 02 */] = true;
          		}
          	  case 1:
/*<185>*/ 		printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00150d11>Mmh?! Credo di non averti mai visto...\n\n\n\nAH! <0x10009:0x00110d12>Non sarai mica un amico\ndi quei tipi rossi?!\n[1-]No![2-]Tipi rossi?")
/*<186>*/ 		switch (choice(2)) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00ffff07>Ah... meglio così...<pause 15>\nIn effetti, non vi somigliate molto...\n\n\n<0x10009:0x0015ff00>Sei venuto a prendere quei <color yellow<fiori bomba>coloroff>?\n[1-]Che sono?![2-]Esatto!")
          			flw_189:
/*<189>*/ 			switch (choice(2)) {
          			  case 0:
/*<190>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<color yellow<<0x10009:0x00ffff00>>coloroff>Non sai cosa sono i <color yellow<fiori bomba>coloroff>?!\n<0x1000A:0x001100cd>Guarda! Sbocciano anche lì!")
/*<201>*/ 				set_camera(-1, -1)
/*<198>*/ 				printf(/* textboxtype: 0, unk: 0, line: 83 */ "Sono dei fiori pericolosi che, quando\nli raccogli con (A), si innescano e poi\nscoppiano!\n\n<0x10009:0x0011080b>Se impari a usarli a dovere,\npossono essere un'arma formidabile!\nNon a caso li usiamo anche noi <color blue<Mogma>coloroff>!\n\n<0x10009:0x00ffffff>Proprio come le giare, li puoi\n<color green<lanciare >coloroff>o <color green<far rotolare>coloroff>...\nProva con i <color yellow<fiori bomba >coloroff>lì vicino!\n\n<0x10006:0xffcd>... ... ...<pause 15><0x10006:0x00cd>\n<0x10009:0x00110d11>Che? Non sai nemmeno\n<color green<come far rotolare >coloroff>qualcosa?\n[1-]Lo so[2-]Non lo so")
          				flw_283:
/*<283>*/ 				switch (choice(2)) {
          				  case 0:
/*<284>*/ 					printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00090809>Immaginavo... per lanciare un oggetto lo\ndevi <color green<sollevare>coloroff>, mentre per farlo rotolare\ndevi prima <color green<tenerlo in basso>coloroff>. Naturale, no?\n")
          					flw_192:
/*<192>*/ 					scene_flags[4 'Eldin Volcano'][65 /* 0x9 02 */] = true;
          				  case 1:
/*<285>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00141215>Certo che non sai proprio niente...<pause 15>\nE va bene, significa che ti dirò tutto io...\n\n\n<0x10009:0x000908ff>Dopo aver preso un <color yellow<fiore bomba>coloroff>,\n<color green<sollevalo>coloroff>!\n\n\nComparirà la traiettoria, quindi ti basterà\nallinearla con il tuo bersaglio e lanciare!\n\n\nLa traiettoria apparirà anche se <color green<lo tieni\nin basso>coloroff>. <color green<Lancialo>coloroff> per farlo rotolare lungo\nquella traiettoria!\n\n<color red<<0x10009:0x001108ff>>coloroff>Puoi lanciarlo su <color red<un posto alto >coloroff>o farlo\nrotolare in <color red<posti lontani o stretti>coloroff>!\nUtile, no?")
          					goto flw_192
          				}
          			  case 1:
/*<191>*/ 				printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x0011020b>Bene, allora! Quelli che trovi qui sono\nparticolarmente potenti!\n\n\n<0x10009:0x00ffffff><0x1000A:0x001100cd>Guarda! Ne crescono anche lì!\nPrendine pure quanti ne vuoi!")
/*<200>*/ 				set_camera(-1, -1)
/*<199>*/ 				printf(/* textboxtype: 0, unk: 1, line: 85 */ "Penso tu sappia che con (A) li puoi\nraccogliere, si innescano e dopo poco\nesplodono!\n\nProprio come le giare, li puoi\n<color green<lanciare >coloroff>o <color green<far rotolare>coloroff>! Prova, su!\n\n\n<0x10006:0xffcd>... ... ...<pause 15><0x10006:0x00cd>\n<0x10009:0x00110d11>Che? Non sai nemmeno\n<color green<come far rotolare >coloroff>qualcosa?\n[1-]Lo so[2-]Non lo so...")
          				goto flw_283
          			}
          		  case 1:
/*<188>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00ffff00>Hai visto quei mostri armati fino ai\ndenti?! Ultimamente ne girano parecchi.\n\n\n<0x10009:0x0015ff07>Beh, se non ne sai nulla, significa che\nnon sono amici tuoi. Meglio così!\n\n\nSei venuto a prendere quei <color yellow<fiori bomba>coloroff>?\n[1-]Che sono?![2-]Esatto!")
          			goto flw_189
          		}
          	}
          }

          void entrypoint_300_05() {
/*< 10>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 17, 'next': 210, 'param3': 32}
/*<210>*/ 	make_actor_do_something(0, 0)
/*<162>*/ 	{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 3075, 'next': 11, 'param3': 13}
/*< 11>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "Ehi, ehi, ehi, fermo là tu!\nSe ti vedo ancora da queste parti\nte la faccio pagare, capito?!")
/*<211>*/ 	make_actor_do_something(0, 17)
/*<302>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4361, 'param2': 2062, 'next': 117, 'param3': 13}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "Ah, ma questo è diverso...<pause 15> <color blue<Ferrinio>coloroff>, questo\nqui ti pare uno dei tipi rossi? No, vero?")
/*<212>*/ 	make_actor_do_something(0, 0)
/*<118>*/ 	printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00010800>Mah... a guardarlo bene...\nNo, non direi... però ci ha fatto\nprendere un colpo!\n\n<0x10009:0x00110d01>Scusaci... è che di questi tempi\nabbiamo un po' di problemi con\ndei mostri che vogliono invadere\nil nostro territorio!\n<0x10009:0x00150800>Perciò ho pensato di restare\nqui io,<color blue< Ferrinio>coloroff>, ad aspettarli\nper dar loro una lezione!")
/*<213>*/ 	make_actor_do_something(0, 17)
/*<164>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4372, 'param2': 4629, 'next': 119, 'param3': 13}
/*<119>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10008:0xffcd>Sei bravo a parlare... ma se stai ancora tremando!")
/*<165>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4353, 'param2': -1, 'next': 214, 'param3': 13}
/*<214>*/ 	make_actor_do_something(0, 0)
/*<163>*/ 	{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -1, 'next': 120, 'param3': 13}
/*<120>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Comunque sia, se sei venuto in cerca di\ntesori, stai molto attento a quei tipi rossi!")
/*<312>*/ 	scene_flags[4 'Eldin Volcano'][121 /* 0xE 02 */] = true;
          }

          void entrypoint_300_22() {
/*<202>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10012:0x0000000b>Signore, Faih a rapporto.\nDa questo punto in avanti la\ntemperatura è <color red<estremamente\nelevata>coloroff>.\nProbabilità che i vostri vestiti\nprendano fuoco: 95%.\nVi raccomando prudenza.\n\nC'è la possibilità di sopravvivere\n<color green<correndo>coloroff>, ma in tal caso suggerirei\ndi controllare prima la direzione con\nil <color red<rilevatore>coloroff>.")
/*<209>*/ 	scene_flags[4 'Eldin Volcano'][101 /* 0xD 20 */] = true;
          }

          void entrypoint_300_06() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x00000002>Oh, tu, prescelto dalla Dea...")
          }

          void entrypoint_300_23() {
/*<215>*/ 	start()
/*<216>*/ 	switch (temp_flags[33 /* 0x5 02 */]) {
          	  case 0:
/*<299>*/ 		switch (zone_temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<301>*/ 			printf(/* textboxtype: 0, unk: 0, line: 92 */ "Capito? Non andare in giro a <color green<fare\ncapriole>coloroff>! Sollevi un sacco di polvere!")
          		  case 1:
/*<218>*/ 			printf(/* textboxtype: 0, unk: 1, line: 91 */ "Oh, eccoti di nuovo! Non fare caso a me,\nfai pure con comodo!\n\n\n<0x10009:0x10110d0e>Come? Non ti piace che sbuchi così\nall'improvviso? Non dire così...\n\n\n<0x10009:0x10150809>Anch'io ho bisogno di prendere\nuna boccata d'aria ogni tanto!\n\n\n<0x10009:0x100909ff>Fammi un favore, anche se sei pieno\nd'energia, non andare in giro a\n<color green<fare capriole>coloroff>!")
/*<300>*/ 			zone_temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Benvenuto nella mia dimora!\n\n\n\n<0x10009:0x1011080e>Cosa c'è che non va nella mia casa?\n\n\n\n<0x10009:0x1015080a>Per un po' l'hanno usata quei\ntipi rossi...<pause 20> ma sono andati via,\nora ci sto io!\n\n<0x10009:0x100908ff>Noi <color blue<Mogma >coloroff>viviamo sottoterra,\nnon abbiamo una vera e propria casa.\n\n\n<0x10009:0x1015080d>Per questo ho voluto provare\nl'ebbrezza di usare un saluto\nsimile!")
/*<219>*/ 		temp_flags[33 /* 0x5 02 */] = true;
          	}
          }

