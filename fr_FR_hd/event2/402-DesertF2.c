          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ouh ! C'est vraiment pas très engageant<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<0x10009:0x00070000>Mais y a rien à craindre, en fin de compte...\nIls doivent tous être morts, pas vrai ?\n\n\n<0x10009:0x00070000>Tout le monde n'a pas la chance de se balader\navec un chronolithe !\n\n\n<0x10009:0x00070000>Alors pas de quoi s'inquiéter. Allez zou, pars à\nla recherche de mon navire, moussaillon !\n\n\n<0x10009:0x00070000>Je t'attendrai ici.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf(/* textboxtype: 0, unk: 2, line: 97 */ "Vers le chantier naval")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Regardez par ici.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf(/* textboxtype: 1, unk: 2, line: 66 */ "La probabilité que les voiles et les mâts qui se\ntrouvent ici proviennent du navire protecteur\nde la <color red<flamme de Nayru>coloroff> est de 60 %.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Initialisation de la fonction <color red<détection>coloroff>. Cible : le navire\nrenfermant la <color red<<sound 4>flamme de Nayru>coloroff>.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 0, unk: 0, line: 98 */ "Approchez‐vous, puis montez\navec (A).")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10012:0x0000000b>Maître, il semble que cette installation a longtemps\nété un repaire de monstres.\n\n\nVos chances de trouver des indices sur le navire dans\ncette zone sont extrêmement faibles.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf(/* textboxtype: 2, unk: 0, line: 99 */ "Dans les virages, faites pencher le\nwagonnet en inclinant votre corps.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "Merci pour tout, capitaine,\nvous êtes le meilleur !\nL'équipage")
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
/*<223>*/ 					printf(/* textboxtype: 0, unk: 0, line: 20 */ "Allez, fini de tirer au flanc, file d'ici ! Tu as\nquelqu'un à retrouver, non ?\n\n\nÀ moins que tu veuilles utiliser le bateau pour\naller quelque part ?\n[1-]En mer[2-]Au galion\ndes sables[3]Non")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Alors c'est parti !")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>Très bien, je te conduis à mon navire !")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00070000>Reviens dire bonjour à l'occasion !")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "Salut ! Tu as retrouvé celle que tu cherchais ?\n\n\n\nTu veux aller quelque part en bateau ?\n[1-]En mer[2-]Au galion\ndes sables[3]Non")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Tu cherches les trois dragons ?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Le <color blue<dragon de foudre>coloroff> se trouve au sud de la\n<color blue<grotte de Lanelle>coloroff> ! Pour les autres, je sais pas.\n\n\n<0x10009:0x00070000>Au fait, tu veux aller quelque part ?\n[1-]En mer[2-]Au galion[3]Je reste ici")
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
/*< 27>*/ 					printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00070000>On largue les amarres, moussaillon ?\n[1-]Vers la mer[2-]Vers le galion\ndes sables[3]Non")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Alors c'est parti !")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00070000>Très bien, je te conduis à mon navire !")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>Allez, on traîne pas !")
          					}
          				  case 1:
/*<155>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00070000>On largue les amarres ?\n[1-]Oui[2]Attends")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Alors c'est parti !")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00070000>Allez, on traîne pas !")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 0, unk: 1, line: 13 */ "Alors, tu as changé d'avis ?\n\n\n\nTu vas m'aider à récupérer mon bateau ?\n[1-]D'accord[2]Non")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00070000>Vraiment ? Très bien, dans ce cas...")
/*< 25>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<pause 10>.<pause 10>.<pause 10>. Dis donc, matelot, ta carte est vraiment\nbizarre !\n\n\n<0x10009:0x00070000>Pour naviguer correctement en mer, il faut une\n<color yellow<carte marine >coloroff>exacte, enfin !\n\n\nJ'en ai une <color blue<chez moi>coloroff>, ça tombe bien ! Allez, on\nmonte à bord, cap sur <color blue<ma maison>coloroff>, et que ça\nsaute !")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x00070000>J'ai bien peur de ne pas pouvoir te faire monter\nà bord, dans ce cas !\n\n\nEt si tu ne montes pas, tu pourras aller nulle\npart !")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 10>.<pause 10>.<pause 10>. Tu es qui, toi ? Un humain ?\n\n\n\nComment ? Tu veux savoir qui je suis<pause 5>.<pause 5>.<pause 5>.?\n\n\n\n<0x10009:0x00070000><sound 4>Je suis <color blue<Ycéo>coloroff>, le fier capitaine du navire qui\nprotège la <color red<flamme de Nayru>coloroff> !\n[1-]La flamme\nde Nayru ?[2-]Un navire ?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<pause 10>.<pause 10>.<pause 10>.\n\n\n\nLa tempête faisait rage, ce jour‐là<pause 5>.<pause 5>.<pause 5>. Mes\nmatelots et moi étions en mer, comme\nchaque jour...\n\nEt c'est là qu'ils nous sont tombés dessus<pause 5>.<pause 5>.<pause 5>.\nCes maudits pirates...\n\n\nIls voulaient la <color red<flamme de Nayru>coloroff>... Ils ont\nemprisonné mes matelots, et m'ont jeté à la\nmer...")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00070000>J'ai fini par échouer ici<pause 5>.<pause 5>.<pause 5>.")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070000>Puis, grâce à ce bateau, j'ai longtemps navigué à\nla recherche de mes matelots et de mon navire...")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00070000>Mais je ne les ai jamais retrouvés.<pause 5>.<pause 5>.\n\n\n\nMon navire peut être rendu invisible sur\ncommande, ils ont dû en tirer parti.\n[1-]Invisible ?[2-]Il a disparu ?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00070000>Oui, je possède un navire destiné à protéger\nla <color red<flamme de Nayru>coloroff>, et qui peut se rendre\ninvisible<pause 5>.<pause 5>.<pause 5>.\n\nQuoi ? Tu cherches la <color red<flamme de Nayru>coloroff> ?\n\n\n\nElle te serait utile pour retrouver une amie qui\nt'est chère<pause 5>.<pause 5>.<pause 5>.?\n\n\n<0x10009:0x00070000>Dans ce cas, il faudrait que tu m'aides à\nretrouver mon navire et mes matelots.")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Si tu es d'accord pour m'aider, j'accepte que tu\nmontes à bord de ce bateau.\n[1-]D'accord[2]Non")
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
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "")
          }

          void entrypoint_402_54() {
/*<119>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 0, unk: 2, line: 100 */ "Si vous prenez trop de vitesse,\nfreinez avec (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Bon courage pour ton travail,\npapa chéri !")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 0, unk: 0, line: 101 */ "Sautez par‐dessus les obstacles.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 2, unk: 0, line: 96 */ "Vers le ponton")
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
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Cette maison est remplie de souvenirs de ma\nfamille...\n\n\nPourrai‐je un jour y vivre à nouveau ? Ma\nfamille me manque tellement.<pause 5>.<pause 5>.")
          					flw_46:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>On embarque ?\n[1-]Oui[2]Attends")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>On largue les amarres !")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Ah...")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Tu cherches les dragons ?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Je sais pas pour les autres, mais le <color blue<dragon de\nfoudre >coloroff>se trouve au sud de la <color blue<grotte de Lanelle>coloroff>.")
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
/*< 43>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Bien ! Tu as ramené la <color yellow<carte marine>coloroff>. Avec ça,\non va pouvoir naviguer correctement !\n\n\nAllons chercher mon navire, maintenant !")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Qu'est‐ce qui t'arrive ? Va vite chercher la\n<color yellow<carte marine >coloroff>dans ma maison !\n\n\nOu alors tu veux retourner en mer ?\n[1-]Oui[2]Non")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10012:0x00000064>Tu as vu ? C'était mon navire !\n\n\n\nAllez, feu à volonté !")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 2, unk: 0, line: 102 */ "Terminus ‐ Chantier naval")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "Merci de m'avoir rendu mon navire.\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Il est en piteux état, mais on va le réparer, avec\nmes compagnons.\n\n\n<color blue<<0x10009:0x00070000>>coloroff>J'espère que tu retrouveras celle que tu\ncherches. Bonne chance !\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Tu es le bienvenu ici quand tu veux !")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "Jetons un œil à cette <color yellow<carte marine >coloroff>que tu as\nramenée !")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	wait_frames(105)
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "La marque (X) indique la position du <color blue<<sound 4>chantier\nnaval>coloroff>.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00070000>Le chantier naval est un site de construction\nde bateaux. C'est là que mon navire a été\nfabriqué !\n\n<0x10009:0x00070000>Tu pourrais peut‐être obtenir des indices sur\nl'endroit où se trouve mon navire, là‐bas...")
/*<110>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00070000>Allez, on largue les amarres !")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 0, unk: 1, line: 103 */ "Attention, attaques pirates\nfréquentes !")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Ouh, j'ai un peu peur<pause 5>.<pause 5>.<pause 5>.\n\n\n\nLe chef des pirates est un androïde très costaud\nqui a des hordes de sbires sous ses ordres.\n\n\n<0x10009:0x00070000>Je préférerais éviter de le rencontrer à\nnouveau, mais<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>Il le faut... Pour mon navire !")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "La marque (X) indique la position du <color blue<<sound 4>repaire\ndes pirates>coloroff>.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00070000>Rassemble ton courage, moussaillon, on largue\nles amarres !")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00070000>Ah, pas de trace de mon navire au chantier\nnaval<pause 5>.<pause 5>.<pause 5>.\n\n\n<0x10009:0x00070000>C'est pas très attrayant, mais il nous reste à\nexplorer le repaire des pirates qui ont volé\nmon navire !\n\n<0x10009:0x00070000>Le chef des pirates est un androïde très costaud,\nqui a des tonnes de sbires sous ses ordres.\n\n\n<0x10009:0x00070000>Je préfèrerais éviter de le revoir, mais<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<0x10009:0x00070000>Si on veut retrouver mon navire, on a pas le\nchoix !")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10012:0x00000001>Maître, regardez par ici.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf(/* textboxtype: 0, unk: 0, line: 80 */ "On appelle ceci un <color yellow<<sound 4>chronoglobe>coloroff>.\n\n\n\nSa forme est différente de celle des chronolithes, et il\nest conçu pour être transporté.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Réparation mensuelle des rails en\ncours. Suspension des transports.\nExcusez du dérangement !")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00070000>La mer est si vaste, tu penses vraiment pouvoir\nle trouver ?\n\n\n<0x10009:0x00070000>Enfin, je te fais confiance ! Je compte sur toi !\n\n\n\n<0x10009:0x00070000>Le navire est sûrement invisible... mais il\napparaîtra s'il <sound 4><color green<encaisse un choc >coloroff>!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Mon navire n'était pas non plus dans le repaire\ndes pirates, alors<pause 5>.<pause 5>.<pause 5>.\n\n\nTu as trouvé des indices ?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Ah ? Tu peux <color red<détecter >coloroff>mon navire ? Yoho,\nquelle bonne nouvelle !")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 82 */ "Regardez par ici, <0x10012:0x00000001>Maître.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf(/* textboxtype: 0, unk: 0, line: 83 */ "La probabilité que ce navire soit celui qui protège la\nflamme de Nayru est de 90 %.")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "Je suppose que le capitaine y a passé des jours\nheureux, entouré de son équipage.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 105 */ "J'espère que les plans de mon\nnavire seront bientôt prêts...")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10012:0x00000001>Maître, regardez par ici.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "Il n'y a pas de <color red<chronolithe >coloroff>sur ce socle, mais...\n\n\n\n... la probabilité qu'il s'agisse d'une installation\nsimilaire à celle des <color blue<mines de Lanelle>coloroff> est de 95 %.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "J'émets l'hypothèse que des <color red<<color yellow<<sound 4><color red<chronolithes >coloroff>étaient\nutilisés ici comme source d'alimentation.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf(/* textboxtype: 74, unk: 1, line: 106 */ "<0x10005:0x000f0000><0x10012:0x0000000b>Maître, Fay au rapport.\n\n\n\n<0x10005:0x003c0000>Voici la <color blue<mer de sable de Lanelle>coloroff>. Autrefois, l'eau s'y\nétendait à perte de vue.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10012:0x00000001>Maître, nous sommes arrivés dans la partie centrale\ndu chantier naval.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Avec le temps, les installations ont été recouvertes\nde sable.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "Je vous recommande de fouiller dans le sable pour\ntrouver des indices sur le navire.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10005:0x005a0000>Mais elle s'est asséchée et s'est transformée en mer\nde sable.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10012:0x00000001>Maître, Fay au rapport. Atteignons notre objectif\navant de prendre une pause.\n\n\nAllons d'abord chercher la carte marine.")
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
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "Oh, quelle nostalgie me saisit soudain ! C'est\nici que mon navire a été construit. On était\ntellement heureux.<pause 5>.<pause 5>.")
          					flw_67:
/*< 67>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>On embarque ?\n[1-]Oui[2]Attends")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>On largue les amarres !")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Ah...")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Tu cherches les dragons ?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Je sais pas pour les autres, mais le <color blue<dragon de\nfoudre >coloroff>se trouve au sud de la <color blue<grotte de Lanelle>coloroff>.")
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
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "Prépare‐toi, petit gars ! En route pour le\n<color blue<repaire des pirates >coloroff>!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00070000>Le navire n'était pas ici ? Dommage<pause 5>.<pause 5>.<pause 5>.\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>C'est pas très attrayant, mais il nous reste à\nexplorer le repaire des pirates qui ont volé\nmon navire !\n\n<color blue<<0x10009:0x00070000>>coloroff>Allez, on embarque dès que tu es prêt !\n[1-]C'est parti[2]Attends")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "Hé ! Pas le temps de traîner, faut aller\nchercher des indices au <color blue<chantier naval >coloroff>!\n\n\n<0x10009:0x00070000>Ou alors tu veux retourner en mer ?\n[1-]Oui[2]Non")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10005:0x005a0000>Nous nous trouvons à l'emplacement d'un ancien port.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10012:0x0000000b>Maître, Fay au rapport.")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "Je détecte la présence d'insectes au‐dessus de la\nmaison.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x00000064>Par là, c'est l'effroyable, l'épouvantable repaire\ndes pirates.\n\n\nN'y va pas, c'est bien trop dangereux ! Pour\nl'instant, allons au <color blue<chantier naval>coloroff>.")
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10012:0x00000064>Hé, pas par là ! Faut que tu ailles vers <color blue<ma\nmaison >coloroff>d'abord !")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x003c0000>C'est une région technologiquement avancée, utilisant\nune énergie nouvelle. La probabilité que la <color red<flamme\nsacrée>coloroff> se trouve ici est de 90 %.\n\n<0x10005:0x001e0000>Je vous encourage à entamer vos recherches sur la\nmer de sable.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10012:0x0000000b>Maître, Fay au rapport. L'énergie du chronoglobe a\nprovoqué des changements dans notre environnement.\n\n\nJe vous recommande d'aller vous en assurer dehors.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Ça faisait un moment que j'avais pas navigué !\nÇa commence à me revenir...\n\n\n<0x10009:0x00070000>Déplace le bateau avec (ControlStick2). Si tu appuies\nsur (B) en même temps, tu iras plus vite !<0x10011:0x01cd>\n\n\nPrépare le canon avec <icon 41>, et tire avec <icon 41>\naussi !<0x10011:0x0fcd>")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "La marque (X) indique l'île où se trouve ma\nmaison !\n\n\nL'île est équipée d'un <color red<ponton>coloroff>, on accostera\nlà‐bas.")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00070000>Allez, en route, moussaillon !")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 20, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10012:0x0000000b>Maître, Fay au rapport. La probabilité de trouver\nle navire ici est de 0 %. Inutile de continuer les\nrecherches.\n\nVeuillez faire votre rapport au capitaine et quitter\ncette île.")
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
/*<277>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "Je me souviens de ce jour où nous avons été\nattaqués par les pirates... J'en fais encore des\ncauchemars. Quelle frayeur.<pause 5>.<pause 5>.")
          					flw_56:
/*< 56>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00070000>On embarque ?\n[1-]Oui[2]Attends")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 1, line: 30 */ "<0x10009:0x00070000>On largue les amarres !")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070000>Ah...")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf(/* textboxtype: 0, unk: 1, line: 28 */ "Tu cherches les dragons ?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Je sais pas pour les autres, mais le <color blue<dragon de\nfoudre >coloroff>se trouve au sud de la <color blue<grotte de Lanelle>coloroff>.")
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
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 47 */ "Allons vite trouver mon navire !")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 1, line: 46 */ "Mon navire n'était pas là non plus<pause 5>.<pause 5>.<pause 5>.\n\n\n\nTu as trouvé d'autres indices ?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Oh ? Tu peux le <color red<détecter >coloroff>? Super !\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Cette fois‐ci, c'est la bonne ! On va le trouver,\nmon bateau chéri !\n\n\n<color blue<<0x10009:0x00070000>>coloroff>On embarque ?\n[1-]Oui[2]Attends")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>On dirait qu'il y a quelque chose près du pont,\nà l'intérieur de la bouche !\n\n\nC'est peut‐être un indice concernant mon\nnavire ! Va voir, s'il te plaît !")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00070000>Ou préfères‐tu retourner en mer ?\n[1-]Oui[2]Non")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x30001:0x><heroname> ! Tu as vu ?\n\n\n\nUne bouche énorme s'est ouverte ! T'as touché\nà quelque chose ?")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<sound 4>On dirait qu'il y a quelque chose près du pont,\nà l'intérieur de la bouche !\n\n\nC'est peut‐être un indice concernant mon\nnavire ! Va voir, s'il te plaît !")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "Alors, on a peur des pirates ? T'inquiète pas,\nils sont tous morts !\n\n\nTu veux retourner en mer ?\n[1-]Oui[2]Non")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "On est arrivés !")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "Ma maison est au sommet !")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00070000>La <color yellow<<sound 4>carte marine >coloroff>se trouve dans ma maison, va\nvite la chercher !\n\n\nÇa grouille de monstres dans le coin, fais bien\nattention.\n\n\n<0x10009:0x00070000>Si je m'éloigne du bateau, je serai mis hors\ncircuit... Alors je t'attends ici !")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "On est arrivés !\n\n\n\nC'est l'île du chantier naval. Il y avait une ville,\nici, avant. Les ouvriers qui travaillaient sur le\nchantier y habitaient.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf(/* textboxtype: 0, unk: 74, line: 62 */ "Ce bâtiment là‐bas, c'est le chantier naval !")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Mais on ne peut plus y accéder, car l'entrée est\nbloquée.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00070000>On peut se déplacer sur cette île à l'aide d'un\nréseau de wagonnets.")
/*<164>*/ 	printf(/* textboxtype: 74, unk: 1, line: 61 */ "<0x10009:0x00070000>Si tu empruntes le réseau de wagonnets, tu\ntrouveras peut‐être l'entrée arrière du chantier\nnaval !")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "Il y a une zone d'embarquement là‐bas.")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00070000>Commence par t'y rendre, je t'attends ici !")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "Vers le centre‐ville")
          }

