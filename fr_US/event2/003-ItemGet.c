          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 5, unk: 1, line: 85 */ "")
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
/*<151>*/ 					printf(/* textboxtype: 5, unk: 1, line: 38 */ "Vous avez rassemblé tous les <color yellow<fragments de\nclé>coloroff>! Vous pouvez désormais ouvrir la porte\ndu temple.\n\nRetournez vite au sommet de la montagne\npour retrouver Zelda qui a été emmenée\ndans le temple!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 5, unk: 1, line: 37 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre\nla porte du temple. Il ne vous manque\nqu'<color red<un>coloroff> fragment pour reconstituer la clé!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1, line: 36 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre\nla porte du temple. Il vous manque\n<color red<deux>coloroff> fragments pour reconstituer la clé!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 5, unk: 1, line: 35 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre\nla porte du temple. Il vous manque\n<color red<trois>coloroff> fragments pour reconstituer la clé!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 5, unk: 1, line: 34 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre\nla porte du temple.\n\nIl vous faut cinq fragments pour la\nreconstituer. Dénichez les <color red<quatre\n>coloroff>fragments restants!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 5, unk: 1, line: 13 */ "Vous avez obtenu une <color yellow<épée\nd'entraînement>coloroff>! Elle est utilisée\nlors des cours d'escrime à l'école de\nchevalerie. Elle a un bon tranchant.\nAppuyez sur (1) en tout temps pour\nconsulter votre inventaire.<0x10011:0x04cd>")
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
/*<582>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Vous avez obtenu la <color yellow white<Triforce de la sagesse>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Vous avez obtenu la <color yellow white<Triforce de la sagesse>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<537>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Il ne vous manque plus qu'<color red<une>coloroff> partie!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 5, unk: 1, line: 130 */ "Vous avez obtenu la <color yellow white<Triforce de la sagesse>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<536>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Il vous manque encore <color red<deux>coloroff> parties!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1, line: 138 */ "Vous avez obtenu la <color yellow<médaille maléfique>coloroff>!\nElle fait apparaître plus fréquemment les\ntrésors et les rubis. Mais sa malédiction\nvous empêchera d'ouvrir votre sacoche!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 5, unk: 1, line: 157 */ "Votre bouclier a été amélioré en <color yellow<bouclier\nde fer renforcé>coloroff>! C'est le plus robuste\ndes boucliers de fer.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1, line: 177 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 5, unk: 1, line: 223 */ "Vous avez obtenu un <color yellow<cristal maléfique>coloroff>!\nIl s'agit du cœur cristallisé d'un monstre.\nIl est très rare de dénicher un spécimen\ndans un si bon état de conservation!")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 5, unk: 1, line: 206 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 5, unk: 1, line: 58 */ "Vous avez rassemblé toutes les <color yellow<larmes\nde Nayru>coloroff>. Votre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1, line: 57 */ "Vous avez obtenu une <color yellow<larme de Nayru>coloroff>!\nSon pouvoir sacré immobilise les gardiens\npendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1, line: 240 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 5, unk: 1, line: 86 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1, line: 39 */ "Vous avez obtenu la <color yellow<sculpture dorée>coloroff>!\nDe mystérieux symboles ornent la\nsurface de cette œuvre en or à la\nforme surprenante.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1, line: 15 */ "Vous avez obtenu l'<color yellow<épée divine>coloroff>!\nUne lumière sacrée émane de cette\narme mystique.\n\nElle a gardé le souvenir des combats\npassés. Le <color red<pouvoir de l'éclat céleste >coloroff>qui\nl'emplit lorsqu'elle est brandie vers le ciel\nest <color red<<sound 4>à son maximum>coloroff>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 5, unk: 1, line: 14 */ "Vous avez obtenu l'<color yellow<épée divine>coloroff>!\nUne lumière sacrée émane de cette\narme mystique.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 5, unk: 1, line: 106 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 5, unk: 1, line: 131 */ "Vous avez obtenu la <color yellow<carte marine\nancienne>coloroff>! Elle représente la mer\nqui s'étendait autrefois à la place\ndu désert.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 5, unk: 1, line: 139 */ "Votre lance‐pierre a été amélioré en\n<color yellow<lance‐pierre rafale>coloroff>! Vous pouvez attaquer\nune large zone en une seule fois. Maintenez\n(A) enfoncé pour un tir plus puissant. ")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1, line: 159 */ "Vous avez obtenu un <color yellow<bouclier sacré>coloroff>!\nLe pouvoir qu'il renferme lui permet de\nse réparer tout seul. Il protège du feu,\nde l'électricité et des malédictions!")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 5, unk: 1, line: 158 */ "Vous avez obtenu un <color yellow<bouclier sacré>coloroff>!\nLe pouvoir renfermé par ce mystérieux\nbouclier lui permet de <color red<se réparer tout\nseul>coloroff>.\nPeu résistant, il se brise facilement\nmais il permet de se protéger du feu,\nde l'électricité et des malédictions.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 5, unk: 1, line: 224 */ "Vous avez obtenu une <color yellow<plume bleue>coloroff>!\nLes petits pioups sont très rarement bleus.\nLes plumes de cette couleur n'en sont que\nplus précieuses!")
/*<641>*/ 	open_collection_screen();
          }

          void entrypoint_003_157() {
/*<376>*/ 	start()
/*<375>*/ 	printf(/* textboxtype: 5, unk: 1, line: 207 */ "")
          }

          void entrypoint_003_046() {
/*<443>*/ 	start()
/*<445>*/ 	check_item_flag(500, 14)
/*<444>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          	  case 0:
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1, line: 60 */ "Vous avez rassemblé toutes les <color yellow<larmes de\nla Déesse>coloroff>. Votre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 5, unk: 1, line: 59 */ "Vous avez obtenu une <color yellow<larme de la Déesse>coloroff>!\nSon pouvoir sacré immobilise\nles gardiens pendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour\nréussir l'épreuve!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 5, unk: 1, line: 241 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1, line: 87 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 5, unk: 1, line: 61 */ "Vous avez obtenu une <color yellow<baie de lumière>coloroff>!\nCe fruit étrange vous indiquera la\nposition des larmes par des balises\nde lumière pendant <color red<30 secondes>coloroff>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 5, unk: 1, line: 16 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 5, unk: 1, line: 107 */ "Vous avez obtenu une <color yellow<potion de santé ★★>coloroff>!\nUn flacon contient <color red<deux doses >coloroff>de ce\nprécieux breuvage qui <color red<restaure\ntous vos cœurs>coloroff>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 5, unk: 1, line: 76 */ "Vous avez récupéré les <color yellow<gants Mogma>coloroff>!\nEssayez de sortir d'ici comme le\nferait un vrai Mogma.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1, line: 132 */ "Vous avez obtenu les <color yellow<gants Mogma>coloroff>!\nMême les Mogmas ne mettent pas\nsouvent les pattes sur des gants\ncreuse-tout de cette valeur!\nIls permettent non seulement\nde creuser, <color green<mais aussi de\nse terrer>coloroff>. Cherchez des trous\nun peu partout!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 5, unk: 1, line: 140 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 5, unk: 1, line: 160 */ "Votre bouclier est maintenant un\n<color yellow<bouclier sacré amélioré>coloroff>! Le pouvoir\nqu'il renferme lui permet de se\nréparer tout seul. Il est plus résistant!")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 5, unk: 1, line: 178 */ "Votre filet a été amélioré en <color yellow<grand filet>coloroff>!\nCelui-ci est deux fois plus grand. Même\nles insectes les plus agiles auront peine\nà vous échapper!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1, line: 225 */ "Vous avez obtenu un <color yellow<crâne d'or>coloroff>! Les\ncollectionneurs diront qu'il s'agit là d'un\nobjet exceptionnel, d'une vraie rareté! Il\nn'en luit pas moins d'un éclat inquiétant...")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 5, unk: 1, line: 208 */ "Vous avez accepté de vous charger de\nla <color yellow<lettre d'Orbo>coloroff>! Qui sait si son contenu\nest réellement sincère?\n\nGardez‐vous néanmoins de vous en servir\ncomme papier brouillon, ce serait impoli.")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 5, unk: 1, line: 242 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 5, unk: 1, line: 88 */ "Vous avez obtenu de la <color yellow<potion\nd'invincibilité>coloroff>! Cette étrange potion\ndiminue de moitié les dégâts subis.\nSon effet ne dure que <color red<trois minutes>coloroff>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 5, unk: 1, line: 62 */ "Vous avez obtenu <color red<un >coloroff><color yellow<cristal de gratitude>coloroff>!\nIl est tombé lorsqu'une personne\ndébordante de gratitude est passée par ici.\n\nRassemblez‐en plusieurs et apportez‐les\nà<color blue< Morcégo>coloroff>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 5, unk: 1, line: 40 */ "Vous avez obtenu la <color yellow<statuette de dragon>coloroff>!\nCette sculpture en or massif reproduit\nadmirablement les circonvolutions\ngracieuses d'un dragon légendaire.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1, line: 18 */ "Vous avez récupéré la <color yellow<véritable épée\nmaîtresse>coloroff>! Vous allez enfin pouvoir\nlaisser éclater votre colère! Gare à\ncelui qui se dressera sur votre route!\nDe plus, vous allez à nouveau pouvoir\nparler avec <sound 4><color blue<Fay>coloroff>!")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 5, unk: 1, line: 17 */ "")
          	}
          }

          void entrypoint_003_082() {
/*<190>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 5, unk: 1, line: 108 */ "")
          }

          void entrypoint_003_107() {
/*<251>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 5, unk: 1, line: 141 */ "")
          }

          void entrypoint_003_124() {
/*<281>*/ 	start()
/*<566>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<568>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 5, unk: 1, line: 161 */ "Votre bouclier est maintenant un\n<color yellow<bouclier sacré ultime>coloroff>! Le pouvoir\nqu'il renferme lui permet de se réparer\ntout seul. Il est encore plus résistant!")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1, line: 180 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nOn observe une invasion de ces insectes\nune fois tous les dix ans. Ils détruisent\ntoute la végétation sur leur passage.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 5, unk: 1, line: 179 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nOn observe une invasion de ces insectes\nune fois tous les dix ans. Ils détruisent\ntoute la végétation sur leur passage.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 5, unk: 1, line: 226 */ "Vous avez obtenu une <color yellow<poussière de Déesse>coloroff>!\nOn raconte que la Déesse aurait laissé\ntomber ces trésors légendaires très rares\nil y a des générations.")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 5, unk: 1, line: 209 */ "Vous avez obtenu la <color yellow<cage à insecte>coloroff>!\nL'insecte bien‐aimé de Beedle se\ntrouve à l'intérieur! Dépêchez‐vous\nde le lui rapporter!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1, line: 243 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 5, unk: 1, line: 251 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 5, unk: 1, line: 89 */ "Vous avez obtenu de la <color yellow<potion\nd'invincibilité >coloroff><color yellow<★>coloroff>!\n\n\nCette potion extrêmement puissante\nvous protège de tout dégât pendant\n<color red<trois minutes>coloroff>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 5, unk: 1, line: 64 */ "Vous avez récupéré la <color yellow<jarre des vents>coloroff>!\nVous allez pouvoir faire un peu\nde ménage!")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1, line: 63 */ "Vous avez obtenu la <color yellow<jarre des vents>coloroff>!\nCet objet antique et insolite est capable\nde générer de violentes bourrasques.\n\nSi lorsque vous l'utilisez, vous avez du mal\nà viser, recentrez le curseur en appuyant\nsur (v).<0x10011:0x09cd>")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 5, unk: 1, line: 41 */ "Vous avez obtenu le <color yellow<circuit antique>coloroff>!\nCette pièce forgée dans l'or pur semble\ncompléter un mécanisme. Sa surface est\nincrustée de circuits électriques.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 5, unk: 1, line: 19 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 5, unk: 1, line: 109 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 5, unk: 1, line: 142 */ "Vous avez obtenu une <color yellow<bourse moyenne>coloroff>!\nSa capacité est un peu plus grande que\ncelle de votre ancienne bourse.\n\nVous pouvez y ranger <color red<500 rubis>coloroff>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1, line: 162 */ "Vous avez obtenu le <color yellow<bouclier d'Hylia>coloroff>!\nL'aura des héros émane de ce bouclier\nlégendaire. Aucune attaque ne peut\nl'endommager!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 5, unk: 1, line: 182 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 5, unk: 1, line: 181 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 5, unk: 1, line: 227 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 5, unk: 1, line: 244 */ "Vous avez obtenu de la <color yellow<polypotion ★★>coloroff>!\nElle restaure <color red<automatiquement >coloroff>la jauge de\nvotre bouclier, ainsi que <color red<huit>coloroff> de vos cœurs.\nEt en plus, vous pouvez l'utiliser <color red<deux fois>coloroff>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1, line: 90 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1, line: 42 */ "Vous avez obtenu un <color silver<rubis argenté>coloroff>!\nSa valeur est de <color red<100 rubis>coloroff>!\nExtraordinaire! Voilà qui doit vous\nfaire chaud au cœur!")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 5, unk: 1, line: 20 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 5, unk: 1, line: 110 */ "Vous avez obtenu de la <color yellow<potion d'endurance>coloroff>!\nLorsque vous l'utilisez, votre jauge\nd'endurance se vide plus lentement.\nSon effet dure <color red<trois minutes>coloroff>!")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 5, unk: 1, line: 143 */ "Vous avez obtenu une <color yellow<grande bourse>coloroff>!\nElle a une capacité bien supérieure\nà celle de votre ancienne bourse.\nVous pouvez y ranger <color red<1 000 rubis>coloroff>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 5, unk: 1, line: 163 */ "Vous avez obtenu de la <color yellow<polypotion>coloroff>!\nCe produit étrange <color red<remplit entièrement>coloroff>\nla jauge de votre bouclier et vous rend\n<color red<quatre>coloroff> cœurs!")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 5, unk: 1, line: 184 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nOn raconte que son venin a des vertus\nmédicinales une fois bouilli. Ne vous\nlaissez pas prendre dans un essaim!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1, line: 183 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nOn raconte que son venin a des vertus\nmédicinales une fois bouilli. Ne vous\nlaissez pas prendre dans un essaim!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1, line: 210 */ "Vous avez trouvé un <color yellow<hochet>coloroff>!\nVoilà le genre de jouet qui ferait\nle bonheur d'un jeune enfant...\nQuelqu'un a dû le laisser tomber.")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1, line: 228 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 5, unk: 1, line: 245 */ "Vous avez obtenu de la <color yellow<soupe de\ncitrouille chaude>coloroff>! C'est la spécialité\ndu patron. Mais attention, elle sera\nfroide dans<color red< cinq minutes>coloroff>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 5, unk: 1, line: 91 */ "Vous avez obtenu l'<color yellow<écaille du dragon\nd'eau>coloroff>! C'est une des reliques de la\nDéesse. Elle vous permet de nager\nsous l'eau et de tourbillonner.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 5, unk: 1, line: 65 */ "Vous avez obtenu la <color yellow<carte du donjon>coloroff>!\nVous pouvez examiner la disposition\ndes lieux et localiser les pièces que\nvous n'avez pas encore visitées.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1, line: 66 */ "L'emplacement des coffres y est\négalement indiqué. Prenez le\ntemps d'y jeter un coup d'œil!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 5, unk: 1, line: 43 */ "Vous avez obtenu un <color gold<rubis doré>coloroff>!\nSa valeur est de <color red<300 rubis>coloroff>! Exceptionnel!\nMieux vaut garder ça pour vous...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1, line: 21 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1, line: 111 */ "Vous avez obtenu de la <color yellow<potion\nd'endurance <color yellow<★<color yellow<>coloroff>! Cet élixir miraculeux\nempêche votre jauge d'endurance de\nse vider pendant <color red<trois minutes>coloroff>!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 5, unk: 1, line: 164 */ "Vous avez obtenu de la <color yellow<polypotion ★>coloroff>!\nCette substance prodigieuse répare\n<color red<automatiquement>coloroff> votre bouclier lorsqu'il\nest détruit et vous rend <color red<huit>coloroff> cœurs!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1, line: 186 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 5, unk: 1, line: 185 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 5, unk: 1, line: 211 */ "Vous avez obtenu des <color yellow<larves de guêpes>coloroff>!\nCes larves fraîchement extraites du nid\npeuvent certainement être utilisées comme\ningrédient. Elles sont pleines de protéines.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 5, unk: 1, line: 229 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1, line: 246 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 5, unk: 1, line: 92 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 5, unk: 1, line: 67 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 5, unk: 1, line: 44 */ "Vous avez obtenu un <color black<roupir>coloroff>!\nVous perdez <color red<10 rubis>coloroff>.\nUne vague tristesse vous gagne...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 5, unk: 1, line: 22 */ "Vous avez obtenu le <color yellow<réceptacle spirituel>coloroff>!\nCette fleur étonnante représente la\nmaturité de votre âme.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 5, unk: 1, line: 112 */ "Vous avez obtenu une <color yellow<potion d'oxygène>coloroff>!\nLorsque vous l'utilisez, votre jauge\nd'oxygène se vide plus lentement.\nSon effet dure <color red<trois minutes>coloroff>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1, line: 144 */ "Vous avez obtenu une <color yellow<bourse énorme>coloroff>!\nElle a une capacité largement supérieure\nà celle de votre ancienne bourse.\nVous pouvez y ranger <color red<5 000 rubis>coloroff>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1, line: 165 */ "Vous avez obtenu un <color yellow<petit sac de graines>coloroff>!\nIl peut contenir <color red<10 >coloroff>graines Mojo\nsupplémentaires. Prenez-le lorsque\nvous utilisez votre lance-pierre.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 5, unk: 1, line: 188 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>!\nOn dit que sa couleur rouge vient du\nminerai qu'elle mange. Elle est plutôt\ntranquille et reste souvent immobile.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 5, unk: 1, line: 187 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>!\nOn dit que sa couleur rouge vient du\nminerai qu'elle mange. Elle est plutôt\ntranquille et reste souvent immobile.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 5, unk: 1, line: 212 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0fcd>>coloroff>!\nCes délicates petites plumes sont très\nprisées à Célesbourg. Peut‐être leur\ntrouverez‐vous une utilité.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 5, unk: 1, line: 248 */ "Vous avez récupéré la <color yellow<pousse de l'arbre\nde vie>coloroff>! Elle ne peut pas s'épanouir assez\nrapidement ici. Cherchez un endroit\nplus approprié pour la planter.")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 5, unk: 1, line: 247 */ "Vous avez obtenu la <color yellow<pousse de l'arbre\nde vie>coloroff>! En grandissant, elle deviendra\nl'arbre légendaire dont le fruit détient\nun grand pouvoir de guérison.")
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
/*<599>*/ 			printf(/* textboxtype: 5, unk: 1, line: 70 */ "Vous avez récupéré le <color yellow<lance‐pierre rafale>coloroff>!\nÉtourdissez les patrouilles ennemies!\n")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1, line: 69 */ "Vous avez récupéré le <color yellow<lance‐pierre>coloroff>!\nÉtourdissez les patrouilles ennemies!\n")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 5, unk: 1, line: 68 */ "Vous avez obtenu le <color yellow<lance‐pierre>coloroff>!\nIl vous permet de tirer des graines\nMojo qui étourdissent vos ennemis.\n\nSi lorsque vous l'utilisez, vous avez du mal\nà viser, recentrez le curseur en appuyant\nsur (v).<0x10011:0x09cd>")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1, line: 45 */ "Vous avez obtenu <color red<cinq>coloroff> <color yellow<cristaux de\ngratitude>coloroff>! Chacun d'entre eux est un\nconcentré d'essence de reconnaissance.\n\nLorsque vous venez en aide à quelqu'un,\nsa gratitude se matérialise sous la forme\nde <color red<cinq >coloroff>de ces cristaux.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 5, unk: 1, line: 23 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1, line: 0 */ "Il n'y a rien d'intéressant là‐dedans!")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 5, unk: 1, line: 1 */ "Ça ne se fait pas de fouiller dans le placard\ndes gens... Quand même!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 5, unk: 1, line: 113 */ "Vous avez obtenu une <color yellow<potion d'oxygène ★>coloroff>!\nCe merveilleux élixir empêche votre\njauge d'oxygène de se vider pendant\n<color red<trois minutes.>coloroff>")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 5, unk: 1, line: 145 */ "Vous avez obtenu la <color yellow<bourse de star>coloroff>!\nVoilà qui impressionnerait même les plus\nfortunés... Vous pouvez y ranger la somme\nastronomique de <color red<9 000 rubis>coloroff>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 5, unk: 1, line: 166 */ "Votre sac a été amélioré en <color yellow<sac de graines\nmoyen>coloroff>! Il peut contenir <color red<20>coloroff> graines Mojo\nsupplémentaires. Prenez‐le lorsque vous\nutilisez votre lance‐pierre.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 5, unk: 1, line: 190 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>!\nCe lépidoptère est présent à peu près\npartout. Il arrive même parfois qu'on\nle rencontre dans des lieux insolites.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1, line: 189 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>!\nCe lépidoptère est présent à peu près\npartout. Il arrive même parfois qu'on\nle rencontre dans des lieux insolites.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1, line: 213 */ "Vous avez obtenu un <color yellow<virevoltant>coloroff>!\nPeut‐être trouverez‐vous une utilité\nà cette boule d'herbe séchée.\nApportez‐la avec vous, qui sait?")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 5, unk: 1, line: 230 */ "Vous avez obtenu le <color yellow<joyau des épreuves>coloroff>!\nCette pierre mènera le héros à\nl'endroit où repose la Triforce.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1, line: 249 */ "Vous avez obtenu un <color yellow<fruit de l'arbre\nde vie>coloroff>! Ce fruit légendaire aurait le\npouvoir de guérir toutes les maladies.\nApportez‐le vite au dragon de foudre!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 5, unk: 1, line: 101 */ "Vous avez obtenu le <color yellow<scarabée à crochet>coloroff>!\nSes grandes mandibules lui permettent\nde transporter des objets.\n\nLorsque vous passez en vue aérienne en\nmaintenant (Z) enfoncé, l'objet qu'il\ntransporte peut être lâché.<0x10011:0x07cd>")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 5, unk: 1, line: 71 */ "Vous avez obtenu le <color yellow<scarabée>coloroff>!\nCe dispositif en forme d'insecte\nvole dans les airs et vous permet\nd'explorer les environs!\nPointez <color red<l'écran avec la manette Wii Remote>coloroff>\net lancez le scarabée en appuyant sur (A).\n\n\nSi lorsque vous l'utilisez, vous avez du mal\nà le contrôler, recentrez le curseur en\nappuyant sur (v).<0x10011:0x09cd>")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 5, unk: 1, line: 46 */ "Vous avez obtenu des <color yellow<spores scintillantes>coloroff>!\nCette poussière fongique est produite\npar les champignons scintillants.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1, line: 24 */ "Vous avez obtenu l'<color yellow<arc>coloroff>!\nVous pouvez tirer sur des cibles distantes!\nVos flèches infligeront d'importants\ndégâts.\nSi lorsque vous tirez, vous avez du mal\nà viser, recentrez le curseur en appuyant\nsur (v).<0x10011:0x09cd>")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 5, unk: 1, line: 2 */ "Vous avez obtenu une <color yellow<petite clé>coloroff>!\nElle vous permettra d'ouvrir une porte\nverrouillée. Vous ne pouvez l'utiliser que\ndans cette zone.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1, line: 93 */ "Vous avez obtenu la <color yellow<médaille insecte>coloroff>!\nLorsque vous l'avez sur vous, vous\npouvez trouver des insectes facilement.\nSuivez les (O) sur votre carte!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1, line: 114 */ "Vous avez attrapé une <color yellow<fée>coloroff>!\nCette bienveillante créature\nvous rendra <color red<six cœurs>coloroff>.\n\nSi vous la transportez dans un flacon, elle\nen sortira <color red<lorsque vous serez à bout de\nforces >coloroff>et vous soignera <color red<automatiquement>coloroff>!")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1, line: 147 */ "Vous avez récupéré votre <color yellow<sacoche\nd'aventurier>coloroff>! Et tout le reste de\nvotre équipement par la même occasion!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 5, unk: 1, line: 146 */ "Vous avez obtenu la <color yellow<sacoche\nd'aventurier>coloroff>! C'est un accessoire fort\npratique dans lequel vous pouvez\nranger les objets utiles à vos aventures.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1, line: 192 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nOn dit que ce spécimen capable de survivre\ndans les déserts les plus arides bâtit\nsa fourmilière sur une source d'eau.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 5, unk: 1, line: 191 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nOn dit que ce spécimen capable de survivre\ndans les déserts les plus arides bâtit\nsa fourmilière sur une source d'eau.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 5, unk: 1, line: 214 */ "Vous avez obtenu une <color yellow<queue de lézard>coloroff>!\nL'extrémité de cet appendice est équipée\nd'une dangereuse boule à pointes. Un objet\nrépugnant, mais qui peut servir...")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1, line: 231 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 5, unk: 1, line: 250 */ "Vous avez obtenu une <color yellow<bourse annexe>coloroff>!\nVotre bourse peut maintenant contenir\n<color red<300 rubis >coloroff>supplémentaires!")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 5, unk: 1, line: 94 */ "Vous avez obtenu le <color yellow<filet>coloroff>!\nVous pouvez attraper de petits insectes et\ncertaines autres créatures. Approchez‐les\navec précaution et soyez vif!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1, line: 72 */ "Vous avez rempli votre flacon\nd'<color yellow<eau ordinaire>coloroff>! Il s'agit d'eau\ntout ce qu'il y a de plus normal.\nQui sait, elle pourrait vous servir.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 5, unk: 1, line: 47 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1, line: 3 */ "Vous avez obtenu un <color green rupee<rubis vert>coloroff>!\nSa valeur est de <color red<1 rubis>coloroff>. C'est le\ndébut d'une petite fortune!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 5, unk: 1, line: 115 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 5, unk: 1, line: 148 */ "Vous avez ajouté une poche à votre\n<color yellow<sacoche d'aventurier>coloroff>! Vous pouvez y\nranger <color red<un objet supplémentaire>coloroff>!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 5, unk: 1, line: 167 */ "Votre sac a été amélioré en <color yellow<grand sac de\ngraines>coloroff>! Il peut contenir <color red<30>coloroff> graines Mojo\nsupplémentaires. Prenez‐le lorsque vous\nutilisez votre lance‐pierre.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 5, unk: 1, line: 194 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nCet insecte demeure caché sous la terre\nà l'état larvaire pendant plus de dix ans.\nSa capture demande de la patience!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 5, unk: 1, line: 193 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nCet insecte demeure caché sous la terre\nà l'état larvaire pendant plus de dix ans.\nSa capture demande de la patience!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 5, unk: 1, line: 215 */ "Vous avez obtenu du <color yellow<minerai d'Ordinn>coloroff>!\nCette pierre extrêmement dure scintille\njoliment. Ses emplois sont multiples.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 5, unk: 1, line: 232 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1, line: 96 */ "Vous avez trouvé une <color yellow<fée>coloroff>!\nCes créatures bienveillantes\nvous rendent <color red<6 cœurs>coloroff>!\n\nMalheureusement, vous n'avez\npas de <color yellow<<item 153>>coloroff>. Vous allez\ndevoir la laisser partir.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 5, unk: 1, line: 95 */ "Vous avez trouvé une <color yellow<fée>coloroff>!\nCes créatures bienveillantes\nvous rendent <color red<6 cœurs>coloroff>!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 5, unk: 1, line: 74 */ "Vous avez obtenu un flacon de <color yellow<spores de\nchampignon>coloroff>! Ces spores produites par un\nchampignon géant sont très efficaces pour\nsoigner les blessures des oiseaux!")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 5, unk: 1, line: 73 */ "Votre flacon est rempli de <color yellow<spores de\nchampignon>coloroff>! Elles proviennent d'un\nchampignon géant. Cela pourrait vous\nservir.")
          	}
          }

          void entrypoint_003_038() {
/*<108>*/ 	start()
/*< 50>*/ 	printf(/* textboxtype: 5, unk: 1, line: 48 */ "")
          }

          void entrypoint_003_020() {
/*<126>*/ 	start()
/*<408>*/ 	switch (story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */]) {
          	  case 0:
/*<409>*/ 		printf(/* textboxtype: 5, unk: 1, line: 26 */ "Vous avez récupéré votre <color yellow<grappin>coloroff>!\nVous pouvez à nouveau atteindre\ndes zones éloignées!")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 5, unk: 1, line: 25 */ "Vous avez obtenu le <color yellow<grappin>coloroff>!\nC'est une des reliques sacrées de la Déesse.\nIl permet à celui qui le possède d'élargir\nson champ d'action.\nVisez les <color red<cibles>coloroff> ou le <color red<lierre>coloroff>, puis tirez pour\nvous tracter à l'endroit où sa griffe s'est\naccrochée.\n\nSi lors de la visée votre grappin devient\n<color red<difficile à contrôler>coloroff>, recentrez le curseur\nen appuyant sur (v).<0x10011:0x09cd>")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 5, unk: 1, line: 5 */ "Vous avez obtenu un <color blue rupee<rubis bleu>coloroff>!\nSa valeur est de <color red<5 rubis>coloroff>. Placez‐le\nsoigneusement dans votre bourse!")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 5, unk: 1, line: 4 */ "Vous avez obtenu un <color blue rupee<rubis bleu>coloroff>!\nSa valeur est de <color red<5 rubis>coloroff>.\nQuelle chance!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 5, unk: 1, line: 149 */ "Vous avez obtenu une <color yellow<médaille de vie>coloroff>!\nAvec elle, votre énergie vitale\nmaximale augmentera d'<color red<un cœur>coloroff>.\nCela peut parfois s'avérer utile...")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1, line: 168 */ "Vous avez obtenu un <color yellow<petit carquois>coloroff>!\nIl peut contenir <color red<5>coloroff> flèches\nsupplémentaires. Prenez-le lorsque\nvous utilisez votre arc.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 5, unk: 1, line: 196 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nSes yeux à facettes ont l'éclat du saphir\net ses ailes la délicatesse du cristal!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1, line: 195 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nSes yeux à facettes ont l'éclat du saphir\net ses ailes la délicatesse du cristal!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1, line: 216 */ "Vous avez obtenu une <color yellow<fleur ancienne>coloroff>!\nOn dit qu'elle fleurissait bien longtemps\navant notre ère. Délicate et mystérieuse,\nelle brille dans l'obscurité.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 5, unk: 1, line: 233 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1, line: 75 */ "Vous avez obtenu les <color yellow<gants creuse‐tout>coloroff>!\nLeurs griffes acérées sont idéales pour\ncreuser la terre.\n\nSi vous trouvez des traces suspectes au sol,\napprochez‐vous et appuyez sur (A) pour\ncreuser!")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 5, unk: 1, line: 49 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1, line: 27 */ "Vous avez obtenu la <color yellow<statuette d'oiseau>coloroff>!\nC'est la preuve que vous avez remporté\nla chevauchée céleste. Zelda sera\nsûrement impressionnée!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1, line: 6 */ "Vous avez obtenu un <color red rupee<rubis rouge>coloroff>!\nSa valeur est de <color red<20 rubis>coloroff>. N'allez pas\ntout dépenser d'un coup! Chanceux, va.")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 5, unk: 1, line: 97 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 5, unk: 1, line: 116 */ "Votre arc a été amélioré en <color yellow<arc de fer>coloroff>!\nRéservé aux archers expérimentés, il\ncause de plus grands dégâts que votre\narc précédent.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1, line: 150 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 5, unk: 1, line: 169 */ "Votre carquois a été amélioré\nen<color yellow< carquois moyen>coloroff>! Il peut contenir\n<color red<10>coloroff> flèches supplémentaires.\nPrenez‐le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 5, unk: 1, line: 217 */ "Vous avez obtenu une <color yellow<perle d'ambre>coloroff>!\nOn trouve cette gemme d'un jaune profond\nun peu partout. Nul ne sait à quoi elle doit\nsa forme si particulière.")
/*<634>*/ 	open_collection_screen();
          }

          void entrypoint_003_184() {
/*<481>*/ 	start()
/*<479>*/ 	printf(/* textboxtype: 5, unk: 1, line: 234 */ "")
          }

          void entrypoint_003_057() {
/*< 92>*/ 	start()
/*<396>*/ 	check_item_flag(52, 1)
/*<397>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 5, unk: 1, line: 77 */ "Vous avez obtenu <color yellow<5 >coloroff><color yellow<<color yellow<graines <color yellow<Mojo>coloroff>!\nVous pouvez tirer ces petites\ngraines avec votre lance‐pierre.\nGardez un œil sur vos réserves!")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1, line: 78 */ "")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 5, unk: 1, line: 28 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 5, unk: 1, line: 7 */ "La <color yellow white<Triforce>coloroff> est reconstituée!\nVous allez pouvoir exaucer le souhait\nde Zelda et <color red<détruire>coloroff> l'<color blue<Avatar du Néant>coloroff>.")
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
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1, line: 99 */ "Vous avez obtenu de l'<color yellow<eau sacrée>coloroff>!\nIl ne s'agit pas là d'une eau ordinaire!\nSon extrême pureté recèle un grand\npouvoir.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 5, unk: 1, line: 98 */ "Vous avez obtenu de l'<color yellow<eau sacrée>coloroff>!\nSon extrême pureté lui donne le\npouvoir de guérir les blessures du\ndragon d'eau.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1, line: 117 */ "Votre arc a été amélioré en <color yellow<arc sacré>coloroff>!\nGrâce à la prière de la Déesse, il déploie\nune puissance dévastatrice contre\nles monstres!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 5, unk: 1, line: 151 */ "Vous avez obtenu un <color yellow<bouclier de bois>coloroff>!\nConstitué de bois léger, il est très facile\nà manier, mais attention : il brûle et\nse brise facilement!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 5, unk: 1, line: 170 */ "Votre carquois a été amélioré\nen<color yellow< grand carquois>coloroff>! Il peut contenir\n<color red<15>coloroff> flèches supplémentaires.\nPrenez‐le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1, line: 198 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nCe minuscule insecte pousse une boule\nde... quelque chose jusqu'à son nid.\nN'est‐il pas adorable?")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 5, unk: 1, line: 197 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nCe minuscule insecte pousse une boule\nde... quelque chose jusqu'à son nid.\nN'est‐il pas adorable?")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 5, unk: 1, line: 218 */ "Vous avez obtenu une <color yellow<perle d'ombre>coloroff>!\nD'apparence similaire à la perle d'ambre,\nelle est pourtant très différente. On ne la\ntrouve qu'en des lieux spécifiques.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 5, unk: 1, line: 235 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 5, unk: 1, line: 50 */ "Vous avez obtenu <color yellow<5 bombes>coloroff>!\nVous pouvez les lancer ou les faire rouler\npour détruire des matériaux résistants.\nRavitaillez-vous dès que possible!")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 5, unk: 1, line: 29 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 5, unk: 1, line: 8 */ "Vous avez obtenu un <color yellow<cœur>coloroff>!\nL'énergie vitale qu'il contient\nrestaure votre vie d'<color red<un>coloroff> cœur.")
          }

          void entrypoint_003_092() {
/*<180>*/ 	start()
/*<402>*/ 	switch (story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */]) {
          	  case 0:
/*<403>*/ 		printf(/* textboxtype: 5, unk: 1, line: 120 */ "Vous avez récupéré votre <color yellow<sac de bombes>coloroff>!\nEn avant pour le feu d'artifice!")
/*<426>*/ 		open_item_wheel(3)
/*<434>*/ 		story_flags[165 /* us: 805A9AE3 0x10, jp: 805ACD63 0x10 */] = false;
          	  case 1:
/*<424>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*<425>*/ 			printf(/* textboxtype: 5, unk: 0, line: 119 */ "Vous avez obtenu le <color yellow<sac de bombes>coloroff>!\nNe trahissez pas la confiance de <color blue<Ferrug>coloroff>,\nprenez‐en soin!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 5, unk: 1, line: 118 */ "Vous avez trouvé un <color yellow<sac de bombes>coloroff>!\nCette pochette fort commode permet\nd'emporter avec soi les fleurs bombes\nramassées.\nVoilà qui pourrait vous permettre\nd'accéder à des zones jusqu'ici\ninaccessibles... Voyez si <color blue<Ferrug\n>coloroff>accepte de vous le prêter!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 5, unk: 1, line: 100 */ "Votre scarabée a été amélioré en <color yellow<scarabée\nà crochet>coloroff>! Ses nouvelles mandibules lui\npermettent de transporter des objets.\n\nLorsque vous passez en vue aérienne en\nmaintenant (Z) enfoncé, l'objet qu'il\ntransporte peut être lâché.<0x10011:0x07cd>")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1, line: 153 */ "Votre bouclier a été amélioré en <color yellow<bouclier\nde bois solide>coloroff>! Léger et maniable, il est\nplus solide qu'un bouclier de bois\nordinaire!")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1, line: 171 */ "Vous avez obtenu un <color yellow<petit sac de\nbombes>coloroff>! Il peut contenir <color red<5>coloroff> bombes\nsupplémentaires. Prenez‐le lorsque\nvous avez besoin de bombes!")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 5, unk: 1, line: 200 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nVoici un insecte très populaire parmi les\nenfants de Célesbourg. Mais attention aux\ndoigts, ça pince!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 5, unk: 1, line: 199 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nVoici un insecte très populaire parmi les\nenfants de Célesbourg. Mais attention aux\ndoigts, ça pince!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1, line: 219 */ "Vous avez obtenu une <color yellow<gélatibulle>coloroff>!\nCet objet n'est pas particulièrement\nagréable à regarder, mais ses propriétés\nuniques en font un matériau précieux.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 5, unk: 1, line: 80 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 5, unk: 1, line: 79 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 5, unk: 1, line: 236 */ "Vous avez appris le <color yellow<Chant de la Déesse>coloroff>!\nCette mystérieuse mélodie provient de\ntemps anciens.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1, line: 51 */ "Vous avez obtenu <color yellow<dix bombes>coloroff>!\nVous pouvez les lancer ou les faire rouler\npour détruire des matériaux résistants.\nRangez‐les dans votre sac de bombes!")
          }

          void entrypoint_003_024() {
/*<122>*/ 	start()
/*< 63>*/ 	printf(/* textboxtype: 5, unk: 1, line: 30 */ "")
          }

          void entrypoint_003_007() {
/*<139>*/ 	start()
/*<157>*/ 	check_item_flag(19, 1)
/*<158>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 5, unk: 1, line: 9 */ "Vous avez obtenu une <color yellow<flèche perdue>coloroff>!\nVous pouvez la réutiliser avec votre arc.\nCe serait dommage de ne pas s'en servir!")
          	  case 1:
/*<159>*/ 		printf(/* textboxtype: 5, unk: 1, line: 10 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 5, unk: 1, line: 121 */ "Vous avez obtenu un <color yellow<réceptacle de cœur>coloroff>!\nVotre énergie vitale maximale est\naugmentée d'<color red<un cœur>coloroff>, et tous vos\ncœurs sont restaurés!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1, line: 102 */ "Votre scarabée a été amélioré\nen <color yellow<scarabée rapide>coloroff>! Gare aux\nexcès de vitesse!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 5, unk: 1, line: 134 */ "Vous avez obtenu une <color yellow<médaille cœur>coloroff>!\nAvec elle, même en <color red<mode héroïque>coloroff>,\nles cœurs apparaissent et les flœurs\nfleurissent.\nSi votre santé vous préoccupe, c'est l'objet\nidéal!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 5, unk: 1, line: 133 */ "Vous avez obtenu une <color yellow<médaille cœur>coloroff>!\nAvec elle, les cœurs apparaîtront\nplus fréquemment. Si votre santé\nvous préoccupe, c'est l'objet idéal!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 5, unk: 1, line: 154 */ "Votre bouclier a été amélioré en <color yellow<bouclier\nde bois renforcé>coloroff>. C'est le plus robuste des\nboucliers de bois. Il conserve néanmoins\ntoute sa légèreté.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 5, unk: 1, line: 172 */ "Votre sac a été amélioré en <color yellow<sac de\nbombes moyen>coloroff>! Il peut contenir <color red<10\n>coloroff>bombes supplémentaires. Prenez‐le\nlorsque vous avez besoin de bombes!")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 5, unk: 1, line: 202 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>!\nVoici le plus rare des petits habitants\ndu ciel. Il se tapit habituellement dans\nl'obscurité.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1, line: 201 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>!\nVoici le plus rare des petits habitants\ndu ciel. Il se tapit habituellement dans\nl'obscurité.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 5, unk: 1, line: 80 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 5, unk: 1, line: 79 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1, line: 237 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 5, unk: 1, line: 52 */ "Vous avez obtenu une <color yellow<baie d'endurance>coloroff>!\nCes fruits mystérieux remplissent\nimmédiatement votre jauge d'endurance.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 5, unk: 1, line: 31 */ "Vous avez obtenu la <color yellow<statuette sereine>coloroff>!\nCette sculpture de bois inspire la\nplénitude. Elle ressemble à la statue\nde pierre de l'étage supérieur.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 5, unk: 1, line: 11 */ "Vous avez obtenu <color yellow<10 flèches>coloroff>!\nVous pourrez les tirer avec votre arc.\nLeur nombre est limité, utilisez-les\navec discernement!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 5, unk: 1, line: 103 */ "Votre scarabée a été amélioré en <color yellow<scarabée\nendurant>coloroff>! Il peut maintenant voler plus\nlongtemps. Voilà qui ouvre de nouvelles\nperspectives!")
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
/*<208>*/ 				printf(/* textboxtype: 5, unk: 1, line: 124 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un cœur.\nPlus qu'<color red<un>coloroff>!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1, line: 123 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un cœur.\nPlus que <color red<deux>coloroff>!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 5, unk: 1, line: 122 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un cœur.\nPlus que <color red<trois>coloroff>!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 5, unk: 1, line: 125 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nVous avez formé un nouveau réceptacle\nde cœur. Votre énergie vitale maximale\naugmente d'un cœur!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1, line: 135 */ "Vous avez obtenu une <color yellow<médaille rubis>coloroff>!\nAvec elle, les rubis apparaîtront plus\nfréquemment. Pensez‐y quand vous\nêtes à court d'argent!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 5, unk: 1, line: 155 */ "Vous avez obtenu un <color yellow<bouclier de fer>coloroff>!\nLe fer a l'avantage de ne pas brûler et de\nmieux résister aux impacts, mais il ne\nprotège pas du courant électrique!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 5, unk: 1, line: 173 */ "Votre sac a été amélioré en <color yellow<grand\nsac de bombes>coloroff>! Il peut contenir <color red<15\n>coloroff>bombes supplémentaires. Prenez‐le\nlorsque vous avez besoin de bombes!")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 5, unk: 1, line: 203 */ "Vous avez obtenu un <color yellow<flacon vide>coloroff>!\nVous pouvez le remplir de différentes\nchoses.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 5, unk: 1, line: 220 */ "Vous avez obtenu une <color yellow<griffe de monstre>coloroff>!\nCette griffe acérée a l'air tranchante\ncomme un rasoir... Le monstre dont elle\nprovient doit faire peur à voir.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 5, unk: 1, line: 238 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 5, unk: 1, line: 83 */ "Vous avez obtenu <color yellow<10 >coloroff><color yellow<<color yellow<graines <color yellow<Mojo>coloroff>!\nVous pouvez lancer ces petites\ngraines avec votre lance-pierre.\nGardez un œil sur vos réserves!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1, line: 54 */ "Vous avez rassemblé toutes les <color yellow<larmes\nde Farore>coloroff>. Votre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 5, unk: 1, line: 53 */ "Vous avez obtenu une <color yellow<larme de Farore>coloroff>!\nSon pouvoir sacré immobilise\nles gardiens pendant <color red<90 secondes>coloroff>.\n\nRassemblez-en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 5, unk: 1, line: 32 */ "Vous avez obtenu le <color yellow<cristal mystérieux>coloroff>!\nLes cubes qui le composent brillent d'un\néclat discret. Il en manque quelques‐uns.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 5, unk: 1, line: 104 */ "Vous avez obtenu une <color yellow<potion de santé>coloroff>!\nLorsque vous la buvez, vous récupérez\n<color red<8 cœurs>coloroff>!")
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
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Vous avez obtenu la <color yellow white<Triforce du courage>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Vous avez obtenu la <color yellow white<Triforce du courage>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<532>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Il ne vous manque plus qu'<color red<une>coloroff> partie!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Vous avez obtenu la <color yellow white<Triforce du courage>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<531>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Il vous manque encore <color red<deux>coloroff> parties!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 5, unk: 1, line: 136 */ "Vous avez obtenu la <color yellow<médaille trésor>coloroff>!\nAvec elle, les trésors apparaîtront\nplus fréquemment. Indispensable\npour la chasse au trésor!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 5, unk: 1, line: 175 */ "Vous avez récupéré votre <color yellow<fouet>coloroff>!\nCherchez s'il n'y a pas quelque part\nune prise à laquelle vous accrocher.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1, line: 174 */ "Vous avez obtenu le <color yellow<fouet>coloroff>!\nGrâce à l'orbe de lumière à son extrémité,\nil peut s'accrocher à de nombreux\nendroits!\nAvec (Z), ciblez les prises que vous ne\npourriez atteindre autrement, et agitez\nla manette Wii Remote pour les agripper.<0x10011:0x07cd>")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 5, unk: 1, line: 221 */ "Vous avez obtenu un <color yellow<cor de monstre>coloroff>!\nFabriqué à partir d'une corne d'animal,\nce cor d'une grande solidité pourrait\nêtre utilisé comme matériau.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1, line: 204 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 5, unk: 1, line: 239 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1, line: 84 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1, line: 33 */ "Vous avez obtenu la <color yellow<sculpture tentaculaire>coloroff>!\nCette statuette à la forme peu commune\nest recouverte d'inquiétantes ventouses...")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1, line: 105 */ "Vous avez obtenu une <color yellow<potion de santé ★>coloroff>!\nCette version améliorée de la potion de\nsanté <color red<restaure tous vos cœurs>coloroff>.")
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
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Vous avez obtenu la <color yellow white<Triforce de la force>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Vous avez obtenu la <color yellow white<Triforce de la force>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<535>*/ 			printf(/* textboxtype: 5, unk: 1, line: 128 */ "Il ne vous manque plus qu'<color red<une>coloroff> partie!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Vous avez obtenu la <color yellow white<Triforce de la force>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux\nanciens, la Triforce exauce tous les désirs\nde celui qui la possède.")
/*<534>*/ 			printf(/* textboxtype: 5, unk: 1, line: 127 */ "Il vous manque encore <color red<deux>coloroff> parties!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 5, unk: 1, line: 137 */ "Vous avez obtenu une <color yellow<médaille de\ndurabilité>coloroff>! Avec elle, l'effet des potions\nsera prolongé. Idéale pour les\ngrands consommateurs de potions!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 5, unk: 1, line: 152 */ "Votre bouclier est réparé!\nIl est comme neuf.")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1, line: 156 */ "Votre bouclier a été amélioré en <color yellow<bouclier\nde fer solide>coloroff>! Il est plus résistant qu'un\nbouclier de fer classique.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 5, unk: 1, line: 176 */ "Vous avez obtenu les <color yellow<boucles ignifuges>coloroff>!\nC'est une des reliques de la Déesse. Vous\npouvez désormais résister aux chaleurs\nextrêmes. ")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1, line: 222 */ "Vous avez obtenu un <color yellow<crâne décoratif>coloroff>!\nCe charmant bibelot est à l'image\ndu symbole des bokoblins.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 5, unk: 1, line: 205 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 5, unk: 1, line: 56 */ "Vous avez rassemblé toutes les <color yellow<larmes\nde Din>coloroff>. Votre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque\nvous aurez rejoint votre monde.\nRetournez à l'entrée pour recevoir\nla preuve de votre maturité.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 5, unk: 1, line: 55 */ "Vous avez obtenu une <color yellow<larme de Din>coloroff>!\nSon pouvoir sacré immobilise les gardiens\npendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

