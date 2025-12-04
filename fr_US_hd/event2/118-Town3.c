          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x000a0a12>C'est bizarre, on ne voit plus la Déesse, d'ici.\nJe me demande bien pourquoi...\n\n\nAh, puis... Tant pis.")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000009>Alors, tu as retrouvé la petite Picalia?\n\n\n\n<0x10009:0x00000e00>T'as fait ça tout seul? Tu es bien digne d'être\nun apprenti chevalier!\n\n\n<0x10009:0x00000400>Va le dire à sa mère pour la rassurer! Elle\nhabite une maison au bord de la rivière!")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000001>Mais, qu'est‐ce qui t'arrive, <heroname>?\nT'es tout pâle.\n[1-]C'est Picalia![2]Ah bon?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000506>Quoi? Picalia a disparu?\n\n\n\n<0x10009:0x00000500>Elle a été enlevée par un monstre?\n\n\n\n<0x10009:0x000b0400>Penses-tu qu'il y a un rapport avec les\nhistoires qu'on raconte au sujet d'une\ncréature démoniaque qui vivrait quelque\npart à Célesbourg.\n<0x10009:0x000a0500>La nuit tombée, elle sortirait dans le bourg\npour terroriser les gens et enlever les enfants!\n\n\n<0x10009:0x00000400>Ce n'est sûrement qu'une légende, mais ça\nm'intrigue quand même...")
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00000004>S'il n'y a rien de grave, eh bien, on va\narrêter de s'en faire!")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000006>J'ai croisé la mère de Picalia qui arpentait\nle village en appelant sa fille. Qu'est‐ce\nqui a bien pu se passer?")
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000b0e01>Il paraît que c'est toi qui as remporté la\nchevauchée céleste! Félicitations!\n\n\n<0x10009:0x00000a00>Mais dis‐moi, tu n'as pas l'air content.\nQu'est‐ce qui ne va pas?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x000a0c12>Qu'est‐ce que c'était que ce grondement,\ntout à l'heure?")
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
/*<156>*/ 		printf(/* textboxtype: 2, unk: 31, line: 146 */ "<0x10009:0x0000000a>Ooooh! C'est fascinant!\n\n\n\nIl existe encore dans ce monde d'innombrables\nplantes inconnues! Cap-ti-vant!\n\n\nJ'ai retrouvé la motivation de poursuivre\nma collection!")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 147 */ "<0x30001:0x><heroname>! Merci mille fois!\nNe t'en fais pas, je prendrai grand soin\nde ma nouvelle plante.\n\nSi tu trouves d'autres plantes rares,\npréviens‐moi!")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000053>Oh! Mais... Mais c'est... Oui! C'est exactement\nce que je recherchais! Une nouvelle espèce\nde plante!")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf(/* textboxtype: 0, unk: 1, line: 145 */ "Hm. Voyons voir... Flore ou faune?\nC'est‐à‐dire, végétal ou animal?\n\n\nHmm... C'est peut‐être la plus grande\ndécouverte de ce siècle!")
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
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00090257>C'est vrai.<pause 10>.<pause 10>.? Tu as retrouvé la fillette qui \navait disparu?\n\n\nAlors, en fin de compte, elle n'avait pas été\nenlevée? Tant mieux!\n\n\n<0x10009:0x00000609>Quoi qu'il en soit, c'est une affaire de réglée!\nBeau travail, chevalier!")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00001557>Il t'a raconté que si l'on <color green<frappe>coloroff> la <color red<tombe la\nplus proche de l'arbre >coloroff>puis qu'on la <color green<déplace>coloroff>,\nle démon apparaîtrait?\n\n<0x10009:0x00001513>En tous cas, si j'étais toi, je n'irais pas me\npromener dans le cimetière en pleine nuit,\nça c'est sûr!")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000001>Alors tu es allé parler au vieux monsieur\nà la Citrouille perchée?\n\n\nSi on <color green<percute>coloroff> la <color red<tombe la plus proche de\nl'arbre >coloroff>puis qu'on la <color green<déplace>coloroff>, le démon\napparaît...?\n\n<0x10009:0x00001513>Je me demande si c'est vrai<0x10006:0xfbcd>...<0x10006:0x00cd> Enfin, je te\ndéconseille de te promener dehors la nuit.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00110200>Tu veux savoir où trouver ce vieux monsieur?\n\n\n\n<0x10009:0x00000200>Il doit être <color red<à la Citrouille perchée>coloroff>, à l'est\nd'ici. C'est un habitué.\n\n\n<0x10009:0x00120200>Évidemment, il faut s'y rendre en oiseau.")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00001513>Tu as entendu la rumeur? On raconte qu'une\nfillette aurait disparu alors qu'elle jouait dans\nle cimetière...\n\n<0x10009:0x00121500>Même dans un petit bourg comme le nôtre,\non n'est plus en sécurité...\n[1-]Tout à fait![2]Ah bon?")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00010c06>Pardon? Elle pourrait avoir été enlevée par\nun monstre?\n\n\n<0x10009:0x00000c00>Il ne faut pas exagérer quand même... <pause 30>Ah<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\n\n<0x10009:0x00090200>Maintenant que tu en parles, il y a un <color red<<sound 4>vieux\nmonsieur>coloroff> qui habite près d'ici qui raconte\nque des monstres vivraient ici, à Célesbourg.\n\n<0x10009:0x00120200>Mais il est un peu zouinzouin alors personne\nne le prend au sérieux...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00121557>Tu es inconscient, ma parole... Quelqu'un a\ndisparu dans notre bourg! C'est très grave!")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00001504>On raconte qu'une fillette aurait disparu!")
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00000501>Oh! Comme ça, tu as remporté la chevauchée\ncéleste et tu es passé à la classe élite!\n\n\n<0x10009:0x000c0200>Je vois ça à ton élégant uniforme de chevalier!\nIl te va très bien, tu sais!\n\n\nTe voilà encore plus près de devenir un\nvrai chevalier!")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00091501>J'ai eu peur... La terre s'est mise à gronder\ntout à coup et après ça, l'île de la Déesse\navait disparu!\n\n<0x10009:0x00120200>Mais... Au fait...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00000013>Tu as ressenti cette grosse secousse? Je me\ndemande bien ce que c'était...\n\n\n<0x10009:0x00120200>Ah, au fait...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Oh, <heroname>! Qu'est‐ce que tu fais?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf(/* textboxtype: 0, unk: 1, line: 85 */ "... Il t'intéresse, ce moulin, on dirait?\n\n\n\nIl a été construit de manière à pouvoir\npivoter pour capter le vent le plus\nefficacement possible. Génial, non?")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf(/* textboxtype: 0, unk: 0, line: 86 */ "Mais, il y a très très longtemps...\n\n\n\nLa petite <color red<hélice>coloroff> qui permettait au moulin\nde pivoter s'est détachée.\n\n\nEt elle serait tombée sous les nuages.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Et depuis, comme il sert plus à rien, on a\nlaissé ce moulin à l'abandon.")
/*<179>*/ 	wait_frames(15)
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	wait_frames(15)
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 0, line: 104 */ "Afin de pouvoir faire bouger ce moulin, je vous\nsuggère d'aller récupérer son <color red<hélice >coloroff>tombée sur terre.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	wait_frames(15)
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x000c0800>Pardon? Si tu me ramènes l'hélice, est‐ce que\nje pourrais réparer le moulin?\n\n\nBien, je devrais pouvoir remettre l'hélice\nen place, mais...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "Mais comment tu comptes t'y prendre pour\nretrouver cette hélice?\n\n\nSi elle est tombée sous les nuages, elle est\nperdue pour de bon...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x000c0c13> Attends un peu. Tu connais <color blue<Gondo>coloroff> qui tient\nl'atelier de rénovation au bazar?\n\n\nJ'ai entendu dire que son grand‐père utilisait\nun <color red<robot volant >coloroff>pour aller récupérer de la\nferraille sous les nuages...\n\nMais bon, connaissant la famille de Gondo,\nà mon avis, c'est de la frime.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000001>La statue de la Déesse est plus là!\nQu'est‐ce qu'on va faire?\n\n\nC'était l'endroit idéal pour attraper\ndes insectes!")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000001>Moi aussi j'irai à la boutique de Beedle acheter\nle filet!\n\n\nEt je le ferai agrandir à l'atelier de rénovation,\nouais!")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\nQuoi? T'es allé à la boutique de Beedle?\nPff! C'est pas juste! Moi aussi je veux\ny aller!")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000001>Mais, euh! Je veux mon filet! Je dois\ntrouver un moyen d'aller à la boutique\nde Beedle...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000001>Tu as retrouvé Picalia?\n\n\n\n<0x10009:0x000f1300>Tout le monde s'inquiétait pour elle!")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\nQuoi? T'es allé à la boutique de Beedle?\nPff! C'est pas juste! Moi aussi je veux\ny aller!")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000006>Picalia?\n\n\n\n<0x10009:0x00120900>Bien, hier, je l'ai vue jouer dans le <color red<cimetière>coloroff>...\n\n\n\n<0x10009:0x000a0900>Mais ma mère est venue me chercher alors\nje suis parti avant elle.\n\n\n<0x10009:0x00010900>Il lui est arrivé quelque chose?")
          					  case 1:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00101301>Je me demande comment je pourrais faire\npour acheter un filet de la boutique de Beedle...\n\n\n[1-]Où est\nPicalia?[2-]La boutique\nde Beedle?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000004>Je réfléchis à un moyen d'arrêter la boutique\nde Beedle.\n\n\n<0x10009:0x00120900>Il paraît que quand on fait sonner <sound 4>la cloche\nqui pend, il s'arrête.\n\n\n<0x10009:0x00101300>Si seulement je pouvais <color red<lancer quelque chose\n>coloroff>jusque là‐haut!\n\n\nSi jamais tu trouves pas la boutique de Beedle\navec la vue subjective, regarde donc sur\nta <color green<carte>coloroff>!")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\nQuoi? T'es allé à la boutique de Beedle?\nPff! C'est pas juste! Moi aussi je veux\ny aller!")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000001>Hé, regarde là‐haut! La <color blue<boutique de Beedle\n>coloroff>est enfin arrivée!\n\n\n<0x10009:0x000a1300>Il vend des <color red<filets>coloroff>! Il m'en faut un!\n\n\n\n<0x10009:0x00120900>Si je pouvais faire sonner la cloche qui pend,\nje pourrais rentrer dans sa boutique...\n\n\n<0x10009:0x00101300>Mais elle est trop haute, il faudrait un\n<color red<projectile >coloroff>pour l'atteindre!")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf(/* textboxtype: 0, unk: 0, line: 152 */ "<0x10009:0x00000004>Le monsieur, il pense que je vais faire peur\naux gens qui entrent ici parce que je n'ai pas\ntout à fait l'air d'une plante. Kiiiikwiiii.\n\n<0x10009:0x00000012>Alors, kooookwoooo, il faut que je reste\ntranquille sans remuer une seule feuille\nde la journée.\n\n<0x10009:0x00090013>Finalement, ça me change pas beaucoup\nde mon ancienne vie... Kwiiii!")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000d0f>Dis‐moi, <heroname>, tu n'aurais pas\nvu mon mari?\n\n\nParce que c'est devenu plus calme, il se permet\nde sortir en pleine nuit... Il aura l'air fin s'il se\nretrouve nez à nez avec un monstre!")
          			  case 1:
/*<476>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000c0e08>Ah, <heroname>! Depuis la mésaventure\nde la dernière fois, Picalia ne sort plus de la\nmaison sans nous avertir. Quel soulagement.\n\nPar contre, son père doit encore être en train\nde flâner quelque part comme d'habitude.")
          			}
          		  case 1:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000c0e08><0x30001:0x><heroname>, merci infiniment d'avoir\nretrouvé Picalia.\n\n\nUn jour, il faudra aussi que je remercie le\nmonsieur qui s'est occupé d'elle.")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000c0e14>Tiens, <heroname>!\n\n\n\n<0x10009:0x00000800>Grâce à toi, j'ai pu retrouver ma petite\nPicalia saine et sauve! Comment\npourrais‐je assez te remercier...?\n\n<0x10009:0x00090800>Tu m'as permis de retrouver le sourire!\nMerci infiniment!")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000c0e13>Comment? Tu as retrouvé Picalia?\n\n\n\n<0x10009:0x000f0e00>Hm. Au moins elle est chez quelqu'un de bien\nqui va veiller sur elle. Mais je veux quand\nmême vite la revoir!")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x000b0d12>Ah... L'île de la Déesse est tombée et je n'ai\ntoujours aucune nouvelle de Picalia.\n\n\nMa petite Picalia...\n\n\n\n<0x30001:0x><heroname>! Retrouve‐la vite,\nje t'en prie!\n\n\n<0x10009:0x00090d00>Et ne me dis pas que tu n'as pas envie\nde la chercher!")
          				  case 1:
/*<  6>*/ 					printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000b0d12>Ah...<pause 10> Je t'en prie...<pause 10> Retrouve vite ma\npetite Picalia!\n\n\nPourvu qu'il ne lui soit rien arrivé!\nMa pauvre enfant!")
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
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x15090d00>C'est affreux! L'île de la Déesse est tombée!\nJe cherchais Picalia là‐bas mais...\n\n\nMais dis‐moi! Tu n'aurais pas vu ma\npetite Picalia?\n[1-]Non[2-]Picalia?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x150d0d12>Ah bon...")
          			flw_21:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x150f0d00>Elle a disparu! Tu ne voudrais pas m'aider\nà la retrouver, <heroname>? \n\n\n<0x10009:0x15090d00>J'ai demandé à plusieurs personnes. Certaines\nm'ont dit qu'elles l'avaient aperçue avec un\nsinistre individu...\n\n<0x10009:0x150b0d00>D'autres m'ont dit qu'elle avait été attaquée\npar un monstre. Qu'est‐ce que je vais faire?\n\n\nUn enlèvement! <0x10009:0x150e0d00>Elle s'est fait enlever!\nMa petite Picalia est si adorable qu'elle\ns'est fait enlever!")
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x15090d00>Il faut sauver ma petite Picalia!\n\n\n\n<0x10009:0x150f0d00>Je t'en supplie, <heroname>!\n[1-]Je m'en\noccupe[2]Impossible")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x150c0e14>Merci! Tu es digne d'être un élève de l'école\nde chevalerie.\n\n\n<0x10009:0x15000800>Je compte sur toi.")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x15090d12>Et tu te prétends élève de l'école de chevalerie?\n\n\n\nLa mission des chevaliers n'est‐elle pas de\nveiller à la sécurité des habitants du bourg?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x15090d12>C'est ma fille! Elle n'a que cinq ans!")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x15090d00>Tu tombes bien! Tu n'aurais pas vu ma\npetite Picalia, par hasard?\n[1-]Non[2-]Pica-qui?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x1000D:0x1900>HYAAAAAA!!!")
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
/*<350>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>Picalia! Picalia! Mais où est‐ce qu'elle\nest passée?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "... Ah, je me demande vraiment où ma petite\nPicalia a bien pu aller...\n\n\nQu'est‐ce que je vais faire si elle a vraiment\nété enlevée?")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x150e0d11>Ah! <0x30001:0x><heroname>!")
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
/*<441>*/ 			printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070c08>Tu es au courant pour l'île de la Déesse?\nComment est‐ce qu'elle a pu disparaître?\n\n\nZelda est introuvable, et Hergo est parti.\nMais qu'est‐ce qui se passe, ici?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>La nuit, je m'entraîne dur pour devenir\naussi fort que toi!")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070a0b>Salut <heroname>! Ça va? La <color yellow<potion\nd'endurance >coloroff>que tu m'as apportée fait\ndes miracles!\n\n<0x10009:0x00ffff00>Mais je ne pense pas encore être à ton niveau...\nJe commence à me décourager. Je suis si\nmaigrichon!\n\nN'hésite pas à venir me rendre visite un de\nces soirs!")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00000001>Salut <heroname>! Comment avancent\ntes recherches?\n\n\nMoi, comme je te l'ai déjà dit, j'ai l'impression\nde ne plus progresser dans mon entraînement.\nJe suis toujours aussi maigrichon...\n\n<0x10009:0x00ffff00>Viendrais-tu me voir la <color red<nuit >coloroff>pour me donner\ndes conseils?")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000001>Salut, <heroname>! Grâce à la\n<color yellow<potion d'endurance >coloroff>que tu m'as donnée,\nje m'entraîne fort toutes les nuits.\n\n<0x10009:0x00101b00>Mais j'ai comme l'impression de ne plus\nprogresser. C'est bizarre...\n\n\nJe me demande si je pourrai devenir aussi\nfort que toi...\n\n\n<0x10009:0x00ffff00>En tous cas, je ne baisserai pas les bras!\nViendrais-tu me voir la <color red<nuit >coloroff>quand je\nm'entraîne, pour me donner des conseils?")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00070a0b>Bonjour, <heroname>! Merci pour\nla <color yellow<potion d'endurance>coloroff>!\n\n\nGrâce à ça, j'ai pu faire des centaines\nde pompes!\n\n\n<0x10009:0x00ffff00>Un jour, je deviendrai aussi fort que toi,\n<heroname>!")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x00000001>Oh... Salut. Tu m'as vu sous un jour pas très\nflatteur, l'autre nuit...\n\n\nJe fais tout mon possible pour devenir aussi\nfort que toi, mais ça ne marche pas... Je vais\npersévérer, quand même!")
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
/*<419>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>La nuit, je m'entraîne dur pour devenir\naussi fort que toi!")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00070c08>Tu es au courant pour l'île de la Déesse?\nComment est‐ce qu'elle a pu disparaître?\n\n\nZelda est introuvable, et Hergo est parti.\nMais qu'est‐ce qui se passe, ici?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000001>Je suis convaincu que toi, tu peux\nretrouver Zelda!")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012><0x30001:0x><heroname>! Je n'ai encore trouvé\naucune trace de Picalia.\n\n\n<0x10009:0x00000e10>Est-ce que tu fais des efforts pour la trouver?\n\n\n\n<0x10009:0x00000c00>Quoi? Tu l'as retrouvée?\n\n\n\n<0x10009:0x00070a0b>Ah, quel soulagement! Et c'est grâce à toi,\n<heroname>! Je savais qu'on pouvait\ncompter sur toi!")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0000000a>Va vite voir sa mère! Elle habite dans une\nmaison au bord de la rivière. Elle doit\nt'attendre!")
          					  case 1:
/*<309>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012><0x30001:0x><heroname>! Je n'ai encore trouvé\naucune trace de Picalia.\n\n\n<0x10009:0x00000e10>Est-ce que tu fais des efforts pour la trouver?\n\n\n\n<0x10009:0x00000c00>Quoi? Tu l'as retrouvée?\n\n\n\n<0x10009:0x00070a0b>Ah, quel soulagement! Et c'est grâce à toi,\n<heroname>! Je savais qu'on pouvait\ncompter sur toi!")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070801>Ah, <heroname>! C'est affreux, l'île\nde la Déesse a disparu.\n\n\n<0x10009:0x00000800>Et la petite Picalia aussi.\n\n\n\n<0x10009:0x00000e00>Zelda est introuvable et Hergo a disparu.\nMais qu'est‐ce qui se passe?\n\n\n<0x10009:0x00070800>Je vais les chercher de mon côté. Mais on va\navoir besoin de toi, <heroname>.")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000012><0x30001:0x><heroname>! Je n'ai encore trouvé\naucune trace de Picalia.\n\n\n<0x10009:0x00000e10>Est-ce que tu fais des efforts pour la trouver?\nJ'espère que tu ne remets pas ça à plus tard,\nquand même?\n\n<0x10009:0x00070200>Je fais tout ce que je peux pour la retrouver,\nalors toi aussi, tu dois faire ta part!")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00001701>Je vais chercher de mon côté! Va voir sur\nla grand‐place, <heroname>!\n\n\n<0x10009:0x00081700>Le garçon qui jouait avec elle hier doit\nêtre là‐bas.")
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000001>Tiens, <heroname>! Tu penses que\ntu pourras bientôt retrouver Zelda?\n\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10> Je vois. Courage! Nous sommes tous\nderrière toi.\n\n\n<0x10009:0x00070200>Au fait, tout à l'heure, j'ai vu la mère\nde Picalia se diriger vers le temple.\n\n\n<0x10009:0x00081700>Je me demande ce qu'elle avait...")
/*< 30>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00200508>Quoi? Picalia a disparu?!\n\n\n\n<0x10009:0x00070800>Il faut faire quelque chose! Moi aussi je vais\nla chercher! <0x30001:0x><heroname>, interroge tous\nles gens que tu peux pour retrouver sa trace!")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00070801>Ah, <heroname>! C'est affreux, l'île\nde la Déesse a disparu.\n\n\n<0x10009:0x00000800>Et la petite Picalia aussi.\n\n\n\n<0x10009:0x00000e00>Zelda est introuvable et Hergo a disparu.\nMais qu'est‐ce qui se passe?\n\n\n<0x10009:0x00070800>Je vais les chercher de mon côté. Mais on va\navoir besoin de toi, <heroname>.")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Tiens, <heroname>! Penses-tu pouvoir\nretrouver Zelda bientôt?\n\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10> Je vois... Courage! Nous sommes tous\nderrière toi!\n\n\nAu fait, j'ai vu la mère de Picalia se diriger\nvers l'entrée du temple. Je me demande\nce qu'elle a.\n\n[1-]Qui ça?[2-]Je sais!")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000005>Tu sais bien, c'est cette femme qui vit dans\nune maison au bord de la rivière avec sa\nfille et son mari.\n\n<0x10009:0x00070800>Elle avait l'air très préoccupée.")
          				  case 1:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070806>Vraiment? Tu aurais pu me le dire plus tôt!")
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
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Salut, <heroname>! Ça fait longtemps\nque j'ai pas vu Hergo...\n\n\nJe me demande s'il est puni... Il a peut‐être fait\nune grosse gaffe, et il a plus le droit de sortir\nde l'école de chevalerie... On ne sait jamais.")
          		  case 1:
/*<461>*/ 			printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Salut, <heroname>! Latruche m'a\nmontré une <color red<technique secrète avec le filet>coloroff>!\n\n\nLe truc, c'est d'agiter le filet à l'horizontale\nplutôt qu'à la verticale!\n\n\nEt puis il a dit aussi qu'il fallait s'approcher\ndes insectes touuuuut doucement et l'agiter\nau dernier moment.")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\nQuoi? La<color blue< truie forte>coloroff><0x10006:0xfbcd>...?<0x10006:0x00cd> <pause 20>De quoi tu parles,\nau juste? Je te trouve bizarre par bouts!")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Hé, <heroname>! Regarde la tour de\nlumière!\n\n\nY a un rayon laser qui en sort! C'est trop cool!")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>Salut, <heroname>! C'est vrai qu'on\npeut attraper autre chose que des insectes\navec un <color red<filet>coloroff>?\n\nC'est le monsieur de l'atelier de rénovation\nqui a dit qu'on pouvait attraper toutes sortes\nde choses surprenantes.")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\nQuoi? Les <color red<paroles>coloroff> de la chanson que\nchantait Zelda?\n\n\nÇa devait être de belles <color red<paroles>coloroff>...")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000001>Moi aussi j'irai à la boutique de Beedle acheter\nle filet!\n\n\nEt je le ferai agrandir à l'atelier de rénovation,\nouais!")
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
/*< 54>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000001>Ce monsieur, il est pas méchant! Quand ze suis\npresque tombée de la falaise, il m'a rattrapée!\n\n\nIl m'a appris que c'était danzereux de sortir\ndehors la nuit. Dis à ma maman que ze\nrentrerai quand il fera zour!")
          	  case 1:
/*<163>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000006>Qu'est‐ce que tu as, Monsieur? Pourquoi tu as\nzet air‐là? Il s'est passé quelque choze?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000001>La nuit, je m'entraîne pour devenir aussi\nfort que toi! C'est vraiment dur... Tu es\ntellement formidable, <heroname>...")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000001>Salut, <heroname>! As-tu des pistes\npour retrouver Zelda?\n\n\nEn passant... j'aimerais tellement devenir\nfort comme toi que je me suis mis à\nm'entraîner <color red<la nuit>coloroff>...\n\n<pause 5>.<pause 5>.<pause 5>.<pause 10> Oh! <0x10009:0x00000a06>Surtout, ne viens pas me voir <color red<dans\nma chambre>coloroff> la nuit, j'aurais trop honte!")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000001>Salut <heroname>! As‐tu des nouvelles\nde Zelda? J'espère qu'elle reviendra bientôt!")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000811>Ah, <heroname>! La tour de lumière\német un rayon lumineux! C'est la première\nfois que je vois ça!")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00070a0b>Salut <heroname>!\n\n\n\n<0x10009:0x0000ff05><color red<Deux grandes ailes>coloroff>...? Le vent souffle toujours\ntrès fort à Célesbourg alors il y a beaucoup de\nchoses qui ressemblent à des ailes.")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00070a0b>Salut <heroname>!\n\n\n\n<0x10009:0x0000ff08>Quoi? Le <color red<Chant de la Déesse>coloroff>...?<pause 30> C'est la\nchanson que Zelda chantait souvent, c'est ça?\n\n\nJe ne connais pas les paroles mais je suis sûr\nque monsieur le directeur devrait\npouvoir t'aider.")
          						  case 1:
/*<314>*/ 							printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x0000000b><0x30001:0x><heroname>! Tu as vu comme la mère\nde Picalia était contente? Tout est bien qui\nfinit bien!")
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
/*<474>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000001><0x30001:0x><heroname>! <pause 30>Quoi?! Le monsieur,\nil est devenu humain?\n\n\n<0x10006:0xfbcd>......<0x10006:0x00cd>\nMoi, ze l'aimais mieux quand il avait des ailes...")
          	  case 1:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Ah, c'est toi, <heroname>!\n\n\n\nLe monsieur de l'autre zour, il m'a dit qu'il\ncherchait plein de gratitude. Z'espère que\nze pourrai bientôt zouer avec lui!")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf(/* textboxtype: 0, unk: 1, line: 112 */ "")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf(/* textboxtype: 0, unk: 1, line: 115 */ "")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10012:0x00000005>Très bien, Maître. J'ai annulé l'ajout de cet objet à\nla liste des cibles à <sound 4>détecter.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x00000013>Ouaaaah! Mais c'est le vieux robot de Gondo!")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "Wow...\n\n\n\n<pause 20>J'en crois pas mes yeux!<pause 40> C'est l'<color red<hélice du\nmoulin >coloroff>qui était tombée sous les nuages?!\n\n\n<0x10009:0x000c0c00>Alors c'était pas des menteries ce qu'il\nracontait, le grand‐père de Gondo?\n\n\nC'est pas possible, il doit y avoir erreur quelque\npart. Bon. De toute façon, je vais réparer ça...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf(/* textboxtype: 0, unk: 1, line: 94 */ "Bon, ça, je le mets là. Et je fais tourner ça,\ncomme ça...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		wait_frames(15)
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		wait_frames(30)
/*< 89>*/ 		printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x000a010e>Fiou!")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x000c0c00>Et voilà, c'est réparé!\nSi tu as de quoi faire tourner l'hélice,\ntu pourras faire pivoter le moulin!")
/*<210>*/ 		printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000100><0x10008:0xffcd>CHÉRI! CHÉRI?")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00050714>Ah, j'avais oublié! Ma femme m'a demandé\nde réparer les étagères à la maison!\n\n\nElle est toujours en train de chercher\nquelqu'un...")
/*< 91>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x000c0c00>Eh bien, <heroname>, à plus!")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00050714>Ah, non! Je devrais être en train de\nchercher Picalia!")
/*<296>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000c0c00>Eh bien, <heroname>, à plus! Toi aussi\naide‐nous à chercher Picalia! Et si tu la\ntrouves, fais‐nous signe!")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000005>Tout le monde sait qu'il y a rien sous les\nnuages! Alors comment on pourrait en\nramener des trucs?\n\nPourtant, <color blue<Gondo>coloroff> y croit dur comme fer et il\ngarde précieusement la carcasse de ce robot.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Salut, <heroname>! Merci d'avoir\nretrouvé Picalia!\n\n\nIl fait tellement beau aujourd'hui,\ntu trouves pas?\n\n\nPar une si belle journée, j'irais bien prendre\nun bon bol de soupe à la Citrouille perchée.\n\n\nMais ma femme veut que je répare les\nétagères... Et ce que femme veut...\n\n\nAaah... J'ai donc pas le goût...")
          			  case 1:
/*<292>*/ 				printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x0000000e>Salut, <heroname>! Picalia n'est\ntoujours pas rentrée! Même moi,\nje commence à m'inquiéter!\n\nAide‐nous à la chercher, tu veux?")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "Dzzat! Elle est si belle! Je ferais n'importe\nquoi pour mam'selle Fay... bzzrt.")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 0, unk: 1, line: 118 */ ".<pause 5>.<pause 5>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 153 */ "Une présence inquiétante se fait sentir\nderrière la porte.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00010701>Reviens me voir au bazar si tu en as l'occasion!\n\n\n\nJe te prédirai ton avenir à prix d'ami!")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10009:0x0010070d>Ooh...! Mais qu'est‐ce que j'aperçois?\n\n\n\nÇa y est! C'est merveilleux! Elle est absolument\nidentique à mon ancienne boule de cristal!")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10009:0x00000700>Woooooh! Je sens une grande vitalité envahir\ntout mon corps! Je vois... un beau destin qui\nse dessine...\n\nJe me vois scruter l'avenir et enfin reprendre\nmes prédictions!\n\n\nReviens me voir au bazar si tu en as envie!\nJe te prédirai ton avenir à prix d'ami!")
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
/*<103>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Mais qu'est‐ce que tu fais? Pars vite à la\nrecherche de ma nouvelle boule de cristal!")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Mais qu'est‐ce que tu fais? Pars vite à la\nrecherche de ma nouvelle boule de cristal!")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf(/* textboxtype: 0, unk: 0, line: 110 */ "La <color red<boule de cristal >coloroff>que recherche cette personne\nne figure pas parmi les cibles à <sound 4><color red<détecter>coloroff>.\n\n\nVoulez‐vous rajouter la <color red<boule de cristal >coloroff>à la liste\ndes cibles à <sound 4><color red<détecter>coloroff>?\n[1-]S'il te plaît[2]Pas maintenant")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nJ'ai réglé la <color red<<sound 4>détection>coloroff> pour réagir à la <color red<boule de\ncristal >coloroff>que recherche cette personne.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10012:0x00000005>Très bien, Maître. J'ai annulé l'ajout de cet objet à\nla liste des cibles à <sound 4>détecter.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf(/* textboxtype: 0, unk: 1, line: 124 */ "<0x10009:0x000c100f>Ne t'en fais pas pour moi... Va! Va!\nLaisse‐moi à mon triste sort...\n\n\nMaintenant que ma boule de cristal est brisée,\nje ne peux plus prédire ton avenir...\nJe ne vois plus...\n\nJ'ai l'impression qu'à l'image de ma boule de\ncristal brisée, mes <0x10006:0xfccd>grands yeux ronds <0x10006:0x00cd>sont\ntroublés. Une profonde tristesse m'envahit...\n\n<pause 30>Aah... Si... Si seulement j'avais une nouvelle\nboule de cristal...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 0, line: 125 */ "Mais dis‐moi. J'ai entendu dire que tu avais\nretrouvé une partie du moulin qui était\ntombée dans le monde d'en bas.\n\nCette boule maintenant brisée vient aussi\nd'en bas. C'est le grand‐père du gérant de\nl'atelier de rénovation qui l'avait trouvée\navant de me la donner.\nIl y en a peut‐être d'autres sous les nuages.\nPourrais‐tu essayer de m'en trouver\nune nouvelle?\n[1-]D'accord[2]Non")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "Oh! Oui! Ça me fait plaisir d'entendre ça!\nMes yeux sont remplis de gratitude.\n\n\nLe robot de l'atelier de rénovation aurait\ntrouvé la boule de cristal sur un <color red<bâtiment\nau sommet d'une montagne>coloroff>.")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf(/* textboxtype: 1, unk: 0, line: 105 */ "Je peux ajouter la <color red<boule de cristal >coloroff>que recherche\ncette personne à la liste des cibles que vous\npouvez <color red<<sound 4>détecter>coloroff>.\n\nToutefois, si vous êtes à la recherche d'un autre\nobjet pour quelqu'un d'autre, cet objet sera retiré\nde la liste des cibles à détecter.\n\nDois‐je régler la <color red<détection>coloroff> pour réagir à la\n<color red<boule de cristal>coloroff>?\n[1-]S'il te plaît[2]Pas encore")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10012:0x00000005>Très bien, Maître. J'ai enregistré la boule de cristal.")
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
/*<392>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x0001070b>Jeune homme, je compte sur toi! Sans boule de\ncristal, je ne vois plus l'avenir. Mes yeux sont\ntristes et je ne peux plus faire de prédictions.\n\nRamène‐moi vite une nouvelle boule de cristal!\nMes yeux t'en supplient!")
          					  case 1:
/*<467>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez régler la\ndétection, parlez à nouveau à cette personne.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x000c1009> Que ce monde est cruel<0x10006:0xfccd>...<0x10006:0x00cd>")
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
/*<480>*/ 				printf(/* textboxtype: 1, unk: 0, line: 150 */ "La statue de la Déesse qui disparaît...\nC'est vraiment impensable...\n\n\nJamais je n'aurais cru voir ça un jour!\n\n\n\nMais le directeur m'a expliqué que c'était\nun mal nécessaire pour que tu puisses\nsauver Zelda.\n\nSon sort repose entre tes mains!")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf(/* textboxtype: 0, unk: 1, line: 148 */ "Tiens, <heroname>! Le monde regorge\nencore de plantes inconnues. Je ne cesse\nd'être surpris.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf(/* textboxtype: 0, unk: 0, line: 149 */ "<0x10009:0x000e050a>Plus j'observe cette plante, plus je la\ntrouve fascinante!\n\n\n<0x10009:0x00000500>Où donc se trouve la frontière entre le\nvégétal et l'animal? C'est tout à fait captivant.")
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
/*<275>*/ 					printf(/* textboxtype: 0, unk: 0, line: 143 */ "<0x10009:0x00000009>Hahaha! Je savais que tu pourrais m'aider,\n<heroname>, le pouce vert!\n\n\nJ'ai bien hâte de voir ce que tu vas\nme rapporter!")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						wait_frames(15)
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf(/* textboxtype: 1, unk: 0, line: 111 */ "La <color red<plante>coloroff> que recherche cette personne ne figure\npas parmi les cibles à <sound 4><color red<détecter>coloroff>.\n\n\nVoulez‐vous la rajouter à la liste des cibles à <sound 4><color red<détecter>coloroff>?\n[1-]S'il te plaît[2]Pas\nmaintenant")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nJ'ai réglé la <color red<<sound 4>détection>coloroff> pour réagir à la <color red<plante>coloroff> que\nrecherche cette personne.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10012:0x00000005>Très bien, Maître. J'ai annulé l'ajout de cet objet à\nla liste des cibles à <sound 4>détecter.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 1, line: 142 */ "<0x10009:0x00000001>Alors, est‐ce que tes recherches d'une\nnouvelle espèce de plante avancent?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf(/* textboxtype: 0, unk: 0, line: 140 */ "<0x10009:0x00000001>Ah, <heroname>! Est-ce que tu veux\nfinalement écouter ma requête?\n\n\nJe suis un fervent collectionneur de\nplantes rares.")
          						flw_118:
/*<118>*/ 						printf(/* textboxtype: 0, unk: 1, line: 139 */ "<0x10009:0x00000000>Mais il semble que ma collection contienne\nmaintenant tous les types de plantes qui se\ntrouvent dans ce village...\n\nEt je me demandais donc s'il ne serait pas\npossible de découvrir de nouvelles plantes\nquelque part.\n\n<0x10009:0x00090a0f>Dis-moi. Tu ne voudrais pas trouver une plante\nqui captiverait l'attention de tout le monde?\nQuelque chose d'exotique, peut-être?\n\n[1-]Je vais\nessayer[2]Je n'ai pas\nle temps")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000a0a03>Oho! Je savais que toi, tu écouterais ma\nrequête, <heroname>!\n\n\nApporte‐moi une plante rare que personne\nn'a jamais vue auparavant!")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							wait_frames(15)
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf(/* textboxtype: 1, unk: 0, line: 108 */ "Je peux ajouter la <color red<plante>coloroff> que recherche cette\npersonne à la liste des cibles que vous pouvez <sound 4><color red<détecter>coloroff>.\n\n\nToutefois, si vous êtes à la recherche d'un autre objet\npour quelqu'un d'autre, cet objet sera retiré de la\nliste des cibles à détecter.\n\nDois‐je régler la <color red<détection>coloroff> pour réagir à la <color red<plante>coloroff>?\n[1-]S'il te plaît[2]Pas encore")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10012:0x00000005>Très bien, Maître. J'ai enregistré la plante.")
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
/*<470>*/ 								printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10012:0x00000005>Très bien, Maître. Si vous souhaitez régler la\ndétection, parlez à nouveau à cette personne.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x000a0a09>Hahaha! Oui, tu as autre chose à faire.\nJe comprends.\n\n\nMais si tu cours toujours après la même chose,\nça va te fatiguer.\n\n\nIl faut savoir souffler de temps en temps.\nNe l'oublie pas!")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "La statue de la Déesse qui disparaît...\nC'est vraiment impensable...\n\n\nJamais je n'aurais cru voir ça un jour!\n\n\n\nMais le directeur m'a expliqué que c'était\nun mal nécessaire pour que tu puisses\nsauver Zelda.\n\nSon sort repose entre tes mains!")
          							flw_116:
/*<116>*/ 							printf(/* textboxtype: 0, unk: 0, line: 137 */ "<0x10009:0x00000013>Ehem... Mais dis‐moi plutôt... Voudrais‐tu\nécouter ma requête?\n\n\nComme tu le sais, je suis le plus grand\ncollectionneur de plantes de Célesbourg.\n\n\nEn tous les cas, je me suis moi‐même décerné\nce titre...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x00000001>Tiens, <heroname>! Comment ça s'est\npassé? As‐tu pu parler avec le grand Narisha?\n\n\nJe vois... J'avais raison. Tu as vraiment\nquelque chose de différent des autres.\n\n\nToi et ton célestrier vermeil, vous allez\nsûrement vous en sortir.\n\n\nLe chemin sera encore long et semé d'embûches,\nmais tu ne dois pas baisser les bras!")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10009:0x00000001><0x30001:0x><heroname>! Aurais‐tu un peu de temps\npour écouter mes tourments?\n[1-]Qu'est‐ce\nqu'il y a?[2]Non,\ndésolé")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf(/* textboxtype: 1, unk: 0, line: 135 */ "Non, je t'en parlerai une autre fois! La mère\nde Picalia m'a demandé de chercher sa\nfille disparue.\n\nSi tu as un peu de temps, toi aussi, cherche‐la.")
          						  case 1:
/*<130>*/ 							printf(/* textboxtype: 2, unk: 0, line: 134 */ "<0x10009:0x00000009>Hahaha! Non mais, tu pourrais quand même\nécouter ce que j'ai à te dire, pour une fois!")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "La statue de la Déesse qui disparaît...\nC'est vraiment impensable...\n\n\nJamais je n'aurais cru voir ça un jour!\n\n\n\nMais le directeur m'a expliqué que c'était\nun mal nécessaire pour que tu puisses\nsauver Zelda.\n\nSon sort repose entre tes mains!")
          						  case 1:
/*<316>*/ 							printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x00000001>Tiens, <heroname>! Comment ça s'est\npassé? As‐tu pu parler avec le grand Narisha?\n\n\nJe vois... J'avais raison. Tu as vraiment\nquelque chose de différent des autres.\n\n\nToi et ton célestrier vermeil, vous allez\nsûrement vous en sortir.\n\n\nLe chemin sera encore long et semé d'embûches,\nmais tu ne dois pas baisser les bras!")
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
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "Et voilà! Livraison de l'<color red<hélice du moulin\n>coloroff>effectuée! Zzzat!")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Si tu as encore besoin de moi...\nzzrboosh-CLANG, n'hésite pas à\nm'appeler! ZzBZZT!\n\nPour mam'selle Fay, j'irais jusqu'au bout\ndu monde! Ker-dizzzt!")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "<0x10009:0x00090011>Ruuuutabaga! Quand on me regarde fixement\ncomme ça, je rougis comme une tomate!")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "Et voilà! Une belle boule de cristal toute\nscintillante, BZAAT!")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf(/* textboxtype: 0, unk: 1, line: 121 */ "Si tu as encore besoin de moi...\nzzrboosh-CLANG, n'hésite pas à\nm'appeler! ZzBZZT!\n\nPour mam'selle Fay, j'irais jusqu'au bout\ndu monde! Ker-dizzzt!")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>Picalia! Picalia! Mais où est‐ce qu'elle\nest passée?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "... Ah, je me demande vraiment où ma petite\nPicalia a bien pu aller...\n\n\nQu'est‐ce que je vais faire si elle a vraiment\nété enlevée?")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x150e0d11>Ah! <0x30001:0x><heroname>!")
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
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 123 */ "Zzzz-TING! Si t'as encore besoin de\nmoi, n'hésite pas à m'appeler! Dzzzrp!")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 0, unk: 0, line: 122 */ "Et voilà! Le drôle de Kikwi est arrivé à\ndestination! Fzzzrt!")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

