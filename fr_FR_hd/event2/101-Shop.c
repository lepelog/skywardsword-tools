          void entrypoint_101_30() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("")
          }

          void entrypoint_101_31() {
/*< 26>*/ 	start()
/*< 64>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 	check_item_flag(19, 1)
/*< 25>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 6}) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x00\x02<y<10 flèches>> ? Une aubaine digne d'un grand\nguerrier ! On voit tout de suite que tu es un\nconnaisseur.\n\nMais attention à ne blesser personne, haha !\n<r<20 rubis>> et elles sont à toi.\n\n\n[1]J'achète[2-]Non merci")
/*< 21>*/ 		switch (choice(2)) {
          		  case 0:
/*< 23>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 22>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 27>*/ 		printf("Toutes mes excuses, plates et sincères, mais je ne\npeux pas vendre de flèches à qui n'a pas d'arc !")
          	}
          }

          void entrypoint_101_32() {
/*< 36>*/ 	start()
/*< 65>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 32, 'param3': 12}
/*< 32>*/ 	check_item_flag(92, 1)
/*< 31>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          	  case 0:
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x00\x02Intéressé par ces <y<10 bombes>> ? Prends\x2010les donc,\net tu exploseras de joie !\n\n\nElles sont si pratiques pour faire sauter toutes\nsortes de choses, comme les murs par exemple !\n\n\nTout cela pour la modique somme de <r<20 rubis>>.\nTentant, non ?\n[1]J'achète[2-]Non merci")
          		flw_33:
/*< 33>*/ 		switch (choice(2)) {
          		  case 0:
/*< 35>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 34>*/ 			entrypoint_101_08();
          		}
          	  case 1:
/*< 38>*/ 		printf("Toutes mes excuses, plates et sincères, mais je ne\npeux pas vendre de bombes à qui n'a pas de sac\npour les ranger...\n\nJ'en suis fort marri, si marri...")
          	}
          }

          void entrypoint_101_33() {
/*< 46>*/ 	start()
/*< 66>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 47, 'param3': 12}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ah, je vois que ce <y<bouclier en bois >>t'intéresse !\nTu peux te protéger des attaques grâce à lui !\n\n\nMais il<r< peut se casser >>s'il encaisse trop\nd'attaques, alors fais bien attention !\n\n\nIl est aussi très vulnérable au feu, sache\x2010le.\n\n\n\n<r<50 rubis>> et il est à toi.\n[1]J'achète[2-]Non merci")
/*<125>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_34() {
/*< 48>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 50, 'param3': 12}
/*< 50>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ah, je vois que ce <y<bouclier en fer >>t'intéresse !\nIl est plus résistant que le bouclier en bois,\nc'est certain !\n\nDe plus, il ne craint pas le feu ! Mais en\nrevanche, il est sensible à l'électricité.\n\n\n<r<100 rubis>> et il est à toi.\n[1]J'achète[2-]Non merci")
/*<126>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_35() {
/*< 49>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 51, 'param3': 12}
/*< 51>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ah, je vois que ce <y<bouclier sacré >>a éveillé ta\ncuriosité... Il porte bien son nom, il résiste\nà tout !\n\nS'il subit de légers dégâts, il peut se réparer\ntout seul et il protège aussi bien du feu que\nde l'électricité. Ce bouclier est totalement\nmulti\x2010usage !\nPar contre\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í il a un tout petit défaut de rien\ndu tout... Il se brise facilement. Mais pour\nune fine lame comme toi, ce n'est pas un\nproblème, hein ?\nC'est <r<500 rubis>>. C'est certes un peu cher, mais\ntu aurais tort de te priver !\n[1]J'achète[2-]Non merci")
/*<127>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
          	goto flw_33
          }

          void entrypoint_101_01() {
          	start()
/*< 40>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("\x0E\x01\x09\x04\x00\x01Que puis\x2010je donc faire pour toi, admirable jeune\nhomme ?\n[1]Explique\x2010moi[2-]Non, rien")
          		flw_1:
/*<  1>*/ 		switch (choice(2)) {
          		  case 0:
/*<  4>*/ 			printf("Très bien, je vais donc tout t'expliquer, de A à\nZ, absolument tout. Oui, tout. Rien que pour toi.\n\n\nSi tu veux bien, mets\x2010toi en face d'un produit\net appuie généreusement sur (A).\n\n\nTu pourras le contempler à loisir, autant que\ntu le désires !\n\n\nEt tu peux acheter tous les articles que tu\naimes ! N'est\x2010ce pas merveilleux ?")
/*<139>*/ 			switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          			  case 0:
/*<138>*/ 				printf("De plus, tu pourras emmener certains de mes\narticles à l'atelier de rénovation pour les faire\naméliorer.\n\nLa durabilité des boucliers peut par exemple\nêtre augmentée pour une utilisation prolongée !")
/*<140>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
          			  case 1:
          			}
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x07Oh, je vois, tu es si intelligent, si avisé, que je\nn'ai même pas besoin de te renseigner !\n\n\nRegarde donc mes merveilleux articles.")
/*< 39>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 97>*/ 		switch (story_flags[1114 /* us: 805A9B57 0x01, jp: 805ACDD7 0x01 */]) {
          		  case 0:
/*<102>*/ 			switch (scene_flags[123 /* 0xE 08 */]) {
          			  case 0:
          				goto flw_41
          			  case 1:
/*<109>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 110, 'param3': 31}
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui ! Rien que pour\ntoi !\n\n\nL'accessoire indispensable de tout archer qui se\nrespecte, le <y<petit carquois >>!\n\n\nRegarde\x2010moi ça !")
/*<111>*/ 				zone_temp_flags[1 /* 0x1 02 */] = true;
/*<115>*/ 				scene_flags[0 'Skyloft'][123 /* 0xE 08 */] = true;
          			}
          		  case 1:
/*< 98>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
/*<101>*/ 				switch (scene_flags[122 /* 0xE 04 */]) {
          				  case 0:
          					goto flw_41
          				  case 1:
/*<106>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 107, 'param3': 31}
/*<107>*/ 					printf("\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui ! Rien que pour\ntoi !\n\n\nLe mystérieux, l'incomparable <y<bouclier sacré\n>>est actuellement disponible à la vente !\n\n\nContemple\x2010le, oh oui, contemple !")
/*<108>*/ 					zone_temp_flags[1 /* 0x1 02 */] = true;
/*<114>*/ 					scene_flags[0 'Skyloft'][122 /* 0xE 04 */] = true;
          				}
          			  case 1:
/*< 96>*/ 				switch (story_flags[1115 /* us: 805A9B57 0x02, jp: 805ACDD7 0x02 */]) {
          				  case 0:
/*<100>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
          						goto flw_41
          					  case 1:
/*<103>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 104, 'param3': 31}
/*<104>*/ 						printf("\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui ! Rien que pour\ntoi !\n\n\nObserve bien la qualité de ce <y<petit sac de\nbombes>>, un pur joyau !")
/*<105>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
/*<113>*/ 						scene_flags[0 'Skyloft'][121 /* 0xE 02 */] = true;
          					}
          				  case 1:
/*< 92>*/ 					switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          					  case 0:
/*< 99>*/ 						switch (scene_flags[120 /* 0xE 01 */]) {
          						  case 0:
          							goto flw_41
          						  case 1:
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*< 94>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aujourd'hui, je dispose de tout <r<nouveaux\narticles >>!\n\n\nQue dis\x2010tu de ce superbe <y<bouclier en fer >>?")
          								flw_95:
/*< 95>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<112>*/ 								scene_flags[0 'Skyloft'][120 /* 0xE 01 */] = true;
          							  case 1:
/*<124>*/ 								printf("\x0E\x01\x09\x04\x00\x01Aujourd'hui, je dispose de tout <r<nouveaux\narticles >>!\n\n\nCe merveilleux, hem, <y<bouclier en fer>>, et aussi\nce <y<petit sac de graines >>!\n\n\nRegarde donc !")
          								goto flw_95
          							}
          						}
          					  case 1:
/*<117>*/ 						switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          						  case 0:
/*<118>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
          								goto flw_41
          							  case 1:
/*<119>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 								printf("\x0E\x01\x09\x04\x00\x01<r<Nouvel arrivage>> aujourd'hui ! Rien que pour\ntoi !\n\n\nRegarde ce <y<petit sac de graines>>.\n\n\n\nPour tous ceux qui possèdent un lance\x2010pierre,\nc'est complètement génial !")
/*<120>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
/*<121>*/ 								scene_flags[0 'Skyloft'][124 /* 0xE 10 */] = true;
          							}
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x01Aha, un client ! Mais quel bonheur ! Approche,\napproche, ne sois pas timide !\n\n\nBienvenue à l'armurerie ! J'ai tout ce qu'il te\nfaut.\n\n\nPrends tout ton temps pour regarder mes\nsuperbes articles, et fais\x2010moi signe si quelque\nchose t'intéresse.\n\nC'est la boutique favorite de tous les\nchevaliers !\n\n\nEt n'hésite pas si tu as la moindre question,\nje suis là pour toi.\n[1]OK[2-]Pas\nbesoin\x0E\x01\x07\x04\x00\x00")
          							goto flw_1
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_101_36() {
/*< 54>*/ 	start()
/*< 69>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 53, 'param3': 12}
/*< 53>*/ 	check_item_flag(52, 1)
/*< 52>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          	  case 0:
/*< 55>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ah, tu admires ces <y<10 graines mojo>> ? Les\nprojectiles parfaits pour un professionnel\ndu lance\x2010pierre tel que toi !\n\n<r<20 rubis >>et elles sont à toi.\n\n\n\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 56>*/ 		printf("Je suis au regret de constater que tu n'as pas\nde lance\x2010pierre, donc je ne peux te vendre cet\narticle...\n\nMais tu trouveras ton bonheur parmi mes\nautres articles, j'en suis sûr ! Encore désolé,\ntoutes mes excuses !")
          	}
          }

          void entrypoint_101_02() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("")
          }

          void entrypoint_101_37() {
/*< 71>*/ 	start()
/*< 72>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 141, 'param3': 12}
/*<141>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	check_item_flag(52, 1)
/*< 80>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 20}) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x09\x04\x00\x02Voilà un <y<petit sac de graines >>! Avec cela, tu\npeux stocker 10 graines mojo supplémentaires.\n\n\nL'accessoire indispensable à tous les adeptes\ndu lance\x2010pierre !\n\n\nIl coûte <r<100 rubis>>. Presque rien, en somme !\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 82>*/ 		printf("Je suis au regret de constater que tu n'as pas\nde lance\x2010pierre, donc je ne peux te vendre cet\narticle...\n\nMais tu trouveras ton bonheur parmi mes\nautres articles, j'en suis sûr ! Encore désolé,\ntoutes mes excuses !")
          	}
          }

          void entrypoint_101_03() {
/*<  7>*/ 	start()
/*<  8>*/ 	switch (random(2)) {
          	  case 0:
/*<  9>*/ 		printf("")
          	  case 1:
/*< 10>*/ 		printf("")
          	}
          }

          void entrypoint_101_38() {
/*< 74>*/ 	start()
/*< 75>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 83>*/ 	check_item_flag(19, 1)
/*< 84>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 22}) {
          	  case 0:
/*< 76>*/ 		printf("\x0E\x01\x09\x04\x00\x02Voilà un <y<petit carquois >>! Tu peux y stocker\n5 flèches supplémentaires.\n\n\nL'accessoire indispensable à tous les archers\nqui souhaitent pouvoir tirer à gogo !\n\n\nIl coûte <r<150 rubis>>. Presque rien, en somme !\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 85>*/ 		printf("Toutes mes excuses, plates et sincères, mais je ne\npeux pas vendre de flèches à qui n'a pas d'arc !")
          	}
          }

          void entrypoint_101_04() {
/*< 13>*/ 	start()
/*< 62>*/ 	check_item_flag(112, 1)
/*< 63>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 18}) {
          	  case 0:
/*< 14>*/ 		printf("Je suis sincèrement et profondément désolé,\nvraiment...\n\n\nMais ta sacoche est pleine... Tu devrais aller\ndéposer des objets à la consigne.")
/*<128>*/ 		zone_temp_flags[5 /* 0x1 20 */] = false;
          	  case 1:
          	}
          }

          void entrypoint_101_39() {
/*< 77>*/ 	start()
/*< 78>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 143, 'param3': 12}
/*<143>*/ 	zone_temp_flags[5 /* 0x1 20 */] = true;
/*< 87>*/ 	check_item_flag(92, 1)
/*< 86>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x00\x02Voilà un <y<petit sac de bombes >>! Tu peux y\nstocker 5 bombes supplémentaires.\n\n\nL'accessoire indispensable pour satisfaire\ntoutes tes pulsions destructrices !\n\n\nIl coûte <r<150 rubis>>. Un investissement de choix !\n[1]J'achète[2-]Non merci")
          		goto flw_33
          	  case 1:
/*< 88>*/ 		printf("Toutes mes excuses, plates et sincères, mais je ne\npeux pas vendre de bombes à qui n'a pas de sac\npour les ranger...\n\nJ'en suis fort marri, si marri...")
          	}
          }

          void entrypoint_101_05() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("Oh, c'est très triste, mais...\n\n\n\nTu ne peux pas porter davantage de ces objets.\nAchète donc quelque chose d'autre !")
/*<129>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_06() {
/*< 17>*/ 	start()
/*< 59>*/ 	make_actor_do_something(1, 0)
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00\x08Mais que...\x0E\x01\x05\x04\n\x00")
/*< 60>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 61, 'param3': 22}
/*< 61>*/ 	printf("Quel petit plaisantin tu fais ! Tu n'as pas assez\nde rubis pour acheter ceci, voyons ! Haha !")
/*<130>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

          void entrypoint_101_07() {
/*< 19>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 512, 'next': 43, 'param3': 22}
/*< 43>*/ 	switch (random(2)) {
          	  case 0:
/*< 20>*/ 		printf("\x0E\x01\x09\x04\x00\x07Je ne remercie jamais assez mes clients.\nMerci, merci.")
          		flw_144:
/*<144>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*< 90>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
/*<132>*/ 				switch (story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */]) {
          				  case 0:
          					flw_70:
/*< 70>*/ 					printf("Et un objet de plus dans ta sacoche, un !\nPour l'<r<équiper>>, appuie sur <g<\x0E\x02\x04\x02\x28CD >>et sélectionne\x2010le\nparmi tes objets.\x0E\x01\x11\x02\xECD")
          					flw_137:
/*<137>*/ 					zone_temp_flags[5 /* 0x1 20 */] = false;
          				  case 1:
/*<134>*/ 					switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          					  case 0:
/*<135>*/ 						printf("Si <r<ton bouclier est endommagé>>, je te conseille\nd'aller faire un tour chez Dorco, à l'<r<atelier de\nrénovation>>.\n\nSi tu lui fournis des trésors, il pourra améliorer\nton bouclier et des tas d'autres objets.")
/*<133>*/ 						story_flags[809 /* us: 805A9B31 0x02, jp: 805ACDB1 0x02 */] = true;
          						goto flw_137
          					  case 1:
          						goto flw_70
          					}
          				}
          			  case 1:
/*< 89>*/ 				printf("Et un objet de plus dans ta sacoche, un !\nPour y choisir un objet, maintiens \x0E\x02\x04\x02\x28CD enfoncé...\n\x0E\x01\x11\x02\xECD\n\n... et une fois l'objet souhaité sélectionné,\n<g<relâche >>\x0E\x02\x04\x02\x28CD pour pouvoir l'utiliser.\x0E\x01\x11\x02\xECD\n\n\nEt ça vaut aussi pour les boucliers !")
/*< 91>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<116>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
/*<136>*/ 				zone_temp_flags[5 /* 0x1 20 */] = false;
          			}
          		  case 1:
          		}
          	  case 1:
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x07Aaah... C'est toujours une joie de faire affaire\navec toi !")
          		goto flw_144
          	}
          }

          void entrypoint_101_08() {
/*< 29>*/ 	start()
/*< 44>*/ 	make_actor_do_something(1, 0)
/*< 58>*/ 	printf("\x0E\x01\x09\x04\x00\x08...\x0E\x01\x05\x04\x0F\x00")
/*< 45>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 512, 'next': 30, 'param3': 22}
/*< 30>*/ 	printf("Aucun problème ! J'ai de nombreux autres\narticles en rayon, prends ton temps !")
/*<131>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
          }

