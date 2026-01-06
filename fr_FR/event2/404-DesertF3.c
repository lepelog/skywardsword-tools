          void entrypoint_404_03() {
/*<  3>*/ 	start()
/*< 43>*/ 	switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "La vue est magnifique, ici !")
          	  case 1:
/*< 50>*/ 		check_item_flag(198, 1)
/*< 51>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 24}) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 19 */ "Oh, mais c'est...<pause 30> Va tout de suite\nl'apporter au <color blue<dragon de foudre >coloroff>!")
          		  case 1:
/*< 30>*/ 			check_item_flag(497, 1)
/*< 31>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 10}) {
          			  case 0:
/*<111>*/ 				switch (scene_flags[23 /* 0x3 80 */]) {
          				  case 0:
/*<113>*/ 					printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030c00>Il est inutile de planter cette pousse\ndans les <color blue<terres de Lanelle>coloroff>.\n<0x10009:0x00000900>Tout repose sur toi !\n\n<0x10009:0x00030900>Avec un <color red<fruit de l'arbre de vie>coloroff>, le\ndragon de foudre retrouvera la santé !<pause 30>")
          				  case 1:
/*< 70>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 32, 'param3': 31}
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00030900>Que veux‐tu faire avec cette pousse ?<pause 30>\nPour soigner le <color blue<dragon de foudre>coloroff>,\nil faut un <color red<fruit de l'arbre de vie >coloroff>!\n\n<0x10009:0x00030900>Tu souhaites nous aider à\nle sauver avec cette pousse ?\n[1-]Bien sûr[2-]Je l'ai prise\ncomme ça")
/*<131>*/ 					switch (choice(2)) {
          					  case 0:
/*<132>*/ 						printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00030900>Vraiment ? Merci ! Va la planter dans\nune terre plus fertile, alors !\n\n\n<0x10009:0x00030900>C'est <color red<impossible ici, dans les terres de\nLanelle>coloroff>.<sound 4>\nOn compte sur toi !")
          						flw_72:
/*< 72>*/ 						scene_flags[9 'Lanayru Gorge'][11 /* 0x0 08 */] = true;
/*<112>*/ 						scene_flags[9 'Lanayru Gorge'][23 /* 0x3 80 */] = true;
          					  case 1:
/*<133>*/ 						printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00030900>Peu importe la raison, après tout !\nVa planter cette pousse dans une terre\nplus fertile !\n\n<0x10009:0x00030900>Ici, sur les <color red<terres de Lanelle, elle\npourra pas grandir>coloroff>.<sound 4> On compte sur toi !")
          						goto flw_72
          					}
          				}
          			  case 1:
/*<  4>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00030c00>Ça fait un moment que le <color blue<dragon de\nfoudre >coloroff>n'est plus en bonne santé...<pause 15>\nLes arbres ne poussent pas bien, ici...<pause 30><0x10009:0x00010c00>\nEt nous avons peu de temps...")
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
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x2f080d09>Je vois que tu es passionné !\nSi tu apprends quoi que ce soit à propos\ndes trois dragons, viens vite\nm'en parler !")
          			flw_99:
/*< 99>*/ 			scene_flags[9 'Lanayru Gorge'][107 /* 0xC 08 */] = true;
/*<110>*/ 			scene_flags[9 'Lanayru Gorge'][108 /* 0xC 10 */] = true;
          		  case 1:
/*<109>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x2f000006>Tu as quelque chose à me dire ?\nSi tu apprends quoi que ce soit à propos\ndes trois dragons, viens vite m'en\nparler !")
          			goto flw_99
          		}
          	  case 1:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x2f000d0a>Oh, quelle surprise de faire une\nrencontre ici !<pause 30> Je suis <color blue<Venturo>coloroff>, et\nj'étudie la <color red<légende des trois dragons\n>coloroff>dans ce désert.\n<0x10009:0x2f000007>Je sais qu'il n'y a pas l'air d'avoir\ngrand‐chose dans le coin, mais c'est\njustement le genre d'endroit qu'il\nfaut fouiller !\nTu t'appelles <heroname> ?\nQuel nom étrange...\n\n\n<0x10009:0x2f010d00>Et qu'est‐ce que tu viens faire ici,\n<heroname> ?\n\n\n.<pause 15>.<pause 15>.<pause 15>\n<color blue<<0x10009:0x2f000007>>coloroff>Tu cherches la <color blue<flamme sacrée >coloroff>?\nJ'ai déjà entendu ça quelque part...<pause 25>\nou pas...\n<0x10009:0x2f0f0709>Oui !!!<pause 25> <0x10009:0x2f000d00>Je me souviens !\nLes écrits anciens sur la <color blue<mer de sable\nde Lanelle >coloroff>en faisaient mention...\n\n<0x10009:0x2f080d00>Je ne me souviens plus des détails, mais\nsi tu continues tout droit, tu arriveras\nà la mer de sable de Lanelle.")
/*<125>*/ 		set_camera(2, 0)
/*<126>*/ 		set_camera(-1, 0)
/*<128>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x2f080d00>Si tu vas à la mer de sable de Lanelle,\nutilise cette clé.")
/*<127>*/ 		give_item(1 0x01);
/*<129>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x2f080d09>Bonne chance !")
          		goto flw_99
          	}
          }

          void entrypoint_404_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "...")
          }

          void entrypoint_404_56() {
/*<143>*/ 	start()
/*<155>*/ 	switch (story_flags[526 /* us: 805A9B14 0x08, jp: 805ACD94 0x08 */]) {
          	  case 0:
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x2f080709><0x30001:0x><heroname> ! Tu es allé sur le\nterritoire du dragon ?<pause 84>\n\n\n<0x10009:0x2f010805><0x10008:0x02cd>Oh non, j'aimerais tant\ny aller aussi !<pause 90>\n\n\n<0x10009:0x2f0f0706><0x10008:0x02cd>Tu m'as doublé !")
          		flw_154:
/*<154>*/ 		scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
          	  case 1:
/*<147>*/ 		switch (scene_flags[35 /* 0x5 08 */]) {
          		  case 0:
/*<149>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<color red<<0x10009:0x2f080d0a>>coloroff>En creusant, j'ai découvert la voie vers\nle <color red<dragon de foudre>coloroff>...<pause 45>\n\n\n<0x10006:0xffcd><0x10009:0x2f0d0800>Mais le passage est trop étroit pour moi\net je n'ai pas pu passer.\n<0x10006:0xffcd><0x10009:0x2f080700>Je ne sais pas quoi faire...")
          			goto flw_154
          		  case 1:
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 			switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          			  case 0:
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Salut, <heroname> !\n\n\n\nAlors, cette <color blue<flamme sacrée>coloroff>,\ntu l'as trouvée ?\n\n\nDepuis que tu m'en as parlé, j'ai du mal\nà penser à autre chose... Dis‐moi tout !\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Oh, tu l'as trouvée après toutes ces\naventures !\n\n\nT'es un sacré numéro,\n<heroname> !")
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>De mon côté, j'ai fait quelques\ndécouvertes sur les trois dragons.\nLaisse‐moi t'en parler.<pause 15>\n\nIl semblerait qu'il y ait une terre\nencore inexplorée un peu plus loin !\n\n\nJ'ai trouvé un <color red<passage étroit>coloroff><sound 4>, mais je\nsuis trop gros pour l'emprunter...\n\n\n<0x10009:0x2f000d00>Je pense qu'il s'agit de l'endroit où se\ncache le <color red<dragon de foudre>coloroff>, l'un des\ntrois dragons de légende !\n\n<0x10009:0x2f000800>Les robots aux alentours doivent avoir\nun lien avec lui.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>Le <color red<dragon de foudre>coloroff>, les robots\net les chronolithes<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Quelle aventure !")
/*<146>*/ 				printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080d00>Oh, <heroname>, ça fait un\nmoment que tu as investi dans mes\nrecherches !<pause 20>\n\nJ'ai réussi à trouver des tas de\nchronolithes... <0x10009:0x2f000d01>Je peux te rembourser\ndix fois ce que tu m'as donné !")
/*<145>*/ 				rupees += 100;
          				flw_148:
/*<148>*/ 				scene_flags[9 'Lanayru Gorge'][35 /* 0x5 08 */] = true;
          				goto flw_154
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x2f080d02>Salut, <heroname> !\n\n\n\nAlors, cette <color blue<flamme sacrée>coloroff>,\ntu l'as trouvée ?\n\n\nDepuis que tu m'en as parlé, j'ai du mal\nà penser à autre chose... Dis‐moi tout !\n\n\n<0x10009:0x2f080407>.<pause 20>.<pause 20>.<pause 20> Oh, tu l'as trouvée après toutes ces\naventures !\n\n\nT'es un sacré numéro,\n<heroname> !")
/*<171>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x2f080d0a>De mon côté, j'ai fait quelques\ndécouvertes sur les trois dragons.\nLaisse‐moi t'en parler.<pause 15>\n\nIl semblerait qu'il y ait une terre\nencore inexplorée un peu plus loin !\n\n\nJ'ai trouvé un <color red<passage étroit>coloroff><sound 4>, mais je\nsuis trop gros pour l'emprunter...\n\n\n<0x10009:0x2f000d00>Je pense qu'il s'agit de l'endroit où se\ncache le <color red<dragon de foudre>coloroff>, l'un des\ntrois dragons de légende !\n\n<0x10009:0x2f000800>Les robots aux alentours doivent avoir\nun lien avec lui.<pause 15>\n\n\n<0x10009:0x2f010807><0x10006:0xffcd>Le <color red<dragon de foudre>coloroff>, les robots\net les chronolithes<pause 20>.<pause 20>.<pause 20>.<pause 20>\n\n\n<0x10009:0x2f080708><0x10008:0x02cd><0x10008:0x02cd>Quelle aventure !")
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
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Grâce à toi, le dragon de foudre est\nguéri ! Youpi !")
          		  case 1:
/*<136>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "Tu es venu voir le dragon de foudre ?")
          		}
          	  case 1:
/*< 53>*/ 		check_item_flag(198, 1)
/*< 54>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 26}) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "Le dragon de foudre guérira s'il\nmange un <color red<fruit de l'arbre de vie >coloroff>!")
          		  case 1:
/*< 35>*/ 			check_item_flag(497, 1)
/*< 36>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 14}) {
          			  case 0:
/*< 38>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00030c00>Il n'y a que de l'herbe et des fleurs qui\npoussent par ici...<pause 30> <0x10009:0x00010c00>Si on ne fait rien,<color blue<<0x10006:0xfecd>>coloroff> le\ndragon de foudre risque de...")
          			  case 1:
/*< 33>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<168>*/ 					switch (scene_flags[23 /* 0x3 80 */]) {
          					  case 0:
/*<169>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000000>Je suis si inquiet pour le dragon de\nfoudre... S'il te plaît, cherche le <color red<fruit\nde l'arbre de vie >coloroff>!")
          					  case 1:
/*< 37>*/ 						printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00030900>On a planté une <color red<pousse de l'arbre de vie\n>coloroff>là‐bas, pour que le dragon de foudre\npuisse guérir grâce à son fruit...")
          					}
          				  case 1:
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030c00>C'est terrible ! Le <color blue<dragon de foudre\n>coloroff>est malade...<pause 15>\n\n\n<0x10009:0x00030c00>Pour utiliser les chronolithes du coin,\nil faut l'autorisation du dragon...<pause 30>\n<0x10009:0x00010c00>Mais ce n'est pas vraiment ça\nle problème le plus urgent !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_57() {
/*<151>*/ 	start()
/*<152>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x2f0c0d01><0x10006:0xffcd><0x10008:0x01cd><0x10009:0x2f000001>Hé ! Toi là‐bas !\nTu es <heroname>,\nn'est‐ce pas ?\n\n<0x10006:0xffcd><0x10008:0x01cd>Tu tombes à pic !<pause 15>\nJe voulais te voir, justement.<pause 15>\n\n\n<0x10006:0x02cd><0x10008:0x01cd>Viens donc par ici !")
/*<153>*/ 	scene_flags[9 'Lanayru Gorge'][36 /* 0x5 10 */] = true;
/*<159>*/ 	story_flags[829 /* us: 805A9B33 0x20, jp: 805ACDB3 0x20 */] = true;
/*<160>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<161>*/ 	story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */] = true;
/*<162>*/ 	story_flags[823 /* us: 805A9B30 0x80, jp: 805ACDB0 0x80 */] = true;
          }

          void entrypoint_404_06() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "...")
          }

          void entrypoint_404_58() {
/*<163>*/ 	start()
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x2f080709>Oh, <heroname> ! J'ai trouvé un\ntrou qui doit mener quelque part !\n\n\nMais la roche est vraiment très solide...\nÇa devrait prendre encore un peu de\ntemps avant qu'on puisse passer.")
          }

          void entrypoint_404_07() {
/*< 11>*/ 	start()
/*< 24>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 25>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "Si tu te dépêches pas, tu vas\npas y arriver !")
          	  case 1:
/*< 71>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 31}
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00030900>Ici, il y a plein de grands chronolithes.<pause 30>\n<0x10009:0x00000900>Toi aussi tu as reçu l'autorisation du\n<color blue<dragon de foudre>coloroff> pour venir ici ?\n\n<0x10009:0x00010900>J'étais justement en train de lui en\napporter un.")
/*< 18>*/ 		temp_flags[0 /* 0x1 01 */] = true;
/*< 87>*/ 		set_camera(1, 0)
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10005:0x00280000>Ça grouille de monstres un peu\nplus loin !<pause 15> <0x10009:0x00030c00>Fais bien att...")
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
/*< 48>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "Le dragon de foudre est de bonne\nhumeur.")
          		  case 1:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Le dragon de foudre est en\nbonne santé !")
          		}
          	  case 1:
/*< 56>*/ 		check_item_flag(198, 1)
/*< 57>*/ 		switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 28}) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "Oh, que comptes‐tu faire de ce fruit ?<pause 45>\nTu vas l'apporter au <color blue<dragon de\nfoudre >coloroff>?")
          		  case 1:
/*< 27>*/ 			check_item_flag(197, 1)
/*< 28>*/ 			switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 8}) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00030c00>Les arbres poussent très mal ici, dans\nles <color blue<terres de Lanelle>coloroff>...<pause 30> <0x10009:0x00030900>Il doit bien\nexister un endroit où ils poussent\nplus vite...")
          			  case 1:
/*< 26>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*< 29>*/ 					printf(/* textboxtype: 1, unk: 0, line: 35 */ "De l'autre côté du pont, nous avons\nplanté une <color red<pousse de l'arbre de vie>coloroff>,\ndont les fruits guérissent tous les maux.<pause 30>\n\n<0x10009:0x00000c00>Mais les arbres poussent très mal ici...")
          				  case 1:
/*< 16>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00030900>Avec l'autorisation du dragon\nde foudre, nous creusons ici à la\nrecherche de <color blue<chronolithes>coloroff>.\n\n<pause 30><0x10009:0x00030c00>Mais le <color blue<dragon >coloroff>est en mauvaise santé...<pause 15>\nNous sommes inquiets pour lui.<pause 30>\n<0x10009:0x00010c00>Sa vie est en danger...")
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_10() {
/*< 94>*/ 	start()
/*<116>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<118>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          	  case 1:
/*<115>*/ 		switch (scene_flags[9 /* 0x0 02 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[26 /* 0x2 04 */]) {
          			  case 0:
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<117>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<120>*/ 				scene_flags[9 'Lanayru Gorge'][26 /* 0x2 04 */] = true;
          			}
          		  case 1:
/*< 96>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 97>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
          			  case 1:
/*<114>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 95, 'param3': 31}
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<pause 20>.<pause 20>.<pause 20>.")
/*<100>*/ 				scene_flags[9 'Lanayru Gorge'][18 /* 0x3 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_404_11() {
/*<138>*/ 	start()
/*<140>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000b0901><0x30001:0x><heroname>, tu m'as sauvé la vie !\nJe voudrais t'en remercier.\n\n\n<0x10009:0x00000900>Je vais te préparer une surprise.\nReviens bientôt, et tu pourras en\nprofiter.")
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
/*< 81>*/ 	printf(/* textboxtype: 2, unk: 0, line: 61 */ "<0x10005:0x004b0000>Nous sommes dans les <color blue<gorges de\nLanelle>coloroff>. Une ancienne légende dit que\ncet endroit était habité par l'un des\ndragons serviteurs de la Déesse.")
          }

          void entrypoint_404_32() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10005:0x005a0000>Ce site était utilisé par une ancienne\ncivilisation comme carrière\nd'extraction de chronolithes de qualité.")
          }

          void entrypoint_404_50() {
/*< 17>*/ 	start()
/*< 68>*/ 	switch (story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */]) {
          	  case 0:
/*< 69>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x2f080d09>Je vois que tu es un passionné !\nTu n'as pas investi pour rien,\ntu verras !")
          	  case 1:
/*< 61>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 62, 'param3': 12}
/*< 62>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x2f000d09>Les fouilles, ça t'intéresse ?<pause 60>\nJ'ai une proposition à te faire...<pause 60>\n\n\n<0x10009:0x2f000d07>Les recherches, ça demande de\nl'argent.<pause 30> Ça te dirait pas d'investir\ndans les miennes ? 10 rubis seulement !\n\n[1-]D'accord[2]Non merci")
/*< 59>*/ 		switch (choice(2)) {
          		  case 0:
/*< 63>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*< 64>*/ 				rupees += -10;
/*< 66>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x2f020208>Merci ! Tu verras, tu n'as pas investi\nen vain.")
/*< 67>*/ 				story_flags[525 /* us: 805A9B14 0x04, jp: 805ACD94 0x04 */] = true;
          				flw_98:
/*< 98>*/ 				scene_flags[9 'Lanayru Gorge'][106 /* 0xC 04 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Oh, t'as pas d'argent ?\nReviens me voir quand tu seras prêt\nà investir !")
          				goto flw_98
          			}
          		  case 1:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x2f010805><0x10006:0xffcd>Oh, dommage.<pause 30>\nJ'ai bien l'impression que les fouilles,\nça n'intéresse plus personne...")
          			goto flw_98
          		}
          	}
          }

          void entrypoint_404_33() {
/*< 84>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10005:0x005a0000>C'est pour cette raison qu'on y\nretrouve des traces de rails,\nde wagons et de minerai.")
          }

          void entrypoint_404_51() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 8, unk: 0, line: 65 */ "Par ici s'étend la mer de\nsable de Lanelle, qui regorge\nde vestiges du passé.")
          }

          void entrypoint_404_34() {
/*<166>*/ 	start()
/*<167>*/ 	printf(/* textboxtype: 2, unk: 0, line: 64 */ "Il arrive que les bokoblins portent un\ncor de monstre à leur ceinture.\n\n\nVous pouvez le leur <color red<arracher avec\nvotre fouet>coloroff>.")
          }

          void entrypoint_404_52() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 8, unk: 0, line: 66 */ "Au‐devant s'étend le désert\nde Lanelle. La raffinerie en\nson milieu recèle de nombreux\nmystères.")
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
/*<105>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<heroname>, connaîtrais‐tu un\nendroit où l'arbre pourrait <color red<pousser\nrapidement >coloroff>?\n\n<0x10009:0x00110804>Je serais sauvé... kof... si je mangeais\nun <color red<fruit de l'arbre de vie>coloroff>...\n\n\n<0x10009:0x00080a00>Mais la pousse ne peut être plantée\nn'importe où... Cherche une <color red<terre\nfertile>coloroff>.")
          			  case 1:
/*< 42>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00080a03>Oh, <heroname>.<pause 15>\nTu as la <color red<pousse de l'arbre de vie>coloroff>...\n\n\nC'est triste à dire, mais je pense qu'il\nest trop tard pour moi...<pause 30> Je ne peux\nattendre que l'arbre pousse. <0x10009:0x0008110c>Kof, kof...\n\nSi j'avais la santé, je pourrais te\nchanter toutes les chansons que tu\nveux...<pause 30> <0x10009:0x00081102>Kof, kof...")
/*<104>*/ 				scene_flags[9 'Lanayru Gorge'][22 /* 0x3 40 */] = true;
          			}
          		  case 1:
/*<141>*/ 			switch (story_flags[794 /* us: 805A9B2F 0x04, jp: 805ACDAF 0x04 */]) {
          			  case 0:
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "Peux‐tu m'apporter rapidement un\n<color blue<fruit de l'arbre de vie>coloroff>,\n<heroname> ?")
          			  case 1:
/*<101>*/ 				switch (story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */]) {
          				  case 0:
/*<102>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "Les petits robots d'ici ont bien essayé\nde planter une <color red<pousse de l'arbre de vie>coloroff>,\ndont les fruits peuvent guérir toutes les\nmaladies...\nIls l'ont plantée là‐bas, mais...<pause 20> Kof...<0x10009:0x0008110c><pause 30>\n<0x10009:0x00000000>Elle ne pousse pas très bien...<pause 30> Kof...<0x10009:0x0008110c><pause 45>\n<0x10009:0x00110804>Je crois que c'en est bientôt fini de\nmoi...<pause 20>")
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00110804><0x10008:0x02cd><0x10006:0xffcd>Kof, kof...<pause 30>\n\n\n\n<0x10009:0x00080a03>Oh !<pause 20> Voilà un visiteur bien inattendu !\n\n\n\n<0x10009:0x00080a00>Tu es un <color blue<humain>coloroff>, n'est‐ce pas ?\nQu'est‐ce qui t'amène ici ?\n\n\n<pause 15>.<pause 15>.<pause 15>.\n\n\n\n<0x10009:0x0011080c>Tu t'appelles <heroname> et\ntu viens du <color blue<ciel>coloroff> ? <0x10006:0xffcd>Kof...<pause 15>\n\n\nIl manque quelque chose à ton nom...\n<0x10009:0x00080a00>Que dirais‐tu de t'appeler\n<color red<DL‐<heroname>‐16>coloroff>, comme les\nhabitants d'ici ?\n.<pause 20>.<pause 20>.<pause 20>\nNon ?<pause 15> Ah, très bien...<pause 15>\n\n\n<0x10009:0x00080802>Kof, kof...\nAlors, que me veux‐tu ?\n\n\n<0x10009:0x00080a03>Oh...<pause 30> Kof... Tu veux que je t'apprenne\nune chanson ?")
/*<130>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a00>Ah oui, <heroname>, tu disais que\ntu venais du ciel...\nTu es donc l'élu de la Déesse ?\nJe vois...\n<0x10009:0x000a0a00>Je suis cependant au regret de\nt'annoncer que je ne peux pas t'aider\ndans l'immédiat...\n\n<0x10009:0x000a0a00>J'ai encore la force d'en plaisanter,\nmais comme tu peux le voir...<pause 30> <0x10009:0x0000000c>Kof...\n\n\n<0x10009:0x000a0a00>Je suis très malade, et je ne suis pas du\ntout en état de chanter !\n\n\n<0x10009:0x00110804>Alors que la Déesse m'a confié cette\nimportante mission...\nJ'ai un peu honte.")
/*< 34>*/ 					story_flags[524 /* us: 805A9B14 0x02, jp: 805ACD94 0x02 */] = true;
          				}
          			}
          		}
          	}
          }

          void entrypoint_404_53() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf(/* textboxtype: 8, unk: 0, line: 67 */ "Vers les mines de Lanelle,\npour percer le mystère\ndes chronolithes...")
          }

          void entrypoint_404_02() {
/*<  2>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 12 */ "...")
          }

          void entrypoint_404_54() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 7, unk: 0, line: 68 */ "Entrée strictement interdite\nsans autorisation de <color blue<Lanelle>coloroff>, le\n<color blue<dragon de foudre>coloroff>.")
          }

