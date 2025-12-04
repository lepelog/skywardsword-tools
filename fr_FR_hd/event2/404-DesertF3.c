          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "La vue est magnifique, ici !")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "Oh, mais c'est...<pause 30> Va tout de suite l'apporter au\n<color blue<dragon de foudre >coloroff>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030c00>Il est inutile de planter cette pousse dans les\n<color blue<terres de Lanelle>coloroff>. <0x10009:0x00000900>Tout repose sur toi !\n\n\n<0x10009:0x00030900>Avec un <color red<fruit de l'arbre de vie>coloroff>, le dragon de\nfoudre retrouvera la santé !<pause 30>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00030900>Que veux‐tu faire avec cette pousse ?<pause 30> Pour\nsoigner le <color blue<dragon de foudre>coloroff>, il faut un <color red<fruit\nde l'arbre de vie >coloroff>!\n\n<0x10009:0x00030900>Tu souhaites nous aider à le sauver avec cette\npousse ?\n[1-]Bien sûr[2-]Je l'ai prise\ncomme ça")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>Vraiment ? Merci ! Va la planter dans une\nterre plus fertile, alors !\n\n\n<0x10009:0x00030900>C'est <color red<impossible ici, dans les terres de Lanelle>coloroff>.\n<sound 4>On compte sur toi !")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00030900>Peu importe la raison, après tout ! Va planter\ncette pousse dans une terre plus fertile !\n\n\n<0x10009:0x00030900>Ici, sur les <color red<terres de Lanelle, elle pourra pas\ngrandir>coloroff>.<sound 4> On compte sur toi !")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00030c00>Ça fait un moment que le <color blue<dragon de foudre\n>coloroff>n'est plus en bonne santé...<pause 15> Les arbres ne\npoussent pas bien, ici...<pause 30><0x10009:0x00010c00> Et nous avons peu de\ntemps...")
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
/*<124>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x2f080d09>Je vois que tu es passionné ! Si tu apprends\nquoi que ce soit à propos des trois dragons,\nviens vite m'en parler !")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x2f000006>Tu as quelque chose à me dire ? Si tu apprends\nquoi que ce soit à propos des trois dragons,\nviens vite m'en parler !")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x2f000d0a>Oh, quelle surprise de faire une rencontre ici !\nJe suis <color blue<Venturo>coloroff>, et j'étudie la <color red<légende des trois\ndragons >coloroff>dans ce désert.\n\n<0x10009:0x2f000007>Je sais qu'il n'y a pas l'air d'avoir grand‐chose\ndans le coin, mais c'est justement le genre\nd'endroit qu'il faut fouiller !\n\nTu t'appelles <heroname> ? Quel nom\nétrange...\n\n\n<0x10009:0x2f010d00>Et qu'est‐ce que tu viens faire ici,\n<heroname> ?\n\n\n.<pause 15>.<pause 15>.<pause 15> <color blue<<0x10009:0x2f000007>>coloroff>Tu cherches la <color blue<flamme sacrée >coloroff>? J'ai déjà\nentendu ça quelque part...<pause 25> ou pas... <0x10009:0x2f0f0709>Oui !!!<pause 25> <0x10009:0x2f000d00>\nJe me souviens ! Les écrits anciens sur la <color blue<mer\nde sable de Lanelle >coloroff>en faisaient mention...\n<0x10009:0x2f080d00>Je ne me souviens plus des détails, mais si tu\ncontinues tout droit, tu arriveras à la mer de\nsable de Lanelle.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x2f080d00>Si tu vas à la mer de sable de Lanelle, utilise\ncette clé.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x2f080d09>Bonne chance !")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x2f080709><0x30001:0x><heroname> ! Tu es allé sur le\nterritoire du dragon ?<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>Oh non, j'aimerais tant y aller\naussi !<pause 90>\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Tu m'as doublé !")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 0, unk: 1, line: 55 */ "<color red<<0x10009:0x2f080d0a>>coloroff>En creusant, j'ai découvert la voie vers le\n<color red<dragon de foudre>coloroff>...<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Mais le passage est trop étroit pour moi et je\nn'ai pas pu passer. <0x10006:0xffcd><0x10009:0x2f080700>Je ne sais pas quoi faire...")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x2f080d02>Salut, <heroname> !\n\n\n\nAlors, cette <color blue<flamme sacrée>coloroff>, tu l'as trouvée ?\n\n\n\nDepuis que tu m'en as parlé, j'ai du mal à\npenser à autre chose... Dis‐moi tout !\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Oh, tu l'as trouvée après toutes ces\naventures !\n\n\nT'es un sacré numéro, <heroname> !")
/*<170>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>De mon côté, j'ai fait quelques découvertes sur\nles trois dragons. Laisse‐moi t'en parler.<pause 15>\n\n\nIl semblerait qu'il y ait une terre encore\ninexplorée un peu plus loin !\n\n\nJ'ai trouvé un <color red<passage étroit>coloroff><sound 4>, mais je suis trop\ngros pour l'emprunter...\n\n\n<0x10009:0x2f000d00>Je pense qu'il s'agit de l'endroit où se cache le\n<color red<dragon de foudre>coloroff>, l'un des trois dragons de\nlégende !\n\n<0x10009:0x2f000800>Les robots aux alentours doivent avoir un lien\navec lui.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>Le <color red<dragon de foudre>coloroff>, les robots et les\nchronolithes<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Quelle aventure !")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>Oh, <heroname>, ça fait un moment que\ntu as investi dans mes recherches !<pause 20>\n\n\nJ'ai réussi à trouver des tas de chronolithes...\n<0x10009:0x2f000d01>Je peux te rembourser dix fois ce que tu m'as\ndonné !")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x2f080d02>Salut, <heroname> !\n\n\n\nAlors, cette <color blue<flamme sacrée>coloroff>, tu l'as trouvée ?\n\n\n\nDepuis que tu m'en as parlé, j'ai du mal à\npenser à autre chose... Dis‐moi tout !\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Oh, tu l'as trouvée après toutes ces\naventures !\n\n\nT'es un sacré numéro, <heroname> !")
/*<171>*/ 				printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>De mon côté, j'ai fait quelques découvertes sur\nles trois dragons. Laisse‐moi t'en parler.<pause 15>\n\n\nIl semblerait qu'il y ait une terre encore\ninexplorée un peu plus loin !\n\n\nJ'ai trouvé un <color red<passage étroit>coloroff><sound 4>, mais je suis trop\ngros pour l'emprunter...\n\n\n<0x10009:0x2f000d00>Je pense qu'il s'agit de l'endroit où se cache le\n<color red<dragon de foudre>coloroff>, l'un des trois dragons de\nlégende !\n\n<0x10009:0x2f000800>Les robots aux alentours doivent avoir un lien\navec lui.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>Le <color red<dragon de foudre>coloroff>, les robots et les\nchronolithes<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Quelle aventure !")
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
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Grâce à toi, le dragon de foudre est guéri !\nYoupi !")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Tu es venu voir le dragon de foudre ?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "Le dragon de foudre guérira s'il mange un\n<color red<fruit de l'arbre de vie >coloroff>!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00030c00>Il n'y a que de l'herbe et des fleurs qui poussent\npar ici...<pause 30> <0x10009:0x00010c00>Si on ne fait rien, le dragon de foudre\nrisque de...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Je suis si inquiet pour le dragon de foudre...\nS'il te plaît, cherche le <color red<fruit de l'arbre de vie >coloroff>!")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00030900>On a planté une <color red<pousse de l'arbre de vie >coloroff>là‐bas,\npour que le dragon de foudre puisse guérir\ngrâce à son fruit...")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>C'est terrible ! Le <color blue<dragon de foudre >coloroff>est\nmalade...<pause 15>\n\n\n<0x10009:0x00030c00>Pour utiliser les chronolithes du coin, il faut\nl'autorisation du dragon...<pause 30> <0x10009:0x00010c00>Mais ce n'est pas\nvraiment ça le problème le plus urgent !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Hé ! Toi là‐bas ! Tu es\n<heroname>, n'est‐ce pas ?\n\n\n<0x10006:0xffcd><0x10008:0x01cd>Tu tombes à pic !<pause 15> Je voulais te voir,\njustement.<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Viens donc par ici !")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Oh, <heroname> ! J'ai trouvé un trou\nqui doit mener quelque part !\n\n\nMais la roche est vraiment très solide... Ça\ndevrait prendre encore un peu de temps avant\nqu'on puisse passer.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "Si tu te dépêches pas, tu vas pas y arriver !")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00030900>Ici, il y a plein de grands chronolithes.<pause 30> <0x10009:0x00000900>Toi aussi\ntu as reçu l'autorisation du <color blue<dragon de foudre\n>coloroff>pour venir ici ?\n\n<0x10009:0x00010900>J'étais justement en train de lui en apporter un.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>Ça grouille de monstres un peu plus loin !<pause 15>\n<0x10009:0x00030c00>Fais bien att...")
          	}
          }

          void entrypoint_404_08() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "...")
          }

          void entrypoint_404_09() {
/*< 15>*/ 	start()
/*< 47>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*<134>*/ 		switch (temp_flags[63 /* 0x6 80 */]) {
          		  case 0:
/*< 48>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "Le dragon de foudre est de bonne humeur.")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Le dragon de foudre est en bonne santé !")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "Oh, que comptes‐tu faire de ce fruit ?<pause 45> Tu vas\nl'apporter au <color blue<dragon de foudre >coloroff>?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>Les arbres poussent très mal ici, dans les\n<color blue<terres de Lanelle>coloroff>...<pause 30> <0x10009:0x00030900>Il doit bien exister un\nendroit où ils poussent plus vite...")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 0, unk: 0, line: 35 */ "De l'autre côté du pont, nous avons planté\nune <color red<pousse de l'arbre de vie>coloroff>, dont les fruits\nguérissent tous les maux.<pause 30>\n\n<0x10009:0x00000c00>Mais les arbres poussent très mal ici...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00030900>Avec l'autorisation du dragon de foudre, nous\ncreusons ici à la recherche de <color blue<chronolithes>coloroff>.\n\n\n<pause 30><0x10009:0x00030c00>Mais le <color blue<dragon >coloroff>est en mauvaise santé...<pause 15> Nous\nsommes inquiets pour lui.<pause 30> <0x10009:0x00010c00>Sa vie est en danger...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901><0x30001:0x><heroname>, tu m'as sauvé la vie ! Je\nvoudrais t'en remercier.\n\n\n<0x10009:0x00000900>Je vais te préparer une surprise. Reviens\nbientôt, et tu pourras en profiter.")
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
/*< 81>*/ 	printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10005:0x004b0000>Nous sommes dans les <color blue<gorges de Lanelle>coloroff>. Une\nancienne légende dit que cet endroit était habité\npar l'un des dragons serviteurs de la Déesse.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10005:0x005a0000>Ce site était utilisé par une ancienne civilisation\ncomme carrière d'extraction de chronolithes de\nqualité.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>Je vois que tu es un passionné ! Tu n'as pas\ninvesti pour rien, tu verras !")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x2f000d09>Les fouilles, ça t'intéresse ?<pause 60> J'ai une proposition\nà te faire...<pause 60>\n\n\n<0x10009:0x2f000d07>Les recherches, ça demande de l'argent.<pause 30> Ça te\ndirait pas d'investir dans les miennes ? 10 rubis\nseulement !\n\n[1-]D'accord[2]Non merci")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x2f020208>Merci ! Tu verras, tu n'as pas investi en vain.")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "Oh, t'as pas d'argent ? Reviens me voir quand\ntu seras prêt à investir !")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>Oh, dommage. <pause 30>J'ai bien l'impression que les\nfouilles, ça n'intéresse plus personne...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10005:0x005a0000>C'est pour cette raison qu'on y retrouve des traces de\nrails, de wagons et de minerai.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Par ici s'étend la mer de sable de\nLanelle, qui regorge de vestiges\ndu passé.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Il arrive que les Bokoblins portent un cor de monstre\nà leur ceinture.\n\n\nVous pouvez le leur <color red<arracher avec votre fouet>coloroff>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "Au‐devant s'étend le désert\nde Lanelle. La raffinerie en\nson milieu recèle de nombreux\nmystères.")
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
/*<105>*/ 				printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x30001:0x><heroname>, connaîtrais‐tu un endroit où\nl'arbre pourrait <color red<pousser rapidement >coloroff>?\n\n\n<0x10009:0x00110804>Je serais sauvé... kof... si je mangeais un <color red<fruit\nde l'arbre de vie>coloroff>...\n\n\n<0x10009:0x00080a00>Mais la pousse ne peut être plantée n'importe\noù... Cherche une <color red<terre fertile>coloroff>.")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00080a03>Oh, <heroname>.<pause 15> Tu as la <color red<pousse de\nl'arbre de vie>coloroff>...\n\n\nC'est triste à dire, mais je pense qu'il est trop\ntard pour moi...<pause 30> Je ne peux attendre que l'arbre\npousse. <0x10009:0x0008110c>Kof, kof...\n\nSi j'avais la santé, je pourrais te chanter toutes\nles chansons que tu veux...<pause 30> <0x10009:0x00081102>Kof, kof...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 1, line: 10 */ "Peux‐tu m'apporter rapidement un <color blue<fruit de\nl'arbre de vie>coloroff>, <heroname> ?")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "Les petits robots d'ici ont bien essayé de planter\nune <color red<pousse de l'arbre de vie>coloroff>, dont les fruits\npeuvent guérir toutes les maladies...\n\nIls l'ont plantée là‐bas, mais...<pause 20> Kof...<0x10009:0x0008110c><pause 30>\n<0x10009:0x00000000>Elle ne pousse pas très bien...<pause 30> Kof...<0x10009:0x0008110c><pause 45>\n<0x10009:0x00110804>Je crois que c'en est bientôt fini de moi...<pause 20>")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Kof, kof...<pause 30>\n\n\n\n<0x10009:0x00080a03>Oh !<pause 20> Voilà un visiteur bien inattendu !\n\n\n\n<0x10009:0x00080a00>Tu es un <color blue<humain>coloroff>, n'est‐ce pas ? Qu'est‐ce qui\nt'amène ici ?\n\n\n<pause 15>.<pause 15>.<pause 15>.\n\n\n\n<0x10009:0x0011080c>Tu t'appelles <heroname> et tu viens du\n<color blue<ciel>coloroff> ? <0x10006:0xffcd>Kof...<pause 15>\n\n\nIl manque quelque chose à ton nom... <0x10009:0x00080a00>Que\ndirais‐tu de t'appeler <color red<DL‐<heroname>‐16>coloroff>,\ncomme les habitants d'ici ?\n\n.<pause 20>.<pause 20>.<pause 20> Non ?<pause 15> Ah, très bien...<pause 15>\n\n\n\n<0x10009:0x00080802>Kof, kof... Alors, que me veux‐tu ?\n\n\n\n<0x10009:0x00080a03>Oh...<pause 30> Kof... Tu veux que je t'apprenne une\nchanson ?")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Ah oui, <heroname>, tu disais que tu\nvenais du ciel... Tu es donc l'élu de la\nDéesse ? Je vois...\n\n<0x10009:0x000a0a00>Je suis cependant au regret de t'annoncer que\nje ne peux pas t'aider dans l'immédiat...\n\n\n<0x10009:0x000a0a00>J'ai encore la force d'en plaisanter, mais comme\ntu peux le voir...<pause 30> <0x10009:0x0000000c>Kof...\n\n\n<0x10009:0x000a0a00>Je suis très malade, et je ne suis pas du tout en\nétat de chanter !\n\n\n<0x10009:0x00110804>Alors que la Déesse m'a confié cette importante\nmission... J'ai un peu honte.")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "Vers les mines de Lanelle,\npour percer le mystère\ndes chronolithes...")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "Entrée strictement interdite\nsans autorisation de <color blue<Lanelle>coloroff>,\nle <color blue<dragon de foudre>coloroff>.")
          }

