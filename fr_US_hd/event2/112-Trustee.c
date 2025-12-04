          void entrypoint_112_01() {
          	start()
/*< 54>*/ 	wait_frames(1)
/*< 29>*/ 	switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          	  case 0:
/*< 30>*/ 		entrypoint_123_06();
          	  case 1:
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Salut! Bienvenue à la consigne. Tu veux me\nlaisser des objets? Parfait. Tu veux venir les\nreprendre? C'est beau.\n\nT'as quelque chose à me confier?\n[1-]Oui[2]Non")
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
/*< 44>*/ 								printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x0000000b>Mon pauvre pit. Ça fait déjà beaucoup de\nchoses que tu me laisses à surveiller.\n\n\nMa consigne est comme mon cœur, prête\nà exploser!\n\n\nIl faut que tu te débarrasses de quelques\naffaires pour faire de la place. Tu\npourrais en <color red<échanger>coloroff>, peut-être?")
          								flw_5:
/*<  5>*/ 								make_actor_do_something(0, 0)
          							  case 1:
/*< 45>*/ 								printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00080a0c>Merci, et bonne journée, mon pit!")
          								goto flw_5
          							}
          						  case 1:
/*< 63>*/ 							switch (is_item_check_full()) {
          							  case 0:
/*< 64>*/ 								printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000017>C'est confirmé : je n'ai plus de place pour\ntes affaires!\n\n\nTu veux pas me confier ton cœur, mais pour ce\nqui est de me refiler tes cossins, pas de\nproblème! Que tu es romantique, va!\n\nBon, je plaisante, mais il faut débarrasser un\npeu. Tu sais, tu pourrais <color red<échanger >coloroff>quelques\nobjets pour faire de la place...")
          								goto flw_5
          							  case 1:
/*< 65>*/ 								printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00000013>Allez. Donne.")
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
/*< 93>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000015>Écoute. Je veux bien garder de tes affaires,\nmais trop c'est trop. Je manque d'espace,\nc'est clair!\n\nPourquoi t'<color red<échangerais>coloroff> pas quelques objets\npour faire de la place...")
          							goto flw_5
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000015>Parfait. C'est quoi?")
          							goto flw_5
          						}
          					  case 1:
/*< 27>*/ 						switch (is_item_check_full()) {
          						  case 0:
/*< 28>*/ 							printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00000004>Je voudrais bien prendre encore de tes choses,\nmais là, tu exagères. Je n'ai plus de place!\n\n\nTu pourrais toujours <color red<échanger >coloroff>quelques\nobjets pour faire de la place... C'est juste\nune idée.")
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
/*< 52>*/ 							printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Oh, mais tu n'as rien dans ta sacoche, mon\nbeau pit!\n\n\nNe t'inquiète pas, je suis sûre que tu\nreviendras les bras chargés la prochaine fois!")
          						  case 1:
/*< 55>*/ 							printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>On dirait bien que tu n'as rien sur toi.\n\n\n\nReviens me voir quand tu auras des choses\npour moi. Beuh bye.")
          						}
          					  case 1:
          						goto flw_52
          					}
          				  case 1:
/*< 17>*/ 					printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Oh, bien on dirait que tu n'as rien à\nme donner...\n\n\nReviens quand tu auras des affaires à me\nconfier pour vrai.")
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
/*< 47>*/ 						printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x000e150c>Eh, mon pit. Ça suffit comme ça! Vu?")
          					  case 1:
/*< 58>*/ 						printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00000013>Tu es venu juste pour me voir? C'est vrai que\nj'embellis de jour en jour. Tu n'arrêtes pas de\npenser à moi, c'est ça, hein?")
          					}
          				  case 1:
          					goto flw_47
          				}
          			  case 1:
/*< 49>*/ 				switch (story_flags[629 /* us: 805A9B1A 0x01, jp: 805ACD9A 0x01 */]) {
          				  case 0:
/*< 46>*/ 					printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000017>Hé oh! Arrête de me déranger si tu n'as\nrien à me donner. Compris?")
          				  case 1:
/*< 48>*/ 					switch (story_flags[628 /* us: 805A9B1B 0x80, jp: 805ACD9B 0x80 */]) {
          					  case 0:
/*< 87>*/ 						printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000002>Hé! Ne viens pas me voir si tu n'as rien à\nme donner? Entendu?")
          					  case 1:
/*<  3>*/ 						printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>Ah, bon. C'est beau. Remarque que je n'aime\npas perdre mon temps. OK?")
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
/*< 67>*/ 					printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000007>Impossible, mon pit d'amour!\n\n\n\nLa consigne est pleine de tes affaires... Je t'en\nprie, veux-tu bien <color red<échanger >coloroff>certaines de tes\nbabioles? Aide-moi un peu, quand même!")
          				  case 1:
/*< 68>*/ 					printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x000b1709>J'attends ta prochaine visite!")
          				}
          			  case 1:
/*< 71>*/ 				switch (is_item_check_full()) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000004>Tu veux rire? J'ai de la misère à bouger ici,\ntellement c'est rempli de tes affaires.\n\n\nJe n'ai plus de place. C'est clair. Tu vas\ndevoir <color red<échanger >coloroff>des choses ou t'en\ndébarrasser. Un des deux.")
          				  case 1:
/*< 73>*/ 					printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000015>N'hésite pas à revenir, ma beauté t'éblouira\nun peu plus à chaque fois!")
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
/*< 95>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000015>Tu as déjà déposé trop d'objets!\n\n\n\nJe n'ai plus de place, désolée. <color red<Échange >coloroff>donc\nquelques affaires pour faire de la place.")
          			  case 1:
/*< 26>*/ 				printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000004>Je n'ai plus de place, tu as rempli la consigne\nà toi tout seul!\n\n\nDésolée, va falloir faire du ménage. Je te\ndemande juste d'<color red<échanger >coloroff>ce dont tu n'as\nplus besoin... Ce n'est pourtant pas compliqué.")
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
/*< 35>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Je te propose <color red<<color red<<numeric arg0 0><color red< rubis>coloroff> pour ça.\n\n\n\nÇa te va?\n[1-]Tout à fait[2]Bien, euh...")
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
/*< 40>*/ 						printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>Merci! Si tu as autre chose à mettre à la\nconsigne, n'hésite pas, surtout! Mais tu sais,\nrien ne presse, tu peux rester encore un peu...")
          						flw_53:
/*< 53>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 						make_actor_do_something(0, 0)
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000003>Merci. Autre chose?")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_40
          				}
          			  case 1:
/*< 10>*/ 				printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000003>Merci bien. Je peux faire autre chose pour toi?")
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
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000012>Quoi? Tu ne veux plus? Ah, ça! Tu fais\nbien de t'en défaire, mon beau pit vert!")
          						goto flw_53
          					  case 1:
/*< 76>*/ 						printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000014>Tiens donc, tu veux plus? Je vois, t'as changé\nd'idée, on dirait. Je devrais pas être surprise,\nce n'est pas la première fois, ça m'a l'air.")
          						goto flw_53
          					}
          				  case 1:
          					goto flw_38
          				}
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 0, unk: 1, line: 28 */ "Ah? Tu as changé d'idée?\nC'est comme tu veux...")
          				goto flw_53
          			}
          		}
          	  case 1:
/*<  9>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Hmm, pour ça, je te donne <color red<<color red<<numeric arg0 0><color red< rubis>coloroff>.\n\n\n\nÇa te va?\n[1-]Tout à fait[2]Euh, bien...")
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
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Oh, mais tu n'as rien dans ta sacoche, mon\nbeau pit!\n\n\nNe t'inquiète pas, je suis sûre que tu\nreviendras les bras chargés la prochaine fois!")
          			  case 1:
/*< 83>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000004>On dirait bien que tu n'as rien sur toi.\n\n\n\nReviens me voir quand tu auras des choses\npour moi. Beuh bye.")
          			}
          		  case 1:
          			goto flw_82
          		}
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000004>Oh, bien on dirait que tu n'as rien à\nme donner...\n\n\nReviens quand tu auras des affaires à me\nconfier pour vrai.")
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
/*< 33>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00000008>Oh, mon pit adoré, tu veux mettre de\nl'ordre dans tes affaires, c'est ça?\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois!")
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
/*< 22>*/ 		printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000004>Oh, tu veux organiser tes affaires, c'est ça?\n\n\n\nSélectionne l'icône « Trier » si tu veux\nréorganiser le classement de tes objets.\n\n\nCela rangera par exemple toutes tes flèches\ndans le même carquois.")
          		goto flw_23
          	}
          }

          void entrypoint_112_06() {
/*< 31>*/ 	start()
          	goto flw_4
          }

