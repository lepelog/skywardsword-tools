          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé mais t'as pas assez de\n<color yellow<queues de lézard>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut obtenir des <color yellow<queues de lézard >coloroff>en éliminant\ndes monstres qui ressemblent à... des lézards.")
/*<178>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé mais t'as pas assez de\n<color yellow<minerai d'Ordinn>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve le <color yellow<minerai d'Ordinn >coloroff>sous terre sur une\nmontagne de feu.")
/*<187>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x000e0e0c>Hé, garçon ! Il semblerait que t'aies pas assez\nde <color yellow<fleurs anciennes>coloroff> !\n\n\nOn dit que les <color yellow<fleurs anciennes >coloroff>poussaient jadis\ndans le désert. C'est la plante que j'ai utilisée\npour réparer Récupix.")
          		flw_188:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<fleurs anciennes>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<fleurs anciennes>coloroff> fleurissaient autrefois sur les\nterres de sable. Je me demande si elles existent\nencore...")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 18, unk: 0, line: 114 */ "<0x10009:0x00000003>Hé, garçon ! Comment va mon Récupix ? Bon,\nbesoin d'une amélioration ?\n[1-]Améliorer[2-]Réparer[3]Non merci")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000009>OK ! Voici les objets que j'peux améliorer.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hé, garçon ! T'as rien qui puisse être amélioré...\n\n\n\nEt si t'allais à l'armurerie te payer \ndes trucs ?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000009>Alors, qu'est‐ce que tu veux que je répare ?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x000e0e0c>Hein ? Mais t'as pas de bouclier qu'a b'soin\nd'être réparé !\n\n\nC'est pas bien d'me faire des farces comme ça,\ngarçon !")
          			}
          		  case 2:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000e0e0c>Hein ? Pourquoi tu viens me parler, alors ?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf(/* textboxtype: 19, unk: 0, line: 111 */ "<0x10009:0x00001104>Bon, occupe‐toi bien de mon p'tit <color blue<Récupix>coloroff> !\n\n\n\nAu fait, il peut détecter les ondes envoyées par\nles gens...\n\n\n<0x10009:0x00080700>Donc il peut te retrouver où que tu sois,\ngarçon !\n\n\nIl est pas très poli, mais s'il est de bonne\nhumeur, il fera du bon boulot ! <pause 30>Bon, je\ncrois que j'parle trop !")
/*< 55>*/ 			printf(/* textboxtype: 0, unk: 17, line: 112 */ "<0x10009:0x00070700>Alors, qu'est‐ce que je t'améliore, aujourd'hui ?\nOu bien j'peux te réparer un bouclier ?\n[1-]Améliorer[2-]Réparer[3]Rien, merci")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf(/* textboxtype: 0, unk: 18, line: 97 */ "<0x10009:0x00000003>Hé, garçon ! Dis, tu fais une drôle de tête !\n\n\n\nAllez, avoue, t'as un service à me demander !\n[1-]Oui[2]Non")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x00000001>Pour retaper <color blue<Récupix>coloroff>, il me faut une <color yellow<fleur\nancienne >coloroff>! Mais je sais pas où on peut en\ntrouver...\n\n[1-]J'en ai une[2]Moi non plus")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf(/* textboxtype: 19, unk: 0, line: 102 */ "<0x10009:0x00070717>Hein ? T'en as une ? Mais c'est génial !")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf(/* textboxtype: 0, unk: 0, line: 104 */ "<0x10009:0x000e0e0c>Garçon<0x10006:0xfdcd>... Fais pas semblant d'en avoir une, ça\nprend pas !")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf(/* textboxtype: 18, unk: 0, line: 108 */ "<0x10009:0x00000018>Waouh ! C'est ça, la <color yellow<fleur ancienne >coloroff>? Ouais,\non dirait bien qu'une sorte d'huile suinte de\nla racine !\n\nJ'devrais pouvoir réparer <color blue<Récupix >coloroff>avec ça !\n\n\n\n<0x10009:0x00070700>Bouge pas, j'essaie tout de suite !")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf(/* textboxtype: 0, unk: 17, line: 103 */ "<0x10009:0x000f0916>C'est bien ce que je pensais... Personne ne\nconnaît cette <color yellow<fleur ancienne>coloroff>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00101008><pause 40>Hein ? Le robot de papi ?\n\n\n\n<0x10009:0x00000e00>C'est encore une de tes blagues que personne\ncomprend, c'est ça ?\n\n\nHein ? C'est sérieux ?<pause 40> Tu veux ramener\nquelque chose depuis en dessous des nuages ?\n\n\n<0x10009:0x00070700>Mais alors tu crois à l'histoire de mon papi,\ngarçon ?")
/*< 53>*/ 						printf(/* textboxtype: 18, unk: 0, line: 99 */ "<0x10009:0x000d0900>Ça me fait bien plaisir, mais... J'crois bien\nque le robot est pas vraiment en état de te\ndépanner...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf(/* textboxtype: 0, unk: 19, line: 100 */ "Regarde un peu !\n\n\n\nSon petit nom, c'est <color blue<Récupix>coloroff>. Il paye pas de\nmine comme ça, mais...\n\n\nC'est un robot exceptionnel qui te suivra\nn'importe où et pourrait porter n'importe\nquoi.\n\nMais bon<0x10006:0xffcd>...<0x10006:0x00cd> Comme tu vois, il est pas très en\nforme...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x000d0e00>Si j'en crois l'histoire de papi, il aurait besoin\nd'une huile extraite d'une <color yellow<fleur ancienne>coloroff>.\n\n\n<0x10009:0x000f0e00>J'en ai jamais vu dans le coin, ni même entendu\nparler...\n[1-]La voici[2]Moi non plus")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 1, line: 0 */ "<0x10009:0x00000001>Yo ! Ici, c'est l'atelier de rénovation. J'peux\naméliorer un max de tes objets !\n\n\nJ'peux aussi réparer ton bouclier s'il est\nendommagé. Alors, qu'est‐ce que j'peux\nfaire pour toi ?\n\n[1-]Améliorer[2-]Réparer[3]Rien")
          					goto flw_4
          				}
          			  case 1:
          				goto flw_25
          			}
          		}
          	}
          }

          void entrypoint_113_36() {
/*<189>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<perles d'ambre>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<perles d'ambre>coloroff> sont un trésor assez commun\nqu'on trouve un peu partout.")
/*<193>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00080806>J'te préviens, les modifications sont définitives !\nAlors, je t'améliore ça tout de suite ?\n[1-]Oui[2]Non")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>OK ! Ça prendra pas longtemps.")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>Tiens, c'est prêt !")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000e0e05>Pouah, quelle poule mouillée !\n\n\n\nBon, alors choisis autre chose, au moins !")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<perles d'ombre>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve les <color yellow<perles d'ombre>coloroff> dans des mondes\nspirituels. J'ai aucune idée de ce que ça veut\ndire.")
/*<198>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x00080800>Merci bien ! Hésite pas à remettre ça !<0x10009:0x00000002>")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf(/* textboxtype: 19, unk: 0, line: 129 */ "<0x10012:0x0000000b>Maître, Fay au rapport.\n\n\n\nLa puissance de votre épée ayant augmenté, vous\npouvez à présent <color red<détecter>coloroff> les <color red<trésors>coloroff>.\n\n\nJ'ai ajouté les <color red<trésors>coloroff> à la fonction <color red<détection>coloroff>.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x0009090d>Hein ? Tu t'en vas comme ça ? T'es pas\ncroyable, toi !\n\n\n<0x10009:0x00ffff00>Bah, allez, à la prochaine, garçon !<0x10009:0x00000002>")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf(/* textboxtype: 0, unk: 0, line: 113 */ "<0x10012:0x00000065><0x10009:0x0000000f>Fiou<0x10006:0xfccd>...<0x10006:0x00cd> Ça y est, j'ai terminé !<0x10005:0x001e0000>")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé mais t'as pas assez de\n<color yellow<gélatibulles>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut trouver des <color yellow<gélatibulles>coloroff> en éliminant des\nmonstres mous.")
/*<207>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Allez, sois pas timide, tu veux améliorer autre\nchose ?")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "On dirait que t'as rien que j'puisse améliorer...\nReviens plus tard !")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 0, line: 116 */ "<0x10009:0x161a0200>Merci ! Jauge de vitalité au maximum ! Prêt\nà transporter !")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf(/* textboxtype: 18, unk: 0, line: 117 */ "<pause 30><0x10009:0x160c0900>Mais...<pause 30> Au fait, qui est cette personne verte ?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 19, line: 109 */ "<0x10009:0x0008110a>Oh ! Il a parlé ! On dirait bien qu'il est en état\nde marche !\n\n\nHé, ce garçon m'a rapporté tout ce qu'il fallait\npour te réparer. Allez, montre un peu de\ngratitude, quoi !")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf(/* textboxtype: 0, unk: 19, line: 118 */ "<0x10009:0x160b0900>Lui ? Vraiment ? Ce gamin ? Il ressemble\nà rien !\n\n\n<0x10009:0x160c0900>Mais j'imagine que je devrais dire merci...<pause 10>\nAlors, merci.<pause 10> Vite fait, quoi.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x00090952>Hé oh ! Surveille un peu ton langage quand tu\nt'adresses à ton sauveur !\n\n\n<0x10009:0x00070700>Bon, en tout cas, il a besoin de ton aide pour\nporter quelque chose, alors rends‐lui service,\ntu veux ?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf(/* textboxtype: 0, unk: 0, line: 119 */ "<0x10009:0x160b0900>Sauveur ou pas sauveur, je suis pas d'humeur.\n\n\n\n<0x10009:0x160c0900>Je suis bien trop occupé pour servir un enfant.")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf(/* textboxtype: 0, unk: 0, line: 125 */ "<0x10012:0x00000001>Maître.\n\n\n\nVous pouvez à présent <sound 4><color red<détecter >coloroff>l'<color red<hélice >coloroff>qui est tombée\nsur terre depuis le moulin.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf(/* textboxtype: 18, unk: 0, line: 126 */ "Cependant, il est très peu probable que vous puissiez\nla mettre dans votre sacoche et l'emporter avec vous.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf(/* textboxtype: 19, unk: 0, line: 120 */ "<0x10009:0x161a0200>Hmm ? <0x10009:0x160e0200>Oh... Oooh...")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf(/* textboxtype: 0, unk: 17, line: 121 */ "<0x10009:0x160e0200>Tu... tu t'appelles Fay ? Dame Fay, c'est ça ?\nQu'est‐ce que tu cherches, exactement ?")
/*<116>*/ 	printf(/* textboxtype: 0, unk: 0, line: 122 */ "<0x10009:0x160c0200>En‐<pause 20>Entendu !\n\n\n\n<0x10009:0x160e0200>Pour toi, je porterai n'importe quoi de n'importe\nquel poids dans n'importe quelle direction !")
/*< 87>*/ 	printf(/* textboxtype: 0, unk: 19, line: 127 */ "<0x10006:0xfccd><0x10012:0x00000014>...<0x10006:0x00cd>")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf(/* textboxtype: 0, unk: 0, line: 128 */ "<0x10012:0x00000001>Maître.\n\n\n\nVous avez trouvé un moyen de transporter l'hélice\ndepuis la terre jusqu'à Célesbourg.\n\n\nVous pouvez à présent partir chercher l'<color blue<hélice du\nmoulin>coloroff>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf(/* textboxtype: 18, unk: 0, line: 123 */ "<0x10009:0x160c0200>Allez, le maître en vert, j'ai décidé de t'aider.\nJ'ai enregistré les ondes émises par dame Fay...\n\n\n<0x10009:0x160e0200>Il suffira de lui demander de m'appeler quand\ntu auras besoin de moi !")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf(/* textboxtype: 0, unk: 18, line: 115 */ "<0x10009:0x00070700>Mouais, retrouver l'hélice qu'est tombée sous\nles nuages, ça risque de pas être de la tarte...\n\n\nHmm, tu peux peut‐être demander au <color red<diseur de\nbonne aventure >coloroff>juste là...\n\n\nIl a l'air un peu louche, mais il est plutôt doué\nquand il s'agit de trouver quelque chose.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<griffes de monstre>coloroff>.\n\n\nOn peut trouver des <color yellow<griffes de monstre >coloroff>en\néliminant des monstres volants. Ici aussi,\nla nuit, il y a des monstres qui volent...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00100e11>Maintenant que j'y pense, on en voit plus trop\nces temps‐ci... Les nuits sont plus calmes !")
          		flw_208:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e0c>Hé, garçon ! T'as pas les trésors qu'il faut pour\naméliorer ça !\n\n\n<0x10009:0x00070700>Allez, choisis donc un autre truc à améliorer.")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x000e0e0c>Hé, garçon ! T'as pas les rubis qu'il faut, tu\ncomprends ? J'bosse pas gratos, hein !\n\n\n<0x10009:0x00070700>Allez, choisis donc un autre truc à améliorer.")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<cors de monstre>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut arracher les <color yellow<cors de monstre >coloroff>à leur\npropriétaire à l'aide d'une certaine arme...")
/*<213>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0e0c>Hé, garçon ! T'as rien qui puisse être amélioré...\n\n\n\nEt si t'allais à l'armurerie te payer \ndes trucs ?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<crânes décoratifs>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve des <color yellow<crânes décoratifs >coloroff>en éliminant des\nmonstres qui attaquent avec des massues et\nautres armes.")
/*<218>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00080800>J'te répare ça tout de suite ! Ça fera <color red<10 rubis>coloroff>.\n[1-]OK[2]Non merci")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x0007070e>OK ! Ça prendra pas longtemps.")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00080809>Tiens, c'est prêt !")
          		  case 1:
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e0c>Hé, garçon ! T'as pas assez de rubis pour me\npayer ! Va casser ta tirelire et reviens !")
          		}
          	  case 1:
/*< 75>*/ 		printf(/* textboxtype: 0, unk: 0, line: 17 */ "Ah, t'es pas motivé ? Ou tu veux que j'te répare\nun autre bouclier ?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<cristaux maléfiques>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut trouver des <color yellow<cristaux maléfiques >coloroff>en\néliminant des monstres des ténèbres.")
/*<227>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00080800>Hé, garçon ! J'te répare un autre bouclier ?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00080800>Hé, garçon ! T'as plus de bouclier qui a besoin\nd'être réparé ! Reviens donc plus tard !")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<plumes bleues>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve des <color yellow<plumes bleues >coloroff>dans un endroit\nverdoyant en attrapant des petits oiseaux bleus\navec un filet.")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<crânes d'or>coloroff>.\n\n\nIl paraît que les <color yellow<crânes d'or >coloroff>sont des crânes\ndécoratifs tout dorés et qu'ils sont assez rares.")
/*<233>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé mais t'as pas assez de\n<color yellow<poussières de Déesse>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que\nles <color yellow<poussières de Déesse>coloroff> sont très précieuses\net que c'est très rare d'en trouver.")
/*<238>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<larves de guêpes>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\npeut obtenir des <color yellow<larves de guêpes >coloroff>à partir de\nnids de guêpes qu'on trouve dans des contrées\nverdoyantes.")
/*<167>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<plumes d'oiseau>coloroff>.\n\n\nDans les bouquins de mon papi, on dit qu'on\ntrouve des <color yellow<plumes d'oiseau >coloroff>dans un endroit\nverdoyant en attrapant des petits oiseaux avec\nun filet.")
/*<168>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x000e0e0c>Hé, garçon ! Désolé, mais t'as pas assez de\n<color yellow<virevoltants>coloroff>.\n\n\nDans les bouquins de mon papi, on dit que les\n<color yellow<virevoltants>coloroff> sont des boules d'herbe qui roulent\ndans un désert et qu'on peut les attraper avec\nun filet.")
/*<173>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00070700>Si t'as autre chose à améliorer, sélectionne‐le !")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

