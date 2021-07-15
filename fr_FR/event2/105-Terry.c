          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf("Ça, c'est une <y<médaille de vie>>.\nSi tu la portes, elle aura un effet\nmystérieux sur toi !\n\nSon pouvoir<pause0A>.<pause0A>.<pause0A>.<pause0A>? Euh... j'sais pas trop !\nTu le découvriras tout seul !\n\n\nUne super occase : <r<800 rubis >>!\nT'en dis quoi ?\n[1]J'achète[2-]Non merci")
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
/*< 86>*/ 			printf("Ça, c'est une <y<médaille de vie>>.\nSi tu la portes, elle aura un\nun effet mystérieux sur toi !\n\nSon pouvoir <pause0A>.<pause0A>.<pause0A>.<pause0A>? Euh... j'sais pas trop !\nTu le découvriras tout seul !\n\n\nUne super occase : <r<400 rubis >>!\nD'habitude c'est <r<800 >>! T'en dis quoi ?\n[1]J'achète[2-]Non merci")
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
/*< 67>*/ 			printf("Yooohooo ! Wouahou !\nBienv'nue à la boutique de Terry !\nContent d'te revoir, m'sieur client !\nChoisis donc l'article de tes désirs !")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf("M'sieur client, c'est toi, mon héros !\nCelui qui a retrouvé mon <b<Golofa\nDemonicus Rex>> !\n\nJ'te dois une fière chandelle, alors\nchoisis un objet sur l'étal et j'te l'offre,\neuh, à moitié prix !")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf("Wouahou ! Bienv'nue à la boutique\nde Terry, m'sieur client !\n\n\nHein, tu dis quoi ? Tu as trouvé mon...\nEuh... Bon, c'est pas l'moment de\nparler de ça, j'risque de nous faire\nnous écraser.\nOn en rediscute ce soir, OK ?\nVa piquer un p'tit roupillon sur mon lit\nen attendant qu'la nuit tombe.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf("Wouahou !\nBienv'nue à la boutique de Terry,\nm'sieur client !\n\nÉcoute ma supplique ! Va, cours,\nvole, sauve mon petit <b<Golofa\nDemonicus Rex>> !\n\nPlus rarissime, y a pas !\nJe m'en remettrai jamais...")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf("Hein ? Tu veux savoir pourquoi\nj'pédale toute la journée ?\n[1]Oui ![2-]Ça m'est\négal")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf("\x0E\x01\x07\x04\x00\x15Wouahou ! Mais quel esprit vif et\ncurieux, m'sieur client ! J'adooore !\n\n\nJ'pédale pour créer de l'électricité\net faire avancer ma maison. C'est\n<b<écologistique>>, et bon pour ma santé !\n\nEt avec toi à bord, m'sieur client,\nj'dois pédaler deux fois plus dur...\nJe sens que ça fait du bien dans mon\ncorps !")
          							flw_27:
/*< 27>*/ 							printf("Euh\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Pardon ! Enfin, jette un \x153il\nà ma marchandise, c'est pas d'la\ncamelote ! J'ai des trucs super cool !")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf("Wouahou ! Ben pourquoi\ntu m'déranges, alors ?\n\n\nEn plus, avec toi à bord, j'dois\npédaler deux fois plus dur...")
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
/*<190>*/ 									printf("Wouahou ! On en reparle cette nuit,\nOK ? Tu peux piquer un somme sur\nle lit, juste là.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf("\x0E\x01\x09\x04\x00\xB00Wouahou<pause0A>.<pause0A>.<pause0A>.<pause0A>!\nBienvenue,<pause14> m'sieur client<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\nHein ?<pause14> Tu trouves que j'ai mauvaise\nmine ?\n\n\nJ'peux vraiment rien t'cacher, à toi !\n\n\n\nMais comme tu vois, j'suis bien trop\noccupé, là, alors on en reparle cette\nnuit, d'accord ? Tu peux roupiller sur\nle lit, juste là !")
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
/*<145>*/ 		printf("Ça, c'est une <y<poche supplémentaire\n>>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures !\nL'accessoire indispensable pour\nun voyageur comme toi, non ?\nJ'te la vends à <r<600 rubis>>.\n\nComment ça, c'est plus cher que\nla dernière fois ? Mais pas du tout,\ntu te fais des idées ! Alors, <r<600 rubis\n>>et on en parle plus ?\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf("Ça, c'est une <y<poche supplémentaire\n>>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures !\nL'accessoire indispensable pour un\nvoyageur comme toi, non ? Avec ta\nréduc de 50 %, j'te la vends à <r<300 rubis>>.\n\nComment ça, c'est plus cher que\nla dernière fois ? Mais pas du tout,\ntu te fais des idées ! Alors, <r<300 rubis\n>>et on en parle plus ?\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf("\x0E\x01\x07\x04\x00\x15Wouahou ! Un m'sieur client qui\nmonte jusqu'ici, c'est extra... hem...\nordinaire !\n\nLa boutique de Terry, c'est une\nvraie caverne aux trésors ! Alors\nprends un moment pour regarder !\n\nCe s'rait dommage de r'partir les mains\nvides, non ?")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf("L'ultime, la sublime, la tentatrice,\nla toute <y<dernière poche >>de ta sacoche\nd'aventurier ! Bon, d'accord, c'est pas\ndonné.\nÇa coûte <r<1 200 rubis>>. Si t'en as pas\nbesoin, j'comprendrai... Hin hin hin...\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf("L'ultime, la sublime, la tentatrice,\nla toute <y<dernière poche >>de ta sacoche\nd'aventurier ! Bon, d'accord, c'est pas\ndonné.\nNormalement, c'est <r<1 200 rubis>>, mais\nj'te la fais à <r<600 rubis>>. Si t'en as pas\nbesoin, j'comprendrai... Hin hin hin...\n[1]J'achète[2-]Non merci")
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
/*<182>*/ 		printf("Ça, c'est une <y<médaille insecte>>.\nAvec cette médaille, les endroits où\ntrouver des insectes sont indiqués sur\nta carte.\nC'est super pratique ! C'est un peu\nchéros, mais si t'aimes les insectes,\nça vaut l'coup.\n\n<r<1 000 rubis>> et elle est à toi.\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf("Ça, c'est une <y<médaille insecte>>.\nAvec cette médaille, les endroits où\ntrouver des insectes sont indiqués sur\nta carte.\nC'est super pratique ! C'est un peu\nchéros, mais si t'aimes les insectes,\nça vaut l'coup.\n\nNormalement, c'est <r<1 000 rubis>>, mais\nj'te la fais à moitié prix ! <r<500 rubis>> !\nT'en dis quoi ?\n[1]J'achète[2-]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf("Wouahou ! Nooooon !\nTa <r<sacoche >>est pleine !\nTu peux rien acheter !\n\nEt mon p'tit doigt me dit que tu peux\nplus rien stocker à la <r<consigne >>non\nplus...\n\nFais un peu l'tri et r'viens vite me voir !")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf("Wouahou ! T'as pas un rond !\nLe dernier qui m'a fait cette blague\navait deux ans et demi ! Haaan...")
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
/*<  8>*/ 		printf("Oh, merciiii !\nTu vas voir, tu l'regretteras pas !\nTu m'as redonné la force de pédaler !")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf("Génial !\nTu vas voir, tu l'regretteras pas !")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf("Wouahou ! Attends, r'garde un peu\nle reste de ma marchandise !")
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
/*< 30>*/ 	printf("Wouahou ! Attends, attends !")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf("Pfiou... J'pédale deux fois plus dur\ndepuis que t'es monté, et toi, tu me\nquittes les mains vides ?\n\nTant va la cruche à l'eau qu'à la fin,\nelle se brise ! Terminus, tout le monde\ndescend !")
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
/*< 18>*/ 	printf("Wouahou ! Ça, c'est une pancarte de\nrupture de stock ! C'est pas à vendre.\nJe sais, c'est trop dur !\n\nMais c'est grâce à toi !\nT'es mon meilleur client !")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf("Ça, c'est une <y<poche supplémentaire\n>>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures !\nL'accessoire indispensable pour\nun voyageur comme toi, non ?\n<r<300 rubis>> et tu r'pars avec.\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf("Ça, c'est une <y<poche supplémentaire\n>>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures !\nL'accessoire indispensable pour\nun voyageur comme toi, non ?\nAvec ta super réduction de sauveur\nd'insecte, elle est à toi pour <r<150 rubis>> !\n[1]J'achète[2-]Non merci")
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
/*< 20>*/ 		printf("Oh ! T'as bon goût, m'sieur client !\nÇa en jette, hein ?\nJ'l'ai ramassé dans le coin.\n\nJ'sais pas du tout à quoi ça sert, mais\nj'suis sympa, j'te le fais à <r<1 600 rubis>>.\nAlors, t'en dis quoi ?\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf("Oh ! T'as bon goût, m'sieur client !\nRegarde comme ça brille !\nJ'l'ai ramassé dans le coin.\n\nJ'sais pas du tout à quoi ça sert,\nmais j'le vends <r<1 600 rubis>>.\n\n\nMais avec ta réduction spéciale,\ntu peux l'avoir pour seulement\n<r<800 rubis>>. Ça te dit ?\n[1]J'achète[2-]Non merci")
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
/*< 22>*/ 		printf("Ça, c'est une <y<bourse annexe>>.\nC'est super utile !\n\n\nAvec elle, tu pourras transporter\n300 rubis supplémentaires dans ta\nbourse.\n\nAu revoir, les tragédies du genre :\n« Oh non, ma bourse est pleine et\nj'peux pas ramasser ce rubis doré ! ».\nCiao ! Fini ! Terminé !\n<r<100 rubis>> et elle est à toi.\nTu verras, ça change la vie !\n[1]J'achète[2-]Non merci")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf("Ça, c'est une <y<bourse annexe>>.\nC'est super utile !\n\n\nAvec elle, tu pourras transporter\n300 rubis supplémentaires dans ta\nbourse.\n\nAu revoir, les tragédies du genre :\n« Oh non, ma bourse est pleine et\nj'peux pas ramasser ce rubis doré ! ».\nCiao ! Fini ! Terminé !\nD'habitude, c'est <r<100 rubis>>. Mais pour\ntoi, ce sera seulement <r<50 rubis>>.\n[1]J'achète[2-]Non merci")
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
/*<176>*/ 		printf("\x0E\x01\x09\x04\x00\x18Merci ! Je n'oublierai jamais ce que\ntu as fait pour moi.\n\n\nJe ne me lasserai jamais d'admirer mon\ncher petit <b<Golofa Demonicus Rex>>...")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\x18Tu l'as retrouvé ! Je n'oublierai jamais\nce que tu as fait pour moi.\n\n\nPour te remercier, le prochain article\nque tu m'achèteras sera à moitié prix !")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("Qu'y a\x2010t\x2010il ? Tu veux me montrer\nquelque chose ?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf("\x0E\x01\x09\x04\x1A\x815Wouahou !\nJe n'en crois pas mes yeux !!!\nMon <b<Golofa Demonicus Rex>> !!!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 121, 'param3': 6}
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf("\x0E\x01\x09\x04\x00\xF00Tu l'as retrouvé !\nMerci mille fois !\n\n\nPour te remercier, le prochain article\nque tu m'achèteras sera à moitié prix !\n\n\n\x0E\x01\x09\x04\x00\x18Je te dois bien ça !")
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
/*<114>*/ 							printf("\x0E\x01\x09\x04\x00\x1ETrouve mon cher petit <b<Golofa\nDemonicus Rex>>... Je t'en supplie !")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf("\x0E\x01\x09\x04\x00\x1EAurais\x2010tu décidé de partir\nà la recherche de mon <b<Golofa\nDemonicus Rex>> ?\n[1]Oui ![2-]Oublie\x2010le")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf("\x0E\x01\x09\x04\x11\x220Vraiment ? Ce serait tellement gentil !")
/*< 61>*/ 								printf("\x0E\x01\x09\x04\x1D\x200Mon cher petit <b<Golofa Demonicus\nRex>>... Retrouve\x2010le vite !\n\x0E\x01\x09\x04\x11\xB00Je t'en supplie !")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf("\x0E\x01\x09\x04\x01!C'est facile à dire !\nJe n'y arrive pas du tout !")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf("\x0E\x01\x09\x04\x00\x1ESi tu veux retourner à Célesbourg,\ntu n'as qu'à t'allonger sur mon lit.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf("\x0E\x01\x09\x04\x01\xB00Alors ?\n\n\n\n\x0E\x01\x09\x04\x1D\xB00As\x2010tu retrouvé mon gentil petit\n<b<Golofa Demonicus Rex>> ?\nIl me manque tellement...")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf("\x0E\x01\x09\x04\x01\x600Mais je suis fort préoccupé...\n\n\n\n\x0E\x01\x09\x04\x00\xB00Ma <r<cage à insecte >>a disparu, et\navec elle, mon gentil petit <b<Golofa\nDemonicus Rex>>...\n\n\x0E\x01\x09\x04\x1D\xB00Snif... Je suis dévasté.\nC'était mon meilleur ami.\n[1]Je m'en\ncharge[2-]Oublie\x2010le")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf("\x0E\x01\x09\x04\x00\xC00Hmm\x0E\x01\x06\x02\xFBCD...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf("\x0E\x01\x09\x04\x00\x1EAh ! Je vois que cet insecte t'intéresse !\n\n\n\n\x0E\x01\x09\x04\x1C\xA00Il s'agit d'une espèce rare,\nle <b<Golofa Demonicus Rex>>.\n\n\n\x0E\x01\x09\x04\x1B\x500C'est mon bien le plus précieux.\n\n\n\nJe pourrais le contempler des journées\nentières... Huhuhu...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x00\x1EWouahou ! Tu t'es encore assoupi sur\nmon lit ! Tu devais être vraiment\népuisé...\n\n\x0E\x01\x09\x04\x00\xB00J'avoue qu'avoir pédalé jusqu'ici avec\ntoi à bord m'a fatigué moi aussi.\n\n\n\x0E\x01\x09\x04\x00\xC00<pause05>.<pause05>.<pause05>.<pause05>\x0E\x01\x09\x04\x00\x200 Oh non, ce n'est pas un reproche !\nJe suis habitué maintenant.")
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
/*< 53>*/ 							printf("\x0E\x01\x09\x04\x00\x21EAh, tu es debout ?\n\n\n\nTu dormais comme un loir alors\nje n'ai pas osé te réveiller.\n\n\n\x0E\x01\x09\x04\x00\x500Du coup, j'ai dû pédaler comme un\nvéritable forcené... Pfiou !\n[1]Terry ?[2]Où suis\x2010je ?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf("Comment ?\nJe m'exprime différemment, dis\x2010tu ?\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200 Je ne trouve pas...<pause1E> Mais ce détail n'a\nque peu d'importance maintenant,\nn'est\x2010ce pas ?")
/*<103>*/ 								printf("\x0E\x01\x09\x04\x00\x200Tu es chez moi. Je m'arrête toujours ici\nla nuit.\n\n\n\x0E\x01\x09\x04\x00\x200Il n'y a pas grand\x2010chose à faire, mais\non peut s'y reposer tranquillement.\n\n\nLes célestriers ne volent pas la nuit,\nalors je te ramènerai avec moi demain\nmatin.\n\nSi tu veux retourner à Célesbourg,\nrepose\x2010toi donc un peu sur mon lit.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf("\x0E\x01\x09\x04\x00\x200Tu es chez moi. Je m'arrête toujours ici\nla nuit.\n\n\n\x0E\x01\x09\x04\x00\x200Il n'y a pas grand\x2010chose à faire, mais\non peut s'y reposer tranquillement.\n\n\nLes célestriers ne volent pas la nuit,\nalors je te ramènerai avec moi demain\nmatin.\n\nSi tu veux retourner à Célesbourg,\nrepose\x2010toi donc un peu sur mon lit.")
/*<104>*/ 								printf("Comment ?\nJe m'exprime différemment, dis\x2010tu ?\n\n\n\x0E\x01\x09\x04\x00\x1000\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x00\x200 Je ne trouve pas...<pause1E> Mais ce détail n'a\nque peu d'importance maintenant,\nn'est\x2010ce pas ?")
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
/*< 42>*/ 		printf("Ça, c'est un <y<filet à papillons>>.\nÇa sert à attraper les insectes !\n\n\nY en a pas beaucoup dans le coin,\nmais j'suis sûr que ça te sera super\nutile ailleurs !\n\nUne super affaire ! <r<50 rubis >>!\nT'en dis quoi ?\n[1]J'achète[2-]Non merci")
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

