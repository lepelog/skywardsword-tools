          void entrypoint_008_002() {
/*<  5>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "Ehi, tu!\nVieni un attimo qua!")
          }

          void entrypoint_008_003() {
/*<  6>*/ 	start()
/*< 17>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 18>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "Sono la <color blue<pietra Sheika>coloroff>, piacere!\n<pause 10>.<pause 5>.<pause 5>.<pause 10> Uhm, dici che ci siamo già\npresentati?!\n\nAllora...<pause 15> Noto che ti stai cimentando\nnella <color red<modalità eroica>coloroff>, eh... Gli enigmi\nnon ti hanno dato granché filo da\ntorcere, dici?\nMi congratulo! E in segno di riverenza\nper una tale bravura, ti mostrerò <sound 4><color red<tutti\ni suggerimenti>coloroff>, fin dall'inizio!\n\nQuando vuoi controllarli, non ti resta\nche muovere i tuoi bei piedini e venirmi\na trovare!\n\nIntanto... Buona fortuna!")
          	  case 1:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "Io sono la <color blue<pietra Sheika>coloroff>.\nMolto piacere!\nVengo subito al punto!\n\nAllora...<pause 15> credo proprio che da adesso\nin poi potresti trovarti in situazioni\npiuttosto complicate!\n\nPotrebbe succedere che non riesci a\nproseguire perché non sai risolvere\nun enigma. In tal caso, vieni pure a\ntrovarmi!\nAdesso non ho niente da mostrarti, ma\nquando sarà il momento e tornerai a\ntrovarmi ti farò vedere una <color red<cosa\ninteressante>coloroff>! \nIntanto... Buona fortuna!")
          	}
          }

          void entrypoint_008_004() {
/*< 13>*/ 	start()
/*< 20>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 21>*/ 		entrypoint_008_06();
          	  case 1:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 4 */ "Ops... Di nuovo tu<pause 10>!\nE di nuovo non ho nulla di interessante\nda dirti...\nPotresti ripassare fra un po'?")
          	}
          }

          void entrypoint_008_005() {
          	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "Allora, come va?\nHo dei nuovi suggerimenti per te...\nvuoi sapere di che si tratta?\n[1-]Certo![2]No")
/*<  1>*/ 	switch (choice(2)) {
          	  case 0:
/*<  2>*/ 		changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<  4>*/ 		printf(/* textboxtype: 1, unk: 0, line: 3 */ "Va bene! Ricordati che io sono\ndalla tua parte! In bocca al lupo!")
          	}
          }

          void entrypoint_008_006() {
/*<  8>*/ 	start()
/*< 14>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 2 */ "E allora, come andiamo?!<pause 10>\nChe ne dici di dare un'occhiata ai miei\nsuggerimenti?![1-]Sì[2]No")
          		flw_9:
/*<  9>*/ 		switch (choice(2)) {
          		  case 0:
/*< 10>*/ 			changeScene(62, 0) // {'name': 'F000', 'room': 0, 'layer': 22, 'entrance': 96, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          		  case 1:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Va bene! Ricordati che io sono\ndalla tua parte! In bocca al lupo!")
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 1 */ "Dunque dunque...<pause 10> Non ho nulla di\nnuovo per te, ma se vuoi ti mostro i\nsuggerimenti disponibili finora!\n[1-]Va bene[2]No")
          		goto flw_9
          	}
          }

