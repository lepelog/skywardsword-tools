          void entrypoint_105_35() {
/*< 40>*/ 	start()
/*< 47>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 84, 'param3': 13}
/*< 84>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_41:
/*< 41>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "Ça, c'est une <color yellow<médaille de vie>coloroff>.\nSi tu la portes, elle aura un effet\nvraiment mystérieux sur toi!\n\nSon pouvoir<pause 10>.<pause 10>.<pause 10>.<pause 10>? Euh... j'sais pas trop!\nTu le découvriras tout seul!\n\n\nUne super aubaine : <color red<800 rubis>coloroff>!\nQu'est-ce que t'en dis?\n[1-]J'achète[2]Non merci")
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
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "Ça, c'est une <color yellow<médaille de vie>coloroff>.\nSi tu la portes, elle aura un\neffet vraiment mystérieux\nsur toi!\nSon pouvoir <pause 10>.<pause 10>.<pause 10>.<pause 10>? Euh... j'sais pas trop!\nTu le découvriras tout seul!\n\n\nUne super aubaine : <color red<400 rubis>coloroff>!\nD'habitude c'est <color red<800>coloroff>!\nQu'est-ce que t'en dis quoi?\n[1-]J'achète[2]Non merci")
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
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "Oooooh! Aaaaah!\nBienv'nue à la boutique de Beedle!\nContent d'te revoir, m'sieur client!\nChoisis donc l'article de tes désirs!")
          		  case 1:
/*<167>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 65, 'param3': 13}
/*< 65>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "M'sieur client, c'est toi, mon héros!\nVraiment! Celui qui a retrouvé mon\n<color blue<Golofa Demonicus Rex>coloroff>!\n\nJ'te dois une fière chandelle, alors\nchoisis un objet sur l'étalage et j'te\nl'offre, euh, à moitié prix!")
          		}
          	  case 1:
/*<161>*/ 		switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          		  case 0:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 164, 'param3': 31}
/*<164>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 162, 'param3': 13}
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "Aaaaah! Bienv'nue à la boutique\nde Beedle, m'sieur client!\n\n\nHein, qu'est-ce que tu dis? Tu as\ntrouvé mon... Euh... Bon, c'est pas\nvraiment l'moment de parler de ça,\nj'risque de nous faire nous écraser.\nOn en rediscute ce soir, OK?\nVa piquer un p'tit roupillon sur mon lit\nen attendant qu'la nuit tombe.")
          		  case 1:
/*<163>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<166>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 165, 'param3': 13}
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 7 */ "Aaaaah!\nBienv'nue à la boutique de Beedle,\nm'sieur client!\n\nJe t'en supplie! Va, cours, vole,\nsauve mon petit <color blue<Golofa\nDemonicus Rex>coloroff>!\n\nPlus rarissime, y a pas!\nJe m'en remettrai vraiment\njamais...")
          			  case 1:
/*<193>*/ 				switch (scene_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<195>*/ 					switch (zone_temp_flags[13 /* 0x0 20 */]) {
          					  case 0:
          						flw_1:
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "Tu veux savoir pourquoi\nj'pédale toute la journée?\n[1-]Oui![2]Pas vraiment")
/*< 25>*/ 						switch (choice(2)) {
          						  case 0:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10007:0x00000015>Aaaaah! Mais quel esprit vif et\ncurieux, m'sieur client! J'adooore!\nVraiment.\n\nJ'pédale pour créer de l'électricité\net faire avancer ma maison. C'est\n<color blue<écologistique>coloroff>, et bon pour ma santé!\n\nEt avec toi à bord, m'sieur client,\nj'dois pédaler deux fois plus fort...\nJe me fais les mollets!")
          							flw_27:
/*< 27>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "Euh<0x10006:0xfecd>...<0x10006:0x00cd> Pardon! Ne te gêne pas pour\nregarder ma marchandise. Tu vas voir\nque c'est pas d'la camelote! J'ai toutes\nsortes d'affaires pas mal cool.")
/*<192>*/ 							scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<194>*/ 							zone_temp_flags[13 /* 0x0 20 */] = true;
          						  case 1:
/*< 87>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 28, 'param3': 13}
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0, line: 2 */ "Ouais. Bien, pourquoi\ntu m'déranges, d'abord?\n\n\nEn plus, avec toi à bord, j'dois\npédaler deux fois plus fort...\nVraiment.")
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
/*<190>*/ 									printf(/* textboxtype: 1, unk: 0, line: 9 */ "Aaaaah! On en reparle cette nuit,\nOK? En attendant, tu peux piquer\nun somme sur le lit, juste là.")
          								  case 1:
/*<186>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 187, 'param3': 31}
/*<187>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000b00>Aaaaah<pause 10>.<pause 10>.<pause 10>.<pause 10>!\nBienvenue,<pause 20> m'sieur client<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\nHein?<pause 20> J'ai pas très bonne mine?\n\n\n\nJe peux vraiment rien t'cacher, tu sais!\n\n\n\nMais comme tu vois, j'suis bien trop\noccupé, là, alors on en reparle cette\nnuit, d'accord? Tu peux roupiller sur\nle lit, juste là!")
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
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0, line: 29 */ "Ça, c'est une <color yellow<poche supplémentaire\n>coloroff>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures!\nL'accessoire indispensable pour\nun voyageur comme toi, non?\nJ'te la vends à <color red<600 rubis>coloroff>.\n\nComment ça, c'est plus cher que\nla dernière fois? Mais pas du tout,\ntu te fais des idées! Alors, <color red<600 rubis\n>coloroff>et on en parle plus?\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*<139>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Ça, c'est une <color yellow<poche supplémentaire\n>coloroff>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures!\nL'accessoire indispensable pour un\nvoyageur comme toi, non? Avec ton\nrabais de 50 %, ça te fait <color red<300 rubis>coloroff>.\n\nComment ça, c'est plus cher que\nla dernière fois? Mais pas du tout,\ntu te fais des idées! Alors, <color red<300 rubis\n>coloroff>et on en parle plus?\n[1-]J'achète[2]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_145
          		}
          	}
          }

          void entrypoint_105_02() {
/*< 23>*/ 	start()
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10007:0x00000015>Aaaaah! Un m'sieur client qui\nmonte jusqu'ici, c'est vraiment extra...\nhem... ordinaire!\n\nLa boutique de Beedle, c'est une\nvraie caverne aux trésors! Alors\nprends un moment pour regarder!\n\nCe s'rait dommage de r'partir les mains\nvides, tu ne penses pas?")
          }

          void entrypoint_105_37() {
/*<136>*/ 	start()
/*<141>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 12}
/*<142>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 144, 'param3': 13}
/*<144>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_147:
/*<147>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "Voici la toute <color yellow<nouvelle poche >coloroff>de ta \nsacoche d'aventurier! C'est ma \ndernière alors... c'est vraiment pas\ndonné!\nÇa coûte <color red<1 200 rubis>coloroff>. Si t'en as pas\nbesoin, j'comprendrai... Hin hin hin...\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*<143>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<148>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "Voici la toute <color yellow<nouvelle poche >coloroff>de ta \nsacoche d'aventurier! C'est ma \ndernière alors... c'est vraiment pas\ndonné!\nNormalement, c'est <color red<1 200 rubis>coloroff>, mais\nj'te la fais à <color red<600 rubis>coloroff>. Si t'en as pas\nbesoin, j'comprendrai... Hin hin hin...\n[1-]J'achète[2]Non merci")
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
/*<182>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "Ça, c'est une <color yellow<médaille insecte>coloroff>.\nAvec cette médaille, les endroits où\ntrouver des insectes sont indiqués sur\nta carte.\nC'est vraiment pratique! Ça coûte un\nbras, mais si t'aimes les insectes,\nça vaut l'coup.\n\n<color red<1 000 rubis>coloroff> et elle est à toi.\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*<180>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "Ça, c'est une <color yellow<médaille insecte>coloroff>.\nAvec cette médaille, les endroits où\ntrouver des insectes sont indiqués sur\nta carte.\nC'est vraiment pratique! Ça coûte un\nbras, mais si t'aimes les insectes,\nça vaut l'coup.\n\nNormalement, c'est <color red<1 000 rubis>coloroff>, mais\nj'te la fais à moitié prix! <color red<500 rubis>coloroff>!\nQu'est-ce que t'en dis?\n[1-]J'achète[2]Non merci")
          			goto flw_13
          		  case 1:
          			goto flw_182
          		}
          	}
          }

          void entrypoint_105_05() {
/*<  2>*/ 	start()
/*< 48>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 4, 'param3': 13}
/*<  4>*/ 	printf(/* textboxtype: 1, unk: 0, line: 11 */ "Aaaaah! Nooooon!\nTa <color red<sacoche >coloroff>est pleine!\nTu peux rien acheter!\n\nEt mon p'tit doigt me dit que tu peux\nplus rien stocker à la <color red<consigne >coloroff>non\nplus...\n\nFais un peu l'tri et r'viens vite me voir!")
          }

          void entrypoint_105_06() {
/*<  3>*/ 	start()
/*< 89>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1558, 'next': 35, 'param3': 13}
/*< 35>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_5:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "Aaaaah! T'as pas une tôle!\nLe dernier qui m'a fait cette blague\navait deux ans et demi! Vraiment.")
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
/*<  8>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "Oh, merciiii!\nTu vas voir, tu l'regretteras pas!\nTu m'as redonné la force de pédaler!\nVraiment!")
          		flw_33:
/*< 33>*/ 		zone_temp_flags[1 /* 0x1 02 */] = false;
/*< 34>*/ 		story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */] = true;
/*<200>*/ 		scene_flags[0 'Skyloft'][16 /* 0x3 01 */] = true;
/*<156>*/ 		entrypoint_105_11();
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "Ça te va vraiment à merveille!\nTu vas voir, tu l'regretteras pas!")
          		goto flw_33
          	}
          }

          void entrypoint_105_08() {
/*< 10>*/ 	start()
/*< 95>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 22, 'next': 37, 'param3': 13}
/*< 37>*/ 	switch (story_flags[1089 /* us: 805A9B53 0x80, jp: 805ACDD3 0x80 */]) {
          	  case 0:
          		flw_11:
/*< 11>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "Aaaaah! Attends, r'garde un peu\nle reste de ma marchandise!")
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
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "Aaaaah! Attends, attends!")
          }

          void entrypoint_105_10() {
/*< 38>*/ 	start()
/*< 92>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 28, 'next': 31, 'param3': 13}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "Pfiou... J'pédale deux fois plus fort\ndepuis que t'es monté, et toi, tu me\nquittes les mains vides?\n\nT'as vraiment du culot, m'sieur client!\nTerminus, tout le monde descend!")
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
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "Aaaaah! Ça, c'est une pancarte de\nrupture de stock! C'est pas à vendre.\nDésolé. Vraiment.\n\nMais c'est grâce à toi!\nT'es mon meilleur client!")
          }

          void entrypoint_105_31() {
/*< 16>*/ 	start()
/*< 43>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 49, 'param3': 12}
/*< 49>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 150, 'param3': 13}
/*<150>*/ 	zone_temp_flags[10 /* 0x0 04 */] = true;
/*< 69>*/ 	switch (story_flags[478 /* us: 805A9B11 0x04, jp: 805ACD91 0x04 */]) {
          	  case 0:
          		flw_19:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "Ça, c'est une <color yellow<poche supplémentaire\n>coloroff>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures!\nL'accessoire indispensable pour\nun voyageur comme toi, trouves-tu?\n<color red<300 rubis>coloroff> et tu r'pars avec.\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*< 68>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 20 */ "Ça, c'est une <color yellow<poche supplémentaire\n>coloroff>pour ta sacoche. Avec elle, tu pourras\nemporter un objet de plus dans tes\naventures!\nL'accessoire indispensable pour\nun voyageur comme toi, trouves-tu?\nAvec ta super réduction de sauveur\nd'insecte, elle est à toi pour <color red<150 rubis>coloroff>!\n[1-]J'achète[2]Non merci")
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
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Oh! T'as du goût, m'sieur client!\nRegarde comme ça brille!\nJ'l'ai ramassé dans le coin.\n\nJ'sais pas du tout à quoi ça sert, mais\nj'te l'offre à seulement <color red<1 600 rubis>coloroff>.\nAlors, qu'est-ce que t'en dis?\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*< 75>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 22 */ "Oh! T'as du goût, m'sieur client!\nRegarde comme ça brille!\nJ'l'ai ramassé dans le coin.\n\nJ'sais pas du tout à quoi ça sert,\nmais j'le vends <color red<1 600 rubis>coloroff>.\n\n\nMais avec ta réduction spéciale,\ntu peux l'avoir pour seulement\n<color red<800 rubis>coloroff>. Ça te dit?\n[1-]J'achète[2]Non merci")
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
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Ça, c'est une <color yellow<bourse annexe>coloroff>.\nC'est vraiment utile!\n\n\nAvec elle, tu pourras transporter\n300 rubis supplémentaires dans ta\nbourse.\n\nAu revoir, les tragédies du genre :\n« Oh non, ma bourse est pleine et\nj'peux pas ramasser ce rubis doré! ».\nCiao! Fini! Terminé!\n<color red<100 rubis>coloroff> et elle est à toi.\nTu verras, ça va changer ta vie!\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*< 78>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ça, c'est une <color yellow<bourse annexe>coloroff>.\nC'est vraiment utile!\n\n\nAvec elle, tu pourras transporter\n300 rubis supplémentaires dans ta\nbourse.\n\nAu revoir, les tragédies du genre :\n« Oh non, ma bourse est pleine et\nj'peux pas ramasser ce rubis doré! ».\nCiao! Fini! Terminé!\nD'habitude, c'est <color red<100 rubis>coloroff>. Mais pour\ntoi, ce sera seulement <color red<50 rubis>coloroff>.\n[1-]J'achète[2]Non merci")
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
/*<176>*/ 		printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000018>Merci! Je n'oublierai jamais ce que\ntu as fait pour moi. Vraiment.\n\n\nJe ne me lasserai jamais d'admirer mon\ncher petit <color blue<Golofa Demonicus Rex>coloroff>...")
          	  case 1:
/*<105>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000018>Tu l'as retrouvé! Je n'oublierai jamais\nce que tu as fait pour moi. Vraiment.\n\n\nPour te remercier, le prochain article\nque tu m'achèteras sera à moitié prix!")
          		  case 1:
/*<107>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
/*<199>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 31}
/*<129>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 130, 'param3': 47}
/*<130>*/ 				{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 132, 'param3': 15}
/*<132>*/ 				set_camera(3, 0)
/*<131>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 117, 'param3': 48}
/*<117>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 538, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "Je peux t'aider? Aaaaah...\nTu veux me montrer quelque chose?")
/*<128>*/ 				set_camera(2, 0)
/*<118>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x001a0815>Aaaaah!\nJe n'en crois pas mes yeux!!!\nMon <color blue<Golofa Demonicus Rex>coloroff>!!!")
/*<120>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 127, 'param3': 47}
/*<127>*/ 				story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */] = true;
/*<122>*/ 				{'type': 'type3', 'subType': 4, 'param1': 31, 'param2': 3328, 'next': 123, 'param3': 13}
/*<123>*/ 				{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 134, 'param3': 48}
/*<134>*/ 				wait_frames(50)
/*<121>*/ 				set_camera(1, 0)
/*<119>*/ 				printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000f00>Tu l'as retrouvé!\nMerci mille fois!\n\n\nPour te remercier, le prochain article\nque tu m'achèteras sera à moitié prix!\n\n\n<0x10009:0x00000018>Je te dois bien ça!")
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
/*<114>*/ 							printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x0000001e>Trouve mon cher petit <color blue<Golofa\nDemonicus Rex>coloroff>... Je t'en supplie!")
          						  case 1:
/*<203>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 112, 'param3': 31}
/*<112>*/ 							printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0000001e>Aurais‐tu décidé de partir\nà la recherche de mon <color blue<Golofa\nDemonicus Rex>coloroff>?\n[1-]Oui[2]Oublie‐le")
          							flw_57:
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*< 60>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00110220>Vraiment? Ce serait tellement gentil!")
/*< 61>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x001d0200>Mon cher petit <color blue<Golofa Demonicus\nRex>coloroff>... Retrouve‐le vite!\n<0x10009:0x00110b00>Je t'en supplie!")
/*< 62>*/ 								story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */] = true;
/*<110>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							  case 1:
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00010021>C'est facile à dire!\nJe ne suis vraiment pas capable!")
/*<109>*/ 								zone_temp_flags[4 /* 0x1 10 */] = true;
          							}
          						}
          					  case 1:
/*<100>*/ 						switch (zone_temp_flags[3 /* 0x1 08 */]) {
          						  case 0:
/*<126>*/ 							switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          							  case 0:
/*<125>*/ 								printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0000001e>Si tu veux retourner à Célesbourg,\nt'as juste à t'allonger sur mon lit.")
          								flw_98:
/*< 98>*/ 								zone_temp_flags[3 /* 0x1 08 */] = true;
/*< 55>*/ 								switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          								  case 0:
/*< 54>*/ 									switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          									  case 0:
/*< 58>*/ 										switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          										  case 0:
/*<196>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 31}
/*< 63>*/ 											printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010b00>Et puis?\n\n\n\n<0x10009:0x001d0b00>As‐tu retrouvé mon gentil petit\n<color blue<Golofa Demonicus Rex>coloroff>?\nIl me manque vraiment...")
          										  case 1:
/*<197>*/ 											{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 											printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00010600>Mais je suis vraiment préoccupé...\n\n\n\n<0x10009:0x00000b00>Ma <color red<cage à insecte >coloroff>a disparu, et\navec elle, mon gentil petit <color blue<Golofa\nDemonicus Rex>coloroff>...\n\n<0x10009:0x001d0b00>Snif... Je suis dévasté.\nC'était mon meilleur ami.\n[1-]Je m'en\ncharge[2]Oublie‐le")
          											goto flw_57
          										}
          									  case 1:
/*<124>*/ 										printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c00>Hmm<0x10006:0xfbcd>...")
          									}
          								  case 1:
          								}
          							  case 1:
/*<101>*/ 								printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000001e>Aha! Je vois que cet insecte t'intéresse!\n\n\n\n<0x10009:0x001c0a00>Il s'agit d'une espèce vraiment\nrare, le <color blue<Golofa Demonicus Rex>coloroff>.\n\n\n<0x10009:0x001b0500>C'est mon bien le plus précieux.\n\n\n\nJe pourrais le contempler des journées\nentières... Huhuhu...")
          								goto flw_98
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000001e>Aaaaah! Tu t'es encore endormi sur\nmon lit! Tu devais être vraiment\népuisé...\n\n<0x10009:0x00000b00>J'avoue qu'avoir pédalé jusqu'ici avec\ntoi à bord m'a fatigué moi aussi.\n\n\n<0x10009:0x00000c00><pause 5>.<pause 5>.<pause 5>.<pause 5><0x10009:0x00000200> Oh non, ce n'est pas un reproche!\nJe suis habitué maintenant.")
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
/*< 53>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0000021e>Ah, tu es debout?\n\n\n\nTu dormais à poings fermés alors\nje n'ai pas osé te réveiller.\n\n\n<0x10009:0x00000500>À cause de toi, j'ai dû pédaler comme\nun vrai forcené... Pfiou!\n[1-]Beedle?[2-]Où suis‐je?")
/*< 51>*/ 							switch (choice(2)) {
          							  case 0:
/*< 52>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Qu'est-ce que tu dis?\nJe m'exprime différemment?\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>...<0x10006:0x00cd><0x10009:0x00000200> Je ne trouve pas...<pause 30> Mais ce détail n'a\npas vraiment d'importance maintenant,\nn'est‐ce pas?")
/*<103>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>Tu es chez moi. Je m'arrête toujours ici\nla nuit.\n\n\n<0x10009:0x00000200>Il n'y a pas grand‐chose à faire, mais\non peut s'y reposer tranquillement.\n\n\nLes célestriers ne volent pas la nuit,\nalors je te ramènerai avec moi demain\nmatin.\n\nSi tu veux retourner à Célesbourg,\nrepose‐toi donc un peu sur mon lit.")
          								flw_97:
/*< 97>*/ 								scene_flags[21 'The Sky'][14 /* 0x0 40 */] = true;
          								goto flw_98
          							  case 1:
/*< 96>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000200>Tu es chez moi. Je m'arrête toujours ici\nla nuit.\n\n\n<0x10009:0x00000200>Il n'y a pas grand‐chose à faire, mais\non peut s'y reposer tranquillement.\n\n\nLes célestriers ne volent pas la nuit,\nalors je te ramènerai avec moi demain\nmatin.\n\nSi tu veux retourner à Célesbourg,\nrepose‐toi donc un peu sur mon lit.")
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 36 */ "Qu'est-ce que tu dis?\nJe m'exprime différemment?\n\n\n<0x10009:0x00001000><0x10006:0xfbcd>...<0x10006:0x00cd><0x10009:0x00000200> Je ne trouve pas...<pause 30> Mais ce détail n'a\npas vraiment d'importance maintenant,\nn'est‐ce pas?")
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
/*< 42>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Ça, c'est un <color yellow<filet>coloroff>.\nÇa sert à attraper les insectes!\n\n\nY en a pas beaucoup dans le coin, mais\nj'suis sûr que ça te sera vraiment utile\nailleurs!\n\nUne super affaire! <color red<50 rubis>coloroff>!\nQu'est-ce que t'en dis?\n[1-]J'achète[2]Non merci")
          		goto flw_13
          	  case 1:
/*< 81>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "")
          			goto flw_13
          		  case 1:
          			goto flw_42
          		}
          	}
          }

