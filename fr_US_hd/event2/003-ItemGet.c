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
/*<151>*/ 					printf("Vous avez rassemblé tous les <y<fragments de clé>>!\nVous pouvez désormais ouvrir la porte du temple.\n\n\nRetournez vite au sommet de la montagne pour\nretrouver Zelda qui a été emmenée dans le\ntemple!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("Vous avez obtenu un <y<fragment de clé>>!\nC'est une partie de la clé qui ouvre la porte du\ntemple. Il ne vous manque qu'<r<un>> fragment pour\nreconstituer la clé!")
          				}
          			  case 1:
/*< 26>*/ 				printf("Vous avez obtenu un <y<fragment de clé>>!\nC'est une partie de la clé qui ouvre la porte du\ntemple. Il vous manque <r<deux>> fragments pour\nreconstituer la clé!")
          			}
          		  case 1:
/*< 29>*/ 			printf("Vous avez obtenu un <y<fragment de clé>>!\nC'est une partie de la clé qui ouvre la porte du\ntemple. Il vous manque <r<trois>> fragments pour\nreconstituer la clé!")
          		}
          	  case 1:
/*<150>*/ 		printf("Vous avez obtenu un <y<fragment de clé>>!\nC'est une partie de la clé qui ouvre la porte\ndu temple.\n\nIl vous faut cinq fragments pour la reconstituer.\nDénichez les <r<quatre >>fragments restants!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("Vous avez obtenu une <y<épée d'entraînement>>!\nElle est utilisée lors des cours d'escrime à l'école\nde chevalerie. Elle a un bon tranchant.\n\nAppuyez sur \x0E\x02\x04\x02\x3CD en tout temps pour consulter\nvotre inventaire.\x0E\x01\x11\x02\x3CD")
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
/*<582>*/ 			printf("Vous avez obtenu la <y+<Triforce de la sagesse>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("Vous avez obtenu la <y+<Triforce de la sagesse>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<537>*/ 			printf("Il ne vous manque plus qu'<r<une>> partie!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("Vous avez obtenu la <y+<Triforce de la sagesse>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<536>*/ 			printf("Il vous manque encore <r<deux>> parties!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("Vous avez obtenu la <y<médaille maléfique>>!\nElle fait apparaître plus fréquemment les trésors\net les rubis. Mais sa malédiction vous empêchera\nd'ouvrir votre sacoche!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<268>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier de fer\nrenforcé>>! C'est le plus robuste des boucliers de\nfer.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("Vous avez obtenu un <y<cristal maléfique>>!\nIl s'agit du c\x153ur cristallisé d'un monstre. Il est\ntrès rare de dénicher un spécimen dans un si bon\nétat de conservation!")
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
/*<451>*/ 		printf("Vous avez rassemblé toutes les <y<larmes de Nayru>>.\nVotre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*<447>*/ 		printf("Vous avez obtenu une <y<larme de Nayru>>!\nSon pouvoir sacré immobilise les Gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve!")
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
/*< 59>*/ 	printf("Vous avez obtenu la <y<sculpture dorée>>!\nDe mystérieux symboles ornent la surface de\ncette \x153uvre en or à la forme surprenante.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("Vous avez obtenu l'<y<épée divine>>!\nUne lumière sacrée émane de cette arme mystique.\n\n\nElle a gardé le souvenir des combats passés.\nLe <r<pouvoir de l'éclat céleste >>qui l'emplit lorsqu'elle\nest brandie vers le ciel est <r<<pling>à son maximum>>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("Vous avez obtenu l'<y<épée divine>>!\nUne lumière sacrée émane de cette arme mystique.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("Vous avez obtenu la <y<carte marine ancienne>>!\nElle représente la mer qui s'étendait autrefois\nà la place du désert.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("Votre lance\x2010pierre a été amélioré en <y<lance\x2010pierre\nrafale>>! Vous pouvez attaquer une large zone en\nune seule fois. Maintenez \x0E\x02\x04\x02\x29CD enfoncé pour un tir\nplus puissant.\x0E\x01\x11\x02\xFCD")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("Vous avez obtenu un <y<bouclier sacré>>!\nLe pouvoir qu'il renferme lui permet de se\nréparer tout seul. Il protège du feu, de\nl'électricité et des malédictions!")
          		  case 1:
/*<673>*/ 			printf("Vous avez obtenu un <y<bouclier sacré>>!\nLe pouvoir renfermé par ce mystérieux bouclier\nlui permet de <r<se réparer tout seul>>.\n\nPeu résistant, il se brise facilement mais il\npermet de se protéger du feu, de l'électricité\net des malédictions.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("Vous avez obtenu une <y<plume bleue>>!\nLes petits pioups sont très rarement bleus.\nLes plumes de cette couleur n'en sont que\nplus précieuses!")
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
/*<446>*/ 		printf("Vous avez rassemblé toutes les <y<larmes de la\nDéesse>>. Votre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*<442>*/ 		printf("Vous avez obtenu une <y<larme de la Déesse>>!\nSon pouvoir sacré immobilise les Gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve!")
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
/*< 44>*/ 	printf("Vous avez obtenu une <y<baie de lumière>>!\nCe fruit étrange vous indiquera la position des\nlarmes par des balises de lumière pendant\n<r<30 secondes>>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("Vous avez obtenu une <y<potion de santé \x2605\x2605>>!\nUn flacon contient <r<deux doses >>de ce précieux\nbreuvage qui <r<restaure tous vos c\x153urs>>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("Vous avez récupéré les <y<gants Mogma>>!\nEssayez de sortir d'ici comme le ferait un\nvrai Mogma.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("Vous avez obtenu les <y<gants Mogma>>!\nMême les Mogmas ne mettent pas souvent les\npattes sur des gants creuse-tout de cette valeur!\n\nIls permettent non seulement de creuser, <g<mais\naussi de se terrer>>. Cherchez des trous un peu\npartout!")
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
/*<567>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<278>*/ 		printf("Votre bouclier est maintenant un <y<bouclier sacré\namélioré>>! Le pouvoir qu'il renferme lui permet\nde se réparer tout seul. Il est plus résistant!")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("Votre filet a été amélioré en <y<grand filet>>!\nCelui-ci est deux fois plus grand. Même les\ninsectes les plus agiles auront peine à vous\néchapper!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("Vous avez obtenu un <y<crâne d'or>>!\nLes collectionneurs diront qu'il s'agit là d'un objet\nexceptionnel, une vraie rareté! Il n'en luit pas\nmoins d'un éclat inquiétant...")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("Vous avez accepté de vous charger de la <y<lettre\nd'Orbo>>! Qui sait si son contenu est réellement\nsincère?\n\nGardez\x2010vous néanmoins de vous en servir comme\npapier brouillon, ce serait impoli.")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("Vous avez obtenu de la <y<potion d'invincibilité>>!\nCette étrange potion diminue de moitié les dégâts\nsubis. Son effet ne dure que <r<trois minutes>>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("Vous avez obtenu <r<un >><y<cristal de gratitude>>!\nIl est tombé lorsqu'une personne débordante\nde gratitude est passée par ici.\n\nRassemblez\x2010en plusieurs et apportez\x2010les\nà<b< Morcégo>>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("Vous avez obtenu la <y<statuette de dragon>>!\nCette sculpture en or massif reproduit\nadmirablement les circonvolutions\ngracieuses d'un dragon légendaire.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("Vous avez récupéré la <y<véritable épée maîtresse>>!\nVous allez enfin pouvoir laisser éclater votre\ncolère! Gare à celui qui se dressera sur votre\nroute!\nDe plus, vous allez à nouveau pouvoir parler\navec <pling><b<Fay>>!")
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
/*<568>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<277>*/ 		printf("Votre bouclier est maintenant un <y<bouclier sacré\nultime>>! Le pouvoir qu'il renferme lui permet de\nse réparer tout seul. Il est encore plus résistant!")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>!\nOn observe une invasion de ces insectes une fois\ntous les dix ans. Ils détruisent toute la végétation\nsur leur passage.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x3CD>>!\nOn observe une invasion de ces insectes une fois\ntous les dix ans. Ils détruisent toute la végétation\nsur leur passage.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("Vous avez obtenu une <y<poussière de Déesse>>!\nOn raconte que la Déesse aurait laissé tomber\nces trésors légendaires très rares il y a des\ngénérations.")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("Vous avez obtenu la <y<cage à insecte>>!\nL'insecte bien\x2010aimé de Beedle se trouve\nà l'intérieur! Dépêchez\x2010vous de le lui rapporter!")
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
          	printf("Vous avez obtenu de la <y<potion d'invincibilité \x2605>>!\n\n\n\nCette potion extrêmement puissante vous protège\nde tout dégât pendant <r<trois minutes>>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("Vous avez récupéré la <y<jarre des vents>>!\nVous allez pouvoir faire un peu de ménage!")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("Vous avez obtenu la <y<jarre des vents>>!\nCet objet antique et insolite est capable de générer\nde violentes bourrasques.")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("Vous avez obtenu le <y<circuit antique>>!\nCette pièce forgée dans l'or pur semble compléter\nun mécanisme. Sa surface est incrustée de circuits\nélectriques.")
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
/*<246>*/ 	printf("Vous avez obtenu une <y<bourse moyenne>>!\nSa capacité est un peu plus grande que celle\nde votre ancienne bourse.\n\nVous pouvez y ranger <r<500 rubis>>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("Vous avez obtenu le <y<bouclier d'Hylia>>!\nL'aura des héros émane de ce bouclier légendaire.\nAucune attaque ne peut l'endommager!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x4CD>>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("Vous avez obtenu de la <y<polypotion \x2605\x2605>>!\nElle restaure <r<automatiquement >>la jauge de votre\nbouclier, ainsi que <r<huit>> de vos c\x153urs. Et en plus,\nvous pouvez l'utiliser <r<deux fois>>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("Vous avez obtenu un <s<rubis argenté>>!\nSa valeur est de <r<100 rubis>>! Extraordinaire!\nVoilà qui doit vous faire chaud au c\x153ur!")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("Vous avez obtenu de la <y<potion d'endurance>>!\nLorsque vous l'utilisez, votre jauge d'endurance se\nvide plus lentement. Son effet dure <r<trois minutes>>!")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("Vous avez obtenu une <y<grande bourse>>!\nElle a une capacité bien supérieure à celle\nde votre ancienne bourse.\n\nVous pouvez y ranger <r<1 000 rubis>>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("Vous avez obtenu de la <y<polypotion>>!\nCe produit étrange <r<remplit entièrement >>la jauge\nde votre bouclier et vous rend <r<quatre>> c\x153urs!")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>!\nOn raconte que son venin a des vertus médicinales\nune fois bouilli. Ne vous laissez pas prendre dans\nun essaim!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x5CD>>!\nOn raconte que son venin a des vertus médicinales\nune fois bouilli. Ne vous laissez pas prendre dans\nun essaim!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("Vous avez trouvé un <y<hochet>>!\nVoilà le genre de jouet qui ferait le bonheur d'un\njeune enfant... Quelqu'un a dû le laisser tomber.")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("Vous avez obtenu de la <y<soupe de citrouille\nchaude >>! C'est la spécialité du patron. Mais\nattention, elle sera froide dans<r< cinq minutes>>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("Vous avez obtenu l'<y<écaille du dragon d'eau>>!\nC'est une des reliques de la Déesse. Elle vous\npermet de nager sous l'eau et de tourbillonner.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("Vous avez obtenu la <y<carte du donjon>>!\nVous pouvez examiner la disposition des lieux et\nlocaliser les pièces que vous n'avez pas encore\nvisitées.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("L'emplacement des coffres y est également\nindiqué. Prenez le temps d'y jeter un coup d'\x153il!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("Vous avez obtenu un <y+<rubis doré>>!\nSa valeur est de <r<300 rubis>>! Exceptionnel!\nMieux vaut garder ça pour vous...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("Vous avez obtenu de la <y<potion d'endurance \x2605>>!\nCet élixir miraculeux empêche votre jauge\nd'endurance de se vider pendant <r<trois minutes>>!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("Vous avez obtenu de la <y<polypotion \x2605>>!\nCette substance prodigieuse répare\n<r<automatiquement >>votre bouclier lorsqu'il\nest détruit et vous rend <r<huit>> c\x153urs!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x6CD>>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("Vous avez obtenu des <y<larves de guêpes>>!\nCes larves fraîchement extraites du nid peuvent\ncertainement être utilisées comme ingrédient.\nElles sont pleines de protéines.")
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
/*< 54>*/ 	printf("Vous avez obtenu un <black<roupir>>!\nVous perdez <r<10 rubis>>. Une vague tristesse\nvous gagne...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("Vous avez obtenu le <y<réceptacle spirituel>>!\nCette fleur étonnante représente la maturité\nde votre âme.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("Vous avez obtenu une <y<potion d'oxygène>>!\nLorsque vous l'utilisez, votre jauge d'oxygène se\nvide plus lentement. Son effet dure <r<trois minutes>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("Vous avez obtenu une <y<bourse énorme>>!\nElle a une capacité largement supérieure à celle\nde votre ancienne bourse.\n\nVous pouvez y ranger <r<5 000 rubis>>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("Vous avez obtenu un <y<petit sac de graines>>!\nIl peut contenir <r<10>> graines Mojo supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre lance\x2010pierre.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>!\nOn dit que sa couleur rouge vient du minerai\nqu'elle mange. Elle est plutôt tranquille et reste\nsouvent immobile.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x7CD>>!\nOn dit que sa couleur rouge vient du minerai\nqu'elle mange. Elle est plutôt tranquille et reste\nsouvent immobile.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xFCD>>!\nCes délicates petites plumes sont très prisées\nà Célesbourg. Peut\x2010être leur trouverez\x2010vous\nune utilité.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("Vous avez récupéré la <y<pousse de l'arbre de vie>>!\nElle ne peut pas s'épanouir assez rapidement ici.\nCherchez un endroit plus approprié pour la\nplanter.")
          	  case 1:
/*<490>*/ 		printf("Vous avez obtenu la <y<pousse de l'arbre de vie>>!\nEn grandissant, elle deviendra l'arbre légendaire\ndont le fruit détient un grand pouvoir de guérison.")
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
/*<599>*/ 			printf("Vous avez récupéré le <y<lance\x2010pierre rafale>>!\nÉtourdissez les patrouilles ennemies!")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("Vous avez récupéré le <y<lance\x2010pierre>>!\nÉtourdissez les patrouilles ennemies!")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("Vous avez obtenu le <y<lance\x2010pierre>>!\nIl vous permet de tirer des graines Mojo qui\nétourdissent vos ennemis.")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("Vous avez obtenu <r<cinq>> <y<cristaux de gratitude>>!\nChacun d'entre eux est un concentré d'essence\nde reconnaissance.\n\nLorsque vous venez en aide à quelqu'un, sa\ngratitude se matérialise sous la forme de <r<cinq\n>>de ces cristaux.")
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
/*< 87>*/ 		printf("Il n'y a rien d'intéressant là\x2010dedans!")
          	  case 1:
/*<596>*/ 		printf("Ça ne se fait pas de fouiller dans le placard\ndes gens... Quand même!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("Vous avez obtenu une <y<potion d'oxygène \x2605>>!\nCe merveilleux élixir empêche votre jauge\nd'oxygène de se vider pendant <r<trois minutes.>>")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("Vous avez obtenu la <y<bourse de star>>!\nVoilà qui impressionnerait même les plus\nfortunés... Vous pouvez y ranger la somme\nastronomique de <r<9 000 rubis>>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("Votre sac a été amélioré en <y<sac de graines moyen>>!\nIl peut contenir <r<20>> graines Mojo supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre lance\x2010pierre.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>!\nCe lépidoptère est présent à peu près partout.\nIl arrive même parfois qu'on le rencontre dans\ndes lieux insolites.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x8CD>>!\nCe lépidoptère est présent à peu près partout.\nIl arrive même parfois qu'on le rencontre dans\ndes lieux insolites.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("Vous avez obtenu un <y<virevoltant>>!\nPeut\x2010être trouverez\x2010vous une utilité à cette boule\nd'herbe séchée. Apportez\x2010la avec vous, qui sait?")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("Vous avez obtenu le <y<joyau des épreuves>>!\nCette pierre mènera le héros à l'endroit où repose\nla Triforce.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("Vous avez obtenu un <y<fruit de l'arbre de vie>>!\nCe fruit légendaire aurait le pouvoir de guérir\ntoutes les maladies. Apportez\x2010le vite au dragon\nde foudre!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("Vous avez obtenu le <y<scarabée>>!\nCet engin en forme d'insecte vole dans les airs\net vous permet d'explorer les environs!\n\nPlacez le curseur à l'endroit vers lequel vous\nvoulez qu'il s'envole puis appuyez sur \x0E\x02\x04\x02\x29CD pour\nle lancer!\x0E\x01\x11\x02\xFCD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("Vous avez obtenu des <y<spores scintillantes>>!\nCette poussière fongique est produite par les\nchampignons scintillants.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("Vous avez obtenu l'<y<arc>>!\nVous pouvez tirer sur des cibles distantes!\nVos flèches infligeront d'importants dégâts.")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("Vous avez obtenu une <y<petite clé>>!\nElle vous permettra d'ouvrir une porte verrouillée.\nVous ne pouvez l'utiliser que dans cette zone.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("Vous avez obtenu la <y<médaille insecte>>!\nLorsque vous l'avez sur vous, vous pouvez trouver\ndes insectes facilement. Suivez les \x0E\x02\x04\x02\x1ACD sur votre\ncarte!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("Vous avez attrapé une <y<fée>>!\nCette bienveillante créature vous rendra\n<r<six c\x153urs>>.\n\nSi vous la transportez dans un flacon, elle en\nsortira <r<lorsque vous serez à bout de forces >>et\nvous soignera <r<automatiquement>>!")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("Vous avez récupéré votre <y<sacoche d'aventurier>>!\nEt tout le reste de votre équipement par la même\noccasion!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("Vous avez obtenu la <y<sacoche d'aventurier>>!\nC'est un accessoire fort pratique dans lequel vous\npouvez ranger les objets utiles à vos aventures.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>!\nOn dit que ce spécimen capable de survivre dans\nles déserts les plus arides bâtit sa fourmilière\nsur une source d'eau.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x9CD>>!\nOn dit que ce spécimen capable de survivre dans\nles déserts les plus arides bâtit sa fourmilière\nsur une source d'eau.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("Vous avez obtenu une <y<queue de lézard>>!\nL'extrémité de cet appendice est équipée d'une\ndangereuse boule à pointes. Un objet répugnant,\nmais qui peut servir...")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("Vous avez obtenu une <y<bourse annexe>>!\nVotre bourse peut maintenant contenir <r<300 rubis\n>>supplémentaires!")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("Vous avez obtenu le <y<filet>>!\nVous pouvez attraper de petits insectes et\ncertaines autres créatures. Approchez\x2010les\navec précaution et soyez vif!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("Vous avez rempli votre flacon d'<y<eau ordinaire>>!\nIl s'agit d'eau tout ce qu'il y a de plus normal.\nQui sait, elle pourrait vous servir.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("Vous avez obtenu un <g+<rubis vert>>!\nSa valeur est de <r<1 rubis>>.\nC'est le début d'une petite fortune!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("Vous avez ajouté une poche à votre <y<sacoche\nd'aventurier>>! Vous pouvez y ranger <r<un objet\nsupplémentaire>>!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("Votre sac a été amélioré en <y<grand sac de graines>>!\nIl peut contenir <r<30>> graines Mojo supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre lance\x2010pierre.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>!\nCet insecte demeure caché sous la terre à l'état\nlarvaire pendant plus de dix ans. Sa capture\ndemande de la patience!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xACD>>!\nCet insecte demeure caché sous la terre à l'état\nlarvaire pendant plus de dix ans. Sa capture\ndemande de la patience!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("Vous avez obtenu du <y<minerai d'Ordinn>>!\nCette pierre extrêmement dure scintille joliment.\nSes emplois sont multiples.")
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
/*<507>*/ 		printf("Vous avez trouvé une <y<fée>>!\nCes créatures bienveillantes vous rendent\n<r<6 c\x153urs>>!\n\nMalheureusement, vous n'avez pas de <y<<item99>>>.\nVous allez devoir la laisser partir.")
          	  case 1:
/*<505>*/ 		printf("Vous avez trouvé une <y<fée>>!\nCes créatures bienveillantes vous rendent\n<r<6 c\x153urs>>!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("Vous avez obtenu un flacon de <y<spores de\nchampignon>>! Ces spores produites par un\nchampignon géant sont très efficaces pour\nsoigner les blessures des oiseaux!")
          	  case 1:
/*< 36>*/ 		printf("Votre flacon est rempli de <y<spores de champignon>>!\nElles proviennent d'un champignon géant.\nCela pourrait vous servir.")
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
/*<409>*/ 		printf("Vous avez récupéré votre <y<grappin>>!\nVous pouvez à nouveau atteindre des zones\néloignées!")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("Vous avez obtenu le <y<grappin>>!\nC'est une des reliques sacrées de la Déesse.\nIl permet à celui qui le possède d'élargir son\nchamp d'action.\nVisez les <r<cibles>> ou le <r<lierre>>, puis tirez pour vous\ntracter à l'endroit où sa griffe s'est accrochée.")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("Vous avez obtenu un <b+<rubis bleu>>!\nSa valeur est de <r<5 rubis>>. Placez\x2010le soigneusement\ndans votre bourse!")
          	  case 1:
/*< 84>*/ 		printf("Vous avez obtenu un <b+<rubis bleu>>!\nSa valeur est de <r<5 rubis>>. Quelle chance!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("Vous avez obtenu une <y<médaille de vie>>!\nAvec elle, votre énergie vitale maximale\naugmentera d'<r<un c\x153ur>>. Cela peut parfois\ns'avérer utile...")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("Vous avez obtenu un <y<petit carquois>>!\nIl peut contenir <r<5>> flèches supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>!\nSes yeux à facettes ont l'éclat du saphir et ses\nailes la délicatesse du cristal!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xBCD>>!\nSes yeux à facettes ont l'éclat du saphir et ses\nailes la délicatesse du cristal!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("Vous avez obtenu une <y<fleur ancienne>>!\nOn dit qu'elle fleurissait bien longtemps avant\nnotre ère. Délicate et mystérieuse, elle brille\ndans l'obscurité.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("Vous avez obtenu les <y<gants creuse\x2010tout>>!\nLeurs griffes acérées sont idéales pour\ncreuser la terre.\n\nSi vous trouvez des traces suspectes au sol,\napprochez\x2010vous et appuyez sur (A) pour creuser!")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("Vous avez obtenu la <y<statuette d'oiseau>>!\nC'est la preuve que vous avez remporté la\nchevauchée céleste. Zelda sera sûrement\nimpressionnée!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("Vous avez obtenu un <r+<rubis rouge>>!\nSa valeur est de <r<20 rubis>>. N'allez pas tout\ndépenser d'un coup! Chanceux, va.")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("Votre arc a été amélioré en <y<arc de fer>>!\nRéservé aux archers expérimentés, il cause de\nplus grands dégâts que votre arc précédent.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("Votre carquois a été amélioré en<y< carquois moyen>>!\nIl peut contenir <r<10>> flèches supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("Vous avez obtenu une <y<perle d'ambre>>!\nOn trouve cette gemme d'un jaune profond un\npeu partout. Nul ne sait à quoi elle doit sa forme\nsi particulière.")
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
/*< 16>*/ 		printf("Vous avez obtenu <y<5 graines Mojo>>!\nVous pouvez tirer ces petites graines avec votre\nlance\x2010pierre. Gardez un \x153il sur vos réserves!")
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
/*< 82>*/ 	printf("La <y+<Triforce>> est reconstituée!\nVous allez pouvoir exaucer le souhait de Zelda\net <r<détruire>> l'<b<Avatar du Néant>>.")
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
/*<156>*/ 		printf("Vous avez obtenu de l'<y<eau sacrée>>!\nIl ne s'agit pas là d'une eau ordinaire!\nSon extrême pureté recèle un grand pouvoir.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("Vous avez obtenu de l'<y<eau sacrée>>!\nSon extrême pureté lui donne le pouvoir\nde guérir les blessures du dragon d'eau.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("Votre arc a été amélioré en <y<arc sacré>>!\nGrâce à la prière de la Déesse, il déploie une\npuissance dévastatrice contre les monstres!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<262>*/ 		printf("Vous avez obtenu un <y<bouclier de bois>>!\nConstitué de bois léger, il est très facile à manier,\nmais attention : il brûle et se brise facilement!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("Votre carquois a été amélioré en<y< grand carquois>>!\nIl peut contenir <r<15>> flèches supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>!\nCe minuscule insecte pousse une boule de...\nquelque chose jusqu'à son nid. N'est\x2010il pas\nadorable?")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xCCD>>!\nCe minuscule insecte pousse une boule de...\nquelque chose jusqu'à son nid. N'est\x2010il pas\nadorable?")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("Vous avez obtenu une <y<perle d'ombre>>!\nD'apparence similaire à la perle d'ambre, elle est\npourtant très différente. On ne la trouve qu'en des\nlieux spécifiques.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("Vous avez obtenu <y<5 bombes>>!\nVous pouvez les lancer ou les faire rouler pour\ndétruire des matériaux résistants. Ravitaillez-vous\ndès que possible!")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("Vous avez obtenu un <y<c\x153ur>>!\nL'énergie vitale qu'il contient restaure\nvotre vie d'<r<un>> c\x153ur.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("Vous avez récupéré votre <y<sac de bombes>>!\nEn avant pour le feu d'artifice!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("Vous avez obtenu le <y<sac de bombes>>!\nNe trahissez pas la confiance de <b<Ferrug>>,\nprenez\x2010en soin!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("Vous avez trouvé un <y<sac de bombes>>!\nCette pochette fort commode permet d'emporter\navec soi les fleurs bombes ramassées.\n\nVoilà qui pourrait vous permettre d'accéder à des\nzones jusqu'ici inaccessibles... Voyez si <b<Ferrug\n>>accepte de vous le prêter!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("Votre scarabée a été amélioré en <y<scarabée\nà crochet>>! Ses nouvelles mandibules lui\npermettent de transporter des objets.\n\nLorsque vous passez en vue aérienne en\nmaintenant (Z) enfoncé, l'objet qu'il transporte\npeut être lâché.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<261>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier de bois\nsolide>>! Léger et maniable, il est plus solide qu'un\nbouclier de bois ordinaire!")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("Vous avez obtenu un <y<petit sac de bombes>>!\nIl peut contenir <r<5>> bombes supplémentaires.\nPrenez\x2010le lorsque vous avez besoin de bombes!")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>!\nVoici un insecte très populaire parmi les enfants\nde Célesbourg. Mais attention aux doigts, ça\npince!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xDCD>>!\nVoici un insecte très populaire parmi les enfants\nde Célesbourg. Mais attention aux doigts, ça\npince!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("Vous avez obtenu une <y<gélatibulle>>!\nCet objet n'est pas particulièrement agréable à\nregarder, mais ses propriétés uniques en font\nun matériau précieux.")
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
/*<464>*/ 	printf("Vous avez appris le <y<Chant de la Déesse>>!\nCette mystérieuse mélodie provient de temps\nanciens.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("Vous avez obtenu <y<dix bombes>>!\nVous pouvez les lancer ou les faire rouler pour\ndétruire des matériaux résistants. Rangez\x2010les dans\nvotre sac de bombes!")
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
/*< 80>*/ 		printf("Vous avez obtenu une <y<flèche perdue>>!\nVous pouvez la réutiliser avec votre arc.\nCe serait dommage de ne pas s'en servir!")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("Vous avez obtenu un <y<réceptacle de c\x153ur>>!\nVotre énergie vitale maximale est augmentée\nd'<r<un c\x153ur>>, et tous vos c\x153urs sont restaurés!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("Votre scarabée a été amélioré en <y<scarabée rapide>>!\nGare aux excès de vitesse!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("Vous avez obtenu une <y<médaille c\x153ur>>!\nAvec elle, même en <r<mode héroïque>>, les c\x153urs\napparaissent et les fl\x153urs fleurissent.\n\nSi votre santé vous préoccupe, c'est l'objet idéal!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("Vous avez obtenu une <y<médaille c\x153ur>>!\nAvec elle, les c\x153urs apparaîtront plus\nfréquemment. Si votre santé vous préoccupe,\nc'est l'objet idéal!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<260>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier de bois\nrenforcé>>. C'est le plus robuste des boucliers de\nbois. Il conserve néanmoins toute sa légèreté.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("Votre sac a été amélioré en <y<sac de bombes\nmoyen>>! Il peut contenir <r<10 >>bombes\nsupplémentaires. Prenez\x2010le lorsque vous avez\nbesoin de bombes!")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>!\nVoici le plus rare des petits habitants du ciel.\nIl se tapit habituellement dans l'obscurité.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xECD>>!\nVoici le plus rare des petits habitants du ciel.\nIl se tapit habituellement dans l'obscurité.")
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
/*< 46>*/ 	printf("Vous avez obtenu une <y<baie d'endurance>>!\nCes fruits mystérieux remplissent immédiatement\nvotre jauge d'endurance.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("Vous avez obtenu la <y<statuette sereine>>!\nCette sculpture de bois inspire la plénitude.\nElle ressemble à la statue de pierre de l'étage\nsupérieur.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("Vous avez obtenu <y<10 flèches>>!\nVous pourrez les tirer avec votre arc. Leur\nnombre est limité, utilisez-les avec discernement!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("Votre scarabée a été amélioré en <y<scarabée\nendurant>>! Il peut maintenant voler plus\nlongtemps. Voilà qui ouvre de nouvelles\nperspectives!")
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
/*<208>*/ 				printf("Vous avez obtenu un <y<quart de c\x153ur>>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un c\x153ur.\nPlus qu'<r<un>>!")
          			  case 1:
/*<200>*/ 				printf("Vous avez obtenu un <y<quart de c\x153ur>>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un c\x153ur.\nPlus que <r<deux>>!")
          			}
          		  case 1:
/*<203>*/ 			printf("Vous avez obtenu un <y<quart de c\x153ur>>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un c\x153ur.\nPlus que <r<trois>>!")
          		}
          	  case 1:
/*<207>*/ 		printf("Vous avez obtenu un <y<quart de c\x153ur>>!\nVous avez formé un nouveau réceptacle de c\x153ur.\nVotre énergie vitale maximale augmente\nd'un c\x153ur!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("Vous avez obtenu une <y<médaille rubis>>!\nAvec elle, les rubis apparaîtront plus\nfréquemment. Pensez\x2010y quand vous êtes\nà court d'argent!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<270>*/ 		printf("Vous avez obtenu un <y<bouclier de fer>>!\nLe fer a l'avantage de ne pas brûler et de mieux\nrésister aux impacts, mais il ne protège pas du\ncourant électrique!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("Votre sac a été amélioré en <y<grand sac de bombes>>!\nIl peut contenir <r<15 >>bombes supplémentaires.\nPrenez\x2010le lorsque vous avez besoin de bombes!")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("Vous avez obtenu un <y<flacon vide>>!\nVous pouvez le remplir de différentes choses.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("Vous avez obtenu une <y<griffe de monstre>>!\nCette griffe acérée a l'air tranchante comme un\nrasoir... Le monstre dont elle provient doit faire\npeur à voir.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("Vous avez obtenu <y<10 graines Mojo>>!\nVous pouvez lancer ces petites graines avec votre\nlance-pierre. Gardez un \x153il sur vos réserves!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("Vous avez rassemblé toutes les <y<larmes de Farore>>.\nVotre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*< 45>*/ 		printf("Vous avez obtenu une <y<larme de Farore>>!\nSon pouvoir sacré immobilise les Gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("Vous avez obtenu le <y<cristal mystérieux>>!\nLes cubes qui le composent brillent d'un éclat\ndiscret. Il en manque quelques\x2010uns.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("Vous avez obtenu une <y<potion de santé>>!\nLorsque vous la buvez, vous récupérez <r<8 c\x153urs>>!")
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
/*<580>*/ 			printf("Vous avez obtenu la <y+<Triforce du courage>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("Vous avez obtenu la <y+<Triforce du courage>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<532>*/ 			printf("Il ne vous manque plus qu'<r<une>> partie!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("Vous avez obtenu la <y+<Triforce du courage>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<531>*/ 			printf("Il vous manque encore <r<deux>> parties!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("Vous avez obtenu la <y<médaille trésor>>!\nAvec elle, les trésors apparaîtront plus\nfréquemment. Indispensable pour la\nchasse au trésor!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("Vous avez récupéré votre <y<fouet>>!\nCherchez s'il n'y a pas quelque part une prise\nà laquelle vous accrocher.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("Vous avez obtenu le <y<fouet>>!\nGrâce à l'orbe de lumière à son extrémité, il peut\ns'accrocher à de nombreux endroits!\n\nAvec (Z), ciblez les prises que vous ne pourriez\natteindre autrement et agrippez\x2010les.\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("Vous avez obtenu un <y<cor de monstre>>!\nFabriqué à partir d'une corne d'animal, ce cor\nd'une grande solidité pourrait être utilisé comme\nmatériau.")
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
/*< 60>*/ 	printf("Vous avez obtenu la <y<sculpture tentaculaire>>!\nCette statuette à la forme peu commune est\nrecouverte d'inquiétantes ventouses...")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("Vous avez obtenu une <y<potion de santé \x2605>>!\nCette version améliorée de la potion de santé\n<r<restaure tous vos c\x153urs>>.")
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
/*<581>*/ 			printf("Vous avez obtenu la <y+<Triforce de la force>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("Vous avez obtenu la <y+<Triforce de la force>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<535>*/ 			printf("Il ne vous manque plus qu'<r<une>> partie!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("Vous avez obtenu la <y+<Triforce de la force>>!\n<r<Pouvoir suprême>> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<534>*/ 			printf("Il vous manque encore <r<deux>> parties!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("Vous avez obtenu une <y<médaille de durabilité>>!\nAvec elle, l'effet des potions sera prolongé.\nIdéale pour les grands consommateurs de potions!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<269>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier de fer\nsolide>>! Il est plus résistant qu'un bouclier de fer\nclassique.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("Vous avez obtenu les <y<boucles ignifuges>>!\nC'est une des reliques de la Déesse. Vous pouvez\ndésormais résister aux chaleurs extrêmes. ")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("Vous avez obtenu un <y<crâne décoratif>>!\nCe charmant bibelot est à l'image du symbole\ndes Bokoblins.")
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
/*<441>*/ 		printf("Vous avez rassemblé toutes les <y<larmes de Din>>.\nVotre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*<437>*/ 		printf("Vous avez obtenu une <y<larme de Din>>!\nSon pouvoir sacré immobilise les Gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve!")
          	}
          }

