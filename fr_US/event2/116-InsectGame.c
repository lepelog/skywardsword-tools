          void entrypoint_116_01() {
          	start()
/*< 13>*/ 	switch (context_related4(1)) {
          	  case 0:
/*< 24>*/ 		switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          		  case 0:
/*< 25>*/ 			switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          			  case 0:
          				flw_5:
/*<  5>*/ 				switch (story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */]) {
          				  case 0:
/*< 57>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 115, 'param3': 12}
/*<115>*/ 					check_item_flag(71, 1)
/*<114>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 64}) {
          					  case 0:
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x00000001>Alors, prêt à commencer la chasse?\nPeut-être que tu vas attraper la\npiqûre, qui sait? Hihi.\n\nJe sens que tu vas bien t'en sortir.\n<color red<20 rubis>coloroff> pour le mode Débutant,\n<color red<50 rubis>coloroff> pour le mode Expert.\nQu'est-ce que tu choisis?\n[1-]Débutant[2-]Expert[3]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030100>J'te chronomètre! Si tu fais un temps\nrespectable, t'auras une récompense!\n\n\n<0x10009:0x00000100>En mode Débutant, faut attraper un\ninsecte de chacune des cinq espèces\nindiquées à l'écran.\nAttention, t'es prêt?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de\nrubis. Et t'imagine pas que je vais te\nfaire un prix parce qu'on va à l'école\nensemble! Pas fou, le taon!")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Tu crois que tu peux te lancer dans la\nchasse aux insectes avec si peu de\n<color red<cœurs>coloroff>... on voit bien que t'as aucune\nidée de ce qui t'attend!\n<0x10009:0x00000100>Reviens me voir quand t'auras plus\nde cœurs!")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00030100>J'te chronomètre! Si tu fais un temps\nrespectable, t'auras une récompense!\n\n\n<0x10009:0x00000100>En mode Expert, faut attraper\nun total de dix insectes, des huit\nespèces indiquées à l'écran.\nAttention, t'es prêt?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de\nrubis. Et t'imagine pas que je vais te\nfaire un prix parce qu'on va à l'école\nensemble! Pas fou, le taon!")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Eh ben, faut croire que je m'étais\ntrompé sur toi. Tu mérites pas mes\ninsectes!")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color red<filet>coloroff>?\nC'est pas sérieux!\n\n\n<0x10009:0x00000500>Tu n'as évidemment jamais ressenti la\npassion, les frissons et l'émotion d'une\nvraie chasse aux insectes. Tu fais\nfranchement pitié, tu sais?\n<0x10009:0x00030100>Bon, mieux vaut tard que jamais...\nY en a dans la <color red<boutique de Beedle>coloroff>,\nalors va t'en chercher un et\nreviens vite!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Tiens, <heroname>!\nJe suis surpris de te voir ici, toi!\n\n\n<0x10009:0x00120600>J'me suis perdu dans le brouillard\net j'ai atterri ici, sur cette île.\n\n\n<0x10009:0x00000100>J'ai découvert que c'est un habitat\nidéal pour toutes sortes d'insectes!\n\n\n<0x10009:0x00030104>J'ai donc décidé d'y vivre mon rêve.\nJe vais élever un tas d'insectes ici!\nComme ça, je pourrai attraper des\ninsectes à volonté!\n<0x10009:0x00000100>Dis donc... Aurais-tu envie de faire\nune petite partie de chasse? Je peux\nt'arranger ça, si tu veux!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 1, line: 1 */ "<0x10009:0x00000100>Tu vas aimer ça! J'ai élaboré deux\nniveaux de difficulté : <color red<Débutant>coloroff>, juste\npour se détendre, et <color red<Expert>coloroff>, pour les\nentomologistes comme moi.\n<0x10009:0x00030100>Comme tu n'as pas l'habitude, pour toi\nc'est <color red<20 rubis >coloroff>en mode Débutant,\net <color red<50 rubis>coloroff> en mode Expert.\n[1-]Débutant[2-]Expert[3]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color red<filet>coloroff>?\nC'est pas sérieux!\n\n\n<0x10009:0x00000500>Tu n'as évidemment jamais ressenti la\npassion, les frissons et l'émotion d'une\nvraie chasse aux insectes. Tu fais\nfranchement pitié, tu sais?\n<0x10009:0x00030100>Bon, mieux vaut tard que jamais...\nY en a dans la <color red<boutique de Beedle>coloroff>,\nalors va t'en chercher un et\nreviens vite!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000004>Héhéhé, t'es venu chercher le\n<color blue<Golofa Demonicus Rex>coloroff>?\n[1-]Évidemment![2]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Les affaires sont les affaires!\nVa falloir me donner <color red<10 rubis>coloroff>.\n[1-]Les voilà![2]Pas\nquestion")
/*< 53>*/ 						switch (choice(2)) {
          						  case 0:
/*< 38>*/ 							switch (has_rupees(10)) {
          							  case 0:
/*<105>*/ 								switch (context_related2(0)) {
          								  case 0:
/*<118>*/ 									check_item_flag(71, 1)
/*<117>*/ 									switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 66}) {
          									  case 0:
/*< 40>*/ 										rupees += -10;
/*< 41>*/ 										printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00040100>Tu vas devoir attraper dix insectes\nde mon choix.\n\n\n<0x10009:0x00030100>Je te chronomètre. Tu as <color red<trois minutes>coloroff>\npour t'exécuter.\n\n\n<0x10009:0x00000100>Si tu réussis, je te donnerai le\n<color blue<Golofa Demonicus Rex>coloroff>.\n\n\nC'est beau? C'est parti!\n")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130807>Minute, papillon! T'as toujours pas\nde filet, j'te ferais remarquer.\nT'es pas équipé pour faire une chasse\naux insectes.\n<0x10009:0x00040100>Va acheter un <color red<filet>coloroff>,\net on en reparlera!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Tu crois que tu peux te lancer dans la\nchasse aux insectes avec si peu de\n<color red<cœurs>coloroff>... on voit bien que t'as aucune\nidée de ce qui t'attend!\n<0x10009:0x00000100>Reviens me voir quand t'auras plus\nde cœurs!")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de\nrubis. Et t'imagine pas que je vais te\nfaire un prix parce qu'on va à l'école\nensemble! Pas fou, le taon!")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Faut que j'arrête de te regarder, tu\nme donnes le <color red<cafard>coloroff>!\n\n\n<0x10009:0x00000100>Et j'en ai déjà suffisamment dans\nma collection! Héhéhé! <0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000004>Héhéhé, salut <heroname>!\nLa vie est belle?\n\n\n<0x10009:0x00000100>Pourquoi j'ai le sourire fendu\njusqu'aux oreilles, tu dis?\nHéhé, t'as remarqué, hein!\n\nJe vais te le dire : j'ai trouvé l'insecte\nle plus rare du monde!\n[1-]Raconte![2-]Puis après?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>Ah ah! Je vois que j'ai piqué ta\ncuriosité!\n\n\nEt bien, tu seras pas déçu...<pause 30>\n<0x10009:0x00130100>J'ai réussi à dénicher le légendaire\n<color blue<Golofa Demonicus Rex>coloroff>!\n\n<0x10009:0x00030100>Il n'en existe quasiment plus! C'est\nbien simple, c'est un miracle! Je n'ai\npas arrêté de sourire depuis que je\nl'ai trouvé. Je suis assez content!")
/*< 54>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010800>Comment ça, c'est l'insecte de Beedle?\nLe Beedle qui se promène toute la\njournée dans sa boutique volante?\n[1-]Rends‐le‐lui![2-]Pauvre Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Tu croyais vraiment que j'allais\navaler une histoire de la sorte? Pff!\n\n\n<0x10009:0x00130100>C'est moi qui l'ai trouvé, et je le garde!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd> Je sais bien que ce ne serait pas bien\ngentil de garder l'insecte préféré de\nquelqu'un d'autre, mais...\n\n<0x10009:0x00120100>Je peux pas me décider à te le\ndonner comme ça, pour rien... \nJe sais que j'devrais, mais...\n\n<0x10009:0x00000500>J'ai une idée!\n\n\n\n<0x10009:0x00000100>Prouve‐moi que tu es le plus grand\nchasseur d'insectes en réussissant\nun temps du tonnerre dans mon jeu,\net je te rendrai ma précieuse bibitte...\n<0x10009:0x00030100>Qu'est-ce que t'en dis quoi?\nTu relèves le défi?\n[1-]Allons‐y![2]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00120500>J'ai pas l'impression que tu réalises\nla valeur de cette petite bestiole...\n\n\n<0x10009:0x00000100>Le simple fait de l'avoir ici avec moi\nva faire grimper ma renommée en\nflèche parmi les chasseurs d'insectes!\nJe vais devenir célèbre!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00120515>On dirait que tu te crois vraiment\ntout permis, toi!")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Comment ça, t'as plus envie d'attraper\ndes insectes? Tu dis ça pour rire,\nj'espère?\n[1-]J'en ai\nassez.[2]Bien oui,\nvoyons.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120500>J'en reviens pas... À croire que le\ncharme des insectes te passe six pieds\nau‐dessus de la tête. T'as pas attrapé\nla piqûre, finalement...")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "J'en étais sûr! Les gars comme nous,\non aime ça la chasse aux insectes...\nen bibitte! Hihi!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Hmm, il me semble que tu prends\nbien trop de temps...\n\n\n\n<0x10009:0x00000100>Bon, ça suffit! Désolé, mais le temps\nlimite est écoulé!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00131000>Tout doux, tout doux! Faudrait que\ntu fasses plus attention. Tu as failli\ny passer!\n\n<0x10009:0x00030100>N'oublie pas que certains insectes se\ndéfendent! Si tu continues comme ça,\nje donne pas cher de ta peau! Désolé,\nmais je dois arrêter la partie.")
/*<100>*/ 		make_actor_do_something(4, 0)
          	}
          }

          void entrypoint_116_02() {
/*<  8>*/ 	start()
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 	switch (story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */]) {
          	  case 0:
          		flw_9:
/*<  9>*/ 		switch (context_related4(0)) {
          		  case 0:
/*< 20>*/ 			switch (context_related4(2)) {
          			  case 0:
/*< 44>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 10, 'param3': 44}
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>C'est terminé! Avoue que tu as du\nchemin à faire.\n\n\n<0x10009:0x00000100>La prochaine fois, essaie de prendre\n<color red<moins de cinq minutes>coloroff>. Continue de\nt'entraîner.\n\n<0x10009:0x00030100>En passant, si t'as des insectes à me\nvendre, je suis preneur. Passe me\nvoir la nuit!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00120500>Tu devrais ouvrir ton cœur aux\ninsectes... Ce sont tes amis, tu sais.\n\n\n<0x10009:0x00000100>Reviens quand tu l'auras compris!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Désolé, pas de remboursements!\n\n\n\n<0x10009:0x00000100>Meilleure chance la prochaine fois!")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Héhéhé...\nT'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte!\nJe connais ça...\n<0x10009:0x00000500>Désolé, je rembourse pas! Va te\nrefaire une santé et repasse me voir!")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00120104>C'est terminé!\nBof, c'était pas si mal.\n\n\n<0x10009:0x00000100>Si tu sais à l'avance où les trouver,\ntu feras un meilleur temps! Essaie\nde mettre <color red<moins de trois minutes\n>coloroff>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030100>C'est bon. Je t'accorde une\nrécompense. Voilà <color red<80 rubis>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>C'est terminé! J'avoue que je ne\nm'attendais pas à bien mieux que ça\nde ta part.\n\n<0x10009:0x00000100>Un conseil : y a des insectes qui sont\nplus faciles à attraper dans certains\ncoins que dans d'autres, alors cherche\npartout, partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>La prochaine fois, essaie de mettre\n<color red<moins de trois minutes>coloroff>! Ah, et puis,\ntiens... Voici <color red<30 rubis >coloroff>pour toi!")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>C'est terminé! Le temps est écoulé.\nHé! Ta prestation... C'est pas piqué\ndes mouches!\n\n<0x10009:0x00000100>Tu vas peut-être te qualifier meilleur\nchasseur d'insectes, si ça continue!\nBien, après moi, c'est sûr. Mets <color red<moins\nde deux minutes >coloroff>la prochaine fois!\nTiens... Voici ton prix... Devine ce que\nc'est... Tu n'en reviendras pas... Hihi!\n<color red<Cinq>coloroff> insectes! T'es content, hein!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00000011>C'est terminé! Hé, bien. Tu t'en es\nbien tiré, dis donc. Je pense que tu\nas du potentiel.\n\n<0x10009:0x00120500>Mais ne t'enfle pas la tête pour autant.\nTu n'as pas encore mérité que je te\ndonne un seul de mes précieux insectes.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Donne ton maximum la prochaine fois\net essaie de finir en <color red<moins de deux\nminutes>coloroff>.\n\nTiens, pour cette fois, tu gagnes\n<color red<50 rubis>coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00130811>C'est terminé! Hein!? Mais...\nMais c'est totalement impensable!\n\n\n<0x10009:0x00000100>Je dois me rendre à l'évidence et\nadmettre que t'es le meilleur\nchasseur d'insectes du monde.\nJe m'incline, Monsieur.\n<0x10009:0x00040100>Tiens, voici ton prix. Des insectes,\névidemment, mais ce sont <color red<cinq>coloroff> insectes\nrares en... bibitte! Hihi.")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>C'est terminé! Le temps est écoulé!\nMais, c'est... C'est exceptionnel!\n\n\n<0x10009:0x00120100>Mais ne nous emportons point.\nCe n'était que le mode Débutant!\n\n\n<0x10009:0x00000100>Tente ta chance en mode Expert,\nla prochaine fois! Tiens, voici ton\nprix : <color red<cinq>coloroff> de mes insectes rares!")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			}
          		}
          	  case 1:
/*< 62>*/ 		switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          		  case 0:
/*< 63>*/ 			switch (context_related4(0)) {
          			  case 0:
/*< 73>*/ 				switch (context_related3(0)) {
          				  case 0:
          					flw_65:
/*< 65>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 64, 'param3': 44}
          					flw_64:
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000013>Ouf...\n\n\n\n<0x10009:0x00120500>Désolé, mais le <color blue<Golofa Demonicus Rex>coloroff>\nva rester encore un peu avec moi!\n\n\n<0x10009:0x00000100>Tu dois finir en moins de trois\nminutes! Bien, vas-y! Secoue-toi!")
/*< 66>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          				  case 1:
          					goto flw_64
          				  case 2:
          					goto flw_64
          				}
          			  case 1:
          				goto flw_65
          			  case 2:
          				flw_72:
/*< 72>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 71, 'param3': 44}
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "OK, c'est terminé!\n<0x10009:0x00000004>Héhéhé, je pensais pas que tu y\narriverais si facilement!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Très bien, chose promise, chose due.\nTu peux prendre le <color blue<Golofa Demonicus\nRex>coloroff>.\n\n<0x10009:0x00000100>Je dois l'avouer. Tu es vraiment un\nchampion. Pas besoin de me <color red<piquer\n>coloroff>une crise...\n\n<0x10009:0x00030100>... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00040500>Tu diras à Beedle que je m'excuse si\nje l'ai fait stresser.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

