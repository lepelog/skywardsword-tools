          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000005>Tu ne ressens toujours pas la présence de ton\ncélestrier?\n\n\nFais le calme en ton cœur et concentre‐toi.\nTu y verras plus clair.")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>Oh, <heroname>! As‐tu retrouvé ton\ncélestrier?\n\n\n<pause 40>Que dis-tu? Tu soupçonnes <color blue<Hergo>coloroff>? Cela ne\nm'étonnerait guère de la part de cet\nincorrigible garnement!")
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 71, 'param3': 32}
/*< 71>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 72, 'param3': 16}
/*< 72>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 73, 'param3': 17}
/*< 73>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "Directeur, si c'est bien la vérité, repousser le\ndépart de la chevauchée n'est pas un problème.\n\n\nEt si Hergo y est pour quelque chose, je doute\nqu'il ose protester.")
/*< 74>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 75, 'param3': 16}
/*< 75>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Hmm, en effet!\n\n\n\n<0x30001:0x><heroname>, ne t'en fais pas. Va\ntranquillement chercher ton célestrier.")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<103>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_2:
/*<  2>*/ 				printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000005>Je vais expliquer la situation à maître <color blue<Hulul>coloroff><pause 15>,\n<heroname>. Dis‐lui de venir dans\nmon bureau.\n\nLes autres élèves ont peut‐être vu ton célestrier,\ntu devrais les interroger... Ils sont sûrement sur\nla grand‐place.")
/*<102>*/ 				entrypoint_100_58();
          			  case 1:
/*<101>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 2, 'param3': 31}
          				goto flw_2
          			}
          		}
          	}
          }

          void entrypoint_103_02() {
/*< 13>*/ 	start()
/*< 14>*/ 	scene_flags[0 'Skyloft'][5 /* 0x1 20 */] = true;
/*< 15>*/ 	scene_flags[0 'Skyloft'][6 /* 0x1 40 */] = true;
/*< 16>*/ 	scene_flags[0 'Skyloft'][1 /* 0x1 02 */] = true;
/*< 42>*/ 	scene_flags[0 'Skyloft'][67 /* 0x9 08 */] = true;
          }

          void entrypoint_103_03() {
/*< 67>*/ 	start()
/*< 68>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000005>J'ai du mal à croire que tout ceci est\nréellement en train d'arriver mais...\n\n\nJe me demande bien ce qui se passera\nsi tu essaies de faire ce qu'elle te dit!")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (zone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000004>Je suis convaincu que grâce à toi, je pourrai\nrevoir ma Zelda! C'est ce qui m'importe le plus.\n\n\nJe compte sur toi, <heroname>!")
/*< 83>*/ 			zone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000002>Ciel, <heroname>!\n\n\n\nAlors finalement, la Déesse a...<pause 30> L'île de la\nDéesse a disparu!\n[1-]En fait...[2-]Euh...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf(/* textboxtype: 0, unk: 0, line: 26 */ "N'en dis pas plus, <heroname>!\n\n\n\n<color yellow white<Lorsque le grand fléau\n                                        elle éradiquera,\nLa Déesse sur la terre\n                                    enfin retournera...\n>coloroff>C'est ainsi que se termine la <color red<légende >coloroff>qui m'a\nété transmise...<pause 20> À présent, j'en comprends\nenfin le sens...\n\nCela signifie donc que tout est enfin terminé,\nnon? <pause 20>Et ma fille...<pause 10> Zelda est‐elle saine et\nsauve?\n[1-]Pardon...[2-]Non")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "Je vois... Tu n'as rien à te reprocher.\n\n\n\nConcentre‐toi sur ta mission. Fais de ton mieux\net tout devrait bien se passer.")
          					goto flw_84
          				  case 1:
          					goto flw_99
          				}
          			  case 1:
          				goto flw_65
          			}
          		}
          	  case 1:
/*< 96>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*< 97>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00000004>Il me semble avoir entendu un grand bruit\nqui venait de dehors...\n\n\nBah, ce sont peut-être mes vieilles oreilles qui\nme jouent des tours. Va! Va sauver Zelda!\nSon sort est entre tes mains!")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (zone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Je crois avoir déjà vu ce joyau quelque part.\nMais je ne me rappelle plus où...\n\n\nTu pourrais peut‐être demander au diseur de\nbonne aventure?")
          				  case 1:
/*< 89>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000002>Bonjour, <heroname>! Est-ce que tu fais\ndes progrès?\n\n\nPardon? Tu dois insérer le <color red<joyau des épreuves\n>coloroff>quelque part?\n\n\nAh oui, ce joyau... Je crois avoir déjà vu un\nendroit adéquat, mais je ne me rappelle plus\ntrop où c'était...")
/*< 90>*/ 					zone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "Tu as pu calmer Narisha et obtenir des\ninformations au sujet de la Triforce?\n\n\nTu as tant appris, et en si peu de temps...\n\n\n\nMais tu as encore beaucoup à faire, alors\ntiens bon!")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 61, 'param3': 13}
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 24 */ "Ce qui est arrivé à Narisha est terrible. En tout\ncas, sois prudent : l'attaque tornade comporte\ndes risques, alors attends le bon moment pour\nl'utiliser!")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 31, 'param3': 13}
/*< 31>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "Va demander à maître <color blue<Arfan>coloroff> ce qu'il sait sur\nNarisha. Tu le trouveras dans la pièce d'à côté.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x00000002>Il doit bien y avoir quelqu'un qui en sait\ndavantage...\n\n\nMais à Célesbourg, ceux qui connaissent les\nlégendes anciennes sont peu nombreux... Hmm...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 									{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 13}
/*< 21>*/ 									printf(/* textboxtype: 0, unk: 0, line: 17 */ "Oh, <heroname>! Tu as retrouvé la piste\nde Zelda?\n\n\nQue se passe‐t‐il <0x10006:0xfecd>?<0x10006:0x00cd> Dis‐moi tout, je t'en prie!")
/*< 69>*/ 									wait_frames(40)
/*< 22>*/ 									printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10006:0xfecd>...<0x10006:0x00cd> Tu ne peux pas en parler maintenant, c'est\nça? Même si tu aimerais pouvoir le faire?\nHmm<0x10006:0xfecd>...")
/*< 70>*/ 									wait_frames(30)
/*< 37>*/ 									printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x30001:0x><heroname>, j'ai bien réfléchi à ce que je\npouvais faire pour toi...\n\n\nTa quête pour retrouver Zelda te contraint à la\nsolitude. C'est là ta destinée.\n\n\nJe me suis donc demandé ce qu'un vieillard\ncomme moi pouvait t'apporter<0x10006:0xfecd>...<0x10006:0x00cd>\n\n\nEt c'est la connaissance... \n\n\n\nTu peux me poser n'importe quelle question\nconcernant Célesbourg!\n[1-]En fait...[2-]Je n'en ai pas")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf(/* textboxtype: 0, unk: 0, line: 20 */ "Tu veux savoir ce que je connais de la\n<color yellow white<Triforce>coloroff><0x10006:0xfecd>...<0x10006:0x00cd>?\n\n\nOù as‐tu entendu parler de cela?\n\n\n\nIl existe de nombreux écrits anciens qui traitent\nde la Triforce...\n\n\nMais aucun ne fait mention du lieu où elle se\ntrouve. Cela reste donc un mystère...")
/*< 26>*/ 										printf(/* textboxtype: 0, unk: 1, line: 22 */ "Je t'avais promis la connaissance, et je ne peux\nt'en apprendre plus à ce sujet. Tu m'en vois\nréellement désolé.")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf(/* textboxtype: 1, unk: 0, line: 21 */ "Tu n'as pas besoin des connaissances d'un\nvieillard? C'est ça?\n\n\nNe sois pas aveugle à ce que je peux t'apporter,\net pose‐moi plutôt une question, veux‐tu?")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 5, 'next': 18, 'param3': 13}
/*< 18>*/ 										printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x30001:0x><heroname>! Je ne peux compter\nque sur toi...\n\n\nVa, pars secourir Zelda au plus vite!")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 12, 'param3': 13}
/*< 12>*/ 											printf(/* textboxtype: 1, unk: 0, line: 15 */ "Celui qui orientera deux ailes vers la tour de\nlumière trouvera le chant des légendes...\n\n\n<0x30001:0x><heroname>, ces paroles ont été\ntransmises à Célesbourg de génération\nen génération.\n\nCe qui veut dire que ces <color red<deux ailes >coloroff>doivent\nse trouver ici...\n\n\nLa question est donc : où? J'espère que cela\npeut t'aider...")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
/*< 55>*/ 												{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 13}
/*< 92>*/ 												printf(/* textboxtype: 0, unk: 0, line: 8 */ "Tu es revenu, <heroname>! Tu n'as pas\nl'air blessé... Tant mieux.\n\n\nDis donc, as‐tu appris quelque chose qui te\npermettrait de retrouver Zelda?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000005>Hmm, je vois<0x10006:0xfbcd>...<0x10006:0x00cd> Ma pauvre petite Zelda...\nCe doit être terrifiant pour elle tout ça.\n\n\nCe doit être une rude épreuve pour toi aussi,\nj'imagine.")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf(/* textboxtype: 0, unk: 1, line: 10 */ "Pardon?<pause 40> Tu veux connaître les paroles de la\nchanson que chantait Zelda le jour de la\ncérémonie?\n\nAhem, je ne suis pas sûr que j'aie une bonne\nvoix pour la chanter...\n[1-]Juste les paroles[2-]Chantez!")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf(/* textboxtype: 1, unk: 0, line: 12 */ "Ah! Juste les paroles? Ouf, je suis soulagé.\nL'idée de te sérénader ne me souriait pas\ntellement. Alors... Les paroles...")
          													flw_8:
/*<  8>*/ 													printf(/* textboxtype: 0, unk: 1, line: 13 */ "<color yellow white<<0x10006:0xfccd>Fier enfant guidé par<0x10006:0x04cd>\n                                     <0x10006:0xfccd>la divine envoyée,\nIl porte la lumière<0x10006:0x04cd>\n                               <0x10006:0xfccd>pour ciel et terre lier.>coloroff><0x10006:0x00cd>\nIl y a également une suite...\n\n\n\n<color yellow white<<0x10006:0xfccd>Vers la tour de lumière<0x10006:0x04cd>\n                       <0x10006:0xfccd>deux grandes ailes il incline,\nLa voie qui mène aux chants<0x10006:0x04cd>\n                             <0x10006:0xfccd>sous ses yeux se dessine.<0x10006:0x00cd>>coloroff>")
/*<  9>*/ 													printf(/* textboxtype: 0, unk: 0, line: 14 */ "Je crois que c'est tout.\n\n\n\nLa <color red<tour de lumière>coloroff> est la tour qui se trouve sur\nla grand‐place. Quant aux « ailes », je ne suis\npas sûr de comprendre<0x10006:0xfecd>...\n\nIl semblerait que diriger deux ailes vers la tour\nde lumière provoquerait quelque chose<0x10006:0xfecd>...<0x10006:0x00cd>\n\n\n<color red<Deux grandes ailes>coloroff>... Hmm<0x10006:0xfecd>...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf(/* textboxtype: 0, unk: 0, line: 11 */ "Écoute‐moi bien, jeune homme. Te faire la\nsérénade me gênerait trop, alors je vais me\ncontenter de te réciter les paroles. Voyons...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000002>Alors, <heroname>, les recherches vont\nbon train? As-tu découvert des pistes qui\npourront t'aider à retrouver notre chère Zelda?\n\nC'est dommage que tu aies à faire face à cette\nmission tout seul. Mais, je pense qu'il est\npréférable que ce qui s'est passé cette\nnuit‐là reste entre nous...\n\nJe ne voudrais surtout pas que le village\nsuccombe à la panique.\n\n\nJe crains que tout repose sur tes épaules.\nSois brave et que les vents te soient favorables.")
          												  case 1:
/*< 53>*/ 													printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Le <color red<capitaine des chevaliers >coloroff>qui t'a appris à\nmanier l'épée s'inquiétait à l'idée de ton départ.\n\n\nTu devrais aller le voir avant de partir.\nIl est sans doute à la salle d'escrime.\n\n\n\n<0x30001:0x><heroname>... Prends bien soin de toi.\nLe sort de ma fille est entre tes mains!")
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_103_07() {
/*< 27>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 28, 'param3': 13}
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "Attends une seconde, <heroname>!")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 29, 'param3': 15}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "J'ai peut‐être une piste.\n\n\n\nTu sais qu'il existe un <color red<esprit des cieux >coloroff>très\nancien appelé <color blue<Narisha>coloroff>, n'est‐ce pas?\n\n\n<0x1000A:0x000200cd>Aussi loin que remonte la mémoire, Narisha\na veillé sur les cieux. C'est un sage dont les\nconnaissances dépassent l'imagination.\n\nIl sait certainement quelque chose sur\nla <color yellow white<Triforce>coloroff>.\n[1-]Où est‐il?[2-]Un sage?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 0, line: 35 */ "Bonne question...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "Comme tu l'as toi‐même remarqué, un étrange\n<color red<cumulonimbus >coloroff>géant a fait son apparition dans\nle ciel récemment...\n\nIl est fort possible que Narisha ait été enfermé\nà l'intérieur.")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf(/* textboxtype: 0, unk: 0, line: 38 */ "J'ai donc demandé à maître <color blue<Arfan >coloroff>de vérifier\ncette information en étudiant cet énorme nuage.\n\n\nIl ne m'a pas encore rendu son rapport, avec\ntoute cette agitation autour de la disparition\nde Zelda.\n\nPourquoi n'irais‐tu pas demander à maître\n<color blue<Arfan >coloroff>ce qu'il sait sur Narisha?")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Oui, il sait tant de choses...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000017>Mais qu'attends‐tu pour plonger et appeler ton\ncélestrier? Tout le monde est déjà parti!")
          }

