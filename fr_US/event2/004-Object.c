          void entrypoint_004_106() {
/*< 29>*/ 	start()
/*< 28>*/ 	printf("On raconte que celui qui déterre tous\nles rubis au <b<Fouille\x2010rubis >>de Radigume\ngagne un trésor rare.")
          }

          void entrypoint_004_107() {
/*< 57>*/ 	start()
/*< 58>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 56>*/ 		printf("On raconte que sous ce volcan se\nterrent les <b<Mogmas>>, qui raffolent\nde trésors.\n\nOn raconte aussi que dernièrement,\nils vivent plutôt tranquillement dans\nleur tanière.")
          	  case 1:
          		flw_59:
/*< 59>*/ 		printf("On raconte qu'un <r<dragon>> vit au <r<sommet\n>>de ce volcan.\n\n\nMais on raconte qu'ici, ce n'est pas\nle sommet...")
/*< 60>*/ 		printf("Voulez-vous que je répète tout ça?\n[1]Oui[2-]Non")
/*< 62>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_59
          		  case 1:
/*< 61>*/ 			printf("Ça ne vous intéresse pas, ce que je\nraconte?<pause0F> Je vois...")
          		}
          	}
          }

          void entrypoint_004_014() {
/*<  9>*/ 	start()
/*< 12>*/ 	switch (is_adventure_pouch_full()) {
          	  case 0:
/*< 13>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 11>*/ 			printf("Votre sacoche est pleine, ainsi que la\n<r<consigne>>. Vous avez remis l'objet dans\nson coffre.")
          		  case 1:
/*< 10>*/ 			printf("Votre sacoche est pleine!\nL'objet a été envoyé à la <r<consigne>>.")
          		}
          	  case 1:
          	}
          }

          void entrypoint_004_108() {
/*< 31>*/ 	start()
/*< 51>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 30>*/ 		printf("On raconte que le <r<dragon >>qui vit\nau sommet du volcan adore bavarder.\n\n\nOn raconte aussi qu'il peut vous parler\ndes autres régions jusqu'à ce que vos\noreilles en tombent.")
          	  case 1:
          		flw_52:
/*< 52>*/ 		printf("On raconte qu'au sommet de ce volcan\nvit un <r<dragon>> drapé de flammes.\n\n\nOn raconte aussi qu'il vit dans une\n<r<fournaise>> où l'on peut difficilement\npénétrer.")
/*< 53>*/ 		printf("Voulez-vous que je répète tout ça?\n[1]Oui[2-]Non")
/*< 55>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_52
          		  case 1:
/*< 54>*/ 			printf("Ça ne vous intéresse pas, ce que je\nraconte?<pause0F> Je vois...")
          		}
          	}
          }

          void entrypoint_004_015() {
/*< 14>*/ 	start()
/*< 15>*/ 	printf("Hé, Link!\nVous n'allez pas laisser tomber\nmaintenant!\n\nUn homme finit toujours ce qu'il a\ncommencé!")
          }

          void entrypoint_004_109() {
/*< 33>*/ 	start()
/*< 32>*/ 	printf("On raconte que celui qui réalise\nun bon temps au <b<Wagonnet du péril\n>>gagne un <y<quart de c\x153ur>>.")
          }

          void entrypoint_004_016() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x0F\x00Combien de temps\nvoulez\x2010vous dormir?\x0F\x01\x0F\n[1]Jusqu'au\nmatin[2]Jusqu'à\nla nuit[3-]Ne pas\ndormir")
/*< 50>*/ 	switch (choice(3)) {
          	  case 0:
          	  case 1:
          	  case 2:
          	}
          }

          void entrypoint_004_110() {
/*< 35>*/ 	start()
/*< 34>*/ 	printf("On raconte que dans ce désert vit\nun grand <r<dragon>> qui propose un\nprogramme d'entraînement.\n\nOn raconte aussi que celui qui relève\nson défi pourra obtenir un <r<bouclier\nbougrement résistant>>.")
          }

          void entrypoint_004_017() {
/*< 65>*/ 	start()
/*< 66>*/ 	printf("Voulez\x2010vous descendre ici?\n[1]Oui[2-]Non")
/*< 67>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_111() {
/*< 37>*/ 	start()
/*< 36>*/ 	printf("On raconte que pour capturer les\ninsectes rares, il faut les approcher\ntrès lentement avec un <y<grand filet>>.")
          }

          void entrypoint_004_018() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nUn <r<phénomène anormal>> semble s'être\nproduit dans la forêt de Firone. Vous\nne pouvez pas y descendre pour le\nmoment.")
          }

          void entrypoint_004_001() {
          	start()
/*<  2>*/ 	printf("\x0E\x01\x0F\x00Cette porte est fermée à <y<clé>>.\x0F\x01\x0F")
          }

          void entrypoint_004_112() {
/*< 39>*/ 	start()
/*< 24>*/ 	printf("On raconte que dans les coffres des\n<b<cubes de la Déesse>> qui montent au ciel,\non trouve aussi des <y<quarts de c\x153ur>>.")
          }

          void entrypoint_004_019() {
/*< 70>*/ 	start()
/*< 71>*/ 	switch (story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */]) {
          	  case 0:
/*< 72>*/ 		printf("Pointez l'endroit où vous voulez\ndescendre avec \x0E\x02\x04\x02\x18CD et confirmez\navec (A).")
          	  case 1:
/*< 73>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\n\nVous pouvez m'indiquer <pling>l'endroit\noù vous désirez atterrir parmi les\n<b<statues d'oiseau >>que j'ai mémorisées.\n\nPointez l'endroit où vous souhaitez\natterrir avec \x0E\x02\x04\x02\x18CD et confirmez avec (A).")
/*< 74>*/ 		story_flags[843 /* us: 805A9B35 0x04, jp: 805ACDB5 0x04 */] = true;
          	}
          }

          void entrypoint_004_002() {
/*<  1>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x0F\x00Cette pancarte est cassée.\nElle est illisible.\x0F\x01\x0F")
          }

          void entrypoint_004_113() {
/*< 41>*/ 	start()
/*< 40>*/ 	printf("On raconte que si l'on dessine de\nl'argent sur les murs mystérieux,\non peut devenir très riche.")
          }

          void entrypoint_004_003() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x0F\x00Impossible de lire\nl'inscription d'ici.\x0F\x01\x0F")
          }

          void entrypoint_004_114() {
/*< 43>*/ 	start()
/*< 26>*/ 	printf("On raconte que les <y<spores scintillantes>>,\nqui proviennent des champignons\nscintillants, ont un effet sur les insectes\net les monstres.")
          }

          void entrypoint_004_115() {
/*< 45>*/ 	start()
/*< 44>*/ 	printf("On raconte que si l'on dessine un\ncercle sur les murs mystérieux, un\nobjet rond apparaît.")
          }

          void entrypoint_004_004() {
/*< 46>*/ 	start()
/*< 47>*/ 	printf("\x0E\x01\x0F\x00Cette porte est scellée.\x0F\x01\x0F")
          }

          void entrypoint_004_116() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("On raconte que si l'on dessine trois\ntriangles sur les murs mystérieux,\nça donne naissance à une <y<fée>>.")
          }

          void entrypoint_004_117() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("On raconte qu'un <y<quart de c\x153ur\n>>est caché par ici.")
/*< 77>*/ 	switch (scene_flags[104 /* 0xC 01 */]) {
          	  case 0:
/*< 78>*/ 		printf("Mais on raconte aussi que vous l'avez\n déjà trouvé... Hmm...")
          	  case 1:
/*< 79>*/ 		printf("Mais on raconte aussi que pour\nl'atteindre, il faut se terrer dans\nle sol comme un <b<Mogma>>.")
          	}
          }

          void entrypoint_004_100() {
/*< 17>*/ 	start()
/*< 16>*/ 	printf("Boi\x2010oi\x2010oing!")
          }

          void entrypoint_004_008() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("Voulez\x2010vous quitter cet Hypnéa?\n[1]Quitter[2-]Rester")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
          	  case 1:
          	}
          }

          void entrypoint_004_101() {
/*< 19>*/ 	start()
/*< 18>*/ 	printf("On raconte que celui qui coupe le\nbambou en <r<plus de 28 morceaux>> au\n<b<Tranche\x2010bambou >>gagne un trésor\ntrès précieux.\nOn raconte aussi que c'est une\nancienne idole qui détient\nle record de 43 morceaux. Du\nmoins, c'est ce qu'on dit.")
          }

          void entrypoint_004_102() {
/*< 21>*/ 	start()
/*< 20>*/ 	printf("On raconte que celui qui finit le niveau\nExpert du <b<Paradis des insectes>> en\nmoins de <r<deux >><r<minutes >>peut obtenir\ndes insectes rares.")
          }

          void entrypoint_004_103() {
/*< 23>*/ 	start()
/*< 22>*/ 	printf("On raconte que nous autres, les <b<pierres\nà potins>>, attirons les <r<papillons>>.\n\n\nOn raconte aussi que lorsqu'une\n<r<douce mélodie>> résonne là où ils\nse rassemblent, nous faisons\n« Boi\x2010oi\x2010oing ».")
          }

          void entrypoint_004_104() {
/*< 25>*/ 	start()
/*< 38>*/ 	printf("On raconte que si l'on dessine une\nflèche sur les murs mystérieux, un\nobjet de forme similaire apparaît.")
          }

          void entrypoint_004_105() {
/*< 27>*/ 	start()
/*< 42>*/ 	printf("On raconte que si l'on dessine un\nsymbole d'amour sur les murs\nmystérieux, on se sent beaucoup mieux.")
          }

