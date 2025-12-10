          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Tu veux que je réexplique les règles du jeu?\n[1-]Oui[2]Non, c'est beau ")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n<0x10009:0x00120600>Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n<0x10009:0x000d0600>Mais si tu atterris sur une case grise, appelée\n<color red<case roupir>coloroff>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n<0x10009:0x00121100>Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <color red<hasarrrrd>coloroff>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<color red<case roupir>coloroff>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*<129>*/ 				printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Pendant ta chute, tu croiseras des <color red<anneaux de\nla chance >coloroff>et des <color red<balles obstacle>coloroff>!\n\n\n<0x10009:0x000d0600>Chaque fois que tu passes à travers un <color red<anneau\nde la chance>coloroff>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n<0x10009:0x00120c00>Par contre, si tu percutes une <color red<balle obstacle>coloroff>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n<0x10009:0x000d0600>Quoi d'autre... Ah, oui! Durant ta chute,\ntu <color red<ne peux pas déployer >coloroff>ton parachâle,\nalors fais attention!")
          			  case 1:
/*<128>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000d0006>Monte dans le canon et c'est parti mon kikiki!\nHA!")
          			}
          		  case 1:
/*< 75>*/ 			switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          			  case 0:
          				flw_77:
/*< 77>*/ 				switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          				  case 0:
/*< 79>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 84, 'param3': 12}
/*< 84>*/ 					switch (zone_temp_flags[6 /* 0x1 40 */]) {
          					  case 0:
/*< 85>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000001>Quoi? Tu veux rejouer? Tu es un vrai\ncasse‐cou, toi! Tu veux devenir cascadeurrrr?\n\n\nC'est <color red<20 rubis>coloroff> la partie. Tu es prêt?\n[1-]Jouer[2-]Règles du jeu[3]Pas question")
          						flw_33:
/*< 33>*/ 						switch (choice(3)) {
          						  case 0:
/*< 76>*/ 							switch (story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */]) {
          							  case 0:
/*<  6>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 10>*/ 									rupees += -20;
          									flw_82:
/*< 82>*/ 									zone_temp_flags[5 /* 0x1 20 */] = true;
/*<  5>*/ 									printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000002>Par ici, mon p'tit gars! Quand tu es prêt,\nsaute dans le canon situé au centre de l'île.\n\n\nCanon prêt, partez! HA!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										wait_frames(80)
          									}
          								  case 1:
/*<  7>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<pause 15><0x10009:0x00160c03>Pff... Tu n'as pas assez de rubis! <0x10009:0x00000600>Reviens me\nvoir quand tu auras de quoi payer, veux-tu?")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n<0x10009:0x00120600>Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n<0x10009:0x000d0600>Mais si tu atterris sur une case grise, appelée\n<color red<case roupir>coloroff>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n<0x10009:0x00121100>Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <color red<hasarrrrd>coloroff>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<color red<case roupir>coloroff>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*< 35>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Pendant ta chute, tu croiseras des <color red<anneaux de\nla chance >coloroff>et des <color red<balles obstacle>coloroff>!\n\n\n<0x10009:0x000d0600>Chaque fois que tu passes à travers un <color red<anneau\nde la chance>coloroff>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n<0x10009:0x00120c00>Par contre, si tu percutes une <color red<balle obstacle>coloroff>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n<0x10009:0x000d0600>Quoi d'autre... Ah, oui! Durant ta chute,\ntu <color red<ne peux pas déployer >coloroff>ton parachâle,\nalors fais attention!")
          						  case 2:
/*< 36>*/ 							printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>Ça alorrrrs! On dirait que tu as le vertige,\np'tit gars?")
          						}
          					  case 1:
/*<  9>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000d0601>Youhou! Te revoilà! Tu es avide de sensations\nfortes, p'tit gars? Eh, bien tu es venu au bon\nendroit, ça, c'est sûrrrr!\n\n<0x10009:0x00090600>Cette fois, ce sera pas gratuit.\nC'est <color red<20 rubis >coloroff>la partie. Ça t'intéresse?\n[1-]Jouer[2-]Règles du jeu[3]Pas question")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000001>Youpiii! Par ici, mon p'tit gars. Tu es avide\nde sensations fortes? Eh, bien tu es venu au\nbon endroit.\n\nPour te remercier d'avoir retrouvé ma roue\nde fortune, cette partie est gratos!\n[1-]Jouer[2-]Règles du jeu[3]Pas question")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000601>Je te dois une fièrrrre chandelle, mon p'tit\ngars! Merci d'avoir retrouvé ma roue\nde fortune.\n\nMon rêve s'est enfin réalisé! Bienvenue\nsur l'<color blue<île fortune>coloroff>!\n\n\nNormalement, c'est 20 rubis la partie...\n\n\n\nMais comme j'ai une dette envers toi, je t'offre\nta première partie! HA!")
/*<  8>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n<0x10009:0x00120600>Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n<0x10009:0x000d0600>Mais si tu atterris sur une case grise, appelée\n<color red<case roupir>coloroff>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n<0x10009:0x00121100>Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <color red<hasarrrrd>coloroff>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<color red<case roupir>coloroff>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*< 22>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Pendant ta chute, tu croiseras des <color red<anneaux de\nla chance >coloroff>et des <color red<balles obstacle>coloroff>!\n\n\n<0x10009:0x000d0600>Chaque fois que tu passes à travers un <color red<anneau\nde la chance>coloroff>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n<0x10009:0x00120c00>Par contre, si tu percutes une <color red<balle obstacle>coloroff>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n<0x10009:0x000d0600>Quoi d'autre... Ah, oui! Durant ta chute,\ntu <color red<ne peux pas déployer >coloroff>ton parachâle,\nalors fais attention!")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120600>Il est temps de faire le grand plongeon.\nTu veux essayer?\n[1-]OK[2]Pas\nmaintenant")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00000001>Tu veux que je réexplique les règles du jeu?\n[1-]Oui[2]Non, c'est beau ")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x000d0602>Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n<0x10009:0x00120600>Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n<0x10009:0x000d0600>Mais si tu atterris sur une case grise, appelée\n<color red<case roupir>coloroff>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n<0x10009:0x00121100>Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <color red<hasarrrrd>coloroff>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<color red<case roupir>coloroff>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*<133>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000600>Pendant ta chute, tu croiseras des <color red<anneaux de\nla chance >coloroff>et des <color red<balles obstacle>coloroff>!\n\n\n<0x10009:0x000d0600>Chaque fois que tu passes à travers un <color red<anneau\nde la chance>coloroff>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n<0x10009:0x00120c00>Par contre, si tu percutes une <color red<balle obstacle>coloroff>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n<0x10009:0x000d0600>Quoi d'autre... Ah, oui! Durant ta chute,\ntu <color red<ne peux pas déployer >coloroff>ton parachâle,\nalors fais attention!")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00160d05>Ça alorrrrs! On dirait que tu as le vertige,\np'tit gars?")
          					}
          				}
          			}
          		}
          	  case 1:
/*< 38>*/ 		switch (story_flags[92 /* us: 805A9AF1 0x02, jp: 805ACD71 0x02 */]) {
          		  case 0:
/*<152>*/ 			switch (story_flags[397 /* us: 805A9B0F 0x80, jp: 805ACD8F 0x80 */]) {
          			  case 0:
/*<153>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			  case 1:
/*< 40>*/ 				switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          				  case 0:
/*<151>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 91, 'param3': 31}
/*< 91>*/ 					switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000a0c10>Ah... Si tu pouvais vraiment la retrouver,\nce serait formidable... J'imagine déjà le\nsourire des gens!\n\nMais je ne me fais pas trop d'illusions...")
          					  case 1:
/*<105>*/ 						printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0000000f>Ah, salut, mon p'tit gars. Dis moi...\nVas-tu retrouver ma roue de fortune?\n\n\nAh non? C'est bien ce que je pensais...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf(/* textboxtype: 0, unk: 0, line: 44 */ "La <color red<roue de fortune>coloroff> recherchée par cet individu ne\nfigure pas dans la liste des cibles à <sound 4><color red<détecter>coloroff>.\n\n\nVoulez‐vous la rajouter dans la liste des cibles\nà <color red<<sound 4>détecter>coloroff>?\n[1-]Oui[2]Pas\nmaintenant")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nLa <color red<roue de fortune>coloroff> que recherche cet individu a été\nrajoutée dans la liste des cibles à <sound 4><color red<détecter>coloroff>.")
/*<147>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "Sachant que la cible est tombée d'ici, la probabilité\nqu'elle ait atterri dans le <color blue<désert de Lanelle>coloroff> est de\n90 %. Je vous conseille de chercher là‐bas.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x00000005>Très bien, Maître. La <sound 4>fonction <color red<détection >coloroff>ne sera\npas modifiée.")
          							goto flw_102
          						}
          					}
          				  case 1:
/*< 44>*/ 					switch (story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */]) {
          					  case 0:
/*<103>*/ 						switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          						  case 0:
/*< 49>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 113, 'param3': 31}
/*<113>*/ 							switch (temp_flags[5 /* 0x1 20 */]) {
          							  case 0:
/*<114>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0000000f>Non, c'est rien. Je ne vais pas t'ennuyer avec\nmes histoires de rêves brisés.\n\n\nLa <color blue<roue>coloroff> qui était accrochée à mon dos n'était\nqu'un accessoire décoratif... <pause 10>mais...\n<pause 10> j'en ai besoin.\n[1-]Je vais la chercher[2]Abandonne")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf(/* textboxtype: 1, unk: 0, line: 30 */ "Dis-moi donc comment tu vas t'y prendre pour\nrécupérer quelque chose qui est tombé sous les\nnuages? Tu fabules.")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf(/* textboxtype: 0, unk: 1, line: 40 */ "Je peux ajouter l'objet que recherche cette personne\nà la liste des cibles que vous pouvez <sound 4><color red<détecter>coloroff>.\n\n\nToutefois, si vous êtes à la recherche d'un autre\nobjet pour quelqu'un d'autre, cet objet sera retiré\nde la liste des cibles à détecter.\n\nDois‐je régler la <color red<détection>coloroff> pour réagir à la\n<color red<roue de fortune>coloroff>?\n[1-]S'il te plaît[2]Pas encore")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x00000005>Très bien, Maître. La fonction <color red<détection >coloroff>va être\nréglée sur la <color red<roue de fortune>coloroff>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf(/* textboxtype: 1, unk: 0, line: 42 */ "Sachant que la cible est tombée d'ici, la probabilité\nqu'elle ait atterri dans le <color blue<désert de Lanelle>coloroff> est de\n90 %. Je vous conseille de chercher là‐bas.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000a0c10>Ah... Si tu pouvais vraiment la retrouver,\nce serait formidable... J'imagine déjà le\nsourire des gens!\n\nMais je ne me fais pas trop d'illusions...")
          									  case 1:
/*<111>*/ 										printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10012:0x00000005>Très bien, Maître. Pour en faire la cible de ma\nfonction détection, veuillez vous adresser à\nnouveau à cet individu.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000010>Sans ma roue de fortune, les gens ne pourront\npas venir s'amuser ici. C'est tragique. Tragique.\n\n\n<0x10009:0x000a0c00>*Soupir* Que voulez-vous...?")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0000000f>Snif... Rien ne va plus...\nMais, qu'est-ce que je vais fairrre?\n[1-]Ça ne va pas, toi?[2]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf(/* textboxtype: 0, unk: 0, line: 29 */ "La roue de fortune qui était accrochée à mon\ndos est tombée sous les nuages.\n\n\nSans elle, les gens ne pourront pas s'amuser ici!\n\n\n\n<0x10009:0x000a0c00>Je ne sais pas quoi faire... Je devrais\nsûrement abandonner. Elle doit être\nloin à présent...\n[1-]Je vais la\nchercher[2]Tant pis")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0000000f>Snif... Sniff... Ma roue de fortune est tombée\nsous les nuages.\n\n\nJe ne peux plus réaliser mon rêve. C'est fini.\nSniff... Sniff...\n\n\nRien ne va plus...")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001>Je n'ai pas encore fini les travaux de\nl'<color blue<île fortune>coloroff>.\n\n\nReviens me voir plus tard, je suis sûrrrr\nque tu vas aimer ça!")
          			  case 1:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000d0001>Youpiii! Par ici, mon p'tit gars.\n\n\n\n<0x10009:0x00090600>Je parie que tu te demandes ce que je fais ici,\npas vrai?\n[1-]Oui, un peu...[2]Pas du tout")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000d0002>Ah, je savais que tu étais un petit curieux!\nHA!\n\n\n<0x10009:0x00080600>J'essaie de transformer cette île en un lieu\nde divertissement qui rendra tout le monde\nheureux!\n\nEt sais‐tu comment je vais l'appeler?<pause 30>\nJe la baptiserai l'<color blue<île fortune>coloroff>!\n\n\n<0x10009:0x00120600>Mais je n'ai pas encore fini les travaux.\nReviens me voir plus tard, je suis sûrrrr\nque tu vas aimer ça!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x000d0c03>Tu me fais de la peine.\n\n\n\n<0x10009:0x00080600>Tout ce que je souhaite, moi, c'est rendre\nles gens heureux.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_110_02() {
/*< 21>*/ 	start()
/*< 88>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 31, 'param3': 44}
/*< 31>*/ 	zone_temp_flags[5 /* 0x1 20 */] = false;
/*< 26>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 14, 'param3': 12}
/*< 14>*/ 	switch (context_related4(0)) {
          	  case 0:
/*<115>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 117, 'param3': 13}
/*<117>*/ 		wait_frames(50)
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "<0x10009:0x0000ff05>Quel malheurrrr! Tu as atterri sur une\ncase roupirrrr.\n\n\nJ'empoche donc <color red<<numeric arg2 0> rubis>coloroff>! HA! Merci!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		wait_frames(50)
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x0000ff05> Oh, dommage! Tu as gagné <color red<0 rubis>coloroff>. Mais\nne baisse pas les bras, reviens me voir\nquand tu veux!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		wait_frames(85)
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00ffff06>Wouahou! Tu as fait un bon coup, là!\nHA! Bravo, p'tit gars!\n\n\n\n<0x10009:0x000d0600>Tu as atterri sur une case <numeric arg0 0> rubis avec\nun multiplicateur de <numeric arg1 0>. Ça fait un total\nde <color red<<numeric arg2 0> rubis>coloroff>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Et voilà! <numeric arg2 0> rubis pour monsieur! HA!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00120600>Si tu évites toutes les balles malchance, passes\nà travers cinq anneaux bonus et atterris sur une\ncase 50 rubis, tu gagnes un... cadeau surprise!\n\n<0x10009:0x00081000>En espérant que tu aies le courage de tenter\nta chance encore et encorrre!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		wait_frames(130)
/*< 24>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00ffff06>Bingo! Tu as atterri sur une case 50 rubis!\n\n\n\nTon multiplicateur est de <numeric arg1 0>, ça fait un total\nde <color red<<numeric arg2 0> rubis>coloroff>!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "Tu es passé à travers tous les anneaux bonus,\net en plus tu as atterri sur la case 50 rubis! Tu\nas bien mérité un cadeau surprise! Superrrr!")
/*< 87>*/ 				scene_flags[21 'The Sky'][19 /* 0x3 08 */] = true;
/*<148>*/ 				check_item_flag(489, 3)
/*<149>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 65}) {
          				  case 0:
/*<150>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 12}
          					flw_19:
/*< 19>*/ 					give_item(94 0x5E);
          					goto flw_23
          				  case 1:
          					goto flw_19
          				}
          			  case 1:
/*< 28>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00120600>Si tu évites toutes les balles malchance, passes\nà travers cinq anneaux bonus et atterris sur une\ncase 50 rubis, tu gagnes un... cadeau surprise!\n\n<0x10009:0x00081000>En espérant que tu aies le courage de tenter\nta chance encore et encorrre!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000006>Merci mille fois! HA! Je peux désormais\nréaliser mon rêve et inaugurer l'<color blue<île fortune>coloroff>!\n\n\n<0x10009:0x00000a00>Youppi! Double-youppi! Je suis fou-fou de joie!")
/*< 67>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Tu seras mon premier client! Merci mille fois!\nHA! Ce qu'on va s'amuser, yéyé!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000007>Youpiii! C'est ma roue à moi!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0000000b>Mais c'est... Non, impossible!\n\n\n\nOui! Oui! Oui! HA!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10012:0x00000064>J'ai rapporté ce plateau circulaire coloré.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10012:0x00000064>Si t'as besoin d'autre chose, appelle‐moi. HA!")
          }

