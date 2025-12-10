          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "Otterrai un tesoro raro se troverai tutte\nle rupie partecipando a <color blue<Stana la rupia>coloroff>.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Nel cuore di questo vulcano incontrerai\ni <color blue<Mogma>coloroff>, amanti di tesori. Anche se si dice\nche di recente se la stiano prendendo\npiuttosto comoda.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "Si dice che un <color red<drago >coloroff>viva sulla <color red<vetta\n>coloroff>del vulcano.\n\n\nPerò questa non sembra affatto la vetta...")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Vuoi ascoltare di nuovo?\n[1-]Sì[2]No")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Non sei dell'umore giusto?<pause 15>\nCapisco...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 9, unk: 2, line: 9 */ "La tua borsa è piena e\nnon c'è più spazio al <color red<deposito>coloroff>...\n\n\nL'oggetto è stato riposto\nnello scrigno.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "La tua borsa è piena e l'oggetto\nè stato inviato al <color red<deposito>coloroff>!")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Il <color red<drago >coloroff>che vive sulla vetta del vulcano\nadora conversare.\n\n\nNon la smetterà più di parlarti delle\naltre terre.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Si dice che sulla vetta del vulcano viva\nun <color red<drago >coloroff>avvolto dalle fiamme.\n\n\nIn un <color red<luogo dalle temperature\naltissime>coloroff>, inaccessibile ai più.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Vuoi ascoltare di nuovo?\n[1-]Sì[2]No")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Non sei dell'umore giusto?<pause 15>\nCapisco...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Ehi, <heroname>! Non crederai di\npotertene andare così, eh?! Ah! Un vero uomo\nfinisce sempre ciò che ha cominciato!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "Si dice che chi ottiene un buon\npunteggio nelle <color blue<Montagne russe>coloroff>,\notterrà un <color yellow<frammento di cuore>coloroff>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x1000F:0x>Fino a quando vuoi riposare?\n[1-]Mattina[2-]Notte[3]Annulla")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "Dicono che da qualche parte in questo\ndeserto viva un drago a cui piace\nsfidare gli altri.\n\nSi dice anche che il drago ti donerà uno<color red<\n<color red<scudo <color red<resistentissimo>coloroff> se supererai\nla sfida.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Volete scendere qui?\n[1-]Sì[2]No")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Un consiglio su come catturare gli\ninsetti rari? Avvicinarsi lentamente\ncon un <color yellow<retino >coloroff><color yellow<grande>coloroff>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nAl momento nella foresta di Firone si\nstanno verificando dei <color red<misteriosi\nmutamenti>coloroff>. Sembra sia impossibile\nscendere ora nella foresta.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0, line: 0 */ "<0x1000F:0x>La porta è chiusa a <color yellow<chiave>coloroff>.")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "Si dice che all'interno degli scrigni\nsbloccati dagli <color blue<esaedri della Dea>coloroff>, si\npossano trovare i più svariati tesori,\ntra cui dei <color yellow<frammenti di cuore>coloroff>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Indicate il punto desiderato con (Hand)\ne confermatelo con (A).")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10012:0x0000000b>Mio signore, Faih a rapporto.\n\n\n\nGrazie ai <color blue<totem >coloroff>impressi nella mia\nmemoria è possibile stabilire il punto\ndella <sound 4>Terra dove si desidera scendere.\n\nIndicate il luogo in cui desiderate\nscendere con (Hand) e confermatelo\ncon (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x1000F:0x>Il cartello è rotto.\nNon è possibile leggerlo.")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "Sembra che, disegnando del denaro sui\nmuri misteriosi, appaia del denaro vero.\n")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0, line: 3 */ "<0x1000F:0x>Non è possibile leggere il\ncartello da qui.")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "Le <color yellow<spore di fungo>coloroff> causano qualcosa\nse gettate su insetti o mostri. Puoi\nottenerle dai funghi luminosi.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Sembra che, disegnando un cerchio sui\nmuri misteriosi, appaia qualcosa di\ncircolare.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 9, line: 1 */ "<0x1000F:0x>La porta è sigillata.")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "Sembra che, disegnando tre triangoli\nsui muri misteriosi, possano apparire\ndelle <color yellow<fate>coloroff>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "Sembra che da queste parti sia\nnascosto un <color yellow<frammento di cuore>coloroff>.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Mi sa che l'hai già preso...\nMmh...")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "Però, per poterlo ottenere, si deve\nsaper scavare come un vero <color blue<Mogma>coloroff>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 9, line: 10 */ "BOOON‐jour!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 9, line: 4 */ "Volete lasciare questo mondo?\n[1-]Sì[2]No")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "Se in <color blue<Affetta il bambù>coloroff> riesci a effettuare\n<color red<più di>coloroff> <color red<28 tagli >coloroff>otterrai un tesoro.\n\n\nIl record attuale è di 43 tagli.\nO almeno così dicono...")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "Otterrai degli insetti rari e difficili da\ncatturare se completerai il livello\navanzato di <color blue<Insettopoli >coloroff><color red<in meno\ndi 2 minuti>coloroff>.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "Noi <color blue<statue chiacchierone >coloroff>attiriamo\nmolte <color red<farfalle>coloroff>.\n\n\nSe una <color red<dolce melodia >coloroff>viene suonata\ndove si radunano, noi facciamo\nBOOON‐jour!")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Sembra che, disegnando una freccia sui\nmuri misteriosi, appaia un oggetto\ndella stessa forma.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Sembra che, disegnando la forma\ndell'amore sui muri misteriosi ci si\npossa sentire subito meglio.")
          }

