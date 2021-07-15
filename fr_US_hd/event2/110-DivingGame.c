          void entrypoint_110_01() {
          	start()
/*< 37>*/ 	switch (story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */]) {
          	  case 0:
/*< 29>*/ 		switch (zone_temp_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<126>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tu veux que je réexplique les règles du jeu?\n[1]Oui[2-]Non, c'est beau ")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*< 30>*/ 				printf("\x0E\x01\x09\x04\x0D\x602Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise, appelée\n<r<case roupir>>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <r<hasarrrrd>>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<r<case roupir>>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras des <r<anneaux de\nla chance >>et des <r<balles obstacle>>!\n\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un <r<anneau\nde la chance>>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle obstacle>>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui! Durant ta chute,\ntu <r<ne peux pas déployer >>ton parachâle,\nalors fais attention!")
          			  case 1:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x0D\x06Monte dans le canon et c'est parti mon kikiki!\nHA!")
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
/*< 85>*/ 						printf("\x0E\x01\x09\x04\x00\x01Quoi? Tu veux rejouer? Tu es un vrai\ncasse\x2010cou, toi! Tu veux devenir cascadeurrrr?\n\n\nC'est <r<20 rubis>> la partie. Tu es prêt?\n[1]Jouer[2]Règles du jeu[3-]Pas question")
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
/*<  5>*/ 									printf("\x0E\x01\x09\x04\x00\x02Par ici, mon p'tit gars! Quand tu es prêt,\nsaute dans le canon situé au centre de l'île.\n\n\nCanon prêt, partez! HA!")
/*<144>*/ 									switch (zone_temp_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<145>*/ 										make_actor_do_something(2, 0)
          									  case 1:
/*<146>*/ 										zone_temp_flags[8 /* 0x0 01 */] = true;
/*< 80>*/ 										set_camera(1, 0)
/*<  3>*/ 										make_actor_do_something(0, 0)
/*< 81>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 80, 'next': -1, 'param3': 6}
          									}
          								  case 1:
/*<  7>*/ 									printf("<pause0F>\x0E\x01\x09\x04\x16\xC03Pff... Tu n'as pas assez de rubis! \x0E\x01\x09\x04\x00\x600Reviens me\nvoir quand tu auras de quoi payer, veux-tu?")
          								}
          							  case 1:
          								flw_74:
/*< 74>*/ 								story_flags[399 /* us: 805A9B11 0x80, jp: 805ACD91 0x80 */] = true;
          								goto flw_82
          							}
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise, appelée\n<r<case roupir>>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <r<hasarrrrd>>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<r<case roupir>>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras des <r<anneaux de\nla chance >>et des <r<balles obstacle>>!\n\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un <r<anneau\nde la chance>>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle obstacle>>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui! Durant ta chute,\ntu <r<ne peux pas déployer >>ton parachâle,\nalors fais attention!")
          						  case 2:
/*< 36>*/ 							printf("\x0E\x01\x09\x04\x16\xD05Ça alorrrrs! On dirait que tu as le vertige,\np'tit gars?")
          						}
          					  case 1:
/*<  9>*/ 						printf("\x0E\x01\x09\x04\x0D\x601Youhou! Te revoilà! Tu es avide de sensations\nfortes, p'tit gars? Eh, bien tu es venu au bon\nendroit, ça, c'est sûrrrr!\n\n\x0E\x01\x09\x04\x09\x600Cette fois, ce sera pas gratuit.\nC'est <r<20 rubis >>la partie. Ça t'intéresse?\n[1]Jouer[2]Règles du jeu[3-]Pas question")
/*< 83>*/ 						zone_temp_flags[6 /* 0x1 40 */] = true;
          						goto flw_33
          					}
          				  case 1:
/*< 78>*/ 					printf("\x0E\x01\x09\x04\x00\x01Youpiii! Par ici, mon p'tit gars. Tu es avide\nde sensations fortes? Eh, bien tu es venu au\nbon endroit.\n\nPour te remercier d'avoir retrouvé ma roue\nde fortune, cette partie est gratos!\n[1]Jouer[2]Règles du jeu[3-]Pas question")
          					goto flw_33
          				}
          			  case 1:
/*< 11>*/ 				switch (story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */]) {
          				  case 0:
          					goto flw_77
          				  case 1:
/*< 12>*/ 					printf("\x0E\x01\x09\x04\x00\x601Je te dois une fièrrrre chandelle, mon p'tit\ngars! Merci d'avoir retrouvé ma roue\nde fortune.\n\nMon rêve s'est enfin réalisé! Bienvenue\nsur l'<b<île fortune>>!\n\n\nNormalement, c'est 20 rubis la partie...\n\n\n\nMais comme j'ai une dette envers toi, je t'offre\nta première partie! HA!")
/*<  8>*/ 					printf("\x0E\x01\x09\x04\x0D\x602Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise, appelée\n<r<case roupir>>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <r<hasarrrrd>>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<r<case roupir>>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*< 22>*/ 					printf("\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras des <r<anneaux de\nla chance >>et des <r<balles obstacle>>!\n\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un <r<anneau\nde la chance>>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle obstacle>>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui! Durant ta chute,\ntu <r<ne peux pas déployer >>ton parachâle,\nalors fais attention!")
/*< 13>*/ 					story_flags[42 /* us: 805A9AE7 0x08, jp: 805ACD67 0x08 */] = true;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x12\x600Il est temps de faire le grand plongeon.\nTu veux essayer?\n[1]OK[2-]Pas\nmaintenant")
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
/*<130>*/ 						printf("\x0E\x01\x09\x04\x00\x01Tu veux que je réexplique les règles du jeu?\n[1]Oui[2-]Non, c'est beau ")
/*<131>*/ 						switch (choice(2)) {
          						  case 0:
/*<132>*/ 							printf("\x0E\x01\x09\x04\x0D\x602Alorrrrs! Ouvre grand tes oreilles.\nVoici les règles du jeu!\n\n\n\x0E\x01\x09\x04\x12\x600Le canon au centre de l'île te propulse dans\nles airrrrs. Tu dois atterrir en chute libre\nsur une case du plateau tournant.\n\nSi tu atterris sur une case colorée, tes gains\ndépendront de la couleurrrr de cette case.\n\n\n\x0E\x01\x09\x04\x0D\x600Mais si tu atterris sur une case grise, appelée\n<r<case roupir>>, c'est moi qui empoche les gains!\nHA! Amusant, non? C'qu'on va rirrrre!\n\n\x0E\x01\x09\x04\x12\x1100Tu auras beau être avide et tenter d'atterrir\nsur une case de grande valeur, au bout du\ncompte, c'est un jeu de <r<hasarrrrd>>...\n\nIl faudra pas te fâcher si tu atterris sur une\n<r<case roupir>>. Hein? Pas de larmes, ce n'est\nqu'un jeu après tout.")
/*<133>*/ 							printf("\x0E\x01\x09\x04\x00\x600Pendant ta chute, tu croiseras des <r<anneaux de\nla chance >>et des <r<balles obstacle>>!\n\n\n\x0E\x01\x09\x04\x0D\x600Chaque fois que tu passes à travers un <r<anneau\nde la chance>>, ton multiplicateur de rubis\naugmente. N'est-ce pas superrrr?\n\nEt ce n'est pas tout! Plus tu passes à travers\ndes anneaux, plus le plateauralentit. Ceci te\nfacilitera la tâche!\n\n\x0E\x01\x09\x04\x12\xC00Par contre, si tu percutes une <r<balle obstacle>>,\nton multiplicateur retombe à 1!\nOh, malheurrrr!\n\n\x0E\x01\x09\x04\x0D\x600Quoi d'autre... Ah, oui! Durant ta chute,\ntu <r<ne peux pas déployer >>ton parachâle,\nalors fais attention!")
          							goto flw_74
          						  case 1:
          							goto flw_74
          						}
          					  case 1:
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x16\xD05Ça alorrrrs! On dirait que tu as le vertige,\np'tit gars?")
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
/*< 42>*/ 						printf("\x0E\x01\x09\x04\n\xC10Ah... Si tu pouvais vraiment la retrouver,\nce serait formidable... J'imagine déjà le\nsourire des gens!\n\nMais je ne me fais pas trop d'illusions...")
          					  case 1:
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\x0FAh, salut, mon p'tit gars. Dis moi...\nVas-tu retrouver ma roue de fortune?\n\n\nAh non? C'est bien ce que je pensais...")
/*<101>*/ 						{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 92, 'param3': 51}
/*< 92>*/ 						printf("La <r<roue de fortune>> recherchée par cet individu ne\nfigure pas dans la liste des cibles à <pling><r<détecter>>.\n\n\nVoulez\x2010vous la rajouter dans la liste des cibles\nà <r<<pling>détecter>>?\n[1]Oui[2-]Pas\nmaintenant")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 94>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*< 99>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*< 98>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*< 95>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*< 96>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*< 97>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<135>*/ 							open_dowsing_wheel(17)
/*<134>*/ 							printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nLa <r<roue de fortune>> que recherche cet individu a été\nrajoutée dans la liste des cibles à <pling><r<détecter>>.")
/*<147>*/ 							printf("Sachant que la cible est tombée d'ici, la probabilité\nqu'elle ait atterri dans le <b<désert de Lanelle>> est de\n90 %. Je vous conseille de chercher là\x2010bas.")
          							flw_102:
/*<102>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<100>*/ 							printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. La <pling>fonction <r<détection >>ne sera\npas modifiée.")
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
/*<114>*/ 								printf("\x0E\x01\x09\x04\x00\x0FNon, c'est rien. Je ne vais pas t'ennuyer avec\nmes histoires de rêves brisés.\n\n\nLa <b<roue>> qui était accrochée à mon dos n'était\nqu'un accessoire décoratif... <pause0A>mais...\n<pause0A> j'en ai besoin.\n[1]Je vais la chercher[2-]Abandonne")
          								flw_54:
/*< 54>*/ 								switch (choice(2)) {
          								  case 0:
/*< 55>*/ 									printf("Dis-moi donc comment tu vas t'y prendre pour\nrécupérer quelque chose qui est tombé sous les\nnuages? Tu fabules.")
/*< 56>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 57, 'param3': 51}
/*< 57>*/ 									printf("Je peux ajouter l'objet que recherche cette personne\nà la liste des cibles que vous pouvez <pling><r<détecter>>.\n\n\nToutefois, si vous êtes à la recherche d'un autre\nobjet pour quelqu'un d'autre, cet objet sera retiré\nde la liste des cibles à détecter.\n\nDois\x2010je régler la <r<détection>> pour réagir à la\n<r<roue de fortune>>?\n[1]S'il te plaît[2-]Pas encore")
/*<109>*/ 									switch (choice(2)) {
          									  case 0:
/*<110>*/ 										printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. La fonction <r<détection >>va être\nréglée sur la <r<roue de fortune>>.")
/*<136>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = true;
/*<141>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<140>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<137>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<138>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<139>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<142>*/ 										open_dowsing_wheel(17)
/*<143>*/ 										printf("Sachant que la cible est tombée d'ici, la probabilité\nqu'elle ait atterri dans le <b<désert de Lanelle>> est de\n90 %. Je vous conseille de chercher là\x2010bas.")
          										flw_58:
/*< 58>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 45, 'param3': 36}
/*< 45>*/ 										story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */] = true;
/*<104>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 59, 'param3': 50}
/*< 59>*/ 										printf("\x0E\x01\x09\x04\n\xC10Ah... Si tu pouvais vraiment la retrouver,\nce serait formidable... J'imagine déjà le\nsourire des gens!\n\nMais je ne me fais pas trop d'illusions...")
          									  case 1:
/*<111>*/ 										printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Pour en faire la cible de ma\nfonction détection, veuillez vous adresser à\nnouveau à cet individu.")
          										goto flw_58
          									}
          								  case 1:
          									flw_52:
/*< 52>*/ 									printf("\x0E\x01\x09\x04\x00\x10Sans ma roue de fortune, les gens ne pourront\npas venir s'amuser ici. C'est tragique. Tragique.\n\n\n\x0E\x01\x09\x04\n\xC00*Soupir* Que voulez-vous...?")
/*<112>*/ 									temp_flags[5 /* 0x1 20 */] = true;
          								}
          							  case 1:
/*< 50>*/ 								printf("\x0E\x01\x09\x04\x00\x0FSnif... Rien ne va plus...\nMais, qu'est-ce que je vais fairrre?\n[1]Ça ne va pas, toi?[2-]...")
/*< 51>*/ 								switch (choice(2)) {
          								  case 0:
/*< 53>*/ 									printf("La roue de fortune qui était accrochée à mon\ndos est tombée sous les nuages.\n\n\nSans elle, les gens ne pourront pas s'amuser ici!\n\n\n\n\x0E\x01\x09\x04\n\xC00Je ne sais pas quoi faire... Je devrais\nsûrement abandonner. Elle doit être\nloin à présent...\n[1]Je vais la\nchercher[2-]Tant pis")
          									goto flw_54
          								  case 1:
          									goto flw_52
          								}
          							}
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x0FSnif... Sniff... Ma roue de fortune est tombée\nsous les nuages.\n\n\nJe ne peux plus réaliser mon rêve. C'est fini.\nSniff... Sniff...\n\n\nRien ne va plus...")
          						}
          					  case 1:
          						goto flw_41
          					}
          				}
          			}
          		  case 1:
/*<107>*/ 			switch (temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x01Je n'ai pas encore fini les travaux de\nl'<b<île fortune>>.\n\n\nReviens me voir plus tard, je suis sûrrrr\nque tu vas aimer ça!")
          			  case 1:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0D\x01Youpiii! Par ici, mon p'tit gars.\n\n\n\n\x0E\x01\x09\x04\x09\x600Je parie que tu te demandes ce que je fais ici,\npas vrai?\n[1]Oui, un peu...[2-]Pas du tout")
/*< 46>*/ 				switch (choice(2)) {
          				  case 0:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x0D\x02Ah, je savais que tu étais un petit curieux!\nHA!\n\n\n\x0E\x01\x09\x04\x08\x600J'essaie de transformer cette île en un lieu\nde divertissement qui rendra tout le monde\nheureux!\n\nEt sais\x2010tu comment je vais l'appeler?<pause1E>\nJe la baptiserai l'<b<île fortune>>!\n\n\n\x0E\x01\x09\x04\x12\x600Mais je n'ai pas encore fini les travaux.\nReviens me voir plus tard, je suis sûrrrr\nque tu vas aimer ça!")
/*<106>*/ 					temp_flags[4 /* 0x1 10 */] = true;
          				  case 1:
/*< 47>*/ 					printf("\x0E\x01\x09\x04\x0D\xC03Tu me fais de la peine.\n\n\n\n\x0E\x01\x09\x04\x08\x600Tout ce que je souhaite, moi, c'est rendre\nles gens heureux.")
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
/*<117>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 15, 'param3': 6}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05Quel malheurrrr! Tu as atterri sur une\ncase roupirrrr.\n\n\nJ'empoche donc <r<<numeric arg2> rubis>>! HA! Merci!")
/*< 25>*/ 		make_actor_do_something(1, 0)
          		flw_89:
/*< 89>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 125, 'param3': 45}
/*<125>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<116>*/ 		{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 6912, 'next': 118, 'param3': 13}
/*<118>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 50, 'next': 16, 'param3': 6}
/*< 16>*/ 		printf("\x0E\x01\x09\x04\x00\xFF05 Oh, dommage! Tu as gagné <r<0 rubis>>. Mais\nne baisse pas les bras, reviens me voir\nquand tu veux!")
          		goto flw_89
          	  case 2:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 5888, 'next': 121, 'param3': 13}
/*<121>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 85, 'next': 17, 'param3': 6}
/*< 17>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06Wouahou! Tu as fait un bon coup, là!\nHA! Bravo, p'tit gars!\n\n\n\n\x0E\x01\x09\x04\x0D\x600Tu as atterri sur une case <numeric arg0> rubis avec\nun multiplicateur de <numeric arg1>. Ça fait un total\nde <r<<numeric arg2> rubis>>!")
/*<123>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_23:
/*< 23>*/ 			printf("Et voilà! <numeric arg2> rubis pour monsieur! HA!")
/*< 32>*/ 			make_actor_do_something(1, 0)
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 124, 'param3': 45}
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x12\x600Si tu évites toutes les balles malchance, passes\nà travers cinq anneaux bonus et atterris sur une\ncase 50 rubis, tu gagnes un... cadeau surprise!\n\n\x0E\x01\x09\x04\x08\x1000En espérant que tu aies le courage de tenter\nta chance encore et encorrre!")
          			goto flw_23
          		}
          	  case 3:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 5120, 'next': 122, 'param3': 13}
/*<122>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 130, 'next': 24, 'param3': 6}
/*< 24>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF06Bingo! Tu as atterri sur une case 50 rubis!\n\n\n\nTon multiplicateur est de <numeric arg1>, ça fait un total\nde <r<<numeric arg2> rubis>>!")
/*< 86>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			goto flw_23
          		  case 1:
/*< 18>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 20>*/ 				printf("Tu es passé à travers tous les anneaux bonus,\net en plus tu as atterri sur la case 50 rubis! Tu\nas bien mérité un cadeau surprise! Superrrr!")
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
/*< 28>*/ 				printf("\x0E\x01\x09\x04\x12\x600Si tu évites toutes les balles malchance, passes\nà travers cinq anneaux bonus et atterris sur une\ncase 50 rubis, tu gagnes un... cadeau surprise!\n\n\x0E\x01\x09\x04\x08\x1000En espérant que tu aies le courage de tenter\nta chance encore et encorrre!")
          				goto flw_23
          			}
          		}
          	}
          }

          void entrypoint_110_04() {
/*< 61>*/ 	start()
/*< 73>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 66>*/ 		printf("\x0E\x01\x09\x04\x00\x06Merci mille fois! HA! Je peux désormais\nréaliser mon rêve et inaugurer l'<b<île fortune>>!\n\n\n\x0E\x01\x09\x04\x00\xA00Youppi! Double-youppi! Je suis fou-fou de joie!")
/*< 67>*/ 		printf("Tu seras mon premier client! Merci mille fois!\nHA! Ce qu'on va s'amuser, yéyé!")
/*< 43>*/ 		story_flags[398 /* us: 805A9B0E 0x01, jp: 805ACD8E 0x01 */] = true;
/*< 60>*/ 		give_gratitude_crystals();
          	  case 1:
/*< 63>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 65>*/ 			printf("\x0E\x01\x09\x04\x00\x07Youpiii! C'est ma roue à moi!")
/*< 72>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x0BMais c'est... Non, impossible!\n\n\n\nOui! Oui! Oui! HA!")
/*< 64>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	}
          }

          void entrypoint_110_05() {
/*< 71>*/ 	start()
/*< 68>*/ 	printf("\x0E\x01\x12\x04\x00dJ'ai rapporté ce plateau circulaire coloré.")
/*< 70>*/ 	make_actor_do_something(0, 0)
/*< 69>*/ 	printf("\x0E\x01\x12\x04\x00dSi t'as besoin d'autre chose, appelle\x2010moi. HA!")
          }

