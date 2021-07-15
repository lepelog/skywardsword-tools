          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("La vue est magnifique, ici! Vrrzt!")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Brrm, brrzt! Mais c'est...<pause1E> Va tout de suite\nl'apporter au <b<dragon de foudre>>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Il est inutile de planter cette pousse dans les\n<b<terres de Lanelle>>. Vrrrm. \x0E\x01\x09\x04\x00\x900Tout repose sur toi!\n\n\n\x0E\x01\x09\x04\x03\x900Avec un <r<fruit de l'arbre de vie>>, brt, le dragon\nde foudre retrouvera la santé!<pause1E>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900Que veux\x2010tu faire avec cette pousse?<pause1E> Pour\nsoigner le <b<dragon de foudre>>, il faut un <r<fruit\nde l'arbre de vie>>! Vrrm!\n\n\x0E\x01\x09\x04\x03\x900Veux\x2010tu nous aider à le sauver avec cette\npousse? Bzzrt?\n[1]Bien sûr[2]Je l'ai prise\ncomme ça")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900Vraiment? Vrrm? Merci! Brrzt! Va la\nplanter dans une terre plus fertile, vrt!\n\n\n\x0E\x01\x09\x04\x03\x900C'est <r<impossible ici, dans les terres de Lanelle>>.\nOn compte sur toi! Brrzt!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900Peu importe la raison, après tout! Brt. Va\nplanter cette pousse dans une terre plus fertile!\nBrrrzt!\n\n\x0E\x01\x09\x04\x03\x900Ici, sur les <r<terres de Lanelle, elle pourra pas\ngrandir>>. Vrrzt!<pling> On compte sur toi.")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Ça fait un moment que le <b<dragon de\nfoudre >>n'est plus en bonne santé...<pause0F>\nLes arbres ne poussent pas bien, ici...<pause1E>\x0E\x01\x09\x04\x01\xC00\nEt nous avons peu de temps...")
          			}
          		}
          	}
          }

          void entrypoint_404_55() {
/*<106>*/ 	start()
/*<108>*/ 	switch (scene_flags[107 /* 0xC 08 */]) {
          	  case 0:
/*<123>*/ 		switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09Je vois que tu es passionné!\nSi tu apprends quoi que ce soit à propos\ndes trois dragons, viens vite m'en parler!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06Tu as quelque chose à me dire?\nSi tu apprends quoi que ce soit à propos\ndes trois dragons, viens vite m'en parler!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0AOh, quelle surprise de faire une rencontre ici!\n<pause1E>Je suis <b<Venturo>>, et j'étudie la <r<légende des trois\ndragons >>dans ce désert.\n\n\x0E\x01\x09\x04\x2F00\x07Je sais qu'il n'y a pas l'air d'avoir grand\x2010chose\ndans le coin, mais c'est justement le genre\nd'endroit qu'il faut fouiller!\n\nTu t'appelles Link?\nQuel nom étrange...\n\n\n\x0E\x01\x09\x04\x2F01\xD00Et qu'est\x2010ce que tu viens faire ici,\nLink?\n\n\n.<pause0F>.<pause0F>.<pause0F> <b<\x0E\x01\x09\x04\x2F00\x07>>Tu cherches la <b<flamme sacrée>>? J'ai déjà\nentendu parler de ça quelque part...<pause19> mais\npeut\x2010être pas...\n\n\x0E\x01\x09\x04\x2F0F\x709Oui!!!<pause19> \x0E\x01\x09\x04\x2F00\xD00Je me souviens! Les écrits anciens sur\nla <b<mer de sable de Lanelle >>en faisaient\nmention...\n\n\x0E\x01\x09\x04\x2F08\xD00Je ne me souviens plus des détails, mais si\ntu continues tout droit, tu arriveras à la mer\nde sable de Lanelle.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD00Si tu vas à la mer de sable de Lanelle,\nutilise cette clé.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Bonne chance!")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709\x0E\x03\x01\x00Link! Tu es allé sur le territoire\ndu dragon?<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDJe t'envie! J'aimerais tellement\ny aller!<pause5A>\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDTu m'as damé le pion!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("<r<\x0E\x01\x09\x04\x2F08\xD0A>>En creusant, j'ai découvert la voie vers\nle <r<dragon de foudre>>...<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Mais le passage est trop étroit pour moi et je\nn'ai pas pu passer. \x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Je ne sais pas quoi faire...")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Salut, Link!\n\n\n\nAlors, cette <b<flamme sacrée>>, tu l'as trouvée?\n\n\n\nDepuis que tu m'en as parlé, j'ai du mal\nà penser à autre chose... Dis\x2010moi tout!\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Oh, tu l'as trouvée après toutes ces aventures!\n\n\n\nT'es un sacré numéro, Link!")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0ADe mon côté, j'ai fait quelques découvertes\nsur les trois dragons. Laisse\x2010moi t'en parler.<pause0F>\n\n\nIl semblerait qu'il y ait une terre encore\ninexplorée un peu plus loin!\n\n\nJ'ai trouvé un <r<passage étroit>><pling>, mais je\nsuis trop gros pour l'emprunter...\n\n\n\x0E\x01\x09\x04\x2F00\xD00Je pense qu'il s'agit de l'endroit où se cache\nle <r<dragon de foudre>>, l'un des trois dragons\nde légende!\n\n\x0E\x01\x09\x04\x2F00\x800Les robots aux alentours doivent avoir\nun lien avec lui.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots et les\nchronolithes<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00J'allais oublier, Link.\nÇa fait un bon bout de temps que tu\nas investi dans mes recherches!<pause14>\n\nJ'ai réussi à trouver des tas de chronolithes...\n\x0E\x01\x09\x04\x2F00\xD01Je peux te rembourser dix fois ce que\ntu m'as donné!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Salut, Link!\n\n\n\nAlors, cette <b<flamme sacrée>>, tu l'as trouvée?\n\n\n\nDepuis que tu m'en as parlé, j'ai du mal\nà penser à autre chose... Dis\x2010moi tout!\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Oh, tu l'as trouvée après toutes ces aventures!\n\n\n\nT'es un sacré numéro, Link!")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0ADe mon côté, j'ai fait quelques découvertes\nsur les trois dragons. Laisse\x2010moi t'en parler.<pause0F>\n\n\nIl semblerait qu'il y ait une terre encore\ninexplorée un peu plus loin!\n\n\nJ'ai trouvé un <r<passage étroit>><pling>, mais je\nsuis trop gros pour l'emprunter...\n\n\n\x0E\x01\x09\x04\x2F00\xD00Je pense qu'il s'agit de l'endroit où se cache\nle <r<dragon de foudre>>, l'un des trois dragons\nde légende!\n\n\x0E\x01\x09\x04\x2F00\x800Les robots aux alentours doivent avoir\nun lien avec lui.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots et les\nchronolithes<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure!")
          				goto flw_148
          			}
          		}
          	}
          }

          void entrypoint_404_05() {
/*<  7>*/ 	start()
/*< 45>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<135>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 46>*/ 			printf("Grâce à toi, le dragon de foudre est guéri!\nBvvzziit! Mille mercis!")
          		  case 1:
/*<136>*/ 			printf("Tu es venu voir le dragon de foudre? Brrrzt?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Le dragon de foudre guérira s'il mange un\n<r<fruit de l'arbre de vie>>! Vrrrrm!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Il n'y a que de l'herbe et des fleurs qui poussent\npar ici...<pause1E> \x0E\x01\x09\x04\x01\xC00Si on ne fait rien<b<\x0E\x01\x06\x02\xFECD>> le dragon de foudre\nrisque de... brrrzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Je suis si inquiet pour le dragon de foudre...\nS'il te plaît, cherche le <r<fruit de l'arbre de vie>>!\nBzzt!")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900On a planté une <r<pousse de l'arbre de vie >>là\x2010bas,\npour que le dragon de foudre puisse guérir\ngrâce à son fruit... Vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00C'est terrible! Brrztz! Le <b<dragon de foudre\n>>est malade...<pause0F>Vrrrrm...\n\n\n\x0E\x01\x09\x04\x03\xC00Pour utiliser les chronolithes du coin, il faut\nl'autorisation du dragon...<pause1E> Vrm.\n\x0E\x01\x09\x04\x01\xC00Mais ce n'est pas vraiment ça le problème\nle plus urgent!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hé! Toi là\x2010bas!\nTu es Link, n'est\x2010ce pas?\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDTu tombes à pic!<pause0F>\nJe voulais te voir, justement.<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDViens donc par ici!")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Oh, Link! J'ai trouvé un trou\nqui doit mener quelque part!\n\n\nMais la roche est vraiment très solide... Ça\ndevrait prendre encore un peu de temps avant\nqu'on puisse passer.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("Si tu ne te dépêches pas, tu n'y arriveras pas!\nVzrrt!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900Ici, il y a plein de grands chronolithes.<pause1E>\n\x0E\x01\x09\x04\x00\x900Toi aussi tu as reçu l'autorisation du <b<dragon\nde foudre>> pour venir ici? Vrm?\n\n\x0E\x01\x09\x04\x01\x900J'étais justement en train de lui en apporter un.\nBzzrt.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00Ça grouille de monstres un peu plus loin!\nVrrrm!<pause0F> \x0E\x01\x09\x04\x03\xC00Fais bien attenztzt...")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf("Le dragon de foudre est de très bonne humeur.\nBrzzzrt!")
          		  case 1:
/*<137>*/ 			printf("Le dragon de foudre est en bonne santé!\nBrrtzt!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("Brritzz! Que penses\x2010tu faire de ce beau fruit?<pause2D>\nTu vas l'apporter au <b<dragon de foudre>>? Vrrm?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Les arbres poussent très mal ici, dans les <b<terres\nde Lanelle>>... Vrrrm.<pause1E> \x0E\x01\x09\x04\x03\x900Il doit bien exister\nun endroit où ils poussent plus vite... Bzzrt!")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("De l'autre côté du pont, nous avons planté une\n<r<pousse de l'arbre de vie>>, dont les fruits\nguérissent tous les maux. Vrrrrzt.<pause1E>\n\n\x0E\x01\x09\x04\x00\xC00Mais les arbres poussent très mal ici... Vrrrm.")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900Avec l'autorisation du dragon de foudre, vrzt,\nnous creusons ici à la recherche de <b<chronolithes>>.\n\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00Mais le <b<dragon >>est en mauvaise santé...<pause0F>\nNous sommes inquiets pour lui. Vrrm...<pause1E>\n\x0E\x01\x09\x04\x01\xC00Sa vie est en danger... Brrzzt!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf("<pause14>.<pause14>.<pause14>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<117>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf("<pause14>.<pause14>.<pause14>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf("<pause14>.<pause14>.<pause14>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901\x0E\x03\x01\x00Link, tu m'as sauvé la vie!\nJe voudrais t'en remercier.\n\n\n\x0E\x01\x09\x04\x00\x900Je vais te préparer une surprise. Reviens\nbientôt! Tu vas voir, c'en vaut la peine!")
/*<139>*/ 	scene_flags[9 'Lanayru Gorge'][29 /* 0x2 20 */] = true;
          }

          void entrypoint_404_30() {
/*< 19>*/ 	start()
/*< 20>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*< 21>*/ 		switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          		  case 0:
/*< 22>*/ 			story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
          			flw_79:
/*< 79>*/ 			story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */] = true;
/*< 23>*/ 			temp_flags[63 /* 0x6 80 */] = true;
/*<122>*/ 			entrypoint_006_04();
          		  case 1:
          			goto flw_79
          		}
          	  case 1:
          		goto flw_79
          	}
          }

          void entrypoint_404_31() {
/*< 80>*/ 	start()
/*< 91>*/ 	temp_flags[5 /* 0x1 20 */] = true;
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00Nous sommes dans les <b<gorges de Lanelle>>.\nUne ancienne légende dit que cet endroit était habité\npar l'un des dragons serviteurs de la Déesse.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00Ce site était utilisé par une ancienne civilisation\ncomme carrière d'extraction de chronolithes de\nqualité.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Je vois que tu es un passionné!\nTu n'as pas investi pour rien, tu vas voir!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09Les fouilles, ça t'intéresse?<pause3C> J'ai une proposition\nà te faire...<pause3C> Tu vas sauter sur l'occasion!\n\n\n\x0E\x01\x09\x04\x2F00\xD07Les recherches, ça demande de l'argent.\nÇa te dirait pas d'investir dans les miennes?\n10 rubis seulement!\n\n[1]D'accord[2-]Non merci")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf("\x0E\x01\x09\x04\x2F02\x208Merci! Tu verras, tu ne le regretteras\npas, c'est certain!")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf("Oh, t'as pas d'argent? Reviens me voir\nquand tu seras prêt à investir!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDOh, dommage.<pause1E> J'ai bien l'impression que\nles fouilles, ça n'intéresse plus personne...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00C'est pour cette raison qu'on y retrouve des traces\nde rails, de wagons et de minerais.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Par ici s'étend la mer de sable de\nLanelle, qui regorge de vestiges\ndu passé.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Il arrive que les Bokoblins portent un cor de monstre\nà leur ceinture.\n\n\nVous pouvez le leur <r<arracher avec votre fouet>>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("Au\x2010devant s'étend le désert\nde Lanelle. La raffinerie en\nson milieu recèle de nombreux\nmystères.")
          }

          void entrypoint_404_01() {
          	start()
/*< 88>*/ 	check_item_flag(198, 1)
/*< 89>*/ 	switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 36}) {
          	  case 0:
/*<165>*/ 		story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = false;
/*< 90>*/ 		changeScene(18, 0) // 
          	  case 1:
/*< 40>*/ 		check_item_flag(497, 1)
/*< 41>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 16}) {
          		  case 0:
/*<103>*/ 			switch (scene_flags[22 /* 0x3 40 */]) {
          			  case 0:
/*<105>*/ 				printf("Dis\x2010moi, Link, est\x2010ce que\ntu connaitrais un endroit où l'arbre pourrait\n<r<pousser rapidement>>?\n\n\x0E\x01\x09\x04\x11\x804Je serais sauvé... kof... si je mangeais\nun <r<fruit de l'arbre de vie>>...\n\n\n\x0E\x01\x09\x04\x08\xA00Mais la pousse ne peut être plantée n'importe\noù... Cherche une <r<terre fertile>>.")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03Oh, Link.<pause0F>\nTu as la <r<pousse de l'arbre de vie>>...\n\n\nC'est triste à dire, mais je pense qu'il est trop\ntard pour moi...<pause1E> Je ne peux pas attendre que\nl'arbre pousse. \x0E\x01\x09\x04\x08\x110CKof, kof...\n\nSi j'avais la santé, je pourrais te chanter\ntoutes les chansons que tu veux...<pause1E> \x0E\x01\x09\x04\x08\x1102Kof, kof...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("Peux\x2010tu m'apporter rapidement un <b<fruit de\nl'arbre de vie>>, Link?")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("Les petits robots d'ici ont bien essayé de planter\nune <r<pousse de l'arbre de vie>>, car on dit que ses\nfruits peuvent guérir toutes les maladies...\n\nIls l'ont plantée là\x2010bas, mais...<pause14> Kof...\x0E\x01\x09\x04\x08\x110C<pause1E>\n\x0E\x01\x09\x04\x00\x00Elle ne pousse pas très bien...<pause1E> Kof...\x0E\x01\x09\x04\x08\x110C<pause2D>\n\x0E\x01\x09\x04\x11\x804Je crois que c'en est bientôt fini de moi...<pause14>")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDKof, kof...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03Oh!<pause14> Ça fait très longtemps que je n'ai pas\nreçu de visiteur comme toi!\n\n\n\x0E\x01\x09\x04\x08\xA00Tu es un <b<humain>>, n'est\x2010ce pas?\nQu'est\x2010ce qui t'amène ici?\n\n\n<pause0F>.<pause0F>.<pause0F>.\n\n\n\n\x0E\x01\x09\x04\x11\x80CTu t'appelles Link et tu viens\ndu <b<ciel>>? \x0E\x01\x06\x02\xFFCDKof...<pause0F> On dirait qu'il manque quelque\nchose à ton nom...\n\n\x0E\x01\x09\x04\x08\xA00Que dirais\x2010tu de t'appeler\n<r<DL\x2010Link\x201016>>, comme\nles habitants d'ici? .<pause14>.<pause14>.<pause14>\n\nÇa n'a pas l'air de t'enchanter.<pause0F> Dommage...<pause0F>\n\x0E\x01\x09\x04\x08\x802Kof, kof... Qu'est\x2010ce que je peux faire pour toi?\n\n\n\x0E\x01\x09\x04\x08\xA03Oh...<pause1E> Kof... Tu veux que je t'apprenne\nune chanson?")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Ah oui, Link, tu disais que tu\nvenais du ciel... Tu es donc l'élu de la Déesse?\n\n\nJe vois... C'est quand même bien, oui.\n\n\n\n\x0E\x01\x09\x04\n\xA00Par contre, je suis bien triste de t'annoncer\nque je ne suis pas en mesure de t'aider pour\nle moment.\n\n\x0E\x01\x09\x04\n\xA00J'ai encore la force d'en plaisanter, mais\ncomme tu peux le voir...<pause1E> \x0E\x01\x09\x04\x00\x0CKof...\n\n\n\x0E\x01\x09\x04\n\xA00Je suis très malade, et je ne suis pas du tout\nen état de chanter!\n\n\n\x0E\x01\x09\x04\x11\x804Alors que la Déesse m'a confié cette importante\nmission... J'ai vraiment honte.")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("Vers les mines de Lanelle,\npour percer le mystère\ndes chronolithes...")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf("...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Entrée strictement interdite sans\nautorisation de <b<Lanelle>>, le <b<dragon\nde foudre>>.")
          }

