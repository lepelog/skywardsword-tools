          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf("\x0E\x01\x09\x04\x17\x209\x0E\x01\x08\x02\x2CDSuperbe!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf("\x0E\x01\x09\x04\x17\x1A08Wow, je suis époustouflé! Tu sais manier l'épée,\nc'est le moins qu'on puisse dire!\n\n\n\x0E\x01\x09\x04\x09\x200Tu veux essayer le <g<coup de grâce >>maintenant?\n[1]Oui![2-]Plus tard")
          	  case 1:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x09\x1D04Ça ne va pas, Link? Tu n'as\npas l'air dans ton assiette.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf("\x0E\x01\x09\x04\x08\x1D01Place\x2010toi bien au centre et donne ton coup\nd'épée pile au bon moment pour pouvoir\neffectuer une <g<attaque circulaire>>.\n\n\x0E\x01\x09\x04\x09\x200Tu veux réessayer?\n[1]Oui![2-]Non...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x08\x200Bon, tu dois maintenant couper tous les troncs\nqui t'entourent sans bouger de là où tu es.\nPour ça, utilise une <g<attaque circulaire>>!")
/*<165>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': -1, 'param3': 60}
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf("\x0E\x01\x09\x04\x08\x1D03Alors, quand ton ennemi est à terre, <r<cible\x2010le\n>>avec (Z) puis jette-toi sur lui pour lui asséner\nle <g<coup de grâce>>.\x0E\x01\x11\x02\x7CD\n\n\x0E\x01\x09\x04\x09\x1D00Vas\x2010y, tranche ce tronc, puis lorsqu'il est\nà terre, assène\x2010lui le coup de grâce!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf("\x0E\x01\x09\x04\x17\x1A09\x0E\x01\x08\x02\x1CDExtraordinaire!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf("\x0E\x01\x09\x04\x19\x200Tu peux utiliser le <g<coup de grâce >>après avoir\nmis un ennemi à terre avec ton <r<bouclier>> ou\nune <g<attaque circulaire>>.\n\n\x0E\x01\x09\x04\x1C\x200Mais en combat réel, tes adversaires ne\nrestent au sol qu'un court instant, alors\nil faut vite placer ton coup de grâce avant\nqu'ils se relèvent!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf("\x0E\x01\x09\x04\x09\x1901Salue le patron de la Citrouille perchée\nde ma part!")
          	  case 1:
/*< 53>*/ 		switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          		  case 0:
/*< 54>*/ 			switch (adventure_pouch_has(2 0x0002)) {
          			  case 0:
/*< 67>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
          					flw_57:
/*< 57>*/ 					entrypoint_119_03();
          				  case 1:
/*< 58>*/ 					printf("\x0E\x01\x09\x04\x00\x03Oh! Ça me chatouille les narines...\n\n\n\nCe serait pas de la soupe de citrouille bien\nchaude que tu as là?\n[1]Oui, tiens...[2]Euh...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf("\x0E\x01\x09\x04\x17\x1909C'est pour moi? Vraiment? J'ai l'impression\nde t'avoir un peu forcé la main, désolé....\n\n\nMais vraiment, ça m'a donné l'eau à la bouche...\nSanté!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 101, 'param3': 6}
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf("Miam!\x0E\x01\x05\x04\x1E\x00")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf("Oh que c'est bon!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Vraiment, il n'y a pas meilleure soupe de\ncitrouille que celle de la Citrouille perchée!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf("\x0E\x01\x09\x04\x08\x200Merci, Link! Voilà pour toi.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf("\x0E\x01\x06\x02\xFCCD...\n...\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x08\x1900Hahaha! C'était une blague!")
/*< 65>*/ 						zone_temp_flags[2 /* 0x1 04 */] = true;
          					}
          				}
          			  case 1:
          				goto flw_57
          			}
          		  case 1:
/*< 33>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*< 34>*/ 				switch (adventure_pouch_has(2 0x0002)) {
          				  case 0:
/*< 37>*/ 					printf("\x0E\x01\x09\x04\x08\x1901Salut, Link! Alors, comment se\npasse ton entraînement?\n\n\n\x0E\x01\x09\x04\x00\x200Oh!\n\n\n\n\x0E\x01\x09\x04\x00\x1909Mais c'est de la <r<soupe de citrouille>>!\nMa préférée!\n\n\n\x0E\x01\x09\x04\x00\x200J'avais demandé au patron de la Citrouille\nperchée de m'en faire apporter...\n\n\nTu viens donc de sa part?\n[1]Eh oui![2-]Euh, non...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x17\x1909Ooooh! Alors, donne! Allez, vite! DONNE!\n[1]Tiens![2-]Non!")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 92, 'param3': 6}
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf("Miam!\x0E\x01\x05\x04\x1E\x00")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x00\x13Miam! C'est un délice!\n\n\n\n\x0E\x01\x09\x04\x17\x1900Il n'y a pas mieux qu'une soupe de citrouille\nbien chaude pour vous remonter!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf("\x0E\x01\x09\x04\x08\x1900Merci bien! Et remercie aussi le patron\nde ma part!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf("\x0E\x01\x09\x04\x00\x1D00Quoi?! Mais c'est quoi, cette histoire?\nElle est pour moi ou pas, cette soupe?\n\n\n\x0E\x01\x09\x04\x08\x1D00Si elle est froide, tu peux la garder!\nTu seras bon pour aller m'en chercher\nune autre...\n\nBien chaude, évidemment!")
          						}
          					  case 1:
/*< 40>*/ 						printf("\x0E\x01\x09\x04\x0E\x1D00Ah bon? Mais il se prend pour qui, celui\x2010là?\nJe lui avais demandé de m'en livrer\nsur\x2010le\x2010champ! Non mais!\n\n\x0E\x01\x09\x04\x08\x1D00Je deviens grognon si je ne bois pas ma soupe\nde citrouille quotidienne!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf("\x0E\x01\x09\x04\x08\x1901Salut, Link! Alors, comment se\npasse ton entraînement?\n\n\n\x0E\x01\x09\x04\x00\x200Oh!\n\n\n\n\x0E\x01\x09\x04\x00\x1909Mais c'est de la <r<soupe de citrouille>>!\nMa préférée!\n\n\n\x0E\x01\x09\x04\x00\x200J'avais demandé au patron de la Citrouille\nperchée de m'en faire apporter...\n\n\nTu viens donc de sa part?\n[1]Eh oui![2-]Euh, non...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf("\x0E\x01\x09\x04\x17\x1909Ooooh! Alors, donne! Allez, vite! DONNE!\n[1]Tiens![2-]Non!")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 96, 'next': 89, 'param3': 6}
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf("Pouah! C'est dégoûtant!<pause14> La soupe est glaciale...")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf("Il y a deux choses que je DÉ\x2010TES-TE,\nc'est la soupe froide et les flancs mous...\n\n\nRetourne m'en chercher, et je la veux\nchaude, cette fois!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf("\x0E\x01\x09\x04\x00\x1D00Quoi?! Mais c'est quoi, cette histoire?\nElle est pour moi ou pas, cette soupe?\n\n\n\x0E\x01\x09\x04\x08\x1D00Si elle est froide, tu peux la garder!\nTu seras bon pour aller m'en chercher\nune autre...\n\nBien chaude, évidemment!")
          							}
          						  case 1:
/*< 38>*/ 							printf("\x0E\x01\x09\x04\x0E\x1D00Ah bon? Mais il se prend pour qui, celui\x2010là?\nJe lui avais demandé de m'en livrer\nsur\x2010le\x2010champ! Non mais!\n\n\x0E\x01\x09\x04\x08\x1D00Je deviens grognon si je ne bois pas ma soupe\nde citrouille quotidienne!")
          						}
          					  case 1:
/*< 56>*/ 						entrypoint_119_03();
          					}
          				}
          			  case 1:
/*< 69>*/ 				entrypoint_119_03();
          			}
          		}
          	}
          }

          void entrypoint_119_02() {
/*< 24>*/ 	start()
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 11, 'next': 25, 'param3': 32}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\xB0D\x02Hé!\x0E\x01\x0D\x02\x1900 \x0E\x03\x01\x00Link!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x08\x1D00Il est interdit d'emmener les armes à l'extérieur\nde la salle!\n\n\nTu croyais que je ne m'en apercevrais pas,\nou quoi?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x05Pardon? <pause28>Ton célestrier est introuvable?<pause28>\nTu veux partir à sa recherche? Bien entendu...\n\n\n\x0E\x01\x09\x04\x09\xE00Cependant, Célesbourg est un village pacifiste\net seuls les chevaliers sont autorisés à y porter\nl'épée. C'est la règle.\n\nAlors n'utilise pas cette épée à tort et à travers.\nTu ne dois t'en servir qu'en cas d'extrême\nnécessité. Et entraîne\x2010toi bien sur les troncs ici.\n\nCompris?")
/*< 74>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 27, 'param3': 42}
/*< 27>*/ 	story_flags[199 /* us: 805A9AEF 0x02, jp: 805ACD6F 0x02 */] = true;
/*< 75>*/ 	scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          }

          void entrypoint_119_03() {
/*< 55>*/ 	start()
/*< 13>*/ 	switch (adventure_pouch_has(9 0x0009)) {
          	  case 0:
/*<156>*/ 		switch (scene_flags[60 /* 0x6 10 */]) {
          		  case 0:
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x05Oui? Tu veux que je te réexplique les\ntechniques de<r< défense>>?\n[1]Pratique[2]Théorie[3-]Pas besoin")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 20, 'param3': 60}
/*< 20>*/ 				printf("Tu choisis la <r<pratique>>? OK!\n\n\n\n\x0E\x01\x09\x04\x19\x1D00Si tu brandis ton bouclier au moment où un\nennemi t'attaque, son attaque sera <g<contrée>>.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Cette technique s'appelle la <r<charge bouclier>>,\nelle fera perdre l'équilibre à ton ennemi\npour te permettre de le frapper.\n\n\x0E\x01\x09\x04\x0D\x200Elle est très utile contre les ennemis qui\nlancent des projectiles ou qui ne te\nlaissent que peu de chances d'attaquer.")
          				flw_21:
/*< 21>*/ 				printf("\x0E\x01\x09\x04\x0E\x200Pendant un combat, il est primordial d'utiliser\nle bouclier au bon moment!\n\n\n\x0E\x01\x09\x04\x08\x200Et si tu essayais de t'entraîner sur le <r<tronc\nd'arbre>>, là\x2010bas?")
          			  case 1:
/*<166>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 18, 'param3': 60}
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Si tu commences à t'en faire pour ta sécurité,\npense à brandir ton <r<bouclier>>. C'est aussi\nsimple que ça!\n\n\x0E\x01\x09\x04\x0E\x200Pour baisser ton bouclier, <g<brandis ton épée\n>>ou bien appuie sur (B) pour tout ranger.\n\n\n\x0E\x01\x09\x04\x08\x200Mais reste prudent car <g<sortir ton épée >>te\nfait <r<baisser ta garde>>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x09\x200Je vois... Tu as raison, il ne faut pas avoir peur\nd'essayer. Et si tu t'entraînais sur le tronc\nd'arbre, là\x2010bas?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf("\x0E\x01\x09\x04\x00\x09Wow! \x0E\x03\x01\x00Link! Quel beau bouclier\ntu as là!\n\n\n\x0E\x01\x09\x04\x19\x200Bon. Le moment est venu de t'enseigner\nl'<r<art de la défense>>. Commençons par les\n<r<mouvements de base>>.")
          				flw_15:
/*< 15>*/ 				printf("\x0E\x01\x09\x04\x1C\x200Si tu commences à t'en faire pour ta sécurité,\npense à brandir ton <r<bouclier>>. C'est aussi\nsimple que ça!\n\n\x0E\x01\x09\x04\x0E\x200Pour baisser ton bouclier, <g<brandis ton épée\n>>ou bien appuie sur (B) pour tout ranger.\n\n\n\x0E\x01\x09\x04\x08\x200Mais reste prudent car <g<sortir ton épée >>te\nfait <r<baisser ta garde>>!")
/*< 16>*/ 				printf("\x0E\x01\x09\x04\x09\x1D00Essaie ça! On va voir comment tu\nte débrouilles.")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
/*<164>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': -1, 'param3': 60}
          			  case 1:
/*<157>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link... Le directeur m'a raconté\nce qui s'est passé. Je suis très inquiet au sujet\nde Zelda...\n\nMais personne n'en sait plus...\n\n\n\nL'épée que tu portes ne vient pas de Célesbourg.\nC'est une <r<relique antique >>que seul celui qui en\nsera jugé digne pourra brandir.\n\nSi tu l'as en ta possession, alors ça veut\ndire que...")
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x1D04\x0E\x03\x01\x00Link, je ne peux pas faire\ngrand\x2010chose pour toi...\n\n\nMais je peux au moins \x0E\x01\x09\x04\x19\x1D00t'enseigner l'<r<art de\nla défense>>!\n\n\n\x0E\x01\x09\x04\x00\x200Commençons par les <r<mouvements de base>>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf("\x0E\x01\x09\x04\x19\x1D01Bien manier son bouclier fait partie des\ntechniques de défense. La défense et\nl'attaque sont la clé d'un combat réussi!\n\n\x0E\x01\x09\x04\x08\xE00Tu peux acheter un <r<bouclier >>au <r<bazar>>.\nReviens t'entraîner quand tu en auras un.\n\n\n\x0E\x01\x09\x04\x09\x1D00Et j'espère que je ne parle pas dans le vide!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf("\x0E\x01\x09\x04\x08\x1D04\x0E\x03\x01\x00Link... Le directeur m'a raconté\nce qui s'est passé. Je suis très inquiet au sujet\nde Zelda...\n\nMais personne n'en sait plus...\n\n\n\nL'épée que tu portes ne vient pas de Célesbourg.\nC'est une <r<relique antique >>que seul celui qui en\nsera jugé digne pourra brandir.\n\nSi tu l'as en ta possession, alors ça veut\ndire que...")
/*<158>*/ 				printf("\x0E\x01\x09\x04\x00\x1D00\x0E\x03\x01\x00Link, je ne peux rien faire pour\ntoi tant que tu n'as pas de <r<bouclier>>...\n\n\n\x0E\x01\x09\x04\x19\x1D00Quand tu en auras un, je pourrai t'enseigner\nl'<r<art de la défense>>. Ça fait partie de mon\nrôle de professeur!")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\x05Oui? Oh, tu veux savoir comment utiliser\nton épée?\n[1]Oui[2-]Non merci")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf("\x0E\x01\x09\x04\x09\x203Très bien, la base de l'escrime, c'est de toujours\ngarder à l'esprit la direction dans laquelle tu\nveux donner un coup d'épée!\n\nDonne un coup vers le haut ou le bas pour\n<g<trancher verticalement >>et un coup de côté\npour <g<trancher horizontalement>>.\n\nDonne un coup d'épée vers l'avant pour\nexécuter un <g<coup de pointe>>.\n\n\n\x0E\x01\x09\x04\x17\x200La technique d'attaque la plus efficace est\nl'<g<attaque circulaire>>! Elle est particulièrement\nutile lorsque tu te retrouves encerclé par\ntes ennemis.\n\x0E\x01\x09\x04\x18\x1D00Toutes ces techniques sont indispensables\nau combat, mais n'oublie pas non plus les\nmouvements de base!\n\n\x0E\x01\x09\x04\x00\x1D04Par exemple, <r<cibler >>les ennemis avec (Z).\nAppuie sur (Z) dès que tu aperçois un ennemi!\x0E\x01\x11\x02\x7CD")
          						flw_7:
/*<  7>*/ 						printf("\x0E\x01\x09\x04\x1C\x1D03Tu devrais t'entraîner sur ces <r<troncs d'arbres>>.\n\n\n\n\x0E\x01\x09\x04\x09\x200Si tu ne sais plus comment manier ton épée,\ntu peux ouvrir l'<r<aide>> avec \x0E\x02\x04\x02\x13CD. On ne travaille\njamais trop les bases!\x0E\x01\x11\x02\xBCD\n\n\x0E\x01\x09\x04\x08\x200Si tu parviens à couper tous les troncs,\nje te ferai essayer une <r<technique avancée>>.")
/*<163>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': -1, 'param3': 60}
          					  case 1:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x0E\x1A08Évidemment... Tu as toujours su manier l'épée!\n\n\n\n\x0E\x01\x09\x04\x08\x200Mais il ne faut pas s'asseoir sur ses lauriers!\nMême si on est doué, il faut s'entraîner\nrégulièrement!\n\n\x0E\x01\x09\x04\x19\x1D00<r<Cibler les ennemis>> avec (Z), par exemple, est\nun élément de base qu'il faut maîtriser à fond.")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf("\x0E\x01\x09\x04\x00\x03Salut, Link!\n\n\n\n\x0E\x01\x09\x04\x09\x200C'est aujourd'hui le grand jour de la chevauchée\ncéleste, et tu veux t'entraîner à l'épée?\nTrès bien, très bien!\n\nVa te chercher une épée dans la pièce du fond.\n\n\n\nN'hésite pas à revenir me poser des questions,\nje reste ici.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf("\x0E\x01\x09\x04\x01\x201Ce tronc sert à s'entraîner aux <r<coups verticaux>>.\nDonne un coup d'épée de haut en bas pour\ncouper le tronc d'arbre.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf("\x0E\x01\x09\x04\x19\x203Ce tronc sert à s'entraîner aux <r<coups\nhorizontaux>>. Donne un coup d'épée\nlatéralement pour couper le tronc\nd'arbre.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf("\x0E\x01\x09\x04\x1D\x202Ce tronc sert à s'entraîner aux <r<coups\ndiagonaux>>. Donne un coup d'épée en\ndiagonale pour couper le tronc d'arbre.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf("\x0E\x01\x09\x04\x08\x203Ce tronc sert à s'entraîner aux <r<coups de pointe>>.\nDonne un coup d'épée rapide vers l'avant!\nConsulte l'aide s'il te faut plus de détails.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x09\x04\x19\x202Ce tronc sert à s'entraîner aux techniques\nde <r<défense>>.\n\n\n\x0E\x01\x09\x04\x1C\x1D00Donne un coup d'épée dans le tronc, puis\nfais une <r<charge bouclier >>quand le tronc\nrevient vers toi.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Ça, c'est le tronc réservé à l'entraînement à la\n<r<défense>>. Équipe un <r<bouclier >>et sois vigilant, ou\nil te fera tomber à la renverse!")
          		  case 1:
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x19\x1D02Ce tronc sert à s'entraîner aux techniques\nde <r<défense>>. Comme tu n'es pas équipé d'un\n<r<bouclier>>, sois prudent si tu t'en approches.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf("\x0E\x01\x09\x04\n\x213Félicitations, Link!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf("\x0E\x01\x09\x04\x08\x1908Quel talent! Je suis très fier de toi!\n\n\n\n\x0E\x01\x09\x04\x09\x200Tu veux essayer l'<g<attaque circulaire\n>>maintenant?\n[1]Oui![2-]Plus tard")
          }

