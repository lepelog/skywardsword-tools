          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "On raconte que celui qui déterre tous les rubis\nau <color blue<Fouille‐rubis >coloroff>de Radigume gagne un trésor\nrare.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "On raconte que sous ce volcan se terrent les\n<color blue<Mogmas>coloroff>, qui raffolent de trésors.\n\n\nOn raconte aussi que dernièrement, ils vivent\nplutôt tranquillement dans leur tanière.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "On raconte qu'un <color red<dragon>coloroff> vit au <color red<sommet >coloroff>de ce\nvolcan.\n\n\nMais on raconte qu'ici, ce n'est pas le sommet...")
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Veux‐tu que je répète tout ça ?\n[1-]Oui[2]Non")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ça ne t'intéresse pas, ce que je raconte ?<pause 15>\nJe vois...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf(/* textboxtype: 9, unk: 2, line: 9 */ "Votre sacoche est pleine, ainsi que la <color red<consigne>coloroff>...\n\n\n\nVous avez remis l'objet dans son coffre.")
          		  case 1:
/*< 10>*/ 			printf(/* textboxtype: 2, unk: 0, line: 8 */ "Votre sacoche est pleine ! L'objet a été envoyé\nà la <color red<consigne>coloroff>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "On raconte que le <color red<dragon >coloroff>qui vit au sommet\ndu volcan adore bavarder.\n\n\nOn raconte aussi qu'il peut te parler des autres\nrégions jusqu'à ce que les oreilles t'en tombent.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "On raconte qu'au sommet de ce volcan vit un\n<color red<dragon>coloroff> drapé de flammes.\n\n\nOn raconte aussi qu'il vit dans une <color red<fournaise\n>coloroff>où l'on peut difficilement pénétrer.")
/*< 53>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "Veux‐tu que je répète tout ça ?\n[1-]Oui[2]Non")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "Ça ne t'intéresse pas, ce que je raconte ?<pause 15>\nJe vois...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Hé, <heroname> ! Tu ne vas pas laisser\ntomber maintenant !\n\n\nUn homme finit toujours ce qu'il a commencé !")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "On raconte que celui qui réalise un bon temps\nau <color blue<Wagonnet du péril >coloroff>gagne un <color yellow<réceptacle de\ncœur>coloroff>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x1000F:0x>Combien de temps voulez‐vous\ndormir ?\n[1-]Jusqu'au\nmatin[2-]Jusqu'à\nla nuit[3]Ne pas\ndormir")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "On raconte que dans ce désert vit un\ngrand <color red<dragon>coloroff> qui propose un programme\nd'entraînement.\n\nOn raconte aussi que celui qui relève son défi\npourra obtenir un <color red<bouclier sacrément résistant>coloroff>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "Voulez‐vous atterrir ici ?\n[1-]Oui[2]Non")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "On raconte que pour capturer les insectes\nrares, il faut les approcher très lentement\navec un <color yellow<grand filet>coloroff>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10012:0x0000000b>Maître, Fay au rapport.\n\n\n\nUn <color red<phénomène anormal>coloroff> semble s'être produit dans la\nforêt de Firone. Vous ne pouvez pas y atterrir pour le\nmoment.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf(/* textboxtype: 9, unk: 0, line: 0 */ "<0x1000F:0x>Cette porte est fermée à <color yellow<clé>coloroff>.")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "On raconte que dans les coffres des <color blue<cubes de la\nDéesse>coloroff> qui montent au ciel, on trouve aussi des\n<color yellow<fragments de cœur>coloroff>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "Pointez l'endroit où vous souhaitez atterrir avec (Hand)\net confirmez avec (A).")
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10012:0x0000000b>Maître, Fay au rapport.\n\n\n\nVous pouvez m'indiquer <sound 4>l'endroit où vous désirez\natterrir parmi les <color blue<statues d'oiseau >coloroff>que j'ai mémorisées.\n\n\nPointez l'endroit où vous souhaitez atterrir avec (Hand)\net confirmez avec (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x1000F:0x>Cette pancarte est cassée.\nElle est illisible.")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 1, unk: 1, line: 27 */ "On raconte que si l'on dessine de l'argent sur\nles murs mystérieux, on peut devenir très riche.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf(/* textboxtype: 9, unk: 0, line: 3 */ "<0x1000F:0x>Impossible de lire l'inscription d'ici.")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "On raconte que les <color yellow<spores scintillantes>coloroff>, qui\nproviennent des champignons scintillants,\nont un effet sur les insectes et les monstres.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "On raconte que si l'on dessine un cercle sur les\nmurs mystérieux, un objet rond apparaît.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 9, line: 1 */ "<0x1000F:0x>Cette porte est scellée.")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 1, line: 30 */ "On raconte que si l'on dessine trois triangles\nsur les murs mystérieux, ça donne naissance\nà des <color yellow<fées>coloroff>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "On raconte qu'un <color yellow<fragment de cœur >coloroff>est caché\npar ici.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Mais on raconte aussi que tu l'as déjà trouvé...\nHmm...")
          	  case 1:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "Mais on raconte aussi que pour l'atteindre, il\nfaut s'engouffrer dans le sol comme un <color blue<Mogma>coloroff>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 0, unk: 9, line: 10 */ "Boi‐oi‐oing !")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 9, line: 4 */ "Voulez‐vous quitter ce monde ?\n[1-]Partir[2]Rester")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "On raconte que celui qui coupe le bambou en\n<color red<plus de 28 morceaux>coloroff> au <color blue<Tranche‐bambou >coloroff>gagne\nun trésor très précieux.\n\nOn raconte aussi que le record de l'ancienne\nidole est de 43 morceaux.")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "On raconte que celui qui finit le niveau Expert\ndu <color blue<Paradis des insectes>coloroff> en moins de <color red<deux\nminutes >coloroff>peut obtenir des insectes rares.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "On raconte que nous autres, les <color blue<pierres à potins>coloroff>,\nattirons les <color red<papillons>coloroff>.\n\n\nOn raconte aussi que lorsqu'une <color red<douce mélodie\n>coloroff>résonne là où ils se rassemblent, nous faisons\n« Boi‐oi‐oing ».")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "On raconte que si l'on dessine une flèche sur\nles murs mystérieux, un objet de forme similaire\napparaît.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "On raconte que si l'on dessine un symbole\nd'amour sur les murs mystérieux, on se sent\nbeaucoup mieux.")
          }

