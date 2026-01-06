          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	wait_frames(1)
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Salut ! Bienvenue à la consigne. Tu peux me\nlaisser des objets dont tu ne te sers pas, et\nvenir les reprendre quand tu veux.\n\nQuelque chose à me confier ?\n[1-]Oui[2]Non")
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
/*< 44>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>Mais mon chéri, je veille déjà sur beaucoup de\ntes affaires !\n\n\nMa consigne est comme mon cœur, prête à\nexploser !\n\n\nTu pourrais me <color red<vendre>coloroff> quelques objets pour\nfaire de la place...")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a0c>Prends tout ton temps, mon chéri !")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000017>C'est pas vrai ! La consigne déborde déjà de tes\naffaires !\n\n\nTu veux pas me donner ton cœur, mais pour\nce qui est de me refiler ta camelote, pas de\nproblème !\n\nC'est bon, je plaisante, mais tu pourrais me\n<color red<vendre>coloroff> quelques objets pour faire de la place...")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000013>Bien, vas‐y.")
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
/*< 93>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000015>C'est mon travail de m'occuper des affaires des\ngens, mais là tu y vas fort, j'ai trop d'affaires à\ntoi...\n\nTu pourrais me <color red<vendre>coloroff> quelques objets pour\nfaire de la place...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000015>Alors fais comme chez toi !")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000004>C'est mon travail de m'occuper des affaires des\ngens, mais là tu y vas fort, j'ai trop d'affaires à\ntoi !\n\nTu pourrais me <color red<vendre>coloroff> quelques objets pour\nfaire de la place...")
          							goto flw_5
          						  case 1:
/*<  2>*/ 							printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000003>Eh bien, vas‐y.")
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
/*< 52>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Oh, mais tu n'as rien dans ta sacoche, mon\ngentil canard !\n\n\nNe t'inquiète pas, je suis sûre que tu reviendras\nles bras chargés la prochaine fois !")
          						  case 1:
/*< 55>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>On dirait bien que tu n'as rien sur toi.\n\n\n\nReviens me voir quand tu auras des choses\npour moi.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Oh, ben on dirait que tu n'as rien à me donner...\n\n\n\nReviens quand tu auras des affaires à me\nconfier !")
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
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000e150c>Veux‐tu bien arrêter de me faire marcher\ncomme ça ! Coquin !")
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000013>Tu es juste venu me voir, alors... C'est vrai que\nj'embellis de jour en jour. Faut croire que tu\nn'arrives pas à me sortir de ta tête, hein !")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000017>Hé oh ! Pourquoi tu viens me voir si tu n'as\nrien à me donner ?")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000002>Hé ! Pourquoi tu viens me voir si tu n'as rien\nà me donner ?")
          					  case 1:
/*<  3>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>OK, tu m'as fait perdre mon temps, mais on va\ndire que ça ira pour cette fois.")
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
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000007>Impossible, mon lutin d'amour !\n\n\n\nLa consigne est pleine de tes affaires... Je t'en\nprie, mon ange, tu veux bien me <color red<revendre\n>coloroff>certaines de tes babioles ?")
          				  case 1:
/*< 68>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b1709>J'attends ta prochaine visite !")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Tu plaisantes, j'espère ? C'est à peine si je peux\nencore faire un pas avec toutes tes affaires.\n\n\nJe n'ai plus de place. Tu vas devoir me <color red<revendre\n>coloroff>des trucs.")
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000015>N'hésite pas à revenir, ma beauté t'éblouira\nchaque jour davantage !")
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
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000015>Tu as déjà déposé trop d'objets !\n\n\n\nJe n'ai plus de place, désolée. <color red<Vends‐moi >coloroff>donc\nquelques affaires pour faire de la place.")
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000004>J'ai plus de place, tu as rempli la consigne à toi\ntout seul !\n\n\nDésolée, va falloir faire du vide... Je te demande\njuste de me <color red<vendre>coloroff> ce dont tu n'as plus besoin...\nAllez, quoi !")
          			}
          		  case 1:
/*< 88>*/ 			switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          			  case 0:
/*< 89>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000006>Merci bien...")
          			  case 1:
/*<  7>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>En te remerciant...")
          			}
          		}
          	}
          }

          void entrypoint_112_03() {
/*<  8>*/ 	start()
/*< 19>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 36, 'param3': 12}
/*< 36>*/ 	switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Je te propose <color red<<color red<<color red<<numeric arg0 0><color red<<color red< rubis>coloroff> pour ça.\n\n\n\nÇa te va ?\n[1-]Tout à fait[2]Ben, euh...")
          		flw_11:
/*< 11>*/ 		switch (choice(2)) {
          		  case 0:
/*< 18>*/ 			make_actor_do_something(1, 0)
/*< 20>*/ 			wait_frames(30)
/*< 39>*/ 			switch (story_flags[630 /* us: 805A9B1A 0x02, jp: 805ACD9A 0x02 */]) {
          			  case 0:
/*< 77>*/ 				switch (story_flags[635 /* us: 805A9B1A 0x20, jp: 805ACD9A 0x20 */]) {
          				  case 0:
/*< 78>*/ 					switch (story_flags[636 /* us: 805A9B1A 0x40, jp: 805ACD9A 0x40 */]) {
          					  case 0:
          						flw_40:
/*< 40>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>Merci ! Si tu as autre chose à mettre à la\nconsigne, n'hésite pas, surtout ! D'ailleurs,\nrien ne presse, tu peux rester encore un peu...")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Merci. Autre chose ?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000003>Merci bien. Je peux faire autre chose pour toi ?")
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
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000012>Quoi ? Tu ne veux plus ? Ah, ça ! T'as bien\nraison, mon lapin vert ! Ça ne vaut pas le coup,\nje suis bien d'accord !")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000014>Tiens donc, tu veux plus ? Je vois, t'as changé\nd'avis, on dirait. Je devrais pas être surprise,\nc'est pas la première fois...")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "Ah ? Tu as changé d'avis ? Dommage.")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Hmm, je t'en donne <color red<<color red<<numeric arg0 0><color red< rubis>coloroff>.\n\n\n\nÇa te va ?\n[1-]Tout à fait[2]Euh, ben...")
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
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Oh, mais tu n'as rien dans ta sacoche, mon\ngentil canard !\n\n\nNe t'inquiète pas, je suis sûre que tu reviendras\nles bras chargés la prochaine fois !")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>On dirait bien que tu n'as rien sur toi.\n\n\n\nReviens me voir quand tu auras des choses\npour moi.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Oh, ben on dirait que tu n'as rien à me donner...\n\n\n\nReviens quand tu auras des affaires à me\nconfier !")
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
/*< 33>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000008>Oh, mon petit canard en sucre, tu veux faire un\npeu de tri, c'est ça ?\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois !")
          				flw_23:
/*< 23>*/ 				story_flags[300 /* us: 805A9AFD 0x40, jp: 805ACD7D 0x40 */] = true;
/*< 24>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 86>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000004>Oh, tu veux faire un peu de tri...\n\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois.")
          				goto flw_23
          			}
          		  case 1:
          			goto flw_33
          		}
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000004>Oh, tu veux faire un peu de tri, c'est ça ?\n\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

