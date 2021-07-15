          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf("La vue est magnifique, ici! Vrrzt!")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf("Brrm, brrzt! Mais c'est...<pause1E> Va tout de\nsuite l'apporter au <b<dragon de foudre>>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf("\x0E\x01\x09\x04\x03\xC00Il est inutile de planter cette pousse\ndans les <b<terres de Lanelle>>. Vrrrm.\n\x0E\x01\x09\x04\x00\x900Tout repose sur toi!\n\n\x0E\x01\x09\x04\x03\x900Avec un <r<fruit de l'arbre de vie>>, brt, le\ndragon de foudre retrouvera la santé!<pause1E>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf("\x0E\x01\x09\x04\x03\x900Que veux\x2010tu faire avec cette pousse?<pause1E>\nPour soigner le <b<dragon de foudre>>, il\nfaut un <r<fruit de l'arbre de vie>>! Vrrm!\n\n\x0E\x01\x09\x04\x03\x900Veux\x2010tu nous aider à le sauver\navec cette pousse? Bzzrt?\n[1]Bien sûr[2]Je l'ai prise\ncomme ça")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf("\x0E\x01\x09\x04\x03\x900Vraiment? Vrrm? Merci! Brrzt! Va la\nplanter dans une terre plus fertile, vrt!\n\n\n\x0E\x01\x09\x04\x03\x900C'est <r<impossible ici, dans les terres de\nLanelle>>.<pling> On compte sur toi! Brrzt!")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf("\x0E\x01\x09\x04\x03\x900Peu importe la raison, après tout! Brt.\nVa planter cette pousse dans une terre\nplus fertile! Brrrzt!\n\n\x0E\x01\x09\x04\x03\x900Ici, sur les <r<terres de Lanelle, elle\npourra pas grandir>>. Vrrzt!<pling> On\ncompte sur toi.")
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
/*<124>*/ 			printf("\x0E\x01\x09\x04\x2F08\xD09Je vois que tu es passionné!\nSi tu apprends quoi que ce soit à propos\ndes trois dragons, viens vite\nm'en parler!")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf("\x0E\x01\x09\x04\x2F00\x06Tu as quelque chose à me dire?\nSi tu apprends quoi que ce soit à propos\ndes trois dragons, viens vite m'en\nparler!")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD0AOh, quelle surprise de faire une\nrencontre ici!<pause1E> Je suis <b<Venturo>>, et\nj'étudie la <r<légende des trois dragons\n>>dans ce désert.\n\x0E\x01\x09\x04\x2F00\x07Je sais qu'il n'y a pas l'air d'avoir\ngrand\x2010chose dans le coin, mais c'est\njustement le genre d'endroit qu'il\nfaut fouiller!\nTu t'appelles Link?\nQuel nom étrange...\n\n\n\x0E\x01\x09\x04\x2F01\xD00Et qu'est\x2010ce que tu viens faire ici,\nLink?\n\n\n.<pause0F>.<pause0F>.<pause0F>\n<b<\x0E\x01\x09\x04\x2F00\x07>>Tu cherches la <b<flamme sacrée>>?\nJ'ai déjà entendu parler de ça quelque\npart...<pause19> mais peut\x2010être pas...\n\x0E\x01\x09\x04\x2F0F\x709Oui!!!<pause19> \x0E\x01\x09\x04\x2F00\xD00Je me souviens!\nLes écrits anciens sur la <b<mer de sable\nde Lanelle >>en faisaient mention...\n\n\x0E\x01\x09\x04\x2F08\xD00Je ne me souviens plus des détails, mais\nsi tu continues tout droit, tu arriveras\nà la mer de sable de Lanelle.")
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
/*<156>*/ 		printf("\x0E\x01\x09\x04\x2F08\x709\x0E\x03\x01\x00Link! Tu es allé sur le\nterritoire du dragon?<pause54>\n\n\n\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x08\x02\x2CDJe t'envie! J'aimerais\ntellement y aller!<pause5A>\n\n\n\x0E\x01\x09\x04\x2F0F\x706\x0E\x01\x08\x02\x2CDTu m'as damé le pion!")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf("<r<\x0E\x01\x09\x04\x2F08\xD0A>>En creusant, j'ai découvert la voie vers\nle <r<dragon de foudre>>...<pause2D>\n\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F0D\x800Mais le passage est trop étroit pour moi\net je n'ai pas pu passer.\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x09\x04\x2F08\x700Je ne sais pas quoi faire...")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Salut, Link!\n\n\n\nAlors, cette <b<flamme sacrée>>,\ntu l'as trouvée?\n\n\nDepuis que tu m'en as parlé, j'ai du mal\nà penser à autre chose... Dis\x2010moi tout!\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Oh, tu l'as trouvée après toutes ces\naventures!\n\n\nT'es un sacré numéro,\nLink!")
/*<170>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0ADe mon côté, j'ai fait quelques\ndécouvertes sur les trois dragons.\nLaisse\x2010moi t'en parler.<pause0F>\n\nIl semblerait qu'il y ait une terre\nencore inexplorée un peu plus loin!\n\n\nJ'ai trouvé un <r<passage étroit>><pling>, mais je\nsuis trop gros pour l'emprunter...\n\n\n\x0E\x01\x09\x04\x2F00\xD00Je pense qu'il s'agit de l'endroit où se\ncache le <r<dragon de foudre>>, l'un des\ntrois dragons de légende!\n\n\x0E\x01\x09\x04\x2F00\x800Les robots aux alentours doivent avoir\nun lien avec lui.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots\net les chronolithes<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure!")
/*<146>*/ 				printf("\x0E\x01\x09\x04\x08\xD00J'allais oublier, Link.\nÇa fait un bon bout de temps que tu\nas investi dans mes recherches!<pause14>\n\nJ'ai réussi à trouver des tas de\nchronolithes... \x0E\x01\x09\x04\x2F00\xD01Je peux te rembourser\ndix fois ce que tu m'as donné!")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD02Salut, Link!\n\n\n\nAlors, cette <b<flamme sacrée>>,\ntu l'as trouvée?\n\n\nDepuis que tu m'en as parlé, j'ai du mal\nà penser à autre chose... Dis\x2010moi tout!\n\n\n\x0E\x01\x09\x04\x2F08\x407.<pause14>.<pause14>.<pause14> Oh, tu l'as trouvée après toutes ces\naventures!\n\n\nT'es un sacré numéro,\nLink!")
/*<171>*/ 				printf("\x0E\x01\x09\x04\x2F08\xD0ADe mon côté, j'ai fait quelques\ndécouvertes sur les trois dragons.\nLaisse\x2010moi t'en parler.<pause0F>\n\nIl semblerait qu'il y ait une terre\nencore inexplorée un peu plus loin!\n\n\nJ'ai trouvé un <r<passage étroit>><pling>, mais je\nsuis trop gros pour l'emprunter...\n\n\n\x0E\x01\x09\x04\x2F00\xD00Je pense qu'il s'agit de l'endroit où se\ncache le <r<dragon de foudre>>, l'un des\ntrois dragons de légende!\n\n\x0E\x01\x09\x04\x2F00\x800Les robots aux alentours doivent avoir\nun lien avec lui.<pause0F>\n\n\n\x0E\x01\x09\x04\x2F01\x807\x0E\x01\x06\x02\xFFCDLe <r<dragon de foudre>>, les robots\net les chronolithes<pause14>.<pause14>.<pause14>.<pause14>\n\n\n\x0E\x01\x09\x04\x2F08\x708\x0E\x01\x08\x02\x2CD\x0E\x01\x08\x02\x2CDQuelle aventure!")
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
/*< 46>*/ 			printf("Grâce à toi, le dragon de foudre est\nguéri! Bvvzziit! Mille mercis!")
          		  case 1:
/*<136>*/ 			printf("Tu es venu voir le dragon de foudre?\nBrrrzt?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf("Le dragon de foudre guérira s'il\nmange un <r<fruit de l'arbre de vie>>!\nVrrrrm!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Il n'y a que de l'herbe et des fleurs qui\npoussent par ici...<pause1E> \x0E\x01\x09\x04\x01\xC00Si on ne fait rien,<b<\x0E\x01\x06\x02\xFECD>> le\ndragon de foudre risque de... brrrzt...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x00\x00Je suis si inquiet pour le dragon de\nfoudre... S'il te plaît, cherche le <r<fruit\nde l'arbre de vie>>! Bzzt!")
          					  case 1:
/*< 37>*/ 						printf("\x0E\x01\x09\x04\x03\x900On a planté une <r<pousse de l'arbre de vie\n>>là\x2010bas, pour que le dragon de foudre\npuisse guérir grâce à son fruit... Vrrm.")
          					}
          				  case 1:
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x03\xC00C'est terrible! Brrztz! Le <b<dragon\nde foudre >>est malade...<pause0F>Vrrrrm...\n\n\n\x0E\x01\x09\x04\x03\xC00Pour utiliser les chronolithes du coin,\nil faut l'autorisation du dragon...<pause1E> Vrm.\n\x0E\x01\x09\x04\x01\xC00Mais ce n'est pas vraiment ça\nle problème le plus urgent!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf("\x0E\x01\x09\x04\x2F0C\xD01\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x2F00\x01Hé! Toi là\x2010bas!\nTu es Link,\nn'est\x2010ce pas?\n\n\x0E\x01\x06\x02\xFFCD\x0E\x01\x08\x02\x1CDTu tombes à pic!<pause0F>\nJe voulais te voir, justement.<pause0F>\n\n\n\x0E\x01\x06\x02\x2CD\x0E\x01\x08\x02\x1CDViens donc par ici!")
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
/*<164>*/ 	printf("\x0E\x01\x09\x04\x2F08\x709Oh, Link! J'ai trouvé un\ntrou qui doit mener quelque part!\n\n\nMais la roche est vraiment très solide...\nÇa devrait prendre encore un peu de\ntemps avant qu'on puisse passer.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf("Si tu ne te dépêches pas, tu n'y\narriveras pas! Vzrrt!")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x03\x900Ici, il y a plein de grands chronolithes.<pause1E>\n\x0E\x01\x09\x04\x00\x900Toi aussi tu as reçu l'autorisation du\n<b<dragon de foudre>> pour venir ici? Vrm?\n\n\x0E\x01\x09\x04\x01\x900J'étais justement en train de lui en\napporter un. Bzzrt.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf("\x0E\x01\x05\x04(\x00Ça grouille de monstres un peu\nplus loin! Vrrrm!<pause0F> \x0E\x01\x09\x04\x03\xC00Fais bien attenztzt...")
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
/*< 48>*/ 			printf("Le dragon de foudre est de très bonne\nhumeur. Brzzzrt!")
          		  case 1:
/*<137>*/ 			printf("Le dragon de foudre est en\nbonne santé! Brrtzt!")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf("Brritzz! Que penses\x2010tu faire de ce\nbeau fruit?<pause2D> Tu vas l'apporter au\n<b<dragon de foudre>>? Vrrm?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x03\xC00Les arbres poussent très mal ici, dans\nles <b<terres de Lanelle>>... Vrrrm.<pause1E>\n\x0E\x01\x09\x04\x03\x900Il doit bien exister un endroit où ils\npoussent plus vite... Bzzrt!")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf("De l'autre côté du pont, nous avons\nplanté une <r<pousse de l'arbre de vie>>,\ndont les fruits guérissent tous les\nmaux. Vrrrrzt.<pause1E>\n\x0E\x01\x09\x04\x00\xC00Mais les arbres poussent très mal ici...\nVrrrm.")
          				  case 1:
/*< 16>*/ 					printf("\x0E\x01\x09\x04\x03\x900Avec l'autorisation du dragon de\nfoudre, vrzt, nous creusons ici à\nla recherche de <b<chronolithes>>.\n\n<pause1E>\x0E\x01\x09\x04\x03\xC00Mais le <b<dragon >>est en mauvaise santé...<pause0F>\nNous sommes inquiets pour lui. Vrrm...<pause1E>\n\x0E\x01\x09\x04\x01\xC00Sa vie est en danger... Brrzzt!")
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
/*<140>*/ 	printf("\x0E\x01\x09\x04\x0B\x901\x0E\x03\x01\x00Link, tu m'as sauvé la vie!\nJe voudrais t'en remercier.\n\n\n\x0E\x01\x09\x04\x00\x900Je vais te préparer une surprise.\nReviens bientôt! Tu vas voir, c'en\nvaut la peine!")
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
/*< 81>*/ 	printf("\x0E\x01\x05\x04K\x00Nous sommes dans les <b<gorges de\nLanelle>>. Une ancienne légende dit que\ncet endroit était habité par l'un des\ndragons serviteurs de la Déesse.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x05\x04Z\x00Ce site était utilisé par une ancienne\ncivilisation comme carrière\nd'extraction de chronolithes de qualité.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf("\x0E\x01\x09\x04\x2F08\xD09Je vois que tu es un passionné!\nTu n'as pas investi pour rien,\ntu vas voir!")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x2F00\xD09Les fouilles, ça t'intéresse?<pause3C>\nJ'ai une proposition à te faire...<pause3C>\nTu vas sauter sur l'occasion!\n\n\x0E\x01\x09\x04\x2F00\xD07Les recherches, ça demande de\nl'argent.<pause1E> Ça te dirait pas d'investir\ndans les miennes? 10 rubis seulement!\n\n[1]D'accord[2-]Non merci")
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
/*< 65>*/ 				printf("Oh, t'as pas d'argent?\nReviens me voir quand tu seras prêt\nà investir!")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x2F01\x805\x0E\x01\x06\x02\xFFCDOh, dommage.<pause1E>\nJ'ai bien l'impression que les fouilles,\nça n'intéresse plus personne...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x05\x04Z\x00C'est pour cette raison qu'on y\nretrouve des traces de rails,\nde wagons et de minerai.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("Par ici s'étend la mer de\nsable de Lanelle, qui regorge\nde vestiges du passé.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf("Il arrive que les bokoblins portent un\ncor de monstre à leur ceinture.\n\n\nVous pouvez le leur <r<arracher avec\nvotre fouet>>.")
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
/*<105>*/ 				printf("Dis\x2010moi, Link, est\x2010ce que\ntu connaitrais un endroit où l'arbre\npourrait <r<pousser rapidement>>?\n\n\x0E\x01\x09\x04\x11\x804Je serais sauvé... kof... si je mangeais\nun <r<fruit de l'arbre de vie>>...\n\n\n\x0E\x01\x09\x04\x08\xA00Mais la pousse ne peut être plantée\nn'importe où... Cherche une <r<terre\nfertile>>.")
          			  case 1:
/*< 42>*/ 				printf("\x0E\x01\x09\x04\x08\xA03Oh, Link.<pause0F>\nTu as la <r<pousse de l'arbre de vie>>...\n\n\nC'est triste à dire, mais je pense qu'il\nest trop tard pour moi...<pause1E> Je ne peux pas\nattendre que l'arbre pousse. \x0E\x01\x09\x04\x08\x110CKof, kof...\n\nSi j'avais la santé, je pourrais te\nchanter toutes les chansons que tu\nveux...<pause1E> \x0E\x01\x09\x04\x08\x1102Kof, kof...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf("Peux\x2010tu m'apporter rapidement un\n<b<fruit de l'arbre de vie>>, \nLink?")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf("Les petits robots d'ici ont bien essayé\nde planter une <r<pousse de l'arbre de vie>>,\ncar on dit que ses fruits peuvent guérir\ntoutes les maladies...\nIls l'ont plantée là\x2010bas, mais...<pause14> Kof...\x0E\x01\x09\x04\x08\x110C<pause1E>\n\x0E\x01\x09\x04\x00\x00Elle ne pousse pas très bien...<pause1E> Kof...\x0E\x01\x09\x04\x08\x110C<pause2D>\n\x0E\x01\x09\x04\x11\x804Je crois que c'en est bientôt fini de\nmoi...<pause14>")
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x11\x804\x0E\x01\x08\x02\x2CD\x0E\x01\x06\x02\xFFCDKof, kof...<pause1E>\n\n\n\n\x0E\x01\x09\x04\x08\xA03Oh!<pause14> Ça fait très longtemps que je n'ai\npas reçu de visiteur comme toi!\n\n\n\x0E\x01\x09\x04\x08\xA00Tu es un <b<humain>>, n'est\x2010ce pas?\nQu'est\x2010ce qui t'amène ici?\n\n\n<pause0F>.<pause0F>.<pause0F>.\n\n\n\n\x0E\x01\x09\x04\x11\x80CTu t'appelles Link et tu\nviens du <b<ciel>>? \x0E\x01\x06\x02\xFFCDKof...<pause0F> On dirait qu'il\nmanque quelque chose à ton nom...\n\n\x0E\x01\x09\x04\x08\xA00Que dirais\x2010tu de t'appeler\n<r<DL\x2010Link\x201016>>, comme\nles habitants d'ici? .<pause14>.<pause14>.<pause14>\n\nÇa n'a pas l'air de t'enchanter.<pause0F>\nDommage...<pause0F> \x0E\x01\x09\x04\x08\x802Kof, kof...\nQu'est\x2010ce que je peux faire pour toi?\n\n\x0E\x01\x09\x04\x08\xA03Oh...<pause1E> Kof... Tu veux que je t'apprenne\nune chanson?")
/*<130>*/ 					printf("\x0E\x01\x09\x04\x08\xA00Ah oui, Link, tu disais\nque tu venais du ciel... Tu es donc\nl'élu de la Déesse?\n\nJe vois... C'est quand même bien, oui.\n\n\n\n\x0E\x01\x09\x04\n\xA00Par contre, je suis bien triste de\nt'annoncer que je ne suis pas en\nmesure de t'aider pour le moment.\n\n\x0E\x01\x09\x04\n\xA00J'ai encore la force d'en plaisanter,\nmais comme tu peux le voir...<pause1E> \x0E\x01\x09\x04\x00\x0CKof...\n\n\n\x0E\x01\x09\x04\n\xA00Je suis très malade, et je ne suis pas du\ntout en état de chanter!\n\n\n\x0E\x01\x09\x04\x11\x804Alors que la Déesse m'a confié cette\nimportante mission...\nJ'ai vraiment honte.")
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
/*< 93>*/ 	printf("Entrée strictement interdite\nsans autorisation de <b<Lanelle>>, le\n<b<dragon de foudre>>.")
          }

