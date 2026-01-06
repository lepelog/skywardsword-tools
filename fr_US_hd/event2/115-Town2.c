          void entrypoint_115_02() {
/*<444>*/ 	start()
/*<443>*/ 	switch (story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */]) {
          	  case 0:
/*<433>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000a>Ah, tu as des trésors à me vendre?")
          		flw_495:
/*<495>*/ 		make_actor_do_something(8, 0)
/*<432>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00120600>Sache que cette nuit, j'achète ceci :\n- <color yellow<<string arg0>>coloroff>\n- <color yellow<<string arg1>>coloroff>\n\n- <color yellow<<string arg2>>coloroff>\n- <color yellow<<string arg3>>coloroff>\n<0x10009:0x00100600>Alors, ça te va?\n\n[1-]D'accord[2]Tant pis")
/*<415>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_414:
/*<414>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "Qu'est‐ce que tu veux me vendre?\n<color yellow<[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>[4-]<string arg3>>coloroff> ")
/*<413>*/ 			switch (choice(4)) {
          			  case 0:
/*<488>*/ 				make_actor_do_something(0, 0)
/*<481>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<489>*/ 					printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00120600>Joli. Je te propose <numeric arg0 0> rubis la pièce.")
          					flw_656:
/*<656>*/ 					{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 412, 'param3': 12}
/*<412>*/ 					printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00100600>Tu en as <numeric arg4 0>, à ce que je vois... Combien veux‐tu\nm'en vendre?\n[1-]1[2-]5[3-]Tout[4]J'ai changé\nd'idée")
/*<411>*/ 					switch (choice(4)) {
          					  case 0:
/*<500>*/ 						make_actor_do_something(4, 0)
          						flw_497:
/*<497>*/ 						switch (context_related2(0)) {
          						  case 0:
/*<409>*/ 							printf(/* textboxtype: 1, unk: 0, line: 15 */ "<color yellow<<0x10009:0x00120900>>coloroff>Tu es prêt à m'en vendre <numeric arg0 0>, c'est bien ça?\nJe t'en donne <numeric arg1 0> rubis.\n[1-]Vendu![2]Pas question!")
/*<408>*/ 							switch (choice(2)) {
          							  case 0:
/*<430>*/ 								printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0010080a>Très bien! Voilà ton argent!")
/*<496>*/ 								make_actor_do_something(7, 0)
/*<572>*/ 								set_camera(6, 0)
/*<571>*/ 								{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 2048, 'next': 573, 'param3': 13}
/*<573>*/ 								wait_frames(45)
/*<429>*/ 								printf(/* textboxtype: 0, unk: 1, line: 19 */ "Merci beaucoup! N'hésite pas à revenir!")
/*<574>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
          								flw_410:
/*<410>*/ 								printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000f000c>Je vois... Eh bien, j'espère te revoir bientôt!")
          							}
          						  case 1:
/*<431>*/ 							printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000f0409>N'essaie pas de m'avoir, je vois bien que tu n'en\nas pas autant! On ne badine pas en affaires!")
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
/*<494>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000f0409>Vraiment? Et comment tu vas faire? Tu n'en\nas même pas! Tu me fais perdre mon temps!\n\n\nAs‐tu vraiment quoi que ce soit à me vendre?\n\n\n\n[1-]Oui[2]Non")
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
/*<490>*/ 					printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x00120600>Je te donne <numeric arg1 0> rubis la pièce.")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 2:
/*<486>*/ 				make_actor_do_something(2, 0)
/*<483>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<491>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "<color yellow<<0x10009:0x00120600>>coloroff><numeric arg2 0> rubis la pièce, ça te convient?")
          					goto flw_656
          				  case 1:
          					goto flw_494
          				}
          			  case 3:
/*<485>*/ 				make_actor_do_something(3, 0)
/*<484>*/ 				switch (context_related2(1)) {
          				  case 0:
/*<492>*/ 					printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00120600>Je te donne <numeric arg3 0> rubis la pièce.")
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
/*<442>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x0000000a>Ah, tiens, bonsoir! Que puis‐je faire pour toi?\n[1-]Faire des achats[2-]Euh...")
/*<441>*/ 		switch (choice(2)) {
          		  case 0:
/*<440>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x000f0409>Des achats? Dommage, mais tu vas devoir\nrevenir demain!")
          		  case 1:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00130609>« Euh... »? On dirait bien que tu n'as pas\naffaire ici. Débarrasse, le jeune, veux-tu?")
/*<438>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "Comment ça, tu me trouves bougon? Tu ne\nme reconnais pas, tu dis?\n\n\n<0x10009:0x0010060b>Eh bien, c'est la nuit, vois-tu? Le soir, je range\nmon faux sourire et je le remets le lendemain\nmatin! Ça fatigue, de faire semblant!\n\nBon. Ça suffit. Tu disais que tu es venu faire\ndes achats, comme ça?\n\n\nEs-tu ici pour magasiner à l'<color red<armurerie de nuit>coloroff>?\n[1-]C'est quoi?[2-]C'est ça!")
/*<437>*/ 			switch (choice(2)) {
          			  case 0:
/*<436>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000009>Ah, c'est la première fois que tu viens?\nJe vois...")
          				flw_434:
/*<434>*/ 				printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00120600>Le jour, je vends, et la nuit, j'achète! <color red<Je peux\nt'acheter des trésors>coloroff>, mais attention, je ne\nprends pas n'importe quoi! \n\nIl n'y a que <color red<certains trésors>coloroff> qui m'intéressent...\n\n\n\n<0x10009:0x00100600>Très bien, voyons ce que tu as à me proposer!")
/*<428>*/ 				story_flags[297 /* us: 805A9AFD 0x08, jp: 805ACD7D 0x08 */] = true;
          				goto flw_495
          			  case 1:
/*<435>*/ 				printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000f0409>Il fallait le dire plus tôt!")
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
/*< 57>*/ 		printf(/* textboxtype: 0, unk: 0, line: 194 */ "<0x10009:0x00000054>Argh! Mmph... Mmph... Au‐au‐au secours!")
/*<528>*/ 		switch (zone_temp_flags[17 /* 0x3 02 */]) {
          		  case 0:
          		  case 1:
/*<724>*/ 			zone_temp_flags[17 /* 0x3 02 */] = true;
/*<529>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<174>*/ 		{'type': 'type3', 'subType': 4, 'param1': 25, 'param2': 6656, 'next': 536, 'param3': 13}
/*<536>*/ 		printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00000017>Aaaargh... <color blue<Kiko>coloroff>, mon espèce! Je te dé-tes-te!\nJe me vengerai!")
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
/*<478>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00030001>Ah, c'est toi, <heroname>. Je me doutais\nque je te verrais ici. T'as du nouveau pour moi?")
          					flw_476:
/*<476>*/ 					make_actor_do_something(8, 0)
/*<475>*/ 					printf(/* textboxtype: 0, unk: 1, line: 34 */ "Hmm, il y a trois insectes qui me tentent,\nce soir... Voici leurs noms :\n\n\n- <color yellow<<string arg0>>coloroff>\n- <color yellow<<string arg1>>coloroff>\n- <color yellow<<string arg2>>coloroff>\n[1-]Parfait![2]Laisse faire")
/*<474>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_472:
/*<472>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "Qu'est‐ce que tu me proposes?\n<color yellow<[1-]<string arg0>[2-]<string arg1>[3-]<string arg2>>coloroff>")
/*<471>*/ 						switch (choice(3)) {
          						  case 0:
/*<466>*/ 							make_actor_do_something(0, 0)
/*<461>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<467>*/ 								printf(/* textboxtype: 0, unk: 1, line: 37 */ "Hmm, j'en cherchais justement...\nJe t'offre <numeric arg0 0> rubis par spécimen.")
          								flw_657:
/*<657>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 458, 'param3': 12}
/*<458>*/ 								printf(/* textboxtype: 1, unk: 0, line: 42 */ "T'en as <numeric arg4 0>? Ça m'intéresse...\nT'es prêt à m'en vendre combien?\n[1-]1[2-]5[3-]Tout[4]Aucun")
/*<457>*/ 								switch (choice(4)) {
          								  case 0:
/*<455>*/ 									make_actor_do_something(4, 0)
          									flw_452:
/*<452>*/ 									switch (context_related2(0)) {
          									  case 0:
/*<456>*/ 										printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00030014>Hmm, intéressant... Je t'en donne <numeric arg1 0> rubis.\n\n\n\n[1-]Vendu![2]Pas question")
/*<449>*/ 										switch (choice(2)) {
          										  case 0:
/*<451>*/ 											printf(/* textboxtype: 1, unk: 0, line: 45 */ "Tiens, voilà ton fric.")
/*<445>*/ 											{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 448, 'param3': 12}
/*<448>*/ 											make_actor_do_something(7, 0)
/*<450>*/ 											printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x0003ff04>Merci bien! Je me sens toujours mieux avec\ndes insectes plein les poches!\n\n\nN'hésite pas à m'en apporter d'autres,\n<heroname>!")
          										  case 1:
          											flw_473:
/*<473>*/ 											printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x0001ff13>Oh, c'est « blatte »... <0x10009:0x00000500>À la prochaine « cigale »...")
          										}
          									  case 1:
/*<459>*/ 										printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00120100>Non, mais t'en as même pas tant que ça.\nBon. On recommence.\nT'es prêt à m'en laisser combien?")
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
/*<470>*/ 								printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x0010ff0c>Non mais... Je vois bien que t'en as pas!\nJe sais pas à quoi tu joues, mais je trouve\npas ça très drôle!\n\n<0x10009:0x0001ff00>T'as des insectes à me vendre, oui ou non?\n[1-]Oui[2]Non")
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
/*<468>*/ 								printf(/* textboxtype: 0, unk: 0, line: 38 */ "Oh oh... Ça me tente bien! Je te donne\n<numeric arg1 0> rubis la pièce.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						  case 2:
/*<464>*/ 							make_actor_do_something(2, 0)
/*<463>*/ 							switch (context_related2(1)) {
          							  case 0:
/*<469>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "On n'en a jamais trop, de ceux‐là! J'achète!\n<numeric arg2 0> rubis la pièce.")
          								goto flw_657
          							  case 1:
          								goto flw_470
          							}
          						}
          					  case 1:
          						goto flw_473
          					}
          				  case 1:
/*<477>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00030001>Hé, <heroname>! Y a quelque chose qui\nm'a mis la puce à l'oreille, aujourd'hui. Et je\npeux te dire que ça chatouille! Héhéhé...")
          					goto flw_476
          				}
          			  case 1:
/*<721>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 719, 'param3': 31}
/*<719>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x00030001>T'es peut‐être déjà au courant, mais tout à\nl'heure, je suis allé faire un tour dans la\ngrotte de la chute.\n\nJ'y ai trouvé tout un groupe de <color red<papillons\nazur >coloroff>qui voletaient ensemble dans un\nendroit bien ordinaire.\n\nJe me demande pourquoi ils se regroupent\ncomme ça... Tu trouves pas ça bizarre, toi?\n\n\nSi tu veux voir ça par toi‐même, rends‐toi\ndans la grotte, la nuit...")
/*<722>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "Voyons voir! Quels insectes m'as‐tu apportés,\nce soir?")
/*<720>*/ 				story_flags[810 /* us: 805A9B31 0x04, jp: 805ACDB1 0x04 */] = true;
          				goto flw_476
          			}
          		  case 1:
          			goto flw_479
          		}
          	  case 1:
/*<446>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 666, 'param3': 31}
/*<666>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 427, 'param3': 13}
/*<427>*/ 		printf(/* textboxtype: 1, unk: 1, line: 21 */ "<0x10009:0x0000ff01>Encore toi, <heroname>? Qu'est‐ce que\ntu me veux?")
/*<578>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 416, 'param3': 13}
/*<416>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<color red<<0x10009:0x00000300>>coloroff>Hein? Tu veux savoir ce que je suis en train\nde faire?\n\n<0x10009:0x00ff0114>Bien, j'admire mes <color red<insectes>coloroff>...")
/*<575>*/ 		set_camera(22, 0)
/*<577>*/ 		wait_frames(30)
/*<418>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0001ff00>Ils sont extraordinaires... Totalement\nfascinants, bien plus qu'Hergo... De\nbien des façons!\n\nBien...<pause 30> Je ne veux pas dire qu'Hergo est une\nméchante bibitte!")
/*<576>*/ 		set_camera(-1, 0)
/*<417>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Écoute, <color red<les insectes me passionnent>coloroff>... Je veux\nen posséder des centaines!\n\n\nMon rêve le plus fou, ça serait d'avoir mon\nîle à moi, remplie d'insectes!")
/*<424>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00ffff01>Tiens, j'ai quelque chose à te proposer.\n\n\n\n<0x30001:0x><heroname>, <color red<si tu trouves des insectes,\nje suis prêt à te les acheter>coloroff>!\n\n\nEt je te garantis que quand je parle bibitte,\nje suis généreux!\n[1-]Très bien[2-]Pas question")
/*<423>*/ 		switch (choice(2)) {
          		  case 0:
/*<422>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x0003ff04>Mouhahaha! Ma collection d'insectes va\naugmenter quelque chose de rare!")
          			flw_420:
/*<420>*/ 			printf(/* textboxtype: 0, unk: 1, line: 28 */ "Bien, si jamais t'as envie de me vendre des\ninsectes, tu me trouveras ici. Je suis là\ntoutes les nuits!\n\n<0x10009:0x00120100>Mais j'achète pas n'importe quoi! Je décide de\nmes acquisitions <color red<selon l'humeur du moment>coloroff>.\n\n\nAutre chose... Je suis comme qui dirait un\noiseau de nuit, tu vois. Une sorte de luciole,\nen fait.\n\nTout ça pour te dire que j'achète des insectes\n<color red<seulement la nuit>coloroff>. Et, j'ai pas vraiment\nenvie que ça se sache...\n\n<0x10009:0x0003ff14>Compris, <heroname>? Je sais bien\nqu'on n'est pas des grands amis, toi et\nmoi, mais j'te fais confiance.")
/*<447>*/ 			printf(/* textboxtype: 0, unk: 0, line: 29 */ "Bon, montre-moi ce que tu as. As-tu des\ninsectes à me vendre?")
/*<419>*/ 			story_flags[298 /* us: 805A9AFD 0x10, jp: 805ACD7D 0x10 */] = true;
          			goto flw_476
          		  case 1:
/*<421>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0001ff05>Quoi? C'est pas très gentil, ça! Je vais tout\nraconter à Hergo!")
          			goto flw_420
          		}
          	}
          }

          void entrypoint_115_04() {
/*<  5>*/ 	start()
/*<  6>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000000>Rrrrrrrrrrr... Pchhhhhhh... ZZZZZZZZZZ...")
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
/*<116>*/ 						printf(/* textboxtype: 1, unk: 0, line: 222 */ "<0x10009:0x00080909>Hihihi! Merci, <heroname>!\nGrâce à toi, j'ai un super amoureux!\n\n\nMais quand même... Pauvre <color blue<Orbo>coloroff>...")
          					  case 1:
/*<800>*/ 						entrypoint_115_28();
          					}
          				  case 1:
/*< 87>*/ 					printf(/* textboxtype: 0, unk: 0, line: 221 */ "<0x10009:0x00000001>Merci de m'avoir apporté cette lettre,\n<heroname>.\n\n\n<0x10009:0x00010d14>Aah... Je me demande ce que <color blue<Kiko >coloroff>penserait\nde tout ça...")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 133, 'param3': 31}
/*<133>*/ 				make_actor_do_something(2, 0)
/*<587>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1024, 'next': 73, 'param3': 13}
/*< 73>*/ 				printf(/* textboxtype: 0, unk: 1, line: 211 */ "<0x10009:0x00000014>Oh, Pffff... Comment je pourrais bien attirer\nl'attention de <color blue<Kiko>coloroff>?")
/*<134>*/ 				make_actor_do_something(3, 0)
/*< 74>*/ 				printf(/* textboxtype: 0, unk: 0, line: 212 */ "<0x10009:0x00080404>Ah! <0x30001:0x><heroname>!\n\n\n\nÇa va? Euh... Qu'est-ce que je peux faire pour\ntoi? <0x10008:0xfecd>As-tu entendu ça?<0x10008:0x00cd>\n\n\n[1-]Donner la\nlettre[2-]Garder la\nlettre")
/*< 75>*/ 				switch (choice(2)) {
          				  case 0:
/*< 77>*/ 					printf(/* textboxtype: 0, unk: 1, line: 214 */ "<0x10009:0x00080906>Quoi? Une lettre? Pour moi? <pause 10>.<pause 10>.<pause 10>.<pause 10>?\nElle est peut‐être de <color blue<Kiko>coloroff>!\n\n[1-]Tiens![2-]Laisse faire.")
/*< 78>*/ 					switch (choice(2)) {
          					  case 0:
/*< 80>*/ 						printf(/* textboxtype: 1, unk: 0, line: 216 */ "<0x10009:0x000e090a>Oh, merci! Donne.")
/*<592>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3072, 'next': 593, 'param3': 13}
/*<593>*/ 						wait_frames(5)
/*<598>*/ 						set_camera(23, 0)
/*<599>*/ 						wait_frames(10)
/*<611>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 591, 'param3': 49}
/*<591>*/ 						printf(/* textboxtype: 0, unk: 1, line: 217 */ "<0x10009:0x00100400>Je me demande de qui ça peut venir...")
/*<594>*/ 						wait_frames(30)
/*< 81>*/ 						printf(/* textboxtype: 0, unk: 0, line: 218 */ "<0x10009:0x00100d00>Hmm... <pause 20> <0x10006:0xfecd>Dis donc, quelle écriture pourrie...<0x10006:0x00cd>\n\n\n\n<0x10009:0x00100400>Tant pis... Qu'est‐ce que ça dit...")
/*<596>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': -256, 'next': 665, 'param3': 13}
/*<665>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 104, 'next': 597, 'param3': 24}
/*<597>*/ 						wait_frames(15)
/*<600>*/ 						{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 595, 'param3': 13}
/*<595>*/ 						printf(/* textboxtype: 1, unk: 0, line: 219 */ "« Depuis le premier jour, mon amour pour toi\nest plus étendu que le ciel et plus profond\nque la mer de nuages. »\n\n<0x10009:0x00131200>« J'aimerais beaucoup sortir avec toi.\nTon chevalier servant, <color blue<Orbo >coloroff>»\n\n\n<0x10009:0x00000500>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.<pause 10>.\n\n\n\n<0x10009:0x00010d00>Euh... Cet... <color blue<Orbo>coloroff>... c'est pas un des acolytes\nd'<color blue<Hergo>coloroff>?\n\n\n<0x10009:0x000c0400>Et... C'est... C'est bien une lettre d'amour\nde lui... Non?\n\n\n<0x10009:0x000b0712>Oupelaye...")
/*<588>*/ 						set_camera(-1, 0)
/*<589>*/ 						{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 1792, 'next': 590, 'param3': 13}
/*<590>*/ 						wait_frames(15)
/*<612>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 						printf(/* textboxtype: 0, unk: 1, line: 220 */ "<0x10009:0x00000009>Mais bon... Il y a quand même mis tout\nson cœur...\n\n\nPeut‐être que je devrais y réfléchir...\n\n\n\n<0x10009:0x00080900>Me semble!\n\n\n\n<0x10009:0x00010d14>Aah... Je me demande ce que <color blue<Kiko >coloroff>penserait\nde tout ça...")
/*< 83>*/ 						story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */] = true;
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 0, unk: 0, line: 215 */ "<0x10009:0x00080912>Tu joues à quoi, là? Tu te moques de moi?")
          					}
          				  case 1:
/*< 76>*/ 					printf(/* textboxtype: 1, unk: 0, line: 213 */ "<0x10009:0x00010406>Hein? T'es bien bizarre, <heroname>...")
          				}
          			}
          		}
          	  case 1:
/*<667>*/ 		switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 0, unk: 0, line: 206 */ "<0x10009:0x00000001>Dis, <heroname>... Qu'est-ce que tu\npenses de <color blue<Kiko>coloroff>, toi?\n\n\n[1-]Il est gentil.[2-]Pourquoi?")
/*< 70>*/ 			switch (choice(2)) {
          			  case 0:
/*< 71>*/ 				printf(/* textboxtype: 1, unk: 0, line: 207 */ "<0x10009:0x000b070a>Oh oui, moi aussi! Gentil et intelligent.\nEt beau comme un ange!\n\n\n<0x10009:0x000c0416>Oh... j'sais pas ce qui m'a pris, tout d'un coup.\nDésolée...\n\n\n<0x10009:0x00080400>Désolée de t'avoir posé une question\naussi bizarre...")
          			  case 1:
/*< 72>*/ 				printf(/* textboxtype: 0, unk: 1, line: 208 */ "<0x10009:0x00010406>Hein? Euh... J'veux dire...\n\n\n\n<0x10009:0x00080416>Non, rien! J'sais pas ce qui m'a pris, désolée...\nOublie ça.")
          			}
          		  case 1:
/*<669>*/ 			switch (zone_temp_flags[15 /* 0x0 80 */]) {
          			  case 0:
/*<671>*/ 				printf(/* textboxtype: 1, unk: 0, line: 210 */ "<0x10009:0x00001001>Ouais, tes habits te vont super bien!\n\n\n\n<0x10009:0x0000040a>Mais Kiko est encore plus beau dans\ncet uniforme!")
          			  case 1:
/*<668>*/ 				printf(/* textboxtype: 0, unk: 0, line: 209 */ "<0x10009:0x00010404>Ah! <pause 20> <0x30001:0x><heroname>! C'est bien! T'as réussi\nl'examen! Félicitations!\n\n\n<0x10009:0x00080400>Ouais... Alors maintenant t'as un uniforme vert,\nhein? <pause 20>C'est trop... wow!\n\n\n<0x10009:0x000a1000>J'suis sûre que Zelda sera impressionnée\nen te voyant!\n\n\n<0x10009:0x00000406>T'inquiète pas pour elle! J'suis sûre que tout\nva bien et qu'elle va bientôt rentrer.")
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
/*<105>*/ 						printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00000e08>Je vais enfin pouvoir récupérer un peu!\nMerci beaucoup!")
          					  case 1:
/*<580>*/ 						{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3584, 'next': 23, 'param3': 13}
/*< 23>*/ 						printf(/* textboxtype: 1, unk: 1, line: 63 */ "<0x10009:0x00000008>Ah! Merci à toi! De tout cœur!")
          					}
          				  case 1:
/*<123>*/ 					check_item_flag(160, 1)
/*<124>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 60}) {
          					  case 0:
/*<126>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 31}
/*< 19>*/ 						printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00000e0d>Mais, on dirait...? Mais oui! C'est bien le\n<color yellow<hochet >coloroff>du bébé! Tu l'as trouvé!")
/*<584>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 586, 'param3': 47}
/*<586>*/ 						story_flags[387 /* us: 805A9B0D 0x20, jp: 805ACD8D 0x20 */] = true;
/*<712>*/ 						{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 713, 'param3': 15}
/*<713>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 714, 'param3': 17}
/*<714>*/ 						wait_frames(10)
/*<556>*/ 						set_camera(10, 0)
/*<555>*/ 						{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3328, 'next': 585, 'param3': 13}
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 557, 'param3': 48}
/*<557>*/ 						wait_frames(60)
/*< 20>*/ 						printf(/* textboxtype: 1, unk: 0, line: 60 */ "Tiens, mon trésor... Je connais un gentil\nbébé qui va faire un gros dodo!<0x10005:0x00780000>")
/*<558>*/ 						{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3584, 'next': 559, 'param3': 13}
/*<559>*/ 						set_camera(29, 0)
/*< 21>*/ 						printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000e08>Ouf. Le bébé semble s'être calmé, on dirait.\nJe suis sûr qu'il va bien dormir cette nuit.\nEt moi de même!\n\n<0x10009:0x00100e00>Merci beaucoup. Je n'oublierai jamais ce que\ntu viens de faire!")
/*<103>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
/*<715>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 125, 'param3': 42}
/*<125>*/ 						give_gratitude_crystals();
/*<716>*/ 						set_camera(30, 0)
          					  case 1:
/*<743>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 18, 'param3': 31}
/*< 18>*/ 						printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x000d0f09>Ahh... Si seulement quelqu'un pouvait trouver\nle <color yellow<hochet >coloroff>du bébé...\n\n\n<color red<<0x10009:0x00100000>Un oiseau l'a emporté>coloroff>, mais je suis sûr qu'il\nest toujours <color red<quelque part en ville>coloroff>...\n\n\n<0x10009:0x000d0000>Ahh... Je sens que je ne vais pas beaucoup\ndormir cette nuit... Pour faire changement...")
          					}
          				}
          			  case 1:
/*< 10>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 561, 'param3': 31}
/*<561>*/ 				set_camera(10, 0)
/*<560>*/ 				{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 3072, 'next': 562, 'param3': 13}
/*<562>*/ 				wait_frames(75)
/*< 11>*/ 				printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10006:0xfccd>...<pause 45><0x10006:0x00cd><0x10009:0x000d0000> Aahhh...<0x10005:0x00410000>")
/*<563>*/ 				set_camera(-1, 0)
/*<565>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 3840, 'next': 564, 'param3': 13}
/*<564>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "Ahhh... On dirait que je vais encore manquer\nde sommeil cette nuit...\n\n\n[1-]Pourquoi?[2-]Tu es fatigué?")
/*< 12>*/ 				switch (choice(2)) {
          				  case 0:
/*< 24>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x00100f06>Oh excuse‐moi, t'as pas à t'inquiéter pour moi...")
          					flw_26:
/*< 26>*/ 					printf(/* textboxtype: 1, unk: 1, line: 54 */ "<0x10009:0x000d0f00>Le bébé pleure toute la nuit, en ce moment.\nJe ne dors plus! Pourtant, il faisait ses nuits,\navant.\n\nMais depuis qu'on a perdu son tu-sais-quoi...\n[1-]Son quoi?[2-]Oh, je vois...")
/*< 27>*/ 					switch (choice(2)) {
          					  case 0:
/*< 13>*/ 						printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00100f01>Son <color yellow<hochet>coloroff>.")
          						flw_15:
/*< 15>*/ 						printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000f00>Il suffirait de le lui donner pour qu'il se calme\nimmédiatement! Mais on l'a perdu, l'autre jour.\n\n\n<color red<Un oiseau l'a emporté dans son bec>coloroff>. Il a dû\ncroire que ça se mangeait...\n\n\n<0x10009:0x000e0f00>Et comme ce n'est pas le cas, il a dû\nl'abandonner <color red<quelque part dans la ville>coloroff>.\n\n\nMais je n'ai pas réussi à mettre la main dessus...\n\n\n\n<0x10009:0x00000009>Aah... si seulement quelqu'un pouvait\nle retrouver...")
/*< 16>*/ 						story_flags[386 /* us: 805A9B0D 0x10, jp: 805ACD8D 0x10 */] = true;
          					  case 1:
/*< 14>*/ 						printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00100f04>Tu es au courant, on dirait. C'est son <color yellow<hochet\n>coloroff>qui lui manque.")
          						goto flw_15
          					}
          				  case 1:
/*< 25>*/ 					printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x00100f07>Ça se voit tant que ça?")
          					goto flw_26
          				}
          			}
          		  case 1:
          			flw_9:
/*<  9>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00000003>Ahhh... Comment ça s'endort, au juste, un\nenfant? Je ne sais plus quoi faire!\n[1-]Dur, dur[2-]Où est\nsa mère?")
/*<127>*/ 			switch (choice(2)) {
          			  case 0:
/*<128>*/ 				printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000004>Oui, c'est dur! Assez dur... De toute façon,\nmême quand il pleure, il est adorable!\n\n\nTu comprendras quand tu en auras un,\ntoi aussi!")
          			  case 1:
/*<129>*/ 				printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000007>Ah, sa mère<pause 10>.<pause 10>.<pause 10>. Elle est fatiguée, la pauvre...\nElle travaille à la boutique toute la journée!\n\n\n<0x10009:0x000d0f06>Le soir, il faut qu'elle se repose... Haha...")
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
/*< 99>*/ 					printf(/* textboxtype: 1, unk: 0, line: 243 */ "<0x10009:0x000c0401>Salut, <heroname>! Grâce à toi,\nj'ai une super amoureuse! Merci!")
          				  case 1:
/*<796>*/ 					entrypoint_115_27();
          				}
          			  case 1:
/*<547>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 3072, 'next': 548, 'param3': 13}
/*<548>*/ 				printf(/* textboxtype: 0, unk: 0, line: 242 */ "<0x10009:0x00000018>Hmm... Euh...\n\n\n\n<0x10009:0x000f1100>Imaginons que tu veuilles savoir s'ils sortent\nensemble, est-ce que tu irais lui demander\ntoi‐même?\n\n<0x10009:0x00110e00>Ça n'a rien à voir avec moi, tu comprends...\nC'est juste que les relations humaines\nm'intéressent, en règle générale...")
          			}
          		  case 1:
/*<132>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 546, 'param3': 31}
/*<546>*/ 			{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 1024, 'next': 92, 'param3': 13}
/*< 92>*/ 			printf(/* textboxtype: 1, unk: 0, line: 234 */ "<0x10009:0x00000001>Salut, <heroname>! Ça va?")
/*<545>*/ 			printf(/* textboxtype: 0, unk: 1, line: 235 */ "<0x10009:0x00010c09>Quoi? <color blue<Grida>coloroff> a reçu une lettre d'amour?\n\n\n\n<0x10009:0x000f1100>Et que s'est‐il passé? Ah, intéressant... Je vois...\n\n\n\n<0x10009:0x000c0c54>Et... Qu'est-ce que tu penses qu'elle va faire?\n[1-]Y réfléchir[2-]J'en sais rien")
/*< 93>*/ 			switch (choice(2)) {
          			  case 0:
/*< 94>*/ 				printf(/* textboxtype: 0, unk: 0, line: 236 */ "<0x10009:0x00110e53>Quoi? Ça va pas du tout, ça!")
          				flw_96:
/*< 96>*/ 				printf(/* textboxtype: 0, unk: 1, line: 238 */ "<0x10009:0x00110e09>Bon... De toute façon, il n'y a rien entre moi\net <color blue<Grida>coloroff>. On est juste amis...\n\n\nAlors, ça ne me regarde pas. Elle peut sortir\navec qui elle veut...\n\n\n<0x10009:0x000c0c00>Mais tout de même, j'ai mon mot à dire quand\nil s'agit des standards de cette école!\n\n\n<0x10009:0x00080c00>Par contre, peut‐être que l'amour idéal est\ncelui qui ignore les entraves? Et si on ne\nl'a pas vécu, on ne sait pas vraiment ce\nqu'est l'amour?\n<0x10009:0x000b0c00>Donc j'ai le droit de m'assurer qu'elle peut\nvivre librement son amour!\n\n\n<0x10009:0x00110e00>Et puis moi aussi, j'ai le droit d'aimer\nquelqu'un librement, après tout! Non?\n\n\n<0x10009:0x000c0c1b>Tu comprends ce que je veux dire,\n<heroname>? J'ai raison, non?\n[1-]Je sais pas...[2-]Tu l'aimes?")
/*<119>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 240 */ "<0x10009:0x000f1152>C'est vrai, c'est pas le moment de parler de ça.\n")
          					flw_122:
/*<122>*/ 					printf(/* textboxtype: 0, unk: 1, line: 241 */ "<0x10009:0x00101117>De toute façon...\n\n\n\n<0x10009:0x000f0c00>Mais ça te dérangerait pas de lui demander\nce qu'elle a décidé?")
/*< 97>*/ 					story_flags[556 /* us: 805A9B16 0x20, jp: 805ACD96 0x20 */] = true;
/*<114>*/ 					story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
          				  case 1:
/*<120>*/ 					printf(/* textboxtype: 0, unk: 0, line: 239 */ "<0x10009:0x00110e53>Pff! Tu dis n'importe quoi, <heroname>!\n\n\n\n<0x10009:0x00120c00>Comment peux‐tu imaginer une chose pareille?")
          					goto flw_122
          				}
          			  case 1:
/*< 95>*/ 				printf(/* textboxtype: 1, unk: 0, line: 237 */ "<0x10009:0x000f1118>Ah, d'accord... Mais ça va me travailler,\ncette histoire.")
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
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00071602>Je vais faire de mon mieux pour me faire\ndes muscles. Reviens me voir bientôt,\ntu verras mes progrès!")
          		  case 1:
/*<258>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<278>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 277, 'param3': 32}
/*<277>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 260, 'param3': 13}
/*<260>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000011>Hmmff... Pfiouu... <0x30001:0x><heroname>,\nqu'est‐ce que tu as là? Ça serait pas\njustement de la <color yellow<potion d'endurance>coloroff>?\n\nTu voudrais me la donner?\n[1-]D'accord[2]Pas\nquestion")
          				flw_261:
/*<261>*/ 				switch (choice(2)) {
          				  case 0:
/*<263>*/ 					printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x0000000b>C'est vrai?! Oh, merci! Je te revaudrai ça!")
/*<266>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 271, 'param3': 13}
/*<271>*/ 					wait_frames(4)
/*<270>*/ 					set_camera(5, 0)
/*<267>*/ 					wait_frames(135)
/*<265>*/ 					make_actor_do_something(0, 0)
/*<279>*/ 					set_camera(-1, 0)
/*<280>*/ 					wait_frames(20)
/*<264>*/ 					printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000010>Yaouh! Ça ravigote!")
/*<268>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 269, 'param3': 13}
/*<269>*/ 					printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000012>Ahh... C'est que... Je ne sais pas si je vais\nvraiment réussir à me faire des muscles...\n\n\n[1-]Fais de ton mieux[2-]Bien oui, voyons!")
/*<281>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 291, 'param3': 13}
/*<291>*/ 					switch (choice(2)) {
          					  case 0:
/*<292>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000009>Tu as raison! Je dois faire des efforts,\nc'est tout! Ça ne sert à rien de me plaindre.")
          						flw_294:
/*<294>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00001800>Merci, <heroname>. Je vais faire de\nmon mieux pour me faire des muscles.\n\n\n<0x10009:0x00151800>Allez, je me remets à l'entraînement! Reviens\nme voir bientôt, tu verras mes progrès!")
/*<295>*/ 						story_flags[389 /* us: 805A9B0D 0x80, jp: 805ACD8D 0x80 */] = true;
/*<213>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<293>*/ 						printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00001609>Oh, tu as l'air confiant... Eh bien, j'imagine\nque tu dois avoir raison. Mes efforts devraient\nêtre récompensés... Un jour...")
          						goto flw_294
          					}
          				  case 1:
/*<262>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000011>Oh, non, bien sûr... Excuse‐moi, c'était vraiment\négoïste de ma part...")
/*<288>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 3072, 'next': 287, 'param3': 13}
/*<287>*/ 					printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000003>T'inquiète surtout pas! J'y arriverai tout seul!\nDu moins, je le pense...")
          				}
          			  case 1:
/*<275>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 274, 'param3': 32}
/*<274>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 276, 'param3': 13}
/*<276>*/ 				printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000011>Hmmff... Pfiouu... C'est difficile...\n\n\n\nJe voudrais continuer, mais je n'en peux plus...\nSi seulement j'avais une <color red<potion capable\nd'augmenter mon endurance>coloroff>...")
/*<290>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 289, 'param3': 13}
/*<289>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Nom d'un p'tit oiseau! Faut vraiment que\nje me remplume!\n\n\nJe vais continuer à m'entraîner tout seul\njusqu'à ce que je devienne costaud!")
          			}
          		}
          	  case 1:
/*<259>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 273, 'param3': 31}
/*<273>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 272, 'param3': 32}
/*<272>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 254, 'param3': 13}
/*<254>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000010>Gnaaarf... Hmmff... Pfiouu... Laisse-moi\nreprendre mon souffle!\n\n\n<0x10009:0x00101600>Ah, <heroname>! Bonsoir. Tu te\ndemandes ce que je fais? Bien, tu vois,\nje m'entraîne!\n\nQuand on est pas capable de porter un tonneau,\nil faut faire quelque chose! Et moi, je\nm'entraîne! J'essaie de me faire des muscles!\n\nMais je voudrais pas que les autres rient de\nmoi, alors je m'entraîne la nuit...\n\n\n<0x10009:0x00001711>Mais je pense que j'en ai assez fait ce soir.\nJe suis fatigué.")
/*<255>*/ 		story_flags[388 /* us: 805A9B0D 0x40, jp: 805ACD8D 0x40 */] = true;
/*<282>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<284>*/ 			printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x0000000b>Oh! <0x30001:0x><heroname>, qu'est‐ce que tu as\nlà? Ça serait pas de la <color yellow<potion d'endurance>coloroff>,\nça, par hasard?\n\nMe laisserais‐tu en boire?\n[1-]D'accord[2]Pas\nquestion")
          			goto flw_261
          		  case 1:
/*<283>*/ 			printf(/* textboxtype: 0, unk: 0, line: 71 */ "Je voudrais continuer, mais je n'en peux plus...\nSi seulement j'avais une <color red<potion capable\nd'augmenter mon endurance>coloroff>...")
/*<286>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 285, 'param3': 13}
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000003>Nom d'un p'tit oiseau! Faut vraiment que\nje me remplume!\n\n\nJe vais continuer à m'entraîner tout seul\njusqu'à ce que je devienne costaud!")
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
/*<682>*/ 				printf(/* textboxtype: 0, unk: 1, line: 190 */ "<0x10009:0x00000008>Encore toi, <heroname>?\nCe soir, j'veux juste penser à Grida!\n\n\nSi tu veux me parler, tu reviendras demain.\nFais d'l'air!")
          			}
          		  case 1:
          			goto flw_534
          		}
          	  case 1:
/*<532>*/ 		printf(/* textboxtype: 0, unk: 1, line: 193 */ "<0x10009:0x00000010>Hé hé hé! J'ai pas peur d'<color blue<Hergo>coloroff>, moi!\nSa chambre? C'est MA chambre!")
          	}
          }

          void entrypoint_115_07() {
/*<298>*/ 	start()
/*<299>*/ 	switch (story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */]) {
          	  case 0:
/*<745>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 302, 'param3': 31}
/*<302>*/ 		switch (story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */]) {
          		  case 0:
/*<304>*/ 			printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002><0x30001:0x><heroname>! Je vais devenir tellement\ncostaud que tu ne me reconnaîtras même pas!\n\n\nReviens me voir bientôt, tu verras mes progrès!")
          		  case 1:
/*<300>*/ 			switch (adventure_pouch_has(4 0x0004)) {
          			  case 0:
/*<332>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 331, 'param3': 32}
/*<331>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 305, 'param3': 13}
/*<305>*/ 				printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x00000010>Hmmff... Pfiouu... Hé, <heroname>!\n\n\n\nTu voudrais pas partager un peu de ta\n<color yellow<potion d'endurance>coloroff> avec moi?\n\n\n[1-]Bien sûr![2]Désolé...")
          				flw_306:
/*<306>*/ 				switch (choice(2)) {
          				  case 0:
/*<308>*/ 					printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x0000000b>C'est vrai?! Merci! J'accepte avec plaisir!")
/*<333>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3092, 'param2': 7936, 'next': 312, 'param3': 13}
/*<312>*/ 					wait_frames(4)
/*<311>*/ 					set_camera(5, 0)
/*<310>*/ 					wait_frames(135)
/*<309>*/ 					make_actor_do_something(0, 0)
/*<334>*/ 					set_camera(-1, 0)
/*<335>*/ 					wait_frames(20)
/*<345>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000010>Yaouh! J'ai l'impression de revenir à la vie!\nToute ma fatigue s'est envolée! Pssshhhh!")
/*<347>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 346, 'param3': 13}
/*<346>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000012>Je m'inquiète un peu, parfois. J'ai l'impression\nde ne pas m'entraîner efficacement...\n\n\nJe vais devoir continuer combien de temps\navant de devenir vraiment musclé?\nQu'en penses‐tu, <heroname>?\n\nCombien de pompes faut‐il encore que je\nfasse avant de voir pointer des muscles?\n\n\n[1-]Un millier![2-]Qui sait?")
/*<348>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 2048, 'next': 349, 'param3': 13}
/*<349>*/ 					switch (choice(2)) {
          					  case 0:
/*<350>*/ 						printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x00000053>Oh... Autant que ça?!\n\n\n\n<0x10009:0x00100e00>La route va être ardue. Visualisation...\nConcentration... Persévérance...\nSouffrance... Misère!")
          						flw_352:
/*<352>*/ 						printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00011600>J'ai compris! Maintenant, je sais que je peux\ndevenir costaud!\n\n\n<0x10009:0x00001800>Reviens me voir bientôt, tu verras mes progrès!")
/*<353>*/ 						story_flags[392 /* us: 805A9B0C 0x04, jp: 805ACD8C 0x04 */] = true;
/*<354>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<351>*/ 						printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000007>Comment ça, « Qui sait? »\n\n\n\n<0x10009:0x00070800>Oh, tu veux dire qu'il faut continuer jusqu'à\nne plus pouvoir les compter, c'est ça?")
          						goto flw_352
          					}
          				  case 1:
/*<307>*/ 					printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000011>Je comprends... Excuse‐moi de t'avoir dérangé\navec ça.")
/*<344>*/ 					{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 343, 'param3': 13}
/*<343>*/ 					printf(/* textboxtype: 0, unk: 1, line: 91 */ "C'est beau... Pas de problème! Je réussirai\ntout seul!")
          				}
          			  case 1:
/*<330>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 329, 'param3': 32}
/*<329>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': -256, 'next': 303, 'param3': 13}
/*<303>*/ 				printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00000011>Hmmff... Pfiouu... C'est difficile...\n\n\n\nJe voudrais continuer, mais je n'en peux plus...\nSi seulement j'avais une <color red<potion capable\nd'augmenter mon endurance>coloroff>...")
/*<342>*/ 				{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 341, 'param3': 13}
/*<341>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>Non, ce n'est pas bien... Je dois arrêter de te\ndemander de l'aide tout le temps! Il faut que\nje réussisse par moi-même.")
          			}
          		}
          	  case 1:
/*<301>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 328, 'param3': 31}
/*<328>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 327, 'param3': 32}
/*<327>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3088, 'param2': 6912, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000010>Hmmff... Pfiouu... Bonsoir, <heroname>.\n\n\n\n<0x10009:0x0c10ff00>Je m'entraîne dur depuis la dernière fois que\nje t'ai vu, mais je crois que je n'avance pas\nbeaucoup...\n\nJe manque d'énergie, on dirait.")
/*<297>*/ 		story_flags[391 /* us: 805A9B0C 0x02, jp: 805ACD8C 0x02 */] = true;
/*<336>*/ 		switch (adventure_pouch_has(4 0x0004)) {
          		  case 0:
/*<338>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x0000000b>Ah! <0x30001:0x><heroname>, est‐ce que c'est de la\n<color yellow<potion d'endurance>coloroff> que tu as là?\n\n\nTu voudrais m'en donner un peu?\n[1-]Bien sûr![2]Désolé...")
          			goto flw_306
          		  case 1:
/*<337>*/ 			printf(/* textboxtype: 0, unk: 0, line: 86 */ "Hé, <heroname>! Tu voudrais pas me\nredonner un peu de <color yellow<potion d'endurance>coloroff>?")
/*<340>*/ 			{'type': 'type3', 'subType': 4, 'param1': 3079, 'param2': -256, 'next': 339, 'param3': 13}
/*<339>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000003>Non, ce n'est pas bien... Je dois arrêter de te\ndemander de l'aide tout le temps! Il faut que\nje réussisse par moi-même.")
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
/*< 66>*/ 			printf(/* textboxtype: 1, unk: 0, line: 201 */ "")
          		  case 1:
/*<679>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 686, 'param3': 31}
/*<686>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 687, 'param3': 47}
/*<687>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 689, 'param3': 15}
/*<689>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 690, 'param3': 16}
/*<690>*/ 			set_camera(27, 0)
/*<829>*/ 			make_actor_do_something(4, 0)
/*<688>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 568, 'param3': 48}
/*<568>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 3072, 'next': 59, 'param3': 13}
/*< 59>*/ 			printf(/* textboxtype: 0, unk: 1, line: 196 */ "<0x10009:0x00000002>Hé, <heroname>! Est-ce que tu lui as\ndonné ma lettre?\n\n\n[1-]En fait...[2-]Quelle lettre?")
/*< 60>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 0, line: 197 */ "<0x10009:0x00111f1d>Qu‐quoi?! Tu l'as donnée à la folle\ndes toilettes?!")
          				flw_64:
/*< 64>*/ 				printf(/* textboxtype: 0, unk: 1, line: 199 */ "<0x10009:0x00011f00>Mais j't'avais dit de surtout ne pas lui donner,\nà ELLE! T'avais juré!\n\n\n<0x10009:0x001a1f17>Mais quel idiot! T'as tout gâché!\n\n\n\nJ'te parlerai plus jamais! J'te déteste,\n<heroname>!")
/*<692>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 7936, 'next': 683, 'param3': 13}
/*<683>*/ 				{'type': 'type3', 'subType': 2, 'param1': 14, 'param2': 0, 'next': 691, 'param3': 14}
/*<691>*/ 				printf(/* textboxtype: 0, unk: 0, line: 200 */ "<0x10009:0x00001f18>Nooooooon!!!")
/*<697>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 698, 'param3': 15}
/*<698>*/ 				wait_frames(1)
/*<696>*/ 				set_camera(28, 0)
/*<695>*/ 				{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 1024, 'next': 693, 'param3': 13}
/*<693>*/ 				{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 0, 'next': 65, 'param3': 14}
/*< 65>*/ 				story_flags[554 /* us: 805A9B16 0x08, jp: 805ACD96 0x08 */] = true;
/*<707>*/ 				story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */] = true;
/*<708>*/ 				story_flags[771 /* us: 805A9B2A 0x08, jp: 805ACDAA 0x08 */] = true;
/*<694>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00151f12>Qu‐quoi? Comment ça, quelle lettre?\nTu veux rire? J'te trouve pas drôle!\n\n\n<0x10009:0x00111b00>Oh non... La folle des toilettes... T-Tu lui\nas donné ma lettre? À elle? Pour vrai?")
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
/*<544>*/ 				printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0000000f>Ahhh... <color blue<Grida >coloroff>sait maintenant c'que je ressens...\n\n\n\n<0x10008:0xffcd><0x10009:0x00011f00>Mais, qu'est‐ce que j'dois faire? Le cœur me fait\ndes tourniquettes!")
          			  case 1:
/*<567>*/ 				{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 6912, 'next': 542, 'param3': 13}
/*<542>*/ 				printf(/* textboxtype: 0, unk: 0, line: 191 */ "<0x10009:0x00000013>Quoi? C'est fait? Vraiment? T'as donné la\nlettre à <color blue<Grida>coloroff>?\n\n\n<0x10009:0x00012500>Aah! Je panique! Qu'est-ce que j'fais? Qu'est-ce\nque je fais? Est-ce que je devrais lui parler?\n\n\n<0x10008:0xffcd><0x10009:0x00011f00>Oh non, je suis tellement gêné...")
/*<543>*/ 				story_flags[664 /* us: 805A9B1F 0x40, jp: 805ACD9F 0x40 */] = true;
          			}
          		  case 1:
/*<566>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 40, 'param3': 13}
/*< 40>*/ 			printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000002>T'as déjà oublié ta mission, <heroname>?\nVa donner ma lettre à la fille au <color red<chapeau rond>coloroff>.\n\n\n<0x10009:0x00011b00>T'as pas intérêt à la donner à cette\n<color red<hurluberlue dans les toilettes>coloroff>! Jure‐le!")
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
/*<251>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "Hrrrnnnnghhh...!")
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "3 985... 3 986...\n3 987... 3 988...")
/*<844>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*<245>*/ 			switch (temp_flags[53 /* 0x7 20 */]) {
          			  case 0:
/*<247>*/ 				printf(/* textboxtype: 0, unk: 1, line: 67 */ "Gnaaarf... Hmmff...")
          			  case 1:
/*<244>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10006:0xfecd>55... 56... 57...")
/*<843>*/ 				temp_flags[53 /* 0x7 20 */] = true;
          			}
          		}
          	  case 1:
/*<242>*/ 		switch (temp_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 0, unk: 0, line: 65 */ "Gnarf... oh... oh...")
          		  case 1:
/*<240>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10006:0xfccd>5... 6... 7...")
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
/*<321>*/ 			printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x0015180a>Je n'ai même plus besoin de faire de pause!\nMon prochain objectif, c'est de soulever un\ntonneau avec un seul doigt!")
          		  case 1:
/*<322>*/ 			printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x0015180a>Mpfff... Je pourrais continuer pendant\ndes heures...")
          		}
          	  case 1:
/*<323>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 315, 'param3': 31}
/*<315>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0015190a>Mpffff... Je pourrais continuer pendant\ndes heures!\n\n\n<0x10009:0x00011600>... Salut, <heroname>! Tu tombes bien!\nJe voulais te demander quelque chose!\n\n\n<0x10009:0x00071800>J'ai essayé de porter un tonneau l'autre jour...\nJe l'ai soulevé d'une seule main!\n\n\n<0x10009:0x00001600>Tu crois que ça veut dire que j'ai pris\ndu muscle?\n\n\nRéponds‐moi franchement, <heroname>...\nTu me trouves costaud, maintenant?\n[1-]Peut‐être un\npeu trop...[2-]Oui")
/*<317>*/ 		switch (choice(2)) {
          		  case 0:
/*<319>*/ 			printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x00071809>Hmm, j'ai peur que tu dises ça juste pour être\ngentil. Mais ça me fait plaisir quand même!")
          			flw_320:
/*<320>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00001600>Si j'en suis là aujourd'hui, c'est grâce à toi,\n<heroname>.\n\n\n<0x10009:0x00011900>Je me serais découragé il y a longtemps si tu\nne m'avais pas soutenu comme tu l'as fait.\n\n\n<0x10009:0x0007180b>Merci de tout cœur, <heroname>!")
/*<324>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
/*<316>*/ 			story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */] = true;
/*<325>*/ 			give_gratitude_crystals();
          		  case 1:
/*<318>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x0000180b>C'est vrai? Merci! Je suis tellement heureux!")
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
/*<789>*/ 				printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Salut, <heroname>! Merci pour ce que\ntu as fait pour ma sœur. Je ne l'oublierai\njamais!")
          			  case 1:
/*<772>*/ 				entrypoint_115_26();
          			}
          		  case 1:
/*<742>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 731, 'param3': 31}
/*<731>*/ 			switch (story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */]) {
          			  case 0:
/*<214>*/ 				printf(/* textboxtype: 0, unk: 1, line: 121 */ "<0x10009:0x000b0e09><0x30001:0x><heroname>! Ma sœur est rentrée saine\net sauve!\n\n\n<0x10009:0x000a0400>Quel soulagement! J'avais tellement peur qu'il\nlui soit arrivé malheur...\n\n\n<0x10009:0x000b0400>Tout ça, c'est grâce à toi, <heroname>.\nMerci infiniment!")
/*<216>*/ 				story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<787>*/ 				temp_flags[11 /* 0x0 08 */] = true;
/*<732>*/ 				give_gratitude_crystals();
          			  case 1:
/*<734>*/ 				printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x000b0e09><0x30001:0x><heroname>! Ma sœur est saine et sauve!\n\n\n\n<0x10009:0x000a0400>Je suis tellement soulagé! J'imaginais le pire...\nJe ne sais pas ce que j'aurais fait s'il lui était\narrivé quelque chose...\n\nQuoi? C'est toi qui lui as apporté le remède?<pause 20>\n<0x10009:0x000b0400>Oh, merci!\n\n\nJe sais que ce n'est pas grand‐chose comparé\nà ce que tu as fait pour elle, mais accepte ceci\nen guise de remerciement.")
/*<738>*/ 				switch (is_adventure_pouch_full()) {
          				  case 0:
/*<739>*/ 					switch (is_item_check_full()) {
          					  case 0:
/*<740>*/ 						printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10009:0x000b0a05>Oh, dommage! Je voulais t'offrir ce <color yellow<flacon vide>coloroff>,\nmais il n'y a plus de place dans ta sacoche ni à\nla consigne...\n\nJe le garde de côté pour toi. Essaie de faire le\ntri et reviens me voir, je te le donnerai à ce\nmoment-là.")
          					  case 1:
          						flw_735:
/*<735>*/ 						story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
/*<736>*/ 						story_flags[384 /* us: 805A9B0D 0x04, jp: 805ACD8D 0x04 */] = true;
/*<733>*/ 						give_item(153 0x99);
/*<786>*/ 						temp_flags[11 /* 0x0 08 */] = true;
/*<812>*/ 						printf(/* textboxtype: 0, unk: 1, line: 124 */ "<0x10009:0x000b0400>Ça n'a l'air de rien, comme ça... Mais, je suis\nsûr que tu vas lui trouver plein d'usages\ndifférents. Encore merci!")
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
/*<205>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x000b0409>Qu'est-ce que tu fais, <heroname>?\nApporte les <color yellow<spores de champignon >coloroff>à ma sœur!\nDépêche-toi! <0x10009:0x000a0400>Je compte sur toi!")
          					  case 1:
/*<201>*/ 						printf(/* textboxtype: 0, unk: 1, line: 118 */ "<0x10009:0x000b0406>Eh bien, qu'est-ce que tu as fait des <color yellow<spores\nde champignon>coloroff>? Tu ne les lui as pas encore\ndonnées?\n\n<0x10009:0x000a0400>Si jamais tu les perds, tu peux en <color red<prélever\nd'autres sur des champignons>coloroff>.\n\n\nJe compte sur toi, <heroname>!")
          					}
          				  case 1:
/*<220>*/ 					switch (story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */]) {
          					  case 0:
/*<221>*/ 						printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x000b0409>Si tu as de la place dans ta sacoche, tu pourras\nprendre ceci.\n\n\n<color yellow<<0x10009:0x000a0400>>coloroff>Ce sont des <color yellow<spores de champignon>coloroff>. Elles\nguériront la blessure du célestrier.")
          						flw_231:
/*<231>*/ 						switch (is_adventure_pouch_full()) {
          						  case 0:
/*<228>*/ 							printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x0000050d>Tu as trop d'affaires avec toi! <0x10009:0x00000400>Commence par\nfaire de la place dans ta sacoche, et reviens\nvite me voir!")
/*<229>*/ 							story_flags[395 /* us: 805A9B0C 0x80, jp: 805ACD8C 0x80 */] = true;
          						  case 1:
/*<746>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = true;
/*<230>*/ 							give_item(55 0x37);
/*<747>*/ 							story_flags[827 /* us: 805A9B33 0x08, jp: 805ACDB3 0x08 */] = false;
/*<232>*/ 							printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000b0404>Si elle l'applique sur la blessure de son\ncélestrier, il guérira immédiatement. Elle\npourra alors rentrer à la maison sans problème.\n\n<0x10009:0x00000c00>Apporte‐les à ma sœur! <0x10009:0x00000400>Tu pourras garder le\n<color red<flacon >coloroff>quand tu lui auras donné les spores!\n\n\nJe compte sur toi, <heroname>!")
/*<227>*/ 							story_flags[382 /* us: 805A9B0D 0x01, jp: 805ACD8D 0x01 */] = true;
          						}
          					  case 1:
          						flw_199:
/*<199>*/ 						printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10009:0x000b050d>Quoi?! Tu as trouvé ma sœur? Et son\ncélestrier est blessé?\n\n\n<0x10009:0x000a0c00>C'est épouvantable! Dans ce cas, apporte‐lui\nceci! Vite!\n\n\n<color yellow<<0x10009:0x00000400>>coloroff>Ce sont des <color yellow<spores de champignon>coloroff>, cela\ndevrait soigner son célestrier.")
          						goto flw_231
          					}
          				}
          			  case 1:
/*<184>*/ 				printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x000a0c12>Que faire... Je suis fou d'inquiétude!\n\n\n\nD'habitude elle prend toujours un <color red<flacon >coloroff>de\nremède avec elle au cas où son oiseau\nserait blessé...\n\nMais aujourd'hui, elle a oublié...")
/*<835>*/ 				make_actor_do_something(0, 0)
/*<836>*/ 				printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10009:0x000d0400>Ma sœur disait qu'elle était intriguée par l'<color blue<île\nqui ressemble à une roulette>coloroff>. Donc je pense\nqu'elle a dû s'envoler vers le<color red< sud‐ouest>coloroff>.")
/*<837>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 838, 'param3': 17}
/*<838>*/ 				printf(/* textboxtype: 1, unk: 0, line: 114 */ "<0x10009:0x00010400>Tu veux bien partir à sa recherche,\n<heroname>?")
          			}
          		  case 1:
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 177, 'param3': 31}
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x000a0c12>Je suis donc inquiet... Que je suis donc inquiet...\n[1-]Qu'est-ce qui se passe?[2-]Calme‐toi!")
/*<178>*/ 			switch (choice(2)) {
          			  case 0:
/*<179>*/ 				printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000411>Salut, <heroname>. Tu vas prendre le\ntemps de m'écouter? Que c'est gentil de ta part.")
          				flw_181:
/*<181>*/ 				printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000400>Tout à l'heure, ma <color red<petite sœur >coloroff>est partie sur\nson célestrier et elle n'est toujours pas rentrée...\n\n\nD'habitude quand elle va se promener, ça ne\ndure pas aussi longtemps. Je suis allé à sa\nrecherche, mais je ne l'ai pas trouvée.\n\n<0x10009:0x000b0500>S'il fallait qu'il lui soit arrivé quelque chose...\nJe n'ose pas y penser! Je ne sais plus\nquoi faire!")
/*<198>*/ 				switch (story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */]) {
          				  case 0:
/*<219>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          					goto flw_199
          				  case 1:
/*<197>*/ 					printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10009:0x00000411>Hé, <heroname>, tu veux bien partir\nà sa recherche?")
/*<831>*/ 					make_actor_do_something(0, 0)
/*<832>*/ 					printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x000d0400>Elle était intriguée par l'<color blue<île qui ressemble à une\nroulette>coloroff> qui s'est formée récemment. Elle a\ndonc dû s'envoler vers le <color red<sud‐ouest>coloroff>.")
/*<833>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 834, 'param3': 17}
/*<834>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00010400>Je compte sur toi, <heroname>!")
/*<182>*/ 					story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */] = true;
          				}
          			  case 1:
/*<180>*/ 				printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x000b0500>Me CALMER? Comment veux-tu que je me\nCALME? Oh, excuse‐moi... Ce n'est pas en te\ncriant après que je vais trouver une solution...")
          				goto flw_181
          			}
          		}
          	}
          }

          void entrypoint_115_26() {
/*<762>*/ 	start()
/*<765>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<766>*/ 		printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x000b0409>Il paraît que l'île de la Déesse a disparu!\nC'est impensable!\n\n\n<0x10009:0x000a0400>C'est mauvais signe, ça c'est sûr...")
          		flw_790:
/*<790>*/ 		switch (story_flags[477 /* us: 805A9B11 0x02, jp: 805ACD91 0x02 */]) {
          		  case 0:
          		  case 1:
/*<791>*/ 			switch (story_flags[474 /* us: 805A9B0E 0x40, jp: 805ACD8E 0x40 */]) {
          			  case 0:
/*<792>*/ 				printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x00010400>Au fait, <color blue<Latruche>coloroff> est parti vers le\ncumulonimbus. Il était tout content parce\nqu'il avait trouvé un <color red<insecte rare>coloroff>.\n\nC'est pas comme ça qu'il va réussir à\nses examens...")
          			  case 1:
/*<767>*/ 				switch (story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */]) {
          				  case 0:
/*<771>*/ 					printf(/* textboxtype: 0, unk: 0, line: 137 */ "<0x10009:0x00010400><color blue<Latruche>coloroff> a dit qu'il voulait créer un paradis\ndes insectes sur son île, à <color red<l'intérieur du\ncumulonimbus>coloroff>. Pour ça, il en collectionne\ntoutes sortes.")
          				  case 1:
/*<770>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 768, 'param3': 31}
/*<768>*/ 					printf(/* textboxtype: 0, unk: 1, line: 136 */ "<0x10009:0x000a0a00>Hé, un de tes camarades de classe s'appelle\n<color blue<Latruche>coloroff>, non?\n\n\nIl raconte qu'il a découvert une île idéale\npour l'élevage des insectes à l'<color red<intérieur du\ncumulonimbus>coloroff>. C'est un vrai mordu de\nbestioles en tout genre!\n<0x10009:0x000b0400>Je me demande bien ce qu'il a l'intention\nd'y faire, sur son île...")
/*<769>*/ 					story_flags[811 /* us: 805A9B31 0x08, jp: 805ACDB1 0x08 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<810>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<811>*/ 			printf(/* textboxtype: 0, unk: 0, line: 134 */ "<0x10009:0x00000001>Tout à l'heure, j'ai entendu un bruit de rochers\nqui s'écroulaient... Qu'est‐ce qui s'est passé?")
          			goto flw_790
          		  case 1:
/*<774>*/ 			switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          			  case 0:
/*<775>*/ 				printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10009:0x00000001>Qu'est‐ce que tu as fait tout à l'heure sur la\ngrand‐place? Le ciel s'est assombri tout à coup...")
          				goto flw_790
          			  case 1:
/*<773>*/ 				switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          				  case 0:
/*<764>*/ 					printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x000a0405>C'est vraiment bizarre... Pourquoi tous ces\npapillons se rassemblent sur la grand‐place?\nIl y a rien ici.")
          					goto flw_790
          				  case 1:
/*<841>*/ 					switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          					  case 0:
/*<842>*/ 						printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10009:0x00000001>Salut, <heroname>! T'es toujours en\ntrain de courir partout, dis donc!")
          						goto flw_790
          					  case 1:
/*<779>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
/*<784>*/ 							switch (story_flags[396 /* us: 805A9B0F 0x20, jp: 805ACD8F 0x20 */]) {
          							  case 0:
/*<783>*/ 								printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000001>Salut, <heroname>! Ça fait un bon bout\nde temps que j'ai pas vu la bande des trois\npetits voyous.\n\nEst‐ce qu'ils se seraient enfin mis à étudier\naprès leur échec à l'examen de passage en\nclasse supérieure?")
          							  case 1:
/*<785>*/ 								printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10009:0x00000001>Salut <heroname>! Je suis allé voir cette\nîle fortune qui intriguait tant ma sœur.\n\n\nJ'y ai rencontré un homme tout déprimé parce\nqu'il avait fait tomber sa <color red<roue >coloroff>sous les nuages.\nIl devrait s'en remettre!\n\nUne fois que quelque chose est tombé sous\nles nuages, il y a plus grand‐chose à faire.")
          							}
          						  case 1:
/*<776>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<782>*/ 								printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10009:0x000a0405>Hé, tu as vu? La tour de lumière émet un rayon\nlumineux qui éclaire le cumulonimbus!\n\n\nC'est comme si elle disait de se rendre dans\nce gros nuage là‐bas...")
          							  case 1:
/*<840>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									flw_780:
/*<780>*/ 									printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000001>Salut, <heroname>! Ça fait un bout\nde temps que j'ai pas vu Zelda. Est-ce qu'il\nlui est arrivé quelque chose?")
          								  case 1:
/*<778>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<781>*/ 										printf(/* textboxtype: 0, unk: 1, line: 127 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\n<0x10009:0x000a0400>Comment? <color red<Deux ailes>coloroff>?<pause 30> Tu sais, les devinettes,\nc'est vraiment pas mon truc. Pourquoi t'irais\npas demander au <color red<diseur de bonne aventure>coloroff>?")
          									  case 1:
/*<777>*/ 										switch (story_flags[9 /* us: 805A9AD8 0x04, jp: 805ACD58 0x04 */]) {
          										  case 0:
          											goto flw_780
          										  case 1:
/*<763>*/ 											printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10009:0x000b0e09>Salut, <heroname>! Merci pour ce que\ntu as fait pour ma sœur. Je ne l'oublierai\njamais!")
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
/*<818>*/ 		printf(/* textboxtype: 0, unk: 1, line: 232 */ "<0x10009:0x000c0401>J'ai appris que l'île de la Déesse était tombée!\n<pause 30>Quelle tragédie...\n\n\n<0x10009:0x00110e00>Mais j'ai compris le message que la Déesse\nvoulait nous transmettre. Elle nous\ndemande d'être forts, même sans elle.")
/*<819>*/ 		switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          		  case 0:
/*<820>*/ 			printf(/* textboxtype: 0, unk: 0, line: 233 */ "<0x10009:0x000c040b><0x10008:0xfecd>Et puis... maintenant, j'ai ma propre déesse.")
          		  case 1:
          		}
          	  case 1:
/*<815>*/ 		switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          		  case 0:
/*<817>*/ 			printf(/* textboxtype: 1, unk: 0, line: 231 */ "<0x10009:0x00001101><0x30001:0x><heroname>! Ne répète à personne ce\nque je vais te dire...\n\n\n<0x10009:0x000c0400>Tout à l'heure, quand je suis sorti, j'ai\nremarqué qu'une étrange structure était\napparue sous l'île de la Déesse.\n\n<0x10009:0x00110e00>Mais qu'est‐ce qui a bien pu se passer?\nEst‐ce que Célesbourg est en danger?")
          		  case 1:
/*<702>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<703>*/ 				printf(/* textboxtype: 0, unk: 1, line: 229 */ "<0x10009:0x00000005>Salut, <heroname>! Tu n'as pas l'air\nen forme, ces derniers temps.\n\n\n<0x10009:0x0000040b>Mais garde le sourire! <pause 20>Zelda sera bientôt de\nretour, j'en suis sûr! Il suffit d'y croire!")
          			  case 1:
/*<700>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<701>*/ 					printf(/* textboxtype: 0, unk: 0, line: 230 */ "<0x10009:0x00000001>Salut, <heroname>! Ça va bien?\n\n\n\n<0x10009:0x000c1400>Quoi? La Triforce? Dissimulée par la Déesse?\n\n\n\n<0x10009:0x00101100>Euh non, je sais rien à ce sujet, désolé...\n\n\n\n<0x10009:0x00081400>Pour ce genre d'informations, tu devrais\ndemander aux professeurs.")
          				  case 1:
/*<663>*/ 					switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          					  case 0:
/*<662>*/ 						printf(/* textboxtype: 0, unk: 1, line: 229 */ "<0x10009:0x00000005>Salut, <heroname>! Tu n'as pas l'air\nen forme, ces derniers temps.\n\n\n<0x10009:0x0000040b>Mais garde le sourire! <pause 20>Zelda sera bientôt de\nretour, j'en suis sûr! Il suffit d'y croire!")
          					  case 1:
/*<661>*/ 						switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          						  case 0:
/*<660>*/ 							printf(/* textboxtype: 1, unk: 0, line: 228 */ "<0x10009:0x00000001>Salut, <heroname>! Ça va mieux?\n\n\n\n<0x10009:0x00091400>Moi aussi, j'ai ma part de problèmes, tu sais.\nMais je fais bonne figure devant les autres...\n\n\n<0x10009:0x00110400>Ça m'aide à oublier que j'ai mes propres ennuis!\nC'est ce que j'essaie de me dire!")
          						  case 1:
/*< 90>*/ 							printf(/* textboxtype: 0, unk: 0, line: 227 */ "<0x10009:0x00000001>Salut, <heroname>! Alors, tu as réussi\nl'examen! L'uniforme te va bien en tout cas!\n\n\n<0x10009:0x00101100>Mais pas le temps de parler de ça. Je n'arrive\npas à croire que Zelda ait disparu...\n\n\n<0x10009:0x000c1400>En plus, vous étiez proches. Tu dois t'en faire\npour elle...\n\n\n<0x10009:0x00081400>Mais je suis sûr qu'elle est saine et sauve\net qu'elle reviendra vite, ne t'inquiète pas!")
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
/*<207>*/ 				printf(/* textboxtype: 0, unk: 0, line: 149 */ "<0x10009:0x0000000b>Oh, des <color yellow<spores de champignon>coloroff>!\nQuel soulagement! Tu m'as apporté le remède!\n[1-]Tiens![2]Et puis, non.")
          				flw_208:
/*<208>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_210:
/*<210>*/ 					printf(/* textboxtype: 0, unk: 1, line: 151 */ "<0x10009:0x000b0409>Merci! Je vais pouvoir soigner mon célestrier...")
/*<607>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 610, 'param3': 47}
/*<610>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 224, 'param3': 15}
/*<224>*/ 					make_actor_do_something(0, 0)
/*<647>*/ 					wait_frames(1)
/*<646>*/ 					{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 256, 'next': 234, 'param3': 15}
/*<234>*/ 					set_camera(7, 0)
/*<235>*/ 					{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': -256, 'next': 608, 'param3': 13}
/*<608>*/ 					{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 236, 'param3': 48}
/*<236>*/ 					wait_frames(45)
/*<233>*/ 					printf(/* textboxtype: 0, unk: 0, line: 152 */ "<0x10009:0x00000004>Il sera en pleine forme en un rien de temps!")
/*<237>*/ 					wait_frames(30)
/*<581>*/ 					make_actor_do_something(1, 0)
/*<609>*/ 					set_camera(24, 0)
/*<238>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 1280, 'next': 222, 'param3': 13}
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10009:0x00000009>Je commençais vraiment à perdre espoir. Ton\naide nous a été précieuse.\n\n\nTu nous as sauvés, mon célestrier et moi!\nMerci!")
/*<225>*/ 					give_gratitude_crystals();
/*<223>*/ 					printf(/* textboxtype: 0, unk: 1, line: 154 */ "<0x10009:0x00000004>On y va! On se croisera sûrement au bourg\nun de ces jours!")
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
/*<209>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x00001113>Tu es un monstre!")
          				}
          			  case 1:
/*<730>*/ 				printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x0000050b>Alors, tu me donnes ces spores de champignon?\nAvec ça, mon célestrier sera guéri en un\nrien de temps!\n\n[1-]Tiens[2]Pas question")
          				goto flw_208
          			}
          		  case 1:
/*<226>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 31}
/*<196>*/ 			printf(/* textboxtype: 0, unk: 1, line: 148 */ "<color red<<0x10009:0x00000001>Mon grand frère te donnera le remède>coloroff>. Va donc\nà sa rencontre.\n\n\nJe t'attendrai ici avec mon célestrier. Je compte\nsur toi...")
          		}
          	  case 1:
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 188, 'param3': 31}
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "<0x10009:0x0000050b>Tiens, mais on dirait <heroname>!\nTu tombes bien, toi!\n\n\n<0x10009:0x00120200>Mon célestrier s'est blessé pendant notre\npromenade. Il ne peut plus voler!\n\n\n<0x10009:0x00011500>On a quand même réussi à atterrir ici, mais\nnous ne sommes pas capables de rentrer\nà Célesbourg!\n\n<0x10009:0x00121500>Je dois soigner sa blessure, mais <color red<il me faut\nun remède >coloroff>pour ça.\n\n\nMais pas n'importe lequel, j'ai besoin de\nquelque chose spécialement <color red<pour les oiseaux>coloroff>!\n\n\nDis donc, <heroname>, <0x10009:0x00150200>tu voudrais pas\nm'aider? Il faudrait que tu ailles me chercher\nce remède...\n\n[1-]Bien sûr![2-]Désolé...")
/*<189>*/ 		switch (choice(2)) {
          		  case 0:
/*<190>*/ 			printf(/* textboxtype: 0, unk: 0, line: 140 */ "<0x10009:0x000b0409>Merci de tout cœur! Tu nous sauves la vie!")
          			flw_192:
/*<192>*/ 			printf(/* textboxtype: 0, unk: 1, line: 142 */ "<color also red<<color red<Mon grand frère te donnera le remède<color also red<. >coloroff>Va\ndonc à sa rencontre. Je suis sûre qu'il\ns'inquiète beaucoup pour moi.\n\nIl doit être <color red<quelque part sur la grand‐place\nde Célesbourg>coloroff>, à attendre mon retour...")
/*<727>*/ 			story_flags[381 /* us: 805A9B0A 0x80, jp: 805ACD8A 0x80 */] = true;
/*<725>*/ 			switch (adventure_pouch_has(5 0x0005)) {
          			  case 0:
/*<726>*/ 				printf(/* textboxtype: 0, unk: 0, line: 143 */ "<0x10009:0x00090509>Mais tu as le remède! Pourquoi tu ne me\nl'as pas dit plus tôt? Ces <color yellow<spores de champignon\n>coloroff>sont exactement ce qu'il me faut.\n\nAvec ça, mon célestrier se remettra en un rien\nde temps! Tu me les donnes?\n[1-]Tiens[2]Pas question")
/*<728>*/ 				switch (choice(2)) {
          				  case 0:
          					goto flw_210
          				  case 1:
/*<737>*/ 					{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 4352, 'next': 729, 'param3': 13}
/*<729>*/ 					printf(/* textboxtype: 0, unk: 1, line: 145 */ "Ah bon... J'imagine que c'est trop te demander...\nMais ça te dérangerait d'aller dire à mon frère\nce qu'il m'est arrivé?")
          				}
          			  case 1:
/*<187>*/ 				switch (story_flags[380 /* us: 805A9B0A 0x40, jp: 805ACD8A 0x40 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 0, unk: 0, line: 146 */ "Ah, tu lui as déjà parlé? Ça simplifie les choses!")
          					flw_194:
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 147 */ "Je t'attendrai ici avec mon célestrier.\nJe compte sur toi... Et encore merci!")
          				  case 1:
          					goto flw_194
          				}
          			}
          		  case 1:
/*<191>*/ 			printf(/* textboxtype: 1, unk: 0, line: 141 */ "<0x10009:0x000c1513>Quoi? Tu n'as pas de cœur!\n\n\n\n<0x10009:0x000b0409>T'es pas sérieux, tout de même...")
          			goto flw_192
          		}
          	}
          }

          void entrypoint_115_28() {
/*<797>*/ 	start()
/*<805>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<806>*/ 		printf(/* textboxtype: 0, unk: 1, line: 226 */ "<0x10009:0x000c0456>Il y a eu un grand bruit qui venait de dehors\ntout à l'heure. Je me demande ce que c'était...")
          	  case 1:
/*<807>*/ 		switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          		  case 0:
          			flw_86:
/*< 86>*/ 			printf(/* textboxtype: 0, unk: 1, line: 223 */ "<0x10009:0x00000001>Salut, <heroname>! Dis donc, t'es\nvraiment mignon avec cet uniforme...\n\n\nTu as vraiment l'air d'un gars fiable,\ncomme on dit!")
          		  case 1:
/*<802>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<804>*/ 				printf(/* textboxtype: 1, unk: 0, line: 225 */ "<0x10009:0x00080e06>Quoi? Tu sais utiliser l'attaque tornade? Wow...\n\n\n\n<0x10009:0x00080909>Là, tu m'épates!<pause 30> <0x10009:0x000c0400>Faut dire que<pause 20> <color blue<Kiko>coloroff> aussi\nen est capable...")
          			  case 1:
/*<801>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<803>*/ 					printf(/* textboxtype: 0, unk: 0, line: 224 */ "<0x10009:0x00000006>Hein? La Triforce?<pause 30> C'est quoi, ça?")
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
/*<705>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x00000001>Oh, <heroname>! L'île de la Déesse\na disparu!\n\n\n<0x10009:0x00001513>C'est triste... Les célestriers aimaient tellement\ns'y reposer!")
          		  case 1:
/*<808>*/ 			switch (story_flags[22 /* us: 805A9ADB 0x40, jp: 805ACD5B 0x40 */]) {
          			  case 0:
/*<809>*/ 				printf(/* textboxtype: 0, unk: 0, line: 161 */ "<0x10009:0x00000013>Tu as senti ce grand tremblement? Je me\ndemande bien ce que c'était...")
          			  case 1:
/*<753>*/ 				switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          				  case 0:
/*<758>*/ 					printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10009:0x00000001>Tiens, <heroname>!\n\n\n\n<0x10009:0x000c0200>Tu as réussi à maîtriser la légendaire attaque\ntornade?<pause 30><0x10009:0x000c050b> Impressionnant!")
          				  case 1:
/*<752>*/ 					switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          					  case 0:
/*<757>*/ 						printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00000057>La... quoi? La Triforce?<pause 20>\nNon, ça ne me dit rien...\n\n\nPourquoi tu ne demanderais pas aux\nprofesseurs de l'école?")
          					  case 1:
/*<751>*/ 						switch (story_flags[206 /* us: 805A9AF0 0x04, jp: 805ACD70 0x04 */]) {
          						  case 0:
          							flw_754:
/*<754>*/ 							printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x00000001>Tiens, <heroname>! Dis‐moi, cette fille\nde l'école de chevalerie<pause 5>.<pause 5>.<pause 5>.<pause 5> Zelda, c'est bien ça?\n\n\nOn ne vous voit plus beaucoup ensemble ces\nderniers temps. Vous vous êtes disputés?")
          						  case 1:
/*<748>*/ 							switch (story_flags[194 /* us: 805A9AEC 0x10, jp: 805ACD6C 0x10 */]) {
          							  case 0:
/*<756>*/ 								printf(/* textboxtype: 0, unk: 0, line: 158 */ "<0x10009:0x00000013>Tout à l'heure, j'ai eu l'impression que le ciel\ns'était assombri pendant un instant. Je me\ndemande ce que c'était...")
          							  case 1:
/*<839>*/ 								switch (story_flags[662 /* us: 805A9B1F 0x10, jp: 805ACD9F 0x10 */]) {
          								  case 0:
          									goto flw_754
          								  case 1:
/*<750>*/ 									switch (story_flags[49 /* us: 805A9AE6 0x04, jp: 805ACD66 0x04 */]) {
          									  case 0:
/*<755>*/ 										printf(/* textboxtype: 0, unk: 1, line: 157 */ "<0x10009:0x00000001>Tiens, <heroname>!\n\n\n\n<0x10009:0x00110057>Qu'est-ce que tu dis? <color red<Deux grandes ailes>coloroff>?\n\n\n\n<0x10009:0x00010000>Des ailes à Célesbourg... Bien, il y a les <color red<moulins\n>coloroff>qui ont des genres d'ailes... Mais je ne sais pas\ns'il y a un rapport...")
          									  case 1:
/*<749>*/ 										switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          										  case 0:
          											goto flw_754
          										  case 1:
/*<218>*/ 											printf(/* textboxtype: 0, unk: 0, line: 155 */ "<0x10009:0x0000000b>Oh, <heroname>. Merci beaucoup pour\nton aide.\n\n\n<0x10009:0x00000400>Mon célestrier est parfaitement rétabli. Je te\ndois beaucoup.")
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
/*<760>*/ 		printf(/* textboxtype: 0, unk: 0, line: 155 */ "<0x10009:0x0000000b>Oh, <heroname>. Merci beaucoup pour\nton aide.\n\n\n<0x10009:0x00000400>Mon célestrier est parfaitement rétabli. Je te\ndois beaucoup.")
/*<761>*/ 		story_flags[1082 /* us: 805A9B53 0x01, jp: 805ACDD3 0x01 */] = true;
          	}
          }

          void entrypoint_115_12() {
/*< 28>*/ 	start()
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 673, 'param3': 32}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 29, 'param3': 24}
/*< 29>*/ 	printf(/* textboxtype: 0, unk: 1, line: 163 */ "Houuuuu...")
/*<106>*/ 	set_camera(3, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 674, 'param3': 17}
/*<674>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 106, 'next': 107, 'param3': 24}
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 164 */ "Houuuu... Il y a quelqu'un? S'il vous plaît,\naidez‐moi...")
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
/*<506>*/ 			printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Oublie tout ça... Adieu...")
/*<509>*/ 			story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          			flw_507:
/*<507>*/ 			scene_flags[0 'Skyloft'][65 /* 0x9 02 */] = false;
          		  case 1:
/*<677>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 505, 'param3': 24}
/*<505>*/ 			printf(/* textboxtype: 0, unk: 1, line: 166 */ "Ahhh... Du <color red<papier>coloroff>...! Tu m'as apporté du <color red<papier>coloroff>!\n\n\n\nJ'ouvre la porte... Allez, entre...")
/*<508>*/ 			story_flags[548 /* us: 805A9B17 0x20, jp: 805ACD97 0x20 */] = true;
/*<709>*/ 			story_flags[549 /* us: 805A9B17 0x40, jp: 805ACD97 0x40 */] = true;
          			goto flw_507
          		}
          	  case 1:
/*<675>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 105, 'next': 502, 'param3': 24}
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 165 */ "Houuuu... Du <color red<papier>coloroff>...\n\n\n\nS'il vous plaît... Aidez‐moi, quelqu'un! <color red<Il me\nfaut du>coloroff> <color red<papier>coloroff>...\n\n\n<color red<N'importe quel papier>coloroff>... Houuuu...")
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
/*<142>*/ 			printf(/* textboxtype: 0, unk: 0, line: 185 */ "<0x10009:0x00001b1b>Non, mais tu ne comprends rien! C'est pas\njuste du papier! C'est une <color red<lettre>coloroff>! Une lettre\nbien spéciale, tu sauras.\n\n<0x10009:0x00172500>Une... une lettre... d'amour! J'y ai mis tout\nmon cœur et toute mon âme!\n\n\n<0x10009:0x00171800>Et toi, tu voudrais l'utiliser comme un\nvulgaire papier brouillon? Jamais de la vie!")
/*<169>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 172, 'param3': 13}
/*<172>*/ 			wait_frames(30)
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 186 */ "Écoute‐moi bien! Tu dois donner cette lettre\nà la jolie <color blue<Grida>coloroff>, de la classe supérieure...\n\n\n<0x10009:0x00010c11>Tu sais qui je veux dire? Celle qui a un\n<color red<chapeau rond>coloroff>. Elle est tellement belle...\n\n\n<0x10009:0x00171800>Et ne la donne surtout pas à cette <color red<hurluberlue\ndans les toilettes>coloroff>! Jure‐le!")
/*<170>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 549, 'param3': 13}
/*<549>*/ 			wait_frames(45)
/*<168>*/ 			printf(/* textboxtype: 0, unk: 1, line: 187 */ "OK, j'te fais confiance. Et t'as pas intérêt\nà la lire! C'est-y clair?")
/*<710>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 165, 'param3': 24}
/*<165>*/ 			story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */] = true;
/*<166>*/ 			give_item(158 0x9E);
/*<164>*/ 			printf(/* textboxtype: 0, unk: 0, line: 188 */ "J'compte sur toi, <heroname>! Si\nt'accomplis ta mission, tu pourras te\ntenir avec moi.\n\nEuh... En passant... Merci...")
/*<550>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<139>*/ 			switch (zone_temp_flags[10 /* 0x0 04 */]) {
          			  case 0:
/*<160>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 108, 'param3': 13}
/*<108>*/ 				printf(/* textboxtype: 1, unk: 0, line: 183 */ "<0x10009:0x00000008>Hein? C'est quoi ton problème?\nPourquoi tu regardes vers les toilettes?")
/*<162>*/ 				{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 161, 'param3': 13}
/*<161>*/ 				printf(/* textboxtype: 0, unk: 1, line: 184 */ "Quoi? Y a quelqu'un la nuit qui demande\ndu... du papier?")
/*<143>*/ 				zone_temp_flags[11 /* 0x0 08 */] = true;
          			  case 1:
/*< 32>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 135, 'param3': 31}
/*<135>*/ 				make_actor_do_something(1, 0)
/*<155>*/ 				{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 4608, 'next': 34, 'param3': 13}
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "Bon... j'lui donne? Ou j'lui donne pas?")
/*<136>*/ 				make_actor_do_something(2, 0)
/*<672>*/ 				{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 4889, 'next': 35, 'param3': 13}
/*< 35>*/ 				printf(/* textboxtype: 0, unk: 1, line: 178 */ "Aaaaah! <0x30001:0x><heroname>, c'est toi!\nT'aurais pu me dire que t'étais là!\n\n\n<0x10009:0x00171800>J'étais en pleine réflexion... Tu me déranges,\nça se voit?\n\n\n[1-]Tu pensais à quoi?[2-]Besoin d'aide?")
/*<156>*/ 				{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': 3072, 'next': 37, 'param3': 13}
/*< 37>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					printf(/* textboxtype: 0, unk: 0, line: 179 */ "Quoi? Tu veux que je te raconte\nmes problèmes?\n\n\n<0x10009:0x0000001c>J'vois pas pourquoi j'en parlerais avec toi...\nMais bon, puisque tu m'le demandes...")
          					flw_157:
/*<157>*/ 					{'type': 'type3', 'subType': 4, 'param1': 23, 'param2': 6144, 'next': 39, 'param3': 13}
/*< 39>*/ 					printf(/* textboxtype: 0, unk: 1, line: 181 */ "Tu pourrais peut‐être m'aider... J'aime pas\nl'admettre, mais t'as l'air de savoir t'y\nprendre avec les femmes.\n\nBon... OK! <0x30001:0x><heroname>, j'ai un\nservice à te demander!")
/*<159>*/ 					{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5120, 'next': 171, 'param3': 13}
/*<171>*/ 					wait_frames(45)
/*<158>*/ 					printf(/* textboxtype: 0, unk: 0, line: 182 */ "Tu pourrais apporter ce <color red<papier >coloroff>à quelqu'un?\nC'est super important! Il doit être remis\nen mains propres!")
/*<140>*/ 					zone_temp_flags[10 /* 0x0 04 */] = true;
          				  case 1:
/*< 38>*/ 					printf(/* textboxtype: 1, unk: 0, line: 180 */ "Hein? De l'aide? De toi?\n\n\n\n<0x10009:0x0000001c>Mêle‐toi de tes oignons! Mais bon,\npuisque tu m'demandes...")
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
/*< 42>*/ 		printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Oublie tout ça... Adieu...")
/*< 55>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          		flw_53:
/*< 53>*/ 		story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */] = true;
          	  case 1:
/*<109>*/ 		set_camera(4, 0)
/*<137>*/ 		make_actor_do_something(0, 0)
/*<112>*/ 		wait_frames(45)
/*<111>*/ 		wait_frames(45)
          		goto flw_53
          	}
          }

          void entrypoint_115_16() {
/*< 43>*/ 	start()
/*<117>*/ 	switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          	  case 0:
/*< 44>*/ 		printf(/* textboxtype: 0, unk: 0, line: 167 */ "<0x10009:0x00000001>Oublie tout ça... Adieu...")
/*<138>*/ 		make_actor_do_something(1, 0)
/*< 45>*/ 		story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
          	  case 1:
/*<131>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 31}
/*<144>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 1, 'next': 154, 'param3': 13}
/*<154>*/ 		wait_frames(45)
/*< 46>*/ 		printf(/* textboxtype: 1, unk: 0, line: 168 */ "Arg... Du <color red<papier>coloroff>... Il me faut du <color red<papier>coloroff>...\n\n\n\nJe ne veux de mal à personne, <color red<il me faut juste\ndu papier>coloroff>!\n\n\n[1-]Donner la \nlettre[2]Garder la\nlettre")
/*< 47>*/ 		switch (choice(2)) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 0, unk: 0, line: 170 */ "<0x10009:0x000b0004>Quoi? On me donne du papier?\nMerci beaucoup!")
/*<146>*/ 			{'type': 'type3', 'subType': 4, 'param1': 7, 'param2': 0, 'next': 511, 'param3': 13}
/*<511>*/ 			wait_frames(45)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "Mais... On dirait une lettre...\nTu es sûr que je peux la prendre?\n[1-]Oui[2]Non")
/*< 50>*/ 			switch (choice(2)) {
          			  case 0:
/*<147>*/ 				{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 0, 'next': 711, 'param3': 13}
/*<711>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 109, 'next': 706, 'param3': 24}
/*<706>*/ 				make_actor_do_something(3, 0)
/*<517>*/ 				set_camera(8, 0)
/*<516>*/ 				wait_frames(30)
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 172 */ "<0x10009:0x00000002>Merci... Ça me sera bien utile...\n\n\n\nMais ne me demande pas ce que je vais en faire,\ntu vas me faire rougir...\n\n\nJ'espère te revoir bientôt, gentil jeune homme...")
/*<514>*/ 				make_actor_do_something(1, 0)
/*<513>*/ 				story_flags[551 /* us: 805A9B16 0x01, jp: 805ACD96 0x01 */] = true;
/*<512>*/ 				story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */] = true;
/*<554>*/ 				story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */] = true;
/*<515>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
          				flw_48:
/*< 48>*/ 				printf(/* textboxtype: 0, unk: 1, line: 169 */ "<0x10009:0x00050003>Argh... S'il te plaît... Du papier...")
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
/*<149>*/ 		printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x00000002>Ohhh... Mon amour... Je serai toujours à\ntes côtés... Hihihi...")
          	  case 1:
/*<824>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 527, 'param3': 31}
/*<527>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 152, 'param3': 32}
/*<152>*/ 		{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 526, 'param3': 13}
/*<526>*/ 		wait_frames(15)
/*<151>*/ 		printf(/* textboxtype: 0, unk: 0, line: 173 */ "<0x10009:0x00000004>Oh! Te revoilà, gentil jeune homme...")
/*<524>*/ 		set_camera(9, 0)
/*<525>*/ 		{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 356, 'next': 150, 'param3': 15}
/*<150>*/ 		printf(/* textboxtype: 1, unk: 0, line: 174 */ "<0x10009:0x00060002>Ravie de te revoir! Grâce à toi, j'ai rencontré\nmon prince charmant...\n\n\nOui, c'est bien lui...\n\n\n\n<0x10009:0x000c0000>Tout a commencé avec la lettre que tu\nm'as donnée...\n\n\n<0x10009:0x00060000>Sa belle prose a fait fondre mon cœur...")
/*<521>*/ 		printf(/* textboxtype: 0, unk: 1, line: 175 */ "<0x10009:0x00000002>Ahhh, je pense à lui jour et nuit...  Il a donné\nun souffle de vie à mon cœur flétri...")
/*<723>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 522, 'param3': 42}
/*<522>*/ 		give_gratitude_crystals();
/*<523>*/ 		set_camera(-1, 0)
/*<658>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 519, 'param3': 13}
/*<519>*/ 		printf(/* textboxtype: 0, unk: 0, line: 176 */ "<0x10009:0x00000002>Ohhh... Mon amour... Je serai toujours à\ntes côtés... Hihihi...")
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
/*<363>*/ 	printf(/* textboxtype: 0, unk: 1, line: 244 */ "C'est toi, l'auteur de la lettre, pas vrai?")
/*<366>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 364, 'param3': 16}
/*<364>*/ 	printf(/* textboxtype: 0, unk: 0, line: 245 */ "... Euh, oui...")
/*<622>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 367, 'param3': 13}
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 368, 'param3': 16}
/*<368>*/ 	printf(/* textboxtype: 1, unk: 0, line: 246 */ "<0x10009:0x14000009>Hihihi! Ça m'a beaucoup touchée. Merci!")
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 369, 'param3': 16}
/*<369>*/ 	printf(/* textboxtype: 0, unk: 1, line: 247 */ "<0x10009:0x05000011>Euh... de rien...")
/*<371>*/ 	set_camera(12, 0)
/*<375>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1301, 'param2': 3072, 'next': 373, 'param3': 13}
/*<373>*/ 	printf(/* textboxtype: 0, unk: 0, line: 248 */ "Et... Euh... Qu'est-ce que tu a décidé\nen fin de compte?")
/*<376>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 5, 'next': 374, 'param3': 16}
/*<374>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5131, 'param2': -256, 'next': 372, 'param3': 13}
/*<372>*/ 	printf(/* textboxtype: 1, unk: 0, line: 249 */ "<0x10009:0x14000012>Euh... Ce que j'en pense? Euh...")
/*<377>*/ 	set_camera(13, 0)
/*<623>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 380, 'param3': 13}
/*<380>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 274, 'next': 601, 'param3': 15}
/*<601>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 381, 'param3': 16}
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1288, 'param2': 3328, 'next': 378, 'param3': 13}
/*<378>*/ 	printf(/* textboxtype: 0, unk: 1, line: 250 */ "<0x10009:0x05002519>S'il te plaît! Sors avec moi... S'il te plaît!")
/*<382>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 256, 'next': 602, 'param3': 13}
/*<602>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 551, 'param3': 50}
/*<551>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 3074, 'next': 379, 'param3': 13}
/*<379>*/ 	printf(/* textboxtype: 0, unk: 0, line: 251 */ "Hé! Minute papillon!")
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 18, 'next': 384, 'param3': 17}
/*<384>*/ 	set_camera(14, 0)
/*<385>*/ 	wait_frames(45)
/*<386>*/ 	set_camera(19, 0)
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 3072, 'next': 387, 'param3': 13}
/*<387>*/ 	printf(/* textboxtype: 1, unk: 0, line: 252 */ "Non, Grida, sors avec... moi!\nJe veux être ton amoureux!")
/*<391>*/ 	set_camera(15, 0)
/*<648>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4609, 'param2': 256, 'next': 624, 'param3': 13}
/*<624>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': -256, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 389, 'param3': 50}
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 6912, 'next': 390, 'param3': 13}
/*<390>*/ 	printf(/* textboxtype: 0, unk: 1, line: 253 */ "<0x10009:0x05001b09>Qu‐quoi? Mais tu sors d'où, toi?")
/*<604>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 99, 'next': 392, 'param3': 50}
/*<392>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2304, 'next': 393, 'param3': 13}
/*<393>*/ 	printf(/* textboxtype: 0, unk: 0, line: 254 */ "Hihi! Euh...<0x10009:0x14000900> Je choisis... Kiko!")
/*<649>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 99, 'next': 650, 'param3': 50}
/*<650>*/ 	printf(/* textboxtype: 1, unk: 0, line: 255 */ "<0x10009:0x05150c10>Ah! Je le savais! J'ai bien vu comment\nGrida me regardait! Euh, attends...")
/*<394>*/ 	{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 20, 'next': 629, 'param3': 17}
/*<629>*/ 	printf(/* textboxtype: 0, unk: 1, line: 256 */ "<0x10009:0x05111d1d>Comment ça, « Kiko »?")
/*<630>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1281, 'param2': 0, 'next': 620, 'param3': 13}
/*<620>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 274, 'next': 395, 'param3': 15}
/*<395>*/ 	set_camera(14, 0)
/*<628>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 397, 'param3': 17}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 18, 'next': 396, 'param3': 14}
/*<396>*/ 	wait_frames(10)
/*<605>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 398, 'param3': 50}
/*<398>*/ 	printf(/* textboxtype: 0, unk: 0, line: 257 */ "<0x10009:0x1201ff00>Vraiment? Tu es sûre que je serai à la hauteur?")
/*<606>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 399, 'param3': 50}
/*<399>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5140, 'param2': 2323, 'next': 400, 'param3': 13}
/*<400>*/ 	printf(/* textboxtype: 1, unk: 0, line: 258 */ "Oh oui! <0x10009:0x14000900>J'suis tellement heureuse! Merci!")
/*<632>*/ 	set_camera(16, 0)
/*<636>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5121, 'param2': 256, 'next': 635, 'param3': 13}
/*<635>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1306, 'param2': 7936, 'next': 631, 'param3': 13}
/*<631>*/ 	printf(/* textboxtype: 0, unk: 1, line: 259 */ "<0x10009:0x05001d17>Non, mais j'hallucine!!!")
/*<634>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 7936, 'next': 633, 'param3': 13}
/*<633>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 5, 'next': 639, 'param3': 14}
/*<639>*/ 	wait_frames(1)
/*<638>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 261, 'next': 637, 'param3': 15}
/*<637>*/ 	printf(/* textboxtype: 0, unk: 0, line: 260 */ "<0x10009:0x05000018>Aaaaargh...!!!")
/*<626>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 99, 'next': 625, 'param3': 50}
/*<625>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 5, 'next': 407, 'param3': 17}
/*<407>*/ 	set_camera(17, 0)
/*<619>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1293, 'param2': 1024, 'next': 618, 'param3': 13}
/*<618>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 5, 'next': 552, 'param3': 14}
/*<552>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4625, 'param2': 1024, 'next': 401, 'param3': 13}
/*<401>*/ 	printf(/* textboxtype: 1, unk: 0, line: 261 */ "<0x10009:0x12000001><0x30001:0x><heroname>!")
/*<402>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 100, 'next': 403, 'param3': 16}
/*<403>*/ 	set_camera(18, 0)
/*<643>*/ 	{'type': 'type3', 'subType': 4, 'param1': 4616, 'param2': 1024, 'next': 640, 'param3': 13}
/*<640>*/ 	printf(/* textboxtype: 0, unk: 1, line: 262 */ "C'est quand tu m'as parlé de la lettre que j'en\nai pris conscience...\n\n\nJ'ai réalisé que... j'étais amoureux d'elle.\n\n\n\n<0x10009:0x12090c00>Je ne veux surtout pas la perdre.\n\n\n\n<0x10009:0x12010400>Si tu ne m'avais rien dit, il ne se serait jamais\nrien passé.\n\n\n<0x10009:0x1208000b>Merci beaucoup! Je n'oublierai jamais ce que\ntu as fait pour moi!")
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
/*<540>*/ 				printf(/* textboxtype: 1, unk: 0, line: 204 */ "<0x10009:0x001b1f1b>Depuis que tu as donné cette lettre, j'arrive\nplus à dormir et j'fais tout le temps\ndes cauchemars!\n\nQu'est‐ce qui m'arrive? Peut‐être que ce lit est\nhanté! Peut‐être que c'est l'esprit d'<color blue<Hergo >coloroff>qui\nme harcèle! Il faut que tu m'aides,\n<heroname>!")
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 0, unk: 0, line: 203 */ "<0x10009:0x001b1f17>Veux tu me dire ce que tu veux,\n<heroname>? J'ai pas oublié le coup\nque tu m'as fait, tu sais.\n\nDepuis que tu as donné cette lettre, j'arrive\nplus à dormir et j'fais tout le temps\ndes cauchemars!\n\nQu'est‐ce qui m'arrive? Peut‐être que ce lit est\nhanté! Peut‐être que c'est l'esprit d'<color blue<Hergo >coloroff>qui\nme harcèle!\n\n<0x10009:0x001c1a18>Il faut que tu m'aides, <heroname>!")
/*<539>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			}
          		  case 1:
/*<569>*/ 			{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7936, 'next': 102, 'param3': 13}
/*<102>*/ 			printf(/* textboxtype: 0, unk: 1, line: 205 */ "<0x10009:0x00000017>Snif... Tout est fini...\n\n\n\n<0x10009:0x001c1f00>Qu'est‐ce que tu veux, <heroname>?\nT'es venu te moquer de moi?\nLaisse‐moi tranquille!")
          		}
          	  case 1:
/*<825>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 685, 'param3': 31}
/*<685>*/ 		printf(/* textboxtype: 0, unk: 1, line: 202 */ "<0x10009:0x001b1f17>Encore toi, <heroname>? Comment\nt'as pu me faire ça?\n\n\n<0x10009:0x001c1f00>J'sais pas qui c'est, dans les toilettes, mais elle\na lu ma lettre... C'est pas possible! Pas possible!\n\n\nJ'en reviens pas que tu la lui aies donnée...")
          	}
          }

