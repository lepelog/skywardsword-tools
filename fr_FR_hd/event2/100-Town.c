          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<164>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<168>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x00\x04De toute façon, c'est pas possible de voler\nla nuit.\n\n\nSi tu veux prendre le ciel, va te coucher en\nattendant demain matin !")
          		  case 1:
/*<169>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 165, 'param3': 31}
/*<165>*/ 			printf("\x0E\x01\x09\x04\x00\x01Eh bien ! Qu'est\x2010ce que tu fais encore debout\nà cette heure\x2010ci ?\n\n\n\x0E\x01\x09\x04\x0C\xC09Ne me dis pas que tu comptes partir à dos\nde célestrier ?!\n\n\n\x0E\x01\x09\x04\x09\xC00Tu ne sais donc pas que les célestriers ne\npeuvent pas voler la nuit ?\n\n\nMis à part les oiseaux qui ont suivi un\nentraînement spécial, ils ne voient rien\ndans le noir !\n\n\x0E\x01\x09\x04\x08\x400Si tu veux prendre le ciel, attends demain\nmatin !\n\n\nVa donc faire un somme dans ton lit en\nattendant que le jour se lève ! Tu n'es pas\nsi pressé que ça, si ?")
/*<166>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Tu ne trouveras rien en restant ici. Va voir\ndehors si tu trouves quelque chose.\n\n\nJe vais mener mon enquête de mon côté.\nJe te ferai signe si je trouve quelque chose.")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06Mais qu'est\x2010ce que tu fais encore à traîner\ndans les couloirs de l'école ?!\n\n\n\x0E\x01\x09\x04\x0C\xC09Comment ?!<pause14> Ton célestrier ne vient pas quand\ntu l'appelles ?\n\n\n\x0E\x01\x09\x04\x01\xC00Pourquoi ton oiseau protecteur ne répond\x2010il\npas à ton appel ?\n\n\nC'est la première fois que j'entends une telle\nhistoire, c'est incompréhensible.\n\n\n\x0E\x01\x09\x04\x08\x400En tant qu'aîné, mon rôle est de te venir\nen aide !\n\n\n\x0E\x01\x09\x04\x0B\xC00Pendant que je cherche de mon côté, va voir\nvers la grand\x2010place si quelqu'un sait quelque\nchose.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Si tu as un problème avec ton oiseau, n'hésite\npas à m'en parler.")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Bonjour, Link !\n\n\n\n\x0E\x01\x09\x04\x08\x400C'est aujourd'hui le grand jour, la <r<chevauchée\ncéleste >>! Est\x2010ce que tu es prêt ?\n\n\nTu m'as l'air bien détendu. Tous les autres sont\ndéjà à la grand\x2010place pour s'entraîner.\n\n\n\x0E\x01\x09\x04\x0B\x400Ton <r<célestrier vermeil >>est vraiment un oiseau\nexceptionnel.\n\n\nLa dernière fois, mon oiseau a remporté la\nchevauchée céleste mais je ne sais pas s'il\npourrait battre le tien...\n\n\x0E\x01\x09\x04\x08\x400Mais il n'y a pas de bon oiseau sans bon\nchevaucheur. Tous les jours, je poursuis\nmes recherches sur les oiseaux.\n\n\x0E\x01\x09\x04\x0C\x405Alors si jamais tu as un problème avec ton\noiseau, n'hésite pas à venir me voir, moi ton\naîné <b<Kiko>> !")
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
/*<138>*/ 			printf("\x0E\x01\x09\x04\x00\x06Tu trouveras <b<Kiko>> près de la <r<salle d'escrime\n>>derrière l'école.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Comment ?<pause28> Où est\x2010ce qu'<b<Hergo>> aurait pu\naller ?\n\n\n\x0E\x01\x09\x04\x00\xD00Qu'est\x2010ce qu'ils ont encore fait, lui et ses\nsous\x2010fifres ?\n\n\n\x0E\x01\x09\x04\x0C\x400Je sais pas où ils se cachent. Mais peut\x2010être\nque <b<Kiko>> sait quelque chose.\n\n\n\x0E\x01\x09\x04\x08\xE04Justement, je crois qu'il te cherchait\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nIl est près de la <r<salle d'escrime>>, je crois.")
/*<136>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<134>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<135>*/ 				printf("\x0E\x01\x09\x04\x01\x406Tiens ? Qu'est\x2010ce qui t'arrive, \nLink ? Tu as l'air soucieux.\n\n\n\x0E\x01\x09\x04\x08\xD00Quoi ?!<pause28> Ton <r<célestrier>> a disparu ?!\n\n\n\n\x0E\x01\x09\x04\x0C\xD12Hmm\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je n'ai pas bougé de l'école, alors j'ai\npas vu grand\x2010chose.")
          			  case 1:
/*<142>*/ 				set_camera(14, 0)
/*<140>*/ 				make_actor_do_something(0, 0)
/*<132>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDNormalement, c'est à elle d'ouvrir les portes. Pourquoi\nil faut que ce soit moi qui m'y colle ?!")
/*<143>*/ 				set_camera(-1, 0)
/*<141>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Tiens ? Qu'est\x2010ce qui t'arrive, \nLink ? Tu as l'air soucieux.\n\n\n\x0E\x01\x09\x04\x08\xD00Quoi ?!<pause28> Ton <r<célestrier>> a disparu ?!\n\n\n\n\x0E\x01\x09\x04\x0C\xD12Hmm\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je n'ai pas bougé de l'école, alors j'ai\npas vu grand\x2010chose.")
/*<133>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<129>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<131>*/ 				printf("\x0E\x01\x09\x04\x08\x900Si tu remportes la <r<chevauchée céleste>>, tu seras\navec nous dans la <r<classe supérieure>>. Faisons de\nnotre mieux pour devenir des chevaliers !")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Bonjour, Link ! Bon courage pour\nla <r<chevauchée céleste >>!\n\n\n\x0E\x01\x09\x04\x00\x400Si tu sors vainqueur, tu passeras dans la <r<classe\nsupérieure >>comme nous. C'est la dernière étape\navant de devenir <r<chevalier>>.\n\n\x0E\x01\x09\x04\x08\x900Et tu recevras un <r<uniforme de chevalier >>comme\nle mien ! Je suis sûre que tu auras la grande\nclasse !\n\n\x0E\x01\x09\x04\x0B\x713Enfin... Pas autant que lui... Haa...")
/*<130>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<150>*/ 	start()
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Regarde un peu cette statue. Je sais pas depuis\nquand elle est là, mais...\n\n\n... elle a qu'un seul \x153il, la pauvre...\n\n\n\nTu peux l'observer de plus près en appuyant\nsur (^) !\x0E\x01\x11\x02\x8CD")
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
/*<158>*/ 		printf("\x0E\x01\x09\x04\x00\x04Hmm... Je sens que ma soupe va encore être\ndélicieuse !")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\x00\x02Où est encore passé ce petit chenapan ?\nIl devrait savoir que c'est bientôt l'heure\nde manger !\n\nJe parie qu'il est encore en train de courir\naprès des insectes...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Qu'est\x2010ce que tu fabriques ? Maintenant que\ntu m'as apporté ça, laisse\x2010le donc ici !\n\n\n\x0E\x01\x09\x04\x00\x1200Allez, va donc voir ailleurs si j'y suis au lieu de\nfaire n'importe quoi !")
          }

          void entrypoint_100_16() {
/*<159>*/ 	start()
/*<186>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<188>*/ 		printf("\x0E\x01\x09\x04\x08\x909Ah ! \x0E\x03\x01\x00Link ! Encore merci ! Grâce\nà toi, je suis aux anges !\n\n\nCette nuit encore, il monte la garde.\nEt personne ne le lui a demandé !\n\n\n\x0E\x01\x09\x04\x0E\x90AIl est vraiment formidable !")
          	  case 1:
/*<184>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<187>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Je ne sais vraiment pas quoi faire avec la lettre\nd'Orbo...\n\n\n\x0E\x01\x09\x04\x0B\xE00Qu'est\x2010ce que Kiko dirait s'il l'apprenait...?")
          		  case 1:
/*<180>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<189>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_185:
/*<185>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<182>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Comment ? Tu as quelque chose à me dire ?\nÇa peut pas attendre demain...?")
/*<190>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<181>*/ 					printf("\x0E\x01\x09\x04\n\xE57Dis donc ! Ça ne se fait pas d'entrer dans la\nchambre d'une demoiselle en pleine nuit sans\nfrapper !\n\nJ'étais sur le point d'aller prendre un\nbain, alors si tu voulais bien sortir,\nLink !\n\n\x0E\x01\x09\x04\x0C\xE14Mais ça commence à faire un bon moment que\nla salle de bain est occupée. Qui est\x2010ce qui peut\nmettre aussi longtemps ?")
/*<183>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_185
          					  case 1:
          					}
          				}
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Comment Zelda a\x2010t\x2010elle pu tomber sous la mer\nde nuages, elle qui est si douée pour chevaucher\nson oiseau ?\n\n\x0E\x01\x09\x04\n\xD06Comment, tu as vu un fantôme ? Mon\npauvre, le choc a été si grand que tu as\ndes hallucinations.")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02\x0E\x03\x01\x00Link !\x0E\x01\x0D\x02\x1906")
/*<120>*/ 	set_camera(9, 0)
/*<121>*/ 	printf("Si tu vas à la grand\x2010place, passe par la porte\ndu rez\x2010de\x2010chaussée.\n\n\n\x0E\x01\x09\x04\x09\x400La porte du premier est fermée à clé.")
/*<123>*/ 	set_camera(11, 0)
/*<122>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Pourquoi la cantinière n'a pas encore ouvert ?\nIl faudra que je lui en touche deux mots.")
          }

          void entrypoint_100_18() {
/*< 68>*/ 	start()
/*< 88>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 89>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 90>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Laisse\x2010moi te donner un conseil.\n\n\n\nAvant de te rendre dans un endroit dangereux,\nprends l'habitude de <r<sauvegarder en faisant une\nprière à la Déesse>>.\n\nLes <r<statues >>où tu peux prier sont indiquées sur\nta carte. Alors jettes\x2010y un \x153il de temps en temps\npour ne pas te perdre.")
          		  case 1:
/*<278>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Si tu vas du côté de la cascade, tu devrais\nprendre une <r<épée>>. Il y a des créatures\ninquiétantes qui rôdent par là\x2010bas.\n\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍLe <b<capitaine des chevaliers>> est entré dans la\nsalle d'escrime tout à l'heure. Si tu allais lui\ndemander de te prêter une épée ?")
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
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x08\x401Ah, Link ! Te voilà, je te\ncherchais !")
          			flw_71:
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x09\xC00J'ai mené ma petite enquête sur la disparition\nde ton célestrier.\n\n\n\x0E\x01\x09\x04\x00\xC00Quand j'en ai parlé à Célestin, il a fait une\ndrôle de tête... donc je lui ai tiré les vers du nez.")
/*< 73>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 126, 'param3': 16}
/*<126>*/ 			set_camera(12, 0)
/*<155>*/ 			make_actor_do_something(0, 0)
/*<128>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 74, 'param3': 17}
/*< 74>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Je suis désolé, Link !\n\n\n\n\x0E\x01\x09\x04\xC00\x800Je voulais tout te raconter mais\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Si <b<Hergo\n>>apprenait que je t'en ai parlé...")
/*<196>*/ 			make_actor_do_something(1, 12)
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 127, 'param3': 16}
/*<127>*/ 			set_camera(13, 0)
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Visiblement, <b<Hergo>> s'est arrangé pour le faire\ntaire.")
/*<124>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 125, 'param3': 17}
/*<125>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Allez !<pause23> Avoue, maintenant !")
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 78, 'param3': 16}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Tout à l'heure, quand je faisais le ménage à la\ncantine, Hergo et sa bande sont arrivés...\n\n\n\x0E\x01\x09\x04\xC00\x800Au début, ils ne m'ont pas remarqué. Ils ont\ncommencé à comploter pour <r<cacher>> ton\ncélestrier quelque part.\n\n\x0E\x01\x09\x04\xC00\x800J'ai voulu quitter la cantine pour aller\nte prévenir...\n\n\n\x0E\x01\x09\x04\xC01\xE00Mais Hergo et sa bande m'ont repéré...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00Ils m'ont dit que si je te disais quoi que ce soit,\nils feraient en sorte que je ne puisse plus jamais\nchevaucher d'oiseau...")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Il semblerait qu'<b<Hergo>> et ses acolytes aient mis\nau point un plan pour capturer ton oiseau et le\ncacher vers la <r<<pling>cascade>>.\n\n\x0E\x01\x09\x04\x08\xC00La cascade se trouve\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í <pause28>Fais\x2010moi voir ta <r<carte>>.")
/*< 84>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*<279>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_283:
/*<283>*/ 				scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<284>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<282>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 82, 'param3': 30}
/*< 82>*/ 				printf("Regarde, c'est ici ! C'est la <r<cascade >>indiquée\npar une \x0E\x02\x04\x02\x19CD.")
/*<268>*/ 				{'type': 'type3', 'subType': 4, 'param1': 100, 'param2': 256, 'next': 81, 'param3': 30}
/*< 81>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 286, 'param3': 34}
/*<286>*/ 				switch (temp_flags[54 /* 0x7 40 */]) {
          				  case 0:
/*< 83>*/ 					printf("\x0E\x01\x09\x04\x00\x404Tu sais comment on consulte la carte ? En\nappuyant sur \x0E\x02\x04\x02\x2CD à tout moment, tu peux\nafficher la carte de l'endroit où tu te trouves.\x0E\x01\x11\x02\x2CD\n\x0E\x01\x09\x04\x08\x400Donc, quand tu es perdu, appuie sur \x0E\x02\x04\x02\x2CD !\x0E\x01\x11\x02\x2CD")
          					flw_85:
/*< 85>*/ 					{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 86, 'param3': 16}
/*< 86>*/ 					printf("\x0E\x01\x09\x04\xC00\x819Pardon, Link ! Je ne suis qu'un\npoltron... Je suis vraiment désolé.")
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
/*<101>*/ 			printf("\x0E\x01\x09\x04\x00\xC01\x0E\x03\x01\x00Link ! Tu tombes bien...")
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
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Afin de rejoindre la statue de la Déesse sans te\nperdre, appuie sur \x0E\x02\x04\x02\x2CD pour regarder ta <r<carte>>.\nTu peux aller chercher ton oiseau de là\x2010bas.\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<256>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<257>*/ 				printf("\x0E\x01\x09\x04\x00\x04Que t'arrive\x2010t\x2010il, Link ? <pause28>\x0E\x01\x09\x04\x00\x1100Quoi ?!\nTon célestrier<pause32> a disparu...\x0E\x01\x06\x02\xFBCD?\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x11\x1100Mais c'est très grave, ça ! Moi qui me faisais\nune joie de voir ses ailes vermeilles fendre\nle ciel...\n\nNon\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í je ne sais pas où il est...\n\n\n\n\x0E\x01\x09\x04\n\x1100Hmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Depuis la statue de la Déesse, on a une\nvue d'ensemble sur le bourg. Si tu allais voir\nlà\x2010bas ?")
/*<258>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          			  case 1:
/*<244>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 53, 'param3': 31}
/*< 53>*/ 				printf("\x0E\x01\x09\x04\x00\x04Que t'arrive\x2010t\x2010il, Link ? <pause28>\x0E\x01\x09\x04\x00\x1100Quoi ?!\nTon célestrier<pause32> a disparu...\x0E\x01\x06\x02\xFBCD?\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x11\x1100Mais c'est très grave, ça ! Moi qui me faisais\nune joie de voir ses ailes vermeilles fendre\nle ciel...\n\nNon\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í je ne sais pas où il est...\n\n\n\n\x0E\x01\x09\x04\n\x1100Hmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Depuis la statue de la Déesse, on a une\nvue d'ensemble sur le bourg. Si tu allais voir\nlà\x2010bas ?")
/*< 54>*/ 				scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
/*<238>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<237>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 255, 'param3': 30}
/*<255>*/ 				printf("La <r<statue de la Déesse>> est la statue gigantesque\nau nord de Célesbourg. Son emplacement est\nmarqué d'une \x0E\x02\x04\x02\x19CD.")
/*<266>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 239, 'param3': 30}
/*<239>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 242, 'param3': 34}
/*<242>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<243>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<240>*/ 					printf("\x0E\x01\x09\x04\x00\x404Tu sais comment on consulte la carte ? En\nappuyant sur \x0E\x02\x04\x02\x2CD à tout moment, tu peux\nafficher la carte de l'endroit où tu te trouves.\x0E\x01\x11\x02\x2CD\n\nDonc, quand tu es perdu, pense à consulter\nla carte !\x0E\x01\x11\x02\x2CD")
/*<241>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 49>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 52>*/ 			printf("\x0E\x01\x09\x04\n\x705Je compte sur toi et ton célestrier vermeil\npour ne pas me décevoir.")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut Link ! La chevauchée\ncéleste va bientôt commencer !\n\n\nLa dernière fois, <b<Kiko>> a remporté la victoire\nsur le fil. C'était vraiment un beau spectacle.\n\n\n\x0E\x01\x09\x04\n\x700Aujourd'hui, on va pouvoir admirer ton\ncélestrier vermeil en action ! <pause28>J'ai hâte\nde voir ça. Bon courage !")
/*< 51>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 91>*/ 	start()
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 197, 'param3': 32}
/*<197>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 92, 'param3': 13}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé oh !\x0E\x01\x0D\x02\x1906 \x0E\x03\x01\x00Link !")
/*<108>*/ 	set_camera(2, 0)
/*<110>*/ 	make_actor_do_something(2, 12)
/*<139>*/ 	printf("\x0E\x01\x08\x02\x2CDPar ici !\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍIl faut que je te parle de ton célestrier. \nViens par ici !")
/*<111>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 93, 'param3': 42}
/*< 93>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Quoi ? Qu'est\x2010ce qu'il a ton célestrier ?\n\n\n\n\x0E\x01\x09\x04\x10\xE00Je suis occupée, là. J'ai pas le temps pour\nces histoires !")
          	  case 1:
/*<176>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<177>*/ 			printf("\x0E\x01\x09\x04\x00\x01C'est bientôt l'heure de la <r<chevauchée céleste>>,\nnon ? Ne reste pas ici à bayer aux corneilles.")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Aah... J'ai demandé à <b<Célestin>> de m'apporter\ndes <r<tonneaux>>. Il en met, du temps...\n\n\n\x0E\x01\x09\x04\x10\xF00Qu'est\x2010ce qu'il peut bien fabriquer ?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, selon mes estimations, au bout de cette\nlumière devrait se trouver un indice à propos\ndes trois flammes.\n\nJe vous recommande de vous rendre à l'endroit\nqu'indique le rai de lumière.")
/*<163>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 94>*/ 	start()
/*< 95>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ah, au fait, Link !")
/*< 96>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Si tu vas du côté de la cascade, tu devrais\nprendre une <r<épée>>. Il y a des créatures\ninquiétantes qui rôdent par là\x2010bas.\n\n\x0E\x01\x13\x00\x0E\x01\x09\x04\x09\xC00\x0E\x01\n\x04 ÍLe <b<capitaine des chevaliers>> est entré dans la\nsalle d'escrime tout à l'heure. Si tu allais lui\ndemander de te prêter une épée ?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 66>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 67>*/ 			printf("\x0E\x01\x09\x04\x00\x05Oui ? T'as encore quelque chose à me\ndemander ?\n[1]Où est mon\noiseau ?[2]Où est Hergo ?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x12Je sais pas vraiment par où il est parti. Désolé.")
/*< 65>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 63>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Hergo>> et sa clique ont dit qu'ils allaient\ninspecter le point de rassemblement de\nla <r<chevauchée céleste>>.\n\nIls doivent être sur la grand\x2010place.")
/*< 64>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
/*<234>*/ 				entrypoint_100_59();
          			}
          		  case 1:
/*<263>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
          				flw_61:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x05Eh ben, qu'est\x2010ce qui t'arrive ? T'as l'air tout\npaniqué...\n\n\nQuoi ? Ton célestrier a disparu ? <pause32>Maintenant\nque tu le dis... <pling>Je l'ai <r<aperçu>> tout à l'heure.\n\n\nIl essayait de s'enfuir alors que les célestriers\nd'<b<Hergo>> et sa bande le poursuivaient.\n[1]Par où ?[2]Hergo ?")
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
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x00\x03J'aurai bientôt fini de réparer cette porte,\nmais pour l'instant, évite de passer par là.\n[1]Où est Zelda ?[2]La chevauchée\ncéleste ?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 60>*/ 				printf("\x0E\x01\x09\x04\x00\x05<b<Zelda >>?<pause1E> Je l'ai vue se diriger vers la statue de\nla Déesse avec m'sieur <b<Gaepora>>.\n\n\nComment ?<pause1E> Tu sais pas où est la statue de la\nDéesse ? C'est dans ces moments\x2010là qu'il faut\npasser en vue subjective avec \x0E\x02\x04\x02\x22CD !\x0E\x01\x11\x02\x8CD")
          			  case 1:
/*< 59>*/ 				printf("\x0E\x01\x09\x04\x00\x03Tu dois participer à la <r<chevauchée céleste\n>>aujourd'hui, non ?\n\n\nSi tu en sors vainqueur, tu passeras dans la\n<r<classe supérieure >>de l'école de chevalerie.\nAprès quoi, tu pourras devenir <r<chevalier>>.\n\nLes chevaliers sont les garants de la sécurité\nde Célesbourg. En faire partie est un grand\nhonneur. J'ai hâte de te voir à l'\x153uvre !")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ah, Link ! Bien le bonjour !\nT'as bien dormi cette nuit ?\n\n\nTant mieux. J'avais peur que t'arrives pas à\ndormir à cause de la <r<chevauchée céleste\n>>d'aujourd'hui.\n\nQuoi ? Moi ?<pause28> Eh ben, je répare cette porte...\n\n\n\nCes derniers temps, elle ferme plus très bien.\nUne cérémonie importante va se dérouler\naujourd'hui, alors il faut qu'elle soit réparée.\n\n\x0E\x01\x09\x04\x0C\xC00Mais dis\x2010moi plutôt, est\x2010ce que tu as bien fait\nta <r<prière>> à la Déesse, ce matin ?\n\n\n\x0E\x01\n\x04\x06ÍSi tu fais une prière face à la <r<statue >>que tu vois\nlà\x2010bas, tu peux <r<sauvegarder >>ta progression.\n\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍOn trouve de ces statues un peu partout dans\nCélesbourg.\n\n\nAlors prends l'habitude de prier chaque fois\nque tu en vois une.\n\n\n\x0E\x01\x09\x04\x00\x08Tu sais ce qu'on dit...\n« <r<Prudence est mère de sûreté>>. »")
/*< 57>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*< 97>*/ 	start()
/*< 98>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<100>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\x0E\x03\x01\x00Link... Tu pourras le retrouver\nà temps ?\n\n\n\x0E\x01\x09\x04\xC00\xE06Je ne suis qu'un misérable\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Pardon.")
          	  case 1:
/*< 99>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<178>*/ 	start()
/*<204>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<205>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hé, l'apprenti ! Qu'est\x2010ce qu'on t'a appris à\nl'école ? C'est pas comme ça que tu vas devenir\nun vrai chevalier !")
          	  case 1:
/*<179>*/ 		printf("\x0E\x01\x09\x04\x00\x02Fais un peu attention ! C'est pas parce que la\npatrouille de sauvetage veille au grain qu'il faut\nfaire n'importe quoi !")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*<221>*/ 	switch (scene_flags[61 /* 0x6 20 */]) {
          	  case 0:
/*< 34>*/ 		switch (scene_flags[58 /* 0x6 04 */]) {
          		  case 0:
/*<104>*/ 			printf("\x0E\x01\x09\x04\x0F\x1300Et flûte ! Mon <b<lucane du bourg >>s'est enfui.\nJe l'avais presque attrapé...\n\n\n\x0E\x01\x09\x04\n\x900Attraper des insectes sans filet à papillons,\nc'est même pas la peine d'y penser.\n\n\nJ'aurais pas dû jeter celui que j'avais acheté\nà la <r<boutique de Terry>>... \x0E\x01\x09\x04\x11\x200Pff...")
          		  case 1:
/*<103>*/ 			printf("\x0E\x01\x09\x04\x00\x04Pour faire une <g<attaque roulade>>, commence par\nfoncer, et après, le truc, c'est de faire une\nroulade<r< >>juste avant d'arriver à l'endroit que\ntu veux attaquer.\nSi t'arrives à faire BAM, y aura peut\x2010être des\ntrucs qui tomberont.\n\n\nAllez !<pause1E> Essaie pour voir !")
/*<225>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 227, 'param3': 31}
/*<227>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': -1, 'param3': 60}
          		}
          	  case 1:
/*<223>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 31}
/*<222>*/ 		printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906\x0E\x03\x01\x00Link, tu tombes bien !\n\n\n\x0E\x01\x0D\x02\x500\nDis... Je peux te demander un truc ?\n\n\n\nTu voudrais pas faire comme moi, <g<foncer >>vers\ncet arbre et faire une <g<attaque roulade >>?\n\n\nLe truc, c'est de <g<faire une roulade >>quand tu es\njuste devant l'arbre et BAM !\n\n\nAllez...<pause1E> s'te plaît !")
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
/*<212>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ces derniers temps, je n'entends plus la voix\ndans les toilettes. Je me demande bien qui\nc'était...")
          			  case 1:
/*<202>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 201, 'param3': 31}
/*<201>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ces derniers temps, quand je passe devant les\n<r<toilettes>>, la <r<nuit>>, j'entends une voix.\n\n\nJe me demande qui peut bien rester enfermé\nlà\x2010dedans. En tout cas, c'est très agaçant !")
          			}
          		  case 1:
          			flw_214:
/*<214>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<216>*/ 				printf("\x0E\x01\x09\x04\x00\x01Au fait, ça fait un moment que je n'ai pas vu\nHergo. Où est\x2010ce qu'il a bien pu passer ?")
          			  case 1:
/*<213>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<215>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, comment vas\x2010tu ? Puisque tu es là,\nprofites\x2010en pour aller passer une bonne nuit\nde sommeil dans ton <r<lit>>.")
          				  case 1:
/*<171>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh ! Tu t'en vas ? <pause14>Alors je suppose que tu ne\nviendras plus manger ici pendant un moment.\n\n\n\x0E\x01\x09\x04\n\xC00Fais bien attention à toi !\n\n\n\n\x0E\x01\x09\x04\x09\x800Et reviens nous voir de temps en temps. Tu sais\nce qu'on dit, on ne dort jamais mieux que dans\nson lit.")
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
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hé, l'apprenti ! C'est pas comme ça que tu vas\ndevenir un vrai chevalier !\n\n\nEt n'oublie pas que seuls les chevaucheurs\naguerris tels que nous sont autorisés à voler\nla nuit ! Alors, gare à toi !")
          	  case 1:
/*<208>*/ 		printf("\x0E\x01\x09\x04\x00\x02Fais attention où tu mets les pieds ! La nuit,\non n'y voit pas grand\x2010chose, alors c'est facile\nde tomber dans le vide.\n\nDe plus, seuls les chevaucheurs aguerris tels\nque nous sont autorisés à voler la nuit ! Alors,\ngare à toi !")
          	}
          }

          void entrypoint_100_58() {
/*<228>*/ 	start()
/*<232>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          	  case 1:
/*<233>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<230>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 267, 'param3': 30}
/*<267>*/ 		printf("Au sud de Célesbourg... L'endroit marqué\nd'une \x0E\x02\x04\x02\x19CD sur la carte est la grand\x2010place d'où\npartira la <r<chevauchée céleste >>aujourd'hui.")
/*<264>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 231, 'param3': 30}
/*<231>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 229, 'param3': 34}
/*<229>*/ 		printf("\x0E\x01\x09\x04\x00\x404Sais\x2010tu comment on consulte la carte ? Il te\nsuffit d'appuyer sur \x0E\x02\x04\x02\x2CD à tout moment.\x0E\x01\x11\x02\x2CD\n\n\nAlors si tu es perdu, pense à consulter ta carte.\x0E\x01\x11\x02\x2CD")
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
/*<203>*/ 				printf("\x0E\x01\x09\x04\x00\x01Je n'entends plus la voix dans les toilettes,\nla nuit.\n\n\nMais maintenant, j'entends Orbo pleurer dans\nson sommeil, dans la chambre d'Hergo...\nJ'aimerais bien qu'il arrête de faire ça...")
          			  case 1:
          				goto flw_212
          			}
          		  case 1:
/*<217>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<218>*/ 				printf("\x0E\x01\x09\x04\x00\x01Au fait, ça fait un moment que je n'ai pas vu\nHergo. Où est\x2010ce qu'il a bien pu passer ?")
          			  case 1:
/*<219>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<220>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, comment vas\x2010tu ? Puisque tu es là,\nprofites\x2010en pour aller passer une bonne nuit\nde sommeil dans ton <r<lit>>.")
          				  case 1:
/*<162>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Ah, c'est bien plus calme la nuit, quand ces\npetits monstres sont au lit.\n\n\n\x0E\x01\x09\x04\n\x800Alors tes recherches avancent ? Tu crois\nque tu pourras bientôt retrouver Zelda ?\nBon courage !")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Allez, je ferme cette porte ! Il faudrait pas que\ndes monstres rentrent pendant la nuit...\n\n\nJe laisse ouvert en haut mais il vaut mieux\néviter de sortir en pleine nuit...\n\n\nEnfin, je comprends que tu veuilles retrouver\nton amie Zelda au plus vite.\n\n\nEn général, la nuit, les habitants de Célesbourg\nrestent chez eux.")
          	}
          }

          void entrypoint_100_24() {
/*<105>*/ 	start()
/*<106>*/ 	printf("\x0E\x01\x09\x04\x00\x08Ouais !<pause1E> T'as réussi ! Mon <b<lucane du bourg>> !\n\n\n\nHé ! Attends !")
/*<107>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_59() {
/*<269>*/ 	start()
/*<273>*/ 	switch (scene_flags[116 /* 0xF 10 */]) {
          	  case 0:
          		flw_270:
/*<270>*/ 		printf("Pour aller à la grand\x2010place, le plus court serait\nde descendre par là...\n\n\nMais j'ai pas fini de réparer cette porte. Désolé\nmais va falloir que tu fasses un détour par\nl'école. J'ai ouvert la porte en bas.\n\nSi t'es perdu, n'oublie pas que tu peux consulter\nta carte en appuyant sur \x0E\x02\x04\x02\x2CD !\x0E\x01\x11\x02\x2CD")
/*<275>*/ 		story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          	  case 1:
/*<274>*/ 		scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<271>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 277, 'param3': 30}
/*<277>*/ 		printf("Regarde... Au sud de Célesbourg...\nLa \x0E\x02\x04\x02\x19CD sur la carte, c'est la grand\x2010place.\n\n\nC'est de là que partira la <r<chevauchée céleste\n>>aujourd'hui, tu devrais savoir où elle est, non ?")
/*<276>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 256, 'next': 272, 'param3': 30}
/*<272>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 270, 'param3': 34}
          		goto flw_270
          	}
          }

          void entrypoint_100_25() {
/*<112>*/ 	start()
/*<113>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<119>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDCette fois, ça suffit !\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍÇa va se régler avec le directeur ! Et je ferai\nen sorte que tu sois renvoyé !")
          	  case 1:
/*<114>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<117>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDArrête ça tout de suite !\x0E\x01\x0D\x02\x1906\nEspèce de petit voyou !\n\n\n\x0E\x01\n\x04\x0FÍSi tu continues, tu seras privé de repas pendant\nune semaine !")
/*<118>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<115>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Mais qu'est\x2010ce que tu fais ?!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍTu vas me faire le plaisir de nettoyer tout ça !")
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
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00\x04Afin de rejoindre la statue de la Déesse sans te\nperdre, appuie sur \x0E\x02\x04\x02\x2CD pour regarder ta <r<carte>>.\nTu peux aller chercher ton oiseau de là\x2010bas.\x0E\x01\x11\x02\x2CD")
          		  case 1:
/*<246>*/ 			switch (scene_flags[117 /* 0xF 20 */]) {
          			  case 0:
/*<261>*/ 				printf("\x0E\x01\x09\x04\x00WQue se passe\x2010t\x2010il, Link ? Tu as\nl'air tout paniqué...\n\n\nTon oiseau ? Ah, le célestrier vermeil ? <pause28>Si je\nsais où il est ?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x11\x200Non, je ne l'ai pas vu.\n\n\n\n\x0E\x01\x09\x04\x09\x204Depuis la statue de la Déesse, on a une vue\nd'ensemble sur le bourg. Si tu allais voir\nlà\x2010bas ?")
/*<262>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          			  case 1:
/*<253>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 259, 'param3': 31}
/*<259>*/ 				printf("\x0E\x01\x09\x04\x00WQue se passe\x2010t\x2010il, Link ? Tu as\nl'air tout paniqué...\n\n\nTon oiseau ? Ah, le célestrier vermeil ? <pause28>Si je\nsais où il est ?\x0E\x01\x06\x02\xFBCD\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x11\x200Non, je ne l'ai pas vu.\n\n\n\n\x0E\x01\x09\x04\x09\x204Depuis la statue de la Déesse, on a une vue\nd'ensemble sur le bourg. Si tu allais voir\nlà\x2010bas ?")
/*<260>*/ 				scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
/*<247>*/ 				scene_flags[0 'Skyloft'][117 /* 0xF 20 */] = true;
/*<245>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 254, 'param3': 30}
/*<254>*/ 				printf("La <r<statue de la Déesse>> est la gigantesque statue\nqui se trouve au nord de Célesbourg. Tu y es\ndéjà allé, non ? Son emplacement est marqué\nd'une \x0E\x02\x04\x02\x19CD.")
/*<265>*/ 				{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 248, 'param3': 30}
/*<248>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 251, 'param3': 34}
/*<251>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
          				  case 1:
/*<252>*/ 					scene_flags[0 'Skyloft'][116 /* 0xF 10 */] = true;
/*<249>*/ 					printf("\x0E\x01\x09\x04\x00\x404Tu sais comment on consulte la carte ? En\nappuyant sur \x0E\x02\x04\x02\x2CD à tout moment, tu peux\nafficher la carte de l'endroit où tu te trouves.\x0E\x01\x11\x02\x2CD\n\nDonc, quand tu es perdu, tu peux toujours\ncompter sur ta carte !\x0E\x01\x11\x02\x2CD")
/*<250>*/ 					story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
          				}
          			}
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209J'aimerais juste une fois jouer le rôle de la\nDéesse lors de la chevauchée céleste pour\npasser un moment romantique avec un beau\nchevalier.")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh ! Bonjour, Link ! Aujourd'hui,\navec cette douce brise, c'est le jour\nidéal pour la cérémonie.\n\n\x0E\x01\x09\x04\x11\x200Je me demande bien qui va gagner. Sûrement\n<b<Hergo>>, il est très doué.\n\n\n\x0E\x01\x09\x04\x0C\x200Le vainqueur sera récompensé par la jeune\nfille qui joue le rôle de la Déesse. \x0E\x01\x09\x04\x00\x609Comme\nc'est romantique...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<144>*/ 	start()
/*<146>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<147>*/ 		printf("\x0E\x01\x09\x04\x09\x802Tiens, c'est toi, Link ? C'est à\n<b<Célestin>> que j'avais demandé de\nfaire ça. Enfin, peu importe...\n\n\x0E\x01\x09\x04\n\xC00Tu as pourtant une cérémonie importante\naujourd'hui, non ? C'est gentil de prendre\nle temps de m'aider.")
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\n\x401Tiens, Link ! C'est toi qui fais\nla livraison ?\n\n\n\x0E\x01\x09\x04\x10\x802Pourtant, c'est à <b<Célestin>> que j'avais demandé...\n\n\n\n\x0E\x01\x09\x04\x09\x400Enfin, peu importe. Apporte ce <r<tonneau >>par ici.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

