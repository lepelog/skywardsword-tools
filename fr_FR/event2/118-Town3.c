          void entrypoint_118_05() {
/*<  2>*/ 	start()
/*<280>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<281>*/ 		printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x000a0a12>C'est bizarre, on ne voit plus la Déesse,\nd'ici. Je me demande bien pourquoi...\n\n\nEnfin, bref...")
          		flw_55:
/*< 55>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 56>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000009>Alors, tu as retrouvé la petite Nacia ?\n\n\n\n<0x10009:0x00000e00>T'as fait ça tout seul ? Tu es bien digne\nd'être un apprenti chevalier !\n\n\n<0x10009:0x00000400>Va le dire à sa mère pour la rassurer !\nElle habite une maison au bord de la\nrivière !")
          		  case 1:
/*< 31>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Ben qu'est‐ce qui t'arrive,\n<heroname> ? T'es tout pâle.\n[1-]C'est horrible ![2]Ah bon ?")
/*< 35>*/ 				switch (choice(2)) {
          				  case 0:
/*< 27>*/ 					printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000506>Comment ? Nacia a disparu ?\n\n\n\n<0x10009:0x00000500>Elle a été enlevée par un monstre ?!\n\n\n\n<0x10009:0x000b0400>Maintenant que tu en parles, on\nraconte qu'une créature démoniaque\nvivrait quelque part à Célesbourg.\n\n<0x10009:0x000a0500>À la nuit tombée, elle sortirait dans\nle bourg pour terroriser les gens et\nenlever les enfants !\n\n<0x10009:0x00000400>Ce n'est sûrement qu'une légende, mais\nça m'intrigue quand même...")
          				  case 1:
/*< 48>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000004>J'espère qu'il n'y a rien de grave...")
          				}
          			  case 1:
/*<282>*/ 				switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          				  case 0:
/*<284>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 283, 'param3': 31}
/*<283>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000006>J'ai croisé la mère de Nacia qui\narpentait le village en appelant\nsa fille. Qu'est‐ce qui a bien pu\nse passer ?")
          				  case 1:
/*< 51>*/ 					printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x000b0e01>Il paraît que c'est toi qui as remporté\nla chevauchée céleste ! Félicitations !\n\n\n<0x10009:0x00000a00>Mais dis‐moi, tu fais une drôle de tête.\nQu'est‐ce qui va pas ?")
          				}
          			}
          		}
          	  case 1:
/*<488>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x000a0c12>Qu'est‐ce que c'était que ce\ngrondement, tout à l'heure ?")
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
/*<156>*/ 		printf(/* textboxtype: 1, unk: 0, line: 146 */ "<0x10009:0x0000000a>Ooooh ! C'est fascinant !\n\n\n\nIl existe encore dans ce monde\nd'innombrables plantes encore\ninconnues !\n\nJ'ai retrouvé la motivation de\npoursuivre ma collection !")
/*<263>*/ 		{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2560, 'next': 264, 'param3': 13}
/*<264>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 262, 'param3': 17}
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 147 */ "<0x30001:0x><heroname> !\nMerci mille fois ! Ne t'en fais pas, je\nprendrai grand soin de ma nouvelle\nplante.\nSi tu trouves d'autres plantes rares,\npréviens‐moi !")
/*<155>*/ 		story_flags[481 /* us: 805A9B11 0x20, jp: 805ACD91 0x20 */] = true;
/*<299>*/ 		story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<157>*/ 		give_gratitude_crystals();
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 512, 'next': 171, 'param3': 13}
/*<171>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 172, 'param3': 32}
/*<172>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 153, 'param3': 17}
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000053>Oh ! Mais... Mais c'est... Oui ! C'est\nexactement ce que je recherchais !\nUne nouvelle espèce de plante !")
/*<169>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 1280, 'next': 154, 'param3': 13}
/*<154>*/ 		printf(/* textboxtype: 1, unk: 0, line: 145 */ "Voyons voir...\nEst‐ce un végétal, ou un animal ?\n\n\nHmm...\nC'est peut‐être la plus grande\ndécouverte de ce siècle !")
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
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00090257>Comment.<pause 10>.<pause 10>.?\nTu as retrouvé la fillette qui\navait disparu ?\n\nAlors, en fin de compte, elle\nn'avait pas été enlevée ?\nTant mieux !\n\n<0x10009:0x00000609>Quoi qu'il en soit, c'est une\naffaire de réglée ! Beau travail,\nchevalier !")
          		  case 1:
/*<398>*/ 			switch (story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */]) {
          			  case 0:
/*<399>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<403>*/ 					printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00001557>Si on <color green<percute>coloroff> la <color red<tombe la plus\nproche de l'arbre >coloroff>puis qu'on\nla <color green<déplace>coloroff>, le démon apparaîtrait...\n\n<0x10009:0x00001513>Enfin, il est hors de question\nque j'aille me promener dans\nle cimetière en pleine nuit...")
          				  case 1:
/*<400>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 401, 'param3': 31}
/*<401>*/ 					printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Alors tu es allé parler au vieux\nmonsieur à la Citrouille perchée ?\n\n\nSi on <color green<percute>coloroff> la <color red<tombe la plus\nproche de l'arbre >coloroff>puis qu'on la\n<color green<déplace>coloroff>, le démon apparaît...?\n\n<0x10009:0x00001513>Je me demande si c'est vrai<0x10006:0xfbcd>...<0x10006:0x00cd>\nEnfin, je te déconseille de te\npromener dehors la nuit.")
/*<402>*/ 					zone_temp_flags[11 /* 0x0 08 */] = true;
          				}
          			  case 1:
/*< 32>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<333>*/ 					switch (zone_temp_flags[11 /* 0x0 08 */]) {
          					  case 0:
          						flw_46:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00110200>Où tu peux trouver ce vieux monsieur ?\n\n\n\n<0x10009:0x00000200>Il doit être <color red<à la Citrouille perchée>coloroff>,\nà l'est d'ici. C'est un habitué.\n\n\n<0x10009:0x00120200>Évidemment, il faut s'y rendre en\noiseau.")
/*<334>*/ 						zone_temp_flags[11 /* 0x0 08 */] = true;
          					  case 1:
/*<289>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 36, 'param3': 31}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00001513>Tu as entendu la rumeur ? On raconte\nqu'une fillette aurait disparu alors\nqu'elle jouait dans le cimetière...\n\n<0x10009:0x00121500>Même dans un petit bourg comme le\nnôtre, on n'est plus en sécurité...\n[1-]Tout à fait ![2]Ah bon ?")
/*< 37>*/ 						switch (choice(2)) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00010c06>Comment ? Elle pourrait avoir été\nenlevée par un monstre ?\n\n\n<0x10009:0x00000c00>Il ne faut pas exagérer quand même...\n<pause 30>Ah<pause 10>.<pause 10>.<pause 10>.<pause 10>\n\n\n<0x10009:0x00090200>Maintenant que tu en parles, il y a un\n<color red<<sound 4>vieux monsieur>coloroff> qui habite près d'ici\nqui raconte qu'un monstre vivrait à\nCélesbourg.\n<0x10009:0x00120200>Mais il est toujours saoul alors\npersonne ne le prend au sérieux...")
          							goto flw_46
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00121557>Tu es bien insouciant... Quelqu'un a\ndisparu dans notre bourg ! C'est très\ngrave !")
          						}
          					}
          				  case 1:
/*<287>*/ 					switch (story_flags[47 /* us: 805A9AE6 0x01, jp: 805ACD66 0x01 */]) {
          					  case 0:
/*<288>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00001504>On raconte qu'une fillette\naurait disparu !")
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000501>Oh ! Alors tu as remporté la\nchevauchée céleste et tu es passé dans\nla classe supérieure !\n\n<0x10009:0x000c0200>Je vois ça à ton uniforme de chevalier !\nIl te va bien !\n\n\n<0x10009:0x000c0500>Tu as fait un nouveau pas en avant\nsur la voie qui te permettra de devenir\nun vrai chevalier !")
          					}
          				}
          			}
          		}
          	  case 1:
/*<285>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<286>*/ 			printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00091501>J'ai eu peur... La terre s'est mise à\ngronder tout à coup et après ça, l'île\nde la Déesse avait disparu !\n\n<0x10009:0x00120200>Mais... Au fait...")
          			goto flw_57
          		  case 1:
/*<490>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<491>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000013>Tu as ressenti cette grosse secousse ?\nJe me demande bien ce que c'était...\n\n\n<0x10009:0x00120200>Ah, au fait...")
          				goto flw_57
          			  case 1:
          				goto flw_57
          			}
          		}
          	}
          }

          void entrypoint_118_23() {
/*<204>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Oh, <heroname> !\nQu'est‐ce que tu fais ?")
/*<207>*/ 	set_camera(11, 0)
/*<208>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 72, 'param3': 17}
/*< 72>*/ 	printf(/* textboxtype: 1, unk: 0, line: 85 */ "... Tu t'intéresses à ce moulin ?\n\n\n\nIl a été construit de manière à\npouvoir pivoter pour capter le\nvent le plus efficacement possible.")
/*<177>*/ 	set_camera(8, 0)
/*<196>*/ 	{'type': 'type3', 'subType': 2, 'param1': 32, 'param2': 0, 'next': 197, 'param3': 15}
/*<197>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 100, 'next': 175, 'param3': 15}
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "Mais, il y a très très longtemps...\n\n\n\nLa petite <color red<hélice>coloroff> qui permettait\nau moulin de pivoter s'est détachée.\n\n\nEt elle serait tombée sous les nuages.")
/*<195>*/ 	set_camera(4, 0)
/*<178>*/ 	set_camera(5, 0)
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 87 */ "Et depuis, comme il sert plus à rien,\non a laissé ce moulin à l'abandon.")
/*<179>*/ 	wait_frames(15)
/*<181>*/ 	set_camera(9, 0)
/*<180>*/ 	wait_frames(15)
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 257, 'param3': 51}
/*<257>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 258, 'param3': 50}
/*<258>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 76, 'param3': 17}
/*< 76>*/ 	printf(/* textboxtype: 2, unk: 0, line: 104 */ "Afin de pouvoir faire bouger ce\nmoulin, je vous suggère d'aller\nrécupérer son <color red<hélice >coloroff>tombée sur terre.")
/*< 77>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 36}
/*<165>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 259, 'param3': 16}
/*<259>*/ 	wait_frames(15)
/*<198>*/ 	set_camera(10, 0)
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x000c0800>Comment ? Si tu me ramènes l'hélice,\nest‐ce que je pourrais réparer\nle moulin ?\n\nBen, je devrais pouvoir remettre\nl'hélice en place, mais...")
/*<199>*/ 	set_camera(12, 0)
/*<200>*/ 	printf(/* textboxtype: 1, unk: 2, line: 89 */ "Mais comment tu comptes t'y prendre\npour retrouver cette hélice ?\n\n\nSi elle est tombée sous les nuages,\nelle est perdue pour de bon...")
/*<202>*/ 	set_camera(10, 0)
/*<203>*/ 	{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 2048, 'next': 79, 'param3': 13}
/*< 79>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x000c0c13> Attends un peu.\nTu connais <color blue<Dorco>coloroff> qui tient l'atelier\nde rénovation au marché couvert ?\n\nJ'ai entendu dire que son grand‐père\nutilisait un <color red<robot volant >coloroff>pour aller\nrécupérer de la ferraille sous les\nnuages...\nMais bon, connaissant la famille\nde Dorco, à mon avis, c'est du pipeau.")
/*< 74>*/ 	story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */] = true;
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_118_07() {
/*<  4>*/ 	start()
/*<335>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<336>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>La statue de la Déesse est plus là !\nQu'est‐ce qu'on va faire ?!\n\n\nC'était l'endroit idéal pour\nattraper des insectes !")
          	  case 1:
/*< 60>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
/*<405>*/ 			switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          			  case 0:
/*<409>*/ 				switch (story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */]) {
          				  case 0:
/*<447>*/ 					switch (zone_temp_flags[8 /* 0x0 01 */]) {
          					  case 0:
/*<406>*/ 						printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000001>Moi aussi j'irai à la boutique de Terry\nacheter le filet à papillons !\n\n\nEt je le ferai agrandir à l'atelier\nde rénovation, ouais !")
          					  case 1:
/*<451>*/ 						entrypoint_118_28();
          					}
          				  case 1:
/*<410>*/ 					printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname> !\n\n\n\nQuoi ? T'es allé à la boutique\nde Terry ? Pff ! C'est pas juste !\nMoi aussi je veux y aller !")
/*<411>*/ 					story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
/*<446>*/ 					zone_temp_flags[8 /* 0x0 01 */] = true;
          				}
          			  case 1:
/*<407>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000001>Mais, euh ! Je veux mon filet à\npapillons ! Je dois trouver un moyen\nd'aller à la boutique de Terry...")
          			}
          		  case 1:
/*< 59>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000001>Tu as retrouvé Nacia ?\n\n\n\n<0x10009:0x000f1300>Tout le monde se faisait\ndu souci pour elle !")
          			  case 1:
/*< 33>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*<404>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 420, 'param3': 31}
/*<420>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<421>*/ 						printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname> !\n\n\n\nQuoi ? T'es allé à la boutique\nde Terry ? Pff ! C'est pas juste !\nMoi aussi je veux y aller !")
/*<422>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          						flw_29:
/*< 29>*/ 						printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000006>Nacia ?\n\n\n\n<0x10009:0x00120900>Ben, hier, je l'ai vue jouer dans le\n<color red<cimetière>coloroff>...\n\n\n<0x10009:0x000a0900>Mais ma mère est venue me chercher\nalors je suis parti avant elle.\n\n\n<0x10009:0x00010900>Il lui est arrivé quelque chose ?")
          					  case 1:
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00101301>Je me demande comment je pourrais\nfaire pour acheter un filet à papillons\nde la boutique de Terry...\n[1-]Où est\nNacia ?[2-]La boutique\nde Terry ?")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_29
          						  case 1:
/*< 49>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000004>Je réfléchis à un moyen d'arrêter\nla boutique de Terry.\n\n\n<0x10009:0x00120900>Il paraît que quand on fait sonner\n<sound 4>la cloche qui pend, il s'arrête.\n\n\n<0x10009:0x00101300>Si seulement je pouvais <color red<lancer\nquelque chose >coloroff>jusque là‐haut !\n\n\nSi jamais tu trouves pas la boutique\nde Terry avec la vue subjective,\nregarde donc sur ta <color green<carte>coloroff> !")
          						}
          					}
          				  case 1:
/*<374>*/ 					switch (story_flags[709 /* us: 805A9B22 0x80, jp: 805ACDA2 0x80 */]) {
          					  case 0:
/*<375>*/ 						printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname> !\n\n\n\nQuoi ? T'es allé à la boutique\nde Terry ? Pff ! C'est pas juste !\nMoi aussi je veux y aller !")
/*<408>*/ 						story_flags[835 /* us: 805A9B32 0x08, jp: 805ACDB2 0x08 */] = true;
          					  case 1:
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 50, 'param3': 31}
/*< 50>*/ 						printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000001>Hé, regarde là‐haut ! La <color blue<boutique de\nTerry>coloroff> est enfin arrivée !\n\n\n<0x10009:0x000a1300>Il vend des <color red<filets à papillons >coloroff>!\nIl m'en faut un !\n\n\n<0x10009:0x00120900>Si je pouvais faire sonner la cloche qui\npend, je pourrais rentrer dans sa\nboutique...\n\n<0x10009:0x00101300>Mais elle est trop haute, il faudrait un\n<color red<projectile >coloroff>pour l'atteindre !")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_118_24() {
/*<323>*/ 	start()
/*<324>*/ 	printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10009:0x00000004>Il veut pas que je fasse peur aux gens\nqui entrent ici et il veut que j'aie l'air\nd'une plante.\n\n<0x10009:0x00000012>Alors il faut que je reste tranquille\nsans bouger.\n\n\n<0x10009:0x00090013>Finalement, ça me change pas\nbeaucoup de mon ancienne vie...")
          }

          void entrypoint_118_08() {
/*<  5>*/ 	start()
/*< 63>*/ 	switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          	  case 0:
/*<471>*/ 		switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          		  case 0:
/*<475>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<472>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000d0f>Dis‐moi, <heroname>, tu n'aurais\npas vu mon mari ?\n\n\nSous prétexte que c'est devenu plus\ncalme, il se met à sortir en pleine\nnuit... Il aura l'air fin s'il se retrouve\nnez à nez avec un monstre !")
          			  case 1:
/*<476>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x000c0e08>Ah, <heroname> !\nDepuis la mésaventure de la dernière\nfois, Nacia ne sort plus de la maison\nsans prévenir. Quel soulagement.\nPar contre, son père doit encore être\nen train de traînasser quelque part\ncomme à son habitude.")
          			}
          		  case 1:
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000c0e08><0x30001:0x><heroname>, merci infiniment\nd'avoir retrouvé Nacia.\n\n\nUn jour, il faudra aussi que je\nremercie le monsieur qui a joué\navec elle...")
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*<424>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 142, 'param3': 31}
/*<142>*/ 			switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000c0e14>Tiens, <heroname> !\n\n\n\n<0x10009:0x00000800>Grâce à toi, j'ai pu retrouver ma petite\nNacia saine et sauve ! Comment\npourrais‐je assez te remercier...?\n\n<0x10009:0x00090800>Tu m'as permis de retrouver\nle sourire ! Merci infiniment !")
/*< 65>*/ 				story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */] = true;
/*<144>*/ 				give_gratitude_crystals();
          			  case 1:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x000c0e13>Comment ? Tu as retrouvé Nacia ?\n\n\n\n<0x10009:0x000f0e00>Je vois. Si elle est chez un gentil\nmonsieur, je suppose qu'elle ne craint\nrien. Mais je veux vite la revoir !")
          			}
          		  case 1:
/*<492>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*<423>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 278, 'param3': 31}
/*<278>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<279>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x000b0d12>Ah... L'île de la Déesse est tombée et je\nn'ai toujours aucune nouvelle de Nacia.\n\n\nMa petite Nacia...\n\n\n\n<0x30001:0x><heroname> ! Retrouve‐la vite,\nje t'en prie !\n\n\n<0x10009:0x00090d00>Et ne me dis pas que tu n'as pas envie\nde la chercher !")
          				  case 1:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000b0d12>Ah...<pause 10> Je t'en prie...<pause 10> Retrouve vite ma\npetite Nacia !\n\n\nPourvu qu'il ne lui soit rien arrivé !\nMa pauvre enfant !")
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
/*<277>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x15090d00>C'est affreux ! L'île de la Déesse est\ntombée ! Je cherchais Nacia là‐bas\nmais...\n\nMais dis‐moi ! Tu n'aurais pas vu ma\npetite Nacia ?\n[1-]Non[2-]Nacia ?")
          		flw_18:
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x150d0d12>Ah bon...")
          			flw_21:
/*< 21>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x150f0d00>Elle a disparu ! Tu ne voudrais\npas m'aider à la retrouver,\n<heroname> ? \n\n<0x10009:0x15090d00>J'ai demandé à plusieurs personnes.\nCertaines m'ont dit qu'elles l'avaient\naperçue avec un individu patibulaire...\n\n<0x10009:0x150b0d00>D'autres m'ont dit qu'elle avait été\nattaquée par un monstre. Qu'est‐ce\nque je vais faire ?\n\n<0x10009:0x150e0d00>C'est forcément un kidnapping !\nMa petite Nacia est si adorable\nqu'elle s'est fait enlever !")
          			flw_22:
/*< 22>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x15090d00>Il faut sauver ma petite Nacia !\n\n\n\n<0x10009:0x150f0d00>Je t'en supplie, <heroname> !\n[1-]Je m'en\noccupe[2]Impossible")
/*< 23>*/ 			switch (choice(2)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x150c0e14>Merci ! Tu es digne d'être un élève de\nl'école de chevalerie.\n\n\n<0x10009:0x15000800>Je compte sur toi.")
/*<  7>*/ 				story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */] = true;
/*<347>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x15090d12>Et tu te prétends élève de l'école\nde chevalerie ?\n\n\nLa mission des chevaliers n'est‐elle pas\nde veiller à la sécurité des habitants\ndu bourg ?!")
          				goto flw_22
          			}
          		  case 1:
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x15090d12>C'est ma fille ! Elle a cinq ans !")
          			goto flw_21
          		}
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x15090d00>Tu tombes bien ! Tu n'aurais pas vu ma\npetite Nacia, par hasard ?\n[1-]Non[2-]Nacia ?")
          		goto flw_18
          	}
          }

          void entrypoint_118_09() {
/*< 10>*/ 	start()
/*<260>*/ 	set_camera(13, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 107, 'next': 11, 'param3': 24}
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x1000D:0x1900>HYAAAAAA !!!")
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
/*<350>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>Nacia ! Nacia !\nMais où est‐ce qu'elle est passée ?")
/*<357>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 349, 'param3': 13}
/*<349>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "... Ah, je me demande vraiment où\nma petite Nacia a bien pu aller...\n\n\nQu'est‐ce que je vais faire si elle a\nvraiment été enlevée ?!")
/*<354>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<372>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 366, 'param3': 16}
/*<366>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x150e0d11>Ah ! <0x30001:0x><heroname> !")
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
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070c08>Tu es au courant pour l'île de la\nDéesse ? Comment est‐ce qu'elle\na pu disparaître ?\n\nZelda est introuvable, et Hergo est\nparti. Mais qu'est‐ce qui se passe, ici ?")
/*<443>*/ 			scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          		  case 1:
/*<444>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>La nuit, je m'entraîne dur pour\ndevenir aussi fort que toi !")
          		}
          	  case 1:
/*<437>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00070a0b>Salut <heroname> !\nL'<color yellow<Endurol >coloroff>que tu m'as apporté fait des\nmiracles !\n\n<0x10009:0x00ffff00>Mais je ne pense pas encore être\nà ton niveau...\n\n\nN'hésite pas à venir me rendre visite\nun de ces soirs !")
          			flw_440:
/*<440>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<435>*/ 			switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000001>Salut <heroname> !\nComment avancent tes recherches ?\n\n\nMoi, comme je te l'ai déjà dit,\nj'ai l'impression de ne plus\nprogresser dans mon entraînement.\nJe ne comprends pas pourquoi...\nTu voudras bien revenir me voir la <color red<nuit\n>coloroff>pour me donner des conseils ?")
          				goto flw_440
          			  case 1:
/*<431>*/ 				switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          				  case 0:
/*<434>*/ 					printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00000001>Salut, <heroname> !\nGrâce à l'<color yellow<Endurol >coloroff>que tu m'as donné,\nje m'entraîne dur toutes les <color red<nuits>coloroff>.\n\n<0x10009:0x00101b00>Mais j'ai comme l'impression de ne plus\nprogresser. C'est bizarre...\n\n\nJe me demande si je pourrai devenir\naussi fort que toi...\n\n\n<0x10009:0x00ffff00>Enfin, je ne baisserai pas les bras !\nTu ne voudrais pas revenir me voir la\n<color red<nuit >coloroff>quand je m'entraîne, pour me\ndonner des conseils ?")
          					goto flw_440
          				  case 1:
/*<430>*/ 					switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          					  case 0:
/*<433>*/ 						printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00070a0b>Bonjour, <heroname> !\nMerci pour l'<color yellow<Endurol>coloroff> !\n\n\nGrâce à ça, j'ai pu faire des centaines\nde pompes !\n\n\n<0x10009:0x00ffff00>Un jour, je deviendrai aussi fort\nque toi, <heroname> !")
          						goto flw_440
          					  case 1:
/*<432>*/ 						printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000001>Oh... Salut. Tu m'as vu sous un jour pas\ntrès flatteur, l'autre nuit...\n\n\nJe fais tout mon possible pour devenir\naussi fort que toi, mais ça ne marche\npas... Enfin, je ne vais pas abandonner\ncomme ça !")
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
/*<419>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000005>La nuit, je m'entraîne dur pour\ndevenir aussi fort que toi !")
          							flw_332:
/*<332>*/ 							switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          							  case 0:
/*<331>*/ 								printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00070c08>Tu es au courant pour l'île de la\nDéesse ? Comment est‐ce qu'elle\na pu disparaître ?\n\nZelda est introuvable, et Hergo est\nparti. Mais qu'est‐ce qui se passe, ici ?")
/*<339>*/ 								scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          							  case 1:
          							}
          						  case 1:
/*<307>*/ 							printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000001>Je suis convaincu que toi,\ntu peux retrouver Zelda !")
          							goto flw_332
          						}
          					  case 1:
/*<312>*/ 						switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          						  case 0:
/*<498>*/ 							entrypoint_118_29();
          						  case 1:
/*<313>*/ 							printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012><0x30001:0x><heroname> !\nTu n'as toujours pas retrouvé Nacia ?\n\n\n<0x10009:0x00000e10>Tu es sûr que tu la cherches\nsérieusement ?\n\n\n<0x10009:0x00000c00>Comment ? Tu l'as retrouvée ?\n\n\n\n<0x10009:0x00070a0b>Ah, quel soulagement !\nEt c'est grâce à toi, <heroname> !\n\n\nJe savais qu'on pouvait compter\nsur toi !")
/*<329>*/ 							story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
/*<497>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				  case 1:
/*<308>*/ 					switch (story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */]) {
          					  case 0:
/*<310>*/ 						printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0000000a>Va vite voir sa mère ! Elle habite dans\nune maison au bord de la rivière.\nElle doit t'attendre !")
          					  case 1:
/*<309>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000012><0x30001:0x><heroname> !\nTu n'as toujours pas retrouvé Nacia ?\n\n\n<0x10009:0x00000e10>Tu es sûr que tu la cherches\nsérieusement ?\n\n\n<0x10009:0x00000c00>Comment ? Tu l'as retrouvée ?\n\n\n\n<0x10009:0x00070a0b>Ah, quel soulagement !\nEt c'est grâce à toi, <heroname> !\n\n\nJe savais qu'on pouvait compter\nsur toi !")
/*<311>*/ 						story_flags[735 /* us: 805A9B27 0x80, jp: 805ACDA7 0x80 */] = true;
          					}
          				}
          			  case 1:
/*<328>*/ 				switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          				  case 0:
/*<327>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070801>Ah, <heroname> ! C'est affreux,\nl'île de la Déesse a disparu.\n\n\n<0x10009:0x00000800>Et la petite Nacia aussi.\n\n\n\n<0x10009:0x00000e00>Zelda est introuvable et Hergo a\ndisparu. Mais qu'est‐ce qui se passe ?\n\n\n<0x10009:0x00070800>Je vais les chercher de mon côté, alors\nfais‐en autant, <heroname>.")
/*<338>*/ 					scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          				  case 1:
/*<304>*/ 					switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          					  case 0:
/*<305>*/ 						printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000012><0x30001:0x><heroname> !\nTu n'as toujours pas trouvé\nNacia ?\n\n<0x10009:0x00000e10>Tu la cherches vraiment ?\nTu ne te dis pas que ça peut\nattendre plus tard, quand même ?\n\n<0x10009:0x00070200>Je fais tout ce que je peux pour\nla retrouver, alors je compte\nsur toi pour en faire autant !")
          					  case 1:
/*<301>*/ 						switch (zone_temp_flags[7 /* 0x1 80 */]) {
          						  case 0:
/*<303>*/ 							printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00001701>Je vais chercher de mon côté !\nVa voir sur la grand‐place,\n<heroname> !\n\n<0x10009:0x00081700>Le garçon qui jouait avec elle hier doit\nêtre là‐bas.")
          						  case 1:
/*< 26>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000001>Tiens, <heroname> ! Tu penses\nque tu pourras bientôt retrouver\nZelda ?\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10> Je vois. Courage !\nTu peux y arriver !\n\n\n<0x10009:0x00070200>Au fait, tout à l'heure, j'ai vu la mère\nde Nacia se diriger vers le temple.\n\n\n<0x10009:0x00081700>Je me demande ce qu'elle avait...")
/*< 30>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00200508>Comment ? Nacia a disparu ?!\n\n\n\n<0x10009:0x00070800>Mais c'est affreux ! Moi aussi\nje vais la chercher ! <0x30001:0x><heroname>,\ninterroge tous les gens que tu\npeux pour retrouver sa trace !")
/*<302>*/ 							zone_temp_flags[7 /* 0x1 80 */] = true;
          						}
          					}
          				}
          			}
          		  case 1:
/*<326>*/ 			switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          			  case 0:
/*<325>*/ 				printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070801>Ah, <heroname> ! C'est affreux,\nl'île de la Déesse a disparu.\n\n\n<0x10009:0x00000800>Et la petite Nacia aussi.\n\n\n\n<0x10009:0x00000e00>Zelda est introuvable et Hergo a\ndisparu. Mais qu'est‐ce qui se passe ?\n\n\n<0x10009:0x00070800>Je vais les chercher de mon côté, alors\nfais‐en autant, <heroname>.")
/*<337>*/ 				scene_flags[0 'Skyloft'][31 /* 0x2 80 */] = true;
          			  case 1:
/*< 41>*/ 				printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Tiens, <heroname> ! Tu penses\nque tu pourras bientôt retrouver\nZelda ?\n\n<pause 10>.<pause 10>.<pause 10>.<pause 10> Je vois... Bon courage !\n\n\n\nAu fait, j'ai vu la mère de Nacia\nse diriger vers l'entrée du temple.\nJe me demande ce qu'elle a.\n\n[1-]Qui ça ?[2-]Je sais !")
/*< 42>*/ 				switch (choice(2)) {
          				  case 0:
/*< 43>*/ 					printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000005>Tu sais bien, c'est cette femme qui vit\ndans une maison au bord de la rivière\navec sa fille et son mari.\n\n<0x10009:0x00070800>Elle avait l'air très préoccupée.")
          				  case 1:
/*< 44>*/ 					printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00070806>Vraiment ? Tu aurais pu me le dire\nplus tôt !")
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
/*<459>*/ 			printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Salut, <heroname> !\nÇa fait longtemps que j'ai pas\nvu Hergo...\n\nJe me demande s'il est puni... Il a\npeut‐être fait une grosse bêtise, et\nil a plus le droit de sortir de l'école\nde chevalerie...")
          		  case 1:
/*<461>*/ 			printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000001>Salut, <heroname> !\nLatruche m'a montré une <color red<technique\nsecrète avec le filet à papillons >coloroff>!\n\nLe truc, c'est de bouger le filet à\nl'horizontale plutôt qu'à la verticale !\n\n\nEt puis il a dit aussi qu'il fallait\ns'approcher des insectes touuuuut\ndoucement et donner un coup sec\navec le filet !")
          		}
          	  case 1:
/*<462>*/ 		switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          		  case 0:
/*<463>*/ 			printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000001>Salut, <heroname> !\n\n\n\nQuoi ? La<color blue< truie forte>coloroff><0x10006:0xfbcd>...?<0x10006:0x00cd> <pause 20>Qu'est‐ce que\ntu veux faire avec ça ?")
          		  case 1:
/*<458>*/ 			switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          			  case 0:
          				goto flw_460
          			  case 1:
/*<448>*/ 				switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          				  case 0:
/*<449>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Hé, <heroname> !\nRegarde la tour de lumière !\n\n\nY a un rayon laser qui en sort !\nC'est trop cool !")
          				  case 1:
/*<457>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
          						flw_454:
/*<454>*/ 						printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Salut, <heroname> !\nC'est vrai qu'on peut attraper autre\nchose que des insectes avec un <color red<filet\nà papillons>coloroff> ?\nC'est le monsieur de l'atelier de\nrénovation qu'a dit qu'on pouvait\nattraper des trucs pas banals.")
          					  case 1:
/*<455>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<456>*/ 							printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Salut, <heroname> !\n\n\n\nQuoi ? Les <color red<paroles>coloroff> de la chanson que\nchantait Zelda ?\n\n\nC'est quoi les <color red<paroles>coloroff> ? Ça se mange ?")
          						  case 1:
/*<453>*/ 							switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          							  case 0:
          								goto flw_454
          							  case 1:
/*<452>*/ 								printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000001>Moi aussi j'irai à la boutique de Terry\nacheter le filet à papillons !\n\n\nEt je le ferai agrandir à l'atelier\nde rénovation, ouais !")
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
/*< 54>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000001>Ce monsieur, il est pas méchant !\n\n\n\nQuand ze suis presque tombée\nde la falaise, il m'a rattrapée !\n\n\nIl m'a appris que c'était danzereux\nde sortir dehors la nuit.\n\n\nDis à ma maman que ze rentrerai\nquand il fera zour !")
          	  case 1:
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000006>Qu'est‐ce que tu as, Monsieur ?\nPourquoi tu fais zette tête ?\nIl y a eu quelque chose ?")
          	}
          }

          void entrypoint_118_29() {
/*<496>*/ 	start()
/*<413>*/ 	switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          	  case 0:
/*<412>*/ 		switch (story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */]) {
          		  case 0:
/*<417>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000001>La nuit, je m'entraîne pour\ndevenir aussi fort que toi !\nC'est vraiment dur... Tu es tellement\nformidable, <heroname>...")
          			flw_330:
/*<330>*/ 			zone_temp_flags[7 /* 0x1 80 */] = true;
          		  case 1:
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 415, 'param3': 31}
/*<415>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000001>Salut, <heroname> !\nTu as retrouvé la piste de Zelda ?\n\n\nEn fait... j'aimerais tellement devenir\ncomme toi que je me suis mis à\nm'entraîner <color red<nuitamment>coloroff>...\n\n<pause 5>.<pause 5>.<pause 5>.<pause 10> Oh ! <0x10009:0x00000a06>Surtout, ne viens pas me voir\n<color red<dans ma chambre>coloroff> la nuit, j'aurais\ntrop honte !")
/*<416>*/ 			story_flags[836 /* us: 805A9B32 0x10, jp: 805ACDB2 0x10 */] = true;
          			goto flw_330
          		}
          	  case 1:
/*<501>*/ 		switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          		  case 0:
          			flw_505:
/*<505>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000001>Salut <heroname> !\nTu as du nouveau à propos de Zelda ?\nJ'espère qu'elle reviendra bientôt !")
          			goto flw_330
          		  case 1:
/*<500>*/ 			switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          			  case 0:
/*<504>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000811>Ah, <heroname> !\nLa tour de lumière émet un rayon\nlumineux ! C'est la première fois\nque je vois ça !")
          			  case 1:
/*<507>*/ 				switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          				  case 0:
          					goto flw_505
          				  case 1:
/*<494>*/ 					switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          					  case 0:
/*<503>*/ 						printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00070a0b>Salut <heroname> !\n\n\n\n<0x10009:0x0000ff05><color red<Deux grandes ailes>coloroff>...?\nLe vent souffle toujours très fort à\nCélesbourg alors il y a beaucoup de\nchoses qui ressemblent à des ailes.")
          					  case 1:
/*<495>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<502>*/ 							printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00070a0b>Salut <heroname> !\n\n\n\n<0x10009:0x0000ff08>Comment ? Le <color red<Chant de la Déesse>coloroff>...?<pause 30>\nC'est la chanson que Zelda chantait\nsouvent, c'est ça ?\n\nJe ne connais pas les paroles mais\nje suis sûr que monsieur le directeur\ndevrait pouvoir t'aider.")
          						  case 1:
/*<314>*/ 							printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0000000b><0x30001:0x><heroname> ! Tu as vu comme la\nmère de Nacia était contente ?\nTout est bien qui finit bien !")
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
/*<474>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001><heroname> !\n<pause 30>Quoi ?! Le monsieur, il est devenu\nhumain ?!\n\n<0x10006:0xfbcd>......<0x10006:0x00cd>\nMoi, ze le préférais quand\nil avait des ailes...")
          	  case 1:
/*< 68>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Ah, c'est toi, <heroname> !\n\n\n\nLe monsieur de l'autre zour, il m'a\ndit qu'il cherchait plein de gratitude.\nZ'espère que ze pourrai bientôt zouer\navec lui !")
          	}
          }

          void entrypoint_118_99() {
/*<506>*/ 	start()
/*<293>*/ 	switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          	  case 0:
          	  case 1:
/*<247>*/ 		{'type': 'type3', 'subType': 1, 'param1': 90, 'param2': 0, 'next': 244, 'param3': 51}
/*<244>*/ 		printf(/* textboxtype: 2, unk: 0, line: 112 */ "")
/*<245>*/ 		switch (choice(2)) {
          		  case 0:
/*<248>*/ 			story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<249>*/ 			story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<250>*/ 			story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<251>*/ 			story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<252>*/ 			story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<253>*/ 			story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<378>*/ 			open_dowsing_wheel(13)
/*<380>*/ 			printf(/* textboxtype: 2, unk: 0, line: 115 */ "")
/*<379>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          			flw_254:
/*<254>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          		  case 1:
/*<246>*/ 			printf(/* textboxtype: 2, unk: 0, line: 116 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai annulé l'ajout de cet objet\nà la liste des cibles à <sound 4>détecter.")
          			goto flw_254
          		}
          	}
          }

          void entrypoint_118_13() {
/*< 71>*/ 	start()
/*< 84>*/ 	switch (story_flags[324 /* us: 805A9AFF 0x04, jp: 805ACD7F 0x04 */]) {
          	  case 0:
/*< 85>*/ 		printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00000013>Ouaaaah !\nMais c'est le vieux robot de Dorco !")
/*<189>*/ 		make_actor_do_something(1, 0)
/*< 87>*/ 		printf(/* textboxtype: 1, unk: 0, line: 93 */ "Ça alors...\n\n\n\n<pause 20>J'en crois pas mes yeux !<pause 40>\nC'est l'<color red<hélice du moulin >coloroff>qui était\ntombée sous les nuages ?!\n\n<0x10009:0x000c0c00>Alors c'était pas des bobards ce qu'il\nracontait, le grand‐père de Dorco ?\n\n\nC'est pas possible, il doit y avoir une\nembrouille quelque part. Enfin, peu\nimporte, je vais réparer ça...")
/*<182>*/ 		set_camera(6, 0)
/*< 88>*/ 		printf(/* textboxtype: 1, unk: 0, line: 94 */ "Alors, ça, ça va là.\nJe fixe ça comme ça...")
/*<183>*/ 		{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 256, 'next': 184, 'param3': 15}
/*<184>*/ 		{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 209, 'param3': 15}
/*<209>*/ 		story_flags[661 /* us: 805A9B1F 0x08, jp: 805ACD9F 0x08 */] = true;
/*<186>*/ 		wait_frames(15)
/*<190>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 256, 'next': 185, 'param3': 13}
/*<185>*/ 		set_camera(7, 0)
/*<194>*/ 		wait_frames(30)
/*< 89>*/ 		printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x000a010e>Fiou !")
/*<188>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 187, 'param3': 17}
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x000c0c00>Et voilà, c'est réparé !\nSi tu as de quoi faire tourner l'hélice,\ntu pourras faire pivoter le moulin !")
/*<210>*/ 		printf(/* textboxtype: 1, unk: 2, line: 97 */ "<0x10009:0x00000100><0x10008:0xffcd>CHÉRI !\nCHÉRI ?")
/*<297>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00050714>Ah, j'avais oublié !\nMa femme m'a demandé de réparer\nles étagères à la maison !\n\nElle est toujours en train de chercher\nquelqu'un...")
/*< 91>*/ 			printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x000c0c00>Bon, ben quand faut y aller...\nAllez, <heroname>, à plus !")
          			flw_192:
/*<192>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 191, 'param3': 17}
/*<191>*/ 			{'type': 'type3', 'subType': 2, 'param1': 31, 'param2': 0, 'next': 193, 'param3': 14}
/*<193>*/ 			story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */] = true;
/*<294>*/ 			story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<211>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<295>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00050714>Ah, zut ! Je devrais être en train\nde chercher Nacia !")
/*<296>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x000c0c00>Allez, <heroname>, à plus !\nToi aussi aide‐nous à chercher Nacia !\nEt si tu la trouves, fais‐nous signe !")
          			goto flw_192
          		}
          	  case 1:
/*< 73>*/ 		switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x00000005>Tout le monde sait qu'il y a rien\nsous les nuages ! Alors comment\non pourrait en ramener des trucs ?\n\nPourtant, <color blue<Dorco>coloroff> y croit dur comme\nfer et il garde précieusement la\ncarcasse de ce robot.")
          		  case 1:
/*<291>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<205>*/ 				printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Salut, <heroname> !\nMerci d'avoir retrouvé Nacia !\n\n\nIl fait beau aujourd'hui,\ntu trouves pas ?\n\n\nPar une si belle journée, j'irais bien\nprendre un verre à la Citrouille\nperchée.\n\nMais ma femme veut que je répare\nles étagères...\n\n\nAaah... J'ai pas envie...")
          			  case 1:
/*<292>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0000000e>Salut, <heroname> !\nNacia est toujours pas\nrentrée !\n\nMoi aussi, je commence\nà me faire un peu de souci !\n\n\nAide‐nous à la chercher !")
          			}
          		}
          	}
          }

          void entrypoint_118_14() {
/*< 80>*/ 	start()
/*< 82>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 83>*/ 		printf(/* textboxtype: 1, unk: 0, line: 117 */ "Aah... Elle est si belle !\nJe ferais n'importe quoi pour Fay...")
          	  case 1:
/*< 81>*/ 		printf(/* textboxtype: 1, unk: 0, line: 118 */ ".<pause 5>.<pause 5>.")
          	}
          }

          void entrypoint_118_15() {
/*< 92>*/ 	start()
/*< 93>*/ 	printf(/* textboxtype: 1, unk: 0, line: 153 */ "Une présence inquiétante se\nfait sentir derrière la porte.")
          }

          void entrypoint_118_16() {
/*< 95>*/ 	start()
/*<102>*/ 	switch (story_flags[373 /* us: 805A9B02 0x08, jp: 805ACD82 0x08 */]) {
          	  case 0:
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00010701>Reviens me voir au marché couvert\nsi tu en as l'occasion !\n\n\nJe te prédirai ton avenir à prix d'ami !")
          	  case 1:
/*<101>*/ 		switch (story_flags[372 /* us: 805A9B02 0x04, jp: 805ACD82 0x04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x0010070d>Ooh...!\n\n\n\nMais oui, c'est ça !\nElle est absolument identique à mon\nancienne boule de cristal !")
/*<256>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 105, 'param3': 17}
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00000700>Woooooh ! Je sens une grande vitalité\nenvahir tout mon corps !\n\n\nJe vais pouvoir reprendre mes\nprédictions !\n\n\nReviens me voir au marché couvert si\ntu en as l'occasion !\n\n\nJe te prédirai ton avenir à prix d'ami !")
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
/*<103>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Mais que fais‐tu ? Pars vite à\nla recherche de ma nouvelle\nboule de cristal !")
          				  case 1:
/*<214>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1799, 'next': 213, 'param3': 13}
/*<213>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "Mais que fais‐tu ? Pars vite à\nla recherche de ma nouvelle\nboule de cristal !")
/*<242>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 215, 'param3': 51}
/*<215>*/ 					printf(/* textboxtype: 2, unk: 0, line: 110 */ "La <color red<boule de cristal >coloroff>que recherche\ncette personne ne figure pas parmi\nles cibles à <sound 4><color red<détecter>coloroff>.\n\nVoulez‐vous rajouter la <color red<boule de cristal\n>coloroff>à la liste des cibles à <sound 4><color red<détecter>coloroff> ?\n[1-]S'il te plaît[2]Pas\nmaintenant")
/*<216>*/ 					switch (choice(2)) {
          					  case 0:
/*<382>*/ 						story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = true;
/*<221>*/ 						story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<220>*/ 						story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<218>*/ 						story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<219>*/ 						story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<222>*/ 						story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<384>*/ 						open_dowsing_wheel(14)
/*<383>*/ 						printf(/* textboxtype: 2, unk: 0, line: 113 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nJ'ai réglé la <color red<<sound 4>détection>coloroff> pour réagir à la\n<color red<boule de cristal >coloroff>que recherche cette\npersonne.")
          						flw_241:
/*<241>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 2, unk: 0, line: 116 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai annulé l'ajout de cet objet\nà la liste des cibles à <sound 4>détecter.")
          						goto flw_241
          					}
          				}
          			  case 1:
/*<100>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 122, 'param3': 31}
/*<122>*/ 				printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000c100f>Ne te préoccupe plus de moi...\nLaisse‐moi à mon triste sort...\n\n\nMaintenant que ma boule de cristal\nest brisée, je ne peux plus prédire\nton avenir...\n\nJ'ai l'impression qu'à l'image de ma\nboule de cristal brisée, mes <0x10006:0xfccd>grands\nyeux ronds<0x10006:0x00cd> sont troublés.\n\n<pause 30>Aah... Si seulement j'avais une nouvelle\nboule de cristal...")
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1798, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 125 */ "Mais dis‐moi. J'ai entendu dire que tu\navais retrouvé une partie du moulin qui\nétait tombée dans le monde d'en bas.\n\nCette boule à présent brisée vient aussi\nd'en bas. C'est le grand‐père du gérant\nde l'atelier de rénovation qui l'avait\ntrouvée avant de me la céder.\nIl y a peut‐être d'autres boules sous les\nnuages. Pourrais‐tu essayer de m'en\ntrouver une nouvelle ?\n[1-]D'accord[2]Non")
/*< 96>*/ 				switch (choice(2)) {
          				  case 0:
/*<255>*/ 					{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 1802, 'next': 97, 'param3': 13}
/*< 97>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "Ça me fait plaisir d'entendre ça !\nJe compte sur toi !\n\n\nLe robot de l'atelier de rénovation\naurait trouvé la boule de cristal\nsur un <color red<bâtiment au sommet d'une\nmontagne>coloroff>.")
/*<123>*/ 					{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 124, 'param3': 51}
/*<124>*/ 					printf(/* textboxtype: 2, unk: 0, line: 105 */ "Je peux ajouter la <color red<boule de cristal >coloroff>que\nrecherche cette personne à la liste des\ncibles que vous pouvez <color red<<sound 4>détecter>coloroff>.\n\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nDois‐je régler la <color red<détection>coloroff> pour réagir\nà la <color red<boule de cristal>coloroff> ?\n[1-]S'il te plaît[2]Pas encore")
/*<465>*/ 					switch (choice(2)) {
          					  case 0:
/*<466>*/ 						printf(/* textboxtype: 2, unk: 0, line: 106 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai enregistré la boule de cristal.")
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
/*<392>*/ 						printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x0001070b>Jeune homme, je compte sur toi !\nSans boule de cristal, je ne peux plus\nfaire de prédictions.\n\nEt je ne peux donc pas prédire\nton avenir.\n\n\nRamène‐moi vite une nouvelle boule\nde cristal !")
          					  case 1:
/*<467>*/ 						printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10012:0x00000005>Très bien, Maître.\nSi vous souhaitez régler la détection,\nparlez à nouveau à cette personne.")
          						goto flw_391
          					}
          				  case 1:
/*< 98>*/ 					printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10006:0xfccd>...<0x10006:0x00cd><0x10009:0x000c1009> Que ce monde est cruel<0x10006:0xfccd>...<0x10006:0x00cd>")
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
/*<480>*/ 				printf(/* textboxtype: 1, unk: 0, line: 150 */ "Enfin tout de même, la statue de la\nDéesse qui disparaît... C'est vraiment\nimpensable...\n\nJe n'aurais jamais cru que je verrais ça\nun jour !\n\n\nMais le directeur m'a expliqué que\nc'était un mal nécessaire pour que\ntu puisses sauver Zelda.\n\nSon sort repose entre tes mains !")
          			  case 1:
          				flw_173:
/*<173>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 36, 'next': 509, 'param3': 32}
/*<509>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 322, 'param3': 13}
/*<322>*/ 				printf(/* textboxtype: 1, unk: 0, line: 148 */ "Tiens, <heroname> !\nLe monde regorge encore de\nplantes inconnues. Je ne cesse\nd'être surpris.")
/*<174>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 36, 'next': 121, 'param3': 17}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x000e050a>Plus j'observe cette plante,\nplus je la trouve fascinante !\n\n\n<0x10009:0x00000500>Où donc se trouve la frontière\nentre le végétal et l'animal ?")
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
/*<275>*/ 					printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00000009>Hahaha ! Je savais que tu pourrais\nm'aider, <heroname> !\n\n\nJe compte sur toi !")
          					flw_229:
/*<229>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
          					  case 1:
/*<267>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 268, 'param3': 32}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 269, 'param3': 17}
/*<269>*/ 						wait_frames(15)
/*<230>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 231, 'param3': 50}
/*<231>*/ 						printf(/* textboxtype: 2, unk: 0, line: 111 */ "La <color red<plante>coloroff> que recherche cette\npersonne ne figure pas parmi\nles cibles à <sound 4><color red<détecter>coloroff>.\n\nVoulez‐vous la rajouter à la liste\ndes cibles à <sound 4><color red<détecter>coloroff> ?\n[1-]S'il te plaît[2]Pas\nmaintenant")
/*<232>*/ 						switch (choice(2)) {
          						  case 0:
/*<234>*/ 							story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = true;
/*<235>*/ 							story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<236>*/ 							story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<237>*/ 							story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<238>*/ 							story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<239>*/ 							story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<396>*/ 							open_dowsing_wheel(16)
/*<395>*/ 							printf(/* textboxtype: 2, unk: 0, line: 114 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nJ'ai réglé la <color red<<sound 4>détection>coloroff> pour réagir à la\n<color red<plante>coloroff> que recherche cette personne.")
          							flw_240:
/*<240>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          						  case 1:
/*<233>*/ 							printf(/* textboxtype: 2, unk: 0, line: 116 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai annulé l'ajout de cet objet\nà la liste des cibles à <sound 4>détecter.")
          							goto flw_240
          						}
          					}
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 142 */ "<0x10009:0x00000001>Alors, est‐ce que tes recherches d'une\nnouvelle espèce de plante avancent ?")
          					goto flw_229
          				}
          			  case 1:
/*<111>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<318>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<508>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 321, 'param3': 31}
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00000001>Ah, <heroname> ! Finalement, tu\nveux bien écouter ma requête ?\n\n\nJ'ai pour passe‐temps de collectionner\nles plantes rares.")
          						flw_118:
/*<118>*/ 						printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x00000000>Mais il semble que ma collection\ncontienne désormais tous les types\nde plantes que recèle ce village...\n\nJe me demandais donc s'il ne serait\npas possible de découvrir de nouvelles\nplantes quelque part.\n\n<0x10009:0x00090a0f>Alors ? Tu ne voudrais pas trouver\nune plante qui surprendrait tout le\nmonde ?\n\n[1-]Je vais\nessayer[2]Je n'ai pas\nle temps")
/*<132>*/ 						switch (choice(2)) {
          						  case 0:
/*<133>*/ 							printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000a0a03>Oho ! Je savais que toi, tu écouterais\nma requête, <heroname> !\n\n\nApporte‐moi une plante rare que\npersonne n'a jamais vue auparavant !")
/*<265>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 266, 'param3': 32}
/*<266>*/ 							{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 271, 'param3': 17}
/*<271>*/ 							wait_frames(15)
/*<134>*/ 							{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 272, 'param3': 51}
/*<272>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 135, 'param3': 50}
/*<135>*/ 							printf(/* textboxtype: 2, unk: 0, line: 108 */ "Je peux ajouter la <color red<plante>coloroff> que\nrecherche cette personne à la\nliste des cibles que vous pouvez\n<sound 4><color red<détecter>coloroff>.\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nDois‐je régler la <color red<détection>coloroff> pour réagir\nà la <color red<plante>coloroff> ?\n[1-]S'il te plaît[2]Pas encore")
/*<468>*/ 							switch (choice(2)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 2, unk: 0, line: 109 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai enregistré la plante.")
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
/*<470>*/ 								printf(/* textboxtype: 2, unk: 0, line: 107 */ "<0x10012:0x00000005>Très bien, Maître.\nSi vous souhaitez régler la détection,\nparlez à nouveau à cette personne.")
          								goto flw_136
          							}
          						  case 1:
/*<117>*/ 							printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x000a0a09>Hahaha ! Oui, tu as autre chose à faire.\nJe comprends.\n\n\nMais si tu cours toujours après la même\nchose, ça va te fatiguer.\n\n\nIl faut savoir souffler de temps en\ntemps. Ne l'oublie pas !")
          						}
          					  case 1:
/*<320>*/ 						story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */] = true;
/*<115>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 484, 'param3': 31}
/*<484>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<483>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 482, 'param3': 13}
/*<482>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "Enfin tout de même, la statue de la\nDéesse qui disparaît... C'est vraiment\nimpensable...\n\nJe n'aurais jamais cru que je verrais ça\nun jour !\n\n\nMais le directeur m'a expliqué que\nc'était un mal nécessaire pour que\ntu puisses sauver Zelda.\n\nSon sort repose entre tes mains !")
          							flw_116:
/*<116>*/ 							printf(/* textboxtype: 1, unk: 0, line: 137 */ "<0x10009:0x00000013>Ehem... Mais dis‐moi plutôt...\nVoudrais‐tu écouter ma requête ?\n\n\nComme tu le sais, je suis le plus\ngrand collectionneur de plantes\nde Célesbourg.\n\nEnfin, c'est moi‐même qui me suis\ndécerné ce titre...")
          							goto flw_118
          						  case 1:
/*<319>*/ 							printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x00000001>Tiens, <heroname> !\nAlors, as‐tu pu parler avec le grand\nNarisha ?\n\nJe vois... Tu as vraiment quelque chose\nde différent des autres.\n\n\nToi et ton célestrier vermeil, vous\ndevriez pouvoir vous en sortir.\n\n\nLe chemin sera encore long et semé\nd'embûches, mais tu ne dois pas baisser\nles bras !")
          							goto flw_116
          						}
          					}
          				  case 1:
/*<315>*/ 					switch (story_flags[736 /* us: 805A9B26 0x01, jp: 805ACDA6 0x01 */]) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x00000001><0x30001:0x><heroname> !\nAurais‐tu un peu de temps\npour écouter mes tourments ?\n[1-]Qu'est‐ce\nqu'il y a ?[2]Non,\ndésolé")
/*<129>*/ 						switch (choice(2)) {
          						  case 0:
/*<131>*/ 							printf(/* textboxtype: 1, unk: 0, line: 135 */ "Non, je t'en parlerai une autre fois !\nLa mère de Nacia m'a demandé de\nchercher sa fille disparue.\n\nSi tu as un peu de temps, toi aussi,\ncherche‐la.")
          						  case 1:
/*<130>*/ 							printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000009>Hahaha ! Allons, tu peux bien écouter\nce que j'ai à te dire !")
          						}
          					  case 1:
/*<487>*/ 						switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          						  case 0:
/*<486>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 13}
/*<485>*/ 							printf(/* textboxtype: 1, unk: 0, line: 150 */ "Enfin tout de même, la statue de la\nDéesse qui disparaît... C'est vraiment\nimpensable...\n\nJe n'aurais jamais cru que je verrais ça\nun jour !\n\n\nMais le directeur m'a expliqué que\nc'était un mal nécessaire pour que\ntu puisses sauver Zelda.\n\nSon sort repose entre tes mains !")
          						  case 1:
/*<316>*/ 							printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x00000001>Tiens, <heroname> !\nAlors, as‐tu pu parler avec le grand\nNarisha ?\n\nJe vois... Tu as vraiment quelque chose\nde différent des autres.\n\n\nToi et ton célestrier vermeil, vous\ndevriez pouvoir vous en sortir.\n\n\nLe chemin sera encore long et semé\nd'embûches, mais tu ne dois pas baisser\nles bras !")
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
/*<164>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "Et voilà ! Livraison de l'<color red<hélice du\nmoulin>coloroff> effectuée !")
/*<108>*/ 	make_actor_do_something(0, 0)
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 121 */ "Si t'as encore besoin de moi,\nn'hésite pas à m'appeler !\n\n\nPour Fay, j'irais jusqu'au bout\ndu monde !")
          }

          void entrypoint_118_19() {
/*<138>*/ 	start()
/*<139>*/ 	printf(/* textboxtype: 1, unk: 0, line: 151 */ "<0x10009:0x00090011>Rutabaga !\nQuand on me regarde fixement\ncomme ça, ça me fait rougir\ncomme une tomate !")
          }

          void entrypoint_118_20() {
/*<140>*/ 	start()
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 119 */ "Et voilà ! Une belle boule de\ncristal scintillante, une !")
/*<127>*/ 	make_actor_do_something(0, 0)
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 121 */ "Si t'as encore besoin de moi,\nn'hésite pas à m'appeler !\n\n\nPour Fay, j'irais jusqu'au bout\ndu monde !")
/*<128>*/ 	zone_temp_flags[2 /* 0x1 04 */] = true;
          }

          void entrypoint_118_04() {
          	start()
/*< 12>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 13, 'param3': 32}
/*< 13>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 145, 'param3': 32}
/*<145>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5386, 'param2': 3072, 'next': 16, 'param3': 13}
/*< 16>*/ 	set_camera(1, 0)
/*< 14>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 8, 'next': 9, 'param3': 16}
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x15090d11>Nacia ! Nacia !\nMais où est‐ce qu'elle est passée ?")
/*<  8>*/ 	set_camera(2, 0)
/*<146>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5387, 'param2': 3328, 'next': 1, 'param3': 13}
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "... Ah, je me demande vraiment où\nma petite Nacia a bien pu aller...\n\n\nQu'est‐ce que je vais faire si elle a\nvraiment été enlevée ?!")
/*< 15>*/ 	story_flags[299 /* us: 805A9AFD 0x20, jp: 805ACD7D 0x20 */] = true;
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 21, 'param2': 100, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x150e0d11>Ah ! <0x30001:0x><heroname> !")
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
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 123 */ "Si t'as encore besoin de moi,\nn'hésite pas à m'appeler !")
          	  case 1:
/*<149>*/ 		printf(/* textboxtype: 1, unk: 0, line: 122 */ "Le drôle de Tikwi est arrivé\nà destination !")
/*<167>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          	}
          }

