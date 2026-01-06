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
/*<  4>*/ 						printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000001>Alors, prêt à commencer la chasse? Peut-être\nque tu vas attraper la piqûre, qui sait? Hihi.\n\n\nJe sens que tu vas bien t'en sortir.\n<color red<20 rubis>coloroff> pour le mode Débutant,\n<color red<50 rubis>coloroff> pour le mode Expert.\nQu'est-ce que tu choisis?\n[1-]Débutant[2-]Expert[3]Rien, merci")
          						flw_1:
/*<  1>*/ 						switch (choice(3)) {
          						  case 0:
/*<102>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 96>*/ 								switch (has_rupees(20)) {
          								  case 0:
/*< 98>*/ 									rupees += -20;
/*< 91>*/ 									printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00030100>J'te chronomètre! Si tu fais un temps\nrespectable, t'auras une récompense!\n\n\n<0x10009:0x00000100>En mode Débutant, faut attraper un insecte de\nchacune des cinq espèces indiquées à l'écran.\nAttention, t'es prêt?")
/*< 75>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = false;
/*<  2>*/ 									make_actor_do_something(0, 0)
          								  case 1:
/*< 97>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de rubis.\nEt t'imagine pas que je vais te faire un\nprix parce qu'on va à l'école ensemble!\nPas fou, le taon!")
          								}
          							  case 1:
          								flw_104:
/*<104>*/ 								printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Tu crois que tu peux te lancer dans la\nchasse aux insectes avec si peu de <color red<cœurs>coloroff>...\non voit bien que t'as aucune idée de ce\nqui t'attend!\n<0x10009:0x00000100>Reviens me voir quand t'auras plus de cœurs!")
          							}
          						  case 1:
/*<103>*/ 							switch (context_related2(0)) {
          							  case 0:
/*< 93>*/ 								switch (has_rupees(50)) {
          								  case 0:
/*< 95>*/ 									rupees += -50;
/*< 92>*/ 									printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00030100>J'te chronomètre! Si tu fais un temps\nrespectable, t'auras une récompense!\n\n\n<0x10009:0x00000100>En mode Expert, faut attraper un total de\ndix insectes, des huit espèces indiquées à\nl'écran. Attention, t'es prêt?")
/*< 76>*/ 									story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */] = true;
/*< 12>*/ 									make_actor_do_something(1, 0)
          								  case 1:
/*< 94>*/ 									printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de rubis.\nEt t'imagine pas que je vais te faire un\nprix parce qu'on va à l'école ensemble!\nPas fou, le taon!")
          								}
          							  case 1:
          								goto flw_104
          							}
          						  case 2:
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00120513>Eh ben, faut croire que je m'étais trompé\nsur toi. Tu mérites pas mes insectes!")
          						}
          					  case 1:
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color red<filet>coloroff>? C'est pas sérieux!\n\n\n\n<0x10009:0x00000500>Tu n'as évidemment jamais ressenti la passion,\nles frissons et l'émotion d'une vraie chasse\naux insectes.\n\nTu fais franchement pitié, tu sais? <0x10009:0x00030100>Bon, mieux\nvaut tard que jamais... Y en a dans la <color red<boutique\nde Beedle>coloroff>, alors va t'en chercher un et\nreviens vite!")
          					}
          				  case 1:
/*< 56>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 					story_flags[201 /* us: 805A9AEF 0x08, jp: 805ACD6F 0x08 */] = true;
/*< 49>*/ 					story_flags[286 /* us: 805A9AFA 0x01, jp: 805ACD7A 0x01 */] = true;
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Tiens, <heroname>! Je suis surpris de te\nvoir ici, toi!\n\n\n<0x10009:0x00120600>J'me suis perdu dans le brouillard et j'ai\natterri ici, sur cette île.\n\n\n<0x10009:0x00000100>J'ai découvert que c'est un habitat idéal pour\ntoutes sortes d'insectes!\n\n\n<0x10009:0x00030104>J'ai donc décidé d'y vivre mon rêve. Je vais\nélever un tas d'insectes ici! Comme ça, je\npourrai attraper des insectes à volonté!\n\n<0x10009:0x00000100>Dis donc... Aurais-tu envie de faire une petite\npartie de chasse? Je peux t'arranger ça,\nsi tu veux!")
/*<112>*/ 					check_item_flag(71, 1)
/*<111>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 62}) {
          					  case 0:
/*<110>*/ 						printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000100>Tu vas aimer ça! J'ai élaboré deux niveaux de\ndifficulté : <color red<Débutant>coloroff>, juste pour se détendre,\net <color red<Expert>coloroff>, pour les entomologistes comme moi.\n\n<0x10009:0x00030100>Comme tu n'as pas l'habitude, pour toi c'est\n<color red<20 rubis >coloroff>en mode Débutant, et <color red<50 rubis>coloroff> en\nmode Expert.\n[1-]Débutant[2-]Expert[3]Non merci")
          						goto flw_1
          					  case 1:
/*<113>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x0013080a>Attends, t'as pas de <color red<filet>coloroff>? C'est pas sérieux!\n\n\n\n<0x10009:0x00000500>Tu n'as évidemment jamais ressenti la passion,\nles frissons et l'émotion d'une vraie chasse\naux insectes.\n\nTu fais franchement pitié, tu sais? <0x10009:0x00030100>Bon, mieux\nvaut tard que jamais... Y en a dans la <color red<boutique\nde Beedle>coloroff>, alors va t'en chercher un et\nreviens vite!")
          					}
          				}
          			  case 1:
/*< 26>*/ 				switch (story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */]) {
          				  case 0:
/*< 42>*/ 					printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000004>Héhéhé, t'es venu chercher le <color blue<Golofa\nDemonicus Rex>coloroff>?\n[1-]Évidemment![2]Euh, non")
          					flw_50:
/*< 50>*/ 					switch (choice(2)) {
          					  case 0:
/*< 58>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Les affaires sont les affaires! Va falloir me\ndonner <color red<10 rubis>coloroff>.\n[1-]Les voilà![2]Pas question")
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
/*< 41>*/ 										printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00040100>Tu vas devoir attraper dix insectes\nde mon choix.\n\n\n<0x10009:0x00030100>Je te chronomètre. Tu as <color red<trois minutes>coloroff>\npour t'exécuter.\n\n\n<0x10009:0x00000100>Si tu réussis, je te donnerai le\n<color blue<Golofa Demonicus Rex>coloroff>.\n\n\nC'est beau? C'est parti!")
/*< 37>*/ 										make_actor_do_something(1, 0)
          									  case 1:
/*<119>*/ 										printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00130807>Minute, papillon! T'as toujours pas de filet,\nj'te ferais remarquer. T'es pas équipé pour\nfaire une chasse aux insectes.\n\n<0x10009:0x00040100>Va acheter un <color red<filet>coloroff>, et on en reparlera!")
          									}
          								  case 1:
/*<106>*/ 									printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00120813>Tu crois que tu peux te lancer dans la\nchasse aux insectes avec si peu de <color red<cœurs>coloroff>...\non voit bien que t'as aucune idée de ce\nqui t'attend!\n<0x10009:0x00000100>Reviens me voir quand t'auras plus de cœurs!")
          								}
          							  case 1:
/*< 39>*/ 								printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00120315>On dirait bien que t'as pas assez de rubis.\nEt t'imagine pas que je vais te faire un\nprix parce qu'on va à l'école ensemble!\nPas fou, le taon!")
          							}
          						  case 1:
          							flw_52:
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00120305>Faut que j'arrête de te regarder, tu me donnes\nle <color red<cafard>coloroff>!\n\n\n<0x10009:0x00000100>Et j'en ai déjà suffisamment dans ma collection!\nHéhéhé! <0x10009:0x00000004>")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 31>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 28, 'param3': 31}
/*< 28>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000004>Héhéhé, salut <heroname>!\nLa vie est belle?\n\n\n<0x10009:0x00000100>Pourquoi j'ai le sourire fendu jusqu'aux oreilles,\ntu dis? Héhé, t'as remarqué, hein!\n\n\nJe vais te le dire : j'ai trouvé l'insecte le plus\nrare du monde!\n[1-]Raconte![2-]Puis après?")
/*< 29>*/ 					switch (choice(2)) {
          					  case 0:
/*< 27>*/ 						story_flags[475 /* us: 805A9B0E 0x80, jp: 805ACD8E 0x80 */] = true;
/*< 32>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030100>Ah ah! Je vois que j'ai piqué ta curiosité!\n\n\n\nEt bien, tu seras pas déçu...<pause 30> <0x10009:0x00130100>J'ai réussi à\ndénicher le légendaire <color blue<Golofa Demonicus Rex>coloroff>!\n\n\n<0x10009:0x00030100>Il n'en existe quasiment plus! C'est bien simple,\nc'est un miracle! Je n'ai pas arrêté de sourire\ndepuis que je l'ai trouvé. Je suis assez content!")
/*< 54>*/ 						printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00010800>Comment ça, c'est l'insecte de Beedle?\nLe Beedle qui se promène toute la\njournée dans sa boutique volante?\n[1-]Rends‐le‐lui![2-]Pauvre Beedle...")
/*< 33>*/ 						switch (choice(2)) {
          						  case 0:
/*< 35>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100800>Tu croyais vraiment que j'allais avaler une\nhistoire de la sorte? Pff!\n\n\n<0x10009:0x00130100>C'est moi qui l'ai trouvé, et je le garde!")
          							flw_51:
/*< 51>*/ 							printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10006:0xfdcd>...<0x10006:0x00cd> Je sais bien que ce ne serait pas bien gentil\nde garder l'insecte préféré de quelqu'un d'autre,\nmais...\n\n<0x10009:0x00120100>Je peux pas me décider à te le donner comme\nça, pour rien... Je sais que j'devrais, mais...\n\n\n<0x10009:0x00000500>J'ai une idée!\n\n\n\n<0x10009:0x00000100>Prouve‐moi que tu es le plus grand chasseur\nd'insectes en réussissant un temps du tonnerre\ndans mon jeu, et je te rendrai ma\nprécieuse bibitte...\n<0x10009:0x00030100>Qu'est-ce que t'en dis? Tu relèves le défi?\n[1-]Allons‐y![2]Plus tard")
          							goto flw_50
          						  case 1:
/*< 34>*/ 							printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00120500>J'ai pas l'impression que tu réalises la valeur\nde cette petite bestiole...\n\n\n<0x10009:0x00000100>Le simple fait de l'avoir ici avec moi va faire\ngrimper ma renommée en flèche parmi les\nchasseurs d'insectes! Je vais devenir célèbre!")
          							goto flw_51
          						}
          					  case 1:
/*< 30>*/ 						printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00120515>On dirait que tu te crois vraiment tout permis,\ntoi!")
          					}
          				}
          			}
          		  case 1:
          			goto flw_5
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Comment ça, t'as plus envie d'attraper\ndes insectes? Tu dis ça pour rire, j'espère?\n[1-]J'en ai assez.[2]Bien oui, voyons.")
/*< 17>*/ 		switch (choice(2)) {
          		  case 0:
/*< 14>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120500>J'en reviens pas... À croire que le charme des\ninsectes te passe six pieds au‐dessus de la tête.\nT'as pas attrapé la piqûre, finalement...")
/*< 18>*/ 			make_actor_do_something(3, 0)
          		  case 1:
/*< 16>*/ 			printf(/* textboxtype: 0, unk: 0, line: 11 */ "J'en étais sûr! Les gars comme nous, on aime\nça la chasse aux insectes... en bibitte! Hihi!")
          		}
          	  case 2:
/*< 19>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00120500>Hmm, il me semble que tu prends bien\ntrop de temps...\n\n\n\n<0x10009:0x00000100>Bon, ça suffit! Désolé, mais le temps limite\nest écoulé!")
/*< 23>*/ 		make_actor_do_something(4, 0)
          	  case 3:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00131000>Tout doux, tout doux! Faudrait que tu fasses\nplus attention. Tu as failli y passer!\n\n\n<0x10009:0x00030100>N'oublie pas que certains insectes se\ndéfendent! Si tu continues comme ça,\nje donne pas cher de ta peau! Désolé,\nmais je dois arrêter la partie.")
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
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00120107>C'est terminé! Avoue que tu as du\nchemin à faire.\n\n\n<0x10009:0x00000100>La prochaine fois, essaie de prendre <color red<moins de\ncinq minutes>coloroff>. Continue de t'entraîner.\n\n\n<0x10009:0x00030100>En passant, si t'as des insectes à me vendre,\nje suis preneur. Passe me voir la nuit!")
/*< 45>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 21>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00120500>Tu devrais ouvrir ton cœur aux insectes...\nCe sont tes amis, tu sais.\n\n\n<0x10009:0x00000100>Reviens quand tu l'auras compris!")
          			  case 2:
/*< 22>*/ 				printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00030100>Désolé, pas de remboursements!\n\n\n\n<0x10009:0x00000100>Meilleure chance la prochaine fois!")
          			  case 3:
/*<101>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Héhéhé... T'étais tellement absorbé que t'as frisé\nla mort sans même t'en rendre compte!\nJe connais ça...\n\n<0x10009:0x00000500>Désolé, je rembourse pas! Va te refaire\nune santé et repasse me voir!")
          			}
          		  case 1:
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 77, 'param3': 44}
/*< 77>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 78>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00120104>C'est terminé! Bof, c'était pas si mal.\n\n\n\n<0x10009:0x00000100>Si tu sais à l'avance où les trouver, tu feras\nun meilleur temps! Essaie de mettre <color red<moins\nde trois minutes >coloroff>la prochaine fois.")
/*< 59>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 120, 'param3': 12}
/*<120>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00030100>C'est bon. Je t'accorde une récompense.\nVoilà <color red<80 rubis>coloroff>.")
/*< 81>*/ 				rupees += 80;
/*< 80>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 1:
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000004>C'est terminé! J'avoue que je ne m'attendais\npas à bien mieux que ça de ta part.\n\n\n<0x10009:0x00000100>Un conseil : y a des insectes qui sont plus faciles\nà attraper dans certains coins que dans d'autres,\nalors cherche partout, partout.")
/*<122>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 121, 'param3': 12}
/*<121>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00030100>La prochaine fois, essaie de mettre <color red<moins\nde trois minutes>coloroff>! Ah, et puis, tiens...\nVoici <color red<30 rubis >coloroff>pour toi!")
/*< 55>*/ 				rupees += 30;
/*< 46>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 2:
/*< 88>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 87, 'param3': 44}
/*< 87>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000811>C'est terminé! Le temps est écoulé. Hé!\nTa prestation... C'est pas piqué des mouches!\n\n\n<0x10009:0x00000100>Tu vas peut-être te qualifier meilleur chasseur\nd'insectes, si ça continue! Bien, après moi,\nc'est sûr. Mets <color red<moins de deux minutes >coloroff>la\nprochaine fois!\nTiens... Voici ton prix... Devine ce que c'est...\nTu n'en reviendras pas... Hihi! <color red<Cinq>coloroff> insectes!\nT'es content, hein!")
/*< 82>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 129, 'param3': 45}
/*<129>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<108>*/ 				give_item(23 0x17);
/*<130>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<125>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000011>C'est terminé! Hé, bien. Tu t'en es bien tiré,\ndis donc. Je pense que tu as du potentiel.\n\n\n<0x10009:0x00120500>Mais ne t'enfle pas la tête pour autant. Tu n'as\npas encore mérité que je te donne un seul de\nmes précieux insectes.")
/*<124>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 123, 'param3': 12}
/*<123>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "Donne ton maximum la prochaine fois et essaie\nde finir en <color red<moins de deux minutes>coloroff>.\n\n\nTiens, pour cette fois, tu gagnes <color red<50 rubis>coloroff>!")
/*< 86>*/ 				rupees += 50;
/*< 47>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			}
          		  case 3:
/*< 90>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 89, 'param3': 44}
/*< 89>*/ 			switch (story_flags[684 /* us: 805A9B21 0x02, jp: 805ACDA1 0x02 */]) {
          			  case 0:
/*< 84>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00130811>C'est terminé! Hein!? Mais... Mais c'est\ntotalement impensable!\n\n\n<0x10009:0x00000100>Je dois me rendre à l'évidence et admettre\nque t'es le meilleur chasseur d'insectes du\nmonde. Je m'incline, Monsieur.\n\n<0x10009:0x00040100>Tiens, voici ton prix. Des insectes, évidemment,\nmais ce sont <color red<cinq>coloroff> insectes rares en... bibitte!\nHihi.")
/*< 85>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 131, 'param3': 45}
/*<131>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = true;
/*<109>*/ 				give_item(24 0x18);
/*<133>*/ 				story_flags[1093 /* us: 805A9B52 0x08, jp: 805ACDD2 0x08 */] = false;
/*<126>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00ffff00>Prends‐en bien soin, surtout...")
          			  case 1:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00030811>C'est terminé! Le temps est écoulé! Mais, c'est...\nC'est exceptionnel!\n\n\n<0x10009:0x00120100>Mais ne nous emportons point. Ce n'était que\nle mode Débutant!\n\n\n<0x10009:0x00000100>Tente ta chance en mode Expert, la prochaine\nfois! Tiens, voici ton prix : <color red<cinq>coloroff> de mes\ninsectes rares!")
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
/*< 64>*/ 					printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00000013>Ouf...\n\n\n\n<0x10009:0x00120500>Désolé, mais le <color blue<Golofa Demonicus Rex >coloroff>va\nrester encore un peu avec moi!\n\n\n<0x10009:0x00000100>Tu dois finir en moins de trois minutes!\nBien, vas-y! Secoue-toi!")
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
/*< 71>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "OK, c'est terminé! <0x10009:0x00000004>Héhéhé, je pensais pas que\ntu y arriverais si facilement!")
/*< 67>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00120500>Très bien, chose promise, chose due. Tu peux\nprendre le <color blue<Golofa Demonicus Rex>coloroff>.\n\n\n<0x10009:0x00000100>Je dois l'avouer. Tu es vraiment un champion.\nPas besoin de me <color red<piquer >coloroff>une crise...\n\n\n<0x10009:0x00030100>... Héhéhé...")
/*< 68>*/ 				story_flags[476 /* us: 805A9B11 0x01, jp: 805ACD91 0x01 */] = true;
/*< 69>*/ 				give_item(159 0x9F);
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00040500>Tu diras à Beedle que je m'excuse si je l'ai\nfait stresser.")
/*< 70>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 45}
          			  case 3:
          				goto flw_72
          			}
          		  case 1:
          			goto flw_9
          		}
          	}
          }

