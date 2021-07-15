          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\nAh, tu as des trésors à me vendre ?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf("\x0E\x01\x09\x04\x12\x600Sache que cette nuit, j'achète ceci :\n- <y<<string arg0>>>\n- <y<<string arg1>>>\n\n- <y<<string arg2>>>\n- <y<<string arg3>>>\n\x0E\x01\x09\x04\x10\x600Alors, ça te va ?\n\n[1]D'accord[2-]Tant pis")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf("Qu'est\x2010ce que tu veux me vendre ?\n<y<<y<[1]<string arg0>[2]<string arg1>[3]<string arg2>[4]<string arg3><y<>>")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf("\x0E\x01\x09\x04\x12\x600Joli... Je t'en propose <numeric arg0> rubis pièce.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf("\x0E\x01\x09\x04\x10\x600Tu en as <numeric arg4>, à ce que je vois...\nCombien veux\x2010tu m'en vendre ?\n[1]1[2]5[3]Tout[4-]J'ai changé\nd'avis")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf("<y<\x0E\x01\x09\x04\x12\x900>>Tu es prêt à m'en vendre <numeric arg0>,\nc'est bien ça ?\nJe t'en donne <numeric arg1> rubis.\n\n[1]Vendu ![2-]Pas\nquestion !")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf("\x0E\x01\x09\x04\x10\x80ATrès bien ! Voilà ton argent !")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 429, 'param3': 6}
/*<429>*/ 								printf("Merci beaucoup !\nN'hésite pas à revenir !")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf("\x0E\x01\x09\x04\x0F\x0CJe vois... Eh bien, j'espère te revoir\nà l'occasion !")
          							}
          						  case 1:
/*<431>*/ 							printf("\x0E\x01\x09\x04\x0F\x409N'essaie pas de m'avoir, je vois\nbien que tu n'en as pas autant !\nOn ne plaisante pas avec les affaires !")
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
/*<494>*/ 					printf("\x0E\x01\x09\x04\x0F\x409Vraiment ? Et comment vas\x2010tu faire ?\nTu n'en as même pas !\nTu me fais perdre mon temps !\n\nAs\x2010tu vraiment quoi que ce soit à me\nvendre ?\n\n\n[1]Oui[2-]Non")
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
/*<490>*/ 					printf("\x0E\x01\x09\x04\x12\x600Je t'en donne <numeric arg1> rubis pièce.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf("<y<\x0E\x01\x09\x04\x12\x600>><numeric arg2> rubis pièce, ça te convient ?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf("\x0E\x01\x09\x04\x12\x600Je t'en donne <numeric arg3> rubis pièce.")
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
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\nAh, tiens, bonsoir !\nQue puis\x2010je faire pour toi ?\n[1]Faire des\nachats[2]Ben, euh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf("\x0E\x01\x09\x04\x0F\x409Des achats ? Tu vas devoir revenir\ndemain, alors !")
          		  case 1:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x13\x609« Ben, euh... » ? On dirait bien que\nt'as rien à faire ici, alors débarrasse\nle plancher, petit !")
/*<438>*/ 			printf("Comment ça, je suis tout juste\naimable ? À peine reconnaissable ?\n\n\n\x0E\x01\x09\x04\x10\x60BEh bien, c'est la nuit, tu vois. Je range\nmon sourire obséquieux au placard\njusqu'à demain !\n\nÇa fatigue, de faire semblant !\n\n\n\nEnfin bref, parlons business !\n\n\n\nSerais\x2010tu là pour faire affaire à\nl'<r<armurerie de nuit >>?\n[1]C'est quoi ?[2]Oui")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf("\x0E\x01\x09\x04\x00\x09Ah, c'est la première fois que tu viens ?\nJe vois...")
          				flw_434:
/*<434>*/ 				printf("\x0E\x01\x09\x04\x12\x600Le jour, je vends, et la nuit, j'achète !\n<r<Je peux t'acheter des trésors>>,\nmais attention, je ne prends pas\nn'importe quoi ! \nIl n'y a que <r<certains trésors>> qui\nm'intéressent...\n\n\n\x0E\x01\x09\x04\x10\x600Très bien, voyons ce que tu as à me\nproposer !")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf("\x0E\x01\x09\x04\x0F\x409Il fallait le dire plus tôt !")
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
/*< 57>*/ 		printf("\x0E\x01\x09\x04\x00TArg !\nMmph... Mmph...\nAu\x2010au\x2010au secours !")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf("\x0E\x01\x09\x04\x00\x17Aaaarg... Kiko !\nJe me vengerai !")
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
/*<478>*/ 					printf("\x0E\x01\x09\x04\x03\x01Ah, c'est toi, Link.\nJe me doutais que je te verrais ici.\nT'as du nouveau pour moi ?")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf("Hmm, il y a trois insectes qui me font\nenvie, ce soir... Voici leurs noms :\n\n\n- <y<<string arg0>>>\n- <y<<string arg1>>>\n- <y<<y<<string arg2><y<>>\n[1]Parfait ![2-]Tant pis")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf("Qu'est\x2010ce que tu me proposes ?\n<y<<y<[1]<string arg0>[2]<string arg1>[3]<string arg2><y<>>")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf("Hmm, j'en cherchais justement...\nJe t'offre <numeric arg0> rubis par spécimen.")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf("T'en as <numeric arg4>. Ça m'intéresse...\nT'es prêt à m'en vendre combien ?\n[1]1[2]5[3]Tout[4-]Aucun")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf("\x0E\x01\x09\x04\x03\x14Hmm, intéressant...\nJe t'en donne <numeric arg1> rubis.\n\n\n[1]Vendu ![2-]Pas\nquestion")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf("OK, voilà pour toi.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf("\x0E\x01\x09\x04\x03\xFF04Merci bien !\nJe me sens toujours mieux avec\ndes insectes plein les poches !\n\nN'hésite pas à m'en apporter d'autres,\nLink !")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf("\x0E\x01\x09\x04\x01\xFF13Oh, quel dommage...\n\x0E\x01\x09\x04\x00\x500À la prochaine, alors...")
          										}
          									  case 1:
/*<459>*/ 										printf("\x0E\x01\x09\x04\x12\x100T'en as pas autant, comment\ntu pourrais me les vendre ?")
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
/*<470>*/ 								printf("\x0E\x01\x09\x04\x10\xFF0CNon mais oh, je vois bien que t'en as\npas ! Je sais pas à quoi tu joues, mais\nje trouve pas ça très drôle !\n\n\x0E\x01\x09\x04\x01\xFF00T'as des insectes à me vendre, oui\nou non ?\n[1]Oui[2-]Non")
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
/*<468>*/ 								printf("Oh oh... Ça me tente bien !\nJe t'en donne <numeric arg1> rubis pièce.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf("On n'en a jamais trop, de ceux\x2010là !\nJ'achète ! <numeric arg2> rubis pièce.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf("\x0E\x01\x09\x04\x03\x01Hé, Link ! Y a un truc\nqui m'a mis la puce à l'oreille,\naujourd'hui. Et je peux te dire que\nça chatouille ! Héhéhé...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf("\x0E\x01\x09\x04\x03\x01T'es peut\x2010être déjà au courant, mais\ntout à l'heure, je suis allé faire un tour\ndans la grotte de la cascade.\n\nJ'y ai trouvé tout un groupe de\n<r<papillons azur>><r< >>qui voletaient\nensemble dans un endroit\ntout ce qu'il y a de plus banal.\nJe me demande pourquoi ils se\nregroupent comme ça...\nTu trouves pas ça bizarre ?\n\nSi tu veux voir ça par toi\x2010même,\nrends\x2010toi dans la grotte, la nuit...")
/*<722>*/ 				printf("Voyons voir ! Quels insectes\nm'as\x2010tu apportés, ce soir ?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf("\x0E\x01\x09\x04\x00\xFF01Encore toi, Link?\nQu'est\x2010ce que tu me veux ?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf("<r<\x0E\x01\x09\x04\x00\x300>>Hein ?\nQu'est\x2010ce que je suis en train de faire ?\n\n\n\x0E\x01\x09\x04ÿ\x114Ben, j'admire mes <r<insectes>>...")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 418, 'param3': 6}
/*<418>*/ 		printf("\x0E\x01\x09\x04\x01\xFF00Ils sont extraordinaires... Totalement\nfascinants, plus encore qu'Hergo...\n\n\nEnfin...<pause1E> Je ne veux pas dire qu'Hergo\nne vaut pas mieux qu'un insecte !")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf("Bref, <r<les insectes me passionnent>>...\nJe veux en posséder des centaines !\n\n\nMon rêve le plus fou, ça serait d'avoir\nune île à moi, qui grouillerait\nd'insectes !")
/*<424>*/ 		printf("\x0E\x01\x09\x04ÿ\xFF01Tiens, d'ailleurs !\n\n\n\n\x0E\x03\x01\x00Link, <r<si tu trouves des\ninsectes, je suis prêt à te\nles acheter >>!\n\nEt je t'assure que quand il s'agit\nde bébêtes, je compte pas les rubis !\n[1]Très bien[2]Pas question")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf("\x0E\x01\x09\x04\x03\xFF04Héhéhé !\nMa collection d'insectes va prendre des\nproportions inimaginables !")
          			flw_420:
/*<420>*/ 			printf("Ben, si jamais t'as envie de me vendre\ndes insectes, tu me trouveras ici, je\nsuis là toutes les nuits !\n\n\x0E\x01\x09\x04\x12\x100Mais j'achète pas n'importe quoi !\nJe décide de mes acquisitions\n<r<selon l'humeur du moment>>.\n\nAutre chose... Je suis comme qui dirait\nun oiseau de nuit, tu vois. Une sorte de\nluciole, en fait.\n\nBref, j'achète des insectes <r<que la nuit>>.\nJ'ai pas particulièrement envie que\nça se sache...\n\n\x0E\x01\x09\x04\x03\xFF14Compris, Link ?\nJe sais bien qu'on s'apprécie pas \nforcément, toi et moi, mais j'te fais\nconfiance, OK ?")
/*<447>*/ 			printf("Allons\x2010y, alors ! T'as des insectes à\nme vendre ?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf("\x0E\x01\x09\x04\x01\xFF05Quoi ? C'est pas très gentil, ça !\nJe vais tout raconter à Hergo !")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf("\x0E\x01\x09\x04\x00\x00Rrrrrrrrrrr... Pchhhhhhh...\nZZZZZZZZZZ...")
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
/*<116>*/ 						printf("\x0E\x01\x09\x04\x08\x909Hihihi ! Merci, Link !\nGrâce à toi, j'ai un super amoureux !\n\n\nMais je me demande si j'ai blessé\n<b<Orbo>>...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x00\x01Merci de m'avoir apporté cette lettre,\nLink.\n\n\n\x0E\x01\x09\x04\x01\xD14Arf...\nJe me demande ce que <b<Kiko>>\nen penserait...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf("\x0E\x01\x09\x04\x00\x14Arf...\nComment je pourrais attirer\nl'attention de <b<Kiko>>...?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf("\x0E\x01\x09\x04\x08\x404Ah ! \x0E\x03\x01\x00Link !\n\n\n\nÇa va ? Euh...\nQue puis\x2010je faire pour toi ?\n\x0E\x01\x08\x02\xFECDJe me demande s'il a entendu...\x0E\x01\x08\x02Í\n\n[1]Donner la\nlettre[2]Garder la\nlettre")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf("\x0E\x01\x09\x04\x08\x906Quoi ? Une lettre ? Pour moi ?\n<pause0A>.<pause0A>.<pause0A>.<pause0A>?\nElle est peut\x2010être de <b<Kiko >>!\n\n[1]Tiens ![2]Euh, non...")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf("\x0E\x01\x09\x04\x0E\x90AOh, merci ! Donne.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 598, 'param3': 6}
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 611, 'param3': 6}
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf("\x0E\x01\x09\x04\x10\x400Je me demande de qui ça peut venir...")
/*<594>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 81, 'param3': 6}
/*< 81>*/ 						printf("\x0E\x01\x09\x04\x10\xD00Hmm... <pause14>\n\x0E\x01\x06\x02\xFECDDis donc, y a plein de ratures...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x10\x400Enfin, bref...\nQu'est\x2010ce que ça dit...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 600, 'param3': 6}
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf("« Depuis le premier jour, mon amour\npour toi est plus étendu que le ciel et\nplus profond que la mer de nuages. »\n\n\x0E\x01\x09\x04\x13\x1200« J'aimerais beaucoup sortir avec toi.\nTon chevalier servant, <b<Orbo >>»\n\n\n\x0E\x01\x09\x04\x00\x500.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.<pause0A>.\n\n\n\n\x0E\x01\x09\x04\x01\xD00Euh... Cet... <b<Orbo>>... c'est pas un des\nacolytes d'<b<Hergo >>?\n\n\n\x0E\x01\x09\x04\x0C\x400Et... C'est... C'est bien une lettre\nd'amour... Non ?\n\n\n\x0E\x01\x09\x04\x0B\x712Oh là là...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 612, 'param3': 6}
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf("\x0E\x01\x09\x04\x00\x09Mais bon...\nEn même temps, il y a mis tout\nson c\x153ur...\n\nPeut\x2010être que je devrais y réfléchir...\n\n\n\n\x0E\x01\x09\x04\x08\x900Mais qu'est\x2010ce que je raconte ?\n\n\n\n\x0E\x01\x09\x04\x01\xD14Arf...\nJe me demande ce que <b<Kiko>>\nen penserait...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x08\x912Tu joues à quoi, là ?\nTu te moques de moi ?")
          					}
          				  case 1:
/*< 76>*/ 					printf("\x0E\x01\x09\x04\x01\x406Hein ?\nT'es bizarre, Link...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x01Dis, Link...\nTu l'trouves comment <b<Kiko>>, toi ?\n\n\n[1]Il est sympa[2]Comment je\nle trouve ?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf("\x0E\x01\x09\x04\x0B\x70AOh oui, j'trouve aussi !\nIl est gentil et intelligent.\nEt qu'est\x2010ce qu'il est beau...\n\n\x0E\x01\x09\x04\x0C\x416Oh... j'sais pas ce qui\nm'a pris, désolée...\n\n\n\x0E\x01\x09\x04\x08\x400Désolée de t'avoir posé une question\naussi bizarre...")
          			  case 1:
/*< 72>*/ 				printf("\x0E\x01\x09\x04\x01\x406Hein ?\nEuh... J'veux dire...\n\n\n\x0E\x01\x09\x04\x08\x416Non, rien ! J'sais pas ce qui m'a pris,\ndésolée...")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf("\x0E\x01\x09\x04\x00\x1001Ouah, tes habits te vont super bien !\n\n\n\n\x0E\x01\x09\x04\x00\x40AMais t'as pas encore l'air aussi cool\nque Kiko...")
          			  case 1:
/*<668>*/ 				printf("\x0E\x01\x09\x04\x01\x404Ah ! <pause14> \x0E\x03\x01\x00Link !\nT'as réussi l'examen !\nFélicitations !\n\n\x0E\x01\x09\x04\x08\x400Ouah... Alors maintenant t'as un\nuniforme vert, hein ? <pause14>C'est trop cool ! \n\n\n\x0E\x01\x09\x04\n\x1000J'suis sûre que Zelda sera\nimpressionnée en te voyant !\n\n\n\x0E\x01\x09\x04\x00\x406T'inquiète pas pour elle ! J'suis sûre\nque tout va bien et qu'elle va bientôt\nrentrer.")
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
/*<105>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Je vais enfin pouvoir récupérer\nun peu ! Merci beaucoup !")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf("\x0E\x01\x09\x04\x00\x08Ah ! Merci à toi !\nDe tout c\x153ur !")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf("\x0E\x01\x09\x04\x00\xE0DMais, on dirait...?\nMais oui, c'est bien le <y<hochet >>du bébé !\n\n\nTu l'as trouvé !")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 556, 'param3': 6}
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 20, 'param3': 6}
/*< 20>*/ 						printf("Tiens, mon trésor...\nJe connais un gentil bébé\nqui va faire un gros dodo !\x0E\x01\x05\x04x\x00")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf("\x0E\x01\x09\x04\x00\xE08Quel soulagement !\nLe bébé semble être dans de meilleures\ndispositions, à présent !\n\nJe suis sûr qu'il va s'endormir en un\néclair ! Et je vais l'imiter avec \ngrand plaisir !\n\n\x0E\x01\x09\x04\x10\xE00Merci beaucoup.\nJe n'oublierai jamais\nce que tu viens de faire !")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf("\x0E\x01\x09\x04\x0D\xF09Ahh... Si seulement quelqu'un pouvait\ntrouver le <y<hochet >>du bébé...\n\n\n<r<\x0E\x01\x09\x04\x10\x00Un oiseau l'a emporté>>, mais je suis sûr\nqu'il est toujours <r<quelque part en\nville>>...\n\n\x0E\x01\x09\x04\x0D\x00Ahh...\nJe sens que je ne vais pas beaucoup\ndormir cette nuit, encore...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 11, 'param3': 6}
/*< 11>*/ 				printf("\x0E\x01\x06\x02\xFCCD...<pause2D>\x0E\x01\x06\x02Í\x0E\x01\x09\x04\x0D\x00 Ahhh...\x0E\x01\x05\x04A\x00")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf("Ahhh... On dirait que je vais encore\npas dormir beaucoup cette nuit...\n\n\n[1]Pourquoi ?[2]Tu es\nfatigué ?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf("\x0E\x01\x09\x04\x10\xF06Oh excuse\x2010moi, je ne voulais pas que tu\nte fasses du souci pour moi...")
          					flw_26:
/*< 26>*/ 					printf("\x0E\x01\x09\x04\x0D\xF00Le bébé pleure toute la nuit,\nen ce moment. Je n'en dors plus !\nPourtant, il fait ses nuits, d'habitude.\n\nMais depuis qu'on a perdu son bidule,\ny a plus moyen de le calmer !\n\n\n[1]Quel bidule ?[2]Oh, je vois...")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf("\x0E\x01\x09\x04\x10\xF01Son <y<hochet>>.")
          						flw_15:
/*< 15>*/ 						printf("\x0E\x01\x09\x04\x00\xF00Il suffirait de le lui donner pour qu'il\nse calme immédiatement !\nMais on l'a perdu, l'autre jour.\n\n<r<Un oiseau l'a emporté dans son bec>>.\nIl a dû croire que ça se mangeait...\n\n\n\x0E\x01\x09\x04\x0E\xF00Et comme ce n'est pas le cas, il a dû\nl'abandonner <r<quelque part dans la\nville>>.\n\nMais je n'ai pas réussi à mettre la\nmain dessus...\n\n\n\x0E\x01\x09\x04\x00\x09Aah... si seulement quelqu'un pouvait\nle retrouver...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf("\x0E\x01\x09\x04\x10\xF04Tu es au courant, on dirait.\nC'est son <y<hochet >>qui lui manque.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf("\x0E\x01\x09\x04\x10\xF07Ça se voit tant que ça ?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf("\x0E\x01\x09\x04\x00\x03Ahhh... Comment ça s'endort,\nau juste, un enfant ?\nJe ne sais plus quoi faire !\n\n[1]Dur, dur[2]Où est\nsa mère ?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oui, c'est dur ! Enfin, je crois...\nDe toute façon, même quand il\npleure, il est adorable !\n\nTu comprendras quand tu en\nauras un, toi aussi !")
          			  case 1:
/*<129>*/ 				printf("\x0E\x01\x09\x04\x00\x07Ah, sa mère<pause0A>.<pause0A>.<pause0A>. Elle est fatiguée,\nla pauvre... Elle travaille à\nla boutique toute la journée !\n\n\x0E\x01\x09\x04\x0D\xF06Le soir, il faut qu'elle se repose...\nHaha...")
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
/*< 99>*/ 					printf("\x0E\x01\x09\x04\x0C\x401Salut, Link !\nGrâce à toi, j'ai une super amoureuse !\nMerci !")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf("\x0E\x01\x09\x04\x00\x18Hmm... Euh...\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Imaginons que tu veuilles savoir s'ils\nsortent ensemble, tu crois que tu irais\nlui demander toi\x2010même ?\n\n\x0E\x01\x09\x04\x11\xE00Ça n'a rien à voir avec moi, hein !\nC'est juste que les relations humaines\nm'intéressent en règle générale...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nÇa va ?")
/*<545>*/ 			printf("\x0E\x01\x09\x04\x01\xC09Quoi ?\n<b<Grida>> a reçu une lettre d'amour ?\n\n\n\x0E\x01\x09\x04\x0F\x1100Et que s'est\x2010il passé ?\nAh, intéressant...\nJe vois...\n\n\x0E\x01\x09\x04\x0C\xC54Et...\nEt elle compte faire quoi...?\n\n\n[1]Y réfléchir[2]J'en sais rien")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf("\x0E\x01\x09\x04\x11\xE53Quoi ?!\nMais c'est impossible !")
          				flw_96:
/*< 96>*/ 				printf("\x0E\x01\x09\x04\x11\xE09Enfin... De toute façon,\nil n'y a rien entre moi et <b<Grida>>.\nOn est juste amis...\n\nAlors, ça ne me regarde pas.\nElle peut sortir avec qui elle veut...\n\n\n\x0E\x01\x09\x04\x0C\xC00Mais tout de même, j'ai mon mot\nà dire quand il s'agit de la morale de\ncette école !\n\n\x0E\x01\x09\x04\x08\xC00Enfin, peut\x2010être que l'amour\nidéal est celui qui ignore les entraves ?\nEt si on ne l'a pas vécu, on ne\nsait pas vraiment ce qu'est l'amour ?\n\x0E\x01\x09\x04\x0B\xC00Donc j'ai le droit de m'assurer qu'elle\npeut vivre librement son amour !\n\n\n\x0E\x01\x09\x04\x11\xE00Et puis moi aussi, j'ai le droit d'aimer\nquelqu'un librement, après tout !\n\n\n\x0E\x01\x09\x04\x0C\xC1BTu ne crois pas,\nLink ?\n[1]Je sais pas...[2]Tu l'aimes ?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x0F\x1152C'est vrai, c'est pas le moment\nde parler de ça.")
          					flw_122:
/*<122>*/ 					printf("\x0E\x01\x09\x04\x10\x1117Enfin, bref...\n\n\n\n\x0E\x01\x09\x04\x0F\xC00Mais ça te dérangerait pas de lui\ndemander ce qu'elle a décidé ?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x11\xE53Pff ! Ne raconte pas n'importe quoi,\nLink !\n\n\n\x0E\x01\x09\x04\x12\xC00Comment peux\x2010tu imaginer une chose\npareille ?")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x0F\x1118Ah, d'accord...\nMais ça me travaille, quand même.")
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
/*<257>*/ 			printf("\x0E\x01\x09\x04\x07\x1602Je vais faire de mon mieux pour\ndevenir costaud. Reviens me voir\nbientôt, tu verras mes progrès !")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf("\x0E\x01\x09\x04\x00\x11Hmmff... Pfiouu... \x0E\x03\x01\x00Link,\nqu'est\x2010ce que tu as là ? Ça serait pas\nde l'<y<Endurol>>, dis ?\n\nTu voudrais pas me le donner ?\n[1]D'accord[2-]Pas\nquestion")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf("\x0E\x01\x09\x04\x00\x0BC'est vrai ?!\nOh, merci ! Je te revaudrai ça !")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 270, 'param3': 6}
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 265, 'param3': 6}
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 264, 'param3': 6}
/*<264>*/ 					printf("\x0E\x01\x09\x04\x00\x10Waouh !\nToute ma fatigue s'envole !")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf("\x0E\x01\x09\x04\x00\x12Ahh...\nJe ne sais pas si j'arriverai à devenir\ncostaud avec ces exercices...\n\n[1]Ça ne dépend\nque de toi[2]Bien sûr\nque si !")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf("\x0E\x01\x09\x04\x00\x09Tu as raison !\nJe dois faire des efforts, c'est tout !\nÇa ne sert à rien de rester à gémir.")
          						flw_294:
/*<294>*/ 						printf("\x0E\x01\x09\x04\x00\x1800Merci, Link.\nJe vais faire de mon mieux\npour devenir costaud.\n\n\x0E\x01\x09\x04\x15\x1800Allez, je me remets à l'entraînement !\nReviens me voir bientôt, tu verras\nmes progrès !")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf("\x0E\x01\x09\x04\x00\x1609Oh, tu as l'air confiant...\nEh bien, j'imagine que tu dois avoir\nraison. Mes efforts devraient être\nrécompensés...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf("\x0E\x01\x09\x04\x00\x11Oh, non, bien sûr...\nExcuse\x2010moi, c'était vraiment\négoïste de ma part...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf("\x0E\x01\x09\x04\x00\x03T\x2010T'inquiète pas !\nJ'y arriverai tout seul !")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x11Hmmff... Pfiouu...\nJ'y arrive pas...\n\n\nJe voudrais continuer, mais je n'en\npeux plus... Si seulement j'avais une\n<r<potion capable d'augmenter mon\nendurance>>...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf("\x0E\x01\x09\x04\x00\x03Nom d'un p'tit oiseau !\nFaut vraiment que je me remplume !\n\n\nJe vais continuer à m'entraîner\ntout seul jusqu'à ce que je devienne\ncostaud !")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf("\x0E\x01\x09\x04\x00\x10Gnaaarf... Hmmff...\nPfiouu...\n\n\n\x0E\x01\x09\x04\x10\x1600Ah, Link ! Bonsoir.\n\n\n\nTu te demandes ce que je fais ?\nBen, tu vois, je m'entraîne !\n\n\nQuand on est pas capable de porter un\ntonneau, y a du souci à se faire !\n\n\nJ'essaie de développer mes muscles.\n\n\n\n\x0E\x01\x09\x04\x00\x1711Mais je voudrais pas que les autres\nrigolent, alors je m'entraîne la nuit...")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0BOh ! \x0E\x03\x01\x00Link, qu'est\x2010ce que\ntu as là ? Ça serait pas de l'<y<Endurol>>,\ndis ?\n\nTu voudrais pas me laisser le boire ?\n[1]D'accord[2-]Pas\nquestion")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf("Je voudrais continuer, mais je n'en\npeux plus... Si seulement j'avais une\n<r<potion capable d'augmenter mon\nendurance>>...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x03Nom d'un p'tit oiseau !\nFaut vraiment que je me remplume !\n\n\nJe vais continuer à m'entraîner\ntout seul jusqu'à ce que je devienne\ncostaud !")
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
/*<682>*/ 				printf("\x0E\x01\x09\x04\x00\x08Encore toi, Link ?\nCe soir, j'veux consacrer\ntoutes mes pensées à Grida !\n\nSi tu veux me parler, t'as qu'à revenir\nen journée. Allez, ouste !")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf("\x0E\x01\x09\x04\x00\x10Hé hé hé ! J'ai pas peur d'<b<Hergo>>, moi !\nC'est ma chambre maintenant, et toc !")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link !\nJe vais devenir tellement costaud\nque tu ne me reconnaîtras même pas !\n\nReviens me voir bientôt,\ntu verras mes progrès !")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf("\x0E\x01\x09\x04\x00\x10Hmmff... Pfiouu...\nHé, Link !\n\n\nTu voudrais pas partager un peu\nde ton <y<Endurol>> avec moi ?\n\n\n[1]D'accord[2-]Non")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf("\x0E\x01\x09\x04\x00\x0BC'est vrai ?!\nMerci ! Je l'accepte avec plaisir !")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 311, 'param3': 6}
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 135, 'next': 309, 'param3': 6}
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 345, 'param3': 6}
/*<345>*/ 					printf("\x0E\x01\x09\x04\x00\x10Waouh ! J'ai l'impression de\nrevenir à la vie !\nToute ma fatigue s'est envolée !")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf("\x0E\x01\x09\x04\x00\x12Je m'inquiète un peu, parfois.\nJ'ai l'impression de ne pas m'entraîner\nefficacement...\n\nJe vais devoir continuer combien\nde temps avant de devenir vraiment\ncostaud ? Qu'en penses\x2010tu,\nLink ?\nCombien de pompes faut\x2010il\nencore que je fasse avant\nde voir pointer des muscles ?\n\n[1]Un millier[2]Peu importe !")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf("\x0E\x01\x09\x04\x00SOh... Autant que ça ?!\n\n\n\n\x0E\x01\x09\x04\x10\xE00Je vois...\nLe chemin vers la puissance physique\nest rocailleux, à ce que je vois...")
          						flw_352:
/*<352>*/ 						printf("\x0E\x01\x09\x04\x01\x1600J'ai compris !\nCette fois, je vais vraiment\ndevenir balèze !\n\n\x0E\x01\x09\x04\x00\x1800Reviens me voir bientôt, tu verras mes\nprogrès !")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf("\x0E\x01\x09\x04\x00\x07Comment ça, peu importe ?\n\n\n\n\x0E\x01\x09\x04\x07\x800Oh, tu veux dire que je dois\ncontinuer jusqu'à ne plus\npouvoir les compter, c'est ça ?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf("\x0E\x01\x09\x04\x00\x11Je comprends...\nExcuse\x2010moi de t'avoir ennuyé avec ça.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf("Ce n'est rien !\nJe réussirai tout seul !")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf("\x0E\x01\x09\x04\x00\x11Hmmff... Pfiouu...\nJ'y arrive pas...\n\n\nJe voudrais continuer, mais je n'en\npeux plus... Si seulement j'avais une\n<r<potion capable d'augmenter mon\nendurance>>...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf("\x0E\x01\x09\x04\x00\x03Non, ce n'est pas bien...\nJe dois arrêter de te demander\nde l'aide tout le temps !\n\nJe dois réussir tout seul.")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x10Hmmff... Pfiouu...\nBonsoir, Link.\n\n\n\x0E\x01\x09\x04\xC10\xFF00Je m'entraîne dur depuis la dernière\nfois que je t'ai vu, mais je crois que\nje suis dans l'impasse...\n\nJ'accumule de la fatigue, on dirait.")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf("\x0E\x01\x09\x04\x00\x0BAh !\n\x0E\x03\x01\x00Link, est\x2010ce que c'est\nde l'<y<Endurol>> que tu as là ?\n\nTu voudrais pas m'en donner un peu ?\n[1]D'accord[2-]Non")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf("Hé, Link !\nTu voudrais pas me donner encore\nun peu d'<y<Endurol>> ?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf("\x0E\x01\x09\x04\x00\x03Non, ce n'est pas bien...\nJe dois arrêter de te demander\nde l'aide tout le temps !\n\nJe dois réussir tout seul.")
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
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hé, Link !\nAlors, tu lui as donné ma lettre ?\n\n\n[1]Ben, en fait...[2]Quelle lettre ?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x11\x1F1DQu\x2010quoi ?!\nTu l'as donnée à la folle des toilettes ?!")
          				flw_64:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x01\x1F00Mais j't'avais dit de surtout pas lui\ndonner ! T'avais juré !\n\n\n\x0E\x01\x09\x04\x1A\x1F17Mais quel idiot ! T'as tout gâché !\n\n\n\nJ'te parlerai plus jamais !\nJ'te déteste, Link !")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf("\x0E\x01\x09\x04\x00\x1F18Nooooooon !!!")
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
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x15\x1F12Qu\x2010quoi ?!\nComment ça, quelle lettre ?\n\n\n\x0E\x01\x09\x04\x11\x1B00Oh non... La folle des toilettes...\nT\x2010Tu lui as donné ma lettre ?!")
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
/*<544>*/ 				printf("\x0E\x01\x09\x04\x00\x0FAhhh...\nAlors <b<Grida >>sait maintenant\nc'que je ressens...\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Qu'est\x2010ce que j'dois faire ?\nJ'ai le trac...")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf("\x0E\x01\x09\x04\x00\x13Quoi ?!\nT'as donné la lettre à <b<Grida >>?!\n\n\n\x0E\x01\x09\x04\x01\x2500Purée !!!\nQu'est ce que j'fais ?!\nTu crois que j'dois lui parler ?\n\n\x0E\x01\x08\x02\xFFCD\x0E\x01\x09\x04\x01\x1F00Oh non, c'est trop la honte...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf("\x0E\x01\x09\x04\x00\x02T'as déjà oublié ta mission,\nLink ?\nVa donner ma lettre à la fille au\n<r<chapeau rond>>.\n\x0E\x01\x09\x04\x01\x1B00T'as pas intérêt à la donner à cette\n<r<toquée dans les toilettes >>! Jure\x2010le !")
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
/*<251>*/ 				printf("Woooo...!")
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
/*<321>*/ 			printf("\x0E\x01\x09\x04\x15\x180AJe n'ai même plus besoin de faire\nde pause ! Mon prochain objectif,\nc'est de soulever un tonneau avec\nun seul doigt !")
          		  case 1:
/*<322>*/ 			printf("\x0E\x01\x09\x04\x15\x180AMpfff...\nJe pourrais continuer\npendant des heures...")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf("\x0E\x01\x09\x04\x15\x190AMpffff...\nJe pourrais continuer pendant des\nheures !\n\n\x0E\x01\x09\x04\x01\x1600... Salut, Link !\nTu tombes bien !\nJe voulais te demander quelque chose !\n\n\x0E\x01\x09\x04\x07\x1800J'ai essayé de porter un tonneau\nl'autre jour...\nJe l'ai soulevé d'une seule main !\n\n\x0E\x01\x09\x04\x00\x1600Tu crois que ça veut dire que\nj'ai pris du muscle ?\n\n\nRéponds\x2010moi franchement,\nLink...\nTu me trouves costaud, maintenant ?\n[1]Peut\x2010être un\npeu trop...[2]Oui")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf("\x0E\x01\x09\x04\x07\x1809Hmm, j'ai peur que tu en rajoutes\nun peu... Mais ça me fait plaisir\nquand même !")
          			flw_320:
/*<320>*/ 			printf("\x0E\x01\x09\x04\x00\x1600Si j'en suis là aujourd'hui, c'est grâce\nà toi, Link.\n\n\n\x0E\x01\x09\x04\x01\x1900Je me serais découragé il y a longtemps\nsi tu ne m'avais pas soutenu comme\ntu l'as fait.\n\n\x0E\x01\x09\x04\x07\x180BMerci de tout c\x153ur, Link !")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf("\x0E\x01\x09\x04\x00\x180BC'est vrai ? Merci !\nJe suis tellement heureux !")
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
/*<789>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09Salut, Link !\nMerci pour ce que tu as fait pour\nma s\x153ur. Je ne l'oublierai jamais !")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09\x0E\x03\x01\x00Link ! Ma s\x153ur est\nrentrée saine et sauve !\n\n\n\x0E\x01\x09\x04\n\x400Quel soulagement ! J'avais tellement\npeur qu'il lui soit arrivé malheur...\n\n\n\x0E\x01\x09\x04\x0B\x400Tout ça, c'est grâce à toi,\nLink. Merci infiniment !")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf("\x0E\x01\x09\x04\x0B\xE09\x0E\x03\x01\x00Link !\nMa s\x153ur est saine et sauve !\n\n\n\x0E\x01\x09\x04\n\x400Je suis tellement soulagé !\nJ'imaginais le pire... Je ne sais pas\nce que j'aurais fait s'il lui était\narrivé quelque chose...\nQuoi ? C'est toi qui lui as apporté\nle remède ?<pause14> \x0E\x01\x09\x04\x0B\x400Oh, merci !\n\n\nJe sais que ce n'est pas grand\x2010chose\ncomparé à ce que tu as fait pour elle,\nmais accepte ceci en guise de\nremerciement.")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf("\x0E\x01\x09\x04\x0B\xA05Oh, dommage ! Je voulais t'offrir ce\n<y<flacon vide>>, mais il n'y a plus de place\ndans ta sacoche ni à la consigne...\n\nJe le garde de côté pour toi. Essaie\nde faire le tri et reviens me voir, je\nte le donnerai à ce moment là.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf("\x0E\x01\x09\x04\x0B\x400Je suis sûr que tu pourras lui trouver\ntout un tas d'usages différents.\nEncore merci !")
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
/*<205>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Que se passe\x2010t\x2010il, Link ?\nApporte les <y<spores de champignon>>\nà ma s\x153ur, vite !\n\n\x0E\x01\x09\x04\n\x400Je compte sur toi !")
          					  case 1:
/*<201>*/ 						printf("\x0E\x01\x09\x04\x0B\x406Eh bien, qu'as\x2010tu fait des <y<spores\nde champignon >>? Tu ne les lui as pas\nencore données ?\n\n\x0E\x01\x09\x04\n\x400Si jamais tu les perds, tu peux en\n<r<prélever d'autres sur des champignons>>.\n\n\nJe compte sur toi, Link !")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf("\x0E\x01\x09\x04\x0B\x409Si tu as de la place dans ta sacoche,\ntu pourras prendre ceci.\n\n\n<y<\x0E\x01\x09\x04\n\x400>>Ce sont des <y<spores de champignon>>.\nElles guériront la blessure du\ncélestrier.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf("\x0E\x01\x09\x04\x00\x50DTu as trop d'affaires avec toi !\n\x0E\x01\x09\x04\x00\x400Commence par faire de la place dans\nta sacoche, et reviens vite me voir !")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf("\x0E\x01\x09\x04\x0B\x404Si elle l'applique sur la blessure de son\ncélestrier, il guérira immédiatement.\nElle pourra alors rentrer à la maison\nsans problème.\n\x0E\x01\x09\x04\x00\xC00Apporte\x2010les à ma s\x153ur !\n\x0E\x01\x09\x04\x00\x400Tu pourras garder le <r<flacon >>quand\ntu lui auras donné les spores !\n\nJe compte sur toi, Link !")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf("\x0E\x01\x09\x04\x0B\x50DQuoi ?!\nTu as trouvé ma s\x153ur ?!\nEt son célestrier est blessé ?!\n\n\x0E\x01\x09\x04\n\xC00C'est terrible !\nDans ce cas, apporte\x2010lui ceci\naussi vite que possible !\n\n<y<\x0E\x01\x09\x04\x00\x400>>Ce sont des <y<spores de champignon>>,\ncela devrait soigner son célestrier.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf("\x0E\x01\x09\x04\n\xC12Que faire... Je suis fou d'inquiétude !\n\n\n\nD'habitude elle prend toujours un\n<r<flacon>> de remède avec elle au cas\noù son oiseau serait blessé...\n\nMais aujourd'hui, elle a oublié...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf("\x0E\x01\x09\x04\x0D\x400Ma s\x153ur disait qu'elle était intriguée\npar l'<b<île qui ressemble à une roulette>>.\nDonc je pense qu'elle a dû s'envoler\nvers le<r< sud\x2010ouest>>.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf("\x0E\x01\x09\x04\x01\x400Tu veux bien partir à sa recherche,\nLink ?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf("\x0E\x01\x09\x04\n\xC12Que faire...\nJe suis fou d'inquiétude...\n[1]Qu'y a\x2010t\x2010il ?[2]Calme\x2010toi !")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf("\x0E\x01\x09\x04\x00\x411Salut, Link.\nTu veux bien m'écouter un instant ?\nC'est gentil.")
          				flw_181:
/*<181>*/ 				printf("\x0E\x01\x09\x04\x00\x400Tout à l'heure, ma <r<petite s\x153ur >>est\npartie sur son célestrier et elle n'est\ntoujours pas rentrée...\n\nD'habitude quand elle part en\npromenade, ça ne dure pas aussi\nlongtemps. Alors je suis allé à sa\nrecherche. Mais en vain...\n\x0E\x01\x09\x04\x0B\x500Je ne supporte pas l'idée qu'il ait pu lui\narriver quelque chose... Je me ronge\nles sangs, je ne sais plus quoi faire !")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf("\x0E\x01\x09\x04\x00\x411Hé, Link, tu veux bien\npartir à sa recherche ?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf("\x0E\x01\x09\x04\x0D\x400Elle était intriguée par l'<b<île qui\nressemble à une roulette>> qui s'est\nformée récemment. Elle a donc\ndû s'envoler vers le <r<sud\x2010ouest>>.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf("\x0E\x01\x09\x04\x01\x400Je compte sur toi, Link !")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf("\x0E\x01\x09\x04\x0B\x500Comment veux\x2010tu !\nOh, excuse\x2010moi... C'est pas\nen te criant dessus que je vais\ntrouver une solution...")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf("\x0E\x01\x09\x04\x0B\x409Il paraît que l'île de la Déesse\na disparu ! C'est à peine croyable !\n\n\n\x0E\x01\x09\x04\n\x400C'est mauvais signe, ça c'est sûr...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf("\x0E\x01\x09\x04\x01\x400Au fait, <b<Latruche>> est parti vers le\ncumulonimbus. Il était tout content\nparce qu'il avait trouvé un <r<insecte rare>>.\n\nC'est pas comme ça qu'il va réussir à\nses examens...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf("\x0E\x01\x09\x04\x01\x400<b<Latruche>> a dit qu'il voulait créer\nun paradis des insectes sur son île\n<r<dans le cumulonimbus>>. Pour ça, il\nen collectionne toutes sortes.")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf("\x0E\x01\x09\x04\n\xA00Hé, un de tes camarades de classe\ns'appelle <b<Latruche>>, pas vrai ?\n\n\nIl raconte qu'il a découvert une île\nidéale pour l'élevage des insectes\n<r<dans le cumulonimbus>>. C'est un vrai\nmordu de bestioles en tout genre !\n\x0E\x01\x09\x04\x0B\x400Je me demande bien ce qu'il\ny fait, sur son île...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tout à l'heure, j'ai entendu un bruit\nde rochers qui s'écroulaient...\nQu'est\x2010ce qui s'est passé ?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qu'est\x2010ce que tu as fait tout à l'heure\nsur la grand\x2010place ? Le ciel s'est\nassombri tout à coup...")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf("\x0E\x01\x09\x04\n\x405C'est vraiment bizarre... Pourquoi\ntous ces papillons se rassemblent\nsur la grand\x2010place ? Il y a rien ici.")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf("\x0E\x01\x09\x04\x00\x01Salut, Link ! T'es toujours\nen train de courir partout, dis donc !")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nÇa fait un moment que j'ai pas vu la\nbande des trois petits voyous.\n\nEst\x2010ce qu'ils se seraient enfin mis à\nétudier après leur échec à l'examen\nde passage en classe supérieure ?")
          							  case 1:
/*<785>*/ 								printf("\x0E\x01\x09\x04\x00\x01Salut Link !\nJe suis allé voir cette île roulette qui\nintriguait tant ma s\x153ur.\n\nLà\x2010bas, il y avait un homme tout\ndéprimé parce qu'il a fait tomber\nsa <r<roulette >>sous les nuages.\n\nEnfin, une fois que quelque chose\nest tombé sous les nuages, il y a\nplus grand\x2010chose à faire.")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf("\x0E\x01\x09\x04\n\x405Hé, tu as vu ? La tour de lumière\német un rayon lumineux qui éclaire\nle cumulonimbus !\n\nC'est comme si elle disait de se rendre\nlà\x2010bas...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nÇa fait un moment que j'ai pas vu\nZelda. Il lui est arrivé quelque chose ?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\n\n\n\n\x0E\x01\x09\x04\n\x400Comment ? <r<Deux ailes >>?<pause1E> Tu sais, les\ndevinettes, c'est vraiment pas mon\ntruc. Pourquoi t'irais pas demander\nau <r<diseur de bonne aventure>> ?")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf("\x0E\x01\x09\x04\x0B\xE09Salut, Link !\nMerci pour ce que tu as fait pour\nma s\x153ur. Je ne l'oublierai jamais !")
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
/*<818>*/ 		printf("\x0E\x01\x09\x04\x0C\x401J'ai appris que l'île de la Déesse\nétait tombée !<pause1E> Quelle tragédie...\n\n\n\x0E\x01\x09\x04\x11\xE00Mais j'ai compris le message que la\nDéesse voulait nous transmettre.\nElle nous demande d'être forts,\nmême sans elle.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf("\x0E\x01\x09\x04\x0C\x40B\x0E\x01\x08\x02\xFECDEt puis... maintenant, j'ai ma propre déesse.")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf("\x0E\x01\x09\x04\x00\x1101\x0E\x03\x01\x00Link !\nNe répète à personne ce\nque je vais te dire...\n\n\x0E\x01\x09\x04\x0C\x400Tout à l'heure, quand je suis sorti,\nj'ai remarqué qu'une étrange structure\nétait apparue sous l'île de la Déesse.\n\n\x0E\x01\x09\x04\x11\xE00Mais qu'est\x2010ce qui a bien pu se passer ?\nEst\x2010ce que Célesbourg est en danger ?")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf("\x0E\x01\x09\x04\x00\x05Salut, Link !\nTu n'as pas l'air en forme,\nces derniers temps.\n\n\x0E\x01\x09\x04\x00\x40BMais garde le sourire !\n<pause14>Zelda sera bientôt de retour,\nj'en suis sûr ! Il suffit d'y croire !")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nÇa va bien ?\n\n\n\x0E\x01\x09\x04\x0C\x1400Quoi ? La Triforce dissimulée par\nla Déesse ? \n\n\n\x0E\x01\x09\x04\x10\x1100Euh non, je sais rien à ce sujet,\ndésolé...\n\n\n\x0E\x01\x09\x04\x08\x1400Pour ce genre d'informations,\ntu devrais demander aux professeurs.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf("\x0E\x01\x09\x04\x00\x05Salut, Link !\nTu n'as pas l'air en forme,\nces derniers temps.\n\n\x0E\x01\x09\x04\x00\x40BMais garde le sourire !\n<pause14>Zelda sera bientôt de retour,\nj'en suis sûr ! Il suffit d'y croire !")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nÇa va mieux ?\n\n\n\x0E\x01\x09\x04\x09\x1400Moi aussi, j'ai des soucis, tu sais.\nMais je fais bonne figure devant les\nautres...\n\n\x0E\x01\x09\x04\x11\x400Et du coup, j'en oublie que j'ai des\nsoucis ! C'est ce que j'essaie de me\ndire !")
          						  case 1:
/*< 90>*/ 							printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nAlors, tu as réussi l'examen !\nL'uniforme te va bien en tout cas !\n\n\x0E\x01\x09\x04\x10\x1100Mais pas le temps de parler de ça.\nJe n'arrive pas à croire que Zelda ait\ndisparu...\n\n\x0E\x01\x09\x04\x0C\x1400En plus, vous étiez proches.\nTu dois te faire un sang d'encre...\n\n\n\x0E\x01\x09\x04\x08\x1400Mais je suis sûr qu'elle est saine et\nsauve et qu'elle reviendra vite,\nne t'inquiète pas !")
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
/*<207>*/ 				printf("\x0E\x01\x09\x04\x00\x0BOh, des <y<spores de champignon >>!\nQuel soulagement !\nTu m'as apporté le remède !\n\n[1]Tiens ![2-]Non")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf("\x0E\x01\x09\x04\x0B\x409Merci ! Je vais pouvoir soigner mon\ncélestrier...")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 646, 'param3': 6}
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 233, 'param3': 6}
/*<233>*/ 					printf("\x0E\x01\x09\x04\x00\x04Il sera en pleine forme en un rien\nde temps !")
/*<237>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 581, 'param3': 6}
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x09Je commençais vraiment à perdre\nespoir. Ton aide nous a été précieuse.\n\n\nTu nous as sauvés, mon célestrier et\nmoi ! Merci !")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x04Bien, nous partons ! On se croisera\nsûrement en ville un de ces jours !")
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
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x1113Mais quel monstre !")
          				}
          			  case 1:
/*<730>*/ 				printf("\x0E\x01\x09\x04\x00\x50BAlors, tu me donnes ces spores de\nchampignon ? Avec ça, mon célestrier\nsera guéri en un rien de temps !\n[1]Tiens[2-]Pas\nquestion")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf("<r<\x0E\x01\x09\x04\x00\x01Mon grand frère te donnera le remède>>.\nVa donc à sa rencontre.\n\n\nJe t'attendrai ici avec mon célestrier.\nJe compte sur toi...")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf("\x0E\x01\x09\x04\x00\x50BTiens !\nMais on dirait Link !\nOn peut dire que tu tombes bien !\n\n\x0E\x01\x09\x04\x12\x200Mon célestrier s'est blessé pendant\nnotre promenade. Il ne peut plus\nvoler !\n\n\x0E\x01\x09\x04\x01\x1500On a eu de la chance de réussir à\natterrir ici, mais impossible de rentrer\nà Célesbourg !\n\n\x0E\x01\x09\x04\x12\x1500Je dois soigner sa blessure, mais\n<r<il me faut un remède >>pour ça.\n\n\nMais pas n'importe lequel, j'ai besoin\nd'un truc spécialement <r<pour les\noiseaux >>!\n\nDis donc, Link, \x0E\x01\x09\x04\x15\x200\ntu voudrais pas m'aider ? Il faudrait\nque tu ailles me chercher ce remède...\n\n[1]Mais\nbien sûr ![2]Désolé...")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf("\x0E\x01\x09\x04\x0B\x409Merci de tout c\x153ur !\nTu me sauves la vie !")
          			flw_192:
/*<192>*/ 			printf("<r<Mon grand frère te donnera le remède>>.\nVa donc à sa rencontre. Je suis sûre\nqu'il est mort d'inquiétude à mon sujet.\n\nIl doit être <r<quelque part sur la\ngrand\x2010place de Célesbourg>>,\nà guetter mon retour...")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf("\x0E\x01\x09\x04\x09\x509Mais tu as le remède ! Pourquoi tu ne\nme l'as pas dit plus tôt ? Ces <y<spores de\nchampignon >>sont exactement ce qu'il\nme faut.\nAvec ça, mon célestrier sera sur\npied en un rien de temps ! Tu me\nles donnes ?\n[1]Tiens[2-]Pas\nquestion")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf("Ah bon ? J'imagine que c'est trop te\ndemander... Mais ça te dérange pas\nd'aller dire à mon frère ce qu'il m'est\narrivé ?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf("Ah, tu lui as déjà parlé ?\nVoilà qui simplifie les choses !")
          					flw_194:
/*<194>*/ 					printf("Je t'attendrai ici avec mon célestrier.\nJe compte sur toi...\nEt encore merci !")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf("\x0E\x01\x09\x04\x0C\x1513Mais enfin, tu n'as pas de c\x153ur !\n\n\n\n\x0E\x01\x09\x04\x0B\x409Oh, tu plaisantais, bien sûr !\nJe préfère ça !")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf("\x0E\x01\x09\x04\x0C\x456Il y a eu un grand bruit qui venait de\ndehors tout à l'heure. Je me demande\nce que c'était...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut, Link !\nDis donc, t'es vraiment mignon avec\ncet uniforme...\n\nTu as vraiment l'air d'un homme\nsur lequel on peut compter !")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Quoi ?! Tu sais utiliser l'attaque\ntornade ?!\n\n\n\x0E\x01\x09\x04\x08\x909Là, tu m'épates !<pause1E> \x0E\x01\x09\x04\x0C\x400Enfin,<pause14> je suis sûre que\nKiko aussi en est capable !")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf("\x0E\x01\x09\x04\x00\x06Hein ? La Triforce ?<pause1E>\nC'est quoi, ça ?")
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
/*<705>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link !\nL'île de la Déesse a disparu !\n\n\n\x0E\x01\x09\x04\x00\x1513Comme c'est triste, les célestriers\nadoraient s'y percher !")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf("\x0E\x01\x09\x04\x00\x13Tu as senti ce grand tremblement ?\nJe me demande bien ce que c'était...")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf("\x0E\x01\x09\x04\x00\x01Tiens, Link !\n\n\n\n\x0E\x01\x09\x04\x0C\x200Tu es parvenu à maîtriser la légendaire\nattaque tornade ?<pause1E>\x0E\x01\x09\x04\x0C\x50B Impressionnant !")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf("\x0E\x01\x09\x04\x00WComment ? La Triforce ?<pause14>\nNon, ça ne me dit rien...\n\n\nPourquoi tu ne demandes pas\naux professeurs de l'école ?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf("\x0E\x01\x09\x04\x00\x01Tiens, Link !\nDis\x2010moi, cette fille de l'école de\nchevalerie<pause05>.<pause05>.<pause05>.<pause05> Zelda, c'est bien ça ?\n\nOn ne vous voit plus beaucoup\nensemble ces derniers temps.\nVous vous êtes disputés ?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf("\x0E\x01\x09\x04\x00\x13Tout à l'heure, j'ai eu l'impression que\nle ciel s'était assombri pendant un\ninstant. Je me demande ce que c'était...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf("\x0E\x01\x09\x04\x00\x01Tiens, Link !\n\n\n\n\x0E\x01\x09\x04\x11WComment ? <r<Deux grandes ailes >>?  \n\n\n\n\x0E\x01\x09\x04\x01\x00Des ailes à Célesbourg... Il y a bien les\n<r<moulins>> qui ont des ailes... Mais je ne\nsais pas si ça a un rapport...")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf("\x0E\x01\x09\x04\x00\x0BOh, Link.\nMerci beaucoup pour ton aide.\n\n\n\x0E\x01\x09\x04\x00\x400Mon célestrier est parfaitement\nrétabli. Je te dois beaucoup.")
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
/*<760>*/ 		printf("\x0E\x01\x09\x04\x00\x0BOh, Link.\nMerci beaucoup pour ton aide.\n\n\n\x0E\x01\x09\x04\x00\x400Mon célestrier est parfaitement\nrétabli. Je te dois beaucoup.")
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
/*<107>*/ 	printf("Houuuu...\nIl y a quelqu'un ?\nS'il vous plaît, aidez\x2010moi...")
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
/*<506>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oublie tout ceci...\nAdieu...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf("Ahhh... Du <r<papier>>...!\nTu m'as apporté du <r<papier >>!\n\n\nJ'ouvre la porte...\nEntre...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf("Houuuu... Du <r<papier>>...\n\n\n\nS'il vous plaît... Aidez\x2010moi...\n<r<Il me faut du>> <r<papier>>...\n\n\n<r<N'importe quel papier>>...\nHouuuu...")
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
/*<142>*/ 			printf("\x0E\x01\x09\x04\x00\x1B1BMais ça va pas la tête !\nC'est pas juste du papier !\nÇa, c'est une <r<lettre >>!\n\n\x0E\x01\x09\x04\x17\x2500Une... une lettre... d'amour !\nJ'y ai mis tout mon c\x153ur et toute mon\nâme !\n\n\x0E\x01\x09\x04\x17\x1800Et toi, tu voudrais l'utiliser comme un\nvulgaire bout de papier\x2010toilette ?!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 167, 'param3': 6}
/*<167>*/ 			printf("Écoute\x2010moi bien ! Tu dois donner\ncette lettre à la jolie <b<Grida>>, de la\nclasse au\x2010dessus...\n\n\x0E\x01\x09\x04\x01\xC11Tu vois qui c'est, non ?\nCelle qui a un <r<chapeau rond>>.\nElle est super mignonne...\n\n\x0E\x01\x09\x04\x17\x1800Et la donne surtout pas à cette <r<toquée\ndans les toilettes >>! Jure\x2010le !")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 168, 'param3': 6}
/*<168>*/ 			printf("OK, j'te fais confiance.\nEt t'as pas intérêt à la lire !")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf("J'compte sur toi, Link !\nSi t'accomplis ta mission, j'te\nlaisserai entrer dans ma bande.\n\nEt... euh... merci...")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x08Hein ? Pourquoi tu r'gardes vers\nles toilettes ?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf("Quoi ? Y a quelqu'un la nuit qui\ndemande du papier ?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf("Bon... j'lui donne ?\nOu j'lui donne pas ?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf("Aaaaah !\n\x0E\x03\x01\x00Link, c'est toi !\nTu pourrais prévenir que t'es là !\n\n\x0E\x01\x09\x04\x17\x1800J'étais en pleine réflexion...\nÇa va pas la tête ?\n\n\n[1]Tu pensais\nà quoi ?[2]Besoin\nd'aide ?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf("Quoi ? Tu veux que j't'explique c'qui\nm'travaille ?\n\n\n\x0E\x01\x09\x04\x00\x1CJ'vois pas pourquoi j'en parlerais\navec toi... Mais bon, puisque tu\nm'demandes...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf("Tu pourrais peut\x2010être m'aider...\nJ'aime pas l'admettre, mais t'as l'air\nde savoir t'y prendre avec les femmes.\n\nBon... OK ! \x0E\x03\x01\x00Link, j'ai un\nservice à te demander !")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 158, 'param3': 6}
/*<158>*/ 					printf("Tu pourrais apporter c'<r<papier >>à\nquelqu'un ? C'est super important !\nIl doit être remis en mains propres !")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf("Hein ? De l'aide ? De toi ?\n\n\n\n\x0E\x01\x09\x04\x00\x1CMêle\x2010toi de tes oignons !\nMais bon, puisque tu m'demandes...")
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
/*< 42>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oublie tout ceci...\nAdieu...")
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
/*< 44>*/ 		printf("\x0E\x01\x09\x04\x00\x01Oublie tout ceci...\nAdieu...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 46, 'param3': 6}
/*< 46>*/ 		printf("Arg... Du <r<papier>>...\nIl me faut du <r<papier>>...\n\n\nJe ne suis pas désespérée,\n<r<il me faut juste du papier>>...!\n\n\n[1]Donner la\nlettre[2-]Garder la\nlettre")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x0B\x04Quoi ?\nDu papier !\nMerci beaucoup !")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 145, 'param3': 6}
/*<145>*/ 			printf("Mais...\nÇa m'a tout l'air d'une lettre...\nTu es sûr que je peux la prendre ?\n[1]Oui[2-]Non")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 153, 'param3': 6}
/*<153>*/ 				printf("\x0E\x01\x09\x04\x00\x02Merci...\nÇa me sera bien utile...\n\n\nMais ne me demande pas ce que je vais\nen faire, tu vas me faire rougir...\n\n\nJ'espère te revoir bientôt,\nbeau jeune homme...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf("\x0E\x01\x09\x04\x05\x03Arg...\nS'il te plaît... Du papier...")
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
/*<149>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohhh... Mon amour...\nJe t'aimerai toute ma non\x2010vie...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 151, 'param3': 6}
/*<151>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh ! Te revoilà, beau jeune homme...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf("\x0E\x01\x09\x04\x06\x02Ravie de te revoir !\nGrâce à toi, j'ai rencontré mon prince\ncharmant...\n\nOui, c'est bien lui...\n\n\n\n\x0E\x01\x09\x04\x0C\x00Tout a commencé avec la lettre que tu\nm'as donnée...\n\n\n\x0E\x01\x09\x04\x06\x00Sa belle prose a fait fondre mon\nc\x153ur...")
/*<521>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ahhh, je pense à lui jour et nuit...\nIl a donné un souffle de vie à mon c\x153ur\nalangui...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ohhh... Mon amour...\nJe t'aimerai toute ma non\x2010vie...")
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
/*<363>*/ 	printf("C'est toi, l'auteur de la lettre,\npas vrai ?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf("... Euh, oui...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf("\x0E\x01\x09\x04\x1400\x09Hihihi !\nÇa m'a beaucoup touché. Merci !")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf("\x0E\x01\x09\x04\x500\x11Euh... de rien...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf("Et... tu penses quoi de ce que je t'ai\ndemandé ?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf("\x0E\x01\x09\x04\x1400\x12Euh... Ce que j'en pense ?\nEuh...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf("\x0E\x01\x09\x04\x500\x2519Allez, s'il te plaît ! Sors avec moi...\nS'il te plaît !")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("Hé ! Minute papillon !")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 386, 'param3': 6}
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf("Non, Grida, sors avec... moi !\nJe veux être ton amoureux !")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf("\x0E\x01\x09\x04\x500\x1B09Qu\x2010quoi ?!\nMais tu sors d'où, toi ?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf("Hihi ! Euh...\x0E\x01\x09\x04\x1400\x900\nJe choisis... Kiko !")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf("\x0E\x01\x09\x04\x515\xC10Ah ! Je le savais !\nJ'ai bien vu comment Grida\nme regardait ! Euh, attends...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf("\x0E\x01\x09\x04\x511\x1D1DComment ça, « Kiko » ?!")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 605, 'param3': 6}
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf("\x0E\x01\x09\x04\x1201\xFF00Vraiment ?\nTu es sûre que je serai à la hauteur ?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf("Oh oui !\n\x0E\x01\x09\x04\x1400\x900J'suis tellement heureuse ! Merci !")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf("\x0E\x01\x09\x04\x500\x1D17Non, mais j'hallucine !!!")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 638, 'param3': 6}
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf("\x0E\x01\x09\x04\x500\x18Aaaaarg...!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf("\x0E\x01\x09\x04\x1200\x01\x0E\x03\x01\x00Link !")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf("C'est quand tu m'as parlé de la lettre\nque j'en ai pris conscience...\n\n\nJ'ai réalisé que... j'étais amoureux\nd'elle.\n\n\n\x0E\x01\x09\x04\x1209\xC00Je ne veux surtout pas la perdre.\n\n\n\n\x0E\x01\x09\x04\x1201\x400Si tu ne m'avais rien dit,\nil ne se serait jamais rien passé.\n\n\n\x0E\x01\x09\x04\x1208\x0BMerci beaucoup !\nJe n'oublierai jamais ce que tu as fait\npour moi !")
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
/*<540>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F1BDepuis que tu as donné cette lettre,\nj'arrive plus à dormir et j'fais tout\nle temps des cauchemars !\n\nQu'est\x2010ce qui m'arrive ?! Peut\x2010être que\nce lit est maudit ! Peut\x2010être que c'est\nl'esprit d'<b<Hergo >>qui me hante...\nAide\x2010moi, Link !!!")
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x1B\x1F17Qu'est\x2010ce que tu veux,\nLink ?! J'ai pas oublié\nla crasse que tu m'as faite !\n\nDepuis que tu as donné cette lettre,\nj'arrive plus à dormir et j'fais tout\nle temps des cauchemars !\n\nQu'est\x2010ce qui m'arrive ?!\nPeut\x2010être que ce lit est maudit !\nPeut\x2010être que c'est l'esprit d'<b<Hergo\n>>qui me hante !\n\x0E\x01\x09\x04\x1C\x1A18Aide\x2010moi, Link !!!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x17Snif... Tout est fini...\n\n\n\n\x0E\x01\x09\x04\x1C\x1F00Qu'est\x2010ce que tu veux,\nLink ?\nT'es venu te moquer de moi ?\nLaisse\x2010moi tranquille !")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf("\x0E\x01\x09\x04\x1B\x1F17Encore toi, Link ?!\nComment t'as pu me faire ça ?\n\n\n\x0E\x01\x09\x04\x1C\x1F00J'sais pas qui c'est, dans les toilettes,\nmais elle a lu ma lettre...\nJ'y crois pas !\n\nJ'en reviens pas que tu lui aies donné...")
          	}
          }

