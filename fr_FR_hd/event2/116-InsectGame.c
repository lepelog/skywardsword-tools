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
/*<  4>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>Alors, prêt à te lancer ? Tu m'as l'air d'une fine\nmouche, comme moi !\n\n\nJe sens que tu vas bien t'en sortir.\n<color red<20 rubis>coloroff> pour le mode Débutant,\n<color red<50 rubis>coloroff> pour le mode Expert.\nTu choisis quoi ?\n[1-]Débutant[2-]Expert[3]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030100>J'te chronomètre ! Si tu fais un temps correct,\nt'auras une récompense !\n\n\n<0x10009:0x00000100>En mode Débutant, faut attraper un insecte de\nchacune des cinq espèces indiquées à l'écran.\nAttention, t'es prêt ?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de rubis.\nEt crois pas que je vais te faire un prix\nparce qu'on va à l'école ensemble ! Pas\nfolle, la guêpe !")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Si tu crois que tu peux te lancer dans la chasse\naux insectes avec si peu de <color red<cœurs>coloroff>... on voit bien\nque t'as aucune idée des risques encourus !\n\n<0x10009:0x00000100>Reviens me voir quand t'auras plus de cœurs !")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00030100>J'te chronomètre ! Si tu fais un temps correct,\nt'auras une récompense !\n\n\n<0x10009:0x00000100>En mode Expert, faut attraper un total de dix\ninsectes, des huit espèces indiquées à l'écran.\nAttention, t'es prêt ?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de rubis.\nEt crois pas que je vais te faire un prix\nparce qu'on va à l'école ensemble ! Pas\nfolle, la guêpe !")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Eh ben, faut croire que je m'étais trompé sur\ntoi. Tu mérites pas mes insectes !")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color yellow<filet à papillons>coloroff> ?! C'est\nune blague ?!\n\n\n<0x10009:0x00000500>Mais tu viens d'une autre planète ou quoi ?\nTous les gens cool en ont un ! Tu me files le\nbourdon !\n\n<0x10009:0x00030100>Bon, mieux vaut tard que jamais... Y en a dans\nla <color red<boutique de Terry>coloroff>, alors va vite t'en chercher\nun et ramène‐toi !")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Tiens, <heroname> ! Ça pour une\ncoïncidence !\n\n\n<0x10009:0x00120600>J'me suis perdu dans le brouillard et j'ai atterri\nici...\n\n\n<0x10009:0x00000100>Figure‐toi que cette île est un habitat idéal pour\ntoutes sortes d'insectes !\n\n\n<0x10009:0x00030104>J'ai donc décidé de la peupler de tout un tas\nd'insectes ! Comme ça, je peux vivre pleinement\nma passion et en attraper des tonnes.\n\n<0x10009:0x00000100>Mais dis donc, si ça se trouve tu dirais pas\nnon à une petite partie de chasse... Je peux\nt'arranger ça, tu sais !")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000100>Tu vas adorer ! J'ai élaboré deux niveaux de\ndifficulté : <color red<Débutant>coloroff>, juste pour se détendre, et\n<color red<Expert>coloroff>, pour les vrais amoureux des bébêtes...\n\n<0x10009:0x00030100>J'te fais le tarif « découverte » : \nc'est <color red<20 rubis >coloroff>en mode Débutant,\net <color red<50 rubis>coloroff> en mode Expert.\n[1-]Débutant[2-]Expert[3]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color yellow<filet à papillons>coloroff> ?! C'est\nune blague ?!\n\n\n<0x10009:0x00000500>Mais tu viens d'une autre planète ou quoi ?\nTous les gens cool en ont un ! Tu me files le\nbourdon !\n\n<0x10009:0x00030100>Bon, mieux vaut tard que jamais... Y en a dans\nla <color red<boutique de Terry>coloroff>, alors va vite t'en chercher\nun et ramène‐toi !")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000004>Héhéhé, t'es venu chercher le <color blue<Golofa Demonicus\nRex >coloroff>?\n[1-]Évidemment ![2]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Les affaires sont les affaires ! Va falloir me\ndonner <color red<10 rubis>coloroff>.\n[1-]Les voilà ![2]Pas\nquestion")
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
/*< 41>*/ 										printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00040100>Tu vas devoir attraper dix insectes de mon\nchoix.\n\n\n<0x10009:0x00030100>Je te chronomètre. Tu as <color red<trois minutes >coloroff>pour\nt'exécuter.\n\n\n<0x10009:0x00000100>Si tu réussis, je te donnerai le <color blue<Golofa\nDemonicus Rex>coloroff>.\n\n\nAllez, c'est parti !")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00130807>Minute, papillon ! T'as toujours pas de filet,\nj'te signale. Tu peux pas participer.\n\n\n<0x10009:0x00040100>Va acheter un <color yellow<filet à papillons>coloroff>, et on en\nreparlera !")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Si tu crois que tu peux te lancer dans la chasse\naux insectes avec si peu de <color red<cœurs>coloroff>... on voit bien\nque t'as aucune idée des risques encourus !\n\n<0x10009:0x00000100>Reviens me voir quand t'auras plus de cœurs !")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de rubis.\nEt crois pas que je vais te faire un prix\nparce qu'on va à l'école ensemble ! Pas\nfolle, la guêpe !")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Faut que j'arrête de te regarder, tu me donnes\nle <color red<cafard>coloroff> !\n\n\n<0x10009:0x00000100>Et j'en ai déjà suffisamment dans ma\ncollection ! Héhéhé !<0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000004>Héhéhé, salut <heroname> ! La vie est\nbelle ?\n\n\n<0x10009:0x00000100>Pourquoi je souris d'un air béat ? Héhéhé,\nt'as remarqué, hein...\n\n\nJe vais te le dire. J'ai trouvé l'insecte le plus\nrare du monde !\n[1-]Raconte ![2-]Je m'en fiche")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>Ah ah ! Je vois que j'ai piqué ta curiosité !\n\n\n\nEh bien, tu vas pas être déçu...<pause 30> <0x10009:0x00130100>J'ai réussi à\ndénicher le légendaire <color blue<Golofa Demonicus Rex>coloroff> !\n\n\n<0x10009:0x00030100>Il n'en existe quasiment plus ! Quelle chance,\nc'est un vrai miracle ! J'arrive pas à arrêter\nde sourire !")
/*< 54>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010800>Comment ça, c'est l'insecte de Terry ? Le Terry\nqui se balade toute la journée dans sa boutique\nvolante ?\n[1-]Rends‐le‐lui ![2-]Pauvre Terry...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Tu croyais vraiment que j'allais gober une\nhistoire pareille ?\n\n\nMais quel faux jeton, celui‐là ! <0x10009:0x00130100>C'est moi qui l'ai\ntrouvé, il est à moi !")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd> C'est mal de prendre quelque chose qui ne\nnous appartient pas, c'est sûr...\n\n\n<0x10009:0x00120100>Mais je peux pas me résoudre à te le donner\ncomme ça, pour rien... Je sais que j'devrais,\npourtant...\n\n<0x10009:0x00000500>J'ai une idée !\n\n\n\n<0x10009:0x00000100>Prouve‐moi que tu es le plus grand chasseur\nd'insectes qui soit, et je te rendrai ma précieuse\nbébête...\n\n<0x10009:0x00030100>T'en dis quoi ? Tu relèves le défi ?\n[1-]Allons‐y ![2]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00120500>J'ai pas l'impression que tu réalises la valeur\nde cette petite bestiole...\n\n\n<0x10009:0x00000100>Le simple fait de l'avoir ici avec moi fait\ngrimper ma renommée en flèche au sein de\nla communauté des chasseurs d'insectes !")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00120515>Dis donc, toi ! Tu te crois vraiment tout permis,\nà ce que je vois !")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Comment ça, t'as plus envie d'attraper des\ninsectes ? Tu rigoles, j'espère ?\n[1-]Pas du tout[2]Bien sûr !")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120500>J'en reviens pas... À croire que le charme des\ninsectes te passe au‐dessus de la tête. T'es pas\nsi fine mouche que ça, en fin de compte.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "J'en étais sûr ! Les gars comme nous,\ndonnez‐leur des insectes et plus rien\nd'autre n'existe !")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Hmm, t'en mets, un temps...\n\n\n\n<0x10009:0x00000100>Allez, ça suffit ! Désolé, mais le temps limite\nest écoulé !")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00131000>Houla, doucement ! T'as une araignée au\nplafond, ma parole ! T'étais à deux doigts\nd'y passer !\n\n<0x10009:0x00030100>N'oublie pas que certains insectes se défendent !\nSi tu continues comme ça, je donne pas cher de\nta peau ! Désolé, mais je dois arrêter la partie.")
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
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>OK, c'est terminé. T'avoueras que c'était pas\nterrible !\n\n\n<0x10009:0x00000100>La prochaine fois, essaie de mettre <color red<moins de\ncinq minutes>coloroff>.\n\n\n<0x10009:0x00030100>Et si t'as des insectes à me vendre, je suis\npreneur, passe me voir pendant la nuit !")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00120500>Tu devrais ouvrir ton cœur aux insectes...\nCe sont tes amis, tu sais.\n\n\n<0x10009:0x00000100>Reviens quand tu l'auras compris !")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Désolé, je rembourse pas !\n\n\n\n<0x10009:0x00000100>Mais n'hésite pas à revenir ! Héhéhé.")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Héhéhé... T'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte ! Je\nconnais ça...\n\n<0x10009:0x00000500>Désolé, je rembourse pas ! Va te refaire une\nsanté et repasse me voir !")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00120104>OK, c'est terminé. Mouais, c'était pas trop mal.\n\n\n\n<0x10009:0x00000100>Si tu sais à l'avance où les trouver, tu feras un\nmeilleur temps ! Essaye de mettre <color red<moins de\ntrois minutes >coloroff>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030100>T'as gagné mon argent de poche ! Voilà\n<color red<80 rubis>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000004>OK, c'est terminé. Le temps que tu viens de\nfaire, c'est bien le strict minimum.\n\n\n<0x10009:0x00000100>Un conseil : y a des insectes qui sont plus faciles\nà attraper dans certains coins que dans d'autres,\nalors va bien chercher partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>La prochaine fois, essaie de mettre <color red<moins de\ntrois minutes>coloroff> ! Tiens, voilà <color red<30 rubis >coloroff>pour toi !")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>OK, c'est terminé ! Alors ça, c'est un score pas\npiqué des hannetons !\n\n\n<0x10009:0x00000100>Je sens qu'tu vas pas tarder à devenir le\nmeilleur chasseur d'insectes après moi...\nEssaie de mettre <color red<moins de deux minutes\n>coloroff>la prochaine fois !\nVoilà ton prix, je suis sûr que rien ne pourrait\nte faire plus plaisir : <color red<cinq>coloroff> insectes !")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000011>OK, c'est terminé. Hé, mais c'est pas mal,\ndis‐moi ! Je pense que tu as du potentiel.\n\n\n<0x10009:0x00120500>Mais tu ne mérites pas encore que je te donne\nun seul de mes insectes adorés !")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Fais de ton mieux la prochaine fois, essaie de\nfinir en <color red<moins de deux minutes>coloroff>.\n\n\nTiens, pour cette fois, tu gagnes <color red<50 rubis >coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00130811>OK, c'est terminé. Mais... Mais c'est totalement\nimpensable !\n\n\n<0x10009:0x00000100>Je vais pas me voiler la face, je dois bien\nadmettre que t'es le meilleur chasseur\nd'insectes du monde.\n\n<0x10009:0x00040100>Tiens, voilà ton prix. Des insectes, évidemment,\nmais ce sont <color red<cinq>coloroff> insectes sacrément rares !")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>OK, c'est terminé ! Exceptionnel !\n\n\n\n<0x10009:0x00120100>Mais attention, ce n'était que le mode\nDébutant !\n\n\n<0x10009:0x00000100>Tente ta chance en mode Expert, la prochaine\nfois ! Tiens, voilà ton prix : <color red<cinq>coloroff> de mes insectes\nadorés !")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
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
/*< 64>*/ 					printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00000013>Ouf...\n\n\n\n<0x10009:0x00120500>Désolé, mais le <color blue<Golofa Demonicus Rex >coloroff>va rester\nencore un peu avec moi !\n\n\n<0x10009:0x00000100>Tu dois finir en moins de trois minutes !\nEh ben allez, surprends‐moi !")
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
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "OK, c'est terminé ! <0x10009:0x00000004>Héhéhé, je pensais pas que\ntu y arriverais si facilement !")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Très bien, chose promise, chose due. Tu peux\nprendre le <color blue<Golofa Demonicus Rex>coloroff>.\n\n\n<0x10009:0x00000100>Il faut savoir s'incliner, sinon tu vas finir par\nprendre la <color red<mouche>coloroff>...\n\n\n<0x10009:0x00030100>... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00040500>Dis bien à Terry que je m'excuse si je lui ai\ncausé du souci.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

