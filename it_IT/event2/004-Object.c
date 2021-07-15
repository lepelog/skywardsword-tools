          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf("Otterrai un tesoro raro se troverai\ntutte le rupie partecipando a\n<b<Stana la rupia>>.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf("Nel cuore di questo vulcano incontrerai\ni <b<Mogma>>, amanti di tesori. Anche se si\ndice che di recente se la stiano\nprendendo piuttosto comoda.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf("Si dice che un <r<drago >>viva sulla <r<vetta\n>>del vulcano.\n\n\nPerò questa non sembra affatto\nla vetta...")
/*< 60>*/ 		printf("Vuoi ascoltare di nuovo?\n[1]Sì[2-]No")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf("Non sei dell'umore giusto?<pause0F>\nCapisco...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf("La tua borsa è piena e\nnon c'è più spazio al <r<deposito>>...\n\n\nL'oggetto è stato riposto\nnello scrigno.")
          		  case 1:
/*< 10>*/ 			printf("La tua borsa è piena e l'oggetto\nè stato inviato al <r<deposito>>!")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf("Il <r<drago >>che vive sulla vetta del vulcano\nadora conversare.\n\n\nNon la smetterà più di parlarti delle\naltre terre.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf("Si dice che sulla vetta del vulcano viva\nun <r<drago >>avvolto dalle fiamme.\n\n\nIn un <r<luogo dalle temperature\naltissime>>, inaccessibile ai più.")
/*< 53>*/ 		printf("Vuoi ascoltare di nuovo?\n[1]Sì[2-]No")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf("Non sei dell'umore giusto?<pause0F>\nCapisco...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Ehi, Link! Non crederai di\npotertene andare così, eh?! Ah! Un\nvero uomo finisce sempre ciò che ha\ncominciato!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf("Si dice che chi ottiene un buon\npunteggio nelle <b<Montagne russe>>,\notterrà un <y<frammento di cuore>>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x0F\x00Fino a quando vuoi riposare?\x0F\x01\x0F\n[1]Mattina[2]Notte[3-]Annulla")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf("Dicono che da qualche parte in questo\ndeserto viva un drago a cui piace\nsfidare gli altri.\n\nSi dice anche che il drago ti donerà uno<r<\n<r<scudo <r<resistentissimo>> se supererai\nla sfida.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Volete scendere qui?\n[1]Sì[2-]No")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf("Un consiglio su come catturare gli\ninsetti rari? Avvicinarsi lentamente\ncon un <y<retino >><y<grande>>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\n\n\n\nAl momento nella foresta di Firone si\nstanno verificando dei <r<misteriosi\nmutamenti>>. Sembra sia impossibile\nscendere ora nella foresta.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf("\x0E\x01\x0F\x00La porta è chiusa a <y<chiave>>.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf("Si dice che all'interno degli scrigni\nsbloccati dagli <b<esaedri della Dea>>, si\npossano trovare i più svariati tesori,\ntra cui dei <y<frammenti di cuore>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf("Indicate il punto desiderato con \x0E\x02\x04\x02\x18CD\ne confermatelo con (A).")
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMio signore, Faih a rapporto.\n\n\n\nGrazie ai <b<totem >>impressi nella mia\nmemoria è possibile stabilire il punto\ndella <pling>Terra dove si desidera scendere.\n\nIndicate il luogo in cui desiderate\nscendere con \x0E\x02\x04\x02\x18CD e confermatelo\ncon (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x0F\x00Il cartello è in frantumi.\nNon è possibile leggerlo.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf("Sembra che, disegnando del denaro sui\nmuri misteriosi, appaia del denaro\nvero.\n")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x0F\x00Non è possibile leggere il\ncartello da qui.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf("Le <y<spore di fungo>> causano qualcosa\nse gettate su insetti o mostri. Puoi\nottenerle dai funghi luminosi.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf("Sembra che, disegnando un cerchio sui\nmuri misteriosi, appaia qualcosa di\ncircolare.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("\x0E\x01\x0F\x00La porta è sigillata.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("Sembra che, disegnando tre triangoli\nsui muri misteriosi, possano apparire\ndelle <y<fate>>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Sembra che da queste parti sia\nnascosto un <y<frammento di cuore>>.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf("Mi sa che l'hai già preso...\nMmh...")
          	  case 1:
/*< 79>*/ 		printf("Però, per poterlo ottenere, si deve\nsaper scavare come un vero <b<Mogma>>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf("BOOON\x2010jour!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Volete lasciare questo mondo?\n[1]Sì[2-]No")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf("Se in <b<Affetta il bambù>> riesci a\neffettuare <r<più di>> <r<28 tagli>>\notterrai un tesoro.\n\nIl record attuale è di 43 tagli.\nO almeno così dicono...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf("Otterrai degli insetti rari e difficili da\ncatturare se completerai il livello\navanzato di <b<Insettopoli >><r<in meno\ndi 2 minuti>>.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf("Noi <b<statue chiacchierone >>attiriamo\nmolte <r<farfalle>>.\n\n\nSe una <r<dolce melodia >>viene suonata\ndove si radunano, noi facciamo\nBOOON\x2010jour!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf("Sembra che, disegnando una freccia sui\nmuri misteriosi, appaia un oggetto\ndella stessa forma.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf("Sembra che, disegnando la forma\ndell'amore sui muri misteriosi ci si\npossa sentire subito meglio.")
          }

