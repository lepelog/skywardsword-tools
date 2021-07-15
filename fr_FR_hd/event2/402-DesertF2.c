          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf("Ouh ! C'est vraiment pas très engageant<pause05>.<pause05>.<pause05>.\n\n\n\n\x0E\x01\x09\x04\x07\x00Mais y a rien à craindre, en fin de compte...\nIls doivent tous être morts, pas vrai ?\n\n\n\x0E\x01\x09\x04\x07\x00Tout le monde n'a pas la chance de se balader\navec un chronolithe !\n\n\n\x0E\x01\x09\x04\x07\x00Alors pas de quoi s'inquiéter. Allez zou, pars à\nla recherche de mon navire, moussaillon !\n\n\n\x0E\x01\x09\x04\x07\x00Je t'attendrai ici.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf("Vers le chantier naval")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Regardez par ici.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf("La probabilité que les voiles et les mâts qui se\ntrouvent ici proviennent du navire protecteur\nde la <r<flamme de Nayru>> est de 60 %.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf("Initialisation de la fonction <r<détection>>. Cible : le navire\nrenfermant la <r<<pling>flamme de Nayru>>.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf("Approchez\x2010vous, puis montez\navec (A).")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, il semble que cette installation a longtemps\nété un repaire de monstres.\n\n\nVos chances de trouver des indices sur le navire dans\ncette zone sont extrêmement faibles.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf("Dans les virages, faites pencher le\nwagonnet en inclinant votre corps.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf("Merci pour tout, capitaine,\nvous êtes le meilleur !\nL'équipage")
          }

          void entrypoint_402_02() {
/*<  2>*/ 	start()
/*< 21>*/ 	switch (story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */]) {
          	  case 0:
/*< 22>*/ 		switch (story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */]) {
          		  case 0:
/*<220>*/ 			switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          			  case 0:
/*<221>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<223>*/ 					printf("Allez, fini de tirer au flanc, file d'ici ! Tu as\nquelqu'un à retrouver, non ?\n\n\nÀ moins que tu veuilles utiliser le bateau pour\naller quelque part ?\n[1]En mer[2]Au galion\ndes sables[3-]Non")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf("\x0E\x01\x09\x04\x07\x00Alors c'est parti !")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf("\x0E\x01\x09\x04\x07\x00Très bien, je te conduis à mon navire !")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf("\x0E\x01\x09\x04\x07\x00Reviens dire bonjour à l'occasion !")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf("Salut ! Tu as retrouvé celle que tu cherchais ?\n\n\n\nTu veux aller quelque part en bateau ?\n[1]En mer[2]Au galion\ndes sables[3-]Non")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf("Tu cherches les trois dragons ?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Le <b<dragon de foudre>> se trouve au sud de la\n<b<grotte de Lanelle>> ! Pour les autres, je sais pas.\n\n\n\x0E\x01\x09\x04\x07\x00Au fait, tu veux aller quelque part ?\n[1]En mer[2]Au galion[3-]Je reste ici")
          								goto flw_263
          							  case 1:
/*<293>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 294, 'param3': 31}
/*<294>*/ 								story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          								goto flw_282
          							}
          						}
          					  case 1:
          						goto flw_222
          					}
          				}
          			  case 1:
          				flw_150:
/*<150>*/ 				switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x07\x00On largue les amarres, moussaillon ?\n[1]Vers la mer[2]Vers le galion\ndes sables[3-]Non")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x07\x00Alors c'est parti !")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf("\x0E\x01\x09\x04\x07\x00Très bien, je te conduis à mon navire !")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x07\x00Allez, on traîne pas !")
          					}
          				  case 1:
/*<155>*/ 					printf("\x0E\x01\x09\x04\x07\x00On largue les amarres ?\n[1]Oui[2-]Attends")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x07\x00Alors c'est parti !")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf("\x0E\x01\x09\x04\x07\x00Allez, on traîne pas !")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf("Alors, tu as changé d'avis ?\n\n\n\nTu vas m'aider à récupérer mon bateau ?\n[1]D'accord[2-]Non")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x07\x00Vraiment ? Très bien, dans ce cas...")
/*< 25>*/ 				printf("<pause0A>.<pause0A>.<pause0A>. Dis donc, matelot, ta carte est vraiment\nbizarre !\n\n\n\x0E\x01\x09\x04\x07\x00Pour naviguer correctement en mer, il faut une\n<y<carte marine >>exacte, enfin !\n\n\nJ'en ai une <b<chez moi>>, ça tombe bien ! Allez, on\nmonte à bord, cap sur <b<ma maison>>, et que ça\nsaute !")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf("\x0E\x01\x09\x04\x07\x00J'ai bien peur de ne pas pouvoir te faire monter\nà bord, dans ce cas !\n\n\nEt si tu ne montes pas, tu pourras aller nulle\npart !")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf("<pause0A>.<pause0A>.<pause0A>. Tu es qui, toi ? Un humain ?\n\n\n\nComment ? Tu veux savoir qui je suis<pause05>.<pause05>.<pause05>.?\n\n\n\n\x0E\x01\x09\x04\x07\x00<pling>Je suis <b<Ycéo>>, le fier capitaine du navire qui\nprotège la <r<flamme de Nayru>> !\n[1]La flamme\nde Nayru ?[2]Un navire ?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf("<pause0A>.<pause0A>.<pause0A>.\n\n\n\nLa tempête faisait rage, ce jour\x2010là<pause05>.<pause05>.<pause05>. Mes\nmatelots et moi étions en mer, comme\nchaque jour...\n\nEt c'est là qu'ils nous sont tombés dessus<pause05>.<pause05>.<pause05>.\nCes maudits pirates...\n\n\nIls voulaient la <r<flamme de Nayru>>... Ils ont\nemprisonné mes matelots, et m'ont jeté à la\nmer...")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf("\x0E\x01\x09\x04\x07\x00J'ai fini par échouer ici<pause05>.<pause05>.<pause05>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf("\x0E\x01\x09\x04\x07\x00Puis, grâce à ce bateau, j'ai longtemps navigué à\nla recherche de mes matelots et de mon navire...")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf("\x0E\x01\x09\x04\x07\x00Mais je ne les ai jamais retrouvés.<pause05>.<pause05>.\n\n\n\nMon navire peut être rendu invisible sur\ncommande, ils ont dû en tirer parti.\n[1]Invisible ?[2]Il a disparu ?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf("\x0E\x01\x09\x04\x07\x00Oui, je possède un navire destiné à protéger\nla <r<flamme de Nayru>>, et qui peut se rendre\ninvisible<pause05>.<pause05>.<pause05>.\n\nQuoi ? Tu cherches la <r<flamme de Nayru>> ?\n\n\n\nElle te serait utile pour retrouver une amie qui\nt'est chère<pause05>.<pause05>.<pause05>.?\n\n\n\x0E\x01\x09\x04\x07\x00Dans ce cas, il faudrait que tu m'aides à\nretrouver mon navire et mes matelots.")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf("Si tu es d'accord pour m'aider, j'accepte que tu\nmontes à bord de ce bateau.\n[1]D'accord[2-]Non")
/*<215>*/ 				set_camera(-1, 0)
          				goto flw_134
          			  case 1:
          				goto flw_209
          			}
          		  case 1:
          			goto flw_212
          		}
          	}
          }

          void entrypoint_401_20() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf("Si vous prenez trop de vitesse,\nfreinez avec (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf("Bon courage pour ton travail,\npapa chéri !")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf("Sautez par\x2010dessus les obstacles.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf("Vers le ponton")
          }

          void entrypoint_402_04() {
/*< 13>*/ 	start()
/*< 41>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 42>*/ 		switch (story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */]) {
          		  case 0:
/*<284>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<283>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_44:
/*< 44>*/ 					printf("Cette maison est remplie de souvenirs de ma\nfamille...\n\n\nPourrai\x2010je un jour y vivre à nouveau ? Ma\nfamille me manque tellement.<pause05>.<pause05>.")
          					flw_46:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x07\x00On embarque ?\n[1]Oui[2-]Attends")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf("\x0E\x01\x09\x04\x07\x00On largue les amarres !")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ah...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf("Tu cherches les dragons ?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Je sais pas pour les autres, mais le <b<dragon de\nfoudre >>se trouve au sud de la <b<grotte de Lanelle>>.")
          						goto flw_46
          					  case 1:
/*<296>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 297, 'param3': 31}
/*<297>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_285
          					}
          				}
          			  case 1:
          				goto flw_44
          			}
          		  case 1:
/*< 43>*/ 			printf("Bien ! Tu as ramené la <y<carte marine>>. Avec ça,\non va pouvoir naviguer correctement !\n\n\nAllons chercher mon navire, maintenant !")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf("Qu'est\x2010ce qui t'arrive ? Va vite chercher la\n<y<carte marine >>dans ma maison !\n\n\nOu alors tu veux retourner en mer ?\n[1]Oui[2-]Non")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("\x0E\x01\x12\x04\x00dTu as vu ? C'était mon navire !\n\n\n\nAllez, feu à volonté !")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf("Terminus \x2010 Chantier naval")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf("Merci de m'avoir rendu mon navire.\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Il est en piteux état, mais on va le réparer, avec\nmes compagnons.\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>J'espère que tu retrouveras celle que tu\ncherches. Bonne chance !\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Tu es le bienvenu ici quand tu veux !")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf("Jetons un \x153il à cette <y<carte marine >>que tu as\nramenée !")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 102, 'param3': 6}
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf("La marque \x0E\x02\x04\x02\x19CD indique la position du <b<<pling>chantier\nnaval>>.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x00Le chantier naval est un site de construction\nde bateaux. C'est là que mon navire a été\nfabriqué !\n\n\x0E\x01\x09\x04\x07\x00Tu pourrais peut\x2010être obtenir des indices sur\nl'endroit où se trouve mon navire, là\x2010bas...")
/*<110>*/ 	printf("\x0E\x01\x09\x04\x07\x00Allez, on largue les amarres !")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf("Attention, attaques pirates\nfréquentes !")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf("Ouh, j'ai un peu peur<pause05>.<pause05>.<pause05>.\n\n\n\nLe chef des pirates est un androïde très costaud\nqui a des hordes de sbires sous ses ordres.\n\n\n\x0E\x01\x09\x04\x07\x00Je préférerais éviter de le rencontrer à\nnouveau, mais<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00Il le faut... Pour mon navire !")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf("La marque \x0E\x02\x04\x02\x19CD indique la position du <b<<pling>repaire\ndes pirates>>.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf("\x0E\x01\x09\x04\x07\x00Rassemble ton courage, moussaillon, on largue\nles amarres !")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf("\x0E\x01\x09\x04\x07\x00Ah, pas de trace de mon navire au chantier\nnaval<pause05>.<pause05>.<pause05>.\n\n\n\x0E\x01\x09\x04\x07\x00C'est pas très attrayant, mais il nous reste à\nexplorer le repaire des pirates qui ont volé\nmon navire !\n\n\x0E\x01\x09\x04\x07\x00Le chef des pirates est un androïde très costaud,\nqui a des tonnes de sbires sous ses ordres.\n\n\n\x0E\x01\x09\x04\x07\x00Je préfèrerais éviter de le revoir, mais<pause05>.<pause05>.<pause05>.\n\n\n\n\x0E\x01\x09\x04\x07\x00Si on veut retrouver mon navire, on a pas le\nchoix !")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez par ici.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf("On appelle ceci un <y<<pling>chronoglobe>>.\n\n\n\nSa forme est différente de celle des chronolithes, et il\nest conçu pour être transporté.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf("Réparation mensuelle des rails en\ncours. Suspension des transports.\nExcusez du dérangement !")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x07\x00La mer est si vaste, tu penses vraiment pouvoir\nle trouver ?\n\n\n\x0E\x01\x09\x04\x07\x00Enfin, je te fais confiance ! Je compte sur toi !\n\n\n\n\x0E\x01\x09\x04\x07\x00Le navire est sûrement invisible... mais il\napparaîtra s'il <pling><g<encaisse un choc >>!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf("Mon navire n'était pas non plus dans le repaire\ndes pirates, alors<pause05>.<pause05>.<pause05>.\n\n\nTu as trouvé des indices ?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Ah ? Tu peux <r<détecter >>mon navire ? Yoho,\nquelle bonne nouvelle !")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf("Regardez par ici, \x0E\x01\x12\x04\x00\x01Maître.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf("La probabilité que ce navire soit celui qui protège la\nflamme de Nayru est de 90 %.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf("Je suppose que le capitaine y a passé des jours\nheureux, entouré de son équipage.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf("J'espère que les plans de mon\nnavire seront bientôt prêts...")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, regardez par ici.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf("Il n'y a pas de <r<chronolithe >>sur ce socle, mais...\n\n\n\n... la probabilité qu'il s'agisse d'une installation\nsimilaire à celle des <b<mines de Lanelle>> est de 95 %.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf("J'émets l'hypothèse que des <r<<y<<pling><r<chronolithes >>étaient\nutilisés ici comme source d'alimentation.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf("\x0E\x01\x05\x04\x0F\x00\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n\n\n\n\x0E\x01\x05\x04<\x00Voici la <b<mer de sable de Lanelle>>. Autrefois, l'eau s'y\nétendait à perte de vue.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, nous sommes arrivés dans la partie centrale\ndu chantier naval.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf("Avec le temps, les installations ont été recouvertes\nde sable.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf("Je vous recommande de fouiller dans le sable pour\ntrouver des indices sur le navire.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x05\x04Z\x00Mais elle s'est asséchée et s'est transformée en mer\nde sable.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, Fay au rapport. Atteignons notre objectif\navant de prendre une pause.\n\n\nAllons d'abord chercher la carte marine.")
/*<233>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 36}
/*<235>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
          }

          void entrypoint_402_10() {
/*<  5>*/ 	start()
/*< 64>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<274>*/ 		switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          		  case 0:
/*<287>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<286>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_275:
/*<275>*/ 					printf("Oh, quelle nostalgie me saisit soudain ! C'est\nici que mon navire a été construit. On était\ntellement heureux.<pause05>.<pause05>.")
          					flw_67:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x07\x00On embarque ?\n[1]Oui[2-]Attends")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf("\x0E\x01\x09\x04\x07\x00On largue les amarres !")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ah...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf("Tu cherches les dragons ?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Je sais pas pour les autres, mais le <b<dragon de\nfoudre >>se trouve au sud de la <b<grotte de Lanelle>>.")
          						goto flw_67
          					  case 1:
/*<302>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 303, 'param3': 31}
/*<303>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_288
          					}
          				}
          			  case 1:
          				goto flw_275
          			}
          		  case 1:
/*< 65>*/ 			switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          			  case 0:
/*< 73>*/ 				printf("Prépare\x2010toi, petit gars ! En route pour le\n<b<repaire des pirates >>!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x07\x00Le navire n'était pas ici ? Dommage<pause05>.<pause05>.<pause05>.\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>C'est pas très attrayant, mais il nous reste à\nexplorer le repaire des pirates qui ont volé\nmon navire !\n\n<b<\x0E\x01\x09\x04\x07\x00>>Allez, on embarque dès que tu es prêt !\n[1]C'est parti[2-]Attends")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf("Hé ! Pas le temps de traîner, faut aller\nchercher des indices au <b<chantier naval >>!\n\n\n\x0E\x01\x09\x04\x07\x00Ou alors tu veux retourner en mer ?\n[1]Oui[2-]Non")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf("\x0E\x01\x05\x04Z\x00Nous nous trouvons à l'emplacement d'un ancien port.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf("Je détecte la présence d'insectes au\x2010dessus de la\nmaison.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf("\x0E\x01\x12\x04\x00dPar là, c'est l'effroyable, l'épouvantable repaire\ndes pirates.\n\n\nN'y va pas, c'est bien trop dangereux ! Pour\nl'instant, allons au <b<chantier naval>>.")
          	  case 1:
/*<  8>*/ 		printf("\x0E\x01\x12\x04\x00dHé, pas par là ! Faut que tu ailles vers <b<ma\nmaison >>d'abord !")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x05\x04<\x00C'est une région technologiquement avancée, utilisant\nune énergie nouvelle. La probabilité que la <r<flamme\nsacrée>> se trouve ici est de 90 %.\n\n\x0E\x01\x05\x04\x1E\x00Je vous encourage à entamer vos recherches sur la\nmer de sable.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. L'énergie du chronoglobe a\nprovoqué des changements dans notre environnement.\n\n\nJe vous recommande d'aller vous en assurer dehors.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("Ça faisait un moment que j'avais pas navigué !\nÇa commence à me revenir...\n\n\n\x0E\x01\x09\x04\x07\x00Déplace le bateau avec \x0E\x02\x04\x02\x8CD. Si tu appuies\nsur (B) en même temps, tu iras plus vite !\x0E\x01\x11\x02\x1CD\n\n\nPrépare le canon avec \x0E\x02\x04\x02\x29CD, et tire avec \x0E\x02\x04\x02\x29CD\naussi !\x0E\x01\x11\x02\xFCD")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf("La marque \x0E\x02\x04\x02\x19CD indique l'île où se trouve ma\nmaison !\n\n\nL'île est équipée d'un <r<ponton>>, on accostera\nlà\x2010bas.")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x07\x00Allez, en route, moussaillon !")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(".<pause05>.<pause05>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. La probabilité de trouver\nle navire ici est de 0 %. Inutile de continuer les\nrecherches.\n\nVeuillez faire votre rapport au capitaine et quitter\ncette île.")
/*<273>*/ 	scene_flags[8 'Lanayru Sand Sea'][89 /* 0xA 02 */] = true;
          }

          void entrypoint_402_14() {
/*< 17>*/ 	start()
/*< 53>*/ 	switch (story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */]) {
          	  case 0:
/*<276>*/ 		switch (story_flags[272 /* us: 805A9AF8 0x04, jp: 805ACD78 0x04 */]) {
          		  case 0:
/*<290>*/ 			switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          			  case 0:
/*<289>*/ 				switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          				  case 0:
          					flw_277:
/*<277>*/ 					printf("Je me souviens de ce jour où nous avons été\nattaqués par les pirates... J'en fais encore des\ncauchemars. Quelle frayeur.<pause05>.<pause05>.")
          					flw_56:
/*< 56>*/ 					printf("\x0E\x01\x09\x04\x07\x00On embarque ?\n[1]Oui[2-]Attends")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf("\x0E\x01\x09\x04\x07\x00On largue les amarres !")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x07\x00Ah...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf("Tu cherches les dragons ?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Je sais pas pour les autres, mais le <b<dragon de\nfoudre >>se trouve au sud de la <b<grotte de Lanelle>>.")
          						goto flw_56
          					  case 1:
/*<299>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 300, 'param3': 31}
/*<300>*/ 						story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */] = true;
          						goto flw_291
          					}
          				}
          			  case 1:
          				goto flw_277
          			}
          		  case 1:
/*< 54>*/ 			switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          			  case 0:
/*< 63>*/ 				printf("Allons vite trouver mon navire !")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf("Mon navire n'était pas là non plus<pause05>.<pause05>.<pause05>.\n\n\n\nTu as trouvé d'autres indices ?\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Oh ? Tu peux le <r<détecter >>? Super !\n\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>Cette fois\x2010ci, c'est la bonne ! On va le trouver,\nmon bateau chéri !\n\n\n<b<\x0E\x01\x09\x04\x07\x00>>On embarque ?\n[1]Oui[2-]Attends")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf("<pling>On dirait qu'il y a quelque chose près du pont,\nà l'intérieur de la bouche !\n\n\nC'est peut\x2010être un indice concernant mon\nnavire ! Va voir, s'il te plaît !")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf("\x0E\x01\x09\x04\x07\x00Ou préfères\x2010tu retourner en mer ?\n[1]Oui[2-]Non")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf("\x0E\x03\x01\x00Link ! Tu as vu ?\n\n\n\nUne bouche énorme s'est ouverte ! T'as touché\nà quelque chose ?")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf("<pling>On dirait qu'il y a quelque chose près du pont,\nà l'intérieur de la bouche !\n\n\nC'est peut\x2010être un indice concernant mon\nnavire ! Va voir, s'il te plaît !")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf("Alors, on a peur des pirates ? T'inquiète pas,\nils sont tous morts !\n\n\nTu veux retourner en mer ?\n[1]Oui[2-]Non")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("On est arrivés !")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf("Ma maison est au sommet !")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf("\x0E\x01\x09\x04\x07\x00La <y<<pling>carte marine >>se trouve dans ma maison, va\nvite la chercher !\n\n\nÇa grouille de monstres dans le coin, fais bien\nattention.\n\n\n\x0E\x01\x09\x04\x07\x00Si je m'éloigne du bateau, je serai mis hors\ncircuit... Alors je t'attends ici !")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf("On est arrivés !\n\n\n\nC'est l'île du chantier naval. Il y avait une ville,\nici, avant. Les ouvriers qui travaillaient sur le\nchantier y habitaient.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf("Ce bâtiment là\x2010bas, c'est le chantier naval !")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf("Mais on ne peut plus y accéder, car l'entrée est\nbloquée.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf("\x0E\x01\x09\x04\x07\x00On peut se déplacer sur cette île à l'aide d'un\nréseau de wagonnets.")
/*<164>*/ 	printf("\x0E\x01\x09\x04\x07\x00Si tu empruntes le réseau de wagonnets, tu\ntrouveras peut\x2010être l'entrée arrière du chantier\nnaval !")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf("Il y a une zone d'embarquement là\x2010bas.")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf("\x0E\x01\x09\x04\x07\x00Commence par t'y rendre, je t'attends ici !")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf("Vers le centre\x2010ville")
          }

