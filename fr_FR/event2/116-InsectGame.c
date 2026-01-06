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
/*<  4>*/ 						printf(/* textboxtype: 1, unk: 1, line: 4 */ "<0x10009:0x00000001>Alors, prêt à te lancer ?\nTu m'as l'air d'une fine mouche,\ncomme moi !\n\nJe sens que tu vas bien t'en sortir.\n<color red<20 rubis>coloroff> pour le mode Débutant,\n<color red<50 rubis>coloroff> pour le mode Expert.\nTu choisis quoi ?\n[1-]Débutant[2-]Expert[3]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00030100>J'te chronomètre ! Si tu fais un temps\ncorrect, t'auras une récompense !\n\n\n<0x10009:0x00000100>En mode Débutant, faut attraper un\ninsecte de chacune des cinq espèces\nindiquées à l'écran.\nAttention, t'es prêt ?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de\nrubis. Et crois pas que je vais te faire\nun prix parce qu'on va à l'école\nensemble ! Pas folle, la guêpe !")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Si tu crois que tu peux te lancer dans\nla chasse aux insectes avec si peu de\n<color red<cœurs>coloroff>... on voit bien que t'as aucune\nidée des risques encourus !\n<0x10009:0x00000100>Reviens me voir quand t'auras plus\nde cœurs !")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00030100>J'te chronomètre ! Si tu fais un temps\ncorrect, t'auras une récompense !\n\n\n<0x10009:0x00000100>En mode Expert, faut attraper\nun total de dix insectes, des huit\nespèces indiquées à l'écran.\nAttention, t'es prêt ?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de\nrubis. Et crois pas que je vais te faire\nun prix parce qu'on va à l'école\nensemble ! Pas folle, la guêpe !")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Eh ben, faut croire que je m'étais\ntrompé sur toi. Tu mérites pas mes\ninsectes !")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color yellow<filet à papillons>coloroff> ?!\nC'est une blague ?!\n\n\n<0x10009:0x00000500>Mais tu viens d'une autre planète\nou quoi ? Tous les gens cool en ont un !\nTu me files le bourdon !\n\n<0x10009:0x00030100>Bon, mieux vaut tard que jamais...\nY en a dans la <color red<boutique de Terry>coloroff>,\nalors va vite t'en chercher un et\nramène‐toi !")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Tiens, <heroname> !\nÇa pour une coïncidence !\n\n\n<0x10009:0x00120600>J'me suis perdu dans le brouillard\net j'ai atterri ici...\n\n\n<0x10009:0x00000100>Figure‐toi que cette île est un\nhabitat idéal pour toutes sortes\nd'insectes !\n\n<0x10009:0x00030104>J'ai donc décidé de la peupler de tout\nun tas d'insectes ! Comme ça, je peux\nvivre pleinement ma passion et en\nattraper des tonnes.\n<0x10009:0x00000100>Mais dis donc, si ça se trouve tu dirais\npas non à une petite partie de chasse...\nJe peux t'arranger ça, tu sais !")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 1, unk: 1, line: 1 */ "<0x10009:0x00000100>Tu vas adorer ! J'ai élaboré deux\nniveaux de difficulté : <color red<Débutant>coloroff>, juste\npour se détendre, et <color red<Expert>coloroff>, pour les\nvrais amoureux des bébêtes...\n<0x10009:0x00030100>J'te fais le tarif « découverte » :\nc'est <color red<20 rubis >coloroff>en mode Débutant,\net <color red<50 rubis>coloroff> en mode Expert.\n[1-]Débutant[2-]Expert[3]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color yellow<filet à papillons>coloroff> ?!\nC'est une blague ?!\n\n\n<0x10009:0x00000500>Mais tu viens d'une autre planète\nou quoi ? Tous les gens cool en ont un !\nTu me files le bourdon !\n\n<0x10009:0x00030100>Bon, mieux vaut tard que jamais...\nY en a dans la <color red<boutique de Terry>coloroff>,\nalors va vite t'en chercher un et\nramène‐toi !")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000004>Héhéhé, t'es venu chercher le\n<color blue<Golofa Demonicus Rex >coloroff>?\n[1-]Évidemment ![2]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Les affaires sont les affaires !\nVa falloir me donner <color red<10 rubis>coloroff>.\n[1-]Les voilà ![2]Pas\nquestion")
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
/*< 41>*/ 										printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00040100>Tu vas devoir attraper dix insectes\nde mon choix.\n\n\n<0x10009:0x00030100>Je te chronomètre. Tu as <color red<trois minutes>coloroff>\npour t'exécuter.\n\n\n<0x10009:0x00000100>Si tu réussis, je te donnerai le\n<color blue<Golofa Demonicus Rex>coloroff>.\n\n\nAllez, c'est parti !")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130807>Minute, papillon !\nT'as toujours pas de filet, j'te signale.\nTu peux pas participer.\n\n<0x10009:0x00040100>Va acheter un <color yellow<filet à papillons>coloroff>,\net on en reparlera !")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120813>Si tu crois que tu peux te lancer dans\nla chasse aux insectes avec si peu de\n<color red<cœurs>coloroff>... on voit bien que t'as aucune\nidée des risques encourus !\n<0x10009:0x00000100>Reviens me voir quand t'auras plus\nde cœurs !")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de\nrubis. Et crois pas que je vais te faire\nun prix parce qu'on va à l'école\nensemble ! Pas folle, la guêpe !")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Faut que j'arrête de te regarder, tu\nme donnes le <color red<cafard>coloroff> !\n\n\n<0x10009:0x00000100>Et j'en ai déjà suffisamment dans\nma collection ! Héhéhé ! <0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000004>Héhéhé, salut <heroname> !\nLa vie est belle ?\n\n\n<0x10009:0x00000100>Pourquoi je souris d'un air béat ?\nHéhéhé, t'as remarqué, hein...\n\n\nJe vais te le dire. J'ai trouvé l'insecte\nle plus rare du monde !\n[1-]Raconte ![2-]Je m'en fiche")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>Ah ah ! Je vois que j'ai piqué ta\ncuriosité !\n\n\nEh bien, tu vas pas être déçu...<pause 30>\n<0x10009:0x00130100>J'ai réussi à dénicher le légendaire\n<color blue<Golofa Demonicus Rex>coloroff> !\n\n<0x10009:0x00030100>Il n'en existe quasiment plus !\nQuelle chance, c'est un vrai miracle ! \nJ'arrive pas à arrêter de sourire !")
/*< 54>*/ 						printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00010800>Comment ça, c'est l'insecte de Terry ?\nLe Terry qui se balade toute la journée\ndans sa boutique volante ?\n[1-]Rends‐le‐lui ![2-]Pauvre Terry...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Tu croyais vraiment que j'allais\ngober une histoire pareille ?\n\n\nMais quel faux jeton, celui‐là !\n<0x10009:0x00130100>C'est moi qui l'ai trouvé, il est à moi !")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd>\nC'est mal de prendre quelque chose\nqui ne nous appartient pas, c'est sûr...\n\n<0x10009:0x00120100>Mais je peux pas me résoudre à te le\ndonner comme ça, pour rien... \nJe sais que j'devrais, pourtant...\n\n<0x10009:0x00000500>J'ai une idée !\n\n\n\n<0x10009:0x00000100>Prouve‐moi que tu es le plus grand\nchasseur d'insectes qui soit, et je te\nrendrai ma précieuse bébête...\n\n<0x10009:0x00030100>T'en dis quoi ?\nTu relèves le défi ?\n[1-]Allons‐y ![2]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00120500>J'ai pas l'impression que tu réalises\nla valeur de cette petite bestiole...\n\n\n<0x10009:0x00000100>Le simple fait de l'avoir ici avec moi\nfait grimper ma renommée en flèche\nau sein de la communauté des chasseurs\nd'insectes !")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00120515>Dis donc, toi ! Tu te crois vraiment\ntout permis, à ce que je vois !")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Comment ça, t'as plus envie d'attraper\ndes insectes ? Tu rigoles, j'espère ?\n[1-]Pas du tout[2]Bien sûr !")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00120500>J'en reviens pas... À croire que le\ncharme des insectes te passe au‐dessus\nde la tête. T'es pas si fine mouche que\nça, en fin de compte.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 1, unk: 0, line: 11 */ "J'en étais sûr ! Les gars comme nous,\ndonnez‐leur des insectes et plus rien\nd'autre n'existe !")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Hmm, t'en mets, un temps...\n\n\n\n<0x10009:0x00000100>Allez, ça suffit ! Désolé, mais le temps\nlimite est écoulé !")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00131000>Houla, doucement ! T'as une araignée\nau plafond, ma parole ! T'étais à deux\ndoigts d'y passer !\n\n<0x10009:0x00030100>N'oublie pas que certains insectes se\ndéfendent ! Si tu continues comme ça,\nje donne pas cher de ta peau ! Désolé,\nmais je dois arrêter la partie.")
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
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>OK, c'est terminé.\nT'avoueras que c'était pas terrible !\n\n\n<0x10009:0x00000100>La prochaine fois, essaie de mettre\n<color red<moins de cinq minutes>coloroff>.\n\n\n<0x10009:0x00030100>Et si t'as des insectes à me vendre,\nje suis preneur, passe me voir pendant\nla nuit !")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00120500>Tu devrais ouvrir ton cœur aux\ninsectes... Ce sont tes amis, tu sais.\n\n\n<0x10009:0x00000100>Reviens quand tu l'auras compris !")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Désolé, je rembourse pas !\n\n\n\n<0x10009:0x00000100>Mais n'hésite pas à revenir ! Héhéhé.")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000004>Héhéhé...\nT'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte !\nJe connais ça...\n<0x10009:0x00000500>Désolé, je rembourse pas ! Va te\nrefaire une santé et repasse me voir !")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00120104>OK, c'est terminé.\nMouais, c'était pas trop mal.\n\n\n<0x10009:0x00000100>Si tu sais à l'avance où les trouver,\ntu feras un meilleur temps ! Essaye\nde mettre <color red<moins de trois minutes\n>coloroff>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00030100>T'as gagné mon argent de poche !\nVoilà <color red<80 rubis>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>OK, c'est terminé.\nLe temps que tu viens de faire,\nc'est bien le strict minimum.\n\n<0x10009:0x00000100>Un conseil : y a des insectes qui sont\nplus faciles à attraper dans certains\ncoins que dans d'autres, alors va bien\nchercher partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>La prochaine fois, essaie de mettre\n<color red<moins de trois minutes>coloroff> !\nTiens, voilà <color red<30 rubis >coloroff>pour toi !")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>OK, c'est terminé !\nAlors ça, c'est un score pas piqué des\nhannetons !\n\n<0x10009:0x00000100>Je sens qu'tu vas pas tarder à devenir\nle meilleur chasseur d'insectes après\nmoi... Essaie de mettre <color red<moins de deux\nminutes >coloroff>la prochaine fois !\nVoilà ton prix, je suis sûr que rien\nne pourrait te faire plus plaisir :\n<color red<cinq>coloroff> insectes !")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00000011>OK, c'est terminé.\nHé, mais c'est pas mal, dis‐moi !\nJe pense que tu as du potentiel.\n\n<0x10009:0x00120500>Mais tu ne mérites pas encore que\nje te donne un seul de mes insectes\nadorés !")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 1, unk: 0, line: 26 */ "Fais de ton mieux la prochaine fois,\nessaie de finir en <color red<moins de deux\nminutes>coloroff>.\n\nTiens, pour cette fois, tu gagnes\n<color red<50 rubis >coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00130811>OK, c'est terminé.\nMais... Mais c'est totalement\nimpensable !\n\n<0x10009:0x00000100>Je vais pas me voiler la face, je dois\nbien admettre que t'es le meilleur\nchasseur d'insectes du monde.\n\n<0x10009:0x00040100>Tiens, voilà ton prix. Des insectes,\névidemment, mais ce sont <color red<cinq>coloroff> insectes\nsacrément rares !")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>OK, c'est terminé !\nExceptionnel !\n\n\n<0x10009:0x00120100>Mais attention, ce n'était que\nle mode Débutant !\n\n\n<0x10009:0x00000100>Tente ta chance en mode Expert,\nla prochaine fois ! Tiens, voilà ton\nprix : <color red<cinq>coloroff> de mes insectes adorés !")
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
/*< 64>*/ 					printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000013>Ouf...\n\n\n\n<0x10009:0x00120500>Désolé, mais le <color blue<Golofa Demonicus Rex>coloroff>\nva rester encore un peu avec moi !\n\n\n<0x10009:0x00000100>Tu dois finir en moins de trois\nminutes !\nEh ben allez, surprends‐moi !")
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
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 41 */ "OK, c'est terminé !\n<0x10009:0x00000004>Héhéhé, je pensais pas que tu y\narriverais si facilement !")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Très bien, chose promise, chose due.\nTu peux prendre le <color blue<Golofa Demonicus\nRex>coloroff>.\n\n<0x10009:0x00000100>Il faut savoir s'incliner, sinon tu vas\nfinir par prendre la <color red<mouche>coloroff>...\n\n\n<0x10009:0x00030100>... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00040500>Dis bien à Terry que je m'excuse si\nje lui ai causé du souci.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

