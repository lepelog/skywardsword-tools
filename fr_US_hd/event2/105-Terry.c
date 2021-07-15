          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("Ça, c'est une <y<médaille de vie>>. Si tu la portes,\nelle aura un effet vraiment mystérieux sur toi!\n\n\nSon pouvoir<pause0A>.<pause0A>.<pause0A>.<pause0A>? Euh... j'sais pas trop! Tu le\ndécouvriras tout seul!\n\n\nUne super aubaine : <r<800 rubis>>! Qu'est-ce que\nt'en dis?\n[1]J'achète[2-]Non merci")
          		flw_13:
/*< 13>*/ 		switch (choice(2)) {
          		  case 0:
/*< 15>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 26}
          		  case 1:
/*< 14>*/ 			entrypoint_105_08();
          		}
          	  case 1:
/*< 83>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 86>*/ 			printf("Ça, c'est une <y<médaille de vie>>. Si tu la portes,\nelle aura un effet vraiment mystérieux sur toi!\n\n\nSon pouvoir<pause0A>.<pause0A>.<pause0A>.<pause0A>? Euh... j'sais pas trop! Tu le\ndécouvriras tout seul!\n\n\nUne super aubaine : <r<400 rubis>>! D'habitude\nc'est <r<800>>! Qu'est-ce que t'en dis quoi?\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_41
          		}
          	}
          }

          void entrypoint_105_01() {
          	start()
/*< 64>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 66>*/ 		switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          		  case 0:
/*<168>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 67, 'param3': 13}
/*< 67>*/ 			printf("Oooooh! Aaaaah! Bienv'nue à la boutique de\nBeedle! Content d'te revoir, m'sieur client!\nChoisis donc l'article de tes désirs!")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf("M'sieur client, c'est toi, mon héros! Vraiment!\nCelui qui a retrouvé mon <b<Golofa Demonicus\nRex>>!\n\nJ'te dois une fière chandelle, alors choisis un\nobjet sur l'étalage et j'te l'offre, euh, à moitié\nprix!")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf("Aaaaah! Bienv'nue à la boutique de Beedle,\nm'sieur client!\n\n\nHein, qu'est-ce que tu dis? Tu as trouvé mon...\nEuh... Bon, c'est pas vraiment l'moment de\nparler de ça, j'risque de nous faire nous écraser.\nOn en rediscute ce soir, OK?\nVa piquer un p'tit roupillon sur mon lit en\nattendant qu'la nuit tombe.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf("Aaaaah! Bienv'nue à la boutique de Beedle,\nm'sieur client!\n\n\nJe t'en supplie! Va, cours, vole, sauve mon petit\n<b<Golofa Demonicus Rex>>!\n\n\nPlus rarissime, y a pas! Je m'en remettrai\nvraiment jamais...")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf("Tu veux savoir pourquoi j'pédale toute\nla journée?\n[1]Oui![2-]Pas vraiment")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf("\x0E\x01\x07\x04\x00\x15Aaaaah! Mais quel esprit vif et curieux,\nm'sieur client! J'adooore! Vraiment.\n\n\nJ'pédale pour créer de l'électricité et faire\navancer ma maison. C'est <b<écologistique>>, et bon\npour ma santé!\n\nEt avec toi à bord, m'sieur client, j'dois pédaler\ndeux fois plus fort... Je me fais les mollets!")
          							flw_27:
/*< 27>*/ 							printf("Euh\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Pardon! Ne te gêne pas pour regarder\nma marchandise. Tu vas voir que c'est pas\nd'la camelote! J'ai toutes sortes d'affaires\npas mal cool.")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf("Ouais. Bien, pourquoi tu m'déranges, d'abord?\n\n\n\nEn plus, avec toi à bord, j'dois pédaler deux fois\nplus fort... Vraiment.")
/*< 88>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 27, 'param3': 13}
          							goto flw_27
          						}
          					  case 1:
/*<185>*/ 						switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          						  case 0:
/*<184>*/ 							switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          							  case 0:
/*<191>*/ 								{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2838, 'next': 188, 'param3': 13}
/*<188>*/ 								switch (zone_temp_flags[12 /* 0x0 10 */]) {
          								  case 0:
/*<190>*/ 									printf("Aaaaah! On en reparle cette nuit, OK?\nEn attendant, tu peux piquer un somme\nsur le lit, juste là.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf("\x0E\x01\x09\x04\x00\xB00Aaaaah<pause0A>.<pause0A>.<pause0A>.<pause0A>! Bienvenue,<pause14> m'sieur client<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\n\nHein?<pause14> J'ai pas très bonne mine?\n\n\n\nJe peux vraiment rien t'cacher, tu sais!\n\n\n\nMais comme tu vois, j'suis bien trop occupé, là,\nalors on en reparle cette nuit, d'accord? Tu\npeux roupiller sur le lit, juste là!")
/*<189>*/ 									zone_temp_flags[12 /* 0x0 10 */] = true;
          								}
          							  case 1:
          								goto flw_1
          							}
          						  case 1:
          							goto flw_1
          						}
          					}
          				  case 1:
          					goto flw_1
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_36() {
/*<135>*/ 	start()
/*<137>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 138, 'param3': 12}
/*<138>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 149, 'param3': 13}
/*<149>*/ 	zone_temp_flags[11 /* 0x0 08 */] = true;
/*<140>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_145:
/*<145>*/ 		printf("Ça, c'est une <y<poche supplémentaire >>pour ta\nsacoche. Avec elle, tu pourras emporter un\nobjet de plus dans tes aventures!\n\nL'accessoire indispensable pour un voyageur\ncomme toi, non? J'te la vends à <r<600 rubis>>.\n\n\nComment ça, c'est plus cher que la dernière\nfois? Mais pas du tout, tu te fais des idées!\nAlors, <r<600 rubis >>et on en parle plus?\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf("Ça, c'est une <y<poche supplémentaire >>pour ta\nsacoche. Avec elle, tu pourras emporter un\nobjet de plus dans tes aventures!\n\nL'accessoire indispensable pour un voyageur\ncomme toi, non? Avec ton rabais de 50 %, ça\nte fait <r<300 rubis>>.\n\nComment ça, c'est plus cher que la dernière\nfois? Mais pas du tout, tu te fais des idées!\nAlors, <r<300 rubis >>et on en parle plus?\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x07\x04\x00\x15Aaaaah! Un m'sieur client qui monte jusqu'ici,\nc'est vraiment extra... hem... ordinaire!\n\n\nLa boutique de Beedle, c'est une vraie caverne\naux trésors! Alors prends un moment pour\nregarder!\n\nCe s'rait dommage de r'partir les mains vides,\ntu ne penses pas?")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf("Voici la toute <y<nouvelle poche >>de ta sacoche\nd'aventurier! C'est ma dernière alors...\nc'est vraiment pas donné!\n\nÇa coûte <r<1 200 rubis>>. Si t'en as pas besoin,\nj'comprendrai... Hin hin hin...\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf("Voici la toute <y<nouvelle poche >>de ta sacoche\nd'aventurier! C'est ma  dernière alors...\nc'est vraiment pas donné!\n\nNormalement, c'est <r<1 200 rubis>>, mais j'te\nla fais à <r<600 rubis>>. Si t'en as pas besoin,\nj'comprendrai... Hin hin hin...\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_147
          		}
          	}
          }

          void entrypoint_105_38() {
/*<177>*/ 	start()
/*<178>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 12}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 181, 'param3': 13}
/*<181>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_182:
/*<182>*/ 		printf("Ça, c'est une <y<médaille insecte>>. Avec cette\nmédaille, les endroits où trouver des insectes\nsont indiqués sur ta carte.\n\nC'est vraiment pratique! Ça coûte un bras,\nmais si t'aimes les insectes, ça vaut l'coup.\n\n\n<r<1 000 rubis>> et elle est à toi.\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf("Ça, c'est une <y<médaille insecte>>. Avec cette\nmédaille, les endroits où trouver des insectes\nsont indiqués sur ta carte.\n\nC'est vraiment pratique! Ça coûte un bras,\nmais si t'aimes les insectes, ça vaut l'coup.\n\n\nNormalement, c'est <r<1 000 rubis>>, mais j'te la fais\nà moitié prix! <r<500 rubis>>! Qu'est-ce que t'en dis?\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf("Aaaaah! Nooooon! Ta <r<sacoche >>est pleine!\nTu peux rien acheter!\n\n\nEt mon p'tit doigt me dit que tu peux plus rien\nstocker à la <r<consigne >>non plus...\n\n\nFais un peu l'tri et r'viens vite me voir!")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf("Aaaaah! T'as pas une tôle! Le dernier qui m'a\nfait cette blague avait deux ans et demi!\nVraiment.")
/*<151>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<152>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<169>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_5
          		  case 1:
/*< 32>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_5
          		}
          	}
          }

          void entrypoint_105_07() {
/*<  6>*/ 	start()
/*< 90>*/ 	{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 1304, 'next': 7, 'param3': 13}
/*<  7>*/ 	switch (random(2)) {
          	  case 0:
/*<  8>*/ 		printf("Oh, merciiii! Tu vas voir, tu l'regretteras pas!\nTu m'as redonné la force de pédaler! Vraiment!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf("Ça te va vraiment à merveille! Tu vas voir,\ntu l'regretteras pas!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf("Aaaaah! Attends, r'garde un peu le reste de\nma marchandise!")
/*<153>*/ 		zone_temp_flags[10 /* 0x0 04 */] = false;
/*<154>*/ 		zone_temp_flags[11 /* 0x0 08 */] = false;
          	  case 1:
/*<170>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          			goto flw_11
          		  case 1:
/*< 36>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          			goto flw_11
          		}
          	}
          }

          void entrypoint_105_09() {
/*< 29>*/ 	start()
/*< 91>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 30, 'param3': 13}
/*< 30>*/ 	printf("Aaaaah! Attends, attends!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Pfiou... J'pédale deux fois plus fort depuis que\nt'es monté, et toi, tu me quittes les mains vides?\n\n\nT'as vraiment du culot, m'sieur client!\nTerminus, tout le monde descend!")
/*<201>*/ 	scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
          }

          void entrypoint_105_11() {
/*<155>*/ 	start()
/*< 93>*/ 	switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          	  case 0:
/*< 94>*/ 		story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */] = true;
          		flw_157:
/*<157>*/ 		switch (zone_temp_flags[10 /* 0x0 04 */]) {
          		  case 0:
/*<158>*/ 			story_flags[746 /* us: 805A9B29 0x04, jp: 805ACDA9 0x04 */] = true;
          			flw_159:
/*<159>*/ 			switch (zone_temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<160>*/ 				story_flags[747 /* us: 805A9B29 0x08, jp: 805ACDA9 0x08 */] = true;
          			  case 1:
          			}
          		  case 1:
          			goto flw_159
          		}
          	  case 1:
          		goto flw_157
          	}
          }

          void entrypoint_105_30() {
/*< 12>*/ 	start()
/*<171>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 31, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf("Aaaaah! Ça, c'est une pancarte de rupture de\nstock! C'est pas à vendre. Désolé. Vraiment.\n\n\nMais c'est grâce à toi! T'es mon meilleur client!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf("Ça, c'est une <y<poche supplémentaire >>pour ta\nsacoche. Avec elle, tu pourras emporter un\nobjet de plus dans tes aventures!\n\nL'accessoire indispensable pour un voyageur\ncomme toi, trouves-tu? <r<300 rubis>> et tu r'pars\navec.\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf("Ça, c'est une <y<poche supplémentaire >>pour ta\nsacoche. Avec elle, tu pourras emporter un\nobjet de plus dans tes aventures!\n\nL'accessoire indispensable pour un\nvoyageur comme toi, trouves-tu?\nAvec ta super réduction de sauveur\nd'insecte, elle est à toi pour <r<150 rubis>>!\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_19
          		}
          	}
          }

          void entrypoint_105_32() {
/*< 17>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 70, 'param3': 12}
/*< 70>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 76, 'param3': 13}
/*< 76>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_20:
/*< 20>*/ 		printf("Oh! T'as du goût, m'sieur client! Regarde\ncomme ça brille! J'l'ai ramassé dans le coin.\n\n\nJ'sais pas du tout à quoi ça sert, mais j'te l'offre\nà seulement <r<1 600 rubis>>. Alors, qu'est-ce que\nt'en dis?\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf("Oh! T'as du goût, m'sieur client! Regarde\ncomme ça brille! J'l'ai ramassé dans le coin.\n\n\nJ'sais pas du tout à quoi ça sert, mais j'le\nvends <r<1 600 rubis>>.\n\n\nMais avec ta réduction spéciale, tu peux l'avoir\npour seulement <r<800 rubis>>. Ça te dit?\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_20
          		}
          	}
          }

          void entrypoint_105_33() {
/*< 21>*/ 	start()
/*< 45>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 71, 'param3': 12}
/*< 71>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 79, 'param3': 13}
/*< 79>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_22:
/*< 22>*/ 		printf("Ça, c'est une <y<bourse annexe>>.\nC'est vraiment utile!\n\n\nAvec elle, tu pourras transporter 300 rubis\nsupplémentaires dans ta bourse.\n\n\nAu revoir, les tragédies du genre : « Oh non,\nma bourse est pleine et j'peux pas ramasser\nce rubis doré! ». Ciao! Fini! Terminé!\n\n<r<100 rubis>> et elle est à toi. Tu verras, ça va\nchanger ta vie!\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf("Ça, c'est une <y<bourse annexe>>.\nC'est vraiment utile!\n\n\nAvec elle, tu pourras transporter 300 rubis\nsupplémentaires dans ta bourse.\n\n\nAu revoir, les tragédies du genre : « Oh non,\nma bourse est pleine et j'peux pas ramasser\nce rubis doré! ». Ciao! Fini! Terminé!\n\nD'habitude, c'est <r<100 rubis>>. Mais pour toi, ce\nsera seulement <r<50 rubis>>.\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_22
          		}
          	}
          }

          void entrypoint_105_50() {
/*< 50>*/ 	start()
/*<175>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
/*<176>*/ 		printf("\x0E\x01\x09\x04\x00\x18Merci! Je n'oublierai jamais ce que tu as fait\npour moi. Vraiment.\n\n\nJe ne me lasserai jamais d'admirer mon cher\npetit <b<Golofa Demonicus Rex>>...")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\x18Tu l'as retrouvé! Je n'oublierai jamais ce que\ntu as fait pour moi. Vraiment.\n\n\nPour te remercier, le prochain article que tu\nm'achèteras sera à moitié prix!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("Je peux t'aider? Aaaaah...\nTu veux me montrer quelque chose?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf("\x0E\x01\x09\x04\x1A\x815Aaaaah! Je n'en crois pas mes yeux!!!\nMon <b<Golofa Demonicus Rex>>!!!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 121, 'param3': 6}
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf("\x0E\x01\x09\x04\x00\xF00Tu l'as retrouvé! Merci mille fois!\n\n\n\nPour te remercier, le prochain article que tu\nm'achèteras sera à moitié prix!\n\n\n\x0E\x01\x09\x04\x00\x18Je te dois bien ça!")
/*<133>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 115, 'param3': 42}
/*<115>*/ 				give_gratitude_crystals();
          			  case 1:
/*< 99>*/ 				switch (scene_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<111>*/ 					switch (zone_temp_flags[4 /* 0x1 10 */]) {
          					  case 0:
/*<113>*/ 						switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          						  case 0:
/*<198>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 114, 'param3': 31}
/*<114>*/ 							printf("\x0E\x01\x09\x04\x00\x1ETrouve mon cher petit <b<Golofa Demonicus Rex>>...\nJe t'en supplie!")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf("\x0E\x01\x09\x04\x00\x1EAurais\x2010tu décidé de partir à la recherche de\nmon <b<Golofa Demonicus Rex>>?\n[1]Oui![2-]Oublie\x2010le")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf("\x0E\x01\x09\x04\x11\x220Vraiment? Ce serait tellement gentil!")
/*< 61>*/ 								printf("\x0E\x01\x09\x04\x1D\x200Mon cher petit <b<Golofa Demonicus Rex>>...\nRetrouve\x2010le vite! \x0E\x01\x09\x04\x11\xB00Je t'en supplie!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("\x0E\x01\x09\x04\x01!C'est facile à dire!\nJe ne suis vraiment pas capable!")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf("\x0E\x01\x09\x04\x00\x1ESi tu veux retourner à Célesbourg, t'as juste à\nt'allonger sur mon lit.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf("\x0E\x01\x09\x04\x01\xB00Et puis?\n\n\n\n\x0E\x01\x09\x04\x1D\xB00As\x2010tu retrouvé mon gentil petit <b<Golofa\nDemonicus Rex>>? Il me manque vraiment...")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf("\x0E\x01\x09\x04\x01\x600Mais je suis vraiment préoccupé...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Ma <r<cage à insecte >>a disparu, et avec elle, mon\ngentil petit <b<Golofa Demonicus Rex>>...\n\n\n\x0E\x01\x09\x04\x1D\xB00Snif... Je suis dévasté. C'était mon meilleur ami.\n[1]Je m'en charge [2-]Oublie\x2010le")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf("\x0E\x01\x09\x04\x00\xC00Hmm\x0E\x01\x06\x02\xFBCD...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf("\x0E\x01\x09\x04\x00\x1EAha! Je vois que cet insecte t'intéresse!\n\n\n\n\x0E\x01\x09\x04\x1C\xA00Il s'agit d'une espèce vraiment rare,\nle <b<Golofa Demonicus Rex>>.\n\n\n\x0E\x01\x09\x04\x1B\x500C'est mon bien le plus précieux.\n\n\n\nJe pourrais le contempler des journées\nentières... Huhuhu...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x00\x1EAaaaah! Tu t'es encore endormi sur mon lit!\nTu devais être vraiment épuisé...\n\n\n\x0E\x01\x09\x04\x00\xB00J'avoue qu'avoir pédalé jusqu'ici avec toi à bord\nm'a fatigué moi aussi.\n\n\n\x0E\x01\x09\x04\x00\xC00<pause05>.<pause05>.<pause05>.<pause05>\x0E\x01\x09\x04\x00\x200 Oh non, ce n'est pas un reproche! Je suis\nhabitué maintenant.")
          							goto flw_98
          						}
          					}
          				  case 1:
/*<173>*/ 					switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          					  case 0:
/*<172>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*<174>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 116, 'param3': 31}
          							flw_116:
/*<116>*/ 							story_flags[283 /* us: 805A9AFB 0x20, jp: 805ACD7B 0x20 */] = true;
/*< 53>*/ 							printf("\x0E\x01\x09\x04\x00\x21EAh, tu es debout?\n\n\n\nTu dormais à poings fermés alors je n'ai pas\nosé te réveiller.\n\n\n\x0E\x01\x09\x04\x00\x500À cause de toi, j'ai dû pédaler comme un vrai\nforcené... Pfiou!\n[1]Beedle?[2]Où suis\x2010je?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf("Qu'est-ce que tu dis?\nJe m'exprime différemment?\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200 Je ne trouve pas...<pause1E> Mais ce détail n'a pas\nvraiment d'importance maintenant, n'est\x2010ce pas?")
/*<103>*/ 								printf("\x0E\x01\x09\x04\x00\x200Tu es chez moi. Je m'arrête toujours ici la nuit.\n\n\n\n\x0E\x01\x09\x04\x00\x200Il n'y a pas grand\x2010chose à faire, mais on peut\ns'y reposer tranquillement.\n\n\nLes célestriers ne volent pas la nuit, alors je te\nramènerai avec moi demain matin.\n\n\nSi tu veux retourner à Célesbourg, repose\x2010toi\ndonc un peu sur mon lit.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf("\x0E\x01\x09\x04\x00\x200Tu es chez moi. Je m'arrête toujours ici la nuit.\n\n\n\n\x0E\x01\x09\x04\x00\x200Il n'y a pas grand\x2010chose à faire, mais on peut\ns'y reposer tranquillement.\n\n\nLes célestriers ne volent pas la nuit, alors je te\nramènerai avec moi demain matin.\n\n\nSi tu veux retourner à Célesbourg, repose\x2010toi\ndonc un peu sur mon lit.")
/*<104>*/ 								printf("Qu'est-ce que tu dis?\nJe m'exprime différemment?\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200 Je ne trouve pas...<pause1E> Mais ce détail n'a pas\nvraiment d'importance maintenant, n'est\x2010ce pas?")
          								goto flw_97
          							}
          						  case 1:
          							goto flw_116
          						}
          					  case 1:
          						goto flw_116
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_105_34() {
/*< 39>*/ 	start()
/*< 46>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 72, 'param3': 12}
/*< 72>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 82, 'param3': 13}
/*< 82>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_42:
/*< 42>*/ 		printf("Ça, c'est un <y<filet>>. Ça sert à attraper les insectes!\n\n\n\nY en a pas beaucoup dans le coin, mais j'suis sûr\nque ça te sera vraiment utile ailleurs!\n\n\nUne super affaire! <r<50 rubis>>! Qu'est-ce que\nt'en dis?\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf("")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

