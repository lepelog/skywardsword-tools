          void entrypoint_406_01() {
          	start()
/*< 26>*/ 	switch (story_flags[270 /* us: 805A9AF8 0x01, jp: 805ACD78 0x01 */]) {
          	  case 0:
/*<100>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<108>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 10, 'param3': 13}
/*< 10>*/ 			switch (story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */]) {
          			  case 0:
/*< 18>*/ 				story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */] = true;
/*< 70>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 24, 'param3': 12}
/*< 24>*/ 				switch (zone_temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*< 32>*/ 					printf(/* textboxtype: 1, unk: 0, line: 2 */ "Encore un tour ?\nC'est 20 rubis !\n[1-]C'est parti ![2]Non merci")
          					flw_2:
/*<  2>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_8:
/*<  8>*/ 						switch (has_rupees(20)) {
          						  case 0:
/*<  9>*/ 							rupees += -20;
/*< 56>*/ 							printf(/* textboxtype: 1, unk: 0, line: 26 */ "Sur quel parcours veux‐tu risquer\nta vie ?\n[1-]Débutant[2-]Expert")
/*< 57>*/ 							switch (choice(2)) {
          							  case 0:
/*<113>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 58, 'param3': 13}
/*< 58>*/ 								printf(/* textboxtype: 1, unk: 0, line: 27 */ "C'est parti pour le parcours débutant.\nBonne chance !")
/*< 61>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = false;
          								flw_15:
/*< 15>*/ 								switch (story_flags[503 /* us: 805A9B12 0x20, jp: 805ACD92 0x20 */]) {
          								  case 0:
/*< 41>*/ 									printf(/* textboxtype: 1, unk: 0, line: 6 */ "Tu veux que je te réexplique les\nrègles ?\n[1-]Je veux bien[2]Ça va, merci")
/*< 16>*/ 									switch (choice(2)) {
          									  case 0:
/*<111>*/ 										{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 42, 'param3': 13}
/*< 42>*/ 										printf(/* textboxtype: 1, unk: 0, line: 7 */ "Tu dois atteindre la ligne d'arrivée le\nplus vite possible.\n\n\nIncline la télécommande Wii pour faire\npencher le wagonnet.\n\n\nPenche‐le au bon moment pour\naccélérer !\n\n\nReste bien concentré, sinon tu risques\nde dérailler !")
          										flw_84:
/*< 84>*/ 										switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          										  case 0:
/*< 85>*/ 											switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          											  case 0:
/*< 88>*/ 												printf(/* textboxtype: 1, unk: 0, line: 29 */ "Ton meilleur temps pour l'instant est\nde <numeric arg3 2> min <numeric arg4 2> s <numeric arg5 2> !")
          												flw_101:
/*<101>*/ 												{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 44, 'param3': 13}
/*< 44>*/ 												printf(/* textboxtype: 1, unk: 0, line: 9 */ "Alors, on y va !")
/*< 62>*/ 												story_flags[501 /* us: 805A9B12 0x08, jp: 805ACD92 0x08 */] = true;
/*<  3>*/ 												make_actor_do_something(0, 0)
/*<124>*/ 												{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          											  case 1:
          												goto flw_101
          											}
          										  case 1:
/*< 14>*/ 											switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          											  case 0:
/*< 43>*/ 												printf(/* textboxtype: 1, unk: 0, line: 8 */ "Pour l'instant, ton meilleur temps est\nde <numeric arg0 2> min <numeric arg1 2> s <numeric arg2 2> !")
          												goto flw_101
          											  case 1:
          												goto flw_101
          											}
          										}
          									  case 1:
          										goto flw_84
          									}
          								  case 1:
          									goto flw_84
          								}
          							  case 1:
/*<112>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 59, 'param3': 13}
/*< 59>*/ 								printf(/* textboxtype: 1, unk: 0, line: 28 */ "En avant pour le parcours expert.\nEssaie de revenir entier !")
/*< 60>*/ 								story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */] = true;
          								goto flw_15
          							}
          						  case 1:
/*<103>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 40, 'param3': 13}
/*< 40>*/ 							printf(/* textboxtype: 1, unk: 0, line: 5 */ "T'as pas assez de rubis ?\nC'est pas de bol, ça !\n\n\nVa donc te remplir les poches, et\nreviens me voir !")
          						}
          					  case 1:
/*<105>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 34, 'param3': 13}
/*< 34>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "D'accord. À la prochaine !")
          					}
          				  case 1:
/*< 33>*/ 					printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x30001:0x><heroname> !\nTe revoilà !\n\n\nTu veux faire un tour dans le Wagonnet\ndu péril ? C'est 20 rubis !\n[1-]C'est parti ![2]Non merci")
          					goto flw_2
          				}
          			  case 1:
/*< 21>*/ 				switch (zone_temp_flags[0 /* 0x1 01 */]) {
          				  case 0:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "Ça t'intéresse ?\n[1-]Oui ![2]Pas vraiment")
          					flw_19:
/*< 19>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_110:
/*<110>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3332, 'next': 38, 'param3': 13}
/*< 38>*/ 						printf(/* textboxtype: 1, unk: 0, line: 7 */ "Tu dois atteindre la ligne d'arrivée le\nplus vite possible.\n\n\nIncline la télécommande Wii pour faire\npencher le wagonnet.\n\n\nPenche‐le au bon moment pour\naccélérer !\n\n\nReste bien concentré, sinon tu risques\nde dérailler !")
/*< 11>*/ 						story_flags[274 /* us: 805A9AF8 0x10, jp: 805ACD78 0x10 */] = true;
/*< 71>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 55, 'param3': 12}
/*< 55>*/ 						printf(/* textboxtype: 1, unk: 0, line: 25 */ "Envie d'une petite montée\nd'adrénaline ?\nC'est 20 rubis le tour en wagonnet.\n[1-]C'est parti ![2]Non merci")
/*< 22>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_8
          						  case 1:
/*<104>*/ 							{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 37, 'param3': 13}
/*< 37>*/ 							printf(/* textboxtype: 1, unk: 0, line: 16 */ "C'est quand même dommage...\nY avait de beaux prix à gagner...\n\n\nTu es sûr de pas vouloir tenter ?\n[1-]OK, allons‐y ![2]Laisse‐moi !")
/*< 23>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_8
          							  case 1:
/*<102>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 39, 'param3': 13}
/*< 39>*/ 								printf(/* textboxtype: 1, unk: 0, line: 15 */ "D'accord. À la prochaine !")
          							}
          						}
          					  case 1:
/*<109>*/ 						{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 36, 'param3': 13}
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 14 */ "Comme si ça engageait à quelque chose\nd'écouter les règles...")
/*< 20>*/ 						zone_temp_flags[0 /* 0x1 01 */] = true;
          					}
          				  case 1:
/*< 31>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "Hé, toi !\nQu'est‐ce que tu fais ici ?\n\n\nBon, peu importe, t'es là maintenant,\nalors autant s'amuser un peu, non ?\n[1-]S'amuser ?[2]Euh, non")
/*< 45>*/ 					switch (choice(2)) {
          					  case 0:
/*< 35>*/ 						printf(/* textboxtype: 1, unk: 0, line: 13 */ "Je savais bien que tu serais intéressé !\nJe vais t'expliquer comment ça marche.")
          						goto flw_110
          					  case 1:
/*< 46>*/ 						printf(/* textboxtype: 1, unk: 0, line: 12 */ "Dis donc, rabat‐joie, tu perds rien à\nm'écouter, au moins !\n[1-]D'accord[2]Non merci !")
          						goto flw_19
          					}
          				}
          			}
          		  case 1:
/*<125>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 63, 'param3': 46}
/*< 63>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 47, 'param3': 44}
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Tu as atteint l'arrivée !")
/*< 83>*/ 			switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          			  case 0:
/*< 82>*/ 				switch (story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */]) {
          				  case 0:
          					flw_12:
/*< 12>*/ 					switch (context_related2(0)) {
          					  case 0:
/*<114>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 48, 'param3': 13}
/*< 48>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "Et un nouveau record !\nGénial !")
          						flw_4:
/*<  4>*/ 						switch (context_related4(0)) {
          						  case 0:
/*< 65>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3590, 'next': 51, 'param3': 13}
/*< 51>*/ 							printf(/* textboxtype: 1, unk: 0, line: 21 */ "C'est une blague, c'est ça ? Je savais\nmême pas qu'on pouvait aller si\nlentement !\n\nJe peux pas remettre un prix à une\ntortue comme toi, c'est contre mes\nprincipes !")
          							flw_68:
/*< 68>*/ 							{'type': 'type3', 'subType': 4, 'param1': 255, 'param2': -256, 'next': 80, 'param3': 13}
/*< 80>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 81>*/ 								story_flags[687 /* us: 805A9B21 0x10, jp: 805ACDA1 0x10 */] = true;
          								flw_64:
/*< 64>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 3, 'next': 50, 'param3': 45}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 20 */ "J'aurai toujours un wagonnet pour toi !")
/*< 25>*/ 								zone_temp_flags[1 /* 0x1 02 */] = true;
          							  case 1:
/*< 13>*/ 								story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */] = true;
          								goto flw_64
          							}
          						  case 1:
/*< 69>*/ 							{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 3589, 'next': 72, 'param3': 13}
/*< 72>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 52, 'param3': 12}
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "Tu peux faire mieux, y a pas de doute.\nFaut pencher ton wagonnet\ndavantage !\n\nTiens, t'auras pas tout perdu !")
/*< 73>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
          								flw_5:
/*<  5>*/ 								give_item(4 0x04);
          								goto flw_68
          							  case 1:
          								goto flw_5
          							}
          						  case 2:
/*< 66>*/ 							{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 3847, 'next': 74, 'param3': 13}
/*< 74>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 53>*/ 								printf(/* textboxtype: 1, unk: 0, line: 23 */ "C'est pas mal du tout.\nMais je suis toujours bien plus rapide !\n\n\nTiens, voilà pour toi.")
/*<  6>*/ 								give_item(63 0x3F);
          								goto flw_68
          							  case 1:
/*<131>*/ 								printf(/* textboxtype: 1, unk: 0, line: 34 */ "C'est pas trop mal, mais t'as encore du\nchemin à faire pour me rattraper !\n\n\nVoilà 50 rubis pour toi.")
/*< 86>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 130, 'param3': 12}
/*<130>*/ 								rupees += 50;
          								goto flw_68
          							}
          						  case 3:
/*< 67>*/ 							{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 4104, 'next': 54, 'param3': 13}
/*< 54>*/ 							printf(/* textboxtype: 1, unk: 0, line: 24 */ "Waouh !\nImpressionnant, extraordinaire !\nMême moi, je vais pas aussi vite !")
/*< 75>*/ 							switch (story_flags[529 /* us: 805A9B14 0x40, jp: 805ACD94 0x40 */]) {
          							  case 0:
/*< 78>*/ 								switch (story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */]) {
          								  case 0:
/*<122>*/ 									printf(/* textboxtype: 1, unk: 0, line: 32 */ "J'ai un prix tout à fait spécial pour toi !")
/*< 76>*/ 									give_item(64 0x40);
          									goto flw_68
          								  case 1:
/*<121>*/ 									printf(/* textboxtype: 1, unk: 0, line: 31 */ "Voilà pour toi, un trésor que j'ai\ndécouvert ici‐même, sur cette île !")
/*< 77>*/ 									give_item(94 0x5E);
/*< 79>*/ 									story_flags[667 /* us: 805A9B1E 0x02, jp: 805ACD9E 0x02 */] = true;
          									goto flw_68
          								}
          							  case 1:
/*<123>*/ 								printf(/* textboxtype: 1, unk: 0, line: 33 */ "Voici un rubis dont j'ai toujours pris\ngrand soin.")
/*< 87>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 7, 'param3': 12}
/*<  7>*/ 								give_item(32 0x20);
          								goto flw_68
          							}
          						}
          					  case 1:
          						goto flw_4
          					}
          				  case 1:
          					goto flw_4
          				}
          			  case 1:
/*< 17>*/ 				switch (story_flags[500 /* us: 805A9B12 0x04, jp: 805ACD92 0x04 */]) {
          				  case 0:
          					goto flw_12
          				  case 1:
          					goto flw_4
          				}
          			}
          		  case 2:
/*<127>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 106, 'param3': 46}
/*<106>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 49, 'param3': 13}
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "Oups, raté ! Il te reste qu'à retenter\nta chance !")
/*<129>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		  case 3:
/*<126>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 107, 'param3': 46}
/*<107>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3333, 'next': 99, 'param3': 13}
/*< 99>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "Le temps est écoulé !\nFaudra faire mieux la prochaine fois.")
/*<128>*/ 			zone_temp_flags[1 /* 0x1 02 */] = true;
          		}
          	  case 1:
/*< 29>*/ 		switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          		  case 0:
/*<115>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 28, 'param3': 13}
/*< 28>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "J'aime bien les wagonnets.\nÇa serait bien de faire une course,\nun de ces jours !")
          		  case 1:
/*<116>*/ 			{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 1, 'param3': 13}
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 0 */ "Autrefois, ici, c'était la zone\nd'embarquement des wagonnets\nde la mine.\n\nMais ils fonctionnent toujours, faut pas\ncroire. Si tu grimpes là‐dedans, tu\npourras faire le tour des îlots du coin !\n\nY a des instructions sur le mur qui\ndisent comment faire.\n\n\nMais attention, c'est un peu dangereux\nquand même. Faut tout bien lire !")
/*< 27>*/ 			story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */] = true;
          		}
          	}
          }

          void entrypoint_406_02() {
/*< 89>*/ 	start()
/*< 94>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<117>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 93, 'param3': 13}
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "Ça fait des années que je suis tout seul\nsur cette île.\n\n\nTous les jours, je fais mes tours de\nwagonnet. Je ne m'en lasse pas !")
          		flw_97:
/*< 97>*/ 		story_flags[741 /* us: 805A9B26 0x20, jp: 805ACDA6 0x20 */] = true;
          	  case 1:
/*<119>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 92, 'param3': 13}
/*< 92>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Dis donc, c'est mon tabouret !\nLève tes fesses de là !")
          		goto flw_97
          	}
          }

          void entrypoint_406_03() {
/*< 90>*/ 	start()
/*< 95>*/ 	switch (story_flags[507 /* us: 805A9B12 0x40, jp: 805ACD92 0x40 */]) {
          	  case 0:
/*<118>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3330, 'next': 91, 'param3': 13}
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "Je suis ici tous les jours depuis si\nlongtemps, et il n'y a bien que toi pour\nvenir me voir !\n\nSi tu pouvais en parler à d'autres gens,\nça serait gentil...\nJe me sens un peu seul, ici.")
          		flw_98:
/*< 98>*/ 		story_flags[742 /* us: 805A9B26 0x40, jp: 805ACDA6 0x40 */] = true;
          	  case 1:
/*<120>*/ 		{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 3334, 'next': 96, 'param3': 13}
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "Dis donc, c'est mon tabouret !\nLève tes fesses de là !")
          		goto flw_98
          	}
          }

