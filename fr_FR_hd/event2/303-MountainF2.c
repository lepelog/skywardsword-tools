          void entrypoint_303_27() {
/*< 91>*/ 	start()
/*< 92>*/ 	printf("Ma Fay adorée ! Tu as vu ce que j'ai réussi à\nfaire ?")
          }

          void entrypoint_303_44() {
/*<203>*/ 	start()
/*<204>*/ 	printf("Ouah ! Quelle chaleur...! Mais je suis du dernier\nmodèle alors ça me fait ni chaud ni froid !")
          }

          void entrypoint_303_10() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x0B\x04\x00rHé ! Où tu vas ?! Bon, je t'attends ici alors.\nMais grouille\x2010toi de faire ce que t'as à faire !")
          }

          void entrypoint_303_28() {
/*< 93>*/ 	start()
/*< 94>*/ 	printf("Si je peux encore t'être utile, appelle\x2010moi,\nma douce !")
          }

          void entrypoint_303_45() {
/*<205>*/ 	start()
/*<206>*/ 	printf("Hé ! On est pas au bon endroit, si ? T'es nul\ncomme guide !")
          }

          void entrypoint_303_11() {
/*< 56>*/ 	start()
/*< 57>*/ 	printf("\x0E\x01\x0B\x04\x00rJe me fais attaquer ! Viens vite m'aider !")
          }

          void entrypoint_303_29() {
/*< 95>*/ 	start()
/*< 96>*/ 	printf("Les flammes qui bloquaient le chemin ont été éteintes.\nJe vous conseille d'avancer.")
/*<200>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<291>*/ 	story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = false;
          }

          void entrypoint_303_46() {
/*<207>*/ 	start()
/*<208>*/ 	printf("On est bientôt arrivés ? Allez, on se dépêche !")
          }

          void entrypoint_303_12() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("\x0E\x01\x0B\x04\x00rHé ! Fais quelque chose ! Vite !")
          }

          void entrypoint_303_47() {
/*<219>*/ 	start()
/*<220>*/ 	printf("Vous êtes de retour, \x0E\x01\x12\x04\x00\x04Maître Link.\n\n\n\nGrâce aux <y<boucles ignifuges >>que vous venez d'obtenir,\nvous devriez pouvoir résister aux températures les\nplus extrêmes.\n\nJe vous recommande de poursuivre votre recherche\nde la <r<flamme sacrée>>.")
          }

          void entrypoint_303_13() {
/*< 60>*/ 	start()
/*< 61>*/ 	printf("\x0E\x01\x05\x04<\x00\x0E\x01\x08\x02\x2CDAaaah !")
          }

          void entrypoint_303_30() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Nous sommes proches\ndu cratère du <b<volcan d'Ordinn>>, au sommet de\nla montagne.")
          }

          void entrypoint_303_48() {
/*<221>*/ 	start()
/*<223>*/ 	switch (scene_flags[108 /* 0xC 10 */]) {
          	  case 0:
/*<252>*/ 		switch (scene_flags[112 /* 0xF 01 */]) {
          		  case 0:
/*<254>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<270>*/ 				switch (scene_flags[114 /* 0xF 04 */]) {
          				  case 0:
/*<271>*/ 					printf("\x0E\x01\x09\x04\x11\x801Alors, t'as réussi à battre ces <r<gros lourdauds\navec leur bouclier>> ?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Découpe leur bouclier s'il est en bois, repousse\nleurs coups de lance et fonce sur leur bouclier\ncomme sur un mur...\n\nSi tu retiens ça, tu devrais pas avoir de\nproblème. Courage !")
/*<272>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				  case 1:
/*<263>*/ 					printf("Salut, toi ! Alors, tu as toujours du mal\ncontre les <r<gros balourds avec leur\nbouclier >>?\n\n\x0E\x01\x09\x04\x15\x80BSi tu veux, je peux te donner mes\n<r<dernières infos taupes secrètes >>pour les\nbattre en un clin d'\x153il.")
/*<264>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 12}
/*<256>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF09É<pause0A>vi<pause0A>dem<pause0A>ment<pause0A>, ce sera pas donné ! Ça te coûtera\n<r<50 rubis>> !\n[1]Dis\x2010moi tout ![2-]Non merci")
          					flw_245:
/*<245>*/ 					switch (choice(2)) {
          					  case 0:
/*<247>*/ 						check_item_flag(501, 50)
/*<248>*/ 						switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 84}) {
          						  case 0:
/*<269>*/ 							rupees += -50;
/*<250>*/ 							printf("\x0E\x01\x09\x04\x11\x80BTu regardes vraiment pas à la dépense, toi !\nEnfin, c'est pas moi qui vais m'en plaindre.\n\n\n\x0E\x01\x09\x04\x14\x1200Fais quand même gaffe à pas te faire arnaquer\npar mes compères...")
/*<251>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<265>*/ 							printf("\x0E\x01\x09\x04ÿ\xFF00Alors, voilà ma dernière info top secrète. Les\nboucliers de ces lourdauds sont grands comme\ndes murs, pas vrai ?\n\n\x0E\x01\x09\x04\x11\x800S'ils sont comme des murs, t'as qu'à foncer\ndessus comme sur un vrai mur...\n\n\n\x0E\x01\x09\x04ÿ\xFF09Héhé ! Je te laisse la surprise de découvrir ce\nque ça fait ! Tu seras pas déçu !\n\n\n\x0E\x01\x09\x04\x11\x800Allez, maintenant, tu vas pouvoir leur mettre\nune belle raclée ! Merci pour les rubis !")
/*<266>*/ 							scene_flags[4 'Eldin Volcano'][114 /* 0xF 04 */] = true;
/*<275>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						  case 1:
/*<249>*/ 							printf("\x0E\x01\x09\x04\x14\x1215Hé ! Mais t'as pas assez de rubis ! Pas de rubis,\npas d'info !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Reviens me voir quand t'auras économisé\n<r<50 rubis >>!")
/*<274>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					  case 1:
/*<246>*/ 						printf("\x0E\x01\x09\x04\x14\x1215Allez, fais pas le radin ! <r<50 rubis>>, c'est rien.\n\n\n\n\x0E\x01\x09\x04ÿ\xFF00Enfin, si tu changes d'avis, fais\x2010moi signe.")
/*<273>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				}
          			  case 1:
/*<261>*/ 				printf("Salut, toi ! Alors, tu as toujours du mal contre\nles <r<gros balourds avec leur bouclier >>?\n\n\n\x0E\x01\x09\x04\x15\x80BSi tu veux, je peux te donner des <r<infos encore\nplus taupes secrètes >>pour les battre en un clin\nd'\x153il.")
/*<262>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 255, 'param3': 12}
/*<255>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF09É<pause0A>vi<pause0A>dem<pause0A>ment<pause0A>, ce sera pas gratuit ! Ça te coûtera\n<r<30 rubis>> !\n[1]Dis\x2010moi tout ![2-]Non merci")
          				flw_234:
/*<234>*/ 				switch (choice(2)) {
          				  case 0:
/*<236>*/ 					check_item_flag(501, 30)
/*<237>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 78}) {
          					  case 0:
/*<268>*/ 						rupees += -30;
/*<239>*/ 						printf("\x0E\x01\x09\x04\x11\x808Oh, t'es un garçon généreux, toi ! Tu me plais\nbien. Alors, ouvre bien tes oreilles...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ces balourds attaquent avec une grande lance,\npas vrai ? Et s'ils te touchent, tu fais pas un pli.\n\n\nMais si t'arrives à <r<repousser >>leurs attaques...<pause0F>\x0E\x01\x09\x04\x11\x800\nTu vois ce que je veux dire ?<pause0F>\n[1]Je savais pas[2]Je savais")
/*<241>*/ 						scene_flags[4 'Eldin Volcano'][113 /* 0xF 02 */] = true;
/*<242>*/ 						switch (choice(2)) {
          						  case 0:
/*<244>*/ 							printf("\x0E\x01\x09\x04\x11\x80BEh ouais ! Ça m'a pris pas mal de temps pour\nrassembler ces infos.\n\n\n\x0E\x01\x09\x04ÿ\xFF00Mais j'en ai encore d'autres en réserve...<pause14>\nCelles\x2010là, elles coûtent <r<50 rubis>>.\n[1]Je paie ![2-]Non merci")
          							goto flw_245
          						  case 1:
/*<243>*/ 							printf("\x0E\x01\x09\x04\x12\xE04Quoi ?! T'étais au courant ? T'es un sacré\nnuméro, toi !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Dans ce cas, il va falloir que je sorte l'artillerie\nlourde. Ça fera <r<50 rubis>> !\n[1]Dis\x2010moi tout ![2-]Non merci")
          							goto flw_245
          						}
          					  case 1:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x14\x1215Hé ! Mais t'as pas assez de rubis ! Pas de rubis,\npas d'infos !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Reviens me voir quand t'auras économisé\n<r<30 rubis>> !")
/*<276>*/ 						zone_temp_flags[7 /* 0x1 80 */] = true;
          					}
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Allez, fais pas ton radin ! <r<30 rubis>>, c'est rien...\n\n\n\n\x0E\x01\x09\x04ÿ\xFF00Enfin, si tu changes d'avis, fais\x2010moi signe.")
/*<277>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			}
          		  case 1:
/*<259>*/ 			printf("Salut, toi ! Alors, tu as toujours du mal contre\nles <r<gros balourds avec leur bouclier >>?\n\n\n\x0E\x01\x09\x04\x15\x80BSi tu veux, je peux te donner des<r< infos taupes\nsecrètes >>pour les battre en un clin d'\x153il.")
/*<260>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 253, 'param3': 12}
/*<253>*/ 			printf("\x0E\x01\x09\x04ÿ\xFF09É<pause0A>vi<pause0A>dem<pause0A>ment<pause0A>, ce sera pas gratuit ! Ça te coûtera\n<r<30 rubis>> !\n[1]Dis\x2010moi tout ![2-]Non merci")
          			flw_225:
/*<225>*/ 			switch (choice(2)) {
          			  case 0:
/*<227>*/ 				check_item_flag(501, 30)
/*<228>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<267>*/ 					rupees += -30;
/*<230>*/ 					printf("\x0E\x01\x09\x04\x11\x809Héhé ! Merci, mon gars ! C'est des infos taupes\nsecrètes, alors ça reste entre nous, hein !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Alors en fait...<pause14> Leur bouclier, tu peux le\ndécouper à coups d'épée ! Ça, c'est de\nl'info, hein ?\n\nMais y en a aussi qu'ont des boucliers en métal\net ceux\x2010là, tu peux pas les découper, alors fais\ngaffe !\n[1]Je vois...[2]C'est tout ?")
/*<240>*/ 					scene_flags[4 'Eldin Volcano'][112 /* 0xF 01 */] = true;
/*<231>*/ 					switch (choice(2)) {
          					  case 0:
/*<233>*/ 						printf("\x0E\x01\x09\x04\x15\x90BHéhé ! Mais c'est pas tout ! J'ai encore d'autres\ninfos... Ça t'intrigue, hein ?\n\n\n\x0E\x01\x09\x04ÿ\xFF00Ouais, je m'en doutais...<pause14> Ce sera <r<30 rubis>> de\nplus.\n[1]Voilà ![2-]Non merci")
          						goto flw_234
          					  case 1:
/*<232>*/ 						printf("Quoi ? Pourquoi tu me regardes comme si tu\nle savais depuis longtemps ?\n\n\n\x0E\x01\x09\x04\x15\x809Bon, on va dire que ça, c'était juste le\nhors\x2010d'\x153uvre. J'ai des infos bien plus\nintéressantes. Ce sera <r<30 rubis >>de plus !\n[1]Voilà ![2-]Non merci")
          						goto flw_234
          					}
          				  case 1:
/*<229>*/ 					printf("\x0E\x01\x09\x04\x14\x1215Hé ! Mais t'as pas assez de rubis ! Pas de rubis,\npas d'infos !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Reviens me voir quand t'auras économisé\n<r<30 rubis>> !")
/*<278>*/ 					zone_temp_flags[7 /* 0x1 80 */] = true;
          				}
          			  case 1:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x14\x1215Allez, fais pas ton radin ! <r<30 rubis>>, c'est rien...\n\n\n\n\x0E\x01\x09\x04ÿ\xFF00Enfin, si tu changes d'avis, fais\x2010moi signe.")
/*<279>*/ 				zone_temp_flags[7 /* 0x1 80 */] = true;
          			}
          		}
          	  case 1:
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, toi ! Si tu fais une pause ici, c'est\nque tu galères contre les monstres, non ?\n\n\n\x0E\x01\x09\x04\x11\x900Surtout les <r<gros baraqués avec leur bouclier\n>>qu'y a par là\x2010bas. Ils sont coriaces, ceux\x2010là.\n\n\n\x0E\x01\x09\x04\x15\x80BMais si tu veux, j'ai des <r<infos secrètes >>qui te\npermettront de les battre les doigts dans le nez.")
/*<258>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 257, 'param3': 12}
/*<257>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF09Mais é<pause0A>vi<pause0A>dem<pause0A>ment,<pause0A> ce sera pas gratuit. <r<30 rubis>>,\nça te va ?\n[1]Dis\x2010moi tout ![2-]Non merci")
/*<224>*/ 		scene_flags[4 'Eldin Volcano'][108 /* 0xC 10 */] = true;
          		goto flw_225
          	}
          }

          void entrypoint_303_14() {
/*< 62>*/ 	start()
/*< 63>*/ 	printf("\x0E\x01\x05\x04Z\x00J'Ai... éTÉ MiS... hOrs SerViCe...\nc'EsT... Ta fAuTE... DZZZZZ... ")
          }

          void entrypoint_303_31() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x05\x04Z\x00Je détecte alentour une <r<température extrêmement\nélevée>>, mais vos <y<boucles ignifuges >>vous permettront\nd'y résister.")
          }

          void entrypoint_303_49() {
/*<280>*/ 	start()
/*<281>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. Je ne\ndétecte pas d'<r<eau>> ici.\n\n\nPour activer ce mécanisme, il faut un grand récipient,\nmais je vous recommande de commencer par chercher\nde l'<r<eau>><pling>.")
/*<282>*/ 	scene_flags[5 'Eldin Volcano Summit'][115 /* 0xF 08 */] = true;
          }

          void entrypoint_303_15() {
/*< 64>*/ 	start()
/*< 65>*/ 	printf("\x0E\x01\x12\x04\x00dHé ! Je peux pas aller là\x2010dedans ! Guide\x2010moi\nplutôt en marchant !")
          }

          void entrypoint_303_32() {
/*<101>*/ 	start()
/*<102>*/ 	printf("\x0E\x01\x05\x04Z\x00La probabilité que la dernière <r<flamme sacrée>> se\ntrouve par ici est de 90 %. Je vous suggère de\nchercher la flamme.")
          }

          void entrypoint_303_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	printf("\x0E\x01\x0B\x04\x00rOh ! Me laisse pas ici !")
          }

          void entrypoint_303_33() {
/*<103>*/ 	start()
/*<104>*/ 	printf("Le robot a été mis hors service. Je vous suggère de\nrebrousser chemin pour le réparer.")
          }

          void entrypoint_303_50() {
/*<293>*/ 	start()
/*<294>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. Le robot\nvous attend au pied du volcan.\n\n\nJe vous conseille de regagner le pied du volcan depuis\nle ciel et de revenir jusqu'ici en guidant le robot.")
/*<295>*/ 	temp_flags[29 /* 0x2 20 */] = true;
          }

          void entrypoint_303_17() {
/*< 68>*/ 	start()
/*< 69>*/ 	printf("\x0E\x01\x0B\x04\x00rJe t'ai perdu de vue ! Regarde ma position sur\nta <r<carte>> avec \x0E\x02\x04\x02\x2CD et reviens vite me chercher !")
          }

          void entrypoint_303_34() {
/*<105>*/ 	start()
/*<106>*/ 	printf("T'as intérêt à faire plus attention à moi, cette\nfois !")
/*<199>*/ 	story_flags[723 /* us: 805A9B24 0x08, jp: 805ACDA4 0x08 */] = false;
          }

          void entrypoint_303_00() {
          	start()
/*<  1>*/ 	printf("Allez, dépêche\x2010toi, le maître en vert ! Je te\nsuis !")
          }

          void entrypoint_303_18() {
/*< 70>*/ 	start()
/*<196>*/ 	switch (random(3)) {
          	  case 0:
/*< 71>*/ 		printf("\x0E\x01\x0B\x04\x00rOuah ! Y a des monstres ! Vite ! Fais quelque\nchose !")
          	  case 1:
/*<197>*/ 		printf("\x0E\x01\x0B\x04\x00rOuah ! Ils ont pas l'air commodes ! Dépêche\x2010toi\nde les éliminer !")
          	  case 2:
/*<198>*/ 		printf("\x0E\x01\x0B\x04\x00rAaah ! Des... des monstres ! J'ai peur !")
          	}
          }

          void entrypoint_303_35() {
/*<107>*/ 	start()
/*<108>*/ 	printf("Si je peux encore t'être utile, appelle\x2010moi,\nma douce !")
          }

          void entrypoint_303_01() {
/*<  2>*/ 	start()
/*<  6>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*<  8>*/ 		printf("Je pense qu'il reste quelques <y<cubes de la Déesse\n>>à découvrir dans ces montagnes. Essaie de les\ntrouver !")
          	  case 1:
/*<  3>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Tiens, comme on se retrouve ! Comment\nvas\x2010tu ?\n\n\nJ'ai entendu dire qu'il y avait des <y<cubes de la\nDéesse >>par ici, alors je suis venu voir.\n\n\nTu en as peut\x2010être déjà trouvé plusieurs, mais\nje sens qu'il y en a encore beaucoup qui sont\ncachés dans les parages.\n\n\x0E\x01\x09\x04\x18\x17FFSi ça te dit, pourquoi t'essaierais pas de les\nchercher ?")
/*<  9>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_303_19() {
/*< 72>*/ 	start()
/*< 74>*/ 	switch (random(3)) {
          	  case 0:
/*< 73>*/ 		printf("\x0E\x01\x0B\x04\x00rHé ! Tu comptes me faire poireauter encore\nlongtemps ?! Si tu sais pas où je suis, regarde\nsur ta <r<carte>> avec \x0E\x02\x04\x02\x2CD !")
          	  case 1:
/*< 75>*/ 		printf("\x0E\x01\x0B\x04\x00rViens vite me chercher ! Si tu sais pas où je\nsuis, regarde sur ta <r<carte>> avec \x0E\x02\x04\x02\x2CD !")
          	  case 2:
/*< 76>*/ 		printf("\x0E\x01\x0B\x04\x00rQu'est\x2010ce que tu fabriques ?! Magne\x2010toi !\nPour vérifier où je suis, regarde ta <r<carte\n>>avec \x0E\x02\x04\x02\x2CD !")
          	}
          }

          void entrypoint_303_36() {
/*<109>*/ 	start()
/*<213>*/ 	switch (story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */]) {
          	  case 0:
/*<215>*/ 		set_camera(2, 0)
/*<216>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 217, 'param3': 32}
/*<217>*/ 		make_actor_do_something(0, 49)
/*<214>*/ 		printf("")
/*<218>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	  case 1:
/*<116>*/ 		set_camera(2, 0)
/*<209>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 49, 'next': 210, 'param3': 32}
/*<210>*/ 		make_actor_do_something(0, 49)
/*<110>*/ 		printf("\x0E\x01\x12\x04\x00dEh ben quoi ? Y a un problème ? C'est bien ici\nqu'il fallait la transporter, ta bassine, non ?\n\n\n<pause0A>Quoi ? Au sommet ?! <pause0F>T'aurais pu le dire plus\ntôt ! Pas question que je retourne dans le ciel\navec ce truc qui pèse trois tonnes !\n\nMais, d'un autre côté...<pause0F>")
/*<114>*/ 		set_camera(1, 0)
/*<111>*/ 		printf("\x0E\x01\x12\x04\x00dC'est infesté de monstres, par ici...")
/*<115>*/ 		set_camera(3, 0)
/*<112>*/ 		printf("\x0E\x01\x12\x04\x00dEnfin, en temps normal, j'en ferais qu'une\nbouchée ! Mais il se trouve que j'ai les\nmains prises...")
/*<113>*/ 		printf("\x0E\x01\x12\x04\x00dTiens, puisque t'es là, Maître en vert ! Tu vas\nnous montrer de quoi t'es capable. Tu vas me\nservir de bouclier, je resterai derrière toi.")
/*<187>*/ 		printf("\x0E\x01\x12\x04\x00dSurtout, laisse pas les monstres toucher un seul\nde mes boulons !")
/*<211>*/ 		story_flags[744 /* us: 805A9B29 0x01, jp: 805ACDA9 0x01 */] = true;
/*<212>*/ 		story_flags[743 /* us: 805A9B26 0x80, jp: 805ACDA6 0x80 */] = true;
          	}
          }

          void entrypoint_303_02() {
/*<  4>*/ 	start()
/*<  5>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport. Grâce à l'amélioration de\nvotre épée, il est à présent possible de <r<détecter>> les\n<y<cubes de la Déesse>>.\n\nJ'ai ajouté les <y<cubes de la Déesse >>aux cibles pouvant\nêtre <r<détectées>>. <pling>Faites\x2010en bon usage.")
/*<  7>*/ 	story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */] = true;
/*<290>*/ 	open_dowsing_wheel(21)
          }

          void entrypoint_303_37() {
/*<117>*/ 	start()
/*<124>*/ 	switch (story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */]) {
          	  case 0:
/*<125>*/ 		printf("T'as vraiment pas de bol. Être arrivé jusqu'ici\net pas pouvoir entrer...\n\n\n\x0E\x01\x09\x04\x15\xDFF...<pause14> J'ai comme l'impression d'avoir oublié\nquelque chose de très important.\n\n\nQuelque chose que mon pote m'aurait dit...<pause14>\n\x0E\x01\x09\x04\x00\x04Hmm... C'était quoi, déjà ?\n\n\n\x0E\x01\x09\x04\x09\x8FFEnfin, c'est pas grave. Si t'as besoin de\nbeaucoup d'eau, va voir au <r<lac Faroria>>.")
          		flw_141:
/*<141>*/ 		switch (story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */]) {
          		  case 0:
          		  case 1:
/*<138>*/ 			zone_temp_flags[0 /* 0x1 01 */] = true;
          		}
          	  case 1:
/*<118>*/ 		printf("\x0E\x01\x09\x04\x11\x801Tiens, toi aussi t'es arrivé jusqu'ici ?\nTu cherches toujours ta copine ?\n\n\n\x0E\x01\x09\x04\x09\x8FFMoi, je suis toujours à la recherche de trésors\net j'ai entendu dire qu'il y avait des grandes\nruines par ici...\n\n\x0E\x01\x09\x04\x15\xDFFMais pour l'instant, j'en ai pas vu le moindre\ncaillou... Tu saurais pas où elles sont ?\n[1]Tu veux savoir ?[2]Je ne dirai rien")
/*<119>*/ 		switch (choice(2)) {
          		  case 0:
/*<120>*/ 			printf("\x0E\x01\x09\x04\x11\x900Tu sais où elles sont ? On est potes, tous les\ndeux, non ? Tu vas me le dire, hein ?")
          			flw_122:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x09\x80EQuoi, y a des flammes qui empêchent d'entrer ?\nBen il suffit de verser de l'eau pour les éteindre,\nnon ?\n\n\x0E\x01\x09\x04\x15\x800Quoi ? Il faut beaucoup d'eau ? Je vois...<pause14> L'eau\nd'ici suffira pas.\n\n\n\x0E\x01\x09\x04\x09\x8FFIl paraît que la source de cette chute d'eau est\nla même que celle du <r<lac Faroria<pling> >>qui se trouve\ntrès loin d'ici.\n\n\x0E\x01\x09\x04\x11\x8FFUn de mes potes qu'était allé chercher des\ntrésors dans la <b<forêt de Firone >>a longé une\nvoie d'eau souterraine qui partait de ce lac\npour revenir ici.\n\x0E\x01\x09\x04\x09\x8FFTout ça pour dire que c'était un super grand\nlac. Si t'allais là\x2010bas, tu pourrais trouver toute\nl'eau qu'il te faut, non ?")
/*<123>*/ 			story_flags[676 /* us: 805A9B20 0x20, jp: 805ACDA0 0x20 */] = true;
          			goto flw_141
          		  case 1:
/*<121>*/ 			printf("\x0E\x01\x09\x04\x14\x120AAllez, fais pas ton radin ! On est potes, tous les\ndeux, non ? Tu peux bien me le dire !")
          			goto flw_122
          		}
          	}
          }

          void entrypoint_303_03() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("Étanche ma soif et\nle chemin s'ouvrira.")
          }

          void entrypoint_303_20() {
/*< 77>*/ 	start()
/*< 78>*/ 	printf("\x0E\x01\x0B\x04\x00rC'est pas trop tôt ! Me laisse plus en plan\ncomme ça !")
          }

          void entrypoint_303_38() {
/*<126>*/ 	start()
/*<135>*/ 	switch (scene_flags[114 /* 0xF 04 */]) {
          	  case 0:
/*<136>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport.\nVous n'avez pas encore éteint les flammes\nqui vous empêchent d'avancer.\n\nVoulez\x2010vous que j'ajoute le récipient dans lequel\nbaignait le <b<dragon d'eau >>aux cibles à <g<détecter>> ?\n[1]Vas\x2010y ![2-]Pas encore")
          		flw_139:
/*<139>*/ 		switch (choice(2)) {
          		  case 0:
/*<128>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = true;
/*<129>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<130>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<131>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<132>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<133>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<289>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'ai ajouté le récipient dans lequel\nbaignait le <b<dragon d'eau >>aux cibles à <g<détecter>>.<pling>")
/*<288>*/ 			open_dowsing_wheel(13)
          			flw_134:
/*<134>*/ 			scene_flags[5 'Eldin Volcano Summit'][114 /* 0xF 04 */] = true;
/*<137>*/ 			zone_temp_flags[0 /* 0x1 01 */] = false;
          		  case 1:
/*<140>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Je remets l'enregistrement à plus\ntard.")
          			goto flw_134
          		}
          	  case 1:
/*<127>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître Link, Fay au rapport. Comme\nvous l'a suggéré ce <b<Mogma>>, je vous conseille\nde vous rendre au <r<lac Faroria>>.\n\nPour ce qui est du moyen de transporter l'eau depuis\nle lac...<pause0F> pourquoi ne pas demander au <r<dragon d'eau >>?<pling>\n\n\nAvec la <r<bassine>> dans laquelle baignait le dragon\nd'eau lorsqu'il était blessé, il devrait être possible\nde transporter une grande quantité d'eau.")
/*<296>*/ 		printf("Voulez\x2010vous que je recherche dans ma mémoire pour\najouter ce récipient aux cibles à <r<détecter>> ?\n[1]Vas\x2010y ![2-]Pas encore")
          		goto flw_139
          	}
          }

          void entrypoint_303_04() {
/*< 12>*/ 	start()
/*< 14>*/ 	switch (story_flags[110 /* us: 805A9AE1 0x08, jp: 805ACD61 0x08 */]) {
          	  case 0:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Tiens ! Toi aussi tu es venu chercher des\n<y<cubes de la Déesse >>? T'as pas eu de mal à\ntraverser cette fournaise ?\n\n\x0E\x01\x09\x04ÿ\xFF00Moi non plus la chaleur, ça me dérange pas,\nmais je peux pas passer à travers ces flammes...")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x18\x17FFComment je pourrais me débarrasser de ces\nflammes ?")
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x15\x1B09Tiens, comme on se retrouve ! Comment\nvas\x2010tu ?\n\n\n\x0E\x01\x09\x04\x16\xBFFJ'ai entendu dire qu'il y avait un <y<cube de la\nDéesse >>par ici alors je suis venu voir.\n\n\n\x0E\x01\x09\x04\x00\xB00Mon instinct me dit qu'il y en a un peu plus\nloin, mais à cause de ces flammes, je peux\npas y aller !")
/*< 16>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_17
          	}
          }

          void entrypoint_303_21() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x0B\x04\x00rOh ! Qu'est\x2010ce que tu fabriques ?!")
          }

          void entrypoint_303_39() {
/*<148>*/ 	start()
/*<150>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<151>*/ 		printf("\x0E\x01\x09\x04\x0C\x405Pour le farniente, ce qu'il me faudrait, c'est\nun endroit ensoleillé et en altitude.\n\n\n\x0E\x01\x09\x04\x0C\xDFFJ'ai toujours vécu sous terre, mais j'adore\ncontempler le ciel.\n\n\n\x0E\x01\x09\x04\x09\x906Si je devais me réincarner, je voudrais être un\noiseau pour parcourir l'immensité du ciel.")
          	  case 1:
/*<149>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07Oh, mais t'es le p'tit gars de la dernière fois...\n\n\n\n\x0E\x01\x09\x04\x0B\x506Hohoho ! Alors, comment tu trouves les gants\nque j'ai inventés ?\n\n\nComment je vais ? Moi ? Oh, tu sais, moi...\n\n\n\n\x0E\x01\x09\x04\x0C\x405Depuis l'autre fois, j'ai cherché d'autres\nendroits qui renferment des trésors, mais\nj'ai rien trouvé.\n\nJe commence à être fatigué de me démener à\nchercher des trésors dans cette fournaise...\n\n\n\x0E\x01\x09\x04\x09\x908Je devrais peut\x2010être prendre ma retraite\net passer mes vieux jours à me livrer aux\ndouceurs du farniente...")
/*<152>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

          void entrypoint_303_05() {
/*< 23>*/ 	start()
/*< 21>*/ 	switch (scene_flags[106 /* 0xC 04 */]) {
          	  case 0:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x18\x1700En sortant d'ici, au fond à droite il y a bien une\n<r<source d'eau>>, mais... Hmm... Comment faire ?")
          	  case 1:
/*< 20>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*< 18>*/ 			printf("« Étanche ma soif » ? Maintenant que j'y\npense, en sortant d'ici, au fond à droite,\nil y a une sortie.\n\nJ'y ai trouvé une <r<source d'eau>><pling>. Ça m'a bien\ndésaltéré.\n\n\n\x0E\x01\x09\x04\x18\x1705Mais comment apporter l'eau jusqu'ici ? On\npeut pas transporter cette drôle de grenouille...<pause0F>\nComment faire ?")
/*< 19>*/ 			scene_flags[5 'Eldin Volcano Summit'][106 /* 0xC 04 */] = true;
          		  case 1:
/*< 24>*/ 			printf("\x0E\x01\x09\x04\x18\x17FFComment je pourrais me débarrasser de ces\nflammes ?")
          		}
          	}
          }

          void entrypoint_303_22() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("\x0E\x01\x0B\x04\x00rHé ! Si tu continues comme ça, tu vas me\nmettre hors service !")
          }

          void entrypoint_303_06() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Oh ! Les flammes se sont éteintes ! On va\npouvoir avancer !")
/*<153>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 28, 'param3': 13}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 0, 'next': 27, 'param3': 14}
/*< 27>*/ 	story_flags[468 /* us: 805A9B0F 0x40, jp: 805ACD8F 0x40 */] = true;
/*<142>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_23() {
/*< 83>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, le robot nous attend au volcan. Veuillez l'y\nrejoindre au plus vite.")
          }

          void entrypoint_303_40() {
/*<155>*/ 	start()
/*<157>*/ 	switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          	  case 0:
          		flw_165:
/*<165>*/ 		switch (scene_flags[81 /* 0xB 02 */]) {
          		  case 0:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x1A\x30DBoss... Je ferai tout pour être votre digne\nsuccesseur. Veillez sur nous de là\x2010haut...")
          		  case 1:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x1C\x180FOuah ! Le boss a décollé ! Où est\x2010ce qu'il est\nparti ? \n[1]Dans le ciel[2]Au paradis")
/*<161>*/ 			switch (choice(2)) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011Dans le ciel ?\n\n\n\n... \x0E\x01\x09\x04\x1B\x407Je vois<pause14>... C'est vrai que le boss a toujours\naimé le ciel.\n\n\nJe suis sûr que même là\x2010haut, il continue à\nchercher des trésors.")
          				flw_164:
/*<164>*/ 				scene_flags[4 'Eldin Volcano'][81 /* 0xB 02 */] = true;
          			  case 1:
/*<163>*/ 				printf("\x0E\x01\x09\x04\x1A\x2011Au... Au paradis ?\n\n\n\n...\x0E\x01\x09\x04\x1B\x2207 Je vois<pause14>... Alors finalement, le boss nous a\nquittés...\n\n\nJ'imaginais pas ça comme ça, le départ pour le\nparadis...")
          				goto flw_164
          			}
          		}
          	  case 1:
/*<186>*/ 		switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          		  case 0:
          			goto flw_165
          		  case 1:
/*<160>*/ 			switch (scene_flags[81 /* 0xB 02 */]) {
          			  case 0:
/*<176>*/ 				switch (zone_temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<177>*/ 					printf("\x0E\x01\x09\x04\x1B\x2207Se promener comme ça entre le ciel et la terre...\nIl est trop fort le boss.")
          				  case 1:
/*<174>*/ 					printf("\x0E\x01\x09\x04\x1A\x2011Bah ça alors ! Le boss... Il est revenu !\n\n\n\n\x0E\x01\x09\x04\x1B\x2207Il fait des allers\x2010retours entre le ciel et la\nterre... Il est trop fort, le boss !")
/*<175>*/ 					zone_temp_flags[4 /* 0x1 10 */] = true;
          				}
          			  case 1:
/*<167>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<172>*/ 					switch (zone_temp_flags[3 /* 0x1 08 */]) {
          					  case 0:
/*<173>*/ 						printf("\x0E\x01\x09\x04\x00\x15Du farniente, hein... Bah, si c'est que le boss\nveut, donne\x2010lui ce qu'il demande.")
          					  case 1:
/*<286>*/ 						switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          						  case 0:
/*<170>*/ 							printf("\x0E\x01\x09\x04\x1A\x2001Alors, frangin, t'es allé voir le boss ? Comment\ntu l'as trouvé ?\n\n\n......\n\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011Quoi ? Du farniente ?\n\n\n\n... \x0E\x01\x09\x04\x00ÿC'est quoi ça ? Un trésor ?\n\n\n\n\x0E\x01\x09\x04\x1B\x1E15Bah, moi, j'y connais rien...\n\n\n\nMais si c'est ce que veut le boss, fais ce qu'il te\ndemande.")
          							flw_171:
/*<171>*/ 							zone_temp_flags[3 /* 0x1 08 */] = true;
          						  case 1:
/*<287>*/ 							printf("\x0E\x01\x09\x04\x1B\x2201Oh ! C'est toi, frangin ! Ça creuse ?\n\n\n\nHein ? Moi ? Ben, je pète toujours la forme !\n\n\n\n\x0E\x01\x09\x04\x00\x02Mais depuis qu'on est revenus de ces ruines, le\nboss est bizarre. Il a pas l'air dans son assiette...\n\n\n\x0E\x01\x09\x04\x1B\x22FFT'es allé lui parler tout à l'heure, non ? Alors,\ncomment il va ?\n\n\n\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x1A\x2011Quoi ? Du farniente ?\n\n\n\n... \x0E\x01\x09\x04\x00ÿC'est quoi ça ? Un trésor ?\n\n\n\n\x0E\x01\x09\x04\x1B\x1E15Bah, moi, j'y connais rien...\n\n\n\nMais si c'est ce que veut le boss, fais ce qu'il te\ndemande.")
/*<292>*/ 							story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          							goto flw_171
          						}
          					}
          				  case 1:
/*<168>*/ 					switch (story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */]) {
          					  case 0:
/*<169>*/ 						printf("\x0E\x01\x09\x04\x1B\x50ALe <b<boss >>doit être quelque part dans le coin.\nVa donc lui serrer la pince !\n\n\nPeut\x2010être que s'il te voit, ça lui remontera\nle moral !")
          					  case 1:
/*<156>*/ 						printf("\x0E\x01\x09\x04\x1B\x2201Oh ! C'est toi, frangin ! Ça creuse ?\n\n\n\nHein ? Moi ? Ben, je pète toujours la forme !\n\n\n\n\x0E\x01\x09\x04\x00\x02Mais depuis qu'on est revenus de ces ruines, le\n<b<boss >>est bizarre. Il a pas l'air dans son assiette...\n\n\n\x0E\x01\x09\x04\x1B\x230ABah, va donc tailler la bavette avec lui ! Il doit\nêtre quelque part dans le coin.")
/*<159>*/ 						story_flags[1092 /* us: 805A9B52 0x04, jp: 805ACDD2 0x04 */] = true;
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_303_07() {
/*< 29>*/ 	start()
/*< 31>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
          		flw_32:
/*< 32>*/ 		printf("Excuse\x2010moi, mais tu pourrais pas t'en occuper\nencore une fois ?")
          	  case 1:
/*< 30>*/ 		printf("\x0E\x01\x09\x04\x16\x1E56En voilà d'autres... C'est agaçant...")
/*< 33>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          		goto flw_32
          	}
          }

          void entrypoint_303_24() {
/*< 85>*/ 	start()
/*< 86>*/ 	printf("Je t'attendais ! Amène\x2010moi au sommet ! Et que\nça saute !")
          }

          void entrypoint_303_41() {
/*<178>*/ 	start()
/*<180>*/ 	switch (zone_temp_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<181>*/ 		printf("\x0E\x01\x09\x04\x1B\x2215Il y a bien que pour la chasse au trésor que\n<b<Tino>> montre de la volonté...")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x1A\x200FAh... T'es le p'tit gars de l'autre fois !<pause0F>\n\n\n\n\x0E\x01\x09\x04\x1B\x2209Héhéhé ! T'inquiète, y a pas de lézard.\n\n\n\nMon frangin m'a capté quand je me suis planté\ndans les ruines.\n\n\n\x0E\x01\x09\x04\x1B\x1EFFMais il s'est retrouvé dans le même pétrin, alors\non est quittes !\n\n\n\x0E\x01\x09\x04\x1A\xA12Dis\x2010moi plutôt... T'aurais pas vu <b<Tino >>dans le\ncoin ?\n[1]Il est là\x2010bas[2]Non")
/*<183>*/ 		switch (choice(2)) {
          		  case 0:
/*<184>*/ 			printf("\x0E\x01\x09\x04\x1B\xA12Ah bon ? Alors, tant mieux.\n\n\n\nC'est juste que ça fait un bail que je l'ai pas vu.\n\n\n\n\x0E\x01\x09\x04\x1B\x160FJ'avais peur qu'il soit encore allé se fourrer\ndans un sale pétrin...\n\n\n\x0E\x01\x09\x04\x1B\x16FFIl faut toujours être sur son dos !")
          			flw_182:
/*<182>*/ 			zone_temp_flags[5 /* 0x1 20 */] = true;
          		  case 1:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x1B\x2207C'est pas possible, ça...<pause14> Il a encore dû partir tout\nseul à la chasse au trésor !\n\n\nMon frangin lui a pourtant dit que c'était\ndangereux d'agir en solo !\n\n\n\x0E\x01\x09\x04\x1B\x09Enfin, je suppose que c'est son instinct de\n<b<chasseur de trésor >>qui veut ça.\n\n\nSi tu vois <b<Tino>> quelque part, dis\x2010lui que je le\ncherchais !")
          			goto flw_182
          		}
          	}
          }

          void entrypoint_303_08() {
/*< 34>*/ 	start()
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x17\x1908Oh ! Bien joué ! Bon, j'y vais !")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6911, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 0, 'next': 36, 'param3': 14}
/*< 36>*/ 	story_flags[469 /* us: 805A9B0E 0x02, jp: 805ACD8E 0x02 */] = true;
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_303_25() {
/*< 87>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00dHé ! Tu m'as pas oublié, j'espère ! Vérifie ma\nposition sur ta <r<carte >>avec \x0E\x02\x04\x02\x2CD !\x0E\x01\x11\x02\x2CD")
          }

          void entrypoint_303_42() {
/*<188>*/ 	start()
/*<190>*/ 	switch (scene_flags[82 /* 0xB 04 */]) {
          	  case 0:
/*<191>*/ 		printf("\x0E\x01\x09\x04\x0D\x509Voyons, où est\x2010ce que je vais pouvoir aller\nchercher des trésors maintenant...?")
          	  case 1:
/*<189>*/ 		printf("\x0E\x01\x08\x02\x1CD\x0E\x01\x09\x04\x0E\x1008Tiens, frangin ! T'es encore vivant ?!\n\n\n\n\x0E\x01\x09\x04\x11\x110BOn dirait que t'as retrouvé tout ton\néquipement ! Je savais que tu y\narriverais !\n\nAlors ?<pause14> T'as trouvé des trésors ?\n[1]Des montagnes ![2]Rien du tout...")
/*<192>*/ 		switch (choice(2)) {
          		  case 0:
/*<193>*/ 			printf("\x0E\x01\x09\x04\x0E\x505Vraiment ? T'es un sacré veinard !\n\n\n\n\x0E\x01\x09\x04\x0E\x1F0AMais le monde est vaste ! Je suis sûr qu'il y a\nencore des trésors qui dorment un peu partout.\n\n\nJ'suis pas du genre pessimiste ! La prochaine\nfois, moi aussi je toucherai le gros lot !")
          			flw_195:
/*<195>*/ 			scene_flags[4 'Eldin Volcano'][82 /* 0xB 04 */] = true;
          		  case 1:
/*<194>*/ 			printf("\x0E\x01\x09\x04\x0E\x40AAh bon ? Y avait rien d'intéressant ? C'est pas\nde bol...\n\n\n\x0E\x01\x09\x04\x0F\x508Bah, t'en fais pas, va ! Le monde est vaste !\nIl y a encore plein de trésors qui attendent !")
          			goto flw_195
          		}
          	}
          }

          void entrypoint_303_09() {
/*< 38>*/ 	start()
/*< 45>*/ 	switch (story_flags[173 /* us: 805A9AE2 0x10, jp: 805ACD62 0x10 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[111 /* 0xC 80 */]) {
          		  case 0:
/*< 53>*/ 			printf("Je vais poursuivre mon voyage et mes\nrecherches. Nous nous croiserons\nsûrement à nouveau.")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x18\x1702Alors, tu as trouvé quelque chose à l'intérieur ?\n[1]Plein de\npièges[2]Plein de\nmonstres")
/*< 47>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_49:
/*< 49>*/ 				switch (story_flags[248 /* us: 805A9AF7 0x04, jp: 805ACD77 0x04 */]) {
          				  case 0:
/*< 50>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Ah... Ah bon...? Dans ce cas, je te laisse explorer\nl'intérieur.\n\n\n\x0E\x01\x09\x04\x08\xBFFMoi, je vais bientôt repartir pour poursuivre\nmes recherches ailleurs. Je suis sûr qu'on se\nreverra.")
          					flw_51:
/*< 51>*/ 					scene_flags[5 'Eldin Volcano Summit'][111 /* 0xC 80 */] = true;
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Ah... Ah bon...? Dans ce cas, je te laisse explorer\nl'intérieur.\n\n\n\x0E\x01\x09\x04\x08\xBFFAu fait, mon instinct me dit qu'il y a un <y<cube\nde la Déesse >>tout près d'ici.\n\n\nEt mon instinct me trompe rarement. Si j'étais\ntoi, je chercherais bien dans les environs.")
          					goto flw_51
          				}
          			  case 1:
          				goto flw_49
          			}
          		}
          	  case 1:
/*< 43>*/ 		switch (story_flags[187 /* us: 805A9AE9 0x04, jp: 805ACD69 0x04 */]) {
          		  case 0:
/*< 44>*/ 			printf("\x0E\x01\x09\x04\x17\x1908Ouah ! T'es vraiment impressionnant !\nTu peux vraiment tout faire !\n\n\n\x0E\x01\x09\x04\x08\xBFFJe te laisse passer devant. Vas\x2010y, entre !")
          		  case 1:
/*< 40>*/ 			switch (story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */]) {
          			  case 0:
/*<284>*/ 				switch (temp_flags[15 /* 0x0 80 */]) {
          				  case 0:
/*<285>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Un <r<grand récipient >>qui pourrait contenir\nbeaucoup d'<r<eau>>... Où est\x2010ce qu'on pourrait\ntrouver ça ?")
          				  case 1:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x18\x1707Comment faire pour donner assez d'<r<eau >>à ce\ntruc ? Il en faudrait beaucoup... et aussi un\n<r<grand récipient>>...\n\n\x0E\x01\x09\x04\x16\x1EFFTu as visité un tas d'endroits différents durant\nton aventure. T'aurais pas une idée ?")
/*<283>*/ 					temp_flags[15 /* 0x0 80 */] = true;
          				}
          			  case 1:
/*< 39>*/ 				printf("Tu as vu ça ? C'est vraiment très louche, tout\nça...\n\n\n\x0E\x01\x09\x04\x17\x1908C'est un peu beaucoup pour un simple <y<cube de\nla Déesse>>. Il doit y avoir <r<quelque chose de très\nimportant >>caché par ici.")
/*<144>*/ 				set_camera(4, 0)
/*<146>*/ 				printf("\x0E\x01\x09\x04\x16\x1EFFEt cette fois, elle est vraiment énorme...\nJe pense pas qu'un simple <y<flacon >>suffira.")
/*<145>*/ 				set_camera(-1, 0)
/*<147>*/ 				printf("\x0E\x01\x09\x04\x00\x07Hmm...<pause0F>\x0E\x01\x09\x04\x18\x1700 Tu aurais pas un <r<grand récipient<pling> >>qui\npourrait te permettre de verser de l'eau\nlà\x2010dessus ?\n\n\x0E\x01\x09\x04\x16\x1EFFEt il faudrait aussi beaucoup d'<r<eau>> pour le\nremplir... Hmm... Comment faire ?")
/*< 42>*/ 				story_flags[467 /* us: 805A9B0F 0x10, jp: 805ACD8F 0x10 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_303_26() {
/*< 89>*/ 	start()
/*< 90>*/ 	printf("C'est là\x2010dessus qu'il faut verser l'eau ? OK, je\nm'en occupe !")
          }

          void entrypoint_303_43() {
/*<201>*/ 	start()
/*<202>*/ 	printf("Nous sommes arrivés au volcan d'Ordinn.\n\n\n\nÀ l'aide de la <r<détection>>, vous pouvez rechercher\nl'entrée de l'épreuve qui vous permettra de trouver\nla flamme sacrée.")
          }

