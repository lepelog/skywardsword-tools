          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000004>De toute façon, c'est pas possible de voler\nla nuit.\n\n\nSi tu veux prendre le ciel, va te coucher en\nattendant demain matin !")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00000001>Eh bien ! Qu'est‐ce que tu fais encore debout\nà cette heure‐ci ?\n\n\n<0x10009:0x000c0c09>Ne me dis pas que tu comptes partir à dos\nde célestrier ?!\n\n\n<0x10009:0x00090c00>Tu ne sais donc pas que les célestriers ne\npeuvent pas voler la nuit ?\n\n\nMis à part les oiseaux qui ont suivi un\nentraînement spécial, ils ne voient rien\ndans le noir !\n\n<0x10009:0x00080400>Si tu veux prendre le ciel, attends demain\nmatin !\n\n\nVa donc faire un somme dans ton lit en\nattendant que le jour se lève ! Tu n'es pas\nsi pressé que ça, si ?")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x000b0c00>Tu ne trouveras rien en restant ici. Va voir\ndehors si tu trouves quelque chose.\n\n\nJe vais mener mon enquête de mon côté.\nJe te ferai signe si je trouve quelque chose.")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000c06>Mais qu'est‐ce que tu fais encore à traîner\ndans les couloirs de l'école ?!\n\n\n<0x10009:0x000c0c09>Comment ?!<pause 20> Ton célestrier ne vient pas quand\ntu l'appelles ?\n\n\n<0x10009:0x00010c00>Pourquoi ton oiseau protecteur ne répond‐il\npas à ton appel ?\n\n\nC'est la première fois que j'entends une telle\nhistoire, c'est incompréhensible.\n\n\n<0x10009:0x00080400>En tant qu'aîné, mon rôle est de te venir\nen aide !\n\n\n<0x10009:0x000b0c00>Pendant que je cherche de mon côté, va voir\nvers la grand‐place si quelqu'un sait quelque\nchose.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000c0405>Si tu as un problème avec ton oiseau, n'hésite\npas à m'en parler.")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x00090401>Bonjour, <heroname> !\n\n\n\n<0x10009:0x00080400>C'est aujourd'hui le grand jour, la <color red<chevauchée\ncéleste >coloroff>! Est‐ce que tu es prêt ?\n\n\nTu m'as l'air bien détendu. Tous les autres sont\ndéjà à la grand‐place pour s'entraîner.\n\n\n<0x10009:0x000b0400>Ton <color red<célestrier vermeil >coloroff>est vraiment un oiseau\nexceptionnel.\n\n\nLa dernière fois, mon oiseau a remporté la\nchevauchée céleste mais je ne sais pas s'il\npourrait battre le tien...\n\n<0x10009:0x00080400>Mais il n'y a pas de bon oiseau sans bon\nchevaucheur. Tous les jours, je poursuis\nmes recherches sur les oiseaux.\n\n<0x10009:0x000c0405>Alors si jamais tu as un problème avec ton\noiseau, n'hésite pas à venir me voir, moi ton\naîné <color blue<Kiko>coloroff> !")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<137>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000006>Tu trouveras <color blue<Kiko>coloroff> près de la <color red<salle d'escrime\n>coloroff>derrière l'école.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00080406>Comment ?<pause 40> Où est‐ce qu'<color blue<Hergo>coloroff> aurait pu\naller ?\n\n\n<0x10009:0x00000d00>Qu'est‐ce qu'ils ont encore fait, lui et ses\nsous‐fifres ?\n\n\n<0x10009:0x000c0400>Je sais pas où ils se cachent. Mais peut‐être\nque <color blue<Kiko>coloroff> sait quelque chose.\n\n\n<0x10009:0x00080e04>Justement, je crois qu'il te cherchait<0x10006:0xfccd>...<0x10006:0x00cd>\nIl est près de la <color red<salle d'escrime>coloroff>, je crois.")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00010406>Tiens ? Qu'est‐ce qui t'arrive, \n<heroname> ? Tu as l'air soucieux.\n\n\n<0x10009:0x00080d00>Quoi ?!<pause 40> Ton <color red<célestrier>coloroff> a disparu ?!\n\n\n\n<0x10009:0x000c0d12>Hmm<0x10006:0xfccd>...<0x10006:0x00cd> Je n'ai pas bougé de l'école, alors j'ai\npas vu grand‐chose.")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Normalement, c'est à elle d'ouvrir les portes. Pourquoi\nil faut que ce soit moi qui m'y colle ?!")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00010406>Tiens ? Qu'est‐ce qui t'arrive, \n<heroname> ? Tu as l'air soucieux.\n\n\n<0x10009:0x00080d00>Quoi ?!<pause 40> Ton <color red<célestrier>coloroff> a disparu ?!\n\n\n\n<0x10009:0x000c0d12>Hmm<0x10006:0xfccd>...<0x10006:0x00cd> Je n'ai pas bougé de l'école, alors j'ai\npas vu grand‐chose.")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00080900>Si tu remportes la <color red<chevauchée céleste>coloroff>, tu seras\navec nous dans la <color red<classe supérieure>coloroff>. Faisons de\nnotre mieux pour devenir des chevaliers !")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080901>Bonjour, <heroname> ! Bon courage pour\nla <color red<chevauchée céleste >coloroff>!\n\n\n<0x10009:0x00000400>Si tu sors vainqueur, tu passeras dans la <color red<classe\nsupérieure >coloroff>comme nous. C'est la dernière étape\navant de devenir <color red<chevalier>coloroff>.\n\n<0x10009:0x00080900>Et tu recevras un <color red<uniforme de chevalier >coloroff>comme\nle mien ! Je suis sûre que tu auras la grande\nclasse !\n\n<0x10009:0x000b0713>Enfin... Pas autant que lui... Haa...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x10009:0x00000001>Regarde un peu cette statue. Je sais pas depuis\nquand elle est là, mais...\n\n\n... elle a qu'un seul œil, la pauvre...\n\n\n\nTu peux l'observer de plus près en appuyant\nsur (^) !<0x10011:0x08cd>")
          }

          void entrypoint_100_30() {
/*<172>*/ 	start()
/*<173>*/ 	set_camera(30, 0)
/*<175>*/ 	set_camera(31, 0)
/*<174>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<152>*/ 	start()
/*<157>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<158>*/ 		printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000004>Hmm... Je sens que ma soupe va encore être\ndélicieuse !")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000002>Où est encore passé ce petit chenapan ?\nIl devrait savoir que c'est bientôt l'heure\nde manger !\n\nJe parie qu'il est encore en train de courir\naprès des insectes...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000007>Qu'est‐ce que tu fabriques ? Maintenant que\ntu m'as apporté ça, laisse‐le donc ici !\n\n\n<0x10009:0x00001200>Allez, va donc voir ailleurs si j'y suis au lieu de\nfaire n'importe quoi !")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00080909>Ah ! <0x30001:0x><heroname> ! Encore merci ! Grâce\nà toi, je suis aux anges !\n\n\nCette nuit encore, il monte la garde.\nEt personne ne le lui a demandé !\n\n\n<0x10009:0x000e090a>Il est vraiment formidable !")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000e12>Je ne sais vraiment pas quoi faire avec la lettre\nd'Orbo...\n\n\n<0x10009:0x000b0e00>Qu'est‐ce que Kiko dirait s'il l'apprenait...?")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x00080d57>Comment ? Tu as quelque chose à me dire ?\nÇa peut pas attendre demain...?")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x000a0e57>Dis donc ! Ça ne se fait pas d'entrer dans la\nchambre d'une demoiselle en pleine nuit sans\nfrapper !\n\nJ'étais sur le point d'aller prendre un\nbain, alors si tu voulais bien sortir,\n<heroname> !\n\n<0x10009:0x000c0e14>Mais ça commence à faire un bon moment que\nla salle de bain est occupée. Qui est‐ce qui peut\nmettre aussi longtemps ?")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000c0d14>Comment Zelda a‐t‐elle pu tomber sous la mer\nde nuages, elle qui est si douée pour chevaucher\nson oiseau ?\n\n<0x10009:0x000a0d06>Comment, tu as vu un fantôme ? Mon\npauvre, le choc a été si grand que tu as\ndes hallucinations.")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x00010002><0x30001:0x><heroname> !<0x1000D:0x1906>")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "Si tu vas à la grand‐place, passe par la porte\ndu rez‐de‐chaussée.\n\n\n<0x10009:0x00090400>La porte du premier est fermée à clé.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x000c0c16>Pourquoi la cantinière n'a pas encore ouvert ?\nIl faudra que je lui en touche deux mots.")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00000c05>Laisse‐moi te donner un conseil.\n\n\n\nAvant de te rendre dans un endroit dangereux,\nprends l'habitude de <color red<sauvegarder en faisant une\nprière à la Déesse>coloroff>.\n\nLes <color red<statues >coloroff>où tu peux prier sont indiquées sur\nta carte. Alors jettes‐y un œil de temps en temps\npour ne pas te perdre.")
          		  case 1:
/*<278>*/ 			printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000c0c05>Si tu vas du côté de la cascade, tu devrais\nprendre une <color red<épée>coloroff>. Il y a des créatures\ninquiétantes qui rôdent par là‐bas.\n\n<0x10013:0x><0x10009:0x00090c00><0x1000A:0x002000cd>Le <color blue<capitaine des chevaliers>coloroff> est entré dans la\nsalle d'escrime tout à l'heure. Si tu allais lui\ndemander de te prêter une épée ?")
          		}
          	  case 1:
/*<102>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 72, 'param3': 31}
/*< 72>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 191, 'param3': 32}
/*<191>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 192, 'param3': 47}
/*<192>*/ 		set_camera(13, 0)
/*<193>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 195, 'param3': 15}
/*<195>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 194, 'param3': 16}
/*<194>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 70, 'param3': 48}
/*< 70>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00080401>Ah, <heroname> ! Te voilà, je te\ncherchais !")
          			flw_71:
/*< 71>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00090c00>J'ai mené ma petite enquête sur la disparition\nde ton célestrier.\n\n\n<0x10009:0x00000c00>Quand j'en ai parlé à Célestin, il a fait une\ndrôle de tête... donc je lui ai tiré les vers du nez.")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c000812>Je suis désolé, <heroname> !\n\n\n\n<0x10009:0x0c000800>Je voulais tout te raconter mais<0x10006:0xfbcd>...<0x10006:0x00cd> Si <color blue<Hergo\n>coloroff>apprenait que je t'en ai parlé...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000c16>Visiblement, <color blue<Hergo>coloroff> s'est arrangé pour le faire\ntaire.")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00080c00>Allez !<pause 35> Avoue, maintenant !")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x0c070e11>Tout à l'heure, quand je faisais le ménage à la\ncantine, Hergo et sa bande sont arrivés...\n\n\n<0x10009:0x0c000800>Au début, ils ne m'ont pas remarqué. Ils ont\ncommencé à comploter pour <color red<cacher>coloroff> ton\ncélestrier quelque part.\n\n<0x10009:0x0c000800>J'ai voulu quitter la cantine pour aller\nte prévenir...\n\n\n<0x10009:0x0c010e00>Mais Hergo et sa bande m'ont repéré...\n\n\n\n<0x10009:0x0c070e00>Ils m'ont dit que si je te disais quoi que ce soit,\nils feraient en sorte que je ne puisse plus jamais\nchevaucher d'oiseau...")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00090c00>Il semblerait qu'<color blue<Hergo>coloroff> et ses acolytes aient mis\nau point un plan pour capturer ton oiseau et le\ncacher vers la <color red<<sound 4>cascade>coloroff>.\n\n<0x10009:0x00080c00>La cascade se trouve<0x10006:0xfbcd>...<0x10006:0x00cd> <pause 40>Fais‐moi voir ta <color red<carte>coloroff>.")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "Regarde, c'est ici ! C'est la <color red<cascade >coloroff>indiquée\npar une (X).")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000404>Tu sais comment on consulte la carte ? En\nappuyant sur (-) à tout moment, tu peux\nafficher la carte de l'endroit où tu te trouves.<0x10011:0x02cd>\n<0x10009:0x00080400>Donc, quand tu es perdu, appuie sur (-) !<0x10011:0x02cd>")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0c000819>Pardon, <heroname> ! Je ne suis qu'un\npoltron... Je suis vraiment désolé.")
/*< 87>*/ 					scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<285>*/ 					switch (temp_flags[54 /* 0x7 40 */]) {
          					  case 0:
/*<154>*/ 						story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          						flw_156:
/*<156>*/ 						story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<149>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						goto flw_156
          					}
          				  case 1:
          					goto flw_85
          				}
          			  case 1:
/*<280>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
          					goto flw_283
          				  case 1:
/*<281>*/ 					temp_flags[54 /* 0x7 40 */] = true;
          					goto flw_283
          				}
          			}
          		  case 1:
/*<101>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00000c01><0x30001:0x><heroname> ! Tu tombes bien...")
/*<148>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_71
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 48>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 50>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 2, line: 33 */ "<0x10009:0x00000004>Afin de rejoindre la statue de la Déesse sans te\nperdre, appuie sur (-) pour regarder ta <color red<carte>coloroff>.\nTu peux aller chercher ton oiseau de là‐bas.<0x10011:0x02cd>")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000004>Que t'arrive‐t‐il, <heroname> ? <pause 40><0x10009:0x00001100>Quoi ?!\nTon célestrier<pause 50> a disparu...<0x10006:0xfbcd>?<0x10006:0x00cd>\n\n\n<0x10009:0x00111100>Mais c'est très grave, ça ! Moi qui me faisais\nune joie de voir ses ailes vermeilles fendre\nle ciel...\n\nNon<0x10006:0xfbcd>...<0x10006:0x00cd> je ne sais pas où il est...\n\n\n\n<0x10009:0x000a1100>Hmm<0x10006:0xfbcd>...<0x10006:0x00cd> Depuis la statue de la Déesse, on a une\nvue d'ensemble sur le bourg. Si tu allais voir\nlà‐bas ?")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000004>Que t'arrive‐t‐il, <heroname> ? <pause 40><0x10009:0x00001100>Quoi ?!\nTon célestrier<pause 50> a disparu...<0x10006:0xfbcd>?<0x10006:0x00cd>\n\n\n<0x10009:0x00111100>Mais c'est très grave, ça ! Moi qui me faisais\nune joie de voir ses ailes vermeilles fendre\nle ciel...\n\nNon<0x10006:0xfbcd>...<0x10006:0x00cd> je ne sais pas où il est...\n\n\n\n<0x10009:0x000a1100>Hmm<0x10006:0xfbcd>...<0x10006:0x00cd> Depuis la statue de la Déesse, on a une\nvue d'ensemble sur le bourg. Si tu allais voir\nlà‐bas ?")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf(/* textboxtype: 0, unk: 1, line: 91 */ "La <color red<statue de la Déesse>coloroff> est la statue gigantesque\nau nord de Célesbourg. Son emplacement est\nmarqué d'une (X).")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000404>Tu sais comment on consulte la carte ? En\nappuyant sur (-) à tout moment, tu peux\nafficher la carte de l'endroit où tu te trouves.<0x10011:0x02cd>\n\nDonc, quand tu es perdu, pense à consulter\nla carte !<0x10011:0x02cd>")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x000a0705>Je compte sur toi et ton célestrier vermeil\npour ne pas me décevoir.")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000001>Salut <heroname> ! La chevauchée\ncéleste va bientôt commencer !\n\n\nLa dernière fois, <color blue<Kiko>coloroff> a remporté la victoire\nsur le fil. C'était vraiment un beau spectacle.\n\n\n<0x10009:0x000a0700>Aujourd'hui, on va pouvoir admirer ton\ncélestrier vermeil en action ! <pause 40>J'ai hâte\nde voir ça. Bon courage !")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x00000002><0x10008:0x02cd>Hé oh !<0x1000D:0x1906> <0x30001:0x><heroname> !")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10008:0x02cd>Par ici !<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>Il faut que je te parle de ton célestrier. \nViens par ici !")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Quoi ? Qu'est‐ce qu'il a ton célestrier ?\n\n\n\n<0x10009:0x00100e00>Je suis occupée, là. J'ai pas le temps pour\nces histoires !")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>C'est bientôt l'heure de la <color red<chevauchée céleste>coloroff>,\nnon ? Ne reste pas ici à bayer aux corneilles.")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x00000002>Aah... J'ai demandé à <color blue<Célestin>coloroff> de m'apporter\ndes <color red<tonneaux>coloroff>. Il en met, du temps...\n\n\n<0x10009:0x00100f00>Qu'est‐ce qu'il peut bien fabriquer ?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10012:0x00000001>Maître, selon mes estimations, au bout de cette\nlumière devrait se trouver un indice à propos\ndes trois flammes.\n\nJe vous recommande de vous rendre à l'endroit\nqu'indique le rai de lumière.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000004>Ah, au fait, <heroname> !")
/*< 96>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x000c0c05>Si tu vas du côté de la cascade, tu devrais\nprendre une <color red<épée>coloroff>. Il y a des créatures\ninquiétantes qui rôdent par là‐bas.\n\n<0x10013:0x><0x10009:0x00090c00><0x1000A:0x002000cd>Le <color blue<capitaine des chevaliers>coloroff> est entré dans la\nsalle d'escrime tout à l'heure. Si tu allais lui\ndemander de te prêter une épée ?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000005>Oui ? T'as encore quelque chose à me\ndemander ?\n[1-]Où est mon\noiseau ?[2-]Où est Hergo ?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10009:0x00000012>Je sais pas vraiment par où il est parti. Désolé.")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x00000004><color blue<Hergo>coloroff> et sa clique ont dit qu'ils allaient\ninspecter le point de rassemblement de\nla <color red<chevauchée céleste>coloroff>.\n\nIls doivent être sur la grand‐place.")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Eh ben, qu'est‐ce qui t'arrive ? T'as l'air tout\npaniqué...\n\n\nQuoi ? Ton célestrier a disparu ? <pause 50>Maintenant\nque tu le dis... <sound 4>Je l'ai <color red<aperçu>coloroff> tout à l'heure.\n\n\nIl essayait de s'enfuir alors que les célestriers\nd'<color blue<Hergo>coloroff> et sa bande le poursuivaient.\n[1-]Par où ?[2-]Hergo ?")
          				goto flw_16
          			  case 1:
/*<235>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 61, 'param3': 31}
          				goto flw_61
          			}
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 56, 'param3': 31}
/*< 56>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000003>J'aurai bientôt fini de réparer cette porte,\nmais pour l'instant, évite de passer par là.\n[1-]Où est Zelda ?[2-]La chevauchée\ncéleste ?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000005><color blue<Zelda >coloroff>?<pause 30> Je l'ai vue se diriger vers la statue de\nla Déesse avec m'sieur <color blue<Gaepora>coloroff>.\n\n\nComment ?<pause 30> Tu sais pas où est la statue de la\nDéesse ? C'est dans ces moments‐là qu'il faut\npasser en vue subjective avec <icon 34> !<0x10011:0x08cd>")
          			  case 1:
/*< 59>*/ 				printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x00000003>Tu dois participer à la <color red<chevauchée céleste\n>coloroff>aujourd'hui, non ?\n\n\nSi tu en sors vainqueur, tu passeras dans la\n<color red<classe supérieure >coloroff>de l'école de chevalerie.\nAprès quoi, tu pourras devenir <color red<chevalier>coloroff>.\n\nLes chevaliers sont les garants de la sécurité\nde Célesbourg. En faire partie est un grand\nhonneur. J'ai hâte de te voir à l'œuvre !")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000001>Ah, <heroname> ! Bien le bonjour !\nT'as bien dormi cette nuit ?\n\n\nTant mieux. J'avais peur que t'arrives pas à\ndormir à cause de la <color red<chevauchée céleste\n>coloroff>d'aujourd'hui.\n\nQuoi ? Moi ?<pause 40> Eh ben, je répare cette porte...\n\n\n\nCes derniers temps, elle ferme plus très bien.\nUne cérémonie importante va se dérouler\naujourd'hui, alors il faut qu'elle soit réparée.\n\n<0x10009:0x000c0c00>Mais dis‐moi plutôt, est‐ce que tu as bien fait\nta <color red<prière>coloroff> à la Déesse, ce matin ?\n\n\n<0x1000A:0x000600cd>Si tu fais une prière face à la <color red<statue >coloroff>que tu vois\nlà‐bas, tu peux <color red<sauvegarder >coloroff>ta progression.\n\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>On trouve de ces statues un peu partout dans\nCélesbourg.\n\n\nAlors prends l'habitude de prier chaque fois\nque tu en vois une.\n\n\n<0x10009:0x00000008>Tu sais ce qu'on dit...\n« <color red<Prudence est mère de sûreté>coloroff>. »")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x0c000800><0x10006:0xfbcd>... <0x10006:0x00cd><0x30001:0x><heroname>... Tu pourras le retrouver\nà temps ?\n\n\n<0x10009:0x0c000e06>Je ne suis qu'un misérable<0x10006:0xfbcd>...<0x10006:0x00cd> Pardon.")
          	  case 1:
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x0c010900><0x10006:0xfbcd>......<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Hé, l'apprenti ! Qu'est‐ce qu'on t'a appris à\nl'école ? C'est pas comme ça que tu vas devenir\nun vrai chevalier !")
          	  case 1:
/*<179>*/ 		printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x00000002>Fais un peu attention ! C'est pas parce que la\npatrouille de sauvetage veille au grain qu'il faut\nfaire n'importe quoi !")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x000f1300>Et flûte ! Mon <color blue<lucane du bourg >coloroff>s'est enfui.\nJe l'avais presque attrapé...\n\n\n<0x10009:0x000a0900>Attraper des insectes sans filet à papillons,\nc'est même pas la peine d'y penser.\n\n\nJ'aurais pas dû jeter celui que j'avais acheté\nà la <color red<boutique de Terry>coloroff>... <0x10009:0x00110200>Pff...")
          		  case 1:
/*<103>*/ 			printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000004>Pour faire une <color green<attaque roulade>coloroff>, commence par\nfoncer, et après, le truc, c'est de faire une\nroulade<color red< >coloroff>juste avant d'arriver à l'endroit que\ntu veux attaquer.\nSi t'arrives à faire BAM, y aura peut‐être des\ntrucs qui tomberont.\n\n\nAllez !<pause 30> Essaie pour voir !")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000001><0x1000D:0x1906><0x30001:0x><heroname>, tu tombes bien !\n\n\n<0x1000D:0x0500>\nDis... Je peux te demander un truc ?\n\n\n\nTu voudrais pas faire comme moi, <color green<foncer >coloroff>vers\ncet arbre et faire une <color green<attaque roulade >coloroff>?\n\n\nLe truc, c'est de <color green<faire une roulade >coloroff>quand tu es\njuste devant l'arbre et BAM !\n\n\nAllez...<pause 30> s'te plaît !")
/*<224>*/ 		scene_flags[0 'Skyloft'][61 /* 0x6 20 */] = true;
/*<226>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          	}
          }

          void entrypoint_100_22() {
/*<170>*/ 	start()
/*<198>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<199>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<200>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_212:
/*<212>*/ 				printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000001>Ces derniers temps, je n'entends plus la voix\ndans les toilettes. Je me demande bien qui\nc'était...")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Ces derniers temps, quand je passe devant les\n<color red<toilettes>coloroff>, la <color red<nuit>coloroff>, j'entends une voix.\n\n\nJe me demande qui peut bien rester enfermé\nlà‐dedans. En tout cas, c'est très agaçant !")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Au fait, ça fait un moment que je n'ai pas vu\nHergo. Où est‐ce qu'il a bien pu passer ?")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Alors, comment vas‐tu ? Puisque tu es là,\nprofites‐en pour aller passer une bonne nuit\nde sommeil dans ton <color red<lit>coloroff>.")
          				  case 1:
/*<171>*/ 					printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x00000001>Oh ! Tu t'en vas ? <pause 20>Alors je suppose que tu ne\nviendras plus manger ici pendant un moment.\n\n\n<0x10009:0x000a0c00>Fais bien attention à toi !\n\n\n\n<0x10009:0x00090800>Et reviens nous voir de temps en temps. Tu sais\nce qu'on dit, on ne dort jamais mieux que dans\nson lit.")
          				}
          			}
          		}
          	  case 1:
          		goto flw_214
          	}
          }

          void entrypoint_100_57() {
/*<206>*/ 	start()
/*<207>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<209>*/ 		printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x00000002>Hé, l'apprenti ! C'est pas comme ça que tu vas\ndevenir un vrai chevalier !\n\n\nEt n'oublie pas que seuls les chevaucheurs\naguerris tels que nous sont autorisés à voler\nla nuit ! Alors, gare à toi !")
          	  case 1:
/*<208>*/ 		printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Fais attention où tu mets les pieds ! La nuit,\non n'y voit pas grand‐chose, alors c'est facile\nde tomber dans le vide.\n\nDe plus, seuls les chevaucheurs aguerris tels\nque nous sont autorisés à voler la nuit ! Alors,\ngare à toi !")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf(/* textboxtype: 1, unk: 0, line: 90 */ "Au sud de Célesbourg... L'endroit marqué\nd'une (X) sur la carte est la grand‐place d'où\npartira la <color red<chevauchée céleste >coloroff>aujourd'hui.")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf(/* textboxtype: 0, unk: 0, line: 92 */ "<0x10009:0x00000404>Sais‐tu comment on consulte la carte ? Il te\nsuffit d'appuyer sur (-) à tout moment.<0x10011:0x02cd>\n\n\nAlors si tu es perdu, pense à consulter ta carte.<0x10011:0x02cd>")
/*<236>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	}
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<161>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<210>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<211>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<203>*/ 				printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000001>Je n'entends plus la voix dans les toilettes,\nla nuit.\n\n\nMais maintenant, j'entends Orbo pleurer dans\nson sommeil, dans la chambre d'Hergo...\nJ'aimerais bien qu'il arrête de faire ça...")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000001>Au fait, ça fait un moment que je n'ai pas vu\nHergo. Où est‐ce qu'il a bien pu passer ?")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Alors, comment vas‐tu ? Puisque tu es là,\nprofites‐en pour aller passer une bonne nuit\nde sommeil dans ton <color red<lit>coloroff>.")
          				  case 1:
/*<162>*/ 					printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x00000b05>Ah, c'est bien plus calme la nuit, quand ces\npetits monstres sont au lit.\n\n\n<0x10009:0x000a0800>Alors tes recherches avancent ? Tu crois\nque tu pourras bientôt retrouver Zelda ?\nBon courage !")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000003>Allez, je ferme cette porte ! Il faudrait pas que\ndes monstres rentrent pendant la nuit...\n\n\nJe laisse ouvert en haut mais il vaut mieux\néviter de sortir en pleine nuit...\n\n\nEnfin, je comprends que tu veuilles retrouver\nton amie Zelda au plus vite.\n\n\nEn général, la nuit, les habitants de Célesbourg\nrestent chez eux.")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "<0x10009:0x00000008>Ouais !<pause 30> T'as réussi ! Mon <color blue<lucane du bourg>coloroff> !\n\n\n\nHé ! Attends !")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf(/* textboxtype: 1, unk: 0, line: 21 */ "Pour aller à la grand‐place, le plus court serait\nde descendre par là...\n\n\nMais j'ai pas fini de réparer cette porte. Désolé\nmais va falloir que tu fasses un détour par\nl'école. J'ai ouvert la porte en bas.\n\nSi t'es perdu, n'oublie pas que tu peux consulter\nta carte en appuyant sur (-) !<0x10011:0x02cd>")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Regarde... Au sud de Célesbourg...\nLa (X) sur la carte, c'est la grand‐place.\n\n\nC'est de là que partira la <color red<chevauchée céleste\n>coloroff>aujourd'hui, tu devrais savoir où elle est, non ?")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>Cette fois, ça suffit !<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Ça va se régler avec le directeur ! Et je ferai\nen sorte que tu sois renvoyé !")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Arrête ça tout de suite !<0x1000D:0x1906>\nEspèce de petit voyou !\n\n\n<0x1000A:0x000f00cd>Si tu continues, tu seras privé de repas pendant\nune semaine !")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>Mais qu'est‐ce que tu fais ?!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Tu vas me faire le plaisir de nettoyer tout ça !")
/*<116>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 2, line: 33 */ "<0x10009:0x00000004>Afin de rejoindre la statue de la Déesse sans te\nperdre, appuie sur (-) pour regarder ta <color red<carte>coloroff>.\nTu peux aller chercher ton oiseau de là‐bas.<0x10011:0x02cd>")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000057>Que se passe‐t‐il, <heroname> ? Tu as\nl'air tout paniqué...\n\n\nTon oiseau ? Ah, le célestrier vermeil ? <pause 40>Si je\nsais où il est ?<0x10006:0xfbcd><0x10006:0x00cd>\n\n\n<0x10009:0x00110200>Non, je ne l'ai pas vu.\n\n\n\n<0x10009:0x00090204>Depuis la statue de la Déesse, on a une vue\nd'ensemble sur le bourg. Si tu allais voir\nlà‐bas ?")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000057>Que se passe‐t‐il, <heroname> ? Tu as\nl'air tout paniqué...\n\n\nTon oiseau ? Ah, le célestrier vermeil ? <pause 40>Si je\nsais où il est ?<0x10006:0xfbcd><0x10006:0x00cd>\n\n\n<0x10009:0x00110200>Non, je ne l'ai pas vu.\n\n\n\n<0x10009:0x00090204>Depuis la statue de la Déesse, on a une vue\nd'ensemble sur le bourg. Si tu allais voir\nlà‐bas ?")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf(/* textboxtype: 0, unk: 0, line: 89 */ "La <color red<statue de la Déesse>coloroff> est la gigantesque statue\nqui se trouve au nord de Célesbourg. Tu y es\ndéjà allé, non ? Son emplacement est marqué\nd'une (X).")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000404>Tu sais comment on consulte la carte ? En\nappuyant sur (-) à tout moment, tu peux\nafficher la carte de l'endroit où tu te trouves.<0x10011:0x02cd>\n\nDonc, quand tu es perdu, tu peux toujours\ncompter sur ta carte !<0x10011:0x02cd>")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x000c0209>J'aimerais juste une fois jouer le rôle de la\nDéesse lors de la chevauchée céleste pour\npasser un moment romantique avec un beau\nchevalier.")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Oh ! Bonjour, <heroname> ! Aujourd'hui,\navec cette douce brise, c'est le jour\nidéal pour la cérémonie.\n\n<0x10009:0x00110200>Je me demande bien qui va gagner. Sûrement\n<color blue<Hergo>coloroff>, il est très doué.\n\n\n<0x10009:0x000c0200>Le vainqueur sera récompensé par la jeune\nfille qui joue le rôle de la Déesse. <0x10009:0x00000609>Comme\nc'est romantique...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00090802>Tiens, c'est toi, <heroname> ? C'est à\n<color blue<Célestin>coloroff> que j'avais demandé de\nfaire ça. Enfin, peu importe...\n\n<0x10009:0x000a0c00>Tu as pourtant une cérémonie importante\naujourd'hui, non ? C'est gentil de prendre\nle temps de m'aider.")
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x000a0401>Tiens, <heroname> ! C'est toi qui fais\nla livraison ?\n\n\n<0x10009:0x00100802>Pourtant, c'est à <color blue<Célestin>coloroff> que j'avais demandé...\n\n\n\n<0x10009:0x00090400>Enfin, peu importe. Apporte ce <color red<tonneau >coloroff>par ici.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "")
          }

