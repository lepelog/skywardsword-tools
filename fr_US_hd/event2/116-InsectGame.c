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
/*<  4>*/ 						printf("\x0E\x01\x09\x04\x00\x01Alors, prêt à commencer la chasse? Peut-être\nque tu vas attraper la piqûre, qui sait? Hihi.\n\n\nJe sens que tu vas bien t'en sortir.\n<r<20 rubis>> pour le mode Débutant,\n<r<50 rubis>> pour le mode Expert.\nQu'est-ce que tu choisis?\n[1]Débutant[2]Expert[3-]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf("\x0E\x01\x09\x04\x03\x100J'te chronomètre! Si tu fais un temps\nrespectable, t'auras une récompense!\n\n\n\x0E\x01\x09\x04\x00\x100En mode Débutant, faut attraper un insecte de\nchacune des cinq espèces indiquées à l'écran.\nAttention, t'es prêt?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de rubis.\nEt t'imagine pas que je vais te faire un\nprix parce qu'on va à l'école ensemble!\nPas fou, le taon!")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf("\x0E\x01\x09\x04\x12\x813Tu crois que tu peux te lancer dans la\nchasse aux insectes avec si peu de <r<c\x153urs>>...\non voit bien que t'as aucune idée de ce\nqui t'attend!\n\x0E\x01\x09\x04\x00\x100Reviens me voir quand t'auras plus de c\x153urs!")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf("\x0E\x01\x09\x04\x03\x100J'te chronomètre! Si tu fais un temps\nrespectable, t'auras une récompense!\n\n\n\x0E\x01\x09\x04\x00\x100En mode Expert, faut attraper un total de\ndix insectes, des huit espèces indiquées à\nl'écran. Attention, t'es prêt?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de rubis.\nEt t'imagine pas que je vais te faire un\nprix parce qu'on va à l'école ensemble!\nPas fou, le taon!")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x12\x513Eh ben, faut croire que je m'étais trompé\nsur toi. Tu mérites pas mes insectes!")
          						}
          					  case 1:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x13\x80AAttends, t'as pas de <r<filet>>? C'est pas sérieux!\n\n\n\n\x0E\x01\x09\x04\x00\x500Tu n'as évidemment jamais ressenti la passion,\nles frissons et l'émotion d'une vraie chasse\naux insectes.\n\nTu fais franchement pitié, tu sais? \x0E\x01\x09\x04\x03\x100Bon, mieux\nvaut tard que jamais... Y en a dans la <r<boutique\nde Beedle>>, alors va t'en chercher un et\nreviens vite!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! Je suis surpris de te\nvoir ici, toi!\n\n\n\x0E\x01\x09\x04\x12\x600J'me suis perdu dans le brouillard et j'ai\natterri ici, sur cette île.\n\n\n\x0E\x01\x09\x04\x00\x100J'ai découvert que c'est un habitat idéal pour\ntoutes sortes d'insectes!\n\n\n\x0E\x01\x09\x04\x03\x104J'ai donc décidé d'y vivre mon rêve. Je vais\nélever un tas d'insectes ici! Comme ça, je\npourrai attraper des insectes à volonté!\n\n\x0E\x01\x09\x04\x00\x100Dis donc... Aurais-tu envie de faire une petite\npartie de chasse? Je peux t'arranger ça,\nsi tu veux!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf("\x0E\x01\x09\x04\x00\x100Tu vas aimer ça! J'ai élaboré deux niveaux de\ndifficulté : <r<Débutant>>, juste pour se détendre,\net <r<Expert>>, pour les entomologistes comme moi.\n\n\x0E\x01\x09\x04\x03\x100Comme tu n'as pas l'habitude, pour toi c'est\n<r<20 rubis >>en mode Débutant, et <r<50 rubis>> en\nmode Expert.\n[1]Débutant[2]Expert[3-]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf("\x0E\x01\x09\x04\x13\x80AAttends, t'as pas de <r<filet>>? C'est pas sérieux!\n\n\n\n\x0E\x01\x09\x04\x00\x500Tu n'as évidemment jamais ressenti la passion,\nles frissons et l'émotion d'une vraie chasse\naux insectes.\n\nTu fais franchement pitié, tu sais? \x0E\x01\x09\x04\x03\x100Bon, mieux\nvaut tard que jamais... Y en a dans la <r<boutique\nde Beedle>>, alors va t'en chercher un et\nreviens vite!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf("\x0E\x01\x09\x04\x00\x04Héhéhé, t'es venu chercher le <b<Golofa\nDemonicus Rex>>?\n[1]Évidemment![2-]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf("Les affaires sont les affaires! Va falloir me\ndonner <r<10 rubis>>.\n[1]Les voilà![2-]Pas question")
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
/*< 41>*/ 										printf("\x0E\x01\x09\x04\x04\x100Tu vas devoir attraper dix insectes\nde mon choix.\n\n\n\x0E\x01\x09\x04\x03\x100Je te chronomètre. Tu as <r<trois minutes>>\npour t'exécuter.\n\n\n\x0E\x01\x09\x04\x00\x100Si tu réussis, je te donnerai le\n<b<Golofa Demonicus Rex>>.\n\n\nC'est beau? C'est parti!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf("\x0E\x01\x09\x04\x13\x807Minute, papillon! T'as toujours pas de filet,\nj'te ferais remarquer. T'es pas équipé pour\nfaire une chasse aux insectes.\n\n\x0E\x01\x09\x04\x04\x100Va acheter un <r<filet>>, et on en reparlera!")
          									}
          								  case 1:
/*<106>*/ 									printf("\x0E\x01\x09\x04\x12\x813Tu crois que tu peux te lancer dans la\nchasse aux insectes avec si peu de <r<c\x153urs>>...\non voit bien que t'as aucune idée de ce\nqui t'attend!\n\x0E\x01\x09\x04\x00\x100Reviens me voir quand t'auras plus de c\x153urs!")
          								}
          							  case 1:
/*< 39>*/ 								printf("\x0E\x01\x09\x04\x12\x315On dirait bien que t'as pas assez de rubis.\nEt t'imagine pas que je vais te faire un\nprix parce qu'on va à l'école ensemble!\nPas fou, le taon!")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x12\x305Faut que j'arrête de te regarder, tu me donnes\nle <r<cafard>>!\n\n\n\x0E\x01\x09\x04\x00\x100Et j'en ai déjà suffisamment dans ma collection!\nHéhéhé! \x0E\x01\x09\x04\x00\x04")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf("\x0E\x01\x09\x04\x00\x04Héhéhé, salut Link!\nLa vie est belle?\n\n\n\x0E\x01\x09\x04\x00\x100Pourquoi j'ai le sourire fendu jusqu'aux oreilles,\ntu dis? Héhé, t'as remarqué, hein!\n\n\nJe vais te le dire : j'ai trouvé l'insecte le plus\nrare du monde!\n[1]Raconte![2]Puis après?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf("\x0E\x01\x09\x04\x03\x100Ah ah! Je vois que j'ai piqué ta curiosité!\n\n\n\nEt bien, tu seras pas déçu...<pause1E> \x0E\x01\x09\x04\x13\x100J'ai réussi à\ndénicher le légendaire <b<Golofa Demonicus Rex>>!\n\n\n\x0E\x01\x09\x04\x03\x100Il n'en existe quasiment plus! C'est bien simple,\nc'est un miracle! Je n'ai pas arrêté de sourire\ndepuis que je l'ai trouvé. Je suis assez content!")
/*< 54>*/ 						printf("\x0E\x01\x09\x04\x01\x800Comment ça, c'est l'insecte de Beedle?\nLe Beedle qui se promène toute la\njournée dans sa boutique volante?\n[1]Rends\x2010le\x2010lui![2]Pauvre Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf("\x0E\x01\x09\x04\x10\x800Tu croyais vraiment que j'allais avaler une\nhistoire de la sorte? Pff!\n\n\n\x0E\x01\x09\x04\x13\x100C'est moi qui l'ai trouvé, et je le garde!")
          							flw_51:
/*< 51>*/ 							printf("\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Je sais bien que ce ne serait pas bien gentil\nde garder l'insecte préféré de quelqu'un d'autre,\nmais...\n\n\x0E\x01\x09\x04\x12\x100Je peux pas me décider à te le donner comme\nça, pour rien... Je sais que j'devrais, mais...\n\n\n\x0E\x01\x09\x04\x00\x500J'ai une idée!\n\n\n\n\x0E\x01\x09\x04\x00\x100Prouve\x2010moi que tu es le plus grand chasseur\nd'insectes en réussissant un temps du tonnerre\ndans mon jeu, et je te rendrai ma\nprécieuse bibitte...\n\x0E\x01\x09\x04\x03\x100Qu'est-ce que t'en dis? Tu relèves le défi?\n[1]Allons\x2010y![2-]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf("\x0E\x01\x09\x04\x12\x500J'ai pas l'impression que tu réalises la valeur\nde cette petite bestiole...\n\n\n\x0E\x01\x09\x04\x00\x100Le simple fait de l'avoir ici avec moi va faire\ngrimper ma renommée en flèche parmi les\nchasseurs d'insectes! Je vais devenir célèbre!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf("\x0E\x01\x09\x04\x12\x515On dirait que tu te crois vraiment tout permis,\ntoi!")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x05Comment ça, t'as plus envie d'attraper\ndes insectes? Tu dis ça pour rire, j'espère?\n[1]J'en ai assez.[2-]Bien oui, voyons.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf("\x0E\x01\x09\x04\x12\x500J'en reviens pas... À croire que le charme des\ninsectes te passe six pieds au\x2010dessus de la tête.\nT'as pas attrapé la piqûre, finalement...")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf("J'en étais sûr! Les gars comme nous, on aime\nça la chasse aux insectes... en bibitte! Hihi!")
          		}
          	  case 2:
/*< 19>*/ 		printf("\x0E\x01\x09\x04\x12\x500Hmm, il me semble que tu prends bien\ntrop de temps...\n\n\n\n\x0E\x01\x09\x04\x00\x100Bon, ça suffit! Désolé, mais le temps limite\nest écoulé!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x13\x1000Tout doux, tout doux! Faudrait que tu fasses\nplus attention. Tu as failli y passer!\n\n\n\x0E\x01\x09\x04\x03\x100N'oublie pas que certains insectes se\ndéfendent! Si tu continues comme ça,\nje donne pas cher de ta peau! Désolé,\nmais je dois arrêter la partie.")
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
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x12\x107C'est terminé! Avoue que tu as du\nchemin à faire.\n\n\n\x0E\x01\x09\x04\x00\x100La prochaine fois, essaie de prendre <r<moins de\ncinq minutes>>. Continue de t'entraîner.\n\n\n\x0E\x01\x09\x04\x03\x100En passant, si t'as des insectes à me vendre,\nje suis preneur. Passe me voir la nuit!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x12\x500Tu devrais ouvrir ton c\x153ur aux insectes...\nCe sont tes amis, tu sais.\n\n\n\x0E\x01\x09\x04\x00\x100Reviens quand tu l'auras compris!")
          			  case 2:
/*< 22>*/ 				printf("\x0E\x01\x09\x04\x03\x100Désolé, pas de remboursements!\n\n\n\n\x0E\x01\x09\x04\x00\x100Meilleure chance la prochaine fois!")
          			  case 3:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x04Héhéhé... T'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte!\nJe connais ça...\n\n\x0E\x01\x09\x04\x00\x500Désolé, je rembourse pas! Va te refaire\nune santé et repasse me voir!")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf("\x0E\x01\x09\x04\x12\x104C'est terminé! Bof, c'était pas si mal.\n\n\n\n\x0E\x01\x09\x04\x00\x100Si tu sais à l'avance où les trouver, tu feras\nun meilleur temps! Essaie de mettre <r<moins\nde trois minutes >>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf("\x0E\x01\x09\x04\x03\x100C'est bon. Je t'accorde une récompense.\nVoilà <r<80 rubis>>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf("\x0E\x01\x09\x04\x00\x04C'est terminé! J'avoue que je ne m'attendais\npas à bien mieux que ça de ta part.\n\n\n\x0E\x01\x09\x04\x00\x100Un conseil : y a des insectes qui sont plus faciles\nà attraper dans certains coins que dans d'autres,\nalors cherche partout, partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf("\x0E\x01\x09\x04\x03\x100La prochaine fois, essaie de mettre <r<moins\nde trois minutes>>! Ah, et puis, tiens...\nVoici <r<30 rubis >>pour toi!")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x811C'est terminé! Le temps est écoulé. Hé!\nTa prestation... C'est pas piqué des mouches!\n\n\n\x0E\x01\x09\x04\x00\x100Tu vas peut-être te qualifier meilleur chasseur\nd'insectes, si ça continue! Bien, après moi,\nc'est sûr. Mets <r<moins de deux minutes >>la\nprochaine fois!\nTiens... Voici ton prix... Devine ce que c'est...\nTu n'en reviendras pas... Hihi! <r<Cinq>> insectes!\nT'es content, hein!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x11C'est terminé! Hé, bien. Tu t'en es bien tiré,\ndis donc. Je pense que tu as du potentiel.\n\n\n\x0E\x01\x09\x04\x12\x500Mais ne t'enfle pas la tête pour autant. Tu n'as\npas encore mérité que je te donne un seul de\nmes précieux insectes.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf("Donne ton maximum la prochaine fois et essaie\nde finir en <r<moins de deux minutes>>.\n\n\nTiens, pour cette fois, tu gagnes <r<50 rubis>>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x13\x811C'est terminé! Hein!? Mais... Mais c'est\ntotalement impensable!\n\n\n\x0E\x01\x09\x04\x00\x100Je dois me rendre à l'évidence et admettre\nque t'es le meilleur chasseur d'insectes du\nmonde. Je m'incline, Monsieur.\n\n\x0E\x01\x09\x04\x04\x100Tiens, voici ton prix. Des insectes, évidemment,\nmais ce sont <r<cinq>> insectes rares en... bibitte!\nHihi.")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Prends\x2010en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x03\x811C'est terminé! Le temps est écoulé! Mais, c'est...\nC'est exceptionnel!\n\n\n\x0E\x01\x09\x04\x12\x100Mais ne nous emportons point. Ce n'était que\nle mode Débutant!\n\n\n\x0E\x01\x09\x04\x00\x100Tente ta chance en mode Expert, la prochaine\nfois! Tiens, voici ton prix : <r<cinq>> de mes\ninsectes rares!")
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
/*< 64>*/ 					printf("\x0E\x01\x09\x04\x00\x13Ouf...\n\n\n\n\x0E\x01\x09\x04\x12\x500Désolé, mais le <b<Golofa Demonicus Rex >>va\nrester encore un peu avec moi!\n\n\n\x0E\x01\x09\x04\x00\x100Tu dois finir en moins de trois minutes!\nBien, vas-y! Secoue-toi!")
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
/*< 71>*/ 				printf("OK, c'est terminé! \x0E\x01\x09\x04\x00\x04Héhéhé, je pensais pas que\ntu y arriverais si facilement!")
/*< 67>*/ 				printf("\x0E\x01\x09\x04\x12\x500Très bien, chose promise, chose due. Tu peux\nprendre le <b<Golofa Demonicus Rex>>.\n\n\n\x0E\x01\x09\x04\x00\x100Je dois l'avouer. Tu es vraiment un champion.\nPas besoin de me <r<piquer >>une crise...\n\n\n\x0E\x01\x09\x04\x03\x100... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x04\x500Tu diras à Beedle que je m'excuse si je l'ai\nfait stresser.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

