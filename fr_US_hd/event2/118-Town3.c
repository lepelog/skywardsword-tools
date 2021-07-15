          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf("\x0E\x01\x09\x04\n\xA12C'est bizarre, on ne voit plus la Déesse, d'ici.\nJe me demande bien pourquoi...\n\n\nAh, puis... Tant pis.")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf("\x0E\x01\x09\x04\x00\x09Alors, tu as retrouvé la petite Picalia?\n\n\n\n\x0E\x01\x09\x04\x00\xE00T'as fait ça tout seul? Tu es bien digne d'être\nun apprenti chevalier!\n\n\n\x0E\x01\x09\x04\x00\x400Va le dire à sa mère pour la rassurer! Elle\nhabite une maison au bord de la rivière!")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x01Mais, qu'est\x2010ce qui t'arrive, Link?\nT'es tout pâle.\n[1]C'est Picalia![2-]Ah bon?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf("\x0E\x01\x09\x04\x00\x506Quoi? Picalia a disparu?\n\n\n\n\x0E\x01\x09\x04\x00\x500Elle a été enlevée par un monstre?\n\n\n\n\x0E\x01\x09\x04\x0B\x400Penses-tu qu'il y a un rapport avec les\nhistoires qu'on raconte au sujet d'une\ncréature démoniaque qui vivrait quelque\npart à Célesbourg.\n\x0E\x01\x09\x04\n\x500La nuit tombée, elle sortirait dans le bourg\npour terroriser les gens et enlever les enfants!\n\n\n\x0E\x01\x09\x04\x00\x400Ce n'est sûrement qu'une légende, mais ça\nm'intrigue quand même...")
          				  case 1:
/*< 48>*/ 					printf("\x0E\x01\x09\x04\x00\x04S'il n'y a rien de grave, eh bien, on va\narrêter de s'en faire!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf("\x0E\x01\x09\x04\x00\x06J'ai croisé la mère de Picalia qui arpentait\nle village en appelant sa fille. Qu'est\x2010ce\nqui a bien pu se passer?")
          				  case 1:
/*< 51>*/ 					printf("\x0E\x01\x09\x04\x0B\xE01Il paraît que c'est toi qui as remporté la\nchevauchée céleste! Félicitations!\n\n\n\x0E\x01\x09\x04\x00\xA00Mais dis\x2010moi, tu n'as pas l'air content.\nQu'est\x2010ce qui ne va pas?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf("\x0E\x01\x09\x04\n\xC12Qu'est\x2010ce que c'était que ce grondement,\ntout à l'heure?")
          			goto flw_55
          		  case 1:
          			goto flw_55
          		}
          	}
          }

          void entrypoint_118_22() {
/*<152>*/ 	start()
/*<148>*/ 	switch (zone_temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*<170>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 156, 'param3': 13}
/*<156>*/ 		printf("\x0E\x01\x09\x04\x00\nOoooh! C'est fascinant!\n\n\n\nIl existe encore dans ce monde d'innombrables\nplantes inconnues! Cap-ti-vant!\n\n\nJ'ai retrouvé la motivation de poursuivre\nma collection!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf("\x0E\x03\x01\x00Link! Merci mille fois!\nNe t'en fais pas, je prendrai grand soin\nde ma nouvelle plante.\n\nSi tu trouves d'autres plantes rares,\npréviens\x2010moi!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00SOh! Mais... Mais c'est... Oui! C'est exactement\nce que je recherchais! Une nouvelle espèce\nde plante!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf("Hm. Voyons voir... Flore ou faune?\nC'est\x2010à\x2010dire, végétal ou animal?\n\n\nHmm... C'est peut\x2010être la plus grande\ndécouverte de ce siècle!")
/*<147>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_118_06() {
/*<  3>*/ 	start()
/*<373>*/ 	switch (zone_temp_flags[11 /* 0x0 08 */]) {
          	  case 0:
          		flw_57:
/*< 57>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x09\x257C'est vrai.<pause0A>.<pause0A>.? Tu as retrouvé la fillette qui \navait disparu?\n\n\nAlors, en fin de compte, elle n'avait pas été\nenlevée? Tant mieux!\n\n\n\x0E\x01\x09\x04\x00\x609Quoi qu'il en soit, c'est une affaire de réglée!\nBeau travail, chevalier!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf("\x0E\x01\x09\x04\x00\x1557Il t'a raconté que si l'on <g<frappe>> la <r<tombe la\nplus proche de l'arbre >>puis qu'on la <g<déplace>>,\nle démon apparaîtrait?\n\n\x0E\x01\x09\x04\x00\x1513En tous cas, si j'étais toi, je n'irais pas me\npromener dans le cimetière en pleine nuit,\nça c'est sûr!")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors tu es allé parler au vieux monsieur\nà la Citrouille perchée?\n\n\nSi on <g<percute>> la <r<tombe la plus proche de\nl'arbre >>puis qu'on la <g<déplace>>, le démon\napparaît...?\n\n\x0E\x01\x09\x04\x00\x1513Je me demande si c'est vrai\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Enfin, je te\ndéconseille de te promener dehors la nuit.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf("\x0E\x01\x09\x04\x11\x200Tu veux savoir où trouver ce vieux monsieur?\n\n\n\n\x0E\x01\x09\x04\x00\x200Il doit être <r<à la Citrouille perchée>>, à l'est\nd'ici. C'est un habitué.\n\n\n\x0E\x01\x09\x04\x12\x200Évidemment, il faut s'y rendre en oiseau.")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x00\x1513Tu as entendu la rumeur? On raconte qu'une\nfillette aurait disparu alors qu'elle jouait dans\nle cimetière...\n\n\x0E\x01\x09\x04\x12\x1500Même dans un petit bourg comme le nôtre,\non n'est plus en sécurité...\n[1]Tout à fait![2-]Ah bon?")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x01\xC06Pardon? Elle pourrait avoir été enlevée par\nun monstre?\n\n\n\x0E\x01\x09\x04\x00\xC00Il ne faut pas exagérer quand même... <pause1E>Ah<pause0A>.<pause0A>.<pause0A>.<pause0A>\n\n\n\n\x0E\x01\x09\x04\x09\x200Maintenant que tu en parles, il y a un <r<<pling>vieux\nmonsieur>> qui habite près d'ici qui raconte\nque des monstres vivraient ici, à Célesbourg.\n\n\x0E\x01\x09\x04\x12\x200Mais il est un peu zouinzouin alors personne\nne le prend au sérieux...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x12\x1557Tu es inconscient, ma parole... Quelqu'un a\ndisparu dans notre bourg! C'est très grave!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf("\x0E\x01\x09\x04\x00\x1504On raconte qu'une fillette aurait disparu!")
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x00\x501Oh! Comme ça, tu as remporté la chevauchée\ncéleste et tu es passé à la classe élite!\n\n\n\x0E\x01\x09\x04\x0C\x200Je vois ça à ton élégant uniforme de chevalier!\nIl te va très bien, tu sais!\n\n\nTe voilà encore plus près de devenir un\nvrai chevalier!")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf("\x0E\x01\x09\x04\x09\x1501J'ai eu peur... La terre s'est mise à gronder\ntout à coup et après ça, l'île de la Déesse\navait disparu!\n\n\x0E\x01\x09\x04\x12\x200Mais... Au fait...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf("\x0E\x01\x09\x04\x00\x13Tu as ressenti cette grosse secousse? Je me\ndemande bien ce que c'était...\n\n\n\x0E\x01\x09\x04\x12\x200Ah, au fait...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x00\x02Oh, Link! Qu'est\x2010ce que tu fais?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf("... Il t'intéresse, ce moulin, on dirait?\n\n\n\nIl a été construit de manière à pouvoir\npivoter pour capter le vent le plus\nefficacement possible. Génial, non?")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf("Mais, il y a très très longtemps...\n\n\n\nLa petite <r<hélice>> qui permettait au moulin\nde pivoter s'est détachée.\n\n\nEt elle serait tombée sous les nuages.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf("Et depuis, comme il sert plus à rien, on a\nlaissé ce moulin à l'abandon.")
/*<179>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 181, 'param3': 6}
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 75, 'param3': 6}
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf("Afin de pouvoir faire bouger ce moulin, je vous\nsuggère d'aller récupérer son <r<hélice >>tombée sur terre.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 198, 'param3': 6}
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf("\x0E\x01\x09\x04\x0C\x800Pardon? Si tu me ramènes l'hélice, est\x2010ce que\nje pourrais réparer le moulin?\n\n\nBien, je devrais pouvoir remettre l'hélice\nen place, mais...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf("Mais comment tu comptes t'y prendre pour\nretrouver cette hélice?\n\n\nSi elle est tombée sous les nuages, elle est\nperdue pour de bon...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\xC13 Attends un peu. Tu connais <b<Gondo>> qui tient\nl'atelier de rénovation au bazar?\n\n\nJ'ai entendu dire que son grand\x2010père utilisait\nun <r<robot volant >>pour aller récupérer de la\nferraille sous les nuages...\n\nMais bon, connaissant la famille de Gondo,\nà mon avis, c'est de la frime.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf("\x0E\x01\x09\x04\x00\x01La statue de la Déesse est plus là!\nQu'est\x2010ce qu'on va faire?\n\n\nC'était l'endroit idéal pour attraper\ndes insectes!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf("\x0E\x01\x09\x04\x00\x01Moi aussi j'irai à la boutique de Beedle acheter\nle filet!\n\n\nEt je le ferai agrandir à l'atelier de rénovation,\nouais!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\nQuoi? T'es allé à la boutique de Beedle?\nPff! C'est pas juste! Moi aussi je veux\ny aller!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf("\x0E\x01\x09\x04\x00\x01Mais, euh! Je veux mon filet! Je dois\ntrouver un moyen d'aller à la boutique\nde Beedle...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tu as retrouvé Picalia?\n\n\n\n\x0E\x01\x09\x04\x0F\x1300Tout le monde s'inquiétait pour elle!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\nQuoi? T'es allé à la boutique de Beedle?\nPff! C'est pas juste! Moi aussi je veux\ny aller!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf("\x0E\x01\x09\x04\x00\x06Picalia?\n\n\n\n\x0E\x01\x09\x04\x12\x900Bien, hier, je l'ai vue jouer dans le <r<cimetière>>...\n\n\n\n\x0E\x01\x09\x04\n\x900Mais ma mère est venue me chercher alors\nje suis parti avant elle.\n\n\n\x0E\x01\x09\x04\x01\x900Il lui est arrivé quelque chose?")
          					  case 1:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x10\x1301Je me demande comment je pourrais faire\npour acheter un filet de la boutique de Beedle...\n\n\n[1]Où est\nPicalia?[2]La boutique\nde Beedle?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf("\x0E\x01\x09\x04\x00\x04Je réfléchis à un moyen d'arrêter la boutique\nde Beedle.\n\n\n\x0E\x01\x09\x04\x12\x900Il paraît que quand on fait sonner <pling>la cloche\nqui pend, il s'arrête.\n\n\n\x0E\x01\x09\x04\x10\x1300Si seulement je pouvais <r<lancer quelque chose\n>>jusque là\x2010haut!\n\n\nSi jamais tu trouves pas la boutique de Beedle\navec la vue subjective, regarde donc sur\nta <g<carte>>!")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\nQuoi? T'es allé à la boutique de Beedle?\nPff! C'est pas juste! Moi aussi je veux\ny aller!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf("\x0E\x01\x09\x04\x00\x01Hé, regarde là\x2010haut! La <b<boutique de Beedle\n>>est enfin arrivée!\n\n\n\x0E\x01\x09\x04\n\x1300Il vend des <r<filets>>! Il m'en faut un!\n\n\n\n\x0E\x01\x09\x04\x12\x900Si je pouvais faire sonner la cloche qui pend,\nje pourrais rentrer dans sa boutique...\n\n\n\x0E\x01\x09\x04\x10\x1300Mais elle est trop haute, il faudrait un\n<r<projectile >>pour l'atteindre!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf("\x0E\x01\x09\x04\x00\x04Le monsieur, il pense que je vais faire peur\naux gens qui entrent ici parce que je n'ai pas\ntout à fait l'air d'une plante. Kiiiikwiiii.\n\n\x0E\x01\x09\x04\x00\x12Alors, kooookwoooo, il faut que je reste\ntranquille sans remuer une seule feuille\nde la journée.\n\n\x0E\x01\x09\x04\x09\x13Finalement, ça me change pas beaucoup\nde mon ancienne vie... Kwiiii!")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf("\x0E\x01\x09\x04\x00\xD0FDis\x2010moi, Link, tu n'aurais pas\nvu mon mari?\n\n\nParce que c'est devenu plus calme, il se permet\nde sortir en pleine nuit... Il aura l'air fin s'il se\nretrouve nez à nez avec un monstre!")
          			  case 1:
/*<476>*/ 				printf("\x0E\x01\x09\x04\x0C\xE08Ah, Link! Depuis la mésaventure\nde la dernière fois, Picalia ne sort plus de la\nmaison sans nous avertir. Quel soulagement.\n\nPar contre, son père doit encore être en train\nde flâner quelque part comme d'habitude.")
          			}
          		  case 1:
/*< 66>*/ 			printf("\x0E\x01\x09\x04\x0C\xE08\x0E\x03\x01\x00Link, merci infiniment d'avoir\nretrouvé Picalia.\n\n\nUn jour, il faudra aussi que je remercie le\nmonsieur qui s'est occupé d'elle.")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x0C\xE14Tiens, Link!\n\n\n\n\x0E\x01\x09\x04\x00\x800Grâce à toi, j'ai pu retrouver ma petite\nPicalia saine et sauve! Comment\npourrais\x2010je assez te remercier...?\n\n\x0E\x01\x09\x04\x09\x800Tu m'as permis de retrouver le sourire!\nMerci infiniment!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x0C\xE13Comment? Tu as retrouvé Picalia?\n\n\n\n\x0E\x01\x09\x04\x0F\xE00Hm. Au moins elle est chez quelqu'un de bien\nqui va veiller sur elle. Mais je veux quand\nmême vite la revoir!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Ah... L'île de la Déesse est tombée et je n'ai\ntoujours aucune nouvelle de Picalia.\n\n\nMa petite Picalia...\n\n\n\n\x0E\x03\x01\x00Link! Retrouve\x2010la vite,\nje t'en prie!\n\n\n\x0E\x01\x09\x04\x09\xD00Et ne me dis pas que tu n'as pas envie\nde la chercher!")
          				  case 1:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x0B\xD12Ah...<pause0A> Je t'en prie...<pause0A> Retrouve vite ma\npetite Picalia!\n\n\nPourvu qu'il ne lui soit rien arrivé!\nMa pauvre enfant!")
          				}
          			  case 1:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          			}
          		}
          	}
          }

          void entrypoint_118_25() {
/*<343>*/ 	start()
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 276, 'param3': 32}
/*<276>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<277>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00C'est affreux! L'île de la Déesse est tombée!\nJe cherchais Picalia là\x2010bas mais...\n\n\nMais dis\x2010moi! Tu n'aurais pas vu ma\npetite Picalia?\n[1]Non[2]Picalia?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x150D\xD12Ah bon...")
          			flw_21:
/*< 21>*/ 			printf("\x0E\x01\x09\x04\x150F\xD00Elle a disparu! Tu ne voudrais pas m'aider\nà la retrouver, Link? \n\n\n\x0E\x01\x09\x04\x1509\xD00J'ai demandé à plusieurs personnes. Certaines\nm'ont dit qu'elles l'avaient aperçue avec un\nsinistre individu...\n\n\x0E\x01\x09\x04\x150B\xD00D'autres m'ont dit qu'elle avait été attaquée\npar un monstre. Qu'est\x2010ce que je vais faire?\n\n\nUn enlèvement! \x0E\x01\x09\x04\x150E\xD00Elle s'est fait enlever!\nMa petite Picalia est si adorable qu'elle\ns'est fait enlever!")
          			flw_22:
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x1509\xD00Il faut sauver ma petite Picalia!\n\n\n\n\x0E\x01\x09\x04\x150F\xD00Je t'en supplie, Link!\n[1]Je m'en\noccupe[2-]Impossible")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x150C\xE14Merci! Tu es digne d'être un élève de l'école\nde chevalerie.\n\n\n\x0E\x01\x09\x04\x1500\x800Je compte sur toi.")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x1509\xD12Et tu te prétends élève de l'école de chevalerie?\n\n\n\nLa mission des chevaliers n'est\x2010elle pas de\nveiller à la sécurité des habitants du bourg?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x1509\xD12C'est ma fille! Elle n'a que cinq ans!")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x1509\xD00Tu tombes bien! Tu n'aurais pas vu ma\npetite Picalia, par hasard?\n[1]Non[2]Pica-qui?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf("\x0E\x01\x0D\x02\x1900HYAAAAAA!!!")
/*< 94>*/ 	scene_flags[0 'Skyloft'][66 /* 0x9 04 */] = true;
/*<261>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_26() {
/*<348>*/ 	start()
/*<351>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 352, 'param3': 32}
/*<352>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 355, 'param3': 13}
/*<355>*/ 	set_camera(15, 0)
/*<353>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 350, 'param3': 16}
/*<350>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Picalia! Picalia! Mais où est\x2010ce qu'elle\nest passée?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf("... Ah, je me demande vraiment où ma petite\nPicalia a bien pu aller...\n\n\nQu'est\x2010ce que je vais faire si elle a vraiment\nété enlevée?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Ah! \x0E\x03\x01\x00Link!")
/*<362>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 361, 'param3': 47}
/*<361>*/ 	set_camera(16, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 356, 'next': 359, 'param3': 15}
/*<359>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 363, 'param3': 13}
/*<363>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 368, 'param3': 48}
/*<368>*/ 	{'type': 'type3', 'subType': 2, 'param1': 49, 'param2': 100, 'next': 358, 'param3': 14}
/*<358>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_27() {
/*<427>*/ 	start()
/*<439>*/ 	switch (zone_temp_flags[7 /* 0x1 80 */]) {
          	  case 0:
/*<442>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x07\xC08Tu es au courant pour l'île de la Déesse?\nComment est\x2010ce qu'elle a pu disparaître?\n\n\nZelda est introuvable, et Hergo est parti.\nMais qu'est\x2010ce qui se passe, ici?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf("\x0E\x01\x09\x04\x00\x05La nuit, je m'entraîne dur pour devenir\naussi fort que toi!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf("\x0E\x01\x09\x04\x07\xA0BSalut Link! Ça va? La <y<potion\nd'endurance >>que tu m'as apportée fait\ndes miracles!\n\n\x0E\x01\x09\x04ÿ\xFF00Mais je ne pense pas encore être à ton niveau...\nJe commence à me décourager. Je suis si\nmaigrichon!\n\nN'hésite pas à venir me rendre visite un de\nces soirs!")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x01Salut Link! Comment avancent\ntes recherches?\n\n\nMoi, comme je te l'ai déjà dit, j'ai l'impression\nde ne plus progresser dans mon entraînement.\nJe suis toujours aussi maigrichon...\n\n\x0E\x01\x09\x04ÿ\xFF00Viendrais-tu me voir la <r<nuit >>pour me donner\ndes conseils?")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Grâce à la\n<y<potion d'endurance >>que tu m'as donnée,\nje m'entraîne fort toutes les nuits.\n\n\x0E\x01\x09\x04\x10\x1B00Mais j'ai comme l'impression de ne plus\nprogresser. C'est bizarre...\n\n\nJe me demande si je pourrai devenir aussi\nfort que toi...\n\n\n\x0E\x01\x09\x04ÿ\xFF00En tous cas, je ne baisserai pas les bras!\nViendrais-tu me voir la <r<nuit >>quand je\nm'entraîne, pour me donner des conseils?")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BBonjour, Link! Merci pour\nla <y<potion d'endurance>>!\n\n\nGrâce à ça, j'ai pu faire des centaines\nde pompes!\n\n\n\x0E\x01\x09\x04ÿ\xFF00Un jour, je deviendrai aussi fort que toi,\nLink!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf("\x0E\x01\x09\x04\x00\x01Oh... Salut. Tu m'as vu sous un jour pas très\nflatteur, l'autre nuit...\n\n\nJe fais tout mon possible pour devenir aussi\nfort que toi, mais ça ne marche pas... Je vais\npersévérer, quand même!")
          						goto flw_440
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_10() {
/*< 25>*/ 	start()
/*<428>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<445>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 429, 'param3': 31}
/*<429>*/ 		entrypoint_118_27();
          	  case 1:
/*< 40>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*< 69>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 70>*/ 				switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          				  case 0:
/*<306>*/ 					switch (zone_temp_flags[7 /* 0x1 80 */]) {
          					  case 0:
/*<418>*/ 						switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          						  case 0:
/*<419>*/ 							printf("\x0E\x01\x09\x04\x00\x05La nuit, je m'entraîne dur pour devenir\naussi fort que toi!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf("\x0E\x01\x09\x04\x07\xC08Tu es au courant pour l'île de la Déesse?\nComment est\x2010ce qu'elle a pu disparaître?\n\n\nZelda est introuvable, et Hergo est parti.\nMais qu'est\x2010ce qui se passe, ici?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf("\x0E\x01\x09\x04\x00\x01Je suis convaincu que toi, tu peux\nretrouver Zelda!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf("\x0E\x01\x09\x04\x00\x12\x0E\x03\x01\x00Link! Je n'ai encore trouvé\naucune trace de Picalia.\n\n\n\x0E\x01\x09\x04\x00\xE10Est-ce que tu fais des efforts pour la trouver?\n\n\n\n\x0E\x01\x09\x04\x00\xC00Quoi? Tu l'as retrouvée?\n\n\n\n\x0E\x01\x09\x04\x07\xA0BAh, quel soulagement! Et c'est grâce à toi,\nLink! Je savais qu'on pouvait\ncompter sur toi!")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf("\x0E\x01\x09\x04\x00\nVa vite voir sa mère! Elle habite dans une\nmaison au bord de la rivière. Elle doit\nt'attendre!")
          					  case 1:
/*<309>*/ 						printf("\x0E\x01\x09\x04\x00\x12\x0E\x03\x01\x00Link! Je n'ai encore trouvé\naucune trace de Picalia.\n\n\n\x0E\x01\x09\x04\x00\xE10Est-ce que tu fais des efforts pour la trouver?\n\n\n\n\x0E\x01\x09\x04\x00\xC00Quoi? Tu l'as retrouvée?\n\n\n\n\x0E\x01\x09\x04\x07\xA0BAh, quel soulagement! Et c'est grâce à toi,\nLink! Je savais qu'on pouvait\ncompter sur toi!")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf("\x0E\x01\x09\x04\x07\x801Ah, Link! C'est affreux, l'île\nde la Déesse a disparu.\n\n\n\x0E\x01\x09\x04\x00\x800Et la petite Picalia aussi.\n\n\n\n\x0E\x01\x09\x04\x00\xE00Zelda est introuvable et Hergo a disparu.\nMais qu'est\x2010ce qui se passe?\n\n\n\x0E\x01\x09\x04\x07\x800Je vais les chercher de mon côté. Mais on va\navoir besoin de toi, Link.")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf("\x0E\x01\x09\x04\x00\x12\x0E\x03\x01\x00Link! Je n'ai encore trouvé\naucune trace de Picalia.\n\n\n\x0E\x01\x09\x04\x00\xE10Est-ce que tu fais des efforts pour la trouver?\nJ'espère que tu ne remets pas ça à plus tard,\nquand même?\n\n\x0E\x01\x09\x04\x07\x200Je fais tout ce que je peux pour la retrouver,\nalors toi aussi, tu dois faire ta part!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf("\x0E\x01\x09\x04\x00\x1701Je vais chercher de mon côté! Va voir sur\nla grand\x2010place, Link!\n\n\n\x0E\x01\x09\x04\x08\x1700Le garçon qui jouait avec elle hier doit\nêtre là\x2010bas.")
          						  case 1:
/*< 26>*/ 							printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! Tu penses que\ntu pourras bientôt retrouver Zelda?\n\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A> Je vois. Courage! Nous sommes tous\nderrière toi.\n\n\n\x0E\x01\x09\x04\x07\x200Au fait, tout à l'heure, j'ai vu la mère\nde Picalia se diriger vers le temple.\n\n\n\x0E\x01\x09\x04\x08\x1700Je me demande ce qu'elle avait...")
/*< 30>*/ 							printf("\x0E\x01\x09\x04 \x508Quoi? Picalia a disparu?!\n\n\n\n\x0E\x01\x09\x04\x07\x800Il faut faire quelque chose! Moi aussi je vais\nla chercher! \x0E\x03\x01\x00Link, interroge tous\nles gens que tu peux pour retrouver sa trace!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf("\x0E\x01\x09\x04\x07\x801Ah, Link! C'est affreux, l'île\nde la Déesse a disparu.\n\n\n\x0E\x01\x09\x04\x00\x800Et la petite Picalia aussi.\n\n\n\n\x0E\x01\x09\x04\x00\xE00Zelda est introuvable et Hergo a disparu.\nMais qu'est\x2010ce qui se passe?\n\n\n\x0E\x01\x09\x04\x07\x800Je vais les chercher de mon côté. Mais on va\navoir besoin de toi, Link.")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! Penses-tu pouvoir\nretrouver Zelda bientôt?\n\n\n<pause0A>.<pause0A>.<pause0A>.<pause0A> Je vois... Courage! Nous sommes tous\nderrière toi!\n\n\nAu fait, j'ai vu la mère de Picalia se diriger\nvers l'entrée du temple. Je me demande\nce qu'elle a.\n\n[1]Qui ça?[2]Je sais!")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf("\x0E\x01\x09\x04\x00\x05Tu sais bien, c'est cette femme qui vit dans\nune maison au bord de la rivière avec sa\nfille et son mari.\n\n\x0E\x01\x09\x04\x07\x800Elle avait l'air très préoccupée.")
          				  case 1:
/*< 44>*/ 					printf("\x0E\x01\x09\x04\x07\x806Vraiment? Tu aurais pu me le dire plus tôt!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_28() {
/*<450>*/ 	start()
/*<464>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
          		flw_460:
/*<460>*/ 		switch (random(2)) {
          		  case 0:
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Ça fait longtemps\nque j'ai pas vu Hergo...\n\n\nJe me demande s'il est puni... Il a peut\x2010être fait\nune grosse gaffe, et il a plus le droit de sortir\nde l'école de chevalerie... On ne sait jamais.")
          		  case 1:
/*<461>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Latruche m'a\nmontré une <r<technique secrète avec le filet>>!\n\n\nLe truc, c'est d'agiter le filet à l'horizontale\nplutôt qu'à la verticale!\n\n\nEt puis il a dit aussi qu'il fallait s'approcher\ndes insectes touuuuut doucement et l'agiter\nau dernier moment.")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\nQuoi? La<b< truie forte>>\x0E\x01\x06\x02\xFBCD...?\x0E\x01\x06\x02Í <pause14>De quoi tu parles,\nau juste? Je te trouve bizarre par bouts!")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf("\x0E\x01\x09\x04\x00\x01Hé, Link! Regarde la tour de\nlumière!\n\n\nY a un rayon laser qui en sort! C'est trop cool!")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf("\x0E\x01\x09\x04\x00\x01Salut, Link! C'est vrai qu'on\npeut attraper autre chose que des insectes\navec un <r<filet>>?\n\nC'est le monsieur de l'atelier de rénovation\nqui a dit qu'on pouvait attraper toutes sortes\nde choses surprenantes.")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\nQuoi? Les <r<paroles>> de la chanson que\nchantait Zelda?\n\n\nÇa devait être de belles <r<paroles>>...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf("\x0E\x01\x09\x04\x00\x01Moi aussi j'irai à la boutique de Beedle acheter\nle filet!\n\n\nEt je le ferai agrandir à l'atelier de rénovation,\nouais!")
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_11() {
/*< 53>*/ 	start()
/*<162>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*< 54>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ce monsieur, il est pas méchant! Quand ze suis\npresque tombée de la falaise, il m'a rattrapée!\n\n\nIl m'a appris que c'était danzereux de sortir\ndehors la nuit. Dis à ma maman que ze\nrentrerai quand il fera zour!")
          	  case 1:
/*<163>*/ 		printf("\x0E\x01\x09\x04\x00\x06Qu'est\x2010ce que tu as, Monsieur? Pourquoi tu as\nzet air\x2010là? Il s'est passé quelque choze?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf("\x0E\x01\x09\x04\x00\x01La nuit, je m'entraîne pour devenir aussi\nfort que toi! C'est vraiment dur... Tu es\ntellement formidable, Link...")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link! As-tu des pistes\npour retrouver Zelda?\n\n\nEn passant... j'aimerais tellement devenir\nfort comme toi que je me suis mis à\nm'entraîner <r<la nuit>>...\n\n<pause05>.<pause05>.<pause05>.<pause0A> Oh! \x0E\x01\x09\x04\x00\xA06Surtout, ne viens pas me voir <r<dans\nma chambre>> la nuit, j'aurais trop honte!")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut Link! As\x2010tu des nouvelles\nde Zelda? J'espère qu'elle reviendra bientôt!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf("\x0E\x01\x09\x04\x00\x811Ah, Link! La tour de lumière\német un rayon lumineux! C'est la première\nfois que je vois ça!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf("\x0E\x01\x09\x04\x07\xA0BSalut Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF05<r<Deux grandes ailes>>...? Le vent souffle toujours\ntrès fort à Célesbourg alors il y a beaucoup de\nchoses qui ressemblent à des ailes.")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf("\x0E\x01\x09\x04\x07\xA0BSalut Link!\n\n\n\n\x0E\x01\x09\x04\x00\xFF08Quoi? Le <r<Chant de la Déesse>>...?<pause1E> C'est la\nchanson que Zelda chantait souvent, c'est ça?\n\n\nJe ne connais pas les paroles mais je suis sûr\nque monsieur le directeur devrait\npouvoir t'aider.")
          						  case 1:
/*<314>*/ 							printf("\x0E\x01\x09\x04\x00\x0B\x0E\x03\x01\x00Link! Tu as vu comme la mère\nde Picalia était contente? Tout est bien qui\nfinit bien!")
/*<499>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_12() {
/*< 67>*/ 	start()
/*<473>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<474>*/ 		printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link! <pause1E>Quoi?! Le monsieur,\nil est devenu humain?\n\n\n\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í\nMoi, ze l'aimais mieux quand il avait des ailes...")
          	  case 1:
/*< 68>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ah, c'est toi, Link!\n\n\n\nLe monsieur de l'autre zour, il m'a dit qu'il\ncherchait plein de gratitude. Z'espère que\nze pourrai bientôt zouer avec lui!")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf("")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf("")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'ai annulé l'ajout de cet objet à\nla liste des cibles à <pling>détecter.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf("\x0E\x01\x09\x04\x00\x13Ouaaaah! Mais c'est le vieux robot de Gondo!")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf("Wow...\n\n\n\n<pause14>J'en crois pas mes yeux!<pause28> C'est l'<r<hélice du\nmoulin >>qui était tombée sous les nuages?!\n\n\n\x0E\x01\x09\x04\x0C\xC00Alors c'était pas des menteries ce qu'il\nracontait, le grand\x2010père de Gondo?\n\n\nC'est pas possible, il doit y avoir erreur quelque\npart. Bon. De toute façon, je vais réparer ça...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf("Bon, ça, je le mets là. Et je fais tourner ça,\ncomme ça...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 190, 'param3': 6}
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 89, 'param3': 6}
/*< 89>*/ 		printf("\x0E\x01\x09\x04\n\x10EFiou!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf("\x0E\x01\x09\x04\x0C\xC00Et voilà, c'est réparé!\nSi tu as de quoi faire tourner l'hélice,\ntu pourras faire pivoter le moulin!")
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x100\x0E\x01\x08\x02\xFFCDCHÉRI! CHÉRI?")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x05\x714Ah, j'avais oublié! Ma femme m'a demandé\nde réparer les étagères à la maison!\n\n\nElle est toujours en train de chercher\nquelqu'un...")
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Eh bien, Link, à plus!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf("\x0E\x01\x09\x04\x05\x714Ah, non! Je devrais être en train de\nchercher Picalia!")
/*<296>*/ 			printf("\x0E\x01\x09\x04\x0C\xC00Eh bien, Link, à plus! Toi aussi\naide\x2010nous à chercher Picalia! Et si tu la\ntrouves, fais\x2010nous signe!")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x05Tout le monde sait qu'il y a rien sous les\nnuages! Alors comment on pourrait en\nramener des trucs?\n\nPourtant, <b<Gondo>> y croit dur comme fer et il\ngarde précieusement la carcasse de ce robot.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Merci d'avoir\nretrouvé Picalia!\n\n\nIl fait tellement beau aujourd'hui,\ntu trouves pas?\n\n\nPar une si belle journée, j'irais bien prendre\nun bon bol de soupe à la Citrouille perchée.\n\n\nMais ma femme veut que je répare les\nétagères... Et ce que femme veut...\n\n\nAaah... J'ai donc pas le goût...")
          			  case 1:
/*<292>*/ 				printf("\x0E\x01\x09\x04\x00\x0ESalut, Link! Picalia n'est\ntoujours pas rentrée! Même moi,\nje commence à m'inquiéter!\n\nAide\x2010nous à la chercher, tu veux?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf("Dzzat! Elle est si belle! Je ferais n'importe\nquoi pour mam'selle Fay... bzzrt.")
          	  case 1:
/*< 81>*/ 		printf(".<pause05>.<pause05>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf("Une présence inquiétante se fait sentir\nderrière la porte.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf("\x0E\x01\x09\x04\x01\x701Reviens me voir au bazar si tu en as l'occasion!\n\n\n\nJe te prédirai ton avenir à prix d'ami!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x10\x70DOoh...! Mais qu'est\x2010ce que j'aperçois?\n\n\n\nÇa y est! C'est merveilleux! Elle est absolument\nidentique à mon ancienne boule de cristal!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x700Woooooh! Je sens une grande vitalité envahir\ntout mon corps! Je vois... un beau destin qui\nse dessine...\n\nJe me vois scruter l'avenir et enfin reprendre\nmes prédictions!\n\n\nReviens me voir au bazar si tu en as envie!\nJe te prédirai ton avenir à prix d'ami!")
/*<106>*/ 			story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */] = true;
/*<298>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<376>*/ 			scene_flags[0 'Skyloft'][26 /* 0x2 04 */] = true;
/*<377>*/ 			scene_flags[0 'Skyloft'][86 /* 0xB 40 */] = true;
/*<141>*/ 			give_gratitude_crystals();
          		  case 1:
/*< 99>*/ 			switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          			  case 0:
/*<425>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 212, 'param3': 31}
/*<212>*/ 				switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          				  case 0:
/*<161>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 103, 'param3': 13}
/*<103>*/ 					printf("Mais qu'est\x2010ce que tu fais? Pars vite à la\nrecherche de ma nouvelle boule de cristal!")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf("Mais qu'est\x2010ce que tu fais? Pars vite à la\nrecherche de ma nouvelle boule de cristal!")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf("La <r<boule de cristal >>que recherche cette personne\nne figure pas parmi les cibles à <pling><r<détecter>>.\n\n\nVoulez\x2010vous rajouter la <r<boule de cristal >>à la liste\ndes cibles à <pling><r<détecter>>?\n[1]S'il te plaît[2-]Pas maintenant")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nJ'ai réglé la <r<<pling>détection>> pour réagir à la <r<boule de\ncristal >>que recherche cette personne.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'ai annulé l'ajout de cet objet à\nla liste des cibles à <pling>détecter.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf("\x0E\x01\x09\x04\x0C\x100FNe t'en fais pas pour moi... Va! Va!\nLaisse\x2010moi à mon triste sort...\n\n\nMaintenant que ma boule de cristal est brisée,\nje ne peux plus prédire ton avenir...\nJe ne vois plus...\n\nJ'ai l'impression qu'à l'image de ma boule de\ncristal brisée, mes \x0E\x01\x06\x02\xFCCDgrands yeux ronds \x0E\x01\x06\x02Ísont\ntroublés. Une profonde tristesse m'envahit...\n\n<pause1E>Aah... Si... Si seulement j'avais une nouvelle\nboule de cristal...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("Mais dis\x2010moi. J'ai entendu dire que tu avais\nretrouvé une partie du moulin qui était\ntombée dans le monde d'en bas.\n\nCette boule maintenant brisée vient aussi\nd'en bas. C'est le grand\x2010père du gérant de\nl'atelier de rénovation qui l'avait trouvée\navant de me la donner.\nIl y en a peut\x2010être d'autres sous les nuages.\nPourrais\x2010tu essayer de m'en trouver\nune nouvelle?\n[1]D'accord[2-]Non")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf("Oh! Oui! Ça me fait plaisir d'entendre ça!\nMes yeux sont remplis de gratitude.\n\n\nLe robot de l'atelier de rénovation aurait\ntrouvé la boule de cristal sur un <r<bâtiment\nau sommet d'une montagne>>.")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf("Je peux ajouter la <r<boule de cristal >>que recherche\ncette personne à la liste des cibles que vous\npouvez <r<<pling>détecter>>.\n\nToutefois, si vous êtes à la recherche d'un autre\nobjet pour quelqu'un d'autre, cet objet sera retiré\nde la liste des cibles à détecter.\n\nDois\x2010je régler la <r<détection>> pour réagir à la\n<r<boule de cristal>>?\n[1]S'il te plaît[2-]Pas encore")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'ai enregistré la boule de cristal.")
/*<381>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<388>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<387>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<385>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<386>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<389>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<394>*/ 						open_dowsing_wheel(14)
          						flw_391:
/*<391>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 390, 'param3': 36}
/*<390>*/ 						story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */] = true;
/*<393>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 392, 'param3': 16}
/*<392>*/ 						printf("\x0E\x01\x09\x04\x01\x70BJeune homme, je compte sur toi! Sans boule de\ncristal, je ne vois plus l'avenir. Mes yeux sont\ntristes et je ne peux plus faire de prédictions.\n\nRamène\x2010moi vite une nouvelle boule de cristal!\nMes yeux t'en supplient!")
          					  case 1:
/*<467>*/ 						printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez régler la\ndétection, parlez à nouveau à cette personne.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf("\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0C\x1009 Que ce monde est cruel\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í")
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_17() {
/*<109>*/ 	start()
/*<114>*/ 	switch (story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */]) {
          	  case 0:
/*<478>*/ 		switch (zone_temp_flags[14 /* 0x0 40 */]) {
          		  case 0:
/*<479>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<481>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 480, 'param3': 13}
/*<480>*/ 				printf("La statue de la Déesse qui disparaît...\nC'est vraiment impensable...\n\n\nJamais je n'aurais cru voir ça un jour!\n\n\n\nMais le directeur m'a expliqué que c'était\nun mal nécessaire pour que tu puisses\nsauver Zelda.\n\nSon sort repose entre tes mains!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf("Tiens, Link! Le monde regorge\nencore de plantes inconnues. Je ne cesse\nd'être surpris.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x0E\x50APlus j'observe cette plante, plus je la\ntrouve fascinante!\n\n\n\x0E\x01\x09\x04\x00\x500Où donc se trouve la frontière entre le\nvégétal et l'animal? C'est tout à fait captivant.")
/*<477>*/ 				zone_temp_flags[14 /* 0x0 40 */] = true;
          			}
          		  case 1:
          			goto flw_173
          		}
          	  case 1:
/*<113>*/ 		switch (story_flags[480 /* us: 805A9B11 0x10, jp: 805ACD91 0x10 */]) {
          		  case 0:
/*<158>*/ 			entrypoint_118_21();
          		  case 1:
/*<112>*/ 			switch (story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */]) {
          			  case 0:
/*<426>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 274, 'param3': 31}
/*<274>*/ 				switch (zone_temp_flags[14 /* 0x0 40 */]) {
          				  case 0:
/*<275>*/ 					printf("\x0E\x01\x09\x04\x00\x09Hahaha! Je savais que tu pourrais m'aider,\nLink, le pouce vert!\n\n\nJ'ai bien hâte de voir ce que tu vas\nme rapporter!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 230, 'param3': 6}
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf("La <r<plante>> que recherche cette personne ne figure\npas parmi les cibles à <pling><r<détecter>>.\n\n\nVoulez\x2010vous la rajouter à la liste des cibles à <pling><r<détecter>>?\n[1]S'il te plaît[2-]Pas\nmaintenant")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nJ'ai réglé la <r<<pling>détection>> pour réagir à la <r<plante>> que\nrecherche cette personne.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'ai annulé l'ajout de cet objet à\nla liste des cibles à <pling>détecter.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, est\x2010ce que tes recherches d'une\nnouvelle espèce de plante avancent?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x01Ah, Link! Est-ce que tu veux\nfinalement écouter ma requête?\n\n\nJe suis un fervent collectionneur de\nplantes rares.")
          						flw_118:
/*<118>*/ 						printf("\x0E\x01\x09\x04\x00\x00Mais il semble que ma collection contienne\nmaintenant tous les types de plantes qui se\ntrouvent dans ce village...\n\nEt je me demandais donc s'il ne serait pas\npossible de découvrir de nouvelles plantes\nquelque part.\n\n\x0E\x01\x09\x04\x09\xA0FDis-moi. Tu ne voudrais pas trouver une plante\nqui captiverait l'attention de tout le monde?\nQuelque chose d'exotique, peut-être?\n\n[1]Je vais\nessayer[2-]Je n'ai pas\nle temps")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf("\x0E\x01\x09\x04\n\xA03Oho! Je savais que toi, tu écouterais ma\nrequête, Link!\n\n\nApporte\x2010moi une plante rare que personne\nn'a jamais vue auparavant!")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 134, 'param3': 6}
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf("Je peux ajouter la <r<plante>> que recherche cette\npersonne à la liste des cibles que vous pouvez <pling><r<détecter>>.\n\n\nToutefois, si vous êtes à la recherche d'un autre objet\npour quelqu'un d'autre, cet objet sera retiré de la\nliste des cibles à détecter.\n\nDois\x2010je régler la <r<détection>> pour réagir à la <r<plante>>?\n[1]S'il te plaît[2-]Pas encore")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. J'ai enregistré la plante.")
/*<223>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<224>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<225>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<226>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<227>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<228>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<397>*/ 								open_dowsing_wheel(16)
          								flw_136:
/*<136>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 119, 'param3': 36}
/*<119>*/ 								story_flags[479 /* us: 805A9B11 0x08, jp: 805ACD91 0x08 */] = true;
/*<273>*/ 								zone_temp_flags[14 /* 0x0 40 */] = true;
          							  case 1:
/*<470>*/ 								printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître. Si vous souhaitez régler la\ndétection, parlez à nouveau à cette personne.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf("\x0E\x01\x09\x04\n\xA09Hahaha! Oui, tu as autre chose à faire.\nJe comprends.\n\n\nMais si tu cours toujours après la même chose,\nça va te fatiguer.\n\n\nIl faut savoir souffler de temps en temps.\nNe l'oublie pas!")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf("La statue de la Déesse qui disparaît...\nC'est vraiment impensable...\n\n\nJamais je n'aurais cru voir ça un jour!\n\n\n\nMais le directeur m'a expliqué que c'était\nun mal nécessaire pour que tu puisses\nsauver Zelda.\n\nSon sort repose entre tes mains!")
          							flw_116:
/*<116>*/ 							printf("\x0E\x01\x09\x04\x00\x13Ehem... Mais dis\x2010moi plutôt... Voudrais\x2010tu\nécouter ma requête?\n\n\nComme tu le sais, je suis le plus grand\ncollectionneur de plantes de Célesbourg.\n\n\nEn tous les cas, je me suis moi\x2010même décerné\nce titre...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! Comment ça s'est\npassé? As\x2010tu pu parler avec le grand Narisha?\n\n\nJe vois... J'avais raison. Tu as vraiment\nquelque chose de différent des autres.\n\n\nToi et ton célestrier vermeil, vous allez\nsûrement vous en sortir.\n\n\nLe chemin sera encore long et semé d'embûches,\nmais tu ne dois pas baisser les bras!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x01\x0E\x03\x01\x00Link! Aurais\x2010tu un peu de temps\npour écouter mes tourments?\n[1]Qu'est\x2010ce\nqu'il y a?[2-]Non,\ndésolé")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf("Non, je t'en parlerai une autre fois! La mère\nde Picalia m'a demandé de chercher sa\nfille disparue.\n\nSi tu as un peu de temps, toi aussi, cherche\x2010la.")
          						  case 1:
/*<130>*/ 							printf("\x0E\x01\x09\x04\x00\x09Hahaha! Non mais, tu pourrais quand même\nécouter ce que j'ai à te dire, pour une fois!")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf("La statue de la Déesse qui disparaît...\nC'est vraiment impensable...\n\n\nJamais je n'aurais cru voir ça un jour!\n\n\n\nMais le directeur m'a expliqué que c'était\nun mal nécessaire pour que tu puisses\nsauver Zelda.\n\nSon sort repose entre tes mains!")
          						  case 1:
/*<316>*/ 							printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! Comment ça s'est\npassé? As\x2010tu pu parler avec le grand Narisha?\n\n\nJe vois... J'avais raison. Tu as vraiment\nquelque chose de différent des autres.\n\n\nToi et ton célestrier vermeil, vous allez\nsûrement vous en sortir.\n\n\nLe chemin sera encore long et semé d'embûches,\nmais tu ne dois pas baisser les bras!")
/*<317>*/ 							story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_18() {
/*<137>*/ 	start()
/*<164>*/ 	printf("Et voilà! Livraison de l'<r<hélice du moulin\n>>effectuée! Zzzat!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf("Si tu as encore besoin de moi...\nzzrboosh-CLANG, n'hésite pas à\nm'appeler! ZzBZZT!\n\nPour mam'selle Fay, j'irais jusqu'au bout\ndu monde! Ker-dizzzt!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf("\x0E\x01\x09\x04\x09\x11Ruuuutabaga! Quand on me regarde fixement\ncomme ça, je rougis comme une tomate!")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf("Et voilà! Une belle boule de cristal toute\nscintillante, BZAAT!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf("Si tu as encore besoin de moi...\nzzrboosh-CLANG, n'hésite pas à\nm'appeler! ZzBZZT!\n\nPour mam'selle Fay, j'irais jusqu'au bout\ndu monde! Ker-dizzzt!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x1509\xD11Picalia! Picalia! Mais où est\x2010ce qu'elle\nest passée?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf("... Ah, je me demande vraiment où ma petite\nPicalia a bien pu aller...\n\n\nQu'est\x2010ce que je vais faire si elle a vraiment\nété enlevée?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x150E\xD11Ah! \x0E\x03\x01\x00Link!")
/*<345>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 344, 'param3': 47}
/*<344>*/ 	set_camera(14, 0)
/*<342>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 356, 'next': 341, 'param3': 15}
/*<341>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 365, 'param3': 17}
/*<365>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5390, 'param2': 3840, 'next': 346, 'param3': 13}
/*<346>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 370, 'param3': 48}
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 48, 'param2': 100, 'next': 340, 'param3': 14}
/*<340>*/ 	entrypoint_118_25();
          }

          void entrypoint_118_21() {
/*<151>*/ 	start()
/*<166>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*<150>*/ 		printf("Zzzz-TING! Si t'as encore besoin de\nmoi, n'hésite pas à m'appeler! Dzzzrp!")
          	  case 1:
/*<149>*/ 		printf("Et voilà! Le drôle de Kikwi est arrivé à\ndestination! Fzzzrt!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

