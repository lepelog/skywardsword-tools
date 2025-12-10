          void entrypoint_402_17() {
/*< 38>*/ 	start()
/*< 39>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Ouh! C'est vraiment pas très\nrassurant<pause 5>.<pause 5>.<pause 5>. Brrrzt!\n\n\n<0x10009:0x00070000>Mais y a rien à craindre, en fin de\ncompte... Ils doivent tous être morts,\npas vrai? Vrrm?\n\n<0x10009:0x00070000>Tout le monde n'a pas la chance de se\nbalader avec un chronolithe!\n\n\n<0x10009:0x00070000>Y'a pas de quoi s'inquiéter. Vrrm?\nAllez, ouste! Pars à la recherche de\nmon navire, moussaillon!\n\n<0x10009:0x00070000>Je t'attendrai ici.")
/*< 51>*/ 	story_flags[280 /* us: 805A9AFB 0x04, jp: 805ACD7B 0x04 */] = true;
/*< 85>*/ 	scene_flags[8 'Lanayru Sand Sea'][47 /* 0x4 80 */] = true;
          }

          void entrypoint_402_51() {
/*<116>*/ 	start()
/*<121>*/ 	printf(/* textboxtype: 22, unk: 0, line: 97 */ "Vers le chantier naval")
          }

          void entrypoint_402_18() {
/*< 74>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 2, unk: 0, line: 65 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nRegardez par ici.")
/*<167>*/ 	set_camera(3, 0)
/*<148>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "La probabilité que les voiles et les mâts\nqui se trouvent ici proviennent du\nnavire protecteur de la <color red<flamme de\nNayru>coloroff> est de 60 %.")
/*<168>*/ 	set_camera(-1, 0)
/*< 75>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Initialisation de la fonction <color red<détection>coloroff>.\nCible : le navire renfermant la <color red<<sound 4>>coloroff><color red<flamme\nde Nayru>coloroff>.")
/*< 76>*/ 	story_flags[275 /* us: 805A9AF8 0x20, jp: 805ACD78 0x20 */] = true;
/*< 80>*/ 	story_flags[271 /* us: 805A9AF8 0x02, jp: 805ACD78 0x02 */] = true;
/*<279>*/ 	open_dowsing_wheel(7)
/*<278>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<149>*/ 	scene_flags[8 'Lanayru Sand Sea'][112 /* 0xF 01 */] = true;
/*<201>*/ 	story_flags[647 /* us: 805A9B1C 0x01, jp: 805ACD9C 0x01 */] = true;
          }

          void entrypoint_402_52() {
/*<117>*/ 	start()
/*<123>*/ 	printf(/* textboxtype: 8, unk: 0, line: 98 */ "Approchez‐vous,\npuis montez avec (A).")
          }

          void entrypoint_402_01() {
/*<  1>*/ 	start()
          	printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_19() {
/*< 77>*/ 	start()
/*<272>*/ 	printf(/* textboxtype: 2, unk: 0, line: 68 */ "<0x10012:0x0000000b>Maître, il semble que cette installation\na longtemps été un repaire de\nmonstres.\n\nVos chances de trouver des indices\nsur le navire dans cette zone sont\nextrêmement faibles.")
/*< 79>*/ 	story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */] = true;
/*<239>*/ 	story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          }

          void entrypoint_402_53() {
/*<118>*/ 	start()
/*<122>*/ 	printf(/* textboxtype: 8, unk: 0, line: 99 */ "Dans les virages, faites\npencher le wagonnet avec\nla manette Wii Remote.")
          }

          void entrypoint_402_70() {
/*<245>*/ 	start()
/*<250>*/ 	printf(/* textboxtype: 8, unk: 0, line: 110 */ "Merci pour tout, capitaine.\nVous êtes le meilleur! Zrrt!\nL'équipage")
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
/*<223>*/ 					printf(/* textboxtype: 1, unk: 1, line: 20 */ "Bon, ça suffit, la jasette. Vrrrm!\nT'as pas quelqu'un à retrouver, toi?\n\n\nÀ moins que tu veuilles utiliser le\nbateau pour aller quelque part?\n[1-]En mer[2-]Au galion\ndes sables[3]Non")
          					flw_263:
/*<263>*/ 					switch (choice(3)) {
          					  case 0:
/*<264>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Bon, alors on y va! Vrrrrm!")
/*<267>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<265>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070000>Brrrzt! Je te conduis à mon navire!")
/*<266>*/ 						changeScene(4, 0) // 
          					  case 2:
/*<268>*/ 						printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070000>Reviens dire bonjour à l'occasion!\nBrrzt!")
          					}
          				  case 1:
/*<281>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<280>*/ 						switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          						  case 0:
          							flw_222:
/*<222>*/ 							printf(/* textboxtype: 1, unk: 1, line: 21 */ "Salut! Zrrrt! Tu as retrouvé celle que\ntu cherchais?\n\n\nTu veux aller quelque part en bateau?\n[1-]En mer[2-]Au galion\ndes sables[3]Non")
          							goto flw_263
          						  case 1:
/*<292>*/ 							switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          							  case 0:
          								flw_282:
/*<282>*/ 								printf(/* textboxtype: 0, unk: 1, line: 22 */ "Tu cherches un dieu dragon? Brrt?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Le <color blue<dragon de foudre>coloroff> se trouve au\nsud de la <color blue<grotte de Lanelle>coloroff>! Pour\nles autres, je sais pas. Drrrzt.\n\n<0x10009:0x00070000>Au fait, tu veux aller quelque part?\n[1-]En mer[2-]Au galion[3]Je reste ici")
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
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 1, line: 8 */ "<0x10009:0x00070000>On largue les amarres, moussaillon?\nVrrrrmt!\n[1-]Vers la mer[2-]Vers le galion\ndes sables[3]Non")
/*< 28>*/ 					switch (choice(3)) {
          					  case 0:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Bon, alors on y va! Vrrrrm!")
/*< 33>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 31>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00070000>Brrrzt! Je te conduis à mon navire!")
/*< 32>*/ 						changeScene(0, 0) // 
          					  case 2:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00070000>Faut y aller! Tout de suite! Brrrzzt!")
          					}
          				  case 1:
/*<155>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00070000>On largue les amarres? Vrrrm?\n[1-]Oui[2]Attends")
/*<154>*/ 					switch (choice(2)) {
          					  case 0:
/*<151>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070000>Bon, alors on y va! Vrrrrm!")
/*<153>*/ 						changeScene(2, 0) // 
          					  case 1:
/*<152>*/ 						printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00070000>Faut y aller! Tout de suite! Brrrzzt!")
          					}
          				}
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 13 */ "Quoi donc? Bzzt? Tu as changé d'idée?\n\n\n\nTu vas m'aider à récupérer mon\nbateau? Vvooozt?\n[1-]D'accord[2]Non")
          			flw_134:
/*<134>*/ 			switch (choice(2)) {
          			  case 0:
/*< 26>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00070000>Vraiment? Vrrm? Très bien,\ndans ce cas... Bzzt!")
/*< 25>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<pause 10>.<pause 10>.<pause 10>. Dis donc, matelot, ta carte est\nvraiment bizarre! Vrrm!\n\n\n<0x10009:0x00070000>Pour naviguer correctement en mer, il\nfaut une <color yellow<carte marine >coloroff>exacte, enfin!\n\n\nJ'en ai une <color blue<chez moi>coloroff>, ça tombe bien!\nViens, on monte à bord, cap sur <color blue<ma\nmaison>coloroff>, et que ça saute! Brrrzt!")
/*< 24>*/ 				story_flags[273 /* us: 805A9AF8 0x08, jp: 805ACD78 0x08 */] = true;
          				goto flw_150
          			  case 1:
/*<133>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00070000>J'ai bien peur de ne pas pouvoir te faire\nmonter à bord, dans ce cas! Brrt.\n\n\nEt si tu ne montes pas, tu pourras aller\nnulle part! Bvvvt.")
          			}
          		}
          	  case 1:
/*< 23>*/ 		story_flags[264 /* us: 805A9AF9 0x04, jp: 805ACD79 0x04 */] = true;
/*<  3>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 10>.<pause 10>.<pause 10>. Tu es qui, toi? Bzzt? Un humain?\n\n\n\nPardon? Brrrzt? \nTu veux savoir qui je suis<pause 5>.<pause 5>.<pause 5>.?\n\n\n<0x10009:0x00070000><sound 4>Je suis <color blue<Ycéo>coloroff>, le fier capitaine du navire\nqui protège la <color red<flamme de Nayru>coloroff>! Brrt!\n[1-]La flamme\nde Nayru?[2-]Un navire?")
/*<208>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_212:
/*<212>*/ 			set_camera(13, 0)
/*<210>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<pause 10>.<pause 10>.<pause 10>.\n\n\n\nLa tempête faisait rage, ce jour‐là<pause 5>.<pause 5>.<pause 5>.\nMes matelots et moi étions en mer,\ncomme chaque jour... brrrrt...\n\nEt c'est là qu'ils nous sont tombés\ndessus<pause 5>.<pause 5>.<pause 5>. Brrt! Ces maudits pirates...\n\n\nIls voulaient la <color red<flamme de Nayru>coloroff>...\nIls ont emprisonné mes matelots,\net m'ont jeté à la mer... Vrrzzt!")
/*<213>*/ 			set_camera(14, 0)
/*<211>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00070000>J'ai fini par échouer ici<pause 5>.<pause 5>.<pause 5>. Vrrrt!")
/*<269>*/ 			set_camera(17, 0)
/*<270>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00070000>Puis, grâce à ce bateau, j'ai longtemps\nnavigué à la recherche de mes matelots\net de mon navire... Vrrrzt.")
/*<218>*/ 			set_camera(-1, 0)
/*<217>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00070000>Mais je n'ai jamais retrouvé\nmon navire.<pause 5>.<pause 5>. Brrt.\n\n\nJe gage qu'ils l'ont rendu invisible.\nVrrzt.\n[1-]Invisible?[2-]Il a disparu?")
/*<216>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_209:
/*<209>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00070000>Oui, je possède un navire destiné à\nprotéger la <color red<flamme de Nayru>coloroff>, brrt,\net qui peut se rendre invisible<pause 5>.<pause 5>.<pause 5>.\n\nQuoi? Vrrt? Tu cherches la <color red<flamme de\nNayru>coloroff>?\n\n\nElle te serait utile pour retrouver une\namie qui t'est chère<pause 5>.<pause 5>.<pause 5>.? Vrrrm?\n\n\n<0x10009:0x00070000>Dans ce cas, brrrt, il faudrait que tu\nm'aides à retrouver mon navire et\nmes matelots. Vrrrm.")
/*<214>*/ 				set_camera(15, 0)
/*<207>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Si tu es d'accord pour m'aider, vzzt,\nj'accepte que tu montes à bord de ce\nbateau.\n[1-]D'accord[2]Non")
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
/*<124>*/ 	printf(/* textboxtype: 8, unk: 0, line: 100 */ "Si vous prenez trop de vitesse,\nfreinez avec (B).")
          }

          void entrypoint_402_71() {
/*<246>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 8, unk: 0, line: 111 */ "Bon courage pour ton travail,\npapa chéri! Vrrt! Vrrt!")
          }

          void entrypoint_402_03() {
/*< 12>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_55() {
/*<145>*/ 	start()
/*<146>*/ 	printf(/* textboxtype: 8, unk: 0, line: 101 */ "Sautez par‐dessus les obstacles\nen agitant la manette Wii\nRemote vers le haut.")
          }

          void entrypoint_402_72() {
/*<254>*/ 	start()
/*<255>*/ 	printf(/* textboxtype: 22, unk: 0, line: 96 */ "Vers le ponton")
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
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Cette maison est remplie de souvenirs\nde ma famille... Vrrrm.\n\n\nEst‐ce que je pourrai un jour y vivre\nà nouveau? Ma famille me manque\ntellement.<pause 5>.<pause 5>. Vrm.")
          					flw_46:
/*< 46>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00070000>On embarque? Bzzrt?\n[1-]Oui[2]Attends")
          					flw_47:
/*< 47>*/ 					switch (choice(2)) {
          					  case 0:
/*< 49>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070000>On largue les amarres! Vrrrm!")
/*< 50>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070000>Ah... vrzt.")
          					}
          				  case 1:
/*<295>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_285:
/*<285>*/ 						printf(/* textboxtype: 0, unk: 0, line: 28 */ "Tu cherches le dieu dragon? Vrrm?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Je sais pas pour les autres, mais\nle <color blue<dragon de foudre >coloroff>se trouve au\nsud de la <color blue<grotte de Lanelle>coloroff>. Brrzt.")
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
/*< 43>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "Bien! Tu as ramené la <color yellow<carte marine>coloroff>.\nAvec ça, on va pouvoir naviguer\ncorrectement! Vrrrm!\n\nAllons chercher mon navire,\nmaintenant! Bzzrt!")
/*< 45>*/ 			story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          			goto flw_46
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Qu'est‐ce qui t'arrive? Va vite\nchercher la <color yellow<carte marine >coloroff>dans ma\nmaison! Vrrrm!\n\nOu alors tu veux retourner en mer?\n[1-]Oui[2]Non")
          		goto flw_47
          	}
          }

          void entrypoint_402_21() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 2, line: 70 */ "<0x10012:0x00000064>Tu as vu? C'était mon navire! Vrrrzzt!\n\n\n\nFeu à volonté! Brrrmt!\nÀ l'abordage!!! Zrrrrzt!")
          }

          void entrypoint_402_56() {
/*<143>*/ 	start()
/*<144>*/ 	printf(/* textboxtype: 22, unk: 0, line: 102 */ "Terminus : Chantier naval")
          }

          void entrypoint_402_05() {
/*< 19>*/ 	start()
/*< 20>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "Merci de m'avoir rendu mon navire.\nBzzrt.\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Il était en piteux état, mais mes \ncompagnons l'ont réparé dans le\ntemps de le dire! Vrrrzt!\n\n<color blue<<0x10009:0x00070000>>coloroff>J'espère que tu retrouveras celle que tu\ncherches. Bonne chance! Vrrrm!\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Tu es le bienvenu ici quand tu veux!")
/*<137>*/ 	story_flags[815 /* us: 805A9B31 0x80, jp: 805ACDB1 0x80 */] = true;
/*<219>*/ 	zone_temp_flags[1 /* 0x1 02 */] = true;
          }

          void entrypoint_402_22() {
/*< 94>*/ 	start()
/*< 97>*/ 	printf(/* textboxtype: 1, unk: 0, line: 71 */ "Jetons un œil à cette <color yellow<carte marine >coloroff>que\ntu as ramenée! Vrrm.")
/*<105>*/ 	{'type': 'type3', 'subType': 4, 'param1': 768, 'param2': 6, 'next': 192, 'param3': 30}
/*<192>*/ 	wait_frames(105)
/*<102>*/ 	story_flags[519 /* us: 805A9B15 0x01, jp: 805ACD95 0x01 */] = true;
/*<100>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "La marque (X) indique la position du\n<color blue<<color blue<<sound 4><color blue<chantier naval>coloroff>. Vrrm.")
/*<107>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 142, 'param3': 34}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00070000>Le chantier naval est un site de\nconstruction de bateaux. Vrm.\nC'est là que mon navire a été fabriqué!\n\n<0x10009:0x00070000>Tu pourrais peut‐être obtenir des\nindices sur l'endroit où se trouve mon\nnavire, là‐bas... Vrrrt.")
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00070000>Larguons les amarres! Vrrrzt!")
/*<112>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = false;
/*<113>*/ 	scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = true;
/*<259>*/ 	story_flags[496 /* us: 805A9B13 0x40, jp: 805ACD93 0x40 */] = true;
          }

          void entrypoint_402_57() {
/*<242>*/ 	start()
/*<247>*/ 	printf(/* textboxtype: 8, unk: 0, line: 103 */ "Attention, attaques pirates\nfréquentes! Zrrt!")
          }

          void entrypoint_402_23() {
/*< 95>*/ 	start()
/*<256>*/ 	switch (story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */]) {
          	  case 0:
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "Ouh, j'ai un peu peur<pause 5>.<pause 5>.<pause 5>. Brrrrzt.\n\n\n\nLe chef des pirates est un androïde très\ncostaud qui a des hordes d'acolytes\nsous ses ordres. Vrrm.\n\n<0x10009:0x00070000>Je préférerais éviter de le rencontrer\nà nouveau, mais<pause 5>.<pause 5>.<pause 5>. Vrrzt.\n\n\n<0x10009:0x00070000>Il le faut... Pour mon navire! Vrrrm!")
          		flw_106:
/*<106>*/ 		{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 0, 'next': 101, 'param3': 30}
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "La marque (X) indique la position du\n<color blue<<color blue<<sound 4><color blue<repaire des pirates>coloroff>. Vrrm.")
/*<108>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 109, 'param3': 34}
/*<109>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00070000>Bzzt! Prends ton courage à deux mains,\nmoussaillon, on largue les amarres!")
/*<103>*/ 		story_flags[520 /* us: 805A9B15 0x02, jp: 805ACD95 0x02 */] = true;
/*<114>*/ 		scene_flags[8 'Lanayru Sand Sea'][31 /* 0x2 80 */] = false;
          	  case 1:
/*<258>*/ 		printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00070000>Ah, pas de trace de mon navire au\nchantier naval<pause 5>.<pause 5>.<pause 5>. Vrrzt.\n\n\n<0x10009:0x00070000>C'est pas très attrayant, mais il nous\nreste à explorer le repaire des pirates\nqui ont volé mon navire! Bzzrt!\n\n<0x10009:0x00070000>Le chef des pirates est un androïde très\ncostaud, qui a des tonnes d'acolytes\nsous ses ordres. Vrrt.\n\n<0x10009:0x00070000>Je préfèrerais éviter de le revoir, vzt,\nmais<pause 5>.<pause 5>.<pause 5>. \n\n\n<0x10009:0x00070000>Si on veut retrouver mon navire,\non a pas le choix! Vvrrt!")
/*<257>*/ 		story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
          		goto flw_106
          	}
          }

          void entrypoint_402_40() {
/*<169>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 2, unk: 0, line: 79 */ "<0x10012:0x00000001>Maître, regardez par ici.")
/*<178>*/ 	set_camera(8, 0)
/*<171>*/ 	printf(/* textboxtype: 2, unk: 0, line: 80 */ "On appelle ceci un <color yellow<<sound 4>>coloroff><color yellow<chronoglobe>coloroff>.\n\n\n\nSa forme est différente de celle des\nchronolithes, et il est conçu pour être\ntransporté.")
/*<179>*/ 	set_camera(-1, 0)
          }

          void entrypoint_402_58() {
/*<243>*/ 	start()
/*<248>*/ 	printf(/* textboxtype: 8, unk: 0, line: 104 */ "Réparation mensuelle des\nrails en cours.\nSuspension des transports.\nExcusez du dérangement!")
          }

          void entrypoint_402_24() {
/*< 96>*/ 	start()
/*<261>*/ 	switch (story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */]) {
          	  case 0:
          		flw_99:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00070000>La mer est si vaste, tu penses vraiment\npouvoir le trouver? Vrrrm?\n\n\n<0x10009:0x00070000>Je te fais confiance! Brrzt.\nJe compte sur toi!\n\n\n<0x10009:0x00070000>Le navire est sûrement invisible... mais\nil apparaîtra s'il <sound 4><color green<encaisse un choc>coloroff>! Vrm!")
/*<104>*/ 		story_flags[521 /* us: 805A9B15 0x04, jp: 805ACD95 0x04 */] = true;
/*<260>*/ 		story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          	  case 1:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "Mon navire n'était pas non plus dans le\nrepaire des pirates, alors<pause 5>.<pause 5>.<pause 5>. Vrrrm...\n\n\nTu as trouvé des indices? Brrzt?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Vrrm? Tu peux <color red<détecter >coloroff>mon navire?\nYoho, quelle bonne nouvelle!")
          		goto flw_99
          	}
          }

          void entrypoint_402_41() {
/*<172>*/ 	start()
/*<173>*/ 	printf(/* textboxtype: 2, unk: 0, line: 82 */ "<0x10012:0x00000001>Maître, c'est la <color yellow<carte marine >coloroff>du\ncapitaine.\nRapportons‐la jusqu'au bateau.\n\nRegardez par ici, <0x10012:0x00000001>Maître.")
/*<176>*/ 	set_camera(9, 0)
/*<174>*/ 	printf(/* textboxtype: 2, unk: 0, line: 83 */ "Ce navire est celui qui protège la\nflamme de Nayru. La probabilité que\nces formes soient les membres de \nl'équipage est de 90 %. ")
/*<177>*/ 	set_camera(-1, 0)
/*<175>*/ 	printf(/* textboxtype: 2, unk: 0, line: 84 */ "Je suppose que le capitaine y a passé\ndes jours heureux, entouré de son\néquipage.")
/*<237>*/ 	story_flags[738 /* us: 805A9B26 0x04, jp: 805ACDA6 0x04 */] = true;
/*<238>*/ 	story_flags[739 /* us: 805A9B26 0x08, jp: 805ACDA6 0x08 */] = true;
          }

          void entrypoint_402_59() {
/*<244>*/ 	start()
/*<249>*/ 	printf(/* textboxtype: 8, unk: 0, line: 105 */ "J'espère que les plans de mon\nnavire seront bientôt prêts...")
          }

          void entrypoint_402_42() {
/*<180>*/ 	start()
/*<181>*/ 	printf(/* textboxtype: 2, unk: 0, line: 85 */ "<0x10012:0x00000001>Maître, regardez par ici.")
/*<190>*/ 	set_camera(10, 0)
/*<186>*/ 	printf(/* textboxtype: 2, unk: 0, line: 86 */ "Il n'y a pas de <color yellow<chronolithe >coloroff>sur ce socle,\nmais...\n\n\n... la probabilité qu'il s'agisse d'une\ninstallation similaire à celle des\n<color blue<mines de Lanelle>coloroff> est de 95 %.")
/*<191>*/ 	set_camera(-1, 0)
/*<187>*/ 	printf(/* textboxtype: 2, unk: 0, line: 87 */ "J'émets l'hypothèse que des\n<color yellow<<color yellow<<sound 4><color yellow<chronolithes >coloroff>étaient utilisés ici comme\nsource d'alimentation.")
          }

          void entrypoint_402_25() {
/*<252>*/ 	start()
/*<253>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_09() {
/*<  4>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_60() {
/*<125>*/ 	start()
/*<128>*/ 	printf(/* textboxtype: 2, unk: 0, line: 106 */ "<0x10005:0x000f0000><0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\n<0x10005:0x003c0000>Voici la <color blue<mer de sable de Lanelle>coloroff>.\nAutrefois, l'eau s'y étendait à perte\nde vue.")
          }

          void entrypoint_402_43() {
/*<182>*/ 	start()
/*<183>*/ 	printf(/* textboxtype: 2, unk: 0, line: 88 */ "<0x10012:0x00000001>Maître, nous sommes arrivés dans la\npartie centrale du chantier naval.")
/*<188>*/ 	set_camera(11, 0)
/*<184>*/ 	printf(/* textboxtype: 2, unk: 0, line: 89 */ "Avec le temps, les installations ont été\nrecouvertes de sable.")
/*<189>*/ 	set_camera(-1, 0)
/*<185>*/ 	printf(/* textboxtype: 2, unk: 0, line: 90 */ "Je vous recommande de fouiller dans\nle sable pour trouver des indices sur\nle navire.")
          }

          void entrypoint_402_61() {
/*<126>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10005:0x005a0000>Mais elle s'est asséchée et s'est\ntransformée en mer de sable.")
          }

          void entrypoint_402_44() {
/*<224>*/ 	start()
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	set_camera(-1, 0)
/*<229>*/ 	printf(/* textboxtype: 2, unk: 0, line: 91 */ "<0x10012:0x00000001>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nAtteignons notre objectif avant de\nprendre une pause.\nAllons d'abord chercher la carte\nmarine.")
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
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "Oh, quelle nostalgie me saisit soudain!\nC'est ici que mon navire a été construit.\nOn était tellement heureux.<pause 5>.<pause 5>. Vrrrm...")
          					flw_67:
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00070000>On embarque? Bzzrt?\n[1-]Oui[2]Attends")
          					flw_68:
/*< 68>*/ 					switch (choice(2)) {
          					  case 0:
/*< 70>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070000>On largue les amarres! Vrrrm!")
/*< 71>*/ 						changeScene(2, 0) // 
          					  case 1:
/*< 69>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070000>Ah... vrzt.")
          					}
          				  case 1:
/*<301>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_288:
/*<288>*/ 						printf(/* textboxtype: 0, unk: 0, line: 28 */ "Tu cherches le dieu dragon? Vrrm?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Je sais pas pour les autres, mais\nle <color blue<dragon de foudre >coloroff>se trouve au\nsud de la <color blue<grotte de Lanelle>coloroff>. Brrzt.")
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
/*< 73>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "Prépare‐toi, petit gars! Brrzt!\nEn route pour le <color blue<repaire des pirates>coloroff>!")
          				goto flw_67
          			  case 1:
/*< 66>*/ 				story_flags[497 /* us: 805A9B13 0x80, jp: 805ACD93 0x80 */] = true;
/*< 72>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00070000>Le navire n'était pas ici? Bzzrt?\nDommage<pause 5>.<pause 5>.<pause 5>.\n\n\n<color blue<<0x10009:0x00070000>>coloroff>C'est pas très attrayant, mais il nous\nreste à explorer le repaire des pirates\nqui ont volé mon navire! Brrzrt!\n\n<color blue<<0x10009:0x00070000>>coloroff>On embarque dès que tu es prêt! Bzzt!\n[1-]C'est parti[2]Attends")
          				goto flw_68
          			}
          		}
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Brzt! Pas le temps de traîner, faut aller\nchercher des indices au <color blue<chantier naval>coloroff>!\n\n\n<0x10009:0x00070000>Ou bien tu veux retourner en mer?\n[1-]Oui[2]Non")
          		goto flw_68
          	}
          }

          void entrypoint_402_62() {
/*<127>*/ 	start()
/*<130>*/ 	printf(/* textboxtype: 2, unk: 0, line: 108 */ "<0x10005:0x005a0000>Nous nous trouvons à l'emplacement\nd'un ancien port.")
          }

          void entrypoint_402_45() {
/*<225>*/ 	start()
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 226, 'param3': 51}
/*<226>*/ 	printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :")
/*<228>*/ 	set_camera(16, 0)
/*<227>*/ 	printf(/* textboxtype: 2, unk: 0, line: 93 */ "Je détecte la présence d'insectes\nau‐dessus de la maison.")
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 236, 'param3': 36}
/*<236>*/ 	story_flags[740 /* us: 805A9B26 0x10, jp: 805ACDA6 0x10 */] = true;
          }

          void entrypoint_402_11() {
/*<  7>*/ 	start()
/*< 91>*/ 	switch (story_flags[269 /* us: 805A9AF9 0x80, jp: 805ACD79 0x80 */]) {
          	  case 0:
/*< 90>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10012:0x00000064>Par là, c'est l'effroyable, vrt,\nl'épouvantable repaire des pirates.\n\n\nN'y va pas, c'est bien trop dangereux!\nPour l'instant, allons au <color blue<chantier naval>coloroff>.")
          	  case 1:
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10012:0x00000064>Hé, pas par là! Brrzz! Faut que tu\nailles vers <color blue<ma maison >coloroff>d'abord!")
          	}
          }

          void entrypoint_402_63() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 2, unk: 0, line: 109 */ "<0x10005:0x003c0000>C'est une région technologiquement\navancée, utilisant une énergie nouvelle.\nLa probabilité que la <color red<flamme sacrée>coloroff> se\ntrouve ici est de 90 %.\n<0x10005:0x001e0000>Je vous encourage à entamer vos\nrecherches sur la mer de sable.")
          }

          void entrypoint_402_46() {
/*<240>*/ 	start()
/*<241>*/ 	printf(/* textboxtype: 2, unk: 0, line: 94 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nL'énergie du chronoglobe a provoqué\ndes changements dans notre\nenvironnement.\n\nJe vous recommande d'aller vous en\nassurer dehors.")
          }

          void entrypoint_402_12() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "Ça faisait un moment que j'avais pas\nnavigué! Ça commence à me revenir...\nVrrrrzt!\n\n<0x10009:0x00070000>Déplace le bateau avec (ControlStick2). Vrrrm. Si tu\nappuies sur (A) en même temps, tu iras\nplus vite!\n\nPrépare le canon avec (B), et tire\navec (A)!<0x10011:0x01cd> Brrrm!")
/*< 87>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 136, 'param3': 30}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 2, line: 44 */ "La marque (X) indique l'île où se\ntrouve ma maison! Vrrm.\n\n\nL'île est équipée d'un <color red<ponton>coloroff>, on\naccostera là‐bas. Brrzt.")
/*< 89>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 88, 'param3': 34}
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00070000>Bon, en route, moussaillon! Vrrrrm!")
/*< 83>*/ 	story_flags[499 /* us: 805A9B12 0x02, jp: 805ACD92 0x02 */] = true;
/*<111>*/ 	scene_flags[8 'Lanayru Sand Sea'][30 /* 0x2 40 */] = true;
          }

          void entrypoint_402_13() {
/*< 16>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ ".<pause 5>.<pause 5>.")
          }

          void entrypoint_402_30() {
/*<271>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 2, unk: 0, line: 67 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nLa probabilité de trouver le navire\nici est de 0 %. Inutile de continuer\nles recherches.\n\nVeuillez faire votre rapport au\ncapitaine et quitter cette île.")
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
/*<277>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "Je me souviens de ce jour où nous avons\nété attaqués par les pirates... J'en fais\nencore des cauchemars. Brrrzt!\nQuelle frayeur.<pause 5>.<pause 5>.")
          					flw_56:
/*< 56>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00070000>On embarque? Bzzrt?\n[1-]Oui[2]Attends")
          					flw_57:
/*< 57>*/ 					switch (choice(2)) {
          					  case 0:
/*< 59>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00070000>On largue les amarres! Vrrrm!")
/*< 60>*/ 						changeScene(0, 0) // 
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070000>Ah... vrzt.")
          					}
          				  case 1:
/*<298>*/ 					switch (story_flags[848 /* us: 805A9B35 0x40, jp: 805ACDB5 0x40 */]) {
          					  case 0:
          						flw_291:
/*<291>*/ 						printf(/* textboxtype: 0, unk: 0, line: 28 */ "Tu cherches le dieu dragon? Vrrm?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Je sais pas pour les autres, mais\nle <color blue<dragon de foudre >coloroff>se trouve au\nsud de la <color blue<grotte de Lanelle>coloroff>. Brrzt.")
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
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 47 */ "Allons vite trouver mon navire! Vrrrzt!")
          				goto flw_56
          			  case 1:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 46 */ "Mon navire n'était pas là non plus<pause 5>.<pause 5>.<pause 5>.\nBrrrzt!\n\n\nTu as trouvé d'autres indices? Vrrrrm?\n\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Oh? Tu peux le <color red<détecter>coloroff>? Bzzrt?\nSuper!\n\n\n<color blue<<0x10009:0x00070000>>coloroff>Cette fois‐ci, c'est la bonne!\nOn va le trouver, mon bateau chéri!\n\n\n<color blue<<0x10009:0x00070000>>coloroff>On embarque?\n[1-]Oui[2]Attends")
/*< 55>*/ 				story_flags[498 /* us: 805A9B12 0x01, jp: 805ACD92 0x01 */] = true;
          				goto flw_57
          			}
          		}
          	  case 1:
/*<193>*/ 		switch (scene_flags[76 /* 0x8 10 */]) {
          		  case 0:
/*<198>*/ 			switch (scene_flags[88 /* 0xA 01 */]) {
          			  case 0:
/*<197>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<sound 4>On dirait qu'il y a quelque chose\nprès du pont, à l'intérieur de la\nbouche! Brrzt!\n\nC'est peut‐être un indice concernant \nmon navire! Brrzt! Va voir, s'il te plaît!")
/*<202>*/ 				scene_flags[-1 'Skyloft: Silent Realm'][88 /* 0xA 01 */] = true;
          				flw_194:
/*<194>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00070000>Ou préfères‐tu retourner en mer?\n[1-]Oui[2]Non")
          				goto flw_57
          			  case 1:
/*<196>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x30001:0x><heroname>!\nTu as vu? Vrrrzt!\n\n\nUne bouche énorme s'est ouverte!\nT'as touché à quelque chose? Vrrm?")
/*<205>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 199, 'param3': 54}
/*<199>*/ 				set_camera(12, 0)
/*<195>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<sound 4>On dirait qu'il y a quelque chose\nprès du pont, à l'intérieur de la\nbouche! Brrzt!\n\nC'est peut‐être un indice concernant \nmon navire! Brrzt! Va voir, s'il te plaît!")
/*<206>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 54}
/*<200>*/ 				set_camera(-1, 0)
          				goto flw_194
          			}
          		  case 1:
/*< 61>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "Tiens... On a peur des pirates? Brrzt?\nY'a pas de peur à avoir, zzrt, ils sont\ntous morts!\n\nTu veux retourner en mer? Vrrm?\n[1-]Oui[2]Non")
          			goto flw_57
          		}
          	}
          }

          void entrypoint_402_15() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "On est arrivés! Brrzt!")
/*<158>*/ 	set_camera(1, 0)
/*<156>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "Ma maison est au sommet! Vrrm!")
/*<159>*/ 	set_camera(2, 0)
/*<157>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00070000>La <color yellow<<sound 4>>coloroff><color yellow<carte marine >coloroff>se trouve dans ma\nmaison, va vite la chercher! Brrzt!\n\n\nÇa grouille de monstres dans le coin,\nfais bien attention. Vrrzrt!\n\n\n<0x10009:0x00070000>Si je m'éloigne du bateau, je serai mis\nhors circuit... Alors je t'attends ici! Bz.")
/*< 40>*/ 	story_flags[278 /* us: 805A9AFB 0x01, jp: 805ACD7B 0x01 */] = true;
/*< 84>*/ 	scene_flags[8 'Lanayru Sand Sea'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_402_16() {
/*< 36>*/ 	start()
/*< 37>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "On est arrivés! Vrrzzt!\n\n\n\nC'est l'île du chantier naval. Il y avait\nune ville, ici, avant. Les ouvriers qui\ntravaillaient sur le chantier y\nhabitaient. Vrrrrm.")
/*<160>*/ 	set_camera(4, 0)
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "Ce bâtiment là‐bas, c'est le chantier\nnaval! Vrrm!")
/*<166>*/ 	set_camera(5, 0)
/*<138>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "Mais on ne peut plus y accéder, car\nl'entrée est bloquée. Brrtzt.")
/*<162>*/ 	set_camera(6, 0)
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00070000>On peut se déplacer sur cette île à\nl'aide d'un réseau de wagonnets. Bz.")
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00070000>Vrrm. Si tu empruntes le réseau de\nwagonnets, tu trouveras peut‐être\nl'entrée arrière du chantier naval!")
/*<203>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 161, 'param3': 54}
/*<161>*/ 	set_camera(7, 0)
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "Il y a une zone d'embarquement là‐bas.\nVrrrm.")
/*<204>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 163, 'param3': 54}
/*<163>*/ 	set_camera(6, 0)
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00070000>Commence par t'y rendre,\nje t'attends ici! Brrrzt.")
/*< 52>*/ 	story_flags[279 /* us: 805A9AFB 0x02, jp: 805ACD7B 0x02 */] = true;
/*< 86>*/ 	scene_flags[8 'Lanayru Sand Sea'][46 /* 0x4 40 */] = true;
          }

          void entrypoint_402_50() {
/*<115>*/ 	start()
/*<120>*/ 	printf(/* textboxtype: 22, unk: 0, line: 95 */ "Vers le centre‐ville")
          }

