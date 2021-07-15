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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01Alors, prêt à te lancer ?\nTu m'as l'air d'une fine mouche,\ncomme moi !\n\nJe sens que tu vas bien t'en sortir.\n<r<20 rubis>> pour le mode Débutant,\n<r<50 rubis>> pour le mode Expert.\nTu choisis quoi ?\n[1]Débutant[2]Expert[3-]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100J'te chronomètre ! Si tu fais un temps\ncorrect, t'auras une récompense !\n\n\n\x0E\x01\x09\x04\x00\x100En mode Débutant, faut attraper un\ninsecte de chacune des cinq espèces\nindiquées à l'écran.\nAttention, t'es prêt ?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de\nrubis. Et crois pas que je vais te faire\nun prix parce qu'on va à l'école\nensemble ! Pas folle, la guêpe !")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Si tu crois que tu peux te lancer dans\nla chasse aux insectes avec si peu de\n<r<c\x153urs>>... on voit bien que t'as aucune\nidée des risques encourus !\n\x0E\x01\x09\x04\x00\x100Reviens me voir quand t'auras plus\nde c\x153urs !")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100J'te chronomètre ! Si tu fais un temps\ncorrect, t'auras une récompense !\n\n\n\x0E\x01\x09\x04\x00\x100En mode Expert, faut attraper\nun total de dix insectes, des huit\nespèces indiquées à l'écran.\nAttention, t'es prêt ?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de\nrubis. Et crois pas que je vais te faire\nun prix parce qu'on va à l'école\nensemble ! Pas folle, la guêpe !")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Eh ben, faut croire que je m'étais\ntrompé sur toi. Tu mérites pas mes\ninsectes !")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80AAttends, t'as pas de <y<filet à papillons>> ?!\nC'est une blague ?!\n\n\n\x0E\x01\x09\x04\x00\x500Mais tu viens d'une autre planète\nou quoi ? Tous les gens cool en ont un !\nTu me files le bourdon !\n\n\x0E\x01\x09\x04\x03\x100Bon, mieux vaut tard que jamais...\nY en a dans la <r<boutique de Terry>>,\nalors va vite t'en chercher un et\nramène\x2010toi !")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01Tiens, Link !\nÇa pour une coïncidence !\n\n\n\x0E\x01\x09\x04\x12\x600J'me suis perdu dans le brouillard\net j'ai atterri ici...\n\n\n\x0E\x01\x09\x04\x00\x100Figure\x2010toi que cette île est un\nhabitat idéal pour toutes sortes\nd'insectes !\n\n\x0E\x01\x09\x04\x03\x104J'ai donc décidé de la peupler de tout\nun tas d'insectes ! Comme ça, je peux\nvivre pleinement ma passion et en\nattraper des tonnes.\n\x0E\x01\x09\x04\x00\x100Mais dis donc, si ça se trouve tu dirais\npas non à une petite partie de chasse...\nJe peux t'arranger ça, tu sais !")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100Tu vas adorer ! J'ai élaboré deux\nniveaux de difficulté : <r<Débutant>>, juste\npour se détendre, et <r<Expert>>, pour les\nvrais amoureux des bébêtes...\n\x0E\x01\x09\x04\x03\x100J'te fais le tarif « découverte » :\nc'est <r<20 rubis >>en mode Débutant,\net <r<50 rubis>> en mode Expert.\n[1]Débutant[2]Expert[3-]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80AAttends, t'as pas de <y<filet à papillons>> ?!\nC'est une blague ?!\n\n\n\x0E\x01\x09\x04\x00\x500Mais tu viens d'une autre planète\nou quoi ? Tous les gens cool en ont un !\nTu me files le bourdon !\n\n\x0E\x01\x09\x04\x03\x100Bon, mieux vaut tard que jamais...\nY en a dans la <r<boutique de Terry>>,\nalors va vite t'en chercher un et\nramène\x2010toi !")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Héhéhé, t'es venu chercher le\n<b<Golofa Demonicus Rex >>?\n[1]Évidemment ![2-]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("Les affaires sont les affaires !\nVa falloir me donner <r<10 rubis>>.\n[1]Les voilà ![2-]Pas\nquestion")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Tu vas devoir attraper dix insectes\nde mon choix.\n\n\n\x0E\x01\x09\x04\x03\x100Je te chronomètre. Tu as <r<trois minutes>>\npour t'exécuter.\n\n\n\x0E\x01\x09\x04\x00\x100Si tu réussis, je te donnerai le\n<b<Golofa Demonicus Rex>>.\n\n\nAllez, c'est parti !")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Minute, papillon !\nT'as toujours pas de filet, j'te signale.\nTu peux pas participer.\n\n\x0E\x01\x09\x04\x04\x100Va acheter un <y<filet à papillons>>,\net on en reparlera !")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Si tu crois que tu peux te lancer dans\nla chasse aux insectes avec si peu de\n<r<c\x153urs>>... on voit bien que t'as aucune\nidée des risques encourus !\n\x0E\x01\x09\x04\x00\x100Reviens me voir quand t'auras plus\nde c\x153urs !")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de\nrubis. Et crois pas que je vais te faire\nun prix parce qu'on va à l'école\nensemble ! Pas folle, la guêpe !")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305Faut que j'arrête de te regarder, tu\nme donnes le <r<cafard>> !\n\n\n\x0E\x01\x09\x04\x00\x100Et j'en ai déjà suffisamment dans\nma collection ! Héhéhé ! \x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Héhéhé, salut Link !\nLa vie est belle ?\n\n\n\x0E\x01\x09\x04\x00\x100Pourquoi je souris d'un air béat ?\nHéhéhé, t'as remarqué, hein...\n\n\nJe vais te le dire. J'ai trouvé l'insecte\nle plus rare du monde !\n[1]Raconte ![2]Je m'en fiche")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100Ah ah ! Je vois que j'ai piqué ta\ncuriosité !\n\n\nEh bien, tu vas pas être déçu...<pause1E>\n\x0E\x01\x09\x04\x13\x100J'ai réussi à dénicher le légendaire\n<b<Golofa Demonicus Rex>> !\n\n\x0E\x01\x09\x04\x03\x100Il n'en existe quasiment plus !\nQuelle chance, c'est un vrai miracle ! \nJ'arrive pas à arrêter de sourire !")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800Comment ça, c'est l'insecte de Terry ?\nLe Terry qui se balade toute la journée\ndans sa boutique volante ?\n[1]Rends\x2010le\x2010lui ![2]Pauvre Terry...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800Tu croyais vraiment que j'allais\ngober une histoire pareille ?\n\n\nMais quel faux jeton, celui\x2010là !\n\x0E\x01\x09\x04\x13\x100C'est moi qui l'ai trouvé, il est à moi !")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í\nC'est mal de prendre quelque chose\nqui ne nous appartient pas, c'est sûr...\n\n\x0E\x01\x09\x04\x12\x100Mais je peux pas me résoudre à te le\ndonner comme ça, pour rien... \nJe sais que j'devrais, pourtant...\n\n\x0E\x01\x09\x04\x00\x500J'ai une idée !\n\n\n\n\x0E\x01\x09\x04\x00\x100Prouve\x2010moi que tu es le plus grand\nchasseur d'insectes qui soit, et je te\nrendrai ma précieuse bébête...\n\n\x0E\x01\x09\x04\x03\x100T'en dis quoi ?\nTu relèves le défi ?\n[1]Allons\x2010y ![2-]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500J'ai pas l'impression que tu réalises\nla valeur de cette petite bestiole...\n\n\n\x0E\x01\x09\x04\x00\x100Le simple fait de l'avoir ici avec moi\nfait grimper ma renommée en flèche\nau sein de la communauté des chasseurs\nd'insectes !")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515Dis donc, toi ! Tu te crois vraiment\ntout permis, à ce que je vois !")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Comment ça, t'as plus envie d'attraper\ndes insectes ? Tu rigoles, j'espère ?\n[1]Pas du tout[2-]Bien sûr !")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500J'en reviens pas... À croire que le\ncharme des insectes te passe au\x2010dessus\nde la tête. T'es pas si fine mouche que\nça, en fin de compte.")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("J'en étais sûr ! Les gars comme nous,\ndonnez\x2010leur des insectes et plus rien\nd'autre n'existe !")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Hmm, t'en mets, un temps...\n\n\n\n\x0E\x01\x09\x04\x00\x100Allez, ça suffit ! Désolé, mais le temps\nlimite est écoulé !")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Houla, doucement ! T'as une araignée\nau plafond, ma parole ! T'étais à deux\ndoigts d'y passer !\n\n\x0E\x01\x09\x04\x03\x100N'oublie pas que certains insectes se\ndéfendent ! Si tu continues comme ça,\nje donne pas cher de ta peau ! Désolé,\nmais je dois arrêter la partie.")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107OK, c'est terminé.\nT'avoueras que c'était pas terrible !\n\n\n\x0E\x01\x09\x04\x00\x100La prochaine fois, essaie de mettre\n<r<moins de cinq minutes>>.\n\n\n\x0E\x01\x09\x04\x03\x100Et si t'as des insectes à me vendre,\nje suis preneur, passe me voir pendant\nla nuit !")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500Tu devrais ouvrir ton c\x153ur aux\ninsectes... Ce sont tes amis, tu sais.\n\n\n\x0E\x01\x09\x04\x00\x100Reviens quand tu l'auras compris !")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Désolé, je rembourse pas !\n\n\n\n\x0E\x01\x09\x04\x00\x100Mais n'hésite pas à revenir ! Héhéhé.")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Héhéhé...\nT'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte !\nJe connais ça...\n\x0E\x01\x09\x04\x00\x500Désolé, je rembourse pas ! Va te\nrefaire une santé et repasse me voir !")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104OK, c'est terminé.\nMouais, c'était pas trop mal.\n\n\n\x0E\x01\x09\x04\x00\x100Si tu sais à l'avance où les trouver,\ntu feras un meilleur temps ! Essaye\nde mettre <r<moins de trois minutes\n>>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100T'as gagné mon argent de poche !\nVoilà <r<80 rubis>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04OK, c'est terminé.\nLe temps que tu viens de faire,\nc'est bien le strict minimum.\n\n\x0E\x01\x09\x04\x00\x100Un conseil : y a des insectes qui sont\nplus faciles à attraper dans certains\ncoins que dans d'autres, alors va bien\nchercher partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100La prochaine fois, essaie de mettre\n<r<moins de trois minutes>> !\nTiens, voilà <r<30 rubis >>pour toi !")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811OK, c'est terminé !\nAlors ça, c'est un score pas piqué des\nhannetons !\n\n\x0E\x01\x09\x04\x00\x100Je sens qu'tu vas pas tarder à devenir\nle meilleur chasseur d'insectes après\nmoi... Essaie de mettre <r<moins de deux\nminutes >>la prochaine fois !\nVoilà ton prix, je suis sûr que rien\nne pourrait te faire plus plaisir :\n<r<cinq>> insectes !")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11OK, c'est terminé.\nHé, mais c'est pas mal, dis\x2010moi !\nJe pense que tu as du potentiel.\n\n\x0E\x01\x09\x04\x12\x500Mais tu ne mérites pas encore que\nje te donne un seul de mes insectes\nadorés !")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Fais de ton mieux la prochaine fois,\nessaie de finir en <r<moins de deux\nminutes>>.\n\nTiens, pour cette fois, tu gagnes\n<r<50 rubis >>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811OK, c'est terminé.\nMais... Mais c'est totalement\nimpensable !\n\n\x0E\x01\x09\x04\x00\x100Je vais pas me voiler la face, je dois\nbien admettre que t'es le meilleur\nchasseur d'insectes du monde.\n\n\x0E\x01\x09\x04\x04\x100Tiens, voilà ton prix. Des insectes,\névidemment, mais ce sont <r<cinq>> insectes\nsacrément rares !")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811OK, c'est terminé !\nExceptionnel !\n\n\n\x0E\x01\x09\x04\x12\x100Mais attention, ce n'était que\nle mode Débutant !\n\n\n\x0E\x01\x09\x04\x00\x100Tente ta chance en mode Expert,\nla prochaine fois ! Tiens, voilà ton\nprix : <r<cinq>> de mes insectes adorés !")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Ouf...\n\n\n\n\x0E\x01\x09\x04\x12\x500Désolé, mais le <b<Golofa Demonicus Rex>>\nva rester encore un peu avec moi !\n\n\n\x0E\x01\x09\x04\x00\x100Tu dois finir en moins de trois\nminutes !\nEh ben allez, surprends\x2010moi !")
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
/*< 71>*/ 				printf("OK, c'est terminé !\n\x0E\x01\x09\x04\x00\x04Héhéhé, je pensais pas que tu y\narriverais si facilement !")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Très bien, chose promise, chose due.\nTu peux prendre le <b<Golofa Demonicus\nRex>>.\n\n\x0E\x01\x09\x04\x00\x100Il faut savoir s'incliner, sinon tu vas\nfinir par prendre la <r<mouche>>...\n\n\n\x0E\x01\x09\x04\x03\x100... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Dis bien à Terry que je m'excuse si\nje lui ai causé du souci.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

