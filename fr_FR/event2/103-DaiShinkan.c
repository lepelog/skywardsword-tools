          void entrypoint_103_01() {
          	start()
/*< 77>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*< 78>*/ 		printf("\x0E\x01\x09\x04\x00\x05Tu ne ressens toujours pas la présence\nde ton célestrier ?\n\n\nFais le calme en ton c\x153ur et\nconcentre\x2010toi. Tu y verras plus clair.")
          	  case 1:
/*<  1>*/ 		switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          		  case 0:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link ! As\x2010tu retrouvé\nton célestrier ?\n\n\n<pause28>Comment ? Tu soupçonnes <b<Hergo >>?\nCela ne m'étonnerait guère de la part\nde cet incorrigible garnement !")
/*< 79>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 71, 'param3': 32}
/*< 71>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 72, 'param3': 16}
/*< 72>*/ 			{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 0, 'next': 73, 'param3': 17}
/*< 73>*/ 			printf("Directeur, si c'est bien la vérité,\nrepousser le départ de la chevauchée\nn'est pas un problème.\n\nEt si Hergo y est pour quelque chose,\nje doute qu'il ose protester.")
/*< 74>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 75, 'param3': 16}
/*< 75>*/ 			printf("Hmm, en effet !\n\n\n\n\x0E\x03\x01\x00Link, ne t'en fais pas.\nVa tranquillement chercher ton\ncélestrier.")
/*< 76>*/ 			scene_flags[0 'Skyloft'][92 /* 0xA 10 */] = true;
          		  case 1:
/*<  2>*/ 			printf("\x0E\x01\x09\x04\x00\x05Je vais expliquer la situation à maître\n<b<Hulul>><pause0F>, Link.\nDis\x2010lui de venir dans mon bureau.\n\nLes autres élèves ont peut\x2010être vu ton\ncélestrier, tu devrais les interroger...\nIls sont sûrement sur la grand\x2010place.")
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
/*< 68>*/ 	printf("\x0E\x01\x09\x04\x00\x05J'ai du mal à croire que tout ceci est\nréellement en train d'arriver mais...\n\n\nJe me demande bien ce qui se passera\nsi tu essaies de faire ce qu'elle te dit !\n")
          }

          void entrypoint_103_06() {
/*< 17>*/ 	start()
/*< 63>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*< 82>*/ 		switch (zone_temp_flags[19 /* 0x3 08 */]) {
          		  case 0:
          			flw_84:
/*< 84>*/ 			printf("\x0E\x01\x09\x04\x00\x04Je suis convaincu que grâce à toi,\nje pourrai revoir ma Zelda !\n\n\nJe compte sur toi, Link !")
/*< 83>*/ 			zone_temp_flags[19 /* 0x3 08 */] = true;
          		  case 1:
/*< 64>*/ 			printf("\x0E\x01\x09\x04\x00\x02Ah, Link !\n\n\n\nAlors finalement, la Déesse a...<pause1E>\nL'île de la Déesse a disparu !\n[1]En fait...[2]Euh...")
/*< 66>*/ 			switch (choice(2)) {
          			  case 0:
          				flw_65:
/*< 65>*/ 				printf("N'en dis pas plus, Link !\n\n\n\n<y+<Lorsque le grand fléau\n                                              elle éradiquera,\nLa Déesse sur la terre\n                                        enfin retournera...\n>>C'est ainsi que se termine la <r<légende>>\nqui m'a été transmise...<pause14> À présent, j'en\ncomprends enfin le sens...\n\nCela signifie donc que tout est enfin\nterminé, non ? <pause14>Et ma fille...<pause0A> Zelda\nest\x2010elle saine et sauve ?\n[1]Pardon...[2]Non")
/*< 98>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_99:
/*< 99>*/ 					printf("Je vois...\nTu n'as rien à te reprocher.\n\n\nConcentre\x2010toi sur ta mission.\nFais de ton mieux et tout devrait\nbien se passer.")
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
/*< 97>*/ 			printf("\x0E\x01\x09\x04\x00\x04Il me semble avoir entendu un grand\nbruit qui venait de dehors...\n\n\nBah, peu importe. Le sort de Zelda\nest entre tes mains !")
          		  case 1:
/*< 87>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*< 88>*/ 				switch (zone_temp_flags[19 /* 0x3 08 */]) {
          				  case 0:
/*< 91>*/ 					printf("\x0E\x01\x09\x04\x00\x04Je crois avoir déjà vu ce joyau\nquelque part. Mais je ne me rappelle\nplus où...\n\nTu pourrais peut\x2010être demander au \ndiseur de bonne aventure ?")
          				  case 1:
/*< 89>*/ 					printf("\x0E\x01\x09\x04\x00\x02Bonjour, Link !\nComment vas\x2010tu ?\n\n\nComment ? Tu dois insérer le <r<sceau\ndes épreuves>> quelque part ?\n\n\nIl me semble avoir déjà vu un\nendroit qui conviendrait, mais\nje ne me rappelle plus où...")
/*< 90>*/ 					zone_temp_flags[19 /* 0x3 08 */] = true;
          				}
          			  case 1:
/*< 80>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
/*< 81>*/ 					printf("Tu as pu calmer Narisha et obtenir des\ninformations au sujet de la Triforce ?\n\n\nTu as tant appris, et en si peu de\ntemps...\n\n\nMais tu as encore beaucoup à faire,\nalors tiens bon !")
          				  case 1:
/*< 60>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*< 62>*/ 						{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 61, 'param3': 13}
/*< 61>*/ 						printf("Ce qui est arrivé à Narisha est terrible.\nEn tout cas, sois prudent : l'attaque\ntornade est à double tranchant, alors\nattends le bon moment pour l'utiliser !")
          					  case 1:
/*< 34>*/ 						switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          						  case 0:
/*< 59>*/ 							{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4, 'next': 31, 'param3': 13}
/*< 31>*/ 							printf("Va demander à maître <b<Arfan>> ce qu'il\nsait sur Narisha. Tu le trouveras dans\nla pièce d'à côté.")
          						  case 1:
/*< 85>*/ 							switch (story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */]) {
          							  case 0:
/*< 86>*/ 								printf("\x0E\x01\x09\x04\x00\x02Il doit bien y avoir quelqu'un qui en\nsait davantage...\n\n\nMais à Célesbourg, ceux qui\nconnaissent les légendes anciennes\nsont peu nombreux... Hmm...")
          							  case 1:
/*< 20>*/ 								switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          								  case 0:
/*< 35>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 									{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 21, 'param3': 13}
/*< 21>*/ 									printf("Oh, Link ! Tu as retrouvé\nla piste de Zelda ?\n\n\nQue se passe\x2010t\x2010il \x0E\x01\x06\x02\xFECD?\x0E\x01\x06\x02Í\nDis\x2010moi tout, je t'en prie !")
/*< 69>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 22, 'param3': 6}
/*< 22>*/ 									printf("\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í Tu ne peux pas en parler\nmaintenant, dis\x2010tu ? Même si tu\naimerais pouvoir le faire ?\nHmm\x0E\x01\x06\x02\xFECD...")
/*< 70>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 37, 'param3': 6}
/*< 37>*/ 									printf("\x0E\x03\x01\x00Link, j'ai bien réfléchi à\nce que je pouvais faire pour toi...\n\n\nTa quête pour retrouver Zelda te\ncontraint à la solitude. C'est là ta\ndestinée.\n\nJe me suis donc demandé ce qu'un\nvieillard comme moi pouvait\nt'apporter\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\n\nEt c'est la connaissance... \n\n\n\nTu peux me poser n'importe quelle\nquestion concernant Célesbourg !\n[1]En fait...[2]Je n'en ai pas")
/*< 23>*/ 									switch (choice(2)) {
          									  case 0:
          										flw_25:
/*< 25>*/ 										printf("Comment ? Ce que je sais sur la\n<y+<Triforce>>\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í?\n\n\nOù as\x2010tu entendu parler de cela ?\n\n\n\nIl existe de nombreux écrits anciens\nqui traitent de la Triforce...\n\n\nMais aucun ne fait mention du lieu\noù elle se trouve. Cela reste donc\nun mystère...")
/*< 26>*/ 										printf("Je t'avais promis la connaissance,\net je ne peux t'en apprendre plus...\nTu m'en vois réellement désolé.")
/*< 32>*/ 										story_flags[327 /* us: 805A9AFF 0x20, jp: 805ACD7F 0x20 */] = true;
          									  case 1:
/*< 24>*/ 										printf("Tu n'as pas besoin des connaissances\nd'un vieillard, dis\x2010tu ?\n\n\nNe sois pas aveugle à ce que je peux\nt'apporter, et pose\x2010moi plutôt une\nquestion, veux\x2010tu ?")
          										goto flw_25
          									}
          								  case 1:
/*< 19>*/ 									switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          									  case 0:
/*< 57>*/ 										{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 5, 'next': 18, 'param3': 13}
/*< 18>*/ 										printf("\x0E\x03\x01\x00Link ! Je ne peux compter\nque sur toi...\n\n\nVa, pars secourir Zelda au plus vite !")
          									  case 1:
/*< 11>*/ 										switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          										  case 0:
/*< 56>*/ 											{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 1, 'next': 12, 'param3': 13}
/*< 12>*/ 											printf("Celui qui orientera deux ailes vers\nla tour de lumière trouvera le chant\ndes légendes...\n\n\x0E\x03\x01\x00Link, ces paroles ont été\ntransmises à Célesbourg de génération\nen génération.\n\nCe qui veut dire que ces <r<deux ailes>>\ndoivent se trouver ici...\n\n\nLa question est donc : où ?\nJ'espère que cela peut t'aider...")
          										  case 1:
/*< 50>*/ 											switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          											  case 0:
/*< 36>*/ 												{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 55, 'param3': 31}
/*< 55>*/ 												{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 13}
/*< 92>*/ 												printf("Tu es de retour, Link !\nTu n'as pas l'air blessé... Tant mieux.\n\n\nAlors, as\x2010tu appris quelque chose qui te\npermettrait de retrouver Zelda ?")
/*< 94>*/ 												set_camera(10, 0)
/*< 93>*/ 												printf("\x0E\x01\x09\x04\x00\x05Hmm, je vois\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nZelda... C'est incroyable...\n\n\nVisiblement, toi aussi tu as dû subir de\nrudes épreuves.")
/*< 95>*/ 												set_camera(-1, 0)
/*<  4>*/ 												printf("Comment ?<pause28> Les paroles de la chanson\nque chantait Zelda le jour de la\ncérémonie ?\n\nAhem, je ne suis pas sûr qu'à mon âge,\nj'aie encore la voix nécessaire pour...\n[1]Juste les\nparoles[2]Chantez !")
/*<  5>*/ 												switch (choice(2)) {
          												  case 0:
/*<  7>*/ 													printf("Ah ! Juste les paroles ?\nMais oui, bien sûr.\n\n\nLes voici...")
          													flw_8:
/*<  8>*/ 													printf("<y+<\x0E\x01\x06\x02\xFCCDFier enfant guidé par\x0E\x01\x06\x02\x4CD\n                                          <y+<\x0E\x01\x06\x02\xFCCD<y+<la divine envoyée,\nIl <y+<porte la lumière<y+<\x0E\x01\x06\x02\x4CD<y+<\n                                  <y+<\x0E\x01\x06\x02\xFCCD<y+<pour <y+<ciel et terre lier.>>\x0E\x01\x06\x02Í\nIl y a également une suite...\n\n\n\n<y+<\x0E\x01\x06\x02\xFCCD>><y+<Vers la tour de lumière\x0E\x01\x06\x02\x4CD\n                     \x0E\x01\x06\x02\xFCCDdeux grandes ailes il incline,\nLa voie qui mène aux chants\x0E\x01\x06\x02\x4CD\n                              \x0E\x01\x06\x02\xFCCDsous ses yeux se dessine.\x0E\x01\x06\x02Í>>")
/*<  9>*/ 													printf("Ce sont les paroles de la chanson...\n\n\n\nLa <r<tour de lumière>> est la tour qui se\ntrouve sur la grand\x2010place. Quant aux\n« ailes », je ne suis pas sûr de\ncomprendre\x0E\x01\x06\x02\xFECD...\nIl semblerait que diriger deux ailes\nvers la tour de lumière provoquerait\nquelque chose\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\n\n<r<Deux grandes ailes>>... Hmm\x0E\x01\x06\x02\xFECD...")
/*< 10>*/ 													story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */] = true;
/*<100>*/ 													story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          												  case 1:
/*<  6>*/ 													printf("Arrêtons là les plaisanteries, veux\x2010tu !\nSi tu veux connaître les paroles, je\npeux te les répéter.\n\nLes voici...")
          													goto flw_8
          												}
          											  case 1:
/*< 52>*/ 												switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          												  case 0:
/*< 51>*/ 													printf("\x0E\x01\x09\x04\x00\x02Alors, Link, tu as\nretrouvé Zelda ?\n\n\nJe pense qu'il est préférable que ce qui\ns'est passé cette nuit\x2010là reste entre\nnous...\n\nJe ne veux pas que le village succombe\nà la panique. Tout repose sur tes\népaules, et j'en suis désolé.")
          												  case 1:
/*< 53>*/ 													printf("\x0E\x01\x09\x04\x00\x01Le <r<capitaine des chevaliers >>qui t'a\nappris à manier l'épée s'inquiétait\nà l'idée de ton départ.\n\nEt si tu allais le voir avant de partir ?\n\n\n\n\x0E\x03\x01\x00Link... Le sort de ma fille\nest entre tes mains !")
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
/*< 28>*/ 	printf("Attends une seconde,\nLink !")
/*< 43>*/ 	set_camera(1, 0)
/*< 44>*/ 	{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 100, 'next': 29, 'param3': 15}
/*< 29>*/ 	printf("J'ai peut\x2010être une piste.\n\n\n\nTu sais qu'il existe un <r<esprit des cieux>>\ntrès ancien appelé <b<Narisha>>, n'est\x2010ce\npas ?\n\n\x0E\x01\n\x04\x02ÍAussi loin que remonte la mémoire,\nNarisha a veillé sur les cieux. C'est un\nsage dont les connaissances dépassent\nl'imagination.\nIl sait certainement quelque chose sur\nla <y+<Triforce>>.\n[1]Où est\x2010il ?[2]Un sage ?")
/*< 38>*/ 	switch (choice(2)) {
          	  case 0:
/*< 39>*/ 		printf("Bonne question...")
          		flw_45:
/*< 45>*/ 		set_camera(3, 0)
/*< 30>*/ 		printf("Comme tu l'as toi\x2010même remarqué, un\nétrange <r<cumulonimbus >>géant a fait son\napparition dans le ciel récemment...\n\nIl est fort possible que Narisha ait été\nenfermé à l'intérieur.")
/*< 46>*/ 		set_camera(4, 0)
/*< 41>*/ 		printf("J'ai donc demandé à maître <b<Arfan\n>>de vérifier cette information en\nétudiant cet énorme nuage.\n\nIl ne m'a pas encore rendu son rapport,\navec toute cette agitation...\n\n\nPourquoi n'irais\x2010tu pas demander à\nmaître <b<Arfan >>ce qu'il sait sur Narisha ?")
/*< 33>*/ 		story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */] = true;
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 40>*/ 		printf("Oui, il sait tant de choses...")
          		goto flw_45
          	}
          }

          void entrypoint_103_08() {
/*< 48>*/ 	start()
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x00\x17Mais qu'attends\x2010tu pour plonger\net appeler ton célestrier ?\nTout le monde est déjà parti !")
          }

