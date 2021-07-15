          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 29, 'param3': 6}
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut ! Bienvenue à la consigne. Tu peux me\nlaisser des objets dont tu ne te sers pas, et\nvenir les reprendre quand tu veux.\n\nQuelque chose à me confier ?\n[1]Oui[2-]Non")
          		flw_4:
/*<  4>*/ 		switch (choice(2)) {
          		  case 0:
/*< 16>*/ 			switch (context_related2(0)) {
          			  case 0:
/*< 42>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 61>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 62>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_43:
/*< 43>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 44>*/ 								printf("\x0E\x01\x09\x04\x00\x0BMais mon chéri, je veille déjà sur beaucoup de\ntes affaires !\n\n\nMa consigne est comme mon c\x153ur, prête à\nexploser !\n\n\nTu pourrais me <r<vendre>> quelques objets pour\nfaire de la place...")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x09\x04\x08\xA0CPrends tout ton temps, mon chéri !")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x17C'est pas vrai ! La consigne déborde déjà de tes\naffaires !\n\n\nTu veux pas me donner ton c\x153ur, mais pour\nce qui est de me refiler ta camelote, pas de\nproblème !\n\nC'est bon, je plaisante, mais tu pourrais me\n<r<vendre>> quelques objets pour faire de la place...")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf("\x0E\x01\x09\x04\x00\x13Bien, vas\x2010y.")
          								goto flw_5
          							}
          						}
          					  case 1:
          						goto flw_43
          					}
          				  case 1:
/*< 90>*/ 					switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          					  case 0:
/*< 91>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 93>*/ 							printf("\x0E\x01\x09\x04\x00\x15C'est mon travail de m'occuper des affaires des\ngens, mais là tu y vas fort, j'ai trop d'affaires à\ntoi...\n\nTu pourrais me <r<vendre>> quelques objets pour\nfaire de la place...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x15Alors fais comme chez toi !")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x00\x04C'est mon travail de m'occuper des affaires des\ngens, mais là tu y vas fort, j'ai trop d'affaires à\ntoi !\n\nTu pourrais me <r<vendre>> quelques objets pour\nfaire de la place...")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf("\x0E\x01\x09\x04\x00\x03Eh bien, vas\x2010y.")
          							goto flw_5
          						}
          					}
          				}
          			  case 1:
/*< 51>*/ 				switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          				  case 0:
/*< 59>*/ 					switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          					  case 0:
/*< 60>*/ 						switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\nOh, mais tu n'as rien dans ta sacoche, mon\ngentil canard !\n\n\nNe t'inquiète pas, je suis sûre que tu reviendras\nles bras chargés la prochaine fois !")
          						  case 1:
/*< 55>*/ 							printf("\x0E\x01\x09\x04\x00\x04On dirait bien que tu n'as rien sur toi.\n\n\n\nReviens me voir quand tu auras des choses\npour moi.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x04Oh, ben on dirait que tu n'as rien à me donner...\n\n\n\nReviens quand tu auras des affaires à me\nconfier !")
          				}
          			}
          		  case 1:
/*< 50>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 56>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 57>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_47:
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x0E\x150CVeux\x2010tu bien arrêter de me faire marcher\ncomme ça ! Coquin !")
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x00\x13Tu es juste venu me voir, alors... C'est vrai que\nj'embellis de jour en jour. Faut croire que tu\nn'arrives pas à me sortir de ta tête, hein !")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x00\x17Hé oh ! Pourquoi tu viens me voir si tu n'as\nrien à me donner ?")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf("\x0E\x01\x09\x04\x00\x02Hé ! Pourquoi tu viens me voir si tu n'as rien\nà me donner ?")
          					  case 1:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x00\x02OK, tu m'as fait perdre mon temps, mais on va\ndire que ça ira pour cette fois.")
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_112_02() {
/*<  6>*/ 	start()
/*< 41>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 69>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 70>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_66:
/*< 66>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x00\x07Impossible, mon lutin d'amour !\n\n\n\nLa consigne est pleine de tes affaires... Je t'en\nprie, mon ange, tu veux bien me <r<revendre\n>>certaines de tes babioles ?")
          				  case 1:
/*< 68>*/ 					printf("\x0E\x01\x09\x04\x0B\x1709J'attends ta prochaine visite !")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x00\x04Tu plaisantes, j'espère ? C'est à peine si je peux\nencore faire un pas avec toutes tes affaires.\n\n\nJe n'ai plus de place. Tu vas devoir me <r<revendre\n>>des trucs.")
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x15N'hésite pas à revenir, ma beauté t'éblouira\nchaque jour davantage !")
          				}
          			}
          		  case 1:
          			goto flw_66
          		}
          	  case 1:
/*< 25>*/ 		switch (is_item_check_full()) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x00\x15Tu as déjà déposé trop d'objets !\n\n\n\nJe n'ai plus de place, désolée. <r<Vends\x2010moi >>donc\nquelques affaires pour faire de la place.")
          			  case 1:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x00\x04J'ai plus de place, tu as rempli la consigne à toi\ntout seul !\n\n\nDésolée, va falloir faire du vide... Je te demande\njuste de me <r<vendre>> ce dont tu n'as plus besoin...\nAllez, quoi !")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf("\x0E\x01\x09\x04\x00\x06Merci bien...")
          			  case 1:
/*<  7>*/ 				printf("\x0E\x01\x09\x04\x00\x03En te remerciant...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf("Je te propose <r<<r<<r<<numeric arg0><r<<r< rubis>> pour ça.\n\n\n\nÇa te va ?\n[1]Tout à fait[2-]Ben, euh...")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 39, 'param3': 6}
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x00\x08Merci ! Si tu as autre chose à mettre à la\nconsigne, n'hésite pas, surtout ! D'ailleurs,\nrien ne presse, tu peux rester encore un peu...")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Merci. Autre chose ?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\x03Merci bien. Je peux faire autre chose pour toi ?")
          				goto flw_53
          			}
          		  case 1:
/*< 37>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 74>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 75>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_38:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x12Quoi ? Tu ne veux plus ? Ah, ça ! T'as bien\nraison, mon lapin vert ! Ça ne vaut pas le coup,\nje suis bien d'accord !")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf("\x0E\x01\x09\x04\x00\x14Tiens donc, tu veux plus ? Je vois, t'as changé\nd'avis, on dirait. Je devrais pas être surprise,\nc'est pas la première fois...")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf("Ah ? Tu as changé d'avis ? Dommage.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf("Hmm, je t'en donne <r<<r<<numeric arg0><r< rubis>>.\n\n\n\nÇa te va ?\n[1]Tout à fait[2-]Euh, ben...")
          		goto flw_11
          	}
          }

          void entrypoint_112_04() {
/*< 14>*/ 	start()
/*< 34>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 80>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 81>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_82:
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\nOh, mais tu n'as rien dans ta sacoche, mon\ngentil canard !\n\n\nNe t'inquiète pas, je suis sûre que tu reviendras\nles bras chargés la prochaine fois !")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x04On dirait bien que tu n'as rien sur toi.\n\n\n\nReviens me voir quand tu auras des choses\npour moi.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh, ben on dirait que tu n'as rien à me donner...\n\n\n\nReviens quand tu auras des affaires à me\nconfier !")
          	}
          }

          void entrypoint_112_05() {
/*< 21>*/ 	start()
/*< 32>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 84>*/ 		switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          		  case 0:
/*< 85>*/ 			switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          			  case 0:
          				flw_33:
/*< 33>*/ 				printf("\x0E\x01\x09\x04\x00\x08Oh, mon petit canard en sucre, tu veux faire un\npeu de tri, c'est ça ?\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois !")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oh, tu veux faire un peu de tri...\n\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois.")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh, tu veux faire un peu de tri, c'est ça ?\n\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

