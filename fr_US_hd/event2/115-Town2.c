          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\nAh, tu as des trésors à me vendre?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf("\x0E\x01\x09\x04\x12\x600Sache que cette nuit, j'achète ceci :\n- <y<<string arg0>>>\n- <y<<string arg1>>>\n\n- <y<<string arg2>>>\n- <y<<string arg3>>>\n\x0E\x01\x09\x04\x10\x600Alors, ça te va?\n\n[1]D'accord[2-]Tant pis")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf("Qu'est\x2010ce que tu veux me vendre?\n<y<[1]<string arg0>[2]<string arg1>[3]<string arg2>[4]<string arg3>>> ")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf("\x0E\x01\x09\x04\x12\x600Joli. Je te propose <numeric arg0> rubis la pièce.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf("\x0E\x01\x09\x04\x10\x600Tu en as <numeric arg4>, à ce que je vois... Combien veux\x2010tu\nm'en vendre?\n[1]1[2]5[3]Tout[4-]J'ai changé\nd'idée")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf("<y<\x0E\x01\x09\x04\x12\x900>>Tu es prêt à m'en vendre <numeric arg0>, c'est bien ça?\nJe t'en donne <numeric arg1> rubis.\n[1]Vendu![2-]Pas question!")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf("\x0E\x01\x09\x04\x10\x80ATrès bien! Voilà ton argent!")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 429, 'param3': 6}
/*<429>*/ 								printf("Merci beaucoup! N'hésite pas à revenir!")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf("\x0E\x01\x09\x04\x0F\x0CJe vois... Eh bien, j'espère te revoir bientôt!")
          							}
          						  case 1:
/*<431>*/ 							printf("\x0E\x01\x09\x04\x0F\x409N'essaie pas de m'avoir, je vois bien que tu n'en\nas pas autant! On ne badine pas en affaires!")
          							goto flw_656
          						}
          					  case 1:
/*<499>*/ 						make_actor_do_something(5, 0)
          						goto flw_497
          					  case 2:
/*<498>*/ 						make_actor_do_something(6, 0)
          						goto flw_497
          					  case 3:
          						goto flw_410
          					}
          				  case 1:
          					flw_494:
/*<494>*/ 					printf("\x0E\x01\x09\x04\x0F\x409Vraiment? Et comment tu vas faire? Tu n'en\nas même pas! Tu me fais perdre mon temps!\n\n\nAs\x2010tu vraiment quoi que ce soit à me vendre?\n\n\n\n[1]Oui[2-]Non")
/*<480>*/ 					switch (choice(2)) {
          					  case 0:
          						goto flw_414
          					  case 1:
          						goto flw_410
          					}
          				}
          			  case 1:
/*<487>*/ 				make_actor_do_something(1, 0)
/*<482>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<490>*/ 					printf("\x0E\x01\x09\x04\x12\x600Je te donne <numeric arg1> rubis la pièce.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf("<y<\x0E\x01\x09\x04\x12\x600>><numeric arg2> rubis la pièce, ça te convient?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf("\x0E\x01\x09\x04\x12\x600Je te donne <numeric arg3> rubis la pièce.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			}
          		  case 1:
          			goto flw_410
          		}
          	  case 1:
/*<493>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 442, 'param3': 31}
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\nAh, tiens, bonsoir! Que puis\x2010je faire pour toi?\n[1]Faire des achats[2]Euh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf("\x0E\x01\x09\x04\x0F\x409Des achats? Dommage, mais tu vas devoir\nrevenir demain!")
          		  case 1:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x13\x609« Euh... »? On dirait bien que tu n'as pas\naffaire ici. Débarrasse, le jeune, veux-tu?")
/*<438>*/ 			printf("Comment ça, tu me trouves bougon? Tu ne\nme reconnais pas, tu dis?\n\n\n\x0E\x01\x09\x04\x10\x60BEh bien, c'est la nuit, vois-tu? Le soir, je range\nmon faux sourire et je le remets le lendemain\nmatin! Ça fatigue, de faire semblant!\n\nBon. Ça suffit. Tu disais que tu es venu faire\ndes achats, comme ça?\n\n\nEs-tu ici pour magasiner à l'<r<armurerie de nuit>>?\n[1]C'est quoi?[2]C'est ça!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x09Ah, c'est la première fois que tu viens?\nJe vois...")
          				flw_434:
/*<434>*/ 				printf("\x0E\x01\x09\x04\x12\x600Le jour, je vends, et la nuit, j'achète! <r<Je peux\nt'acheter des trésors>>, mais attention, je ne\nprends pas n'importe quoi! \n\nIl n'y a que <r<certains trésors>> qui m'intéressent...\n\n\n\n\x0E\x01\x09\x04\x10\x600Très bien, voyons ce que tu as à me proposer!")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf("\x0E\x01\x09\x04\x0F\x409Il fallait le dire plus tôt!")
          				goto flw_434
          			}
          		}
          	}
          }

          void entrypoint_115_20() {
/*< 56>*/ 	start()
/*<535>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*<173>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 57, 'param3': 13}
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00TArgh! Mmph... Mmph... Au\x2010au\x2010au secours!")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf("\x0E\x01\x09\x04\x00\x17Aaaargh... <b<Kiko>>, mon espèce! Je te dé-tes-te!\nJe me vengerai!")
          	}
          }

          void entrypoint_115_03() {
/*<426>*/ 	start()
/*<425>*/ 	switch (story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */]) {
          	  case 0:
/*<717>*/ 		switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          		  case 0:
/*<718>*/ 			switch (story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */]) {
          			  case 0:
          				flw_479:
/*<479>*/ 				switch (random(2)) {
          				  case 0:
/*<478>*/ 					printf("\x0E\x01\x09\x04\x03\x01Ah, c'est toi, Link. Je me doutais\nque je te verrais ici. T'as du nouveau pour moi?")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf("Hmm, il y a trois insectes qui me tentent,\nce soir... Voici leurs noms :\n\n\n- <y<<string arg0>>>\n- <y<<string arg1>>>\n- <y<<string arg2>>>\n[1]Parfait![2-]Laisse faire")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf("Qu'est\x2010ce que tu me proposes?\n<y<[1]<string arg0>[2]<string arg1>[3]<string arg2>>>")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf("Hmm, j'en cherchais justement...\nJe t'offre <numeric arg0> rubis par spécimen.")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf("T'en as <numeric arg4>? Ça m'intéresse...\nT'es prêt à m'en vendre combien?\n[1]1[2]5[3]Tout[4-]Aucun")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf("\x0E\x01\x09\x04\x03\x14Hmm, intéressant... Je t'en donne <numeric arg1> rubis.\n\n\n\n[1]Vendu![2-]Pas question")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf("Tiens, voilà ton fric.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf("\x0E\x01\x09\x04\x03\xFF04Merci bien! Je me sens toujours mieux avec\ndes insectes plein les poches!\n\n\nN'hésite pas à m'en apporter d'autres,\nLink!")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf("\x0E\x01\x09\x04\x01\xFF13Oh, c'est « blatte »... \x0E\x01\x09\x04\x00\x500À la prochaine « cigale »...")
          										}
          									  case 1:
/*<459>*/ 										printf("\x0E\x01\x09\x04\x12\x100Non, mais t'en as même pas tant que ça.\nBon. On recommence.\nT'es prêt à m'en laisser combien?")
          										goto flw_657
          									}
          								  case 1:
/*<454>*/ 									make_actor_do_something(5, 0)
          									goto flw_452
          								  case 2:
/*<453>*/ 									make_actor_do_something(6, 0)
          									goto flw_452
          								  case 3:
          									goto flw_473
          								}
          							  case 1:
          								flw_470:
/*<470>*/ 								printf("\x0E\x01\x09\x04\x10\xFF0CNon mais... Je vois bien que t'en as pas!\nJe sais pas à quoi tu joues, mais je trouve\npas ça très drôle!\n\n\x0E\x01\x09\x04\x01\xFF00T'as des insectes à me vendre, oui ou non?\n[1]Oui[2-]Non")
/*<460>*/ 								switch (choice(2)) {
          								  case 0:
          									goto flw_472
          								  case 1:
          									goto flw_473
          								}
          							}
          						  case 1:
/*<465>*/ 							make_actor_do_something(1, 0)
/*<462>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<468>*/ 								printf("Oh oh... Ça me tente bien! Je te donne\n<numeric arg1> rubis la pièce.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf("On n'en a jamais trop, de ceux\x2010là! J'achète!\n<numeric arg2> rubis la pièce.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf("\x0E\x01\x09\x04\x03\x01Hé, Link! Y a quelque chose qui\nm'a mis la puce à l'oreille, aujourd'hui. Et je\npeux te dire que ça chatouille! Héhéhé...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf("\x0E\x01\x09\x04\x03\x01T'es peut\x2010être déjà au courant, mais tout à\nl'heure, je suis allé faire un tour dans la\ngrotte de la chute.\n\nJ'y ai trouvé tout un groupe de <r<papillons\nazur >>qui voletaient ensemble dans un\nendroit bien ordinaire.\n\nJe me demande pourquoi ils se regroupent\ncomme ça... Tu trouves pas ça bizarre, toi?\n\n\nSi tu veux voir ça par toi\x2010même, rends\x2010toi\ndans la grotte, la nuit...")
/*<722>*/ 				printf("Voyons voir! Quels insectes m'as\x2010tu apportés,\nce soir?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf("\x0E\x01\x09\x04\x00\xFF01Encore toi, Link? Qu'est\x2010ce que\ntu me veux?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf("<r<\x0E\x01\x09\x04\x00\x300>>Hein? Tu veux savoir ce que je suis en train\nde faire?\n\n\x0E\x01\x09\x04ÿ\x114Bien, j'admire mes <r<insectes>>...")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 418, 'param3': 6}
/*<418>*/ 		printf("\x0E\x01\x09\x04\x01\xFF00Ils sont extraordinaires... Totalement\nfascinants, bien plus qu'Hergo... De\nbien des façons!\n\nBien...<pause1E> Je ne veux pas dire qu'Hergo est une\nméchante bibitte!")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf("Écoute, <r<les insectes me passionnent>>... Je veux\nen posséder des centaines!\n\n\nMon rêve le plus fou, ça serait d'avoir mon\nîle à moi, remplie d'insectes!")
/*<424>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF01Tiens, j'ai quelque chose à te proposer.\n\n\n\n\x0E\x03\x01\x00Link, <r<si tu trouves des insectes,\nje suis prêt à te les acheter>>!\n\n\nEt je te garantis que quand je parle bibitte,\nje suis généreux!\n[1]Très bien[2]Pas question")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf("\x0E\x01\x09\x04\x03\xFF04Mouhahaha! Ma collection d'insectes va\naugmenter quelque chose de rare!")
          			flw_420:
/*<420>*/ 			printf("Bien, si jamais t'as envie de me vendre des\ninsectes, tu me trouveras ici. Je suis là\ntoutes les nuits!\n\n\x0E\x01\x09\x04\x12\x100Mais j'achète pas n'importe quoi! Je décide de\nmes acquisitions <r<selon l'humeur du moment>>.\n\n\nAutre chose... Je suis comme qui dirait un\noiseau de nuit, tu vois. Une sorte de luciole,\nen fait.\n\nTout ça pour te dire que j'achète des insectes\n<r<seulement la nuit>>. Et, j'ai pas vraiment\nenvie que ça se sache...\n\n\x0E\x01\x09\x04\x03\xFF14Compris, Link? Je sais bien\nqu'on n'est pas des grands amis, toi et\nmoi, mais j'te fais confiance.")
/*<447>*/ 			printf("Bon, montre-moi ce que tu as. As-tu des\ninsectes à me vendre?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf("\x0E\x01\x09\x04\x01\xFF05Quoi? C'est pas très gentil, ça! Je vais tout\nraconter à Hergo!")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x00\x00Rrrrrrrrrrr... Pchhhhhhh... ZZZZZZZZZZ...")
          }

          void entrypoint_115_21() {
/*< 67>*/ 	start()
/*< 68>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*< 85>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<798>*/ 			entrypoint_115_28();
          		  case 1:
/*< 84>*/ 			switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          				  case 0:
/*<799>*/ 					switch (zone_temp_flags[20 /* 0x3 10 */]) {
          					  case 0:
/*<116>*/ 						printf("\x0E\x01\x09\x04\x08\x909Hihihi! Merci, Link!\nGrâce à toi, j'ai un super amoureux!\n\n\nMais quand même... Pauvre <b<Orbo>>...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x00\x01Merci de m'avoir apporté cette lettre,\nLink.\n\n\n\x0E\x01\x09\x04\x01\xD14Aah... Je me demande ce que <b<Kiko >>penserait\nde tout ça...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf("\x0E\x01\x09\x04\x00\x14Oh, Pffff... Comment je pourrais bien attirer\nl'attention de <b<Kiko>>?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x08\x404Ah! \x0E\x03\x01\x00Link!\n\n\n\nÇa va? Euh... Qu'est-ce que je peux faire pour\ntoi? \x0E\x01\x08\x02\xFECDAs-tu entendu ça?\x0E\x01\x08\x02Í\n\n\n[1]Donner la\nlettre[2]Garder la\nlettre")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf("\x0E\x01\x09\x04\x08\x906Quoi? Une lettre? Pour moi? <pause0A>.<pause0A>.<pause0A>.<pause0A>?\nElle est peut\x2010être de <b<Kiko>>!\n\n[1]Tiens![2]Laisse faire.")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x0E\x90AOh, merci! Donne.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 598, 'param3': 6}
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 611, 'param3': 6}
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf("\x0E\x01\x09\x04\x10\x400Je me demande de qui ça peut venir...")
/*<594>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 81, 'param3': 6}
/*< 81>*/ 						printf("\x0E\x01\x09\x04\x10\xD00Hmm... <pause14> \x0E\x01\x06\x02\xFECDDis donc, quelle écriture pourrie...\x0E\x01\x06\x02Í\n\n\n\n\x0E\x01\x09\x04\x10\x400Tant pis... Qu'est\x2010ce que ça dit...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 600, 'param3': 6}
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf("« Depuis le premier jour, mon amour pour toi\nest plus étendu que le ciel et plus profond\nque la mer de nuages. »\n\n\x0E\x01\x09\x04\x13\x1200« J'aimerais beaucoup sortir avec toi.\nTon chevalier servant, <b<Orbo >>»\n\n\n\x0E\x01\x09\x04\x00\x500.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.\n\n\n\n\x0E\x01\x09\x04\x01\xD00Euh... Cet... <b<Orbo>>... c'est pas un des acolytes\nd'<b<Hergo>>?\n\n\n\x0E\x01\x09\x04\x0C\x400Et... C'est... C'est bien une lettre d'amour\nde lui... Non?\n\n\n\x0E\x01\x09\x04\x0B\x712Oupelaye...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 612, 'param3': 6}
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf("\x0E\x01\x09\x04\x00\x09Mais bon... Il y a quand même mis tout\nson c\x153ur...\n\n\nPeut\x2010être que je devrais y réfléchir...\n\n\n\n\x0E\x01\x09\x04\x08\x900Me semble!\n\n\n\n\x0E\x01\x09\x04\x01\xD14Aah... Je me demande ce que <b<Kiko >>penserait\nde tout ça...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x08\x912Tu joues à quoi, là? Tu te moques de moi?")
          					}
          				  case 1:
/*< 76>*/ 					printf("\x0E\x01\x09\x04\x01\x406Hein? T'es bien bizarre, Link...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x01Dis, Link... Qu'est-ce que tu\npenses de <b<Kiko>>, toi?\n\n\n[1]Il est gentil.[2]Pourquoi?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf("\x0E\x01\x09\x04\x0B\x70AOh oui, moi aussi! Gentil et intelligent.\nEt beau comme un ange!\n\n\n\x0E\x01\x09\x04\x0C\x416Oh... j'sais pas ce qui m'a pris, tout d'un coup.\nDésolée...\n\n\n\x0E\x01\x09\x04\x08\x400Désolée de t'avoir posé une question\naussi bizarre...")
          			  case 1:
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x01\x406Hein? Euh... J'veux dire...\n\n\n\n\x0E\x01\x09\x04\x08\x416Non, rien! J'sais pas ce qui m'a pris, désolée...\nOublie ça.")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf("\x0E\x01\x09\x04\x00\x1001Ouais, tes habits te vont super bien!\n\n\n\n\x0E\x01\x09\x04\x00\x40AMais Kiko est encore plus beau dans\ncet uniforme!")
          			  case 1:
/*<668>*/ 				printf("\x0E\x01\x09\x04\x01\x404Ah! <pause14> \x0E\x03\x01\x00Link! C'est bien! T'as réussi\nl'examen! Félicitations!\n\n\n\x0E\x01\x09\x04\x08\x400Ouais... Alors maintenant t'as un uniforme vert,\nhein? <pause14>C'est trop... wow!\n\n\n\x0E\x01\x09\x04\n\x1000J'suis sûre que Zelda sera impressionnée\nen te voyant!\n\n\n\x0E\x01\x09\x04\x00\x406T'inquiète pas pour elle! J'suis sûre que tout\nva bien et qu'elle va bientôt rentrer.")
/*<670>*/ 				zone_temp_flags[15 /* 0x0 80 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_115_05() {
/*<  7>*/ 	start()
/*<830>*/ 	switch (story_flags[208 /* us: 805A9AF0 0x10, jp: 805ACD70 0x10 */]) {
          	  case 0:
/*<  8>*/ 		switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          		  case 0:
/*< 17>*/ 			switch (story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */]) {
          			  case 0:
/*< 22>*/ 				switch (story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */]) {
          				  case 0:
/*<104>*/ 					switch (zone_temp_flags[0 /* 0x1 01 */]) {
          					  case 0:
/*<579>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 105, 'param3': 13}
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Je vais enfin pouvoir récupérer un peu!\nMerci beaucoup!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x00\x08Ah! Merci à toi! De tout c\x153ur!")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf("\x0E\x01\x09\x04\x00\xE0DMais, on dirait...? Mais oui! C'est bien le\n<y<hochet >>du bébé! Tu l'as trouvé!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 556, 'param3': 6}
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 20, 'param3': 6}
/*< 20>*/ 						printf("Tiens, mon trésor... Je connais un gentil\nbébé qui va faire un gros dodo!\x0E\x01\x05\x04x\x00")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Ouf. Le bébé semble s'être calmé, on dirait.\nJe suis sûr qu'il va bien dormir cette nuit.\nEt moi de même!\n\n\x0E\x01\x09\x04\x10\xE00Merci beaucoup. Je n'oublierai jamais ce que\ntu viens de faire!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf("\x0E\x01\x09\x04\x0D\xF09Ahh... Si seulement quelqu'un pouvait trouver\nle <y<hochet >>du bébé...\n\n\n<r<\x0E\x01\x09\x04\x10\x00Un oiseau l'a emporté>>, mais je suis sûr qu'il\nest toujours <r<quelque part en ville>>...\n\n\n\x0E\x01\x09\x04\x0D\x00Ahh... Je sens que je ne vais pas beaucoup\ndormir cette nuit... Pour faire changement...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 11, 'param3': 6}
/*< 11>*/ 				printf("\x0E\x01\x06\x02\xFCCD...<pause2D>\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0D\x00 Aahhh...\x0E\x01\x05\x04A\x00")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf("Ahhh... On dirait que je vais encore manquer\nde sommeil cette nuit...\n\n\n[1]Pourquoi?[2]Tu es fatigué?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf("\x0E\x01\x09\x04\x10\xF06Oh excuse\x2010moi, t'as pas à t'inquiéter pour moi...")
          					flw_26:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x0D\xF00Le bébé pleure toute la nuit, en ce moment.\nJe ne dors plus! Pourtant, il faisait ses nuits,\navant.\n\nMais depuis qu'on a perdu son tu-sais-quoi...\n[1]Son quoi?[2]Oh, je vois...")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf("\x0E\x01\x09\x04\x10\xF01Son <y<hochet>>.")
          						flw_15:
/*< 15>*/ 						printf("\x0E\x01\x09\x04\x00\xF00Il suffirait de le lui donner pour qu'il se calme\nimmédiatement! Mais on l'a perdu, l'autre jour.\n\n\n<r<Un oiseau l'a emporté dans son bec>>. Il a dû\ncroire que ça se mangeait...\n\n\n\x0E\x01\x09\x04\x0E\xF00Et comme ce n'est pas le cas, il a dû\nl'abandonner <r<quelque part dans la ville>>.\n\n\nMais je n'ai pas réussi à mettre la main dessus...\n\n\n\n\x0E\x01\x09\x04\x00\x09Aah... si seulement quelqu'un pouvait\nle retrouver...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf("\x0E\x01\x09\x04\x10\xF04Tu es au courant, on dirait. C'est son <y<hochet\n>>qui lui manque.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf("\x0E\x01\x09\x04\x10\xF07Ça se voit tant que ça?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ahhh... Comment ça s'endort, au juste, un\nenfant? Je ne sais plus quoi faire!\n[1]Dur, dur[2]Où est\nsa mère?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oui, c'est dur! Assez dur... De toute façon,\nmême quand il pleure, il est adorable!\n\n\nTu comprendras quand tu en auras un,\ntoi aussi!")
          			  case 1:
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x07Ah, sa mère<pause0A>.<pause0A>.<pause0A>. Elle est fatiguée, la pauvre...\nElle travaille à la boutique toute la journée!\n\n\n\x0E\x01\x09\x04\x0D\xF06Le soir, il faut qu'elle se repose... Haha...")
          			}
          		}
          	  case 1:
          		goto flw_9
          	}
          }

          void entrypoint_115_22() {
/*< 88>*/ 	start()
/*< 89>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 91>*/ 		switch (story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */]) {
          		  case 0:
/*< 98>*/ 			switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          			  case 0:
/*<794>*/ 				switch (zone_temp_flags[20 /* 0x3 10 */]) {
          				  case 0:
/*< 99>*/ 					printf("\x0E\x01\x09\x04\x0C\x401Salut, Link! Grâce à toi,\nj'ai une super amoureuse! Merci!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf("\x0E\x01\x09\x04\x00\x18Hmm... Euh...\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Imaginons que tu veuilles savoir s'ils sortent\nensemble, est-ce que tu irais lui demander\ntoi\x2010même?\n\n\x0E\x01\x09\x04\x11\xE00Ça n'a rien à voir avec moi, tu comprends...\nC'est juste que les relations humaines\nm'intéressent, en règle générale...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Ça va?")
/*<545>*/ 			printf("\x0E\x01\x09\x04\x01\xC09Quoi? <b<Grida>> a reçu une lettre d'amour?\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Et que s'est\x2010il passé? Ah, intéressant... Je vois...\n\n\n\n\x0E\x01\x09\x04\x0C\xC54Et... Qu'est-ce que tu penses qu'elle va faire?\n[1]Y réfléchir[2]J'en sais rien")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("\x0E\x01\x09\x04\x11\xE53Quoi? Ça va pas du tout, ça!")
          				flw_96:
/*< 96>*/ 				printf("\x0E\x01\x09\x04\x11\xE09Bon... De toute façon, il n'y a rien entre moi\net <b<Grida>>. On est juste amis...\n\n\nAlors, ça ne me regarde pas. Elle peut sortir\navec qui elle veut...\n\n\n\x0E\x01\x09\x04\x0C\xC00Mais tout de même, j'ai mon mot à dire quand\nil s'agit des standards de cette école!\n\n\n\x0E\x01\x09\x04\x08\xC00Par contre, peut\x2010être que l'amour idéal est\ncelui qui ignore les entraves? Et si on ne\nl'a pas vécu, on ne sait pas vraiment ce\nqu'est l'amour?\n\x0E\x01\x09\x04\x0B\xC00Donc j'ai le droit de m'assurer qu'elle peut\nvivre librement son amour!\n\n\n\x0E\x01\x09\x04\x11\xE00Et puis moi aussi, j'ai le droit d'aimer\nquelqu'un librement, après tout! Non?\n\n\n\x0E\x01\x09\x04\x0C\xC1BTu comprends ce que je veux dire,\nLink? J'ai raison, non?\n[1]Je sais pas...[2]Tu l'aimes?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x0F\x1152C'est vrai, c'est pas le moment de parler de ça.\n")
          					flw_122:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x10\x1117De toute façon...\n\n\n\n\x0E\x01\x09\x04\x0F\xC00Mais ça te dérangerait pas de lui demander\nce qu'elle a décidé?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x11\xE53Pff! Tu dis n'importe quoi, Link!\n\n\n\n\x0E\x01\x09\x04\x12\xC00Comment peux\x2010tu imaginer une chose pareille?")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x0F\x1118Ah, d'accord... Mais ça va me travailler,\ncette histoire.")
          				goto flw_96
          			}
          		}
          	  case 1:
/*<814>*/ 		entrypoint_115_27();
          	}
          }

          void entrypoint_115_06() {
/*<253>*/ 	start()
/*<252>*/ 	switch (story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */]) {
          	  case 0:
/*<744>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 256, 'param3': 31}
/*<256>*/ 		switch (story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */]) {
          		  case 0:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x07\x1602Je vais faire de mon mieux pour me faire\ndes muscles. Reviens me voir bientôt,\ntu verras mes progrès!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf("\x0E\x01\x09\x04\x00\x11Hmmff... Pfiouu... \x0E\x03\x01\x00Link,\nqu'est\x2010ce que tu as là? Ça serait pas\njustement de la <y<potion d'endurance>>?\n\nTu voudrais me la donner?\n[1]D'accord[2-]Pas\nquestion")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf("\x0E\x01\x09\x04\x00\x0BC'est vrai?! Oh, merci! Je te revaudrai ça!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 270, 'param3': 6}
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 265, 'param3': 6}
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 264, 'param3': 6}
/*<264>*/ 					printf("\x0E\x01\x09\x04\x00\x10Yaouh! Ça ravigote!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf("\x0E\x01\x09\x04\x00\x12Ahh... C'est que... Je ne sais pas si je vais\nvraiment réussir à me faire des muscles...\n\n\n[1]Fais de ton mieux[2]Bien oui, voyons!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("\x0E\x01\x09\x04\x00\x09Tu as raison! Je dois faire des efforts,\nc'est tout! Ça ne sert à rien de me plaindre.")
          						flw_294:
/*<294>*/ 						printf("\x0E\x01\x09\x04\x00\x1800Merci, Link. Je vais faire de\nmon mieux pour me faire des muscles.\n\n\n\x0E\x01\x09\x04\x15\x1800Allez, je me remets à l'entraînement! Reviens\nme voir bientôt, tu verras mes progrès!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf("\x0E\x01\x09\x04\x00\x1609Oh, tu as l'air confiant... Eh bien, j'imagine\nque tu dois avoir raison. Mes efforts devraient\nêtre récompensés... Un jour...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf("\x0E\x01\x09\x04\x00\x11Oh, non, bien sûr... Excuse\x2010moi, c'était vraiment\négoïste de ma part...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf("\x0E\x01\x09\x04\x00\x03T'inquiète surtout pas! J'y arriverai tout seul!\nDu moins, je le pense...")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x11Hmmff... Pfiouu... C'est difficile...\n\n\n\nJe voudrais continuer, mais je n'en peux plus...\nSi seulement j'avais une <r<potion capable\nd'augmenter mon endurance>>...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf("\x0E\x01\x09\x04\x00\x03Nom d'un p'tit oiseau! Faut vraiment que\nje me remplume!\n\n\nJe vais continuer à m'entraîner tout seul\njusqu'à ce que je devienne costaud!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x10Gnaaarf... Hmmff... Pfiouu... Laisse-moi\nreprendre mon souffle!\n\n\n\x0E\x01\x09\x04\x10\x1600Ah, Link! Bonsoir. Tu te\ndemandes ce que je fais? Bien, tu vois,\nje m'entraîne!\n\nQuand on est pas capable de porter un tonneau,\nil faut faire quelque chose! Et moi, je\nm'entraîne! J'essaie de me faire des muscles!\n\nMais je voudrais pas que les autres rient de\nmoi, alors je m'entraîne la nuit...\n\n\n\x0E\x01\x09\x04\x00\x1711Mais je pense que j'en ai assez fait ce soir.\nJe suis fatigué.")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0BOh! \x0E\x03\x01\x00Link, qu'est\x2010ce que tu as\nlà? Ça serait pas de la <y<potion d'endurance>>,\nça, par hasard?\n\nMe laisserais\x2010tu en boire?\n[1]D'accord[2-]Pas\nquestion")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf("Je voudrais continuer, mais je n'en peux plus...\nSi seulement j'avais une <r<potion capable\nd'augmenter mon endurance>>...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x03Nom d'un p'tit oiseau! Faut vraiment que\nje me remplume!\n\n\nJe vais continuer à m'entraîner tout seul\njusqu'à ce que je devienne costaud!")
          		}
          	}
          }

          void entrypoint_115_23() {
/*<530>*/ 	start()
/*<531>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<680>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<681>*/ 			switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          			  case 0:
          				flw_534:
/*<534>*/ 				entrypoint_115_24();
          			  case 1:
/*<682>*/ 				printf("\x0E\x01\x09\x04\x00\x08Encore toi, Link?\nCe soir, j'veux juste penser à Grida!\n\n\nSi tu veux me parler, tu reviendras demain.\nFais d'l'air!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf("\x0E\x01\x09\x04\x00\x10Hé hé hé! J'ai pas peur d'<b<Hergo>>, moi!\nSa chambre? C'est MA chambre!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link! Je vais devenir tellement\ncostaud que tu ne me reconnaîtras même pas!\n\n\nReviens me voir bientôt, tu verras mes progrès!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf("\x0E\x01\x09\x04\x00\x10Hmmff... Pfiouu... Hé, Link!\n\n\n\nTu voudrais pas partager un peu de ta\n<y<potion d'endurance>> avec moi?\n\n\n[1]Bien sûr![2-]Désolé...")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf("\x0E\x01\x09\x04\x00\x0BC'est vrai?! Merci! J'accepte avec plaisir!")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 311, 'param3': 6}
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 309, 'param3': 6}
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 345, 'param3': 6}
/*<345>*/ 					printf("\x0E\x01\x09\x04\x00\x10Yaouh! J'ai l'impression de revenir à la vie!\nToute ma fatigue s'est envolée! Pssshhhh!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf("\x0E\x01\x09\x04\x00\x12Je m'inquiète un peu, parfois. J'ai l'impression\nde ne pas m'entraîner efficacement...\n\n\nJe vais devoir continuer combien de temps\navant de devenir vraiment musclé?\nQu'en penses\x2010tu, Link?\n\nCombien de pompes faut\x2010il encore que je\nfasse avant de voir pointer des muscles?\n\n\n[1]Un millier![2]Qui sait?")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf("\x0E\x01\x09\x04\x00SOh... Autant que ça?!\n\n\n\n\x0E\x01\x09\x04\x10\xE00La route va être ardue. Visualisation...\nConcentration... Persévérance...\nSouffrance... Misère!")
          						flw_352:
/*<352>*/ 						printf("\x0E\x01\x09\x04\x01\x1600J'ai compris! Maintenant, je sais que je peux\ndevenir costaud!\n\n\n\x0E\x01\x09\x04\x00\x1800Reviens me voir bientôt, tu verras mes progrès!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf("\x0E\x01\x09\x04\x00\x07Comment ça, « Qui sait? »\n\n\n\n\x0E\x01\x09\x04\x07\x800Oh, tu veux dire qu'il faut continuer jusqu'à\nne plus pouvoir les compter, c'est ça?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf("\x0E\x01\x09\x04\x00\x11Je comprends... Excuse\x2010moi de t'avoir dérangé\navec ça.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf("C'est beau... Pas de problème! Je réussirai\ntout seul!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf("\x0E\x01\x09\x04\x00\x11Hmmff... Pfiouu... C'est difficile...\n\n\n\nJe voudrais continuer, mais je n'en peux plus...\nSi seulement j'avais une <r<potion capable\nd'augmenter mon endurance>>...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf("\x0E\x01\x09\x04\x00\x03Non, ce n'est pas bien... Je dois arrêter de te\ndemander de l'aide tout le temps! Il faut que\nje réussisse par moi-même.")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x10Hmmff... Pfiouu... Bonsoir, Link.\n\n\n\n\x0E\x01\x09\x04\xC10\xFF00Je m'entraîne dur depuis la dernière fois que\nje t'ai vu, mais je crois que je n'avance pas\nbeaucoup...\n\nJe manque d'énergie, on dirait.")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf("\x0E\x01\x09\x04\x00\x0BAh! \x0E\x03\x01\x00Link, est\x2010ce que c'est de la\n<y<potion d'endurance>> que tu as là?\n\n\nTu voudrais m'en donner un peu?\n[1]Bien sûr![2-]Désolé...")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf("Hé, Link! Tu voudrais pas me\nredonner un peu de <y<potion d'endurance>>?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf("\x0E\x01\x09\x04\x00\x03Non, ce n'est pas bien... Je dois arrêter de te\ndemander de l'aide tout le temps! Il faut que\nje réussisse par moi-même.")
          		}
          	}
          }

          void entrypoint_115_24() {
/*<533>*/ 	start()
          	flw_58:
/*< 58>*/ 	switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          	  case 0:
/*< 61>*/ 		switch (story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */]) {
          		  case 0:
/*< 66>*/ 			printf("")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Est-ce que tu lui as\ndonné ma lettre?\n\n\n[1]En fait...[2]Quelle lettre?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x11\x1F1DQu\x2010quoi?! Tu l'as donnée à la folle\ndes toilettes?!")
          				flw_64:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x01\x1F00Mais j't'avais dit de surtout ne pas lui donner,\nà ELLE! T'avais juré!\n\n\n\x0E\x01\x09\x04\x1A\x1F17Mais quel idiot! T'as tout gâché!\n\n\n\nJ'te parlerai plus jamais! J'te déteste,\nLink!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf("\x0E\x01\x09\x04\x00\x1F18Nooooooon!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 696, 'param3': 6}
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x15\x1F12Qu\x2010quoi? Comment ça, quelle lettre?\nTu veux rire? J'te trouve pas drôle!\n\n\n\x0E\x01\x09\x04\x11\x1B00Oh non... La folle des toilettes... T-Tu lui\nas donné ma lettre? À elle? Pour vrai?")
          				goto flw_64
          			}
          		}
          	  case 1:
/*<821>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 113, 'param3': 31}
/*<113>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<541>*/ 			switch (story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */]) {
          			  case 0:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 6912, 'next': 544, 'param3': 13}
/*<544>*/ 				printf("\x0E\x01\x09\x04\x00\x0FAhhh... <b<Grida >>sait maintenant c'que je ressens...\n\n\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Mais, qu'est\x2010ce que j'dois faire? Le c\x153ur me fait\ndes tourniquettes!")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf("\x0E\x01\x09\x04\x00\x13Quoi? C'est fait? Vraiment? T'as donné la\nlettre à <b<Grida>>?\n\n\n\x0E\x01\x09\x04\x01\x2500Aah! Je panique! Qu'est-ce que j'fais? Qu'est-ce\nque je fais? Est-ce que je devrais lui parler?\n\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Oh non, je suis tellement gêné...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf("\x0E\x01\x09\x04\x00\x02T'as déjà oublié ta mission, Link?\nVa donner ma lettre à la fille au <r<chapeau rond>>.\n\n\n\x0E\x01\x09\x04\x01\x1B00T'as pas intérêt à la donner à cette\n<r<hurluberlue dans les toilettes>>! Jure\x2010le!")
          		}
          	}
          }

          void entrypoint_115_25() {
/*<239>*/ 	start()
/*<243>*/ 	switch (story_flags[390 /* us: 805A9B0C 0x01, jp: 805ACD8C 0x01 */]) {
          	  case 0:
/*<248>*/ 		switch (story_flags[393 /* us: 805A9B0C 0x08, jp: 805ACD8C 0x08 */]) {
          		  case 0:
/*<250>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<251>*/ 				printf("Hrrrnnnnghhh...!")
          			  case 1:
/*<249>*/ 				printf("3 985... 3 986...\n3 987... 3 988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf("Gnaaarf... Hmmff...")
          			  case 1:
/*<244>*/ 				printf("\x0E\x01\x06\x02\xFECD55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf("Gnarf... oh... oh...")
          		  case 1:
/*<240>*/ 			printf("\x0E\x01\x06\x02\xFCCD5... 6... 7...")
/*<241>*/ 			temp_flags[53 /* 0x7 20 */] = true;
          		}
          	}
          }

          void entrypoint_115_08() {
/*<313>*/ 	start()
/*<314>*/ 	switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          	  case 0:
/*<326>*/ 		switch (zone_temp_flags[1 /* 0x1 02 */]) {
          		  case 0:
/*<321>*/ 			printf("\x0E\x01\x09\x04\x15\x180AJe n'ai même plus besoin de faire de pause!\nMon prochain objectif, c'est de soulever un\ntonneau avec un seul doigt!")
          		  case 1:
/*<322>*/ 			printf("\x0E\x01\x09\x04\x15\x180AMpfff... Je pourrais continuer pendant\ndes heures...")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf("\x0E\x01\x09\x04\x15\x190AMpffff... Je pourrais continuer pendant\ndes heures!\n\n\n\x0E\x01\x09\x04\x01\x1600... Salut, Link! Tu tombes bien!\nJe voulais te demander quelque chose!\n\n\n\x0E\x01\x09\x04\x07\x1800J'ai essayé de porter un tonneau l'autre jour...\nJe l'ai soulevé d'une seule main!\n\n\n\x0E\x01\x09\x04\x00\x1600Tu crois que ça veut dire que j'ai pris\ndu muscle?\n\n\nRéponds\x2010moi franchement, Link...\nTu me trouves costaud, maintenant?\n[1]Peut\x2010être un\npeu trop...[2]Oui")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf("\x0E\x01\x09\x04\x07\x1809Hmm, j'ai peur que tu dises ça juste pour être\ngentil. Mais ça me fait plaisir quand même!")
          			flw_320:
/*<320>*/ 			printf("\x0E\x01\x09\x04\x00\x1600Si j'en suis là aujourd'hui, c'est grâce à toi,\nLink.\n\n\n\x0E\x01\x09\x04\x01\x1900Je me serais découragé il y a longtemps si tu\nne m'avais pas soutenu comme tu l'as fait.\n\n\n\x0E\x01\x09\x04\x07\x180BMerci de tout c\x153ur, Link!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf("\x0E\x01\x09\x04\x00\x180BC'est vrai? Merci! Je suis tellement heureux!")
          			goto flw_320
          		}
          	}
          }

          void entrypoint_115_09() {
/*<175>*/ 	start()
/*<212>*/ 	switch (story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */]) {
          	  case 0:
/*<215>*/ 		switch (story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */]) {
          		  case 0:
/*<788>*/ 			switch (temp_flags[11 /* 0x0 08 */]) {
          			  case 0:
/*<789>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09Salut, Link! Merci pour ce que\ntu as fait pour ma s\x153ur. Je ne l'oublierai\njamais!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09\x0E\x03\x01\x00Link! Ma s\x153ur est rentrée saine\net sauve!\n\n\n\x0E\x01\x09\x04\n\x400Quel soulagement! J'avais tellement peur qu'il\nlui soit arrivé malheur...\n\n\n\x0E\x01\x09\x04\x0B\x400Tout ça, c'est grâce à toi, Link.\nMerci infiniment!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09\x0E\x03\x01\x00Link! Ma s\x153ur est saine et sauve!\n\n\n\n\x0E\x01\x09\x04\n\x400Je suis tellement soulagé! J'imaginais le pire...\nJe ne sais pas ce que j'aurais fait s'il lui était\narrivé quelque chose...\n\nQuoi? C'est toi qui lui as apporté le remède?<pause14>\n\x0E\x01\x09\x04\x0B\x400Oh, merci!\n\n\nJe sais que ce n'est pas grand\x2010chose comparé\nà ce que tu as fait pour elle, mais accepte ceci\nen guise de remerciement.")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf("\x0E\x01\x09\x04\x0B\xA05Oh, dommage! Je voulais t'offrir ce <y<flacon vide>>,\nmais il n'y a plus de place dans ta sacoche ni à\nla consigne...\n\nJe le garde de côté pour toi. Essaie de faire le\ntri et reviens me voir, je te le donnerai à ce\nmoment-là.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf("\x0E\x01\x09\x04\x0B\x400Ça n'a l'air de rien, comme ça... Mais, je suis\nsûr que tu vas lui trouver plein d'usages\ndifférents. Encore merci!")
/*<813>*/ 						give_gratitude_crystals();
          					}
          				  case 1:
          					goto flw_735
          				}
          			}
          		}
          	  case 1:
/*<176>*/ 		switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          		  case 0:
/*<741>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 183, 'param3': 31}
/*<183>*/ 			switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          			  case 0:
/*<200>*/ 				switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          				  case 0:
/*<204>*/ 					switch (adventure_pouch_has(5 0x0005)) {
          					  case 0:
/*<205>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Qu'est-ce que tu fais, Link?\nApporte les <y<spores de champignon >>à ma s\x153ur!\nDépêche-toi! \x0E\x01\x09\x04\n\x400Je compte sur toi!")
          					  case 1:
/*<201>*/ 						printf("\x0E\x01\x09\x04\x0B\x406Eh bien, qu'est-ce que tu as fait des <y<spores\nde champignon>>? Tu ne les lui as pas encore\ndonnées?\n\n\x0E\x01\x09\x04\n\x400Si jamais tu les perds, tu peux en <r<prélever\nd'autres sur des champignons>>.\n\n\nJe compte sur toi, Link!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Si tu as de la place dans ta sacoche, tu pourras\nprendre ceci.\n\n\n<y<\x0E\x01\x09\x04\n\x400>>Ce sont des <y<spores de champignon>>. Elles\nguériront la blessure du célestrier.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf("\x0E\x01\x09\x04\x00\x50DTu as trop d'affaires avec toi! \x0E\x01\x09\x04\x00\x400Commence par\nfaire de la place dans ta sacoche, et reviens\nvite me voir!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf("\x0E\x01\x09\x04\x0B\x404Si elle l'applique sur la blessure de son\ncélestrier, il guérira immédiatement. Elle\npourra alors rentrer à la maison sans problème.\n\n\x0E\x01\x09\x04\x00\xC00Apporte\x2010les à ma s\x153ur! \x0E\x01\x09\x04\x00\x400Tu pourras garder le\n<r<flacon >>quand tu lui auras donné les spores!\n\n\nJe compte sur toi, Link!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf("\x0E\x01\x09\x04\x0B\x50DQuoi?! Tu as trouvé ma s\x153ur? Et son\ncélestrier est blessé?\n\n\n\x0E\x01\x09\x04\n\xC00C'est épouvantable! Dans ce cas, apporte\x2010lui\nceci! Vite!\n\n\n<y<\x0E\x01\x09\x04\x00\x400>>Ce sont des <y<spores de champignon>>, cela\ndevrait soigner son célestrier.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf("\x0E\x01\x09\x04\n\xC12Que faire... Je suis fou d'inquiétude!\n\n\n\nD'habitude elle prend toujours un <r<flacon >>de\nremède avec elle au cas où son oiseau\nserait blessé...\n\nMais aujourd'hui, elle a oublié...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf("\x0E\x01\x09\x04\x0D\x400Ma s\x153ur disait qu'elle était intriguée par l'<b<île\nqui ressemble à une roulette>>. Donc je pense\nqu'elle a dû s'envoler vers le<r< sud\x2010ouest>>.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf("\x0E\x01\x09\x04\x01\x400Tu veux bien partir à sa recherche,\nLink?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf("\x0E\x01\x09\x04\n\xC12Je suis donc inquiet... Que je suis donc inquiet...\n[1]Qu'est-ce qui se passe?[2]Calme\x2010toi!")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf("\x0E\x01\x09\x04\x00\x411Salut, Link. Tu vas prendre le\ntemps de m'écouter? Que c'est gentil de ta part.")
          				flw_181:
/*<181>*/ 				printf("\x0E\x01\x09\x04\x00\x400Tout à l'heure, ma <r<petite s\x153ur >>est partie sur\nson célestrier et elle n'est toujours pas rentrée...\n\n\nD'habitude quand elle va se promener, ça ne\ndure pas aussi longtemps. Je suis allé à sa\nrecherche, mais je ne l'ai pas trouvée.\n\n\x0E\x01\x09\x04\x0B\x500S'il fallait qu'il lui soit arrivé quelque chose...\nJe n'ose pas y penser! Je ne sais plus\nquoi faire!")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf("\x0E\x01\x09\x04\x00\x411Hé, Link, tu veux bien partir\nà sa recherche?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf("\x0E\x01\x09\x04\x0D\x400Elle était intriguée par l'<b<île qui ressemble à une\nroulette>> qui s'est formée récemment. Elle a\ndonc dû s'envoler vers le <r<sud\x2010ouest>>.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf("\x0E\x01\x09\x04\x01\x400Je compte sur toi, Link!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x0B\x500Me CALMER? Comment veux-tu que je me\nCALME? Oh, excuse\x2010moi... Ce n'est pas en te\ncriant après que je vais trouver une solution...")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf("\x0E\x01\x09\x04\x0B\x409Il paraît que l'île de la Déesse a disparu!\nC'est impensable!\n\n\n\x0E\x01\x09\x04\n\x400C'est mauvais signe, ça c'est sûr...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf("\x0E\x01\x09\x04\x01\x400Au fait, <b<Latruche>> est parti vers le\ncumulonimbus. Il était tout content parce\nqu'il avait trouvé un <r<insecte rare>>.\n\nC'est pas comme ça qu'il va réussir à\nses examens...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf("\x0E\x01\x09\x04\x01\x400<b<Latruche>> a dit qu'il voulait créer un paradis\ndes insectes sur son île, à <r<l'intérieur du\ncumulonimbus>>. Pour ça, il en collectionne\ntoutes sortes.")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf("\x0E\x01\x09\x04\n\xA00Hé, un de tes camarades de classe s'appelle\n<b<Latruche>>, non?\n\n\nIl raconte qu'il a découvert une île idéale\npour l'élevage des insectes à l'<r<intérieur du\ncumulonimbus>>. C'est un vrai mordu de\nbestioles en tout genre!\n\x0E\x01\x09\x04\x0B\x400Je me demande bien ce qu'il a l'intention\nd'y faire, sur son île...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tout à l'heure, j'ai entendu un bruit de rochers\nqui s'écroulaient... Qu'est\x2010ce qui s'est passé?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qu'est\x2010ce que tu as fait tout à l'heure sur la\ngrand\x2010place? Le ciel s'est assombri tout à coup...")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf("\x0E\x01\x09\x04\n\x405C'est vraiment bizarre... Pourquoi tous ces\npapillons se rassemblent sur la grand\x2010place?\nIl y a rien ici.")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf("\x0E\x01\x09\x04\x00\x01Salut, Link! T'es toujours en\ntrain de courir partout, dis donc!")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Ça fait un bon bout\nde temps que j'ai pas vu la bande des trois\npetits voyous.\n\nEst\x2010ce qu'ils se seraient enfin mis à étudier\naprès leur échec à l'examen de passage en\nclasse supérieure?")
          							  case 1:
/*<785>*/ 								printf("\x0E\x01\x09\x04\x00\x01Salut Link! Je suis allé voir cette\nîle fortune qui intriguait tant ma s\x153ur.\n\n\nJ'y ai rencontré un homme tout déprimé parce\nqu'il avait fait tomber sa <r<roue >>sous les nuages.\nIl devrait s'en remettre!\n\nUne fois que quelque chose est tombé sous\nles nuages, il y a plus grand\x2010chose à faire.")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf("\x0E\x01\x09\x04\n\x405Hé, tu as vu? La tour de lumière émet un rayon\nlumineux qui éclaire le cumulonimbus!\n\n\nC'est comme si elle disait de se rendre dans\nce gros nuage là\x2010bas...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Ça fait un bout\nde temps que j'ai pas vu Zelda. Est-ce qu'il\nlui est arrivé quelque chose?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\n\x0E\x01\x09\x04\n\x400Comment? <r<Deux ailes>>?<pause1E> Tu sais, les devinettes,\nc'est vraiment pas mon truc. Pourquoi t'irais\npas demander au <r<diseur de bonne aventure>>?")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf("\x0E\x01\x09\x04\x0B\xE09Salut, Link! Merci pour ce que\ntu as fait pour ma s\x153ur. Je ne l'oublierai\njamais!")
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

          void entrypoint_115_27() {
/*<795>*/ 	start()
/*<816>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<818>*/ 		printf("\x0E\x01\x09\x04\x0C\x401J'ai appris que l'île de la Déesse était tombée!\n<pause1E>Quelle tragédie...\n\n\n\x0E\x01\x09\x04\x11\xE00Mais j'ai compris le message que la Déesse\nvoulait nous transmettre. Elle nous\ndemande d'être forts, même sans elle.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf("\x0E\x01\x09\x04\x0C\x40B\x0E\x01\x08\x02\xFECDEt puis... maintenant, j'ai ma propre déesse.")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf("\x0E\x01\x09\x04\x00\x1101\x0E\x03\x01\x00Link! Ne répète à personne ce\nque je vais te dire...\n\n\n\x0E\x01\x09\x04\x0C\x400Tout à l'heure, quand je suis sorti, j'ai\nremarqué qu'une étrange structure était\napparue sous l'île de la Déesse.\n\n\x0E\x01\x09\x04\x11\xE00Mais qu'est\x2010ce qui a bien pu se passer?\nEst\x2010ce que Célesbourg est en danger?")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf("\x0E\x01\x09\x04\x00\x05Salut, Link! Tu n'as pas l'air\nen forme, ces derniers temps.\n\n\n\x0E\x01\x09\x04\x00\x40BMais garde le sourire! <pause14>Zelda sera bientôt de\nretour, j'en suis sûr! Il suffit d'y croire!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Ça va bien?\n\n\n\n\x0E\x01\x09\x04\x0C\x1400Quoi? La Triforce? Dissimulée par la Déesse?\n\n\n\n\x0E\x01\x09\x04\x10\x1100Euh non, je sais rien à ce sujet, désolé...\n\n\n\n\x0E\x01\x09\x04\x08\x1400Pour ce genre d'informations, tu devrais\ndemander aux professeurs.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf("\x0E\x01\x09\x04\x00\x05Salut, Link! Tu n'as pas l'air\nen forme, ces derniers temps.\n\n\n\x0E\x01\x09\x04\x00\x40BMais garde le sourire! <pause14>Zelda sera bientôt de\nretour, j'en suis sûr! Il suffit d'y croire!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Ça va mieux?\n\n\n\n\x0E\x01\x09\x04\x09\x1400Moi aussi, j'ai ma part de problèmes, tu sais.\nMais je fais bonne figure devant les autres...\n\n\n\x0E\x01\x09\x04\x11\x400Ça m'aide à oublier que j'ai mes propres ennuis!\nC'est ce que j'essaie de me dire!")
          						  case 1:
/*< 90>*/ 							printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Alors, tu as réussi\nl'examen! L'uniforme te va bien en tout cas!\n\n\n\x0E\x01\x09\x04\x10\x1100Mais pas le temps de parler de ça. Je n'arrive\npas à croire que Zelda ait disparu...\n\n\n\x0E\x01\x09\x04\x0C\x1400En plus, vous étiez proches. Tu dois t'en faire\npour elle...\n\n\n\x0E\x01\x09\x04\x08\x1400Mais je suis sûr qu'elle est saine et sauve\net qu'elle reviendra vite, ne t'inquiète pas!")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_10() {
/*<185>*/ 	start()
/*<186>*/ 	switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          	  case 0:
/*<206>*/ 		switch (adventure_pouch_has(5 0x0005)) {
          		  case 0:
/*<845>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 31}
/*<195>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<207>*/ 				printf("\x0E\x01\x09\x04\x00\x0BOh, des <y<spores de champignon>>!\nQuel soulagement! Tu m'as apporté le remède!\n[1]Tiens![2-]Et puis, non.")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf("\x0E\x01\x09\x04\x0B\x409Merci! Je vais pouvoir soigner mon célestrier...")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 646, 'param3': 6}
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 233, 'param3': 6}
/*<233>*/ 					printf("\x0E\x01\x09\x04\x00\x04Il sera en pleine forme en un rien de temps!")
/*<237>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 581, 'param3': 6}
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x09Je commençais vraiment à perdre espoir. Ton\naide nous a été précieuse.\n\n\nTu nous as sauvés, mon célestrier et moi!\nMerci!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x04On y va! On se croisera sûrement au bourg\nun de ces jours!")
/*<615>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 582, 'param3': 47}
/*<582>*/ 					make_actor_do_something(2, 0)
/*<613>*/ 					set_camera(25, 0)
/*<617>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 583, 'param3': 17}
/*<583>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 40, 'next': 616, 'param3': 48}
/*<616>*/ 					make_actor_do_something(3, 0)
/*<211>*/ 					story_flags[383 /* us: 805A9B0D 0x02, jp: 805ACD8D 0x02 */] = true;
/*<823>*/ 					story_flags[838 /* us: 805A9B32 0x40, jp: 805ACDB2 0x40 */] = true;
/*<614>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x1113Tu es un monstre!")
          				}
          			  case 1:
/*<730>*/ 				printf("\x0E\x01\x09\x04\x00\x50BAlors, tu me donnes ces spores de champignon?\nAvec ça, mon célestrier sera guéri en un\nrien de temps!\n\n[1]Tiens[2-]Pas question")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf("<r<\x0E\x01\x09\x04\x00\x01Mon grand frère te donnera le remède>>. Va donc\nà sa rencontre.\n\n\nJe t'attendrai ici avec mon célestrier. Je compte\nsur toi...")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf("\x0E\x01\x09\x04\x00\x50BTiens, mais on dirait Link!\nTu tombes bien, toi!\n\n\n\x0E\x01\x09\x04\x12\x200Mon célestrier s'est blessé pendant notre\npromenade. Il ne peut plus voler!\n\n\n\x0E\x01\x09\x04\x01\x1500On a quand même réussi à atterrir ici, mais\nnous ne sommes pas capables de rentrer\nà Célesbourg!\n\n\x0E\x01\x09\x04\x12\x1500Je dois soigner sa blessure, mais <r<il me faut\nun remède >>pour ça.\n\n\nMais pas n'importe lequel, j'ai besoin de\nquelque chose spécialement <r<pour les oiseaux>>!\n\n\nDis donc, Link, \x0E\x01\x09\x04\x15\x200tu voudrais pas\nm'aider? Il faudrait que tu ailles me chercher\nce remède...\n\n[1]Bien sûr![2]Désolé...")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf("\x0E\x01\x09\x04\x0B\x409Merci de tout c\x153ur! Tu nous sauves la vie!")
          			flw_192:
/*<192>*/ 			printf("<rd<<r<Mon grand frère te donnera le remède<rd<. >>Va\ndonc à sa rencontre. Je suis sûre qu'il\ns'inquiète beaucoup pour moi.\n\nIl doit être <r<quelque part sur la grand\x2010place\nde Célesbourg>>, à attendre mon retour...")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf("\x0E\x01\x09\x04\x09\x509Mais tu as le remède! Pourquoi tu ne me\nl'as pas dit plus tôt? Ces <y<spores de champignon\n>>sont exactement ce qu'il me faut.\n\nAvec ça, mon célestrier se remettra en un rien\nde temps! Tu me les donnes?\n[1]Tiens[2-]Pas question")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf("Ah bon... J'imagine que c'est trop te demander...\nMais ça te dérangerait d'aller dire à mon frère\nce qu'il m'est arrivé?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf("Ah, tu lui as déjà parlé? Ça simplifie les choses!")
          					flw_194:
/*<194>*/ 					printf("Je t'attendrai ici avec mon célestrier.\nJe compte sur toi... Et encore merci!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf("\x0E\x01\x09\x04\x0C\x1513Quoi? Tu n'as pas de c\x153ur!\n\n\n\n\x0E\x01\x09\x04\x0B\x409T'es pas sérieux, tout de même...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf("\x0E\x01\x09\x04\x0C\x456Il y a eu un grand bruit qui venait de dehors\ntout à l'heure. Je me demande ce que c'était...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Dis donc, t'es\nvraiment mignon avec cet uniforme...\n\n\nTu as vraiment l'air d'un gars fiable,\ncomme on dit!")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Quoi? Tu sais utiliser l'attaque tornade? Wow...\n\n\n\n\x0E\x01\x09\x04\x08\x909Là, tu m'épates!<pause1E> \x0E\x01\x09\x04\x0C\x400Faut dire que<pause14> <b<Kiko>> aussi\nen est capable...")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf("\x0E\x01\x09\x04\x00\x06Hein? La Triforce?<pause1E> C'est quoi, ça?")
          				  case 1:
          					goto flw_86
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_11() {
/*<217>*/ 	start()
/*<759>*/ 	switch (story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */]) {
          	  case 0:
/*<704>*/ 		switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          		  case 0:
/*<705>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link! L'île de la Déesse\na disparu!\n\n\n\x0E\x01\x09\x04\x00\x1513C'est triste... Les célestriers aimaient tellement\ns'y reposer!")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf("\x0E\x01\x09\x04\x00\x13Tu as senti ce grand tremblement? Je me\ndemande bien ce que c'était...")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf("\x0E\x01\x09\x04\x00\x01Tiens, Link!\n\n\n\n\x0E\x01\x09\x04\x0C\x200Tu as réussi à maîtriser la légendaire attaque\ntornade?<pause1E>\x0E\x01\x09\x04\x0C\x50B Impressionnant!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf("\x0E\x01\x09\x04\x00WLa... quoi? La Triforce?<pause14>\nNon, ça ne me dit rien...\n\n\nPourquoi tu ne demanderais pas aux\nprofesseurs de l'école?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! Dis\x2010moi, cette fille\nde l'école de chevalerie<pause05>.<pause05>.<pause05>.<pause05> Zelda, c'est bien ça?\n\n\nOn ne vous voit plus beaucoup ensemble ces\nderniers temps. Vous vous êtes disputés?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf("\x0E\x01\x09\x04\x00\x13Tout à l'heure, j'ai eu l'impression que le ciel\ns'était assombri pendant un instant. Je me\ndemande ce que c'était...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf("\x0E\x01\x09\x04\x00\x01Tiens, Link!\n\n\n\n\x0E\x01\x09\x04\x11WQu'est-ce que tu dis? <r<Deux grandes ailes>>?\n\n\n\n\x0E\x01\x09\x04\x01\x00Des ailes à Célesbourg... Bien, il y a les <r<moulins\n>>qui ont des genres d'ailes... Mais je ne sais pas\ns'il y a un rapport...")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf("\x0E\x01\x09\x04\x00\x0BOh, Link. Merci beaucoup pour\nton aide.\n\n\n\x0E\x01\x09\x04\x00\x400Mon célestrier est parfaitement rétabli. Je te\ndois beaucoup.")
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<760>*/ 		printf("\x0E\x01\x09\x04\x00\x0BOh, Link. Merci beaucoup pour\nton aide.\n\n\n\x0E\x01\x09\x04\x00\x400Mon célestrier est parfaitement rétabli. Je te\ndois beaucoup.")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf("Houuuuu...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf("Houuuu... Il y a quelqu'un? S'il vous plaît,\naidez\x2010moi...")
/*< 30>*/ 	story_flags[545 /* us: 805A9B17 0x04, jp: 805ACD97 0x04 */] = true;
/*< 54>*/ 	scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = true;
/*<652>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_115_13() {
/*<501>*/ 	start()
/*<504>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
/*<510>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<676>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 506, 'param3': 24}
/*<506>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oublie tout ça... Adieu...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf("Ahhh... Du <r<papier>>...! Tu m'as apporté du <r<papier>>!\n\n\n\nJ'ouvre la porte... Allez, entre...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf("Houuuu... Du <r<papier>>...\n\n\n\nS'il vous plaît... Aidez\x2010moi, quelqu'un! <r<Il me\nfaut du>> <r<papier>>...\n\n\n<r<N'importe quel papier>>... Houuuu...")
/*<503>*/ 		story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */] = true;
          	}
          }

          void entrypoint_115_14() {
/*< 31>*/ 	start()
/*< 33>*/ 	switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          	  case 0:
          		goto flw_58
          	  case 1:
/*<141>*/ 		switch (zone_temp_flags[11 /* 0x0 08 */]) {
          		  case 0:
/*<163>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 142, 'param3': 13}
/*<142>*/ 			printf("\x0E\x01\x09\x04\x00\x1B1BNon, mais tu ne comprends rien! C'est pas\njuste du papier! C'est une <r<lettre>>! Une lettre\nbien spéciale, tu sauras.\n\n\x0E\x01\x09\x04\x17\x2500Une... une lettre... d'amour! J'y ai mis tout\nmon c\x153ur et toute mon âme!\n\n\n\x0E\x01\x09\x04\x17\x1800Et toi, tu voudrais l'utiliser comme un\nvulgaire papier brouillon? Jamais de la vie!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 167, 'param3': 6}
/*<167>*/ 			printf("Écoute\x2010moi bien! Tu dois donner cette lettre\nà la jolie <b<Grida>>, de la classe supérieure...\n\n\n\x0E\x01\x09\x04\x01\xC11Tu sais qui je veux dire? Celle qui a un\n<r<chapeau rond>>. Elle est tellement belle...\n\n\n\x0E\x01\x09\x04\x17\x1800Et ne la donne surtout pas à cette <r<hurluberlue\ndans les toilettes>>! Jure\x2010le!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 168, 'param3': 6}
/*<168>*/ 			printf("OK, j'te fais confiance. Et t'as pas intérêt\nà la lire! C'est-y clair?")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf("J'compte sur toi, Link! Si\nt'accomplis ta mission, tu pourras te\ntenir avec moi.\n\nEuh... En passant... Merci...")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x08Hein? C'est quoi ton problème?\nPourquoi tu regardes vers les toilettes?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf("Quoi? Y a quelqu'un la nuit qui demande\ndu... du papier?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf("Bon... j'lui donne? Ou j'lui donne pas?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf("Aaaaah! \x0E\x03\x01\x00Link, c'est toi!\nT'aurais pu me dire que t'étais là!\n\n\n\x0E\x01\x09\x04\x17\x1800J'étais en pleine réflexion... Tu me déranges,\nça se voit?\n\n\n[1]Tu pensais à quoi?[2]Besoin d'aide?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf("Quoi? Tu veux que je te raconte\nmes problèmes?\n\n\n\x0E\x01\x09\x04\x00\x1CJ'vois pas pourquoi j'en parlerais avec toi...\nMais bon, puisque tu m'le demandes...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("Tu pourrais peut\x2010être m'aider... J'aime pas\nl'admettre, mais t'as l'air de savoir t'y\nprendre avec les femmes.\n\nBon... OK! \x0E\x03\x01\x00Link, j'ai un\nservice à te demander!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 158, 'param3': 6}
/*<158>*/ 					printf("Tu pourrais apporter ce <r<papier >>à quelqu'un?\nC'est super important! Il doit être remis\nen mains propres!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf("Hein? De l'aide? De toi?\n\n\n\n\x0E\x01\x09\x04\x00\x1CMêle\x2010toi de tes oignons! Mais bon,\npuisque tu m'demandes...")
          					goto flw_157
          				}
          			}
          		}
          	}
          }

          void entrypoint_115_15() {
/*< 41>*/ 	start()
/*<118>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*<110>*/ 		set_camera(4, 0)
/*<678>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 42, 'param3': 24}
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oublie tout ça... Adieu...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 111, 'param3': 6}
/*<111>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 53, 'param3': 6}
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oublie tout ça... Adieu...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 46, 'param3': 6}
/*< 46>*/ 		printf("Arg... Du <r<papier>>... Il me faut du <r<papier>>...\n\n\n\nJe ne veux de mal à personne, <r<il me faut juste\ndu papier>>!\n\n\n[1]Donner la \nlettre[2-]Garder la\nlettre")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x0B\x04Quoi? On me donne du papier?\nMerci beaucoup!")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 			printf("Mais... On dirait une lettre...\nTu es sûr que je peux la prendre?\n[1]Oui[2-]Non")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 153, 'param3': 6}
/*<153>*/ 				printf("\x0E\x01\x09\x04\x00\x02Merci... Ça me sera bien utile...\n\n\n\nMais ne me demande pas ce que je vais en faire,\ntu vas me faire rougir...\n\n\nJ'espère te revoir bientôt, gentil jeune homme...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf("\x0E\x01\x09\x04\x05\x03Argh... S'il te plaît... Du papier...")
          			}
          		  case 1:
          			goto flw_48
          		}
          	}
          }

          void entrypoint_115_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	switch (story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */]) {
          	  case 0:
/*<518>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 148, 'param3': 32}
/*<148>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 149, 'param3': 13}
/*<149>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohhh... Mon amour... Je serai toujours à\ntes côtés... Hihihi...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh! Te revoilà, gentil jeune homme...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf("\x0E\x01\x09\x04\x06\x02Ravie de te revoir! Grâce à toi, j'ai rencontré\nmon prince charmant...\n\n\nOui, c'est bien lui...\n\n\n\n\x0E\x01\x09\x04\x0C\x00Tout a commencé avec la lettre que tu\nm'as donnée...\n\n\n\x0E\x01\x09\x04\x06\x00Sa belle prose a fait fondre mon c\x153ur...")
/*<521>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahhh, je pense à lui jour et nuit...  Il a donné\nun souffle de vie à mon c\x153ur flétri...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohhh... Mon amour... Je serai toujours à\ntes côtés... Hihihi...")
/*<520>*/ 		story_flags[553 /* us: 805A9B16 0x04, jp: 805ACD96 0x04 */] = true;
/*<655>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_115_18() {
/*<357>*/ 	start()
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1005, 'next': 358, 'param3': 24}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 359, 'param3': 32}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 360, 'param3': 32}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 826, 'param3': 32}
/*<826>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 822, 'param3': 47}
/*<822>*/ 	make_actor_do_something(3, 5)
/*<621>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': -256, 'next': 361, 'param3': 13}
/*<361>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 828, 'param3': 16}
/*<828>*/ 	set_camera(31, 0)
/*<827>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 30, 'next': 362, 'param3': 48}
/*<362>*/ 	set_camera(11, 0)
/*<365>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 363, 'param3': 15}
/*<363>*/ 	printf("C'est toi, l'auteur de la lettre, pas vrai?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf("... Euh, oui...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf("\x0E\x01\x09\x04\x1400\x09Hihihi! Ça m'a beaucoup touchée. Merci!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x500\x11Euh... de rien...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf("Et... Euh... Qu'est-ce que tu a décidé\nen fin de compte?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf("\x0E\x01\x09\x04\x1400\x12Euh... Ce que j'en pense? Euh...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf("\x0E\x01\x09\x04\x500\x2519S'il te plaît! Sors avec moi... S'il te plaît!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("Hé! Minute papillon!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 386, 'param3': 6}
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf("Non, Grida, sors avec... moi!\nJe veux être ton amoureux!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf("\x0E\x01\x09\x04\x500\x1B09Qu\x2010quoi? Mais tu sors d'où, toi?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf("Hihi! Euh...\x0E\x01\x09\x04\x1400\x900 Je choisis... Kiko!")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf("\x0E\x01\x09\x04\x515\xC10Ah! Je le savais! J'ai bien vu comment\nGrida me regardait! Euh, attends...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf("\x0E\x01\x09\x04\x511\x1D1DComment ça, « Kiko »?")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 605, 'param3': 6}
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf("\x0E\x01\x09\x04\x1201\xFF00Vraiment? Tu es sûre que je serai à la hauteur?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf("Oh oui! \x0E\x01\x09\x04\x1400\x900J'suis tellement heureuse! Merci!")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf("\x0E\x01\x09\x04\x500\x1D17Non, mais j'hallucine!!!")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 638, 'param3': 6}
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf("\x0E\x01\x09\x04\x500\x18Aaaaargh...!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf("\x0E\x01\x09\x04\x1200\x01\x0E\x03\x01\x00Link!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf("C'est quand tu m'as parlé de la lettre que j'en\nai pris conscience...\n\n\nJ'ai réalisé que... j'étais amoureux d'elle.\n\n\n\n\x0E\x01\x09\x04\x1209\xC00Je ne veux surtout pas la perdre.\n\n\n\n\x0E\x01\x09\x04\x1201\x400Si tu ne m'avais rien dit, il ne se serait jamais\nrien passé.\n\n\n\x0E\x01\x09\x04\x1208\x0BMerci beaucoup! Je n'oublierai jamais ce que\ntu as fait pour moi!")
/*<651>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 641, 'param3': 42}
/*<641>*/ 	give_gratitude_crystals();
/*<642>*/ 	set_camera(20, 0)
/*<404>*/ 	story_flags[561 /* us: 805A9B19 0x04, jp: 805ACD99 0x04 */] = true;
/*<405>*/ 	story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */] = true;
/*<659>*/ 	story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<355>*/ 	story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */] = true;
/*<356>*/ 	story_flags[560 /* us: 805A9B19 0x02, jp: 805ACD99 0x02 */] = true;
/*<553>*/ 	story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<699>*/ 	story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<627>*/ 	zone_temp_flags[21 /* 0x3 20 */] = false;
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 793, 'param3': 42}
/*<793>*/ 	zone_temp_flags[20 /* 0x3 10 */] = true;
          }

          void entrypoint_115_01() {
          	start()
/*<  4>*/ 	set_camera(2, 0)
/*<  3>*/ 	{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 100, 'next': 1, 'param3': 15}
/*<  1>*/ 	set_camera(1, 0)
/*<  2>*/ 	story_flags[203 /* us: 805A9AEF 0x20, jp: 805ACD6F 0x20 */] = true;
/*<644>*/ 	scene_flags[0 'Skyloft'][0 /* 0x1 01 */] = false;
/*<645>*/ 	scene_flags[0 'Skyloft'][21 /* 0x3 20 */] = false;
          }

          void entrypoint_115_19() {
/*<100>*/ 	start()
/*<684>*/ 	switch (story_flags[558 /* us: 805A9B16 0x80, jp: 805ACD96 0x80 */]) {
          	  case 0:
/*<101>*/ 		switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          		  case 0:
/*<537>*/ 			switch (zone_temp_flags[0 /* 0x1 01 */]) {
          			  case 0:
/*<540>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F1BDepuis que tu as donné cette lettre, j'arrive\nplus à dormir et j'fais tout le temps\ndes cauchemars!\n\nQu'est\x2010ce qui m'arrive? Peut\x2010être que ce lit est\nhanté! Peut\x2010être que c'est l'esprit d'<b<Hergo >>qui\nme harcèle! Il faut que tu m'aides,\nLink!")
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F17Veux tu me dire ce que tu veux,\nLink? J'ai pas oublié le coup\nque tu m'as fait, tu sais.\n\nDepuis que tu as donné cette lettre, j'arrive\nplus à dormir et j'fais tout le temps\ndes cauchemars!\n\nQu'est\x2010ce qui m'arrive? Peut\x2010être que ce lit est\nhanté! Peut\x2010être que c'est l'esprit d'<b<Hergo >>qui\nme harcèle!\n\n\x0E\x01\x09\x04\x1C\x1A18Il faut que tu m'aides, Link!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x17Snif... Tout est fini...\n\n\n\n\x0E\x01\x09\x04\x1C\x1F00Qu'est\x2010ce que tu veux, Link?\nT'es venu te moquer de moi?\nLaisse\x2010moi tranquille!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf("\x0E\x01\x09\x04\x1B\x1F17Encore toi, Link? Comment\nt'as pu me faire ça?\n\n\n\x0E\x01\x09\x04\x1C\x1F00J'sais pas qui c'est, dans les toilettes, mais elle\na lu ma lettre... C'est pas possible! Pas possible!\n\n\nJ'en reviens pas que tu la lui aies donnée...")
          	}
          }

