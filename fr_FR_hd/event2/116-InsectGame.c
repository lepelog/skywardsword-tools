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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01Alors, prêt à te lancer ? Tu m'as l'air d'une fine\nmouche, comme moi !\n\n\nJe sens que tu vas bien t'en sortir.\n<r<20 rubis>> pour le mode Débutant,\n<r<50 rubis>> pour le mode Expert.\nTu choisis quoi ?\n[1]Débutant[2]Expert[3-]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100J'te chronomètre ! Si tu fais un temps correct,\nt'auras une récompense !\n\n\n\x0E\x01\x09\x04\x00\x100En mode Débutant, faut attraper un insecte de\nchacune des cinq espèces indiquées à l'écran.\nAttention, t'es prêt ?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de rubis.\nEt crois pas que je vais te faire un prix\nparce qu'on va à l'école ensemble ! Pas\nfolle, la guêpe !")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Si tu crois que tu peux te lancer dans la chasse\naux insectes avec si peu de <r<c\x153urs>>... on voit bien\nque t'as aucune idée des risques encourus !\n\n\x0E\x01\x09\x04\x00\x100Reviens me voir quand t'auras plus de c\x153urs !")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100J'te chronomètre ! Si tu fais un temps correct,\nt'auras une récompense !\n\n\n\x0E\x01\x09\x04\x00\x100En mode Expert, faut attraper un total de dix\ninsectes, des huit espèces indiquées à l'écran.\nAttention, t'es prêt ?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de rubis.\nEt crois pas que je vais te faire un prix\nparce qu'on va à l'école ensemble ! Pas\nfolle, la guêpe !")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Eh ben, faut croire que je m'étais trompé sur\ntoi. Tu mérites pas mes insectes !")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80AAttends, t'as pas de <y<filet à papillons>> ?! C'est\nune blague ?!\n\n\n\x0E\x01\x09\x04\x00\x500Mais tu viens d'une autre planète ou quoi ?\nTous les gens cool en ont un ! Tu me files le\nbourdon !\n\n\x0E\x01\x09\x04\x03\x100Bon, mieux vaut tard que jamais... Y en a dans\nla <r<boutique de Terry>>, alors va vite t'en chercher\nun et ramène\x2010toi !")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01Tiens, Link ! Ça pour une\ncoïncidence !\n\n\n\x0E\x01\x09\x04\x12\x600J'me suis perdu dans le brouillard et j'ai atterri\nici...\n\n\n\x0E\x01\x09\x04\x00\x100Figure\x2010toi que cette île est un habitat idéal pour\ntoutes sortes d'insectes !\n\n\n\x0E\x01\x09\x04\x03\x104J'ai donc décidé de la peupler de tout un tas\nd'insectes ! Comme ça, je peux vivre pleinement\nma passion et en attraper des tonnes.\n\n\x0E\x01\x09\x04\x00\x100Mais dis donc, si ça se trouve tu dirais pas\nnon à une petite partie de chasse... Je peux\nt'arranger ça, tu sais !")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100Tu vas adorer ! J'ai élaboré deux niveaux de\ndifficulté : <r<Débutant>>, juste pour se détendre, et\n<r<Expert>>, pour les vrais amoureux des bébêtes...\n\n\x0E\x01\x09\x04\x03\x100J'te fais le tarif « découverte » : \nc'est <r<20 rubis >>en mode Débutant,\net <r<50 rubis>> en mode Expert.\n[1]Débutant[2]Expert[3-]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80AAttends, t'as pas de <y<filet à papillons>> ?! C'est\nune blague ?!\n\n\n\x0E\x01\x09\x04\x00\x500Mais tu viens d'une autre planète ou quoi ?\nTous les gens cool en ont un ! Tu me files le\nbourdon !\n\n\x0E\x01\x09\x04\x03\x100Bon, mieux vaut tard que jamais... Y en a dans\nla <r<boutique de Terry>>, alors va vite t'en chercher\nun et ramène\x2010toi !")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Héhéhé, t'es venu chercher le <b<Golofa Demonicus\nRex >>?\n[1]Évidemment ![2-]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("Les affaires sont les affaires ! Va falloir me\ndonner <r<10 rubis>>.\n[1]Les voilà ![2-]Pas\nquestion")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Tu vas devoir attraper dix insectes de mon\nchoix.\n\n\n\x0E\x01\x09\x04\x03\x100Je te chronomètre. Tu as <r<trois minutes >>pour\nt'exécuter.\n\n\n\x0E\x01\x09\x04\x00\x100Si tu réussis, je te donnerai le <b<Golofa\nDemonicus Rex>>.\n\n\nAllez, c'est parti !")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Minute, papillon ! T'as toujours pas de filet,\nj'te signale. Tu peux pas participer.\n\n\n\x0E\x01\x09\x04\x04\x100Va acheter un <y<filet à papillons>>, et on en\nreparlera !")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Si tu crois que tu peux te lancer dans la chasse\naux insectes avec si peu de <r<c\x153urs>>... on voit bien\nque t'as aucune idée des risques encourus !\n\n\x0E\x01\x09\x04\x00\x100Reviens me voir quand t'auras plus de c\x153urs !")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de rubis.\nEt crois pas que je vais te faire un prix\nparce qu'on va à l'école ensemble ! Pas\nfolle, la guêpe !")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305Faut que j'arrête de te regarder, tu me donnes\nle <r<cafard>> !\n\n\n\x0E\x01\x09\x04\x00\x100Et j'en ai déjà suffisamment dans ma\ncollection ! Héhéhé !\x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Héhéhé, salut Link ! La vie est\nbelle ?\n\n\n\x0E\x01\x09\x04\x00\x100Pourquoi je souris d'un air béat ? Héhéhé,\nt'as remarqué, hein...\n\n\nJe vais te le dire. J'ai trouvé l'insecte le plus\nrare du monde !\n[1]Raconte ![2]Je m'en fiche")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100Ah ah ! Je vois que j'ai piqué ta curiosité !\n\n\n\nEh bien, tu vas pas être déçu...<pause1E> \x0E\x01\x09\x04\x13\x100J'ai réussi à\ndénicher le légendaire <b<Golofa Demonicus Rex>> !\n\n\n\x0E\x01\x09\x04\x03\x100Il n'en existe quasiment plus ! Quelle chance,\nc'est un vrai miracle ! J'arrive pas à arrêter\nde sourire !")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800Comment ça, c'est l'insecte de Terry ? Le Terry\nqui se balade toute la journée dans sa boutique\nvolante ?\n[1]Rends\x2010le\x2010lui ![2]Pauvre Terry...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800Tu croyais vraiment que j'allais gober une\nhistoire pareille ?\n\n\nMais quel faux jeton, celui\x2010là ! \x0E\x01\x09\x04\x13\x100C'est moi qui l'ai\ntrouvé, il est à moi !")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í C'est mal de prendre quelque chose qui ne\nnous appartient pas, c'est sûr...\n\n\n\x0E\x01\x09\x04\x12\x100Mais je peux pas me résoudre à te le donner\ncomme ça, pour rien... Je sais que j'devrais,\npourtant...\n\n\x0E\x01\x09\x04\x00\x500J'ai une idée !\n\n\n\n\x0E\x01\x09\x04\x00\x100Prouve\x2010moi que tu es le plus grand chasseur\nd'insectes qui soit, et je te rendrai ma précieuse\nbébête...\n\n\x0E\x01\x09\x04\x03\x100T'en dis quoi ? Tu relèves le défi ?\n[1]Allons\x2010y ![2-]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500J'ai pas l'impression que tu réalises la valeur\nde cette petite bestiole...\n\n\n\x0E\x01\x09\x04\x00\x100Le simple fait de l'avoir ici avec moi fait\ngrimper ma renommée en flèche au sein de\nla communauté des chasseurs d'insectes !")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515Dis donc, toi ! Tu te crois vraiment tout permis,\nà ce que je vois !")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Comment ça, t'as plus envie d'attraper des\ninsectes ? Tu rigoles, j'espère ?\n[1]Pas du tout[2-]Bien sûr !")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500J'en reviens pas... À croire que le charme des\ninsectes te passe au\x2010dessus de la tête. T'es pas\nsi fine mouche que ça, en fin de compte.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("J'en étais sûr ! Les gars comme nous,\ndonnez\x2010leur des insectes et plus rien\nd'autre n'existe !")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Hmm, t'en mets, un temps...\n\n\n\n\x0E\x01\x09\x04\x00\x100Allez, ça suffit ! Désolé, mais le temps limite\nest écoulé !")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Houla, doucement ! T'as une araignée au\nplafond, ma parole ! T'étais à deux doigts\nd'y passer !\n\n\x0E\x01\x09\x04\x03\x100N'oublie pas que certains insectes se défendent !\nSi tu continues comme ça, je donne pas cher de\nta peau ! Désolé, mais je dois arrêter la partie.")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107OK, c'est terminé. T'avoueras que c'était pas\nterrible !\n\n\n\x0E\x01\x09\x04\x00\x100La prochaine fois, essaie de mettre <r<moins de\ncinq minutes>>.\n\n\n\x0E\x01\x09\x04\x03\x100Et si t'as des insectes à me vendre, je suis\npreneur, passe me voir pendant la nuit !")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500Tu devrais ouvrir ton c\x153ur aux insectes...\nCe sont tes amis, tu sais.\n\n\n\x0E\x01\x09\x04\x00\x100Reviens quand tu l'auras compris !")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Désolé, je rembourse pas !\n\n\n\n\x0E\x01\x09\x04\x00\x100Mais n'hésite pas à revenir ! Héhéhé.")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Héhéhé... T'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte ! Je\nconnais ça...\n\n\x0E\x01\x09\x04\x00\x500Désolé, je rembourse pas ! Va te refaire une\nsanté et repasse me voir !")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104OK, c'est terminé. Mouais, c'était pas trop mal.\n\n\n\n\x0E\x01\x09\x04\x00\x100Si tu sais à l'avance où les trouver, tu feras un\nmeilleur temps ! Essaye de mettre <r<moins de\ntrois minutes >>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100T'as gagné mon argent de poche ! Voilà\n<r<80 rubis>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04OK, c'est terminé. Le temps que tu viens de\nfaire, c'est bien le strict minimum.\n\n\n\x0E\x01\x09\x04\x00\x100Un conseil : y a des insectes qui sont plus faciles\nà attraper dans certains coins que dans d'autres,\nalors va bien chercher partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100La prochaine fois, essaie de mettre <r<moins de\ntrois minutes>> ! Tiens, voilà <r<30 rubis >>pour toi !")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811OK, c'est terminé ! Alors ça, c'est un score pas\npiqué des hannetons !\n\n\n\x0E\x01\x09\x04\x00\x100Je sens qu'tu vas pas tarder à devenir le\nmeilleur chasseur d'insectes après moi...\nEssaie de mettre <r<moins de deux minutes\n>>la prochaine fois !\nVoilà ton prix, je suis sûr que rien ne pourrait\nte faire plus plaisir : <r<cinq>> insectes !")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11OK, c'est terminé. Hé, mais c'est pas mal,\ndis\x2010moi ! Je pense que tu as du potentiel.\n\n\n\x0E\x01\x09\x04\x12\x500Mais tu ne mérites pas encore que je te donne\nun seul de mes insectes adorés !")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Fais de ton mieux la prochaine fois, essaie de\nfinir en <r<moins de deux minutes>>.\n\n\nTiens, pour cette fois, tu gagnes <r<50 rubis >>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811OK, c'est terminé. Mais... Mais c'est totalement\nimpensable !\n\n\n\x0E\x01\x09\x04\x00\x100Je vais pas me voiler la face, je dois bien\nadmettre que t'es le meilleur chasseur\nd'insectes du monde.\n\n\x0E\x01\x09\x04\x04\x100Tiens, voilà ton prix. Des insectes, évidemment,\nmais ce sont <r<cinq>> insectes sacrément rares !")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811OK, c'est terminé ! Exceptionnel !\n\n\n\n\x0E\x01\x09\x04\x12\x100Mais attention, ce n'était que le mode\nDébutant !\n\n\n\x0E\x01\x09\x04\x00\x100Tente ta chance en mode Expert, la prochaine\nfois ! Tiens, voilà ton prix : <r<cinq>> de mes insectes\nadorés !")
/*< 48>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 132, 'param3': 45}
/*<132>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<107>*/ 				give_item(22 0x16);
/*<134>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<127>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Ouf...\n\n\n\n\x0E\x01\x09\x04\x12\x500Désolé, mais le <b<Golofa Demonicus Rex >>va rester\nencore un peu avec moi !\n\n\n\x0E\x01\x09\x04\x00\x100Tu dois finir en moins de trois minutes !\nEh ben allez, surprends\x2010moi !")
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
/*< 71>*/ 				printf("OK, c'est terminé ! \x0E\x01\x09\x04\x00\x04Héhéhé, je pensais pas que\ntu y arriverais si facilement !")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Très bien, chose promise, chose due. Tu peux\nprendre le <b<Golofa Demonicus Rex>>.\n\n\n\x0E\x01\x09\x04\x00\x100Il faut savoir s'incliner, sinon tu vas finir par\nprendre la <r<mouche>>...\n\n\n\x0E\x01\x09\x04\x03\x100... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Dis bien à Terry que je m'excuse si je lui ai\ncausé du souci.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

