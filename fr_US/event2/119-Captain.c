          void entrypoint_119_10() {
/*<113>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[4 /* 0x1 10 */]) {
          	  case 0:
/*<112>*/ 		printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00170209><0x10008:0x02cd>Superbe!")
/*<124>*/ 		set_camera(3, 0)
/*<125>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00171a08>Wow, je suis époustouflé! Tu sais\nmanier l'épée, c'est le moins qu'on\npuisse dire!\n\n<0x10009:0x00090200>Tu veux essayer le <color green<coup de grâce\n>coloroff>maintenant?\n[1-]Oui![2]Plus tard")
          	  case 1:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00091d04>Ça ne va pas, <heroname>?\nTu n'as pas l'air dans ton assiette.")
/*<122>*/ 		set_camera(3, 0)
/*<123>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00081d01>Place‐toi bien au centre et agite\nde façon<color red< latérale et simultanée>coloroff>\nla manette Wii Remote et le Nunchuk,\ncompris?\n<0x10009:0x00090200>Tu veux réessayer?\n[1-]Oui![2]Non...")
          	}
          }

          void entrypoint_119_11() {
/*<115>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00080200>Bon, tu dois maintenant couper tous les\ntroncs qui t'entourent sans bouger de là\noù tu es.\n\nAgite le Nunchuk et la manette\nWii Remote <color red<simultanément >coloroff>et dans\nla <color green<même direction horizontale>coloroff>.\n<0x10009:0x00090200>Vas‐y, essaie!")
          }

          void entrypoint_119_12() {
/*<126>*/ 	start()
/*<127>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00081d03>Alors, quand ton ennemi est à terre,\n<color red<cible‐le>coloroff> avec (Z) puis <color red<agite\nle Nunchuk et la manette Wii\nRemote >coloroff>pour asséner le <color green<coup de grâce>coloroff>.<0x10011:0x07cd>\n<0x10009:0x00091d00>Vas‐y, tranche ce tronc, puis lorsqu'il\nest à terre, assène‐lui le coup de grâce!")
          }

          void entrypoint_119_13() {
/*<128>*/ 	start()
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00171a09><0x10008:0x01cd>Extraordinaire!")
/*<130>*/ 	set_camera(3, 0)
/*<131>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00190200>Tu peux utiliser le <color green<coup de grâce >coloroff>après\navoir mis un ennemi à terre avec ton\n<color red<bouclier>coloroff> ou une <color red<attaque circulaire>coloroff>.\n\n<0x10009:0x001c0200>Mais en combat réel, tes adversaires\nne restent au sol qu'un court instant,\nalors il faut vite agiter la manette Wii\nRemote et le Nunchuk simultanément!")
          }

          void entrypoint_119_01() {
          	start()
/*< 68>*/ 	switch (zone_temp_flags[1 /* 0x1 02 */]) {
          	  case 0:
/*< 70>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00091901>Salue le patron de la Citrouille\nperchée de ma part!")
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
/*< 58>*/ 					printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000003>Oh!\nÇa me chatouille les narines...\n\n\nCe serait pas de la soupe de citrouille\nbien chaude que tu as là?\n[1-]Oui, tiens...[2-]Euh...")
/*< 59>*/ 					switch (choice(2)) {
          					  case 0:
/*< 61>*/ 						printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00171909>C'est pour moi? Vraiment?\nJ'ai l'impression de t'avoir un\npeu forcé la main, désolé...\n\nMais vraiment, ça m'a donné\nl'eau à la bouche... Santé!")
/*<138>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 108, 'param3': 47}
/*<108>*/ 						make_actor_do_something(0, 0)
/*< 62>*/ 						make_actor_do_something(1, 0)
/*<119>*/ 						{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 99, 'param3': 15}
/*< 99>*/ 						set_camera(10, 0)
/*<100>*/ 						{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 139, 'param3': 13}
/*<139>*/ 						{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 102, 'param3': 48}
/*<102>*/ 						wait_frames(96)
/*<101>*/ 						{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5651, 'next': 103, 'param3': 13}
/*<103>*/ 						printf(/* textboxtype: 1, unk: 0, line: 44 */ "Miam!<0x10005:0x001e0000>")
/*<104>*/ 						set_camera(11, 0)
/*< 63>*/ 						printf(/* textboxtype: 1, unk: 0, line: 48 */ "Oh que c'est bon!\n\n\n\n<0x10009:0x00171900>Vraiment, il n'y a pas meilleure soupe\nde citrouille que celle de la Citrouille\nperchée!")
/*<154>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 144, 'param3': 47}
/*<144>*/ 						set_camera(12, 0)
/*<143>*/ 						make_actor_do_something(2, 0)
/*<155>*/ 						{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 142, 'param3': 48}
/*<142>*/ 						printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00080200>Merci, <heroname>!\nVoilà pour toi.")
/*<105>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 64, 'param3': 42}
/*< 64>*/ 						give_item(4 0x04);
/*< 71>*/ 						zone_temp_flags[1 /* 0x1 02 */] = true;
          					  case 1:
/*< 60>*/ 						printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10006:0xfccd>...\n...<0x10006:0x00cd>\n\n\n<0x10009:0x00081900>Hahaha!\nC'était une blague!")
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
/*< 37>*/ 					printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Salut, <heroname>!\nAlors, comment se passe ton\nentraînement?\n\n<0x10009:0x00000200>Oh!\n\n\n\n<0x10009:0x00001909>Mais c'est de la <color red<soupe de citrouille>coloroff>!\nMa préférée!\n\n\n<0x10009:0x00000200>J'avais demandé au patron de\nla Citrouille perchée de m'en\nfaire apporter...\n\nTu viens donc de sa part?\n[1-]Eh oui![2]Euh, non...")
/*< 41>*/ 					switch (choice(2)) {
          					  case 0:
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>Ooooh! Alors, donne!\nAllez, vite! DONNE!\n[1-]Tiens![2]Non!")
/*< 44>*/ 						switch (choice(2)) {
          						  case 0:
/*<135>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 107, 'param3': 47}
/*<107>*/ 							make_actor_do_something(0, 0)
/*< 48>*/ 							make_actor_do_something(1, 0)
/*<118>*/ 							{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 95, 'param3': 15}
/*< 95>*/ 							set_camera(10, 0)
/*< 91>*/ 							{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 136, 'param3': 13}
/*<136>*/ 							{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 93, 'param3': 48}
/*< 93>*/ 							wait_frames(96)
/*< 92>*/ 							{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 5655, 'next': 94, 'param3': 13}
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 44 */ "Miam!<0x10005:0x001e0000>")
/*< 96>*/ 							set_camera(11, 0)
/*< 52>*/ 							printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000013>Miam! C'est un délice!\n\n\n\n<0x10009:0x00171900>Il n'y a pas mieux qu'une\nsoupe de citrouille bien chaude\npour vous remonter!")
/*<151>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 141, 'param3': 47}
/*<141>*/ 							make_actor_do_something(2, 0)
/*<145>*/ 							set_camera(12, 0)
/*<152>*/ 							{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 140, 'param3': 48}
/*<140>*/ 							printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00081900>Merci bien! Et remercie aussi le\npatron de ma part!")
/*< 51>*/ 							story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */] = true;
/*< 66>*/ 							zone_temp_flags[1 /* 0x1 02 */] = true;
/*<153>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 47>*/ 							printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Quoi?! Mais c'est quoi, cette histoire?\nElle est pour moi ou pas, cette soupe?\n\n\n<0x10009:0x00081d00>Si elle est froide, tu peux la garder!\nTu seras bon pour aller m'en chercher\nune autre...\n\nBien chaude, évidemment!")
          						}
          					  case 1:
/*< 40>*/ 						printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Ah bon?\nMais il se prend pour qui, celui‐là?\nJe lui avais demandé de m'en livrer\nsur‐le‐champ! Non mais!\n<0x10009:0x00081d00>Je deviens grognon si je ne bois pas\nma soupe de citrouille quotidienne!")
          					}
          				  case 1:
/*< 35>*/ 					switch (adventure_pouch_has(3 0x0003)) {
          					  case 0:
/*< 36>*/ 						printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00081901>Salut, <heroname>!\nAlors, comment se passe ton\nentraînement?\n\n<0x10009:0x00000200>Oh!\n\n\n\n<0x10009:0x00001909>Mais c'est de la <color red<soupe de citrouille>coloroff>!\nMa préférée!\n\n\n<0x10009:0x00000200>J'avais demandé au patron de\nla Citrouille perchée de m'en\nfaire apporter...\n\nTu viens donc de sa part?\n[1-]Eh oui![2]Euh, non...")
/*< 39>*/ 						switch (choice(2)) {
          						  case 0:
/*< 43>*/ 							printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00171909>Ooooh! Alors, donne!\nAllez, vite! DONNE!\n[1-]Tiens![2]Non!")
/*< 45>*/ 							switch (choice(2)) {
          							  case 0:
/*<132>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 106, 'param3': 47}
/*<106>*/ 								make_actor_do_something(0, 0)
/*< 49>*/ 								make_actor_do_something(1, 0)
/*<117>*/ 								{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 97, 'param3': 15}
/*< 97>*/ 								set_camera(10, 0)
/*< 88>*/ 								{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': 4629, 'next': 133, 'param3': 13}
/*<133>*/ 								{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 20, 'next': 90, 'param3': 48}
/*< 90>*/ 								wait_frames(96)
/*< 89>*/ 								{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 4118, 'next': 147, 'param3': 13}
/*<147>*/ 								set_camera(11, 0)
/*<146>*/ 								printf(/* textboxtype: 1, unk: 0, line: 40 */ "Pouah! C'est dégoûtant!<pause 20>\nLa soupe est glaciale...")
/*<148>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 149, 'param3': 47}
/*<149>*/ 								{'type': 'type3', 'subType': 4, 'param1': 9, 'param2': 7424, 'next': 134, 'param3': 13}
/*<134>*/ 								make_actor_do_something(2, 0)
/*< 98>*/ 								set_camera(12, 0)
/*<150>*/ 								{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 10, 'next': 50, 'param3': 48}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 41 */ "Il y a deux choses que je DÉ‐TES-TE,\nc'est la soupe froide et les flancs\nmous... Retourne m'en chercher,\net je la veux chaude, cette fois!")
/*<137>*/ 								{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          							  case 1:
/*< 46>*/ 								printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00001d00>Quoi?! Mais c'est quoi, cette histoire?\nElle est pour moi ou pas, cette soupe?\n\n\n<0x10009:0x00081d00>Si elle est froide, tu peux la garder!\nTu seras bon pour aller m'en chercher\nune autre...\n\nBien chaude, évidemment!")
          							}
          						  case 1:
/*< 38>*/ 							printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x000e1d00>Ah bon?\nMais il se prend pour qui, celui‐là?\nJe lui avais demandé de m'en livrer\nsur‐le‐champ! Non mais!\n<0x10009:0x00081d00>Je deviens grognon si je ne bois pas\nma soupe de citrouille quotidienne!")
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
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x0b0d0002>Hé!<0x1000D:0x1900> <0x30001:0x><heroname>!")
/*< 31>*/ 	{'type': 'type3', 'subType': 1, 'param1': 11, 'param2': 0, 'next': 72, 'param3': 16}
/*< 72>*/ 	set_camera(1, 0)
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00081d00>Il est interdit d'emmener les armes à\nl'extérieur de la salle!\n\n\nTu croyais que je ne m'en apercevrais\npas, ou quoi?")
/*< 73>*/ 	set_camera(2, 0)
/*< 29>*/ 	make_actor_do_something(3, 11)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 11, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000005>Pardon? <pause 40>Ton célestrier est\nintrouvable? <pause 40>Tu veux partir à\nsa recherche? Bien entendu...\n\n<0x10009:0x00090e00>Cependant, Célesbourg est un village\npacifiste et seuls les chevaliers sont\nautorisés à y porter l'épée. C'est la\nrègle.\nAlors n'utilise pas cette épée à tort et à\ntravers. Tu ne dois t'en servir qu'en cas\nd'extrême nécessité. Et entraîne‐toi\nbien sur les troncs ici.\nCompris?")
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
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 1, line: 13 */ "<0x10009:0x00000005>Oui? Tu veux que je te réexplique les\ntechniques de<color red< défense>coloroff>?\n[1-]Pratique[2-]Théorie[3]Pas besoin")
/*< 19>*/ 			switch (choice(3)) {
          			  case 0:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 14 */ "Tu choisis la <color red<pratique>coloroff>? OK!\n\n\n\n<0x10009:0x00191d00>Si tu brandis ton bouclier au\nmoment où un ennemi t'attaque,\nson attaque sera <color green<contrée>coloroff>.\n\n<0x10009:0x001c1d00>Cette technique s'appelle la <color red<charge\nbouclier>coloroff>, elle fera perdre l'équilibre\nà ton ennemi pour te permettre de\nle frapper.\n<0x10009:0x000d0200>Elle est très utile contre les\nennemis qui lancent des projectiles\nou qui ne te laissent que peu de\nchances d'attaquer.")
          				flw_21:
/*< 21>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x000e0200>Pendant un combat, il est primordial\nd'utiliser le bouclier au bon moment!\n\n\n<0x10009:0x00080200>Et si tu essayais de t'entraîner\nsur le <color red<tronc d'arbre>coloroff>, là‐bas?")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200><color green<Secoue le Nunchuk\n>coloroff>pour brandir ton <color red<bouclier>coloroff>.\nC'est aussi simple que ça!\n\n<0x10009:0x000e0200>Pour baisser ton bouclier, <color green<brandis\nton épée en agitant la manette\nWii Remote>coloroff>. Appuie sur (A) pour\ntout ranger.\n<0x10009:0x00080200>Mais reste prudent car <color green<sortir ton épée\n>coloroff>te fait <color red<baisser ta garde>coloroff>!")
          				goto flw_21
          			  case 2:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00090200>Je vois...\nTu as raison, il ne faut pas avoir\npeur d'essayer. Et si tu t'entraînais\nsur le tronc d'arbre, là‐bas?")
          			}
          		  case 1:
/*< 22>*/ 			switch (scene_flags[59 /* 0x6 08 */]) {
          			  case 0:
/*< 14>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000009>Wow! <0x30001:0x><heroname>!\nQuel beau bouclier tu as là!\n\n\n<0x10009:0x00190200>Bon. Le moment est venu de t'enseigner\nl'<color red<art de la défense>coloroff>. Commençons par\nles <color red<mouvements de base>coloroff>.")
          				flw_15:
/*< 15>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x001c0200><color green<Secoue le Nunchuk\n>coloroff>pour brandir ton <color red<bouclier>coloroff>.\nC'est aussi simple que ça!\n\n<0x10009:0x000e0200>Pour baisser ton bouclier, <color green<brandis\nton épée en agitant la manette\nWii Remote>coloroff>. Appuie sur (A) pour\ntout ranger.\n<0x10009:0x00080200>Mais reste prudent car <color green<sortir ton épée\n>coloroff>te fait <color red<baisser ta garde>coloroff>!")
/*< 16>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00091d00>Essaie ça! On va voir comment tu\nte débrouilles.")
/*< 23>*/ 				scene_flags[0 'Skyloft'][60 /* 0x6 10 */] = true;
          			  case 1:
/*<157>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><0x30001:0x><heroname>... Le directeur m'a\nraconté ce qui s'est passé. Je suis très\ninquiet au sujet de Zelda...\n\nMais personne n'en sait plus...\n\n\n\nL'épée que tu portes ne vient pas de\nCélesbourg. C'est une <color red<relique antique\n>coloroff>que seul celui qui en sera jugé digne\npourra brandir.\nSi tu l'as en ta possession, alors ça veut\ndire que...")
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00001d04><0x30001:0x><heroname>, je ne peux pas\nfaire grand‐chose pour toi...\n\n\nMais je peux au moins <0x10009:0x00191d00>t'enseigner\nl'<color red<art de la défense>coloroff>!\n\n\n<0x10009:0x00000200>Commençons par les\n<color red<mouvements de base>coloroff>!")
          				goto flw_15
          			}
          		}
          	  case 1:
/*< 11>*/ 		switch (scene_flags[59 /* 0x6 08 */]) {
          		  case 0:
/*< 12>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00191d01>Bien manier son bouclier fait\npartie des techniques de défense.\nLa défense et l'attaque sont la\nclé d'un combat réussi!\n<0x10009:0x00080e00>Tu peux acheter un <color red<bouclier>coloroff>\nau <color red<bazar>coloroff>. Reviens t'entraîner\nquand tu en auras un.\n\n<0x10009:0x00091d00>Et j'espère que je ne parle pas\ndans le vide!")
          		  case 1:
/*<  8>*/ 			switch (story_flags[30 /* us: 805A9ADA 0x40, jp: 805ACD5A 0x40 */]) {
          			  case 0:
/*<  9>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00081d04><0x30001:0x><heroname>... Le directeur m'a\nraconté ce qui s'est passé. Je suis très\ninquiet au sujet de Zelda...\n\nMais personne n'en sait plus...\n\n\n\nL'épée que tu portes ne vient pas de\nCélesbourg. C'est une <color red<relique antique\n>coloroff>que seul celui qui en sera jugé digne\npourra brandir.\nSi tu l'as en ta possession, alors ça veut\ndire que...")
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00001d00><0x30001:0x><heroname>, je ne peux rien faire\npour toi tant que tu n'as pas de\n<color red<bouclier>coloroff>...\n\n<0x10009:0x00191d00>Quand tu en auras un, je pourrai\nt'enseigner l'<color red<art de la défense>coloroff>. Ça\nfait partie de mon rôle de professeur!")
/*< 10>*/ 				scene_flags[0 'Skyloft'][59 /* 0x6 08 */] = true;
          			  case 1:
/*<  5>*/ 				switch (scene_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*<  6>*/ 					printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000005>Oui? Oh, tu veux savoir comment\nutiliser ton épée?\n[1-]Oui[2]Non merci")
/*<  4>*/ 					switch (choice(2)) {
          					  case 0:
/*<  3>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00090203>C'est très facile! Il te suffit\nd'agiter la manette Wii Remote pour\n<color red<donner des coups d'épée>coloroff>!\n\nAgite-la vers le haut ou\nle bas pour <color green<trancher verticalement>coloroff>\net agite-la de côté pour <color green<trancher\nhorizontalement>coloroff>.\nEnfonce la manette Wii Remote\nvers l'avant pour faire un <color green<coup\nde pointe>coloroff>.\n\n<0x10009:0x00170200>La technique d'attaque la plus efficace\nest l'<color green<attaque circulaire>coloroff>! Il faut agiter\nsimultanément la manette\nWii Remote et le Nunchuk.\n<0x10009:0x00181d00>Ces trois techniques sont\nindispensables au combat,\nmais n'oublie pas non plus\nles mouvements de base!\n<0x10009:0x00001d04>Par exemple, <color red<cibler >coloroff>les ennemis\navec (Z). Appuie sur (Z)\ndès que tu aperçois un ennemi!<0x10011:0x07cd>")
          						flw_7:
/*<  7>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x001c1d03>Tu devrais t'entraîner sur ces <color red<troncs\nd'arbres>coloroff>.\n\n\n<0x10009:0x00090200>Si tu as des difficultés à diriger ton\népée, commence par donner quelques\n<color green<coups d'épée>coloroff> <color red<à la verticale>coloroff>, tout droit\ndevant toi.\n<0x10009:0x00080200>Si tu parviens à couper tous les troncs,\nje te ferai essayer une <color red<technique\navancée>coloroff>.")
          					  case 1:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000e1a08>Évidemment... Tu as toujours su\nmanier l'épée!\n\n\n<0x10009:0x00080200>Mais il ne faut pas s'asseoir sur ses\nlauriers! Même si on est doué, il faut\ns'entraîner régulièrement!\n\n<0x10009:0x00191d00><color red<Cibler les ennemis>coloroff> avec (Z), par\nexemple, est un élément de base\nqu'il faut maîtriser à fond.")
          						goto flw_7
          					}
          				  case 1:
/*<  1>*/ 					printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000003>Salut, <heroname>!\n\n\n\n<0x10009:0x00090200>C'est aujourd'hui le grand jour de la\nchevauchée céleste, et tu veux\nt'entraîner à l'épée? Très bien,\ntrès bien!\nVa te chercher une épée dans la pièce\ndu fond.\n\n\nN'hésite pas à revenir me poser des\nquestions, je reste ici.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_119_04() {
/*< 76>*/ 	start()
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010201>Ce tronc sert à s'entraîner aux <color red<coups\nverticaux>coloroff>. Agite la manette\nWii Remote du haut vers le bas pour\ncouper le tronc d'arbre.")
          }

          void entrypoint_119_05() {
/*< 80>*/ 	start()
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00190203>Ce tronc sert à s'entraîner aux <color red<coups\nhorizontaux>coloroff>. Agite la\nmanette Wii Remote latéralement\npour couper le tronc d'arbre.")
          }

          void entrypoint_119_06() {
/*< 81>*/ 	start()
/*< 86>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x001d0202>Ce tronc sert à s'entraîner aux <color red<coups\ndiagonaux>coloroff>. Agite la manette\nWii Remote en diagonale pour couper\nle tronc d'arbre.")
          }

          void entrypoint_119_07() {
/*< 82>*/ 	start()
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00080203>Ce tronc sert à s'entraîner aux <color red<coups\nde pointe>coloroff>. Pointe la manette Wii\nRemote vers l'écran et agite-la\nvers l'avant.")
          }

          void entrypoint_119_08() {
/*< 83>*/ 	start()
/*<161>*/ 	switch (adventure_pouch_has(0 0x0000)) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00190202>Ce tronc sert à s'entraîner aux\ntechniques de <color red<défense>coloroff>.\n\n\n<0x10009:0x001c1d00>Donne un coup d'épée dans le tronc,\npuis fais une <color red<charge bouclier >coloroff>en\n<color green<agitant le Nunchuk en avant >coloroff>quand\nle tronc revient vers toi.")
          	  case 1:
/*< 77>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x00191d02>Ça, c'est le tronc réservé à\nl'entraînement à la <color red<défense>coloroff>.\nÉquipe un <color red<bouclier >coloroff>et sois vigilant,\nou il te fera tomber à la renverse!")
          		  case 1:
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00191d02>Ce tronc sert à s'entraîner aux\ntechniques de <color red<défense>coloroff>. Comme tu\nn'es pas équipé d'un <color red<bouclier>coloroff>, sois\nprudent si tu t'en approches.")
          		}
          	}
          }

          void entrypoint_119_09() {
/*<109>*/ 	start()
/*<114>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000a0213>Félicitations, <heroname>!")
/*<116>*/ 	set_camera(3, 0)
/*<110>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00081908>Quel talent! Je suis très fier de toi!\n\n\n\n<0x10009:0x00090200>Tu veux essayer l'<color green<attaque circulaire\n>coloroff>maintenant?\n[1-]Oui![2]Plus tard")
          }

