          void entrypoint_003_062() {
/*< 11>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 5, line: 85 */ "")
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
/*<151>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "Vous avez rassemblé tous les <color yellow<fragments de clé>coloroff>!\nVous pouvez désormais ouvrir la porte du temple.\n\n\nRetournez vite au sommet de la montagne pour\nretrouver Zelda qui a été emmenée dans le\ntemple!")
/*<588>*/ 					story_flags[120 /* us: 805A9AEA 0x20, jp: 805ACD6A 0x20 */] = true;
/*<677>*/ 					story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
/*<589>*/ 					story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          				  case 1:
/*< 23>*/ 					printf(/* textboxtype: 0, unk: 5, line: 37 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre la porte du\ntemple. Il ne vous manque qu'<color red<un>coloroff> fragment pour\nreconstituer la clé!")
          				}
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 5, unk: 1, line: 36 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre la porte du\ntemple. Il vous manque <color red<deux>coloroff> fragments pour\nreconstituer la clé!")
          			}
          		  case 1:
/*< 29>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre la porte du\ntemple. Il vous manque <color red<trois>coloroff> fragments pour\nreconstituer la clé!")
          		}
          	  case 1:
/*<150>*/ 		printf(/* textboxtype: 0, unk: 5, line: 34 */ "Vous avez obtenu un <color yellow<fragment de clé>coloroff>!\nC'est une partie de la clé qui ouvre la porte\ndu temple.\n\nIl vous faut cinq fragments pour la reconstituer.\nDénichez les <color red<quatre >coloroff>fragments restants!")
          	}
          }

          void entrypoint_003_010() {
/*<136>*/ 	start()
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 5, line: 13 */ "Vous avez obtenu une <color yellow<épée d'entraînement>coloroff>!\nElle est utilisée lors des cours d'escrime à l'école\nde chevalerie. Elle a un bon tranchant.\n\nAppuyez sur (+) en tout temps pour consulter\nvotre inventaire.<0x10011:0x03cd>")
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
/*<582>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "Vous avez obtenu la <color yellow white<Triforce de la sagesse>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<527>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_539:
/*<539>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "Vous avez obtenu la <color yellow white<Triforce de la sagesse>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<537>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "Il ne vous manque plus qu'<color red<une>coloroff> partie!")
/*<574>*/ 			changeScene(1, 1) // 
          		}
          	  case 1:
/*<549>*/ 		check_item_flag(96, 1)
/*<550>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 68}) {
          		  case 0:
          			goto flw_539
          		  case 1:
/*<226>*/ 			printf(/* textboxtype: 0, unk: 5, line: 130 */ "Vous avez obtenu la <color yellow white<Triforce de la sagesse>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<536>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "Il vous manque encore <color red<deux>coloroff> parties!")
/*<575>*/ 			changeScene(1, 1) // 
          		}
          	}
          }

          void entrypoint_003_104() {
/*<242>*/ 	start()
/*<238>*/ 	printf(/* textboxtype: 5, unk: 1, line: 138 */ "Vous avez obtenu la <color yellow<médaille maléfique>coloroff>!\nElle fait apparaître plus fréquemment les trésors\net les rubis. Mais sa malédiction vous empêchera\nd'ouvrir votre sacoche!")
          }

          void entrypoint_003_121() {
/*<272>*/ 	start()
/*<559>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<563>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<268>*/ 		printf(/* textboxtype: 0, unk: 5, line: 157 */ "Votre bouclier a été amélioré en <color yellow<bouclier de fer\nrenforcé>coloroff>! C'est le plus robuste des boucliers de\nfer.")
          	}
          }

          void entrypoint_003_139() {
/*<314>*/ 	start()
/*<310>*/ 	printf(/* textboxtype: 5, unk: 1, line: 177 */ "")
          }

          void entrypoint_003_173() {
/*<360>*/ 	start()
/*<358>*/ 	printf(/* textboxtype: 0, unk: 5, line: 223 */ "Vous avez obtenu un <color yellow<cristal maléfique>coloroff>!\nIl s'agit du cœur cristallisé d'un monstre. Il est\ntrès rare de dénicher un spécimen dans un si bon\nétat de conservation!")
/*<640>*/ 	open_collection_screen();
          }

          void entrypoint_003_156() {
/*<373>*/ 	start()
/*<371>*/ 	printf(/* textboxtype: 1, unk: 0, line: 206 */ "")
          }

          void entrypoint_003_045() {
/*<448>*/ 	start()
/*<450>*/ 	check_item_flag(500, 14)
/*<449>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 52}) {
          	  case 0:
/*<451>*/ 		printf(/* textboxtype: 0, unk: 5, line: 58 */ "Vous avez rassemblé toutes les <color yellow<larmes de Nayru>coloroff>.\nVotre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*<447>*/ 		printf(/* textboxtype: 5, unk: 1, line: 57 */ "Vous avez obtenu une <color yellow<larme de Nayru>coloroff>!\nSon pouvoir sacré immobilise les Gardiens\npendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

          void entrypoint_003_190() {
/*<474>*/ 	start()
/*<472>*/ 	printf(/* textboxtype: 5, unk: 1, line: 240 */ "")
          }

          void entrypoint_003_063() {
/*< 13>*/ 	start()
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "")
/*<  5>*/ 	give_item(63 0x3F);
          }

          void entrypoint_003_029() {
/*<117>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 5, unk: 1, line: 39 */ "Vous avez obtenu la <color yellow<sculpture dorée>coloroff>!\nDe mystérieux symboles ornent la surface de\ncette œuvre en or à la forme surprenante.")
          }

          void entrypoint_003_011() {
/*<135>*/ 	start()
/*<608>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<609>*/ 		printf(/* textboxtype: 5, unk: 1, line: 15 */ "Vous avez obtenu l'<color yellow<épée divine>coloroff>!\nUne lumière sacrée émane de cette arme mystique.\n\n\nElle a gardé le souvenir des combats passés.\nLe <color red<pouvoir de l'éclat céleste >coloroff>qui l'emplit lorsqu'elle\nest brandie vers le ciel est <color red<<sound 4>à son maximum>coloroff>!")
          		flw_462:
/*<462>*/ 		story_flags[3 /* us: 805A9AD9 0x10, jp: 805ACD59 0x10 */] = true;
/*<524>*/ 		changeScene(7, 0) // 
          	  case 1:
/*< 76>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Vous avez obtenu l'<color yellow<épée divine>coloroff>!\nUne lumière sacrée émane de cette arme mystique.")
          		goto flw_462
          	}
          }

          void entrypoint_003_080() {
/*<192>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 5, line: 106 */ "")
          }

          void entrypoint_003_098() {
/*<227>*/ 	start()
/*<528>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "Vous avez obtenu la <color yellow<carte marine ancienne>coloroff>!\nElle représente la mer qui s'étendait autrefois\nà la place du désert.")
/*<530>*/ 	story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */] = true;
          }

          void entrypoint_003_105() {
/*<241>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 0, unk: 5, line: 139 */ "Votre lance‐pierre a été amélioré en <color yellow<lance‐pierre\nrafale>coloroff>! Vous pouvez attaquer une large zone en\nune seule fois. Maintenez <icon 41> enfoncé pour un tir\nplus puissant.<0x10011:0x0fcd>")
          }

          void entrypoint_003_122() {
/*<271>*/ 	start()
/*<562>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<564>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<671>*/ 		switch (story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */]) {
          		  case 0:
/*<672>*/ 			printf(/* textboxtype: 5, unk: 1, line: 159 */ "Vous avez obtenu un <color yellow<bouclier sacré>coloroff>!\nLe pouvoir qu'il renferme lui permet de se\nréparer tout seul. Il protège du feu, de\nl'électricité et des malédictions!")
          		  case 1:
/*<673>*/ 			printf(/* textboxtype: 1, unk: 0, line: 158 */ "Vous avez obtenu un <color yellow<bouclier sacré>coloroff>!\nLe pouvoir renfermé par ce mystérieux bouclier\nlui permet de <color red<se réparer tout seul>coloroff>.\n\nPeu résistant, il se brise facilement mais il\npermet de se protéger du feu, de l'électricité\net des malédictions.")
/*<674>*/ 			story_flags[1095 /* us: 805A9B52 0x20, jp: 805ACDD2 0x20 */] = true;
/*<518>*/ 			story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          		}
          	}
          }

          void entrypoint_003_174() {
/*<359>*/ 	start()
/*<357>*/ 	printf(/* textboxtype: 1, unk: 0, line: 224 */ "Vous avez obtenu une <color yellow<plume bleue>coloroff>!\nLes petits pioups sont très rarement bleus.\nLes plumes de cette couleur n'en sont que\nplus précieuses!")
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
/*<446>*/ 		printf(/* textboxtype: 5, unk: 1, line: 60 */ "Vous avez rassemblé toutes les <color yellow<larmes de la\nDéesse>coloroff>. Votre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "Vous avez obtenu une <color yellow<larme de la Déesse>coloroff>!\nSon pouvoir sacré immobilise les Gardiens\npendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

          void entrypoint_003_191() {
/*<473>*/ 	start()
/*<471>*/ 	printf(/* textboxtype: 0, unk: 5, line: 241 */ "")
          }

          void entrypoint_003_064() {
/*< 14>*/ 	start()
/*<  2>*/ 	printf(/* textboxtype: 5, unk: 1, line: 87 */ "")
/*<  3>*/ 	give_item(64 0x40);
          }

          void entrypoint_003_047() {
/*<102>*/ 	start()
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 5, line: 61 */ "Vous avez obtenu une <color yellow<baie de lumière>coloroff>!\nCe fruit étrange vous indiquera la position des\nlarmes par des balises de lumière pendant\n<color red<30 secondes>coloroff>.")
          }

          void entrypoint_003_012() {
/*<134>*/ 	start()
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 5, line: 16 */ "")
/*<541>*/ 	story_flags[582 /* us: 805A9B1B 0x20, jp: 805ACD9B 0x20 */] = true;
          }

          void entrypoint_003_081() {
/*<191>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 107 */ "Vous avez obtenu une <color yellow<potion de santé ★★>coloroff>!\nUn flacon contient <color red<deux doses >coloroff>de ce précieux\nbreuvage qui <color red<restaure tous vos cœurs>coloroff>.")
          }

          void entrypoint_003_099() {
/*<235>*/ 	start()
/*<592>*/ 	switch (story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */]) {
          	  case 0:
/*<593>*/ 		printf(/* textboxtype: 0, unk: 5, line: 76 */ "Vous avez récupéré les <color yellow<gants Mogma>coloroff>!\nEssayez de sortir d'ici comme le ferait un\nvrai Mogma.")
/*<594>*/ 		story_flags[160 /* us: 805A9AE0 0x80, jp: 805ACD60 0x80 */] = false;
          	  case 1:
/*<231>*/ 		printf(/* textboxtype: 5, unk: 1, line: 132 */ "Vous avez obtenu les <color yellow<gants Mogma>coloroff>!\nMême les Mogmas ne mettent pas souvent les\npattes sur des gants creuse-tout de cette valeur!\n\nIls permettent non seulement de creuser, <color green<mais\naussi de se terrer>coloroff>. Cherchez des trous un peu\npartout!")
          	}
          }

          void entrypoint_003_106() {
/*<240>*/ 	start()
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 140 */ "")
          }

          void entrypoint_003_123() {
/*<282>*/ 	start()
/*<565>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<567>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<278>*/ 		printf(/* textboxtype: 0, unk: 5, line: 160 */ "Votre bouclier est maintenant un <color yellow<bouclier sacré\namélioré>coloroff>! Le pouvoir qu'il renferme lui permet\nde se réparer tout seul. Il est plus résistant!")
          	}
          }

          void entrypoint_003_140() {
/*<313>*/ 	start()
/*<309>*/ 	printf(/* textboxtype: 0, unk: 5, line: 178 */ "Votre filet a été amélioré en <color yellow<grand filet>coloroff>!\nCelui-ci est deux fois plus grand. Même les\ninsectes les plus agiles auront peine à vous\néchapper!")
          }

          void entrypoint_003_175() {
/*<368>*/ 	start()
/*<366>*/ 	printf(/* textboxtype: 5, unk: 1, line: 225 */ "Vous avez obtenu un <color yellow<crâne d'or>coloroff>!\nLes collectionneurs diront qu'il s'agit là d'un objet\nexceptionnel, une vraie rareté! Il n'en luit pas\nmoins d'un éclat inquiétant...")
/*<642>*/ 	open_collection_screen();
          }

          void entrypoint_003_158() {
/*<378>*/ 	start()
/*<377>*/ 	printf(/* textboxtype: 0, unk: 5, line: 208 */ "Vous avez accepté de vous charger de la <color yellow<lettre\nd'Orbo>coloroff>! Qui sait si son contenu est réellement\nsincère?\n\nGardez‐vous néanmoins de vous en servir comme\npapier brouillon, ce serait impoli.")
          }

          void entrypoint_003_192() {
/*<476>*/ 	start()
/*<475>*/ 	printf(/* textboxtype: 1, unk: 0, line: 242 */ "")
          }

          void entrypoint_003_065() {
/*< 15>*/ 	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 5, line: 88 */ "Vous avez obtenu de la <color yellow<potion d'invincibilité>coloroff>!\nCette étrange potion diminue de moitié les dégâts\nsubis. Son effet ne dure que <color red<trois minutes>coloroff>.")
          }

          void entrypoint_003_048() {
/*<101>*/ 	start()
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "Vous avez obtenu <color red<un >coloroff><color yellow<cristal de gratitude>coloroff>!\nIl est tombé lorsqu'une personne débordante\nde gratitude est passée par ici.\n\nRassemblez‐en plusieurs et apportez‐les\nà<color blue< Morcégo>coloroff>!")
/*<645>*/ 	open_collection_screen();
          }

          void entrypoint_003_030() {
/*<116>*/ 	start()
/*< 58>*/ 	printf(/* textboxtype: 0, unk: 5, line: 40 */ "Vous avez obtenu la <color yellow<statuette de dragon>coloroff>!\nCette sculpture en or massif reproduit\nadmirablement les circonvolutions\ngracieuses d'un dragon légendaire.")
          }

          void entrypoint_003_013() {
/*<133>*/ 	start()
/*<404>*/ 	switch (story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */]) {
          	  case 0:
/*<436>*/ 		story_flags[167 /* us: 805A9AE3 0x40, jp: 805ACD63 0x40 */] = false;
/*<504>*/ 		printf(/* textboxtype: 5, unk: 1, line: 18 */ "Vous avez récupéré la <color yellow<véritable épée maîtresse>coloroff>!\nVous allez enfin pouvoir laisser éclater votre\ncolère! Gare à celui qui se dressera sur votre\nroute!\nDe plus, vous allez à nouveau pouvoir parler\navec <sound 4><color blue<Fay>coloroff>!")
/*<587>*/ 		scene_flags[5 'Eldin Volcano Summit'][44 /* 0x4 10 */] = true;
          	  case 1:
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "")
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
/*<568>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 161 */ "Votre bouclier est maintenant un <color yellow<bouclier sacré\nultime>coloroff>! Le pouvoir qu'il renferme lui permet de\nse réparer tout seul. Il est encore plus résistant!")
          	}
          }

          void entrypoint_003_141() {
/*<312>*/ 	start()
/*<647>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<648>*/ 		printf(/* textboxtype: 5, unk: 1, line: 180 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nOn observe une invasion de ces insectes une fois\ntous les dix ans. Ils détruisent toute la végétation\nsur leur passage.")
          		flw_616:
/*<616>*/ 		open_collection_screen();
          	  case 1:
/*<308>*/ 		printf(/* textboxtype: 0, unk: 0, line: 179 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x03cd>>coloroff>!\nOn observe une invasion de ces insectes une fois\ntous les dix ans. Ils détruisent toute la végétation\nsur leur passage.")
          		goto flw_616
          	}
          }

          void entrypoint_003_176() {
/*<367>*/ 	start()
/*<365>*/ 	printf(/* textboxtype: 0, unk: 5, line: 226 */ "Vous avez obtenu une <color yellow<poussière de Déesse>coloroff>!\nOn raconte que la Déesse aurait laissé tomber\nces trésors légendaires très rares il y a des\ngénérations.")
/*<643>*/ 	open_collection_screen();
          }

          void entrypoint_003_159() {
/*<382>*/ 	start()
/*<380>*/ 	printf(/* textboxtype: 1, unk: 0, line: 209 */ "Vous avez obtenu la <color yellow<cage à insecte>coloroff>!\nL'insecte bien‐aimé de Beedle se trouve\nà l'intérieur! Dépêchez‐vous de le lui rapporter!")
          }

          void entrypoint_003_193() {
/*<478>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 5, unk: 1, line: 243 */ "")
          }

          void entrypoint_003_200() {
/*<498>*/ 	start()
/*<496>*/ 	printf(/* textboxtype: 1, unk: 0, line: 251 */ "")
          }

          void entrypoint_003_066() {
/*< 10>*/ 	start()
          	printf(/* textboxtype: 1, unk: 0, line: 89 */ "Vous avez obtenu de la <color yellow<potion d'invincibilité ★>coloroff>!\n\n\n\nCette potion extrêmement puissante vous protège\nde tout dégât pendant <color red<trois minutes>coloroff>!")
          }

          void entrypoint_003_049() {
/*<100>*/ 	start()
/*<405>*/ 	switch (story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */]) {
          	  case 0:
/*<406>*/ 		printf(/* textboxtype: 0, unk: 5, line: 64 */ "Vous avez récupéré la <color yellow<jarre des vents>coloroff>!\nVous allez pouvoir faire un peu de ménage!")
/*<427>*/ 		open_item_wheel(4)
/*<428>*/ 		story_flags[161 /* us: 805A9AE3 0x01, jp: 805ACD63 0x01 */] = false;
          	  case 1:
/*< 42>*/ 		printf(/* textboxtype: 5, unk: 1, line: 63 */ "Vous avez obtenu la <color yellow<jarre des vents>coloroff>!\nCet objet antique et insolite est capable de générer\nde violentes bourrasques.")
/*<407>*/ 		open_item_wheel(4)
          	}
          }

          void entrypoint_003_031() {
/*<115>*/ 	start()
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "Vous avez obtenu le <color yellow<circuit antique>coloroff>!\nCette pièce forgée dans l'or pur semble compléter\nun mécanisme. Sa surface est incrustée de circuits\nélectriques.")
          }

          void entrypoint_003_014() {
/*<132>*/ 	start()
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 5, line: 19 */ "")
          }

          void entrypoint_003_083() {
/*<189>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 5, line: 109 */ "")
          }

          void entrypoint_003_108() {
/*<250>*/ 	start()
/*<246>*/ 	printf(/* textboxtype: 0, unk: 5, line: 142 */ "Vous avez obtenu une <color yellow<bourse moyenne>coloroff>!\nSa capacité est un peu plus grande que celle\nde votre ancienne bourse.\n\nVous pouvez y ranger <color red<500 rubis>coloroff>!")
          }

          void entrypoint_003_125() {
/*<280>*/ 	start()
/*<276>*/ 	printf(/* textboxtype: 5, unk: 1, line: 162 */ "Vous avez obtenu le <color yellow<bouclier d'Hylia>coloroff>!\nL'aura des héros émane de ce bouclier légendaire.\nAucune attaque ne peut l'endommager!")
/*<519>*/ 	story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          }

          void entrypoint_003_142() {
/*<311>*/ 	start()
/*<649>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<650>*/ 		printf(/* textboxtype: 1, unk: 0, line: 182 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		flw_617:
/*<617>*/ 		open_collection_screen();
          	  case 1:
/*<307>*/ 		printf(/* textboxtype: 0, unk: 5, line: 181 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x04cd>>coloroff>!\nOn dit que lustrer sa carapace la rend plus\nrésistante. Il s'agit du plus robuste de tous\nles insectes.")
          		goto flw_617
          	}
          }

          void entrypoint_003_177() {
/*<387>*/ 	start()
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 227 */ "")
          }

          void entrypoint_003_194() {
/*<489>*/ 	start()
/*<487>*/ 	printf(/* textboxtype: 0, unk: 5, line: 244 */ "Vous avez obtenu de la <color yellow<polypotion ★★>coloroff>!\nElle restaure <color red<automatiquement >coloroff>la jauge de votre\nbouclier, ainsi que <color red<huit>coloroff> de vos cœurs. Et en plus,\nvous pouvez l'utiliser <color red<deux fois>coloroff>!")
          }

          void entrypoint_003_067() {
/*< 90>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 5, unk: 1, line: 90 */ "")
          }

          void entrypoint_003_032() {
/*<114>*/ 	start()
/*< 56>*/ 	printf(/* textboxtype: 5, unk: 1, line: 42 */ "Vous avez obtenu un <color silver<rubis argenté>coloroff>!\nSa valeur est de <color red<100 rubis>coloroff>! Extraordinaire!\nVoilà qui doit vous faire chaud au cœur!")
          }

          void entrypoint_003_015() {
/*<131>*/ 	start()
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "")
          }

          void entrypoint_003_084() {
/*<188>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "Vous avez obtenu de la <color yellow<potion d'endurance>coloroff>!\nLorsque vous l'utilisez, votre jauge d'endurance se\nvide plus lentement. Son effet dure <color red<trois minutes>coloroff>!")
          }

          void entrypoint_003_109() {
/*<249>*/ 	start()
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0, line: 143 */ "Vous avez obtenu une <color yellow<grande bourse>coloroff>!\nElle a une capacité bien supérieure à celle\nde votre ancienne bourse.\n\nVous pouvez y ranger <color red<1 000 rubis>coloroff>!")
          }

          void entrypoint_003_126() {
/*<279>*/ 	start()
/*<275>*/ 	printf(/* textboxtype: 0, unk: 5, line: 163 */ "Vous avez obtenu de la <color yellow<polypotion>coloroff>!\nCe produit étrange <color red<remplit entièrement >coloroff>la jauge\nde votre bouclier et vous rend <color red<quatre>coloroff> cœurs!")
          }

          void entrypoint_003_143() {
/*<318>*/ 	start()
/*<651>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<652>*/ 		printf(/* textboxtype: 0, unk: 5, line: 184 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nOn raconte que son venin a des vertus médicinales\nune fois bouilli. Ne vous laissez pas prendre dans\nun essaim!")
          		flw_618:
/*<618>*/ 		open_collection_screen();
          	  case 1:
/*<316>*/ 		printf(/* textboxtype: 5, unk: 1, line: 183 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x05cd>>coloroff>!\nOn raconte que son venin a des vertus médicinales\nune fois bouilli. Ne vous laissez pas prendre dans\nun essaim!")
          		goto flw_618
          	}
          }

          void entrypoint_003_160() {
/*<381>*/ 	start()
/*<379>*/ 	printf(/* textboxtype: 5, unk: 1, line: 210 */ "Vous avez trouvé un <color yellow<hochet>coloroff>!\nVoilà le genre de jouet qui ferait le bonheur d'un\njeune enfant... Quelqu'un a dû le laisser tomber.")
          }

          void entrypoint_003_178() {
/*<386>*/ 	start()
/*<384>*/ 	printf(/* textboxtype: 5, unk: 1, line: 228 */ "")
          }

          void entrypoint_003_195() {
/*<488>*/ 	start()
/*<486>*/ 	printf(/* textboxtype: 1, unk: 0, line: 245 */ "Vous avez obtenu de la <color yellow<soupe de citrouille\nchaude >coloroff>! C'est la spécialité du patron. Mais\nattention, elle sera froide dans<color red< cinq minutes>coloroff>!")
          }

          void entrypoint_003_068() {
/*< 89>*/ 	start()
/*< 32>*/ 	printf(/* textboxtype: 0, unk: 5, line: 91 */ "Vous avez obtenu l'<color yellow<écaille du dragon d'eau>coloroff>!\nC'est une des reliques de la Déesse. Elle vous\npermet de nager sous l'eau et de tourbillonner.")
/*<500>*/ 	story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */] = true;
          }

          void entrypoint_003_050() {
/*< 99>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "Vous avez obtenu la <color yellow<carte du donjon>coloroff>!\nVous pouvez examiner la disposition des lieux et\nlocaliser les pièces que vous n'avez pas encore\nvisitées.")
/*<509>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 508, 'param3': 30}
/*<508>*/ 	switch (story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */]) {
          	  case 0:
/*<613>*/ 		story_flags[850 /* us: 805A9B34 0x01, jp: 805ACDB4 0x01 */] = true;
/*<510>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 34}
          	  case 1:
/*<513>*/ 		printf(/* textboxtype: 5, unk: 1, line: 66 */ "L'emplacement des coffres y est également\nindiqué. Prenez le temps d'y jeter un coup d'œil!")
/*<512>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 511, 'param3': 34}
/*<511>*/ 		story_flags[96 /* us: 805A9AF1 0x20, jp: 805ACD71 0x20 */] = true;
          	}
          }

          void entrypoint_003_033() {
/*<113>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 0, unk: 5, line: 43 */ "Vous avez obtenu un <color gold<rubis doré>coloroff>!\nSa valeur est de <color red<300 rubis>coloroff>! Exceptionnel!\nMieux vaut garder ça pour vous...")
          }

          void entrypoint_003_016() {
/*<130>*/ 	start()
/*< 71>*/ 	printf(/* textboxtype: 5, unk: 1, line: 21 */ "")
          }

          void entrypoint_003_085() {
/*<187>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 5, unk: 1, line: 111 */ "Vous avez obtenu de la <color yellow<potion d'endurance ★>coloroff>!\nCet élixir miraculeux empêche votre jauge\nd'endurance de se vider pendant <color red<trois minutes>coloroff>!")
          }

          void entrypoint_003_127() {
/*<290>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 164 */ "Vous avez obtenu de la <color yellow<polypotion ★>coloroff>!\nCette substance prodigieuse répare\n<color red<automatiquement >coloroff>votre bouclier lorsqu'il\nest détruit et vous rend <color red<huit>coloroff> cœurs!")
          }

          void entrypoint_003_144() {
/*<317>*/ 	start()
/*<653>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<654>*/ 		printf(/* textboxtype: 5, unk: 1, line: 186 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		flw_619:
/*<619>*/ 		open_collection_screen();
          	  case 1:
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 185 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x06cd>>coloroff>!\nElle capture ses proies à l'aide de ses pattes\nravisseuses acérées. Cette espèce est très\ncommune dans cette contrée.")
          		goto flw_619
          	}
          }

          void entrypoint_003_161() {
/*<340>*/ 	start()
/*<338>*/ 	printf(/* textboxtype: 0, unk: 5, line: 211 */ "Vous avez obtenu des <color yellow<larves de guêpes>coloroff>!\nCes larves fraîchement extraites du nid peuvent\ncertainement être utilisées comme ingrédient.\nElles sont pleines de protéines.")
/*<628>*/ 	open_collection_screen();
          }

          void entrypoint_003_179() {
/*<391>*/ 	start()
/*<389>*/ 	printf(/* textboxtype: 0, unk: 5, line: 229 */ "")
          }

          void entrypoint_003_196() {
/*<493>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 5, unk: 1, line: 246 */ "")
          }

          void entrypoint_003_069() {
/*< 88>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 92 */ "")
          }

          void entrypoint_003_051() {
/*< 98>*/ 	start()
/*< 40>*/ 	printf(/* textboxtype: 0, unk: 5, line: 67 */ "")
          }

          void entrypoint_003_034() {
/*<112>*/ 	start()
/*< 54>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "Vous avez obtenu un <color black<roupir>coloroff>!\nVous perdez <color red<10 rubis>coloroff>. Une vague tristesse\nvous gagne...")
          }

          void entrypoint_003_017() {
/*<129>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 0, unk: 5, line: 22 */ "Vous avez obtenu le <color yellow<réceptacle spirituel>coloroff>!\nCette fleur étonnante représente la maturité\nde votre âme.")
          }

          void entrypoint_003_086() {
/*<186>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 0, unk: 5, line: 112 */ "Vous avez obtenu une <color yellow<potion d'oxygène>coloroff>!\nLorsque vous l'utilisez, votre jauge d'oxygène se\nvide plus lentement. Son effet dure <color red<trois minutes>coloroff>.")
          }

          void entrypoint_003_110() {
/*<248>*/ 	start()
/*<244>*/ 	printf(/* textboxtype: 5, unk: 1, line: 144 */ "Vous avez obtenu une <color yellow<bourse énorme>coloroff>!\nElle a une capacité largement supérieure à celle\nde votre ancienne bourse.\n\nVous pouvez y ranger <color red<5 000 rubis>coloroff>!")
          }

          void entrypoint_003_128() {
/*<289>*/ 	start()
/*<285>*/ 	printf(/* textboxtype: 5, unk: 1, line: 165 */ "Vous avez obtenu un <color yellow<petit sac de graines>coloroff>!\nIl peut contenir <color red<10>coloroff> graines Mojo supplémentaires.\nPrenez‐le lorsque vous utilisez votre lance‐pierre.")
          }

          void entrypoint_003_145() {
/*<322>*/ 	start()
/*<655>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<656>*/ 		printf(/* textboxtype: 1, unk: 0, line: 188 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>!\nOn dit que sa couleur rouge vient du minerai\nqu'elle mange. Elle est plutôt tranquille et reste\nsouvent immobile.")
          		flw_620:
/*<620>*/ 		open_collection_screen();
          	  case 1:
/*<320>*/ 		printf(/* textboxtype: 0, unk: 5, line: 187 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x07cd>>coloroff>!\nOn dit que sa couleur rouge vient du minerai\nqu'elle mange. Elle est plutôt tranquille et reste\nsouvent immobile.")
          		goto flw_620
          	}
          }

          void entrypoint_003_162() {
/*<339>*/ 	start()
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0, line: 212 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0fcd>>coloroff>!\nCes délicates petites plumes sont très prisées\nà Célesbourg. Peut‐être leur trouverez‐vous\nune utilité.")
/*<629>*/ 	open_collection_screen();
          }

          void entrypoint_003_197() {
/*<492>*/ 	start()
/*<585>*/ 	switch (story_flags[750 /* us: 805A9B29 0x40, jp: 805ACDA9 0x40 */]) {
          	  case 0:
/*<586>*/ 		printf(/* textboxtype: 1, unk: 0, line: 248 */ "Vous avez récupéré la <color yellow<pousse de l'arbre de vie>coloroff>!\nElle ne peut pas s'épanouir assez rapidement ici.\nCherchez un endroit plus approprié pour la\nplanter.")
          	  case 1:
/*<490>*/ 		printf(/* textboxtype: 0, unk: 5, line: 247 */ "Vous avez obtenu la <color yellow<pousse de l'arbre de vie>coloroff>!\nEn grandissant, elle deviendra l'arbre légendaire\ndont le fruit détient un grand pouvoir de guérison.")
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
/*<599>*/ 			printf(/* textboxtype: 0, unk: 5, line: 70 */ "Vous avez récupéré le <color yellow<lance‐pierre rafale>coloroff>!\nÉtourdissez les patrouilles ennemies!")
          			flw_433:
/*<433>*/ 			open_item_wheel(0)
/*<417>*/ 			story_flags[164 /* us: 805A9AE3 0x08, jp: 805ACD63 0x08 */] = false;
          		  case 1:
/*<416>*/ 			printf(/* textboxtype: 5, unk: 1, line: 69 */ "Vous avez récupéré le <color yellow<lance‐pierre>coloroff>!\nÉtourdissez les patrouilles ennemies!")
          			goto flw_433
          		}
          	  case 1:
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "Vous avez obtenu le <color yellow<lance‐pierre>coloroff>!\nIl vous permet de tirer des graines Mojo qui\nétourdissent vos ennemis.")
/*<153>*/ 		add_to_counter(493, 20)
/*<521>*/ 		open_item_wheel(0)
/*<520>*/ 		story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */] = true;
/*<522>*/ 		story_flags[569 /* us: 805A9B18 0x01, jp: 805ACD98 0x01 */] = true;
          	}
          }

          void entrypoint_003_035() {
/*<111>*/ 	start()
/*< 53>*/ 	printf(/* textboxtype: 5, unk: 1, line: 45 */ "Vous avez obtenu <color red<cinq>coloroff> <color yellow<cristaux de gratitude>coloroff>!\nChacun d'entre eux est un concentré d'essence\nde reconnaissance.\n\nLorsque vous venez en aide à quelqu'un, sa\ngratitude se matérialise sous la forme de <color red<cinq\n>coloroff>de ces cristaux.")
/*<646>*/ 	open_collection_screen();
          }

          void entrypoint_003_018() {
/*<128>*/ 	start()
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "")
          }

          void entrypoint_003_000() {
/*<146>*/ 	start()
/*<595>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*< 87>*/ 		printf(/* textboxtype: 5, unk: 1, line: 0 */ "Il n'y a rien d'intéressant là‐dedans!")
          	  case 1:
/*<596>*/ 		printf(/* textboxtype: 0, unk: 5, line: 1 */ "Ça ne se fait pas de fouiller dans le placard\ndes gens... Quand même!")
          	}
          }

          void entrypoint_003_087() {
/*<185>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 1, unk: 0, line: 113 */ "Vous avez obtenu une <color yellow<potion d'oxygène ★>coloroff>!\nCe merveilleux élixir empêche votre jauge\nd'oxygène de se vider pendant <color red<trois minutes.>coloroff>")
          }

          void entrypoint_003_111() {
/*<259>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 0, unk: 5, line: 145 */ "Vous avez obtenu la <color yellow<bourse de star>coloroff>!\nVoilà qui impressionnerait même les plus\nfortunés... Vous pouvez y ranger la somme\nastronomique de <color red<9 000 rubis>coloroff>!")
          }

          void entrypoint_003_129() {
/*<288>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 5, line: 166 */ "Votre sac a été amélioré en <color yellow<sac de graines moyen>coloroff>!\nIl peut contenir <color red<20>coloroff> graines Mojo supplémentaires.\nPrenez‐le lorsque vous utilisez votre lance‐pierre.")
          }

          void entrypoint_003_146() {
/*<321>*/ 	start()
/*<657>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<658>*/ 		printf(/* textboxtype: 0, unk: 5, line: 190 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>!\nCe lépidoptère est présent à peu près partout.\nIl arrive même parfois qu'on le rencontre dans\ndes lieux insolites.")
          		flw_621:
/*<621>*/ 		open_collection_screen();
          	  case 1:
/*<319>*/ 		printf(/* textboxtype: 5, unk: 1, line: 189 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x08cd>>coloroff>!\nCe lépidoptère est présent à peu près partout.\nIl arrive même parfois qu'on le rencontre dans\ndes lieux insolites.")
          		goto flw_621
          	}
          }

          void entrypoint_003_163() {
/*<344>*/ 	start()
/*<342>*/ 	printf(/* textboxtype: 5, unk: 1, line: 213 */ "Vous avez obtenu un <color yellow<virevoltant>coloroff>!\nPeut‐être trouverez‐vous une utilité à cette boule\nd'herbe séchée. Apportez‐la avec vous, qui sait?")
/*<630>*/ 	open_collection_screen();
          }

          void entrypoint_003_180() {
/*<390>*/ 	start()
/*<388>*/ 	printf(/* textboxtype: 1, unk: 0, line: 230 */ "Vous avez obtenu le <color yellow<joyau des épreuves>coloroff>!\nCette pierre mènera le héros à l'endroit où repose\nla Triforce.")
/*<523>*/ 	story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */] = true;
          }

          void entrypoint_003_198() {
/*<495>*/ 	start()
/*<494>*/ 	printf(/* textboxtype: 5, unk: 1, line: 249 */ "Vous avez obtenu un <color yellow<fruit de l'arbre de vie>coloroff>!\nCe fruit légendaire aurait le pouvoir de guérir\ntoutes les maladies. Apportez‐le vite au dragon\nde foudre!")
          }

          void entrypoint_003_999() {
/*<611>*/ 	start()
/*<610>*/ 	printf(/* textboxtype: 1, unk: 0, line: 101 */ "")
          }

          void entrypoint_003_053() {
/*< 96>*/ 	start()
/*< 38>*/ 	printf(/* textboxtype: 1, unk: 0, line: 71 */ "Vous avez obtenu le <color yellow<scarabée>coloroff>!\nCet engin en forme d'insecte vole dans les airs\net vous permet d'explorer les environs!\n\nPlacez le curseur à l'endroit vers lequel vous\nvoulez qu'il s'envole puis appuyez sur <icon 41> pour\nle lancer!<0x10011:0x0fcd>")
/*<422>*/ 	open_item_wheel(1)
          }

          void entrypoint_003_036() {
/*<110>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 5, line: 46 */ "Vous avez obtenu des <color yellow<spores scintillantes>coloroff>!\nCette poussière fongique est produite par les\nchampignons scintillants.")
          }

          void entrypoint_003_019() {
/*<127>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 5, unk: 1, line: 24 */ "Vous avez obtenu l'<color yellow<arc>coloroff>!\nVous pouvez tirer sur des cibles distantes!\nVos flèches infligeront d'importants dégâts.")
/*<679>*/ 	story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */] = true;
/*<152>*/ 	add_to_counter(498, 20)
/*<421>*/ 	open_item_wheel(7)
          }

          void entrypoint_003_001() {
/*<145>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Vous avez obtenu une <color yellow<petite clé>coloroff>!\nElle vous permettra d'ouvrir une porte verrouillée.\nVous ne pouvez l'utiliser que dans cette zone.")
          }

          void entrypoint_003_070() {
/*<147>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 5, unk: 1, line: 93 */ "Vous avez obtenu la <color yellow<médaille insecte>coloroff>!\nLorsque vous l'avez sur vous, vous pouvez trouver\ndes insectes facilement. Suivez les (O) sur votre\ncarte!")
          }

          void entrypoint_003_088() {
/*<184>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 5, unk: 1, line: 114 */ "Vous avez attrapé une <color yellow<fée>coloroff>!\nCette bienveillante créature vous rendra\n<color red<six cœurs>coloroff>.\n\nSi vous la transportez dans un flacon, elle en\nsortira <color red<lorsque vous serez à bout de forces >coloroff>et\nvous soignera <color red<automatiquement>coloroff>!")
          }

          void entrypoint_003_112() {
/*<258>*/ 	start()
/*<418>*/ 	switch (story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */]) {
          	  case 0:
/*<419>*/ 		printf(/* textboxtype: 5, unk: 1, line: 147 */ "Vous avez récupéré votre <color yellow<sacoche d'aventurier>coloroff>!\nEt tout le reste de votre équipement par la même\noccasion!")
/*<435>*/ 		open_item_wheel(8)
/*<420>*/ 		story_flags[166 /* us: 805A9AE3 0x20, jp: 805ACD63 0x20 */] = false;
          	  case 1:
/*<254>*/ 		printf(/* textboxtype: 1, unk: 0, line: 146 */ "Vous avez obtenu la <color yellow<sacoche d'aventurier>coloroff>!\nC'est un accessoire fort pratique dans lequel vous\npouvez ranger les objets utiles à vos aventures.")
/*<603>*/ 		open_adventure_pouch(0)
          	}
          }

          void entrypoint_003_147() {
/*<326>*/ 	start()
/*<659>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<660>*/ 		printf(/* textboxtype: 5, unk: 1, line: 192 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nOn dit que ce spécimen capable de survivre dans\nles déserts les plus arides bâtit sa fourmilière\nsur une source d'eau.")
          		flw_622:
/*<622>*/ 		open_collection_screen();
          	  case 1:
/*<324>*/ 		printf(/* textboxtype: 1, unk: 0, line: 191 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x09cd>>coloroff>!\nOn dit que ce spécimen capable de survivre dans\nles déserts les plus arides bâtit sa fourmilière\nsur une source d'eau.")
          		goto flw_622
          	}
          }

          void entrypoint_003_164() {
/*<343>*/ 	start()
/*<341>*/ 	printf(/* textboxtype: 0, unk: 5, line: 214 */ "Vous avez obtenu une <color yellow<queue de lézard>coloroff>!\nL'extrémité de cet appendice est équipée d'une\ndangereuse boule à pointes. Un objet répugnant,\nmais qui peut servir...")
/*<631>*/ 	open_collection_screen();
          }

          void entrypoint_003_181() {
/*<395>*/ 	start()
/*<393>*/ 	printf(/* textboxtype: 5, unk: 1, line: 231 */ "")
          }

          void entrypoint_003_199() {
/*<499>*/ 	start()
/*<497>*/ 	printf(/* textboxtype: 0, unk: 5, line: 250 */ "Vous avez obtenu une <color yellow<bourse annexe>coloroff>!\nVotre bourse peut maintenant contenir <color red<300 rubis\n>coloroff>supplémentaires!")
/*<644>*/ 	open_collection_screen();
          }

          void entrypoint_003_071() {
/*< 20>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 5, line: 94 */ "Vous avez obtenu le <color yellow<filet>coloroff>!\nVous pouvez attraper de petits insectes et\ncertaines autres créatures. Approchez‐les\navec précaution et soyez vif!")
/*<423>*/ 	open_item_wheel(2)
/*<612>*/ 	story_flags[849 /* us: 805A9B35 0x80, jp: 805ACDB5 0x80 */] = true;
          }

          void entrypoint_003_054() {
/*< 95>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 5, unk: 1, line: 72 */ "Vous avez rempli votre flacon d'<color yellow<eau ordinaire>coloroff>!\nIl s'agit d'eau tout ce qu'il y a de plus normal.\nQui sait, elle pourrait vous servir.")
          }

          void entrypoint_003_037() {
/*<109>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "")
          }

          void entrypoint_003_002() {
/*<144>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 5, unk: 1, line: 3 */ "Vous avez obtenu un <color green rupee<rubis vert>coloroff>!\nSa valeur est de <color red<1 rubis>coloroff>.\nC'est le début d'une petite fortune!")
          }

          void entrypoint_003_089() {
/*<183>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 0, unk: 5, line: 115 */ "")
          }

          void entrypoint_003_113() {
/*<257>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 5, line: 148 */ "Vous avez ajouté une poche à votre <color yellow<sacoche\nd'aventurier>coloroff>! Vous pouvez y ranger <color red<un objet\nsupplémentaire>coloroff>!")
/*<604>*/ 	open_adventure_pouch(1)
          }

          void entrypoint_003_130() {
/*<287>*/ 	start()
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 167 */ "Votre sac a été amélioré en <color yellow<grand sac de graines>coloroff>!\nIl peut contenir <color red<30>coloroff> graines Mojo supplémentaires.\nPrenez‐le lorsque vous utilisez votre lance‐pierre.")
          }

          void entrypoint_003_148() {
/*<325>*/ 	start()
/*<661>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<662>*/ 		printf(/* textboxtype: 1, unk: 0, line: 194 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nCet insecte demeure caché sous la terre à l'état\nlarvaire pendant plus de dix ans. Sa capture\ndemande de la patience!")
          		flw_623:
/*<623>*/ 		open_collection_screen();
          	  case 1:
/*<323>*/ 		printf(/* textboxtype: 0, unk: 5, line: 193 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0acd>>coloroff>!\nCet insecte demeure caché sous la terre à l'état\nlarvaire pendant plus de dix ans. Sa capture\ndemande de la patience!")
          		goto flw_623
          	}
          }

          void entrypoint_003_165() {
/*<348>*/ 	start()
/*<346>*/ 	printf(/* textboxtype: 1, unk: 0, line: 215 */ "Vous avez obtenu du <color yellow<minerai d'Ordinn>coloroff>!\nCette pierre extrêmement dure scintille joliment.\nSes emplois sont multiples.")
/*<632>*/ 	open_collection_screen();
          }

          void entrypoint_003_182() {
/*<394>*/ 	start()
/*<392>*/ 	printf(/* textboxtype: 0, unk: 5, line: 232 */ "")
          }

          void entrypoint_003_072() {
/*< 19>*/ 	start()
/*<506>*/ 	switch (has_empty_bottle()) {
          	  case 0:
/*<507>*/ 		printf(/* textboxtype: 5, unk: 1, line: 96 */ "Vous avez trouvé une <color yellow<fée>coloroff>!\nCes créatures bienveillantes vous rendent\n<color red<6 cœurs>coloroff>!\n\nMalheureusement, vous n'avez pas de <color yellow<<item 153>>coloroff>.\nVous allez devoir la laisser partir.")
          	  case 1:
/*<505>*/ 		printf(/* textboxtype: 1, unk: 0, line: 95 */ "Vous avez trouvé une <color yellow<fée>coloroff>!\nCes créatures bienveillantes vous rendent\n<color red<6 cœurs>coloroff>!")
          	}
          }

          void entrypoint_003_055() {
/*< 94>*/ 	start()
/*<614>*/ 	switch (story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */]) {
          	  case 0:
/*<615>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "Vous avez obtenu un flacon de <color yellow<spores de\nchampignon>coloroff>! Ces spores produites par un\nchampignon géant sont très efficaces pour\nsoigner les blessures des oiseaux!")
          	  case 1:
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 5, line: 73 */ "Votre flacon est rempli de <color yellow<spores de champignon>coloroff>!\nElles proviennent d'un champignon géant.\nCela pourrait vous servir.")
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
/*<409>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "Vous avez récupéré votre <color yellow<grappin>coloroff>!\nVous pouvez à nouveau atteindre des zones\néloignées!")
/*<429>*/ 		open_item_wheel(6)
/*<430>*/ 		story_flags[162 /* us: 805A9AE3 0x02, jp: 805ACD63 0x02 */] = false;
          	  case 1:
/*< 67>*/ 		printf(/* textboxtype: 0, unk: 5, line: 25 */ "Vous avez obtenu le <color yellow<grappin>coloroff>!\nC'est une des reliques sacrées de la Déesse.\nIl permet à celui qui le possède d'élargir son\nchamp d'action.\nVisez les <color red<cibles>coloroff> ou le <color red<lierre>coloroff>, puis tirez pour vous\ntracter à l'endroit où sa griffe s'est accrochée.")
/*<501>*/ 		story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */] = true;
/*<410>*/ 		open_item_wheel(6)
          	}
          }

          void entrypoint_003_003() {
/*<143>*/ 	start()
/*<591>*/ 	switch (story_flags[817 /* us: 805A9B30 0x02, jp: 805ACDB0 0x02 */]) {
          	  case 0:
/*<590>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "Vous avez obtenu un <color blue rupee<rubis bleu>coloroff>!\nSa valeur est de <color red<5 rubis>coloroff>. Placez‐le soigneusement\ndans votre bourse!")
          	  case 1:
/*< 84>*/ 		printf(/* textboxtype: 0, unk: 5, line: 4 */ "Vous avez obtenu un <color blue rupee<rubis bleu>coloroff>!\nSa valeur est de <color red<5 rubis>coloroff>. Quelle chance!")
          	}
          }

          void entrypoint_003_114() {
/*<256>*/ 	start()
/*<252>*/ 	printf(/* textboxtype: 1, unk: 0, line: 149 */ "Vous avez obtenu une <color yellow<médaille de vie>coloroff>!\nAvec elle, votre énergie vitale maximale\naugmentera d'<color red<un cœur>coloroff>. Cela peut parfois\ns'avérer utile...")
          }

          void entrypoint_003_131() {
/*<298>*/ 	start()
/*<294>*/ 	printf(/* textboxtype: 5, unk: 1, line: 168 */ "Vous avez obtenu un <color yellow<petit carquois>coloroff>!\nIl peut contenir <color red<5>coloroff> flèches supplémentaires.\nPrenez‐le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_149() {
/*<330>*/ 	start()
/*<663>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<664>*/ 		printf(/* textboxtype: 0, unk: 5, line: 196 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nSes yeux à facettes ont l'éclat du saphir et ses\nailes la délicatesse du cristal!")
          		flw_624:
/*<624>*/ 		open_collection_screen();
          	  case 1:
/*<328>*/ 		printf(/* textboxtype: 5, unk: 1, line: 195 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0bcd>>coloroff>!\nSes yeux à facettes ont l'éclat du saphir et ses\nailes la délicatesse du cristal!")
          		goto flw_624
          	}
          }

          void entrypoint_003_166() {
/*<347>*/ 	start()
/*<345>*/ 	printf(/* textboxtype: 5, unk: 1, line: 216 */ "Vous avez obtenu une <color yellow<fleur ancienne>coloroff>!\nOn dit qu'elle fleurissait bien longtemps avant\nnotre ère. Délicate et mystérieuse, elle brille\ndans l'obscurité.")
/*<633>*/ 	open_collection_screen();
          }

          void entrypoint_003_183() {
/*<482>*/ 	start()
/*<480>*/ 	printf(/* textboxtype: 1, unk: 0, line: 233 */ "")
          }

          void entrypoint_003_056() {
/*< 93>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 5, unk: 1, line: 75 */ "Vous avez obtenu les <color yellow<gants creuse‐tout>coloroff>!\nLeurs griffes acérées sont idéales pour\ncreuser la terre.\n\nSi vous trouvez des traces suspectes au sol,\napprochez‐vous et appuyez sur (A) pour creuser!")
          }

          void entrypoint_003_039() {
/*<107>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 5, line: 49 */ "")
          }

          void entrypoint_003_021() {
/*<125>*/ 	start()
/*< 66>*/ 	printf(/* textboxtype: 5, unk: 1, line: 27 */ "Vous avez obtenu la <color yellow<statuette d'oiseau>coloroff>!\nC'est la preuve que vous avez remporté la\nchevauchée céleste. Zelda sera sûrement\nimpressionnée!")
/*<584>*/ 	changeScene(3, 0) // 
          }

          void entrypoint_003_004() {
/*<142>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 5, unk: 1, line: 6 */ "Vous avez obtenu un <color red rupee<rubis rouge>coloroff>!\nSa valeur est de <color red<20 rubis>coloroff>. N'allez pas tout\ndépenser d'un coup! Chanceux, va.")
          }

          void entrypoint_003_073() {
/*<154>*/ 	start()
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 5, line: 97 */ "")
          }

          void entrypoint_003_090() {
/*<182>*/ 	start()
/*<163>*/ 	printf(/* textboxtype: 1, unk: 0, line: 116 */ "Votre arc a été amélioré en <color yellow<arc de fer>coloroff>!\nRéservé aux archers expérimentés, il cause de\nplus grands dégâts que votre arc précédent.")
          }

          void entrypoint_003_115() {
/*<267>*/ 	start()
/*<263>*/ 	printf(/* textboxtype: 5, unk: 1, line: 150 */ "")
          }

          void entrypoint_003_132() {
/*<297>*/ 	start()
/*<293>*/ 	printf(/* textboxtype: 0, unk: 5, line: 169 */ "Votre carquois a été amélioré en<color yellow< carquois moyen>coloroff>!\nIl peut contenir <color red<10>coloroff> flèches supplémentaires.\nPrenez‐le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_167() {
/*<362>*/ 	start()
/*<361>*/ 	printf(/* textboxtype: 0, unk: 5, line: 217 */ "Vous avez obtenu une <color yellow<perle d'ambre>coloroff>!\nOn trouve cette gemme d'un jaune profond un\npeu partout. Nul ne sait à quoi elle doit sa forme\nsi particulière.")
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
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "Vous avez obtenu <color yellow<5 graines Mojo>coloroff>!\nVous pouvez tirer ces petites graines avec votre\nlance‐pierre. Gardez un œil sur vos réserves!")
          	  case 1:
/*<398>*/ 		printf(/* textboxtype: 5, unk: 1, line: 78 */ "")
/*<503>*/ 		add_to_counter(493, -5)
          	}
          }

          void entrypoint_003_022() {
/*<124>*/ 	start()
/*< 65>*/ 	printf(/* textboxtype: 0, unk: 5, line: 28 */ "")
          }

          void entrypoint_003_005() {
/*<141>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 0, unk: 5, line: 7 */ "La <color yellow white<Triforce>coloroff> est reconstituée!\nVous allez pouvoir exaucer le souhait de Zelda\net <color red<détruire>coloroff> l'<color blue<Avatar du Néant>coloroff>.")
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
/*<156>*/ 		printf(/* textboxtype: 5, unk: 1, line: 99 */ "Vous avez obtenu de l'<color yellow<eau sacrée>coloroff>!\nIl ne s'agit pas là d'une eau ordinaire!\nSon extrême pureté recèle un grand pouvoir.")
          	  case 1:
/*<514>*/ 		switch (story_flags[64 /* us: 805A9ADF 0x08, jp: 805ACD5F 0x08 */]) {
          		  case 0:
/*<515>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "Vous avez obtenu de l'<color yellow<eau sacrée>coloroff>!\nSon extrême pureté lui donne le pouvoir\nde guérir les blessures du dragon d'eau.")
/*<601>*/ 			scene_flags[11 'Faron: Skyview Temple'][98 /* 0xD 04 */] = false;
/*<602>*/ 			scene_flags[11 'Faron: Skyview Temple'][97 /* 0xD 02 */] = false;
          		  case 1:
          			goto flw_156
          		}
          	}
          }

          void entrypoint_003_091() {
/*<181>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 5, unk: 1, line: 117 */ "Votre arc a été amélioré en <color yellow<arc sacré>coloroff>!\nGrâce à la prière de la Déesse, il déploie une\npuissance dévastatrice contre les monstres!")
          }

          void entrypoint_003_116() {
/*<266>*/ 	start()
/*<551>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<552>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 0, unk: 5, line: 151 */ "Vous avez obtenu un <color yellow<bouclier de bois>coloroff>!\nConstitué de bois léger, il est très facile à manier,\nmais attention : il brûle et se brise facilement!")
/*<516>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_133() {
/*<296>*/ 	start()
/*<292>*/ 	printf(/* textboxtype: 1, unk: 0, line: 170 */ "Votre carquois a été amélioré en<color yellow< grand carquois>coloroff>!\nIl peut contenir <color red<15>coloroff> flèches supplémentaires.\nPrenez‐le lorsque vous utilisez votre arc.")
          }

          void entrypoint_003_150() {
/*<329>*/ 	start()
/*<665>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<666>*/ 		printf(/* textboxtype: 5, unk: 1, line: 198 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nCe minuscule insecte pousse une boule de...\nquelque chose jusqu'à son nid. N'est‐il pas\nadorable?")
          		flw_625:
/*<625>*/ 		open_collection_screen();
          	  case 1:
/*<327>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0ccd>>coloroff>!\nCe minuscule insecte pousse une boule de...\nquelque chose jusqu'à son nid. N'est‐il pas\nadorable?")
          		goto flw_625
          	}
          }

          void entrypoint_003_168() {
/*<364>*/ 	start()
/*<363>*/ 	printf(/* textboxtype: 1, unk: 0, line: 218 */ "Vous avez obtenu une <color yellow<perle d'ombre>coloroff>!\nD'apparence similaire à la perle d'ambre, elle est\npourtant très différente. On ne la trouve qu'en des\nlieux spécifiques.")
/*<635>*/ 	open_collection_screen();
          }

          void entrypoint_003_185() {
/*<484>*/ 	start()
/*<483>*/ 	printf(/* textboxtype: 0, unk: 5, line: 235 */ "")
          }

          void entrypoint_003_040() {
/*<106>*/ 	start()
/*< 48>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "Vous avez obtenu <color yellow<5 bombes>coloroff>!\nVous pouvez les lancer ou les faire rouler pour\ndétruire des matériaux résistants. Ravitaillez-vous\ndès que possible!")
          }

          void entrypoint_003_023() {
/*<123>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "")
          }

          void entrypoint_003_006() {
/*<140>*/ 	start()
/*< 81>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "Vous avez obtenu un <color yellow<cœur>coloroff>!\nL'énergie vitale qu'il contient restaure\nvotre vie d'<color red<un>coloroff> cœur.")
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
/*<425>*/ 			printf(/* textboxtype: 1, unk: 0, line: 119 */ "Vous avez obtenu le <color yellow<sac de bombes>coloroff>!\nNe trahissez pas la confiance de <color blue<Ferrug>coloroff>,\nprenez‐en soin!")
/*<678>*/ 			story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */] = true;
          		  case 1:
/*<161>*/ 			printf(/* textboxtype: 0, unk: 5, line: 118 */ "Vous avez trouvé un <color yellow<sac de bombes>coloroff>!\nCette pochette fort commode permet d'emporter\navec soi les fleurs bombes ramassées.\n\nVoilà qui pourrait vous permettre d'accéder à des\nzones jusqu'ici inaccessibles... Voyez si <color blue<Ferrug\n>coloroff>accepte de vous le prêter!")
/*<414>*/ 			open_item_wheel(3)
          		}
          	}
          }

          void entrypoint_003_075() {
/*<197>*/ 	start()
/*<178>*/ 	printf(/* textboxtype: 0, unk: 5, line: 100 */ "Votre scarabée a été amélioré en <color yellow<scarabée\nà crochet>coloroff>! Ses nouvelles mandibules lui\npermettent de transporter des objets.\n\nLorsque vous passez en vue aérienne en\nmaintenant (Z) enfoncé, l'objet qu'il transporte\npeut être lâché.<0x10011:0x07cd>")
          }

          void entrypoint_003_117() {
/*<265>*/ 	start()
/*<553>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<555>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 5, unk: 1, line: 153 */ "Votre bouclier a été amélioré en <color yellow<bouclier de bois\nsolide>coloroff>! Léger et maniable, il est plus solide qu'un\nbouclier de bois ordinaire!")
          	}
          }

          void entrypoint_003_134() {
/*<295>*/ 	start()
/*<291>*/ 	printf(/* textboxtype: 5, unk: 1, line: 171 */ "Vous avez obtenu un <color yellow<petit sac de bombes>coloroff>!\nIl peut contenir <color red<5>coloroff> bombes supplémentaires.\nPrenez‐le lorsque vous avez besoin de bombes!")
          }

          void entrypoint_003_151() {
/*<334>*/ 	start()
/*<667>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<668>*/ 		printf(/* textboxtype: 1, unk: 0, line: 200 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nVoici un insecte très populaire parmi les enfants\nde Célesbourg. Mais attention aux doigts, ça\npince!")
          		flw_626:
/*<626>*/ 		open_collection_screen();
          	  case 1:
/*<332>*/ 		printf(/* textboxtype: 0, unk: 5, line: 199 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0dcd>>coloroff>!\nVoici un insecte très populaire parmi les enfants\nde Célesbourg. Mais attention aux doigts, ça\npince!")
          		goto flw_626
          	}
          }

          void entrypoint_003_169() {
/*<352>*/ 	start()
/*<350>*/ 	printf(/* textboxtype: 5, unk: 1, line: 219 */ "Vous avez obtenu une <color yellow<gélatibulle>coloroff>!\nCet objet n'est pas particulièrement agréable à\nregarder, mais ses propriétés uniques en font\nun matériau précieux.")
/*<636>*/ 	open_collection_screen();
          }

          void entrypoint_003_058() {
/*<453>*/ 	start()
/*<454>*/ 	check_item_flag(491, 199)
/*<455>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 54}) {
          	  case 0:
/*<452>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "")
          	  case 1:
/*<456>*/ 		printf(/* textboxtype: 0, unk: 5, line: 79 */ "")
          	}
          }

          void entrypoint_003_186() {
/*<466>*/ 	start()
/*<464>*/ 	printf(/* textboxtype: 1, unk: 0, line: 236 */ "Vous avez appris le <color yellow<Chant de la Déesse>coloroff>!\nCette mystérieuse mélodie provient de temps\nanciens.")
/*<579>*/ 	changeScene(2, 0) // 
          }

          void entrypoint_003_041() {
/*<105>*/ 	start()
/*< 47>*/ 	printf(/* textboxtype: 5, unk: 1, line: 51 */ "Vous avez obtenu <color yellow<dix bombes>coloroff>!\nVous pouvez les lancer ou les faire rouler pour\ndétruire des matériaux résistants. Rangez‐les dans\nvotre sac de bombes!")
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
/*<159>*/ 		printf(/* textboxtype: 0, unk: 5, line: 10 */ "")
          	}
          }

          void entrypoint_003_093() {
/*<179>*/ 	start()
/*<160>*/ 	printf(/* textboxtype: 0, unk: 5, line: 121 */ "Vous avez obtenu un <color yellow<réceptacle de cœur>coloroff>!\nVotre énergie vitale maximale est augmentée\nd'<color red<un cœur>coloroff>, et tous vos cœurs sont restaurés!")
          }

          void entrypoint_003_076() {
/*<196>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 5, unk: 1, line: 102 */ "Votre scarabée a été amélioré en <color yellow<scarabée rapide>coloroff>!\nGare aux excès de vitesse!")
          }

          void entrypoint_003_100() {
/*<234>*/ 	start()
/*<605>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<606>*/ 		printf(/* textboxtype: 1, unk: 0, line: 134 */ "Vous avez obtenu une <color yellow<médaille cœur>coloroff>!\nAvec elle, même en <color red<mode héroïque>coloroff>, les cœurs\napparaissent et les flœurs fleurissent.\n\nSi votre santé vous préoccupe, c'est l'objet idéal!")
/*<607>*/ 		story_flags[841 /* us: 805A9B35 0x01, jp: 805ACDB5 0x01 */] = true;
          	  case 1:
/*<230>*/ 		printf(/* textboxtype: 0, unk: 5, line: 133 */ "Vous avez obtenu une <color yellow<médaille cœur>coloroff>!\nAvec elle, les cœurs apparaîtront plus\nfréquemment. Si votre santé vous préoccupe,\nc'est l'objet idéal!")
          	}
          }

          void entrypoint_003_118() {
/*<264>*/ 	start()
/*<554>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<260>*/ 		printf(/* textboxtype: 0, unk: 5, line: 154 */ "Votre bouclier a été amélioré en <color yellow<bouclier de bois\nrenforcé>coloroff>. C'est le plus robuste des boucliers de\nbois. Il conserve néanmoins toute sa légèreté.")
          	}
          }

          void entrypoint_003_135() {
/*<306>*/ 	start()
/*<302>*/ 	printf(/* textboxtype: 0, unk: 5, line: 172 */ "Votre sac a été amélioré en <color yellow<sac de bombes\nmoyen>coloroff>! Il peut contenir <color red<10 >coloroff>bombes\nsupplémentaires. Prenez‐le lorsque vous avez\nbesoin de bombes!")
          }

          void entrypoint_003_152() {
/*<333>*/ 	start()
/*<669>*/ 	switch (story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */]) {
          	  case 0:
/*<670>*/ 		printf(/* textboxtype: 0, unk: 5, line: 202 */ "Vous avez obtenu <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>!\nVoici le plus rare des petits habitants du ciel.\nIl se tapit habituellement dans l'obscurité.")
          		flw_627:
/*<627>*/ 		open_collection_screen();
          	  case 1:
/*<331>*/ 		printf(/* textboxtype: 5, unk: 1, line: 201 */ "Vous avez attrapé <numeric arg0 0> <color yellow<<0x30004:0x0ecd>>coloroff>!\nVoici le plus rare des petits habitants du ciel.\nIl se tapit habituellement dans l'obscurité.")
          		goto flw_627
          	}
          }

          void entrypoint_003_059() {
/*<458>*/ 	start()
/*<459>*/ 	check_item_flag(492, 19999)
/*<460>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 56}) {
          	  case 0:
/*<457>*/ 		printf(/* textboxtype: 1, unk: 0, line: 80 */ "")
          	  case 1:
/*<461>*/ 		printf(/* textboxtype: 0, unk: 5, line: 79 */ "")
          	}
          }

          void entrypoint_003_187() {
/*<465>*/ 	start()
/*<463>*/ 	printf(/* textboxtype: 5, unk: 1, line: 237 */ "")
/*<485>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = true;
          }

          void entrypoint_003_042() {
/*<104>*/ 	start()
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 5, line: 52 */ "Vous avez obtenu une <color yellow<baie d'endurance>coloroff>!\nCes fruits mystérieux remplissent immédiatement\nvotre jauge d'endurance.")
          }

          void entrypoint_003_025() {
/*<121>*/ 	start()
/*< 62>*/ 	printf(/* textboxtype: 0, unk: 5, line: 31 */ "Vous avez obtenu la <color yellow<statuette sereine>coloroff>!\nCette sculpture de bois inspire la plénitude.\nElle ressemble à la statue de pierre de l'étage\nsupérieur.")
          }

          void entrypoint_003_008() {
/*<138>*/ 	start()
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "Vous avez obtenu <color yellow<10 flèches>coloroff>!\nVous pourrez les tirer avec votre arc. Leur\nnombre est limité, utilisez-les avec discernement!")
          }

          void entrypoint_003_077() {
/*<195>*/ 	start()
/*<176>*/ 	printf(/* textboxtype: 0, unk: 5, line: 103 */ "Votre scarabée a été amélioré en <color yellow<scarabée\nendurant>coloroff>! Il peut maintenant voler plus\nlongtemps. Voilà qui ouvre de nouvelles\nperspectives!")
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
/*<208>*/ 				printf(/* textboxtype: 0, unk: 5, line: 124 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un cœur.\nPlus qu'<color red<un>coloroff>!")
          			  case 1:
/*<200>*/ 				printf(/* textboxtype: 5, unk: 1, line: 123 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un cœur.\nPlus que <color red<deux>coloroff>!")
          			}
          		  case 1:
/*<203>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nIl vous en faut quatre pour augmenter\nvotre énergie vitale maximale d'un cœur.\nPlus que <color red<trois>coloroff>!")
          		}
          	  case 1:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 125 */ "Vous avez obtenu un <color yellow<quart de cœur>coloroff>!\nVous avez formé un nouveau réceptacle de cœur.\nVotre énergie vitale maximale augmente\nd'un cœur!")
          	}
          }

          void entrypoint_003_101() {
/*<233>*/ 	start()
/*<229>*/ 	printf(/* textboxtype: 5, unk: 1, line: 135 */ "Vous avez obtenu une <color yellow<médaille rubis>coloroff>!\nAvec elle, les rubis apparaîtront plus\nfréquemment. Pensez‐y quand vous êtes\nà court d'argent!")
          }

          void entrypoint_003_119() {
/*<274>*/ 	start()
/*<557>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<270>*/ 		printf(/* textboxtype: 1, unk: 0, line: 155 */ "Vous avez obtenu un <color yellow<bouclier de fer>coloroff>!\nLe fer a l'avantage de ne pas brûler et de mieux\nrésister aux impacts, mais il ne protège pas du\ncourant électrique!")
/*<517>*/ 		story_flags[289 /* us: 805A9AFA 0x08, jp: 805ACD7A 0x08 */] = true;
          	}
          }

          void entrypoint_003_136() {
/*<305>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 0, line: 173 */ "Votre sac a été amélioré en <color yellow<grand sac de bombes>coloroff>!\nIl peut contenir <color red<15 >coloroff>bombes supplémentaires.\nPrenez‐le lorsque vous avez besoin de bombes!")
          }

          void entrypoint_003_153() {
/*<336>*/ 	start()
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0, line: 203 */ "Vous avez obtenu un <color yellow<flacon vide>coloroff>!\nVous pouvez le remplir de différentes choses.")
          }

          void entrypoint_003_170() {
/*<351>*/ 	start()
/*<349>*/ 	printf(/* textboxtype: 0, unk: 5, line: 220 */ "Vous avez obtenu une <color yellow<griffe de monstre>coloroff>!\nCette griffe acérée a l'air tranchante comme un\nrasoir... Le monstre dont elle provient doit faire\npeur à voir.")
/*<637>*/ 	open_collection_screen();
          }

          void entrypoint_003_188() {
/*<470>*/ 	start()
/*<468>*/ 	printf(/* textboxtype: 0, unk: 5, line: 238 */ "")
/*<543>*/ 	story_flags[72 /* us: 805A9AE9 0x20, jp: 805ACD69 0x20 */] = true;
          }

          void entrypoint_003_060() {
/*< 91>*/ 	start()
/*< 34>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "Vous avez obtenu <color yellow<10 graines Mojo>coloroff>!\nVous pouvez lancer ces petites graines avec votre\nlance-pierre. Gardez un œil sur vos réserves!")
          }

          void entrypoint_003_043() {
/*<103>*/ 	start()
/*<400>*/ 	check_item_flag(500, 14)
/*<399>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 30}) {
          	  case 0:
/*<401>*/ 		printf(/* textboxtype: 5, unk: 1, line: 54 */ "Vous avez rassemblé toutes les <color yellow<larmes de Farore>coloroff>.\nVotre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*< 45>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "Vous avez obtenu une <color yellow<larme de Farore>coloroff>!\nSon pouvoir sacré immobilise les Gardiens\npendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

          void entrypoint_003_026() {
/*<120>*/ 	start()
/*< 61>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "Vous avez obtenu le <color yellow<cristal mystérieux>coloroff>!\nLes cubes qui le composent brillent d'un éclat\ndiscret. Il en manque quelques‐uns.")
          }

          void entrypoint_003_009() {
/*<137>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 5, unk: 1, line: 12 */ "")
/*<542>*/ 	story_flags[583 /* us: 805A9B1B 0x40, jp: 805ACD9B 0x40 */] = true;
          }

          void entrypoint_003_078() {
/*<194>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 104 */ "Vous avez obtenu une <color yellow<potion de santé>coloroff>!\nLorsque vous la buvez, vous récupérez <color red<8 cœurs>coloroff>!")
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
/*<580>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Vous avez obtenu la <color yellow white<Triforce du courage>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<525>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_533:
/*<533>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Vous avez obtenu la <color yellow white<Triforce du courage>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<532>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "Il ne vous manque plus qu'<color red<une>coloroff> partie!")
/*<570>*/ 			changeScene(3, 1) // 
          		}
          	  case 1:
/*<545>*/ 		check_item_flag(97, 1)
/*<546>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          		  case 0:
          			goto flw_533
          		  case 1:
/*<214>*/ 			printf(/* textboxtype: 5, unk: 1, line: 126 */ "Vous avez obtenu la <color yellow white<Triforce du courage>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<531>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "Il vous manque encore <color red<deux>coloroff> parties!")
/*<571>*/ 			changeScene(3, 1) // 
          		}
          	}
          }

          void entrypoint_003_102() {
/*<232>*/ 	start()
/*<228>*/ 	printf(/* textboxtype: 0, unk: 5, line: 136 */ "Vous avez obtenu la <color yellow<médaille trésor>coloroff>!\nAvec elle, les trésors apparaîtront plus\nfréquemment. Indispensable pour la\nchasse au trésor!")
          }

          void entrypoint_003_137() {
/*<304>*/ 	start()
/*<411>*/ 	switch (story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */]) {
          	  case 0:
/*<412>*/ 		printf(/* textboxtype: 0, unk: 5, line: 175 */ "Vous avez récupéré votre <color yellow<fouet>coloroff>!\nCherchez s'il n'y a pas quelque part une prise\nà laquelle vous accrocher.")
/*<431>*/ 		open_item_wheel(5)
/*<413>*/ 		story_flags[163 /* us: 805A9AE3 0x04, jp: 805ACD63 0x04 */] = false;
          	  case 1:
/*<300>*/ 		printf(/* textboxtype: 5, unk: 1, line: 174 */ "Vous avez obtenu le <color yellow<fouet>coloroff>!\nGrâce à l'orbe de lumière à son extrémité, il peut\ns'accrocher à de nombreux endroits!\n\nAvec (Z), ciblez les prises que vous ne pourriez\natteindre autrement et agrippez‐les.<0x10011:0x07cd>")
/*<432>*/ 		open_item_wheel(5)
          	}
          }

          void entrypoint_003_171() {
/*<356>*/ 	start()
/*<354>*/ 	printf(/* textboxtype: 1, unk: 0, line: 221 */ "Vous avez obtenu un <color yellow<cor de monstre>coloroff>!\nFabriqué à partir d'une corne d'animal, ce cor\nd'une grande solidité pourrait être utilisé comme\nmatériau.")
/*<638>*/ 	open_collection_screen();
          }

          void entrypoint_003_154() {
/*<370>*/ 	start()
/*<369>*/ 	printf(/* textboxtype: 5, unk: 1, line: 204 */ "")
          }

          void entrypoint_003_189() {
/*<469>*/ 	start()
/*<467>*/ 	printf(/* textboxtype: 1, unk: 0, line: 239 */ "")
/*<544>*/ 	story_flags[73 /* us: 805A9AE9 0x40, jp: 805ACD69 0x40 */] = true;
          }

          void entrypoint_003_061() {
/*< 12>*/ 	start()
/*<  8>*/ 	printf(/* textboxtype: 5, unk: 1, line: 84 */ "")
/*<  9>*/ 	give_item(61 0x3D);
          }

          void entrypoint_003_027() {
/*<119>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 5, unk: 1, line: 33 */ "Vous avez obtenu la <color yellow<sculpture tentaculaire>coloroff>!\nCette statuette à la forme peu commune est\nrecouverte d'inquiétantes ventouses...")
          }

          void entrypoint_003_079() {
/*<193>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 5, unk: 1, line: 105 */ "Vous avez obtenu une <color yellow<potion de santé ★>coloroff>!\nCette version améliorée de la potion de santé\n<color red<restaure tous vos cœurs>coloroff>.")
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
/*<581>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Vous avez obtenu la <color yellow white<Triforce de la force>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<526>*/ 			entrypoint_003_05();
          		  case 1:
          			flw_538:
/*<538>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Vous avez obtenu la <color yellow white<Triforce de la force>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<535>*/ 			printf(/* textboxtype: 1, unk: 0, line: 128 */ "Il ne vous manque plus qu'<color red<une>coloroff> partie!")
/*<572>*/ 			changeScene(2, 1) // 
          		}
          	  case 1:
/*<547>*/ 		check_item_flag(97, 1)
/*<548>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          		  case 0:
          			goto flw_538
          		  case 1:
/*<220>*/ 			printf(/* textboxtype: 5, unk: 1, line: 129 */ "Vous avez obtenu la <color yellow white<Triforce de la force>coloroff>!\n<color red<Pouvoir suprême>coloroff> créé par les dieux anciens,\nla Triforce exauce tous les désirs de celui qui\nla possède.")
/*<534>*/ 			printf(/* textboxtype: 0, unk: 5, line: 127 */ "Il vous manque encore <color red<deux>coloroff> parties!")
/*<573>*/ 			changeScene(2, 1) // 
          		}
          	}
          }

          void entrypoint_003_103() {
/*<243>*/ 	start()
/*<239>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Vous avez obtenu une <color yellow<médaille de durabilité>coloroff>!\nAvec elle, l'effet des potions sera prolongé.\nIdéale pour les grands consommateurs de potions!")
          }

          void entrypoint_003_120() {
/*<273>*/ 	start()
/*<558>*/ 	switch (story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Votre bouclier est réparé! Il est comme neuf.")
          	  case 1:
/*<269>*/ 		printf(/* textboxtype: 5, unk: 1, line: 156 */ "Votre bouclier a été amélioré en <color yellow<bouclier de fer\nsolide>coloroff>! Il est plus résistant qu'un bouclier de fer\nclassique.")
          	}
          }

          void entrypoint_003_138() {
/*<303>*/ 	start()
/*<299>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "Vous avez obtenu les <color yellow<boucles ignifuges>coloroff>!\nC'est une des reliques de la Déesse. Vous pouvez\ndésormais résister aux chaleurs extrêmes. ")
/*<502>*/ 	story_flags[207 /* us: 805A9AF0 0x08, jp: 805ACD70 0x08 */] = true;
          }

          void entrypoint_003_172() {
/*<355>*/ 	start()
/*<353>*/ 	printf(/* textboxtype: 5, unk: 1, line: 222 */ "Vous avez obtenu un <color yellow<crâne décoratif>coloroff>!\nCe charmant bibelot est à l'image du symbole\ndes Bokoblins.")
/*<639>*/ 	open_collection_screen();
          }

          void entrypoint_003_155() {
/*<374>*/ 	start()
/*<372>*/ 	printf(/* textboxtype: 0, unk: 5, line: 205 */ "")
          }

          void entrypoint_003_044() {
/*<438>*/ 	start()
/*<440>*/ 	check_item_flag(500, 14)
/*<439>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 48}) {
          	  case 0:
/*<441>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "Vous avez rassemblé toutes les <color yellow<larmes de Din>coloroff>.\nVotre âme a gagné en maturité!\n\n\nL'épreuve ne se terminera que lorsque vous aurez\nrejoint votre monde. Retournez à l'entrée pour\nrecevoir la preuve de votre maturité.")
          	  case 1:
/*<437>*/ 		printf(/* textboxtype: 0, unk: 5, line: 55 */ "Vous avez obtenu une <color yellow<larme de Din>coloroff>!\nSon pouvoir sacré immobilise les Gardiens\npendant <color red<90 secondes>coloroff>.\n\nRassemblez‐en <color red<15 >coloroff>pour réussir l'épreuve!")
          	}
          }

