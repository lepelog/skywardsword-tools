          void entrypoint_113_33() {
/*<174>*/ 	start()
/*<177>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé mais t'as pas assez\nde <y<queues de lézard>>.\n\n\nDans les bouquins de mon papi, on\ndit qu'on peut obtenir des <y<queues de\nlézard >>en éliminant des monstres qui\nressemblent à... des lézards.")
/*<178>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<176>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 175, 'param3': 12}
/*<175>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_34() {
/*<179>*/ 	start()
/*<182>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé mais t'as pas assez\nde <y<minerai d'Ordinn>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve le <y<minerai d'Ordinn >>sous\nterre sur une montagne de feu.")
/*<187>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<181>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 180, 'param3': 12}
/*<180>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_35() {
/*<183>*/ 	start()
/*<241>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Il semblerait que t'aies\npas assez de <y<fleurs anciennes>> !\n\n\nOn dit que les <y<fleurs anciennes>>\npoussaient jadis dans le désert.\nC'est la plante que j'ai utilisée\npour réparer Récupix.")
          		flw_188:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<185>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 184, 'param3': 12}
/*<184>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<186>*/ 		printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<fleurs anciennes>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<fleurs anciennes>> fleurissaient\nautrefois sur les terres de sable. Je me\ndemande si elles existent encore...")
          		goto flw_188
          	}
          }

          void entrypoint_113_01() {
          	start()
/*< 92>*/ 	switch (story_flags[325 /* us: 805A9AFF 0x08, jp: 805ACD7F 0x08 */]) {
          	  case 0:
/*< 93>*/ 		printf("\x0E\x01\x09\x04\x00\x03Hé, garçon ! Comment va mon\nRécupix ? Bon, besoin d'une\namélioration ?\n[1]Améliorer[2]Réparer[3-]Non merci")
          		flw_4:
/*<  4>*/ 		switch (choice(3)) {
          		  case 0:
/*< 31>*/ 			switch (context_related2(0)) {
          			  case 0:
/*<  2>*/ 				printf("\x0E\x01\x09\x04\x00\x09OK ! Voici les objets que j'peux\naméliorer.")
/*<  5>*/ 				make_actor_do_something(0, 0)
          			  case 1:
/*< 32>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! T'as rien qui puisse être\namélioré...\n\n\nEt si t'allais à l'armurerie te payer\ndes trucs ?")
          			}
          		  case 1:
/*< 69>*/ 			switch (context_related2(2)) {
          			  case 0:
/*< 68>*/ 				printf("\x0E\x01\x09\x04\x00\x09Alors, qu'est\x2010ce que tu veux que je\nrépare ?")
/*< 71>*/ 				make_actor_do_something(10, 0)
          			  case 1:
/*< 70>*/ 				printf("\x0E\x01\x09\x04\x0E\xE0CHein ? Mais t'as pas de bouclier qu'a\nb'soin d'être réparé !\n\n\nC'est pas bien d'me faire des farces\ncomme ça, garçon !")
          			}
          		  case 2:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CHein ? Pourquoi tu viens me parler,\nalors ?")
          		}
          	  case 1:
/*< 54>*/ 		switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          		  case 0:
/*< 51>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Bon, occupe\x2010toi bien de mon p'tit\n<b<Récupix>> !\n\n\nAu fait, il peut détecter les ondes\nenvoyées par les gens...\n\n\n\x0E\x01\x09\x04\x08\x700Donc il peut te retrouver où que tu sois,\ngarçon !\n\n\nIl est pas très poli, mais s'il est de\nbonne humeur, il fera du bon boulot !\n<pause1E>Bon, je crois que j'parle trop !")
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x07\x700Alors, qu'est\x2010ce que je t'améliore,\naujourd'hui ? Ou bien j'peux te\nréparer un bouclier ?\n[1]Améliorer[2]Réparer[3-]Rien, merci")
          			goto flw_4
          		  case 1:
/*< 33>*/ 			switch (story_flags[322 /* us: 805A9AFF 0x01, jp: 805ACD7F 0x01 */]) {
          			  case 0:
/*< 39>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 40, 'param3': 31}
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x03Hé, garçon ! Dis, tu fais une drôle de\ntête !\n\n\nAllez, avoue, t'as un service à me\ndemander !\n[1]Oui[2-]Non")
/*< 41>*/ 				switch (choice(2)) {
          				  case 0:
/*< 36>*/ 					switch (story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */]) {
          					  case 0:
/*< 38>*/ 						printf("\x0E\x01\x09\x04\x00\x01Pour retaper <b<Récupix>>, il me faut une\n<y<fleur ancienne >>! Mais je sais pas où on\npeut en trouver...\n\n[1]J'en ai une[2-]Moi non plus")
          						flw_84:
/*< 84>*/ 						switch (choice(2)) {
          						  case 0:
/*< 85>*/ 							printf("\x0E\x01\x09\x04\x07\x717Hein ? T'en as une ?\nMais c'est génial !")
/*< 34>*/ 							switch (context_related2(1)) {
          							  case 0:
/*< 35>*/ 								printf("\x0E\x01\x09\x04\x0E\xE0CGarçon\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Fais pas semblant d'en avoir\nune, ça prend pas !")
/*< 37>*/ 								story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
          							  case 1:
/*< 98>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 101, 'param3': 47}
/*<101>*/ 								set_camera(4, 0)
/*<100>*/ 								{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 356, 'next': 99, 'param3': 15}
/*< 99>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 42, 'param3': 48}
/*< 42>*/ 								printf("\x0E\x01\x09\x04\x00\x18Waouh ! C'est ça, la <y<fleur ancienne >>?\nOuais, on dirait bien qu'une sorte\nd'huile suinte de la racine !\n\nJ'devrais pouvoir réparer <b<Récupix\n>>avec ça !\n\n\n\x0E\x01\x09\x04\x07\x700Bouge pas, j'essaie tout de suite !")
/*<112>*/ 								{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 61, 'param3': 42}
/*< 61>*/ 								make_actor_do_something(2, 0)
          							}
          						  case 1:
/*< 86>*/ 							printf("\x0E\x01\x09\x04\x0F\x916C'est bien ce que je pensais...\nPersonne ne connaît cette <y<fleur\nancienne>>...")
/*< 91>*/ 							story_flags[321 /* us: 805A9AFC 0x80, jp: 805ACD7C 0x80 */] = true;
/*<158>*/ 							zone_temp_flags[3 /* 0x1 08 */] = false;
          						}
          					  case 1:
/*< 52>*/ 						printf("\x0E\x01\x09\x04\x10\x1008<pause28>Hein ? Le robot de papi ?\n\n\n\n\x0E\x01\x09\x04\x00\xE00C'est encore une de tes blagues que\npersonne comprend, c'est ça ?\n\n\nHein ? C'est sérieux ?<pause28> Tu veux\nramener quelque chose depuis en\ndessous des nuages ?\n\n\x0E\x01\x09\x04\x07\x700Mais alors tu crois à l'histoire de mon\npapi, garçon ?")
/*< 53>*/ 						printf("\x0E\x01\x09\x04\x0D\x900Ça me fait bien plaisir, mais...\nJ'crois bien que le robot est pas\nvraiment en état de te dépanner...")
/*< 94>*/ 						set_camera(3, 0)
/*< 95>*/ 						printf("Regarde un peu !\n\n\n\nSon petit nom, c'est <b<Récupix>>.\nIl paye pas de mine comme ça, mais...\n\n\nC'est un robot exceptionnel qui te\nsuivra n'importe où et pourrait porter\nn'importe quoi.\n\nMais bon\x0E\x01\x06\x02\xFFCD...\x0E\x01\x06\x02Í Comme tu vois, il est pas\ntrès en forme...")
/*< 96>*/ 						set_camera(-1, 0)
/*< 97>*/ 						printf("\x0E\x01\x09\x04\x0D\xE00Si j'en crois l'histoire de papi, il aurait\nbesoin d'une huile extraite d'une <y<fleur\nancienne>>.\n\n\x0E\x01\x09\x04\x0F\xE00J'en ai jamais vu dans le coin, ni même\nentendu parler...\n[1]La voici[2-]Moi non plus")
          						goto flw_84
          					}
          				  case 1:
          					flw_25:
/*< 25>*/ 					zone_temp_flags[4 /* 0x1 10 */] = false;
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x01Yo ! Ici, c'est l'atelier de rénovation.\nJ'peux améliorer un max de tes objets !\n\n\nJ'peux aussi réparer ton bouclier s'il\nest endommagé. Alors, qu'est\x2010ce que\nj'peux faire pour toi ?\n\n[1]Améliorer[2]Réparer[3-]Rien")
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
/*<192>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<perles d'ambre>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<perles d'ambre>> sont un trésor\nassez commun qu'on trouve un peu\npartout.")
/*<193>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<191>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 190, 'param3': 12}
/*<190>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_02() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x08\x806J'te préviens, les modifications sont\ndéfinitives ! Alors, je t'améliore ça tout\nde suite ?\n[1]Oui[2-]Non")
/*<  8>*/ 	switch (choice(2)) {
          	  case 0:
/*<128>*/ 		make_actor_do_something(3, 0)
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x07\x70EOK ! Ça prendra pas longtemps.")
/*<102>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 12, 'param3': 12}
/*< 12>*/ 		make_actor_do_something(1, 0)
/*< 14>*/ 		printf("\x0E\x01\x09\x04\x08\x809Tiens, c'est prêt !")
/*< 26>*/ 		zone_temp_flags[4 /* 0x1 10 */] = true;
          	  case 1:
/*< 11>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Pouah, quelle poule mouillée !\n\n\n\nBon, alors choisis autre chose,\nau moins !")
/*<103>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 18, 'param3': 12}
/*< 18>*/ 		make_actor_do_something(0, 0)
          	}
          }

          void entrypoint_113_37() {
/*<194>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<perles d'ombre>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve les <y<perles d'ombre>> dans\ndes mondes spirituels. J'ai aucune idée\nde ce que ça veut dire.")
/*<198>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<196>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 195, 'param3': 12}
/*<195>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_03() {
/*<  9>*/ 	start()
/*<104>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 27, 'param3': 12}
/*< 27>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*< 28>*/ 		printf("\x0E\x01\x09\x04\x08\x800Merci bien ! Hésite pas à remettre ça !\x0E\x01\x09\x04\x00\x02")
/*<123>*/ 		story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
          		flw_143:
/*<143>*/ 		switch (story_flags[15 /* us: 805A9ADB 0x01, jp: 805ACD5B 0x01 */]) {
          		  case 0:
/*<149>*/ 			switch (story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */]) {
          			  case 0:
          			  case 1:
/*<145>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 144, 'param3': 51}
/*<144>*/ 				printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n\n\n\nLa puissance de votre épée ayant\naugmenté, vous pouvez à présent\n<r<détecter>> les <r<trésors>>.\n\nJ'ai ajouté les <r<trésors>> à la fonction\n<r<détection>>.")
/*<146>*/ 				story_flags[102 /* us: 805A9ADE 0x08, jp: 805ACD5E 0x08 */] = true;
/*<157>*/ 				open_dowsing_wheel(18)
/*<147>*/ 				story_flags[710 /* us: 805A9B25 0x01, jp: 805ACDA5 0x01 */] = true;
/*<148>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          			}
          		  case 1:
          		}
          	  case 1:
/*< 13>*/ 		printf("\x0E\x01\x09\x04\x09\x90DHein ? Tu t'en vas comme ça ?\nT'es pas croyable, toi !\n\n\n\x0E\x01\x09\x04ÿ\xFF00Bah, allez, à la prochaine, garçon !\x0E\x01\x09\x04\x00\x02")
          		goto flw_143
          	}
          }

          void entrypoint_113_20() {
/*< 58>*/ 	start()
/*< 60>*/ 	printf("\x0E\x01\x12\x04\x00e\x0E\x01\x09\x04\x00\x0FFiou\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Ça y est, j'ai terminé !\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_113_38() {
/*<199>*/ 	start()
/*<202>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé mais t'as pas assez\nde <y<gélatibulles>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on peut trouver des <y<gélatibulles>> en\néliminant des monstres mous.")
/*<207>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<201>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 200, 'param3': 12}
/*<200>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_04() {
/*< 15>*/ 	start()
/*<152>*/ 	switch (context_related2(0)) {
          	  case 0:
/*< 16>*/ 		printf("Allez, sois pas timide, tu veux\naméliorer autre chose ?")
/*< 17>*/ 		make_actor_do_something(0, 0)
          	  case 1:
/*<151>*/ 		printf("On dirait que t'as rien que j'puisse\naméliorer... Reviens plus tard !")
          	}
          }

          void entrypoint_113_21() {
/*< 59>*/ 	start()
/*<111>*/ 	set_camera(5, 0)
/*< 62>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 22, 'next': 63, 'param3': 32}
/*< 63>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 0, 'next': 43, 'param3': 16}
/*< 43>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Merci ! Jauge de vitalité au maximum !\nPrêt à transporter !")
/*<118>*/ 	set_camera(8, 0)
/*<119>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 113, 'param3': 16}
/*<113>*/ 	printf("<pause1E>\x0E\x01\x09\x04\x160C\x900Mais...<pause1E> Au fait, qui est cette personne\nverte ?")
/*<120>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 44, 'param3': 50}
/*< 44>*/ 	printf("\x0E\x01\x09\x04\x08\x110AOh ! Il a parlé ! On dirait bien qu'il est\nen état de marche !\n\n\nHé, ce garçon m'a rapporté tout ce\nqu'il fallait pour te réparer. Allez,\nmontre un peu de gratitude, quoi !")
/*< 64>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 45, 'param3': 16}
/*< 45>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Lui ? Vraiment ? Ce gamin ?\nIl ressemble à rien !\n\n\n\x0E\x01\x09\x04\x160C\x900Mais j'imagine que je devrais dire\nmerci...<pause0A> Alors, merci.<pause0A> Vite fait, quoi.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 22, 'next': 46, 'param3': 50}
/*< 46>*/ 	printf("\x0E\x01\x09\x04\x09\x952Hé oh ! Surveille un peu ton langage\nquand tu t'adresses à ton sauveur !\n\n\n\x0E\x01\x09\x04\x07\x700Bon, en tout cas, il a besoin de ton\naide pour porter quelque chose,\nalors rends\x2010lui service, tu veux ?")
/*< 66>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 47, 'param3': 16}
/*< 47>*/ 	printf("\x0E\x01\x09\x04\x160B\x900Sauveur ou pas sauveur,\nje suis pas d'humeur.\n\n\n\x0E\x01\x09\x04\x160C\x900Je suis bien trop occupé pour servir\nun enfant.")
/*< 56>*/ 	{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 114, 'param3': 51}
/*<114>*/ 	set_camera(6, 0)
/*< 67>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 48, 'param3': 16}
/*< 48>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître.\n\n\n\nVous pouvez à présent <pling><r<détecter >>l'<r<hélice\n>>qui est tombée sur terre depuis le\nmoulin.")
/*<136>*/ 	story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = true;
/*<137>*/ 	story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<138>*/ 	story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<139>*/ 	story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = false;
/*<140>*/ 	story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<141>*/ 	story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<155>*/ 	open_dowsing_wheel(12)
/*<154>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<156>*/ 	printf("Cependant, il est très peu probable\nque vous puissiez la mettre dans\nvotre sacoche et l'emporter avec vous.")
/*<125>*/ 	set_camera(11, 0)
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 22, 'next': 115, 'param3': 17}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 3, 'next': 49, 'param3': 50}
/*< 49>*/ 	printf("\x0E\x01\x09\x04\x161A\x200Hmm ?\n\x0E\x01\x09\x04\x160E\x200Oh... Oooh...")
/*<126>*/ 	set_camera(10, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x160E\x200Tu... tu t'appelles Fay ?\nDame Fay, c'est ça ? Qu'est\x2010ce que tu\ncherches, exactement ?")
/*<116>*/ 	printf("\x0E\x01\x09\x04\x160C\x200En\x2010<pause14>Entendu !\n\n\n\n\x0E\x01\x09\x04\x160E\x200Pour toi, je porterai n'importe quoi de\nn'importe quel poids dans n'importe\nquelle direction !")
/*< 87>*/ 	printf("\x0E\x01\x06\x02\xFCCD\x0E\x01\x12\x04\x00\x14...\x0E\x01\x06\x02Í")
/*<131>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 88, 'param3': 16}
/*< 88>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître.\n\n\n\nVous avez trouvé un moyen de\ntransporter l'hélice depuis la terre\njusqu'à Célesbourg.\n\nVous pouvez à présent partir chercher\nl'<b<hélice du moulin>>.")
/*< 57>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 90, 'param3': 36}
/*< 90>*/ 	{'type': 'type3', 'subType': 1, 'param1': 22, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 	set_camera(11, 0)
/*< 89>*/ 	printf("\x0E\x01\x09\x04\x160C\x200Allez, le maître en vert, j'ai décidé de\nt'aider. J'ai enregistré les ondes émises\npar dame Fay...\n\n\x0E\x01\x09\x04\x160E\x200Il suffira de lui demander de m'appeler\nquand tu auras besoin de moi !")
/*< 50>*/ 	story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */] = true;
/*<135>*/ 	set_camera(8, 0)
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 50}
/*<134>*/ 	printf("\x0E\x01\x09\x04\x07\x700Mouais, retrouver l'hélice qu'est\ntombée sous les nuages, ça risque\nde pas être de la tarte...\n\nHmm, tu peux peut\x2010être demander\nau <r<diseur de bonne aventure >>juste là...\n\n\nIl a l'air un peu louche, mais il est\nplutôt doué quand il s'agit de trouver\nquelque chose.")
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 142, 'param3': 42}
/*<142>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<153>*/ 	zone_temp_flags[3 /* 0x1 08 */] = false;
          }

          void entrypoint_113_39() {
/*<203>*/ 	start()
/*<206>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<griffes de monstre>>.\n\n\nOn peut trouver des <y<griffes de\nmonstre >>en éliminant des monstres\nvolants. Ici aussi, la nuit, il y a des\nmonstres qui volent...")
/*<239>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<240>*/ 		printf("\x0E\x01\x09\x04\x10\xE11Maintenant que j'y pense, on en voit\nplus trop ces temps\x2010ci... Les nuits sont\nplus calmes !")
          		flw_208:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<205>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 204, 'param3': 12}
/*<204>*/ 		make_actor_do_something(0, 0)
          	  case 1:
          		goto flw_208
          	}
          }

          void entrypoint_113_05() {
/*< 19>*/ 	start()
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! T'as pas les trésors qu'il\nfaut pour améliorer ça !\n\n\n\x0E\x01\x09\x04\x07\x700Allez, choisis donc un autre truc\nà améliorer.")
/*<105>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 24, 'param3': 12}
/*< 24>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_06() {
/*< 20>*/ 	start()
/*< 22>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! T'as pas les rubis qu'il\nfaut, tu comprends ?\nJ'bosse pas gratos, hein !\n\n\x0E\x01\x09\x04\x07\x700Allez, choisis donc un autre truc à\naméliorer.")
/*<106>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 23, 'param3': 12}
/*< 23>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_40() {
/*<209>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<cors de monstre>>.\n\n\nDans les bouquins de mon papi, on\ndit qu'on peut arracher les <y<cors de\nmonstre>> à leur propriétaire à l'aide\nd'une certaine arme...")
/*<213>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<211>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 210, 'param3': 12}
/*<210>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_07() {
/*< 29>*/ 	start()
/*< 30>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! T'as rien qui puisse être\namélioré...\n\n\nEt si t'allais à l'armurerie te payer\ndes trucs ?")
          }

          void entrypoint_113_41() {
/*<214>*/ 	start()
/*<217>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<crânes décoratifs>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve des <y<crânes décoratifs >>en\néliminant des monstres qui attaquent\navec des massues et autres armes.")
/*<218>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<216>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 215, 'param3': 12}
/*<215>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_08() {
/*< 72>*/ 	start()
/*< 77>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 73, 'param3': 12}
/*< 73>*/ 	printf("\x0E\x01\x09\x04\x08\x800J'te répare ça tout de suite !\nÇa fera <r<10 rubis>>.\n[1]OK[2-]Non merci")
/*< 74>*/ 	switch (choice(2)) {
          	  case 0:
/*< 81>*/ 		switch (has_rupees(10)) {
          		  case 0:
/*< 83>*/ 			rupees += -10;
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x07\x70EOK ! Ça prendra pas longtemps.")
/*<132>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 121, 'param3': 12}
/*<121>*/ 			story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = true;
/*< 79>*/ 			make_actor_do_something(11, 0)
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x08\x809Tiens, c'est prêt !")
          		  case 1:
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! T'as pas assez de rubis\npour me payer ! Va casser ta tirelire\net reviens !")
          		}
          	  case 1:
/*< 75>*/ 		printf("Ah, t'es pas motivé ? Ou tu veux que\nj'te répare un autre bouclier ?")
/*<133>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 12}
/*< 76>*/ 		make_actor_do_something(10, 0)
          	}
          }

          void entrypoint_113_42() {
/*<219>*/ 	start()
/*<222>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<cristaux maléfiques>>.\n\n\nDans les bouquins de mon papi, on\ndit qu'on peut trouver des <y<cristaux\nmaléfiques >>en éliminant des monstres\ndes ténèbres.")
/*<227>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<221>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 220, 'param3': 12}
/*<220>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_09() {
/*<124>*/ 	start()
/*<122>*/ 	story_flags[674 /* us: 805A9B20 0x08, jp: 805ACDA0 0x08 */] = false;
/*<107>*/ 	switch (context_related2(2)) {
          	  case 0:
/*<108>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hé, garçon ! J'te répare un autre\nbouclier ?")
/*<110>*/ 		make_actor_do_something(10, 0)
          	  case 1:
/*<109>*/ 		printf("\x0E\x01\x09\x04\x08\x800Hé, garçon ! T'as plus de bouclier\nqui a besoin d'être réparé !\nReviens donc plus tard !")
          	}
          }

          void entrypoint_113_43() {
/*<223>*/ 	start()
/*<226>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<plumes bleues>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve des <y<plumes bleues >>dans\nun endroit verdoyant en attrapant des\npetits oiseaux bleus avec un filet.")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<225>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 12}
/*<224>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_44() {
/*<229>*/ 	start()
/*<232>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<crânes d'or>>.\n\n\nIl paraît que les <y<crânes d'or >>sont des\ncrânes décoratifs tout dorés et qu'ils\nsont assez rares.")
/*<233>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<231>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 230, 'param3': 12}
/*<230>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_45() {
/*<234>*/ 	start()
/*<237>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé mais t'as pas assez\nde <y<poussières de Déesse>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<poussières de Déesse>> sont très\nprécieuses et que c'est très rare d'en\ntrouver.")
/*<238>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<236>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 235, 'param3': 12}
/*<235>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_30() {
/*<159>*/ 	start()
/*<162>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<larves de guêpes>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on peut obtenir des <y<larves de guêpes>>\nà partir de nids de guêpes qu'on trouve\ndans des contrées verdoyantes.")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<161>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 160, 'param3': 12}
/*<160>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_31() {
/*<163>*/ 	start()
/*<166>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<plumes d'oiseau>>.\n\n\nDans les bouquins de mon papi, on dit\nqu'on trouve des <y<plumes d'oiseau >>dans\nun endroit verdoyant en attrapant des\npetits oiseaux avec un filet.")
/*<168>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<165>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 12}
/*<164>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_113_32() {
/*<169>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x0E\xE0CHé, garçon ! Désolé, mais t'as pas assez\nde <y<virevoltants>>.\n\n\nDans les bouquins de mon papi, on dit\nque les <y<virevoltants>> sont des boules\nd'herbe qui roulent dans un désert\net qu'on peut les attraper avec un filet.")
/*<173>*/ 	printf("\x0E\x01\x09\x04\x07\x700Si t'as autre chose à améliorer,\nsélectionne\x2010le !")
/*<171>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 170, 'param3': 12}
/*<170>*/ 	make_actor_do_something(0, 0)
          }

