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
/*<151>*/ 					printf("Vous avez rassemblé tous les <y<fragments de\nclé >>! Vous pouvez désormais ouvrir la porte\ndu temple.\n\nRetournez vite au sommet de la montagne\npour retrouver Zelda qui a été emmenée\ndans le temple !")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf("Vous avez obtenu un <y<fragment de clé >>!\nC'est une partie de la clé qui ouvre\nla porte du temple. Il vous manque\n<r<un>> fragment pour reconstituer la clé !")
          				}
          			  case 1:
/*< 26>*/ 				printf("Vous avez obtenu un <y<fragment de clé >>!\nC'est une partie de la clé qui ouvre\nla porte du temple. Il vous manque\n<r<deux>> fragments pour reconstituer la clé !")
          			}
          		  case 1:
/*< 29>*/ 			printf("Vous avez obtenu un <y<fragment de clé >>!\nC'est une partie de la clé qui ouvre\nla porte du temple. Il vous manque\n<r<trois>> fragments pour reconstituer la clé !")
          		}
          	  case 1:
/*<150>*/ 		printf("Vous avez obtenu un <y<fragment de clé >>!\nC'est une partie de la clé qui ouvre\nla porte du temple.\n\nIl vous faut cinq fragments pour la\nreconstituer. Dénichez les <r<quatre\n>>fragments restants !")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf("Vous avez obtenu une <y<épée\nd'entraînement >>! Elle est utilisée\nlors des cours d'escrime à l'école de\nchevalerie. Elle a un bon tranchant.\nAppuyez sur (1) à tout moment pour\nconsulter votre inventaire.\x0E\x01\x11\x02\x4CD")
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
/*<582>*/ 			printf("Vous avez obtenu la <y+<Triforce de la sagesse >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf("Vous avez obtenu la <y+<Triforce de la sagesse >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<537>*/ 			printf("Il ne vous manque plus qu'<r<une>> partie !")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf("Vous avez obtenu la <y+<Triforce de la sagesse >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<536>*/ 			printf("Il vous manque encore <r<deux>> parties !")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf("Vous avez obtenu la <y<médaille démoniaque >>!\nElle fait apparaître plus fréquemment les\ntrésors et les rubis. Mais sa malédiction\nvous empêchera d'ouvrir votre sacoche !")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<268>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier\nen fer renforcé >>! C'est le plus robuste\ndes boucliers en fer.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf("")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf("Vous avez obtenu un <y<cristal maléfique >>!\nIl s'agit du c\x153ur cristallisé d'un démon.\nIl est très rare de dénicher un spécimen\ndans un si bon état de conservation !")
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
/*<451>*/ 		printf("Vous avez rassemblé toutes les <y<larmes\nde Nayru>>. Votre âme a gagné en maturité !\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*<447>*/ 		printf("Vous avez obtenu une <y<larme de Nayru >>!\nSon pouvoir sacré immobilise les gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve !")
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
/*< 59>*/ 	printf("Vous avez obtenu la <y<sculpture dorée >>!\nDe mystérieux symboles ornent la\nsurface de cette \x153uvre en or à la\nforme surprenante.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf("Vous avez obtenu l'<y<épée divine >>!\nUne lumière sacrée émane de cette\narme mystique.\n\nElle a gardé le souvenir de vos combats\npassés. Le <r<pouvoir de l'éclat céleste >>qui\nl'emplit lorsqu'elle est brandie vers le ciel\nest <r<<pling>à son maximum >>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf("Vous avez obtenu l'<y<épée divine >>!\nUne lumière sacrée émane de cette\narme mystique.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf("")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf("Vous avez obtenu la <y<carte marine\nancienne >>! Elle représente la mer qui\ns'étendait autrefois à la place du\ndésert.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf("Votre lance\x2010pierre a été amélioré en\n<y<lance\x2010pierre rafale >>! Vous pouvez attaquer\nune large zone en une seule fois. Maintenez\n(A) enfoncé pour un tir plus puissant. ")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf("Vous avez obtenu un <y<bouclier sacré >>!\nLe pouvoir qu'il renferme lui permet de\nse réparer tout seul. Il protège du feu,\nde l'électricité et des malédictions !")
          		  case 1:
/*<673>*/ 			printf("Vous avez obtenu un <y<bouclier sacré >>!\nLe pouvoir renfermé par ce mystérieux\nbouclier lui permet de <r<se réparer tout\nseul>>.\nPeu résistant, il se brise facilement\nmais il permet de se protéger du feu,\nde l'électricité et des malédictions.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf("Vous avez obtenu une <y<plume bleue >>!\nLes petits pioups sont très rarement bleus.\nLes plumes de cette couleur n'en sont que\nplus précieuses !")
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
/*<446>*/ 		printf("Vous avez rassemblé toutes les <y<larmes de\nla Déesse>>. Votre âme a gagné en maturité !\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*<442>*/ 		printf("Vous avez obtenu une <y<larme de la Déesse >>!\nSon pouvoir sacré immobilise\nles gardiens pendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve !")
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
/*< 44>*/ 	printf("Vous avez obtenu une <y<baie de lumière>> !\nCe fruit étrange vous indiquera la\nposition des larmes par des balises\nde lumière pendant <r<30 secondes>>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf("")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf("Vous avez obtenu une <y<potion de soin \x2605\x2605 >>!\nUn flacon contient <r<deux doses >>de ce\nprécieux breuvage qui <r<vous restaure\ntous vos c\x153urs>>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf("Vous avez récupéré les <y<gants Mogma >>!\nEssayez de sortir d'ici comme le\nferait un vrai Mogma.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf("Vous avez obtenu les <y<gants Mogma >>!\nMême les Mogmas ne mettent pas\nsouvent les pattes sur des gants\ncreuse\x2010tout de cette valeur !\nIls permettent non seulement\nde creuser, <g<mais aussi de\ns'engouffrer sous terre>>. Cherchez\ndes trous un peu partout !")
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
/*<567>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<278>*/ 		printf("Votre bouclier est maintenant un\n<y<bouclier sacré amélioré >>! Le pouvoir\nqu'il renferme lui permet de se\nréparer tout seul. Il est plus résistant !")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf("Votre filet a été amélioré en <y<grand filet>> !\nVotre filet est maintenant deux fois plus\ngrand. Même les insectes les plus agiles\nauront peine à vous échapper !")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf("Vous avez obtenu un <y<crâne d'or >>! Les\ncollectionneurs diront qu'il s'agit là d'un\nobjet exceptionnel, une vraie rareté ! Il\nn'en luit pas moins d'un éclat inquiétant...")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf("Vous avez accepté de vous charger de\nla <y<lettre d'Orbo >>! Qui sait si son contenu\nest réellement sincère...\n\nGardez\x2010vous néanmoins de vous en servir\ncomme papier\x2010toilette, ce serait grossier\nde votre part !")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf("")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf("Vous avez obtenu de la <y<Protectine >>!\nCette étrange potion diminue de moitié\nles dégâts subis. Son effet ne dure que\n<r<trois minutes>>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf("Vous avez obtenu <r<un >><y<cristal de gratitude >>!\nIl semble qu'une personne au c\x153ur\ndébordant de reconnaissance soit\npassée par ici...\nRassemblez\x2010en plusieurs et apportez\x2010les\nà<b< Morcego >>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf("Vous avez obtenu la <y<statuette de dragon >>!\nCette sculpture en or massif reproduit\nadmirablement les circonvolutions\ngracieuses d'un dragon légendaire.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf("Vous avez récupéré la <y<vraie épée de\nlégende >>! Vous allez enfin pouvoir laisser\néclater votre colère ! Gare à celui qui se\ndressera sur votre route !\nDe plus, vous allez à nouveau pouvoir\nparler avec <pling><b<Fay>> !")
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
/*<568>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<277>*/ 		printf("Votre bouclier est maintenant un\n<y<bouclier sacré ultime >>! Le pouvoir\nqu'il renferme lui permet de se réparer\ntout seul. Il est encore plus résistant !")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x3CD >>!\nOn observe une invasion de ces insectes\nune fois tous les dix ans. Ils détruisent\ntoute la végétation sur leur passage.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x3CD >>!\nOn observe une invasion de ces insectes\nune fois tous les dix ans. Ils détruisent\ntoute la végétation sur leur passage.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf("Vous avez obtenu une <y<poussière de Déesse >>!\nOn raconte que la Déesse aurait laissé\ntomber ces trésors légendaires très rares\nil y a des générations.")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf("Vous avez obtenu la <y<cage à insecte >>!\nL'insecte bien\x2010aimé de Terry se trouve\nà l'intérieur ! Hâtez\x2010vous de le lui\nrapporter !")
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
          	printf("Vous avez obtenu de la <y<Protectine \x2605 >>!\nCette potion extrêmement puissante\nvous protège de tout dégât pendant\n<r<trois minutes >>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf("Vous avez récupéré la <y<jarre magique >>!\nVous allez pouvoir faire un peu\nde ménage !")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf("Vous avez obtenu la <y<jarre magique >>!\nCet objet antique et insolite est capable\nde générer de violentes bourrasques.\n\nSi lorsque vous l'utilisez, vous avez du mal\nà viser, recentrez le curseur en appuyant\nsur (v).\x0E\x01\x11\x02\x9CD")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf("Vous avez obtenu le <y<circuit antique >>!\nCette pièce forgée dans l'or pur semble\ncompléter un mécanisme. Sa surface est\nincrustée de circuits électriques.")
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
/*<246>*/ 	printf("Vous avez obtenu une <y<bourse moyenne >>!\nElle a une contenance un peu supérieure\nà celle de votre ancienne bourse.\n\nVous pouvez y ranger <r<500 rubis >>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf("Vous avez obtenu le <y<bouclier d'Hylia >>!\nL'aura des héros émane de ce bouclier\nlégendaire. Aucune attaque ne peut\nl'endommager !")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x4CD >>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x4CD >>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf("")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf("Vous avez obtenu de la <y<polypotion \x2605\x2605 >>!\nElle restaure <r<automatiquement >>la jauge de\nvotre bouclier, ainsi que <r<huit>> de vos c\x153urs.\nEt en plus, vous pouvez l'utiliser <r<deux fois >>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf("")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf("Vous avez obtenu un <s<rubis argenté >>!\nSa valeur est de <r<100 rubis >>!\nExtraordinaire ! Voilà qui doit vous\nfaire chaud au c\x153ur !")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf("")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf("Vous avez obtenu de l'<y<Endurol >>!\nLorsque vous l'utilisez, votre jauge\nd'endurance se vide plus lentement.\nSon effet dure <r<trois minutes >>!")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf("Vous avez obtenu une <y<grande bourse >>!\nElle a une contenance bien supérieure\nà celle de votre ancienne bourse.\n\nVous pouvez y ranger <r<1 000 rubis >>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf("Vous avez obtenu de la <y<polypotion >>!\nCe produit étrange <r<remplit entièrement>>\nla jauge de votre bouclier et vous rend\n<r<quatre>> c\x153urs !")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x5CD >>!\nOn raconte que son venin a des vertus\nmédicinales une fois bouilli. Ne vous\nlaissez pas prendre dans un essaim !")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x5CD >>!\nOn raconte que son venin a des vertus\nmédicinales une fois bouilli. Ne vous\nlaissez pas prendre dans un essaim !")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf("Vous avez trouvé un <y<hochet >>!\nVoilà le genre de jouet qui ferait\nle bonheur d'un jeune enfant...\nQuelqu'un a dû le laisser tomber.")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf("")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf("Vous avez obtenu de la <y<soupe de\ncitrouille chaude >>! C'est la spécialité\ndu patron. Mais attention, elle sera\nfroide dans<r< cinq minutes >>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf("Vous avez obtenu l'<y<écaille du dragon\nd'eau >>! C'est une des reliques de la Déesse.\nElle vous permet de nager sous l'eau\net de tourbillonner.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf("Vous avez obtenu la <y<carte du donjon >>!\nVous pouvez examiner la disposition\ndes lieux et localiser les pièces que\nvous n'avez pas encore visitées.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf("L'emplacement des coffres est également\nindiqué. Prenez le temps d'y jeter un \x153il !")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf("Vous avez obtenu un <y+<rubis doré >>!\nSa valeur est de <r<300 rubis >>! Exceptionnel !\nMieux vaut garder ça pour vous...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf("")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf("Vous avez obtenu de l'<y<Endurol \x2605 >>!\nCe philtre miraculeux empêche votre\njauge d'endurance de se vider pendant\n<r<trois minutes>> !")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf("Vous avez obtenu de la <y<polypotion \x2605 >>!\nCette substance prodigieuse répare\n<r<automatiquement>> votre bouclier lorsqu'il\nest détruit et vous rend <r<huit>> c\x153urs !")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x6CD >>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x6CD >>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf("Vous avez obtenu des <y<larves de guêpes >>!\nCes larves fraîchement extraites du nid\npeuvent certainement être utilisées comme\ningrédient. Elles sont pleines de protéines.")
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
/*< 54>*/ 	printf("Vous avez obtenu un <black<roupir >>!\nVous perdez <r<10 rubis>>.\nUne vague tristesse vous gagne...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf("Vous avez obtenu le <y<réceptacle spirituel >>!\nCette fleur étonnante représente la\nmaturité de votre âme.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf("Vous avez obtenu une <y<potion d'oxygène >>!\nLorsque vous l'utilisez, votre jauge\nd'oxygène se vide plus lentement.\nSon effet dure <r<trois minutes>>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf("Vous avez obtenu une <y<bourse énorme >>!\nElle a une contenance largement\nsupérieure à celle de votre ancienne\nbourse.\nVous pouvez y ranger <r<5 000 rubis >>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf("Vous avez obtenu un <y<petit sac de graines >>!\nIl peut contenir <r<dix >>graines Mojo\nsupplémentaires. Prenez\x2010le lorsque\nvous utilisez votre lance\x2010pierre.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x7CD >>!\nOn dit que sa couleur rouge vient du\nminerai qu'elle mange. Elle est plutôt\ntranquille et reste souvent immobile.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x7CD >>!\nOn dit que sa couleur rouge vient du\nminerai qu'elle mange. Elle est plutôt\ntranquille et reste souvent immobile.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xFCD >>!\nCes délicates petites plumes sont très\nprisées à Célesbourg. Peut\x2010être leur\ntrouverez\x2010vous une utilité.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf("Vous avez récupéré la <y<pousse de l'arbre\nde vie >>! Elle ne peut pas s'épanouir assez\nrapidement ici. Cherchez un endroit\nplus approprié pour la planter.")
          	  case 1:
/*<490>*/ 		printf("Vous avez obtenu la <y<pousse de l'arbre\nde vie>><y< >>! En grandissant, elle deviendra\nl'arbre légendaire dont le fruit détient\nun grand pouvoir de guérison.")
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
/*<599>*/ 			printf("Vous avez récupéré le <y<lance\x2010pierre rafale>><y< >>!\nHébétez les patrouilles ennemies !\n")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf("Vous avez récupéré le <y<lance\x2010pierre >>!\nHébétez les patrouilles ennemies !\n")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf("Vous avez obtenu le <y<lance\x2010pierre >>!\nIl vous permet de tirer des graines\nMojo qui hébètent vos ennemis.\n\nSi lorsque vous l'utilisez, vous avez du mal\nà viser, recentrez le curseur en appuyant\nsur (v).\x0E\x01\x11\x02\x9CD")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf("Vous avez obtenu <r<cinq>> <y<cristaux de\ngratitude >>! Chacun d'entre eux est un\nconcentré d'essence de reconnaissance.\n\nLorsque vous venez en aide à quelqu'un,\nsa gratitude se matérialise sous la forme\nde <r<cinq >>de ces cristaux.")
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
/*< 87>*/ 		printf("Il n'y a rien d'intéressant là\x2010dedans !")
          	  case 1:
/*<596>*/ 		printf("Ça ne se fait pas de fouiller dans les\naffaires des gens...")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf("Vous avez obtenu une <y<potion d'oxygène \x2605 >>!\nCe breuvage étonnant empêche votre\njauge d'oxygène de se vider pendant\n<r<trois minutes>>.")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf("Vous avez obtenu la <y<bourse de star >>!\nVoilà qui impressionnerait même les plus\nfortunés... Vous pouvez y ranger la somme\nastronomique de <r<9 000 rubis >>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf("Votre sac a été amélioré en <y<sac de graines\nmoyen >>! Il peut contenir <r<20>> graines Mojo\nsupplémentaires. Prenez\x2010le lorsque vous\nutilisez votre lance\x2010pierre.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x8CD >>!\nCe lépidoptère est présent à peu près\npartout. Il arrive même parfois qu'on\nle rencontre dans des lieux insolites.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x8CD >>!\nCe lépidoptère est présent à peu près\npartout. Il arrive même parfois qu'on\nle rencontre dans des lieux insolites.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf("Vous avez obtenu un <y<virevoltant >>!\nPeut\x2010être trouverez\x2010vous une utilité\nà cette boule d'herbe séchée.")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf("Vous avez obtenu le <y<sceau des épreuves >>!\nCette pierre mènera le héros à\nl'endroit où repose la Triforce.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf("Vous avez obtenu un <y<fruit de l'arbre\nde vie >>! Ce fruit légendaire aurait le\npouvoir de guérir toutes les maladies.\nApportez\x2010le vite au dragon de foudre !")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf("Vous avez obtenu le <y<scarabée à crochet >>!\nSes grandes mandibules lui permettent\nde transporter des objets.\n\nLorsque vous passez en vue aérienne en\nmaintenant (Z) appuyé, l'objet qu'il\ntransporte peut être lâché.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf("Vous avez obtenu le <y<scarabée >>!\nCet engin en forme d'insecte vole\ndans les airs et vous permet d'explorer\nles environs !\nPointez <r<l'écran>> avec la télécommande Wii\net lancez le scarabée en appuyant sur (A).\n\n\nSi lorsque vous vous apprêtez à le lancer,\nvous avez du mal à viser, recentrez le\ncurseur en appuyant sur (v).\x0E\x01\x11\x02\x9CD")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf("Vous avez obtenu des <y<spores scintillantes >>!\nCette poussière fongique est produite par\nles champignons scintillants.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf("Vous avez obtenu l'<y<arc >>!\nVous pouvez tirer sur des cibles distantes !\nVos flèches infligeront d'importants\ndégâts.\nSi lorsque vous tirez, vous avez du mal\nà viser, recentrez le curseur en appuyant\nsur (v).\x0E\x01\x11\x02\x9CD")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf("Vous avez obtenu une <y<petite clé >>!\nElle vous permettra d'ouvrir une porte\nverrouillée. Vous ne pouvez l'utiliser que\ndans cette zone.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf("Vous avez obtenu la <y<médaille insecte>> !\nLorsque vous l'avez sur vous, vous\npouvez trouver des insectes facilement.\nSuivez les \x0E\x02\x04\x02\x1ACD sur votre carte !")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf("Vous avez attrapé une <y<fée >>!\nCette bienveillante créature\nvous rendra <r<six c\x153urs>>.\n\nSi vous la transportez dans un flacon, elle\nen sortira <r<lorsque vous serez à bout de\nforces >>et vous soignera <r<automatiquement>> !")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf("Vous avez récupéré votre <y<sacoche\nd'aventurier >>! Et tout le reste de\nvotre équipement, par la même occasion !")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf("Vous avez obtenu la <y<sacoche\nd'aventurier >>! C'est un accessoire fort\npratique dans lequel vous pouvez\nranger les objets utiles à vos aventures.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\x9CD >>!\nOn dit que ce spécimen capable de survivre\ndans les déserts les plus arides bâtit\nsa fourmilière sur une source d'eau.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\x9CD >>!\nOn dit que ce spécimen capable de survivre\ndans les déserts les plus arides bâtit\nsa fourmilière sur une source d'eau.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf("Vous avez obtenu une <y<queue de lézard >>!\nL'extrémité de cet appendice est équipée\nd'une dangereuse boule à pointes. Un objet\nrépugnant, mais qui peut servir...")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf("")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf("Vous avez obtenu une <y<bourse annexe >>!\nVotre bourse peut maintenant contenir\n<r<300 rubis >>supplémentaires !")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf("Vous avez obtenu le <y<filet à papillons >>!\nVous pouvez attraper de petits insectes et\ncertaines autres créatures. Approchez\x2010les\navec précaution et soyez vif !")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf("Vous avez rempli votre flacon\nd'<y<eau ordinaire >>! Il s'agit d'eau\ntout ce qu'il y a de plus normale.\nQui sait, elle pourrait vous servir.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf("")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf("Vous avez obtenu un <g+<rubis vert >>!\nSa valeur est de <r<1 rubis>>.\nC'est le début de la fortune !")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf("")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf("Vous avez ajouté une poche à votre\n<y<sacoche d'aventurier >>! Vous pouvez y\nranger <r<un objet supplémentaire>> !")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf("Votre sac a été amélioré en <y<grand sac de\ngraines >>! Il peut contenir <r<30>> graines Mojo\nsupplémentaires. Prenez\x2010le lorsque vous\nutilisez votre lance\x2010pierre.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xACD >>!\nCet insecte demeure caché sous la terre\nà l'état larvaire pendant plus de dix ans.\nSa capture demande de la patience !")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xACD >>!\nCet insecte demeure caché sous la terre\nà l'état larvaire pendant plus de dix ans.\nSa capture demande de la patience !")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf("Vous avez obtenu du <y<minerai d'Ordinn >>!\nCette pierre extrêmement dure scintille\njoliment. Ses emplois sont multiples.")
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
/*<507>*/ 		printf("Vous avez attrapé une <y<fée >>!\nCette créature bienveillante\nvous rendra <r<six >>c\x153urs !\n\nMalheureusement, vous n'avez\npas de <y<flacon vide>>. Vous allez\ndevoir la laisser partir.")
          	  case 1:
/*<505>*/ 		printf("Vous avez trouvé une <y<fée >>!\nCes créatures bienveillantes\nvous rendent <r<six>> c\x153urs !")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf("Vous avez obtenu un flacon de <y<spores de\nchampignon >>! Ces spores produites par un\nchampignon géant sont très efficaces pour\nsoigner les blessures des oiseaux !")
          	  case 1:
/*< 36>*/ 		printf("Votre flacon est rempli de <y<spores de\nchampignon >>! Elles proviennent d'un\nchampignon géant. Cela pourrait vous\nservir.")
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
/*<409>*/ 		printf("Vous avez récupéré votre <y<grappin >>!\nVous pouvez à nouveau atteindre\ndes zones éloignées !")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf("Vous avez obtenu le <y<grappin >>!\nC'est une des reliques sacrées de la Déesse.\nIl permet à celui qui le possède d'élargir\nson champ d'action.\nVisez les <r<cibles>> ou le <r<lierre>>, puis tirez pour\nvous tracter à l'endroit où sa griffe s'est\naccrochée.\n\nSi lors de la visée votre grappin devient\n<r<difficile à contrôler>>, recentrez le curseur\nen appuyant sur (v).\x0E\x01\x11\x02\x9CD")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf("Vous avez trouvé un <b+<rubis bleu>><b+< >>!\nSa valeur est de <r<5 rubis>>. Placez\x2010le\nsoigneusement dans votre bourse !")
          	  case 1:
/*< 84>*/ 		printf("Vous avez obtenu un <b+<rubis bleu >>!\nSa valeur est de <r<5>> <r<rubis>>.\nQuelle chance !")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf("Vous avez obtenu une <y<médaille de vie >>!\nAvec elle, votre énergie vitale\nmaximale augmentera d'<r<un c\x153ur>>.\nCela peut parfois s'avérer utile...")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf("Vous avez obtenu un <y<petit carquois >>!\nIl peut contenir <r<cinq>> flèches\nsupplémentaires. Prenez\x2010le lorsque\nvous utilisez votre arc.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xBCD >>!\nSes yeux à facettes ont l'éclat du saphir\net ses ailes la délicatesse du cristal !")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xBCD >>!\nSes yeux à facettes ont l'éclat du saphir\net ses ailes la délicatesse du cristal !")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf("Vous avez obtenu une <y<fleur ancienne >>!\nOn dit qu'elle fleurissait bien longtemps\navant notre ère. Délicate et mystérieuse,\nelle brille dans l'obscurité.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf("")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf("Vous avez obtenu les <y<gants creuse\x2010tout >>!\nLeurs griffes acérées sont idéales pour\ncreuser la terre.\n\nSi vous trouvez des traces suspectes au sol,\napprochez\x2010vous et appuyez sur (A) pour\ncreuser !")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf("")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf("Vous avez obtenu la <y<statuette d'oiseau >>!\nC'est la preuve que vous avez remporté\nla chevauchée céleste. Zelda sera\nsûrement ravie !")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf("Vous avez obtenu un <r+<rubis rouge>> !\nSa valeur est de <r<20 rubis>>. N'allez pas\ntout dépenser d'un coup, petit veinard !")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf("")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf("Votre arc a été amélioré en <y<arc en fer >>!\nRéservé aux archers expérimentés, il\ncause de plus grands dégâts que votre\narc précédent.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf("")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf("Votre carquois a été amélioré\nen<y< carquois moyen >>! Il peut contenir\n<r<dix>> flèches supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf("Vous avez obtenu une <y<perle d'ambre >>!\nOn trouve cette gemme d'un jaune profond\nun peu partout. Nul ne sait à quoi elle doit\nsa forme si particulière.")
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
/*< 16>*/ 		printf("Vous avez obtenu <y<cinq >><y<<y<graines <y<Mojo >>!\nVous pouvez lancer ces petites\ngraines avec votre lance\x2010pierre.\nGardez un \x153il sur vos réserves !")
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
/*< 82>*/ 	printf("La <y+<Triforce>> est reconstituée !\nVous allez pouvoir exaucer le souhait\nde Zelda et <r<détruire>> l'<b<Avatar du Néant>>.")
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
/*<156>*/ 		printf("Vous avez obtenu de l'<y<eau sacrée >>!\nIl ne s'agit pas là d'une eau ordinaire !\nSa pureté inégalable recèle un\ngrand pouvoir.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf("Vous avez obtenu de l'<y<eau sacrée >>!\nSon inégalable pureté lui donne le\npouvoir de guérir les blessures du\ndragon d'eau.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf("Votre arc a été amélioré en <y<arc sacré >>!\nGrâce à la prière de la Déesse, il déploie\nune puissance dévastatrice contre\nles monstres !")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<262>*/ 		printf("Vous avez obtenu un <y<bouclier en bois >>!\nConstitué de bois léger, il est très facile\nà manier, mais attention : il brûle et\nse brise facilement !")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf("Votre carquois a été amélioré\nen<y< grand carquois >>! Il peut contenir\n<r<15>> flèches supplémentaires.\nPrenez\x2010le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xCCD >>!\nCe minuscule insecte pousse une boule\nde... quelque chose jusqu'à son nid.\nN'est\x2010il pas adorable ?")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xCCD >>!\nCe minuscule insecte pousse une boule\nde... quelque chose jusqu'à son nid.\nN'est\x2010il pas adorable ?")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf("Vous avez obtenu une <y<perle d'ombre >>!\nD'apparence similaire à la perle d'ambre,\nelle est pourtant très différente. On ne la\ntrouve qu'en des lieux spécifiques.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf("")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf("Vous avez obtenu <y<cinq bombes >>!\nVous pouvez les jeter ou les faire rouler\npour détruire des matériaux résistants.\nRavitaillez\x2010vous dès que possible !")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf("")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf("Vous avez obtenu un <y<c\x153ur >>!\nChacun d'eux est un concentré d'énergie\nrégénératrice qui restaure votre jauge\nde vie d'<r<un>> c\x153ur.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf("Vous avez récupéré votre <y<sac de bombes >>!\nEn avant pour le feu d'artifice !")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf("Vous avez obtenu le <y<sac de bombes >>!\nNe trahissez pas la confiance de <b<Ferrug>>,\nprenez\x2010en soin !")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf("Vous avez trouvé un <y<sac de bombes >>!\nCette besace fort commode permet\nd'emporter avec soi les fleurs bombes\nramassées. \nVoilà qui pourrait vous permettre\nd'accéder à des zones jusqu'ici\ninaccessibles... Voyez si <b<Ferrug\n>>accepte de vous le prêter !")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf("Votre scarabée a été amélioré en <y<scarabée\nà crochet >>! Ses nouvelles mandibules lui\npermettent de transporter des objets.\n\nLorsque vous passez en vue aérienne en\nmaintenant (Z) appuyé, l'objet qu'il\ntransporte peut être lâché.\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<261>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier\nen bois solide >>! Léger et maniable, il est\nplus solide qu'un bouclier en bois\nordinaire !")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf("Vous avez obtenu un <y<petit sac de\nbombes >>! Il peut contenir <r<cinq>> bombes\nsupplémentaires. Prenez\x2010le lorsque\nvous avez besoin de bombes !")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xDCD >>!\nVoici un insecte très populaire parmi les\nenfants de Célesbourg. Mais attention aux\ndoigts, ça pince !")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xDCD >>!\nVoici un insecte très populaire parmi les\nenfants de Célesbourg. Mais attention aux\ndoigts, ça pince !")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf("Vous avez obtenu une <y<gélatibulle >>!\nCet objet n'est pas particulièrement\nagréable à regarder, mais ses propriétés\nuniques en font un matériau précieux.")
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
/*<464>*/ 	printf("Vous avez appris le <y<Chant de la Déesse >>!\nCette mystérieuse mélodie provient de\ntemps anciens.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf("Vous avez obtenu <y<dix bombes >>!\nVous pouvez les jeter ou les faire rouler\npour détruire des matériaux résistants.\nRangez\x2010les dans votre sac de bombes !")
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
/*< 80>*/ 		printf("Vous avez obtenu une <y<flèche perdue >>!\nVous pouvez la réutiliser avec votre arc.\nCe serait du gâchis de ne pas s'en servir !")
          	  case 1:
/*<159>*/ 		printf("")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf("Vous avez obtenu un <y<réceptacle de c\x153ur >>!\nVotre énergie vitale maximale est\naugmentée d'<r<un c\x153ur>>, et tous vos\nc\x153urs sont restaurés !")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf("Votre scarabée a été amélioré\nen <y<scarabée rapide >>! Gare aux\nexcès de vitesse !")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf("Vous avez obtenu une <y<médaille c\x153ur>> !\nAvec elle, même en <r<mode héroïque>>,\nles c\x153urs apparaissent et les fl\x153urs\nfleurissent.\nSi votre santé vous préoccupe, c'est l'objet\nidéal !")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf("Vous avez obtenu une <y<médaille c\x153ur >>!\nAvec elle, les c\x153urs apparaîtront\nplus fréquemment. Si votre santé\nvous préoccupe, c'est l'objet idéal !")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<260>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier\nen bois renforcé>>. C'est le plus robuste des\nboucliers en bois. Il conserve néanmoins\ntoute sa légèreté.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf("Votre sac a été amélioré en <y<sac de\nbombes moyen >>! Il peut contenir <r<dix\n>>bombes supplémentaires. Prenez\x2010le\nlorsque vous avez besoin de bombes !")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf("Vous avez obtenu <numeric arg0> <y<\x0E\x03\x04\x02\xECD >>!\nVoici le plus rare des petits habitants\ndu ciel. Il se tapit habituellement dans\nl'obscurité.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf("Vous avez attrapé <numeric arg0> <y<\x0E\x03\x04\x02\xECD >>!\nVoici le plus rare des petits habitants\ndu ciel. Il se tapit habituellement dans\nl'obscurité.")
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
/*< 46>*/ 	printf("Vous avez obtenu une <y<baie d'endurance >>!\nCes fruits survitaminés remplissent\nimmédiatement votre jauge d'endurance.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf("Vous avez obtenu la <y<statuette sereine >>!\nCette sculpture en bois inspire la\nplénitude. Elle ressemble à la statue\nde pierre de l'étage supérieur.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf("Vous avez obtenu <y<dix flèches >>!\nVous pourrez les tirer avec votre arc.\nLeur nombre est limité, utilisez\x2010les\navec parcimonie !")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf("Votre scarabée a été amélioré en <y<scarabée\nendurant >>! Il peut maintenant voler plus\nlongtemps. Voilà qui ouvre de nouvelles\nperspectives !")
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
/*<208>*/ 				printf("Vous avez obtenu un <y<fragment de c\x153ur >>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un c\x153ur.\nPlus qu'<r<un >>!")
          			  case 1:
/*<200>*/ 				printf("Vous avez obtenu un <y<fragment de c\x153ur >>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un c\x153ur.\nPlus que <r<deux >>!")
          			}
          		  case 1:
/*<203>*/ 			printf("Vous avez obtenu un <y<fragment de c\x153ur >>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un c\x153ur.\nPlus que <r<trois >>!")
          		}
          	  case 1:
/*<207>*/ 		printf("Vous avez obtenu un <y<fragment de c\x153ur >>!\nVous avez formé un nouveau réceptacle\nde c\x153ur. Votre énergie vitale maximale\naugmente d'un c\x153ur !")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf("Vous avez obtenu une <y<médaille rubis >>!\nAvec elle, les rubis apparaîtront plus\nfréquemment. Pensez\x2010y quand vous\nêtes à court d'argent !")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<270>*/ 		printf("Vous avez obtenu un <y<bouclier en fer >>!\nLe fer a l'avantage de ne pas brûler et de\nmieux résister aux impacts, mais il ne\nprotège pas du courant électrique !")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf("Votre sac a été amélioré en <y<grand\nsac de bombes >>! Il peut contenir <r<15\n>>bombes supplémentaires. Prenez\x2010le\nlorsque vous avez besoin de bombes !")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf("Vous avez obtenu un <y<flacon vide >>!\nVous pouvez le remplir de différentes\nchoses.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf("Vous avez obtenu une <y<griffe de monstre >>!\nCette griffe acérée a l'air tranchante\ncomme un rasoir... Le monstre dont elle\nprovient doit faire peur à voir.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf("")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf("Vous avez obtenu <y<dix >><y<<y<graines <y<Mojo >>!\nVous pouvez lancer ces petites\ngraines avec votre lance\x2010pierre.\nGardez un \x153il sur vos réserves !")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf("Vous avez rassemblé toutes les <y<larmes\nde Farore>>. Votre âme a gagné en maturité !\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*< 45>*/ 		printf("Vous avez obtenu une <y<larme de Farore >>!\nSon pouvoir sacré immobilise les gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve !")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf("Vous avez obtenu le <y<cristal étrange >>!\nLes cubes qui le composent brillent d'un\néclat discret. Il en manque quelques\x2010uns.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf("")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf("Vous avez obtenu une <y<potion de soin >>!\nLorsque vous la buvez, vous récupérez\n<r<huit c\x153urs>> !")
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
/*<580>*/ 			printf("Vous avez obtenu la <y+<Triforce du courage >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf("Vous avez obtenu la <y+<Triforce du courage >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<532>*/ 			printf("Il ne vous manque plus qu'<r<une>> partie !")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf("Vous avez obtenu la <y+<Triforce du courage >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<531>*/ 			printf("Il vous manque encore <r<deux>> parties !")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf("Vous avez obtenu la <y<médaille trésor >>!\nAvec elle, les trésors apparaîtront\nplus fréquemment. Indispensable\npour la chasse au trésor !")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf("Vous avez récupéré votre <y<fouet >>!\nCherchez s'il n'y a pas quelque part\nune prise à laquelle vous accrocher.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf("Vous avez obtenu le <y<fouet >>!\nGrâce à l'orbe de lumière à son extrémité,\nil peut s'accrocher à de nombreux\nendroits !\nAvec (Z), ciblez les prises que vous ne\npourriez atteindre autrement, et donnez\nun coup sec avec la télécommande Wii\npour les agripper.\x0E\x01\x11\x02\x7CD")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf("Vous avez obtenu un <y<cor de monstre >>!\nFabriqué à partir d'une corne d'animal,\nce cor d'une grande solidité pourrait\nêtre utilisé comme matériau.")
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
/*< 60>*/ 	printf("Vous avez obtenu la <y<<y<statuette tentaculaire<y< >>!\nCette statuette à la forme peu commune\nest recouverte d'inquiétantes ventouses...")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf("Vous avez obtenu une <y<potion de soin \x2605 >>!\nCette version améliorée de la potion de\nsoin <r<vous restaure tous vos c\x153urs>>.")
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
/*<581>*/ 			printf("Vous avez obtenu la <y+<Triforce de la force >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf("Vous avez obtenu la <y+<Triforce de la force >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<535>*/ 			printf("Il ne vous manque plus qu'<r<une>> partie !")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf("Vous avez obtenu la <y+<Triforce de la force >>!\n<r<Pouvoir suprême>> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<534>*/ 			printf("Il vous manque encore <r<deux>> parties !")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf("Vous avez obtenu une <y<médaille de\ndurabilité >>! Avec elle, l'effet des potions\nsera prolongé. Idéale pour les\ngrands consommateurs de potions !")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf("Votre bouclier est réparé !\nIl est comme neuf.")
          	  case 1:
/*<269>*/ 		printf("Votre bouclier a été amélioré en <y<bouclier\nen fer solide >>! Il est plus résistant qu'un\nbouclier en fer classique.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf("Vous avez obtenu les <y<boucles ignifuges>> !\nC'est une des reliques de la Déesse. Vous\npouvez désormais résister aux chaleurs\nextrêmes. ")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf("Vous avez obtenu un <y<crâne décoratif >>!\nCe charmant bibelot est à l'image\ndu symbole des bokoblins.")
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
/*<441>*/ 		printf("Vous avez rassemblé toutes les <y<larmes\nde Din>>. Votre âme a gagné en maturité !\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*<437>*/ 		printf("Vous avez obtenu une <y<larme de Din >>!\nSon pouvoir sacré immobilise les gardiens\npendant <r<90 secondes>>.\n\nRassemblez\x2010en <r<15 >>pour réussir l'épreuve !")
          	}
          }

