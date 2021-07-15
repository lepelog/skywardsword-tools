          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 29, 'param3': 6}
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut! Bienvenue à la consigne.\nTu veux me laisser des objets?\nParfait. Tu veux venir les reprendre?\nC'est beau.\nT'as quelque chose à me confier?\n[1]Oui[2-]Non")
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
/*< 44>*/ 								printf("\x0E\x01\x09\x04\x00\x0BMon pauvre pit. Ça fait déjà beaucoup\nde choses que tu me laisses à surveiller.\n\n\nMa consigne est comme mon c\x153ur,\nprête à exploser!\n\n\nIl faut que tu te débarrasses de\nquelques affaires pour faire de la\nplace. Tu pourrais en <r<échanger>>,\npeut-être?")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf("\x0E\x01\x09\x04\x08\xA0CMerci, et bonne journée, mon pit!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf("\x0E\x01\x09\x04\x00\x17C'est confirmé : je n'ai plus\nde place pour tes affaires!\n\n\nTu veux pas me confier ton c\x153ur,\nmais pour ce qui est de me refiler\ntes cossins, pas de problème!\nQue tu es romantique, va!\nBon, je plaisante, mais il faut\ndébarrasser un peu. Tu sais,\ntu pourrais <r<échanger>> quelques\nobjets pour faire de la place...")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf("\x0E\x01\x09\x04\x00\x13Allez. Donne.")
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
/*< 93>*/ 							printf("\x0E\x01\x09\x04\x00\x15Écoute. Je veux bien garder de tes\naffaires, mais trop c'est trop.\nJe manque d'espace, c'est clair!\n\nPourquoi t'<r<échangerais>> pas quelques\nobjets pour faire de la place...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x15Parfait. C'est quoi?")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf("\x0E\x01\x09\x04\x00\x04Je voudrais bien prendre encore de\ntes choses, mais là, tu exagères. Je\nn'ai plus de place!\n\nTu pourrais toujours <r<échanger\n>>quelques objets pour faire de la\nplace... C'est juste une idée.")
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
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\nOh, mais tu n'as rien dans ta\nsacoche, mon beau pit!\n\n\nNe t'inquiète pas, je suis sûre que\ntu reviendras les bras chargés la\nprochaine fois!")
          						  case 1:
/*< 55>*/ 							printf("\x0E\x01\x09\x04\x00\x04On dirait bien que tu n'as\nrien sur toi.\n\n\nReviens me voir quand tu auras des\nchoses pour moi. Beuh bye.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf("\x0E\x01\x09\x04\x00\x04Oh, bien on dirait que tu n'as rien\nà me donner...\n\n\nReviens quand tu auras des\naffaires à me confier pour vrai.")
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
/*< 47>*/ 						printf("\x0E\x01\x09\x04\x0E\x150CEh, mon pit. Ça suffit comme ça!\nVu?")
          					  case 1:
/*< 58>*/ 						printf("\x0E\x01\x09\x04\x00\x13Tu es venu juste pour me voir?\nC'est vrai que j'embellis de jour en\njour. Tu n'arrêtes pas de penser à\nmoi, c'est ça, hein?")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf("\x0E\x01\x09\x04\x00\x17Hé oh! Arrête de me déranger\nsi tu n'as rien à me donner.\nCompris?")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf("\x0E\x01\x09\x04\x00\x02Hé! Ne viens pas me voir si\ntu n'as rien à me donner?\nEntendu?")
          					  case 1:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x00\x02Ah, bon. C'est beau. Remarque que\nje n'aime pas perdre mon temps. OK?")
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
/*< 67>*/ 					printf("\x0E\x01\x09\x04\x00\x07Impossible, mon pit d'amour!\n\n\n\nLa consigne est pleine de tes affaires...\nJe t'en prie, veux-tu bien <r<échanger>>\ncertaines de tes babioles? Aide-moi\nun peu, quand même!")
          				  case 1:
/*< 68>*/ 					printf("\x0E\x01\x09\x04\x0B\x1709J'attends ta prochaine visite!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x00\x04Tu veux rire? J'ai de la misère\nà bouger ici, tellement c'est\nrempli de tes affaires.\n\nJe n'ai plus de place. C'est clair.\nTu vas devoir <r<échanger >>des choses\nou t'en débarrasser. Un des deux.")
          				  case 1:
/*< 73>*/ 					printf("\x0E\x01\x09\x04\x00\x15N'hésite pas à revenir, ma beauté\nt'éblouira un peu plus à chaque fois!")
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
/*< 95>*/ 				printf("\x0E\x01\x09\x04\x00\x15Tu as déjà déposé trop d'objets!\n\n\n\nJe n'ai plus de place, désolée. \n<r<Échange >>donc quelques affaires\npour faire de la place.")
          			  case 1:
/*< 26>*/ 				printf("\x0E\x01\x09\x04\x00\x04Je n'ai plus de place, tu as rempli\nla consigne à toi tout seul!\n\n\nDésolée, va falloir faire du ménage. \nJe te demande juste d'<r<échanger>> \nce dont tu n'as plus besoin... Ce\nn'est pourtant pas compliqué.")
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
/*< 35>*/ 		printf("Je te propose <r<<r<<numeric arg0><r< rubis>> pour ça.\n\n\n\nÇa te va?\n[1]Tout à fait[2-]Bien, euh...")
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
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x00\x08Merci! Si tu as autre chose à mettre\nà la consigne, n'hésite pas, surtout!\nMais tu sais, rien ne presse, tu peux\nrester encore un peu...")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Merci.\nAutre chose?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\x00\x03Merci bien.\nJe peux faire autre chose pour toi?")
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
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x12Quoi? Tu ne veux plus? \nAh, ça! Tu fais bien de t'en\ndéfaire, mon beau pit vert!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf("\x0E\x01\x09\x04\x00\x14Tiens donc, tu veux plus?\nJe vois, t'as changé d'idée, on dirait.\nJe devrais pas être surprise, ce n'est\npas la première fois, ça m'a l'air.")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf("Ah? Tu as changé d'idée?\nC'est comme tu veux...")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf("Hmm, pour ça, je te donne <r<<r<<numeric arg0><r< rubis>>.\n\n\n\nÇa te va?\n[1]Tout à fait[2-]Euh, bien...")
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
/*< 82>*/ 				printf("\x0E\x01\x09\x04\x00\nOh, mais tu n'as rien dans ta\nsacoche, mon beau pit!\n\n\nNe t'inquiète pas, je suis sûre que\ntu reviendras les bras chargés la\nprochaine fois!")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x04On dirait bien que tu n'as\nrien sur toi.\n\n\nReviens me voir quand tu auras des\nchoses pour moi. Beuh bye.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh, bien on dirait que tu n'as rien\nà me donner...\n\n\nReviens quand tu auras des\naffaires à me confier pour vrai.")
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
/*< 33>*/ 				printf("\x0E\x01\x09\x04\x00\x08Oh, mon pit adoré, tu veux mettre de\nl'ordre dans tes affaires, c'est ça?\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes\nflèches dans le même carquois!")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf("\x0E\x01\x09\x04\x00\x04Oh, tu veux faire un peu\nde tri...\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes\nflèches dans le même carquois.")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf("\x0E\x01\x09\x04\x00\x04Oh, tu veux organiser tes affaires,\nc'est ça?\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes\nflèches dans le même carquois.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

