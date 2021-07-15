          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf("On raconte que celui qui déterre tous les rubis\nau <b<Fouille\x2010rubis >>de Radigume gagne un trésor\nrare.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf("On raconte que sous ce volcan se terrent les\n<b<Mogmas>>, qui raffolent de trésors.\n\n\nOn raconte aussi que dernièrement, ils vivent\nplutôt tranquillement dans leur tanière.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf("On raconte qu'un <r<dragon>> vit au <r<sommet >>de ce\nvolcan.\n\n\nMais on raconte qu'ici, ce n'est pas le sommet...")
/*< 60>*/ 		printf("Veux\x2010tu que je répète tout ça ?\n[1]Oui[2-]Non")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf("Ça ne t'intéresse pas, ce que je raconte ?<pause0F>\nJe vois...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf("Votre sacoche est pleine, ainsi que la <r<consigne>>...\n\n\n\nVous avez remis l'objet dans son coffre.")
          		  case 1:
/*< 10>*/ 			printf("Votre sacoche est pleine ! L'objet a été envoyé\nà la <r<consigne>>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf("On raconte que le <r<dragon >>qui vit au sommet\ndu volcan adore bavarder.\n\n\nOn raconte aussi qu'il peut te parler des autres\nrégions jusqu'à ce que les oreilles t'en tombent.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf("On raconte qu'au sommet de ce volcan vit un\n<r<dragon>> drapé de flammes.\n\n\nOn raconte aussi qu'il vit dans une <r<fournaise\n>>où l'on peut difficilement pénétrer.")
/*< 53>*/ 		printf("Veux\x2010tu que je répète tout ça ?\n[1]Oui[2-]Non")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf("Ça ne t'intéresse pas, ce que je raconte ?<pause0F>\nJe vois...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Hé, Link ! Tu ne vas pas laisser\ntomber maintenant !\n\n\nUn homme finit toujours ce qu'il a commencé !")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf("On raconte que celui qui réalise un bon temps\nau <b<Wagonnet du péril >>gagne un <y<réceptacle de\nc\x153ur>>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x0F\x00Combien de temps voulez\x2010vous\ndormir ?\x0F\x01\x0F\n[1]Jusqu'au\nmatin[2]Jusqu'à\nla nuit[3-]Ne pas\ndormir")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf("On raconte que dans ce désert vit un\ngrand <r<dragon>> qui propose un programme\nd'entraînement.\n\nOn raconte aussi que celui qui relève son défi\npourra obtenir un <r<bouclier sacrément résistant>>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Voulez\x2010vous atterrir ici ?\n[1]Oui[2-]Non")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf("On raconte que pour capturer les insectes\nrares, il faut les approcher très lentement\navec un <y<grand filet>>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n\n\n\nUn <r<phénomène anormal>> semble s'être produit dans la\nforêt de Firone. Vous ne pouvez pas y atterrir pour le\nmoment.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf("\x0E\x01\x0F\x00Cette porte est fermée à <y<clé>>.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf("On raconte que dans les coffres des <b<cubes de la\nDéesse>> qui montent au ciel, on trouve aussi des\n<y<fragments de c\x153ur>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf("Pointez l'endroit où vous souhaitez atterrir avec \x0E\x02\x04\x02\x18CD\net confirmez avec (A).")
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n\n\n\nVous pouvez m'indiquer <pling>l'endroit où vous désirez\natterrir parmi les <b<statues d'oiseau >>que j'ai mémorisées.\n\n\nPointez l'endroit où vous souhaitez atterrir avec \x0E\x02\x04\x02\x18CD\net confirmez avec (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x0F\x00Cette pancarte est cassée.\nElle est illisible.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf("On raconte que si l'on dessine de l'argent sur\nles murs mystérieux, on peut devenir très riche.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x0F\x00Impossible de lire l'inscription d'ici.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf("On raconte que les <y<spores scintillantes>>, qui\nproviennent des champignons scintillants,\nont un effet sur les insectes et les monstres.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf("On raconte que si l'on dessine un cercle sur les\nmurs mystérieux, un objet rond apparaît.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("\x0E\x01\x0F\x00Cette porte est scellée.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("On raconte que si l'on dessine trois triangles\nsur les murs mystérieux, ça donne naissance\nà des <y<fées>>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("On raconte qu'un <y<fragment de c\x153ur >>est caché\npar ici.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf("Mais on raconte aussi que tu l'as déjà trouvé...\nHmm...")
          	  case 1:
/*< 79>*/ 		printf("Mais on raconte aussi que pour l'atteindre, il\nfaut s'engouffrer dans le sol comme un <b<Mogma>>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf("Boi\x2010oi\x2010oing !")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Voulez\x2010vous quitter ce monde ?\n[1]Partir[2-]Rester")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf("On raconte que celui qui coupe le bambou en\n<r<plus de 28 morceaux>> au <b<Tranche\x2010bambou >>gagne\nun trésor très précieux.\n\nOn raconte aussi que le record de l'ancienne\nidole est de 43 morceaux.")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf("On raconte que celui qui finit le niveau Expert\ndu <b<Paradis des insectes>> en moins de <r<deux\nminutes >>peut obtenir des insectes rares.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf("On raconte que nous autres, les <b<pierres à potins>>,\nattirons les <r<papillons>>.\n\n\nOn raconte aussi que lorsqu'une <r<douce mélodie\n>>résonne là où ils se rassemblent, nous faisons\n« Boi\x2010oi\x2010oing ».")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf("On raconte que si l'on dessine une flèche sur\nles murs mystérieux, un objet de forme similaire\napparaît.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf("On raconte que si l'on dessine un symbole\nd'amour sur les murs mystérieux, on se sent\nbeaucoup mieux.")
          }

