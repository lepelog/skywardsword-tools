          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>De toute façon, c'est pas possible de\nvoler la nuit.\n\n\nSi tu veux prendre le ciel, va te coucher\nen attendant demain matin !")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000001>Eh bien ! Qu'est‐ce que tu fais encore\ndebout à cette heure‐ci ?\n\n\n<0x10009:0x000c0c09>Ne me dis pas que tu comptes partir\nà dos de célestrier ?!\n\n\n<0x10009:0x00090c00>Tu ne sais donc pas que les célestriers\nne peuvent pas voler la nuit ?\n\n\nMis à part les oiseaux qui ont suivi un\nentraînement spécial, ils ne voient rien\ndans le noir !\n\n<0x10009:0x00080400>Si tu veux prendre le ciel, attends\ndemain matin !\n\n\nVa donc faire un somme dans ton lit\nen attendant que le jour se lève !\nTu n'es pas si pressé que ça, si ?")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x000b0c00>Tu ne trouveras rien en restant ici.\nVa voir dehors si tu trouves quelque\nchose.\n\nJe vais mener mon enquête de mon\ncôté. Je te ferai signe si je trouve\nquelque chose.")
          			  case 1:
/*< 20>*/ 				printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000c06>Mais qu'est‐ce que tu fais encore à\ntraîner dans les couloirs de l'école ?!\n\n\n<0x10009:0x000c0c09>Comment ?!<pause 20> Ton célestrier ne vient pas\nquand tu l'appelles ?\n\n\n<0x10009:0x00010c00>Pourquoi ton oiseau protecteur\nne répond‐il pas à ton appel ?\n\n\nC'est la première fois que\nj'entends une telle histoire,\nc'est incompréhensible.\n\n<0x10009:0x00080400>En tant qu'aîné, mon rôle est de te\nvenir en aide !\n\n\n<0x10009:0x000b0c00>Pendant que je cherche de mon côté,\nva voir vers la grand‐place si quelqu'un\nsait quelque chose.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x000c0405>Si tu as un problème avec ton oiseau,\nn'hésite pas à m'en parler.")
          			  case 1:
/*< 18>*/ 				printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00090401>Bonjour, <heroname> !\n\n\n\n<0x10009:0x00080400>C'est aujourd'hui le grand jour,\nla <color red<chevauchée céleste >coloroff>!\nEst‐ce que tu es prêt ?\n\nTu m'as l'air bien détendu.\nTous les autres sont déjà à la\ngrand‐place pour s'entraîner.\n\n<0x10009:0x000b0400>Ton <color red<célestrier vermeil >coloroff>est vraiment\nun oiseau exceptionnel.\n\n\nLa dernière fois, mon oiseau a\nremporté la chevauchée céleste\nmais je ne sais pas s'il pourrait\nbattre le tien...\n<0x10009:0x00080400>Mais il n'y a pas de bon oiseau sans\nbon chevaucheur. Tous les jours, je\npoursuis mes recherches sur les\noiseaux.\n<0x10009:0x000c0405>Alors si jamais tu as un problème avec\nton oiseau, n'hésite pas à venir me voir,\nmoi ton aîné <color blue<Kiko>coloroff> !")
/*< 35>*/ 				scene_flags[0 'Skyloft'][35 /* 0x5 08 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_12() {
/*< 22>*/ 	start()
/*< 26>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*<145>*/ 		switch (scene_flags[64 /* 0x9 01 */]) {
          		  case 0:
/*<146>*/ 			printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00000006>Tu trouveras <color blue<Kiko>coloroff> près de la <color red<salle\nd'escrime>coloroff> derrière l'école.")
          		  case 1:
/*< 27>*/ 			printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080406>Comment ?<pause 40> Où est‐ce qu'<color blue<Hergo>coloroff> aurait\npu aller ?\n\n\n<0x10009:0x00000d00>Qu'est‐ce qu'ils ont encore fait, lui et\nses sous‐fifres ?\n\n\n<0x10009:0x000c0400>Je sais pas où ils se cachent. Mais\npeut‐être que <color blue<Kiko>coloroff> sait quelque chose.\n\n\n<0x10009:0x00080e04>Justement, je crois qu'il te cherchait<0x10006:0xfccd>...<0x10006:0x00cd>\nIl est près de la <color red<salle d'escrime>coloroff>, je\ncrois.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06>Si tu as un problème avec ton\noiseau, va voir <color blue<Kiko>coloroff>. Je l'ai vu au\nrez‐de‐chaussée tout à l'heure.\nSi tu allais lui demander conseil ?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x000a0e56><0x10008:0xffcd>Normalement, c'est à elle d'ouvrir les portes.\nPourquoi il faut que ce soit moi qui m'y colle ?!")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00010406>Tiens ? Qu'est‐ce qui t'arrive,\n<heroname> ? Tu as l'air\nsoucieux.\n\n<0x10009:0x00080d00>Quoi ?!<pause 40> Ton <color red<célestrier>coloroff> a disparu ?!\n\n\n\n<0x10009:0x000c0d12>Hmm<0x10006:0xfccd>...<0x10006:0x00cd> Je n'ai pas bougé de l'école,\nalors j'ai pas vu grand‐chose.")
/*<142>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00080e06>Si tu as un problème avec ton\noiseau, va voir <color blue<Kiko>coloroff>. Je l'ai vu au\nrez‐de‐chaussée tout à l'heure.\nSi tu allais lui demander conseil ?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00080900>Si tu remportes la <color red<chevauchée céleste>coloroff>,\ntu seras avec nous dans la <color red<classe\nsupérieure>coloroff>. Faisons de notre mieux\npour devenir des chevaliers !")
          			  case 1:
/*< 23>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00080901>Bonjour, <heroname> !\nBon courage pour la <color red<chevauchée\ncéleste >coloroff>!\n\n<0x10009:0x00000400>Si tu sors vainqueur, tu passeras dans\nla <color red<classe supérieure >coloroff>comme nous.\nC'est la dernière étape avant de\ndevenir <color red<chevalier>coloroff>.\n<0x10009:0x00080900>Et tu recevras un <color red<uniforme de\nchevalier >coloroff>comme le mien ! Je suis\nsûre que tu auras la grande classe !\n\n<0x10009:0x000b0713>Enfin... Pas autant que lui...\nHaa...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00000001>Regarde un peu cette statue.\nJe sais pas depuis quand elle est là,\nmais...\n\n... elle a qu'un seul œil, la pauvre...\n\n\n\nTu peux l'observer de plus près en\nappuyant sur (C) !<0x10011:0x06cd>")
          }

          void entrypoint_100_30() {
/*<180>*/ 	start()
/*<181>*/ 	set_camera(30, 0)
/*<183>*/ 	set_camera(31, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': -1, 'param3': 40}
          }

          void entrypoint_100_14() {
/*<160>*/ 	start()
/*<165>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000004>Hmm... Je sens que ma soupe va encore\nêtre délicieuse !")
          	  case 1:
/*<161>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000002>Où est encore passé ce petit chenapan ?\nIl devrait savoir que c'est bientôt\nl'heure de manger !\n\nJe parie qu'il est encore en train de\ncourir après des insectes...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000007>Qu'est‐ce que tu fabriques ?\nMaintenant que tu m'as apporté ça,\nlaisse‐le donc ici !\n\n<0x10009:0x00001200>Allez, va donc voir ailleurs si j'y suis\nau lieu de faire n'importe quoi !")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00080909>Ah ! <0x30001:0x><heroname> !\nEncore merci ! Grâce à toi,\nje suis aux anges !\n\nCette nuit encore, il monte la garde.\nEt personne ne le lui a demandé !\n\n\n<0x10009:0x000e090a>Il est vraiment formidable !")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000e12>Je ne sais vraiment pas quoi\nfaire avec la lettre d'Orbo...\n\n\n<0x10009:0x000b0e00>Qu'est‐ce que Kiko dirait\ns'il l'apprenait...?")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00080d57>Comment ? Tu as quelque chose\nà me dire ? Ça peut pas attendre\ndemain...?")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x000a0e57>Dis donc ! Ça ne se fait pas d'entrer\ndans la chambre d'une demoiselle\nen pleine nuit sans frapper !\n\nJ'étais sur le point d'aller prendre\nun bain, alors si tu voulais bien\nsortir, <heroname> !\n\n<0x10009:0x000c0e14>Mais ça commence à faire un bon\nmoment que la salle de bain est\noccupée. Qui est‐ce qui peut mettre\naussi longtemps ?")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x000c0d14>Comment Zelda a‐t‐elle pu tomber\nsous la mer de nuages, elle qui est\nsi douée pour chevaucher son oiseau ?\n\n<0x10009:0x000a0d06>Comment, tu as vu un fantôme ?\nMon pauvre, le choc a été si\ngrand que tu as des hallucinations.")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00010002><0x30001:0x><heroname> !<0x1000D:0x1906>")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "Si tu vas à la grand‐place, passe par\nla porte du rez‐de‐chaussée.\n\n\n<0x10009:0x00090400>La porte du premier est fermée à clé.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x000c0c16>Pourquoi la cantinière n'a pas encore\nouvert ? Il faudra que je lui en touche\ndeux mots.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000c05>Laisse‐moi te donner un conseil.\n\n\n\nAvant de te rendre dans un endroit\ndangereux, prends l'habitude de\n<color red<sauvegarder en faisant une prière\nà la Déesse>coloroff>.\nLes <color red<statues >coloroff>où tu peux prier sont\nindiquées sur ta carte. Alors jettes‐y\nun œil de temps en temps pour ne pas\nte perdre.")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Si tu vas du côté de la cascade, tu\ndevrais prendre une <color red<épée>coloroff>. Il y a des\ncréatures inquiétantes qui rôdent par\nlà‐bas.\n<0x10009:0x00090c00>Le <color blue<capitaine des chevaliers>coloroff> est entré\ndans la salle d'escrime tout à l'heure.\nSi tu allais lui demander de te prêter\nune épée ?")
/*< 95>*/ 			scene_flags[0 'Skyloft'][56 /* 0x6 01 */] = true;
          		}
          	  case 1:
/*<107>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 74, 'param3': 31}
/*< 74>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 199, 'param3': 32}
/*<199>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 200, 'param3': 47}
/*<200>*/ 		set_camera(13, 0)
/*<201>*/ 		{'type': 'type3', 'subType': 2, 'param1': 21, 'param2': 100, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 16}
/*<202>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 20, 'next': 72, 'param3': 48}
/*< 72>*/ 		switch (scene_flags[54 /* 0x7 40 */]) {
          		  case 0:
/*< 71>*/ 			printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00080401>Ah, <heroname> !\nTe voilà, je te cherchais !")
          			flw_73:
/*< 73>*/ 			printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00090c00>J'ai mené ma petite enquête sur la\ndisparition de ton célestrier.\n\n\n<0x10009:0x00000c00>Quand j'en ai parlé à Célestin, il a fait\nune drôle de tête... donc je lui ai tiré\nles vers du nez.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0c000812>Je suis désolé, <heroname> !\n\n\n\n<0x10009:0x0c000800>Je voulais tout te raconter mais<0x10006:0xfbcd>...<0x10006:0x00cd>\nSi <color blue<Hergo>coloroff> apprenait que je t'en ai\nparlé...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x00000c16>Visiblement, <color blue<Hergo>coloroff> s'est arrangé pour\nle faire taire.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080c00>Allez !<pause 35> Avoue, maintenant !")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0c070e11>Tout à l'heure, quand je faisais le\nménage à la cantine, Hergo et sa bande\nsont arrivés...\n\n<0x10009:0x0c000800>Au début, ils ne m'ont pas remarqué.\nIls ont commencé à comploter pour\n<color red<cacher>coloroff> ton célestrier quelque part.\n\n<0x10009:0x0c000800>J'ai voulu quitter la cantine pour aller\nte prévenir...\n\n\n<0x10009:0x0c010e00>Mais Hergo et sa bande m'ont repéré...\n\n\n\n<0x10009:0x0c070e00>Ils m'ont dit que si je te disais quoi\nque ce soit, ils feraient en sorte que\nje ne puisse plus jamais chevaucher\nd'oiseau...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00090c00>Il semblerait qu'<color blue<Hergo>coloroff> et ses acolytes\naient mis au point un plan pour\ncapturer ton oiseau et le cacher\nvers la <color red<<color red<<sound 4><color red<cascade>coloroff>.\n<0x10009:0x00080c00>La cascade se trouve<0x10006:0xfbcd>...<0x10006:0x00cd> <pause 40>Fais‐moi voir\nta <color red<carte>coloroff>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "Regarde, c'est ici ! C'est la <color red<cascade\n>coloroff>indiquée par une (X).")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000404>Tu sais comment on consulte la carte ?\nEn appuyant sur (+) à tout moment, tu\npeux afficher la carte de l'endroit où tu\nte trouves.<0x10011:0x03cd>\n<0x10009:0x00080400>Donc, quand tu es perdu, appuie\nsur (+) !<0x10011:0x03cd>")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x0c000819>Pardon, <heroname> ! Je ne suis\nqu'un poltron... Je suis vraiment\ndésolé.")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000c01><0x30001:0x><heroname> ! Tu tombes bien...")
/*<156>*/ 			scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          			goto flw_73
          		}
          	}
          }

          void entrypoint_100_01() {
          	start()
/*< 50>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 52>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 57>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000002><color blue<Kiko>coloroff> sait sûrement quelque chose\nà propos de ton célestrier !\n\n\nTu sais qui c'est, non ? C'est l'élève le\nplus sérieux de l'école de chevalerie !")
          		  case 1:
/*< 55>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000004>Que t'arrive‐t‐il, <heroname> ?\n<pause 40><0x10009:0x00001100>Quoi ?! Ton célestrier<pause 50> a disparu...<0x10006:0xfbcd>?<0x10006:0x00cd>\n\n\n<0x10009:0x00111100>Mais c'est très grave, ça ! Moi qui\nme faisais une joie de voir ses ailes\nvermeilles fendre le ciel...\n\nNon<0x10006:0xfbcd>...<0x10006:0x00cd> je ne sais pas où il est...\n\n\n\n<0x10009:0x000a1100>Hmm<0x10006:0xfbcd>...<0x10006:0x00cd> Et si tu allais demander à\n<color blue<<color blue<<sound 4><color blue<Kiko >coloroff>? C'est lui qui <color red<s'y connaît le plus\nen oiseaux >coloroff>à Célesbourg.\n\n<0x10009:0x00000700>Peut‐être qu'il pourra t'aider !")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x000a0705>Je compte sur toi et ton célestrier\nvermeil pour ne pas me décevoir.")
          		  case 1:
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000001>Salut <heroname> !\nLa chevauchée céleste va bientôt\ncommencer !\n\nLa dernière fois, <color blue<Kiko>coloroff> a remporté\nla victoire sur le fil. C'était vraiment\nun beau spectacle.\n\n<0x10009:0x000a0700>Aujourd'hui, on va pouvoir admirer\nton célestrier vermeil en action !\n<pause 40>J'ai hâte de voir ça. Bon courage !")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000002><0x10008:0x02cd>Hé oh !<0x1000D:0x1906>\n<0x30001:0x><heroname> !")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10008:0x02cd>Par ici !<0x10008:0x00cd>\n\n\n\n<0x1000A:0x000300cd>Il faut que je te parle de ton célestrier.\nViens par ici !")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000003>Quoi ? Qu'est‐ce qu'il a ton célestrier ?\n\n\n\n<0x10009:0x00100e00>Je suis occupée, là. J'ai pas le temps\npour ces histoires !")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00000001>C'est bientôt l'heure de la <color red<chevauchée\ncéleste>coloroff>, non ? Ne reste pas ici à\nbayer aux corneilles.")
          		  case 1:
/*<  3>*/ 			printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000002>Aah... J'ai demandé à <color blue<Célestin>coloroff> de\nm'apporter des <color red<tonneaux>coloroff>.\nIl en met, du temps...\n\n<0x10009:0x00100f00>Qu'est‐ce qu'il peut bien fabriquer ?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10012:0x00000001>Maître, selon mes estimations, au bout\nde cette lumière devrait se trouver un\nindice à propos des trois flammes.\n\nJe vous recommande de vous\nrendre à l'endroit qu'indique le\nrai de lumière.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000004>Ah, au fait, <heroname> !")
/*<101>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x000c0c05>Si tu vas du côté de la cascade, tu\ndevrais prendre une <color red<épée>coloroff>. Il y a des\ncréatures inquiétantes qui rôdent par\nlà‐bas.\n<0x10009:0x00090c00>Le <color blue<capitaine des chevaliers>coloroff> est entré\ndans la salle d'escrime tout à l'heure.\nSi tu allais lui demander de te prêter\nune épée ?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000005>Oui ? T'as encore quelque chose\nà me demander ?\n[1-]Où est mon\noiseau ?[2-]Où est Hergo ?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000012>Je sais pas vraiment par où\nil est parti. Désolé.")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000004><color blue<Hergo>coloroff> et sa clique ont dit qu'ils allaient\ninspecter le point de rassemblement de\nla chevauchée.\n\nIls doivent être dans le bourg. Pour\naller au bourg, le plus court serait de\ndescendre par là...\n\nMais j'ai pas fini de réparer cette\nporte. Désolé mais va falloir que tu\nfasses un détour par l'école. J'ai ouvert\nla porte en bas.")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000005>Eh ben, qu'est‐ce qui t'arrive ?\nT'as l'air tout paniqué...\n\n\nQuoi ? Ton célestrier a disparu ?\n<pause 50>Maintenant que tu le dis... <sound 4>Je l'ai\n<color red<aperçu>coloroff> tout à l'heure.\n\nIl essayait de s'enfuir alors que les\ncélestriers d'<color blue<Hergo>coloroff> et sa bande le\npoursuivaient.\n[1-]Par où ?[2-]Hergo ?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf(/* textboxtype: 1, unk: 1, line: 15 */ "<0x10009:0x00000003>J'aurai bientôt fini de réparer cette\nporte mais pour l'instant, évite de\npasser par là.\n[1-]Où est Zelda ?[2-]La chevauchée\ncéleste ?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000005><color blue<Zelda >coloroff>?<pause 30> Je l'ai vue se diriger vers\nla statue de la Déesse avec\nm'sieur <color blue<Gaepora>coloroff>.\n\nComment ?<pause 30> Tu sais pas où est la\nstatue de la Déesse ? C'est dans ces\nmoments‐là qu'il faut passer en vue\nsubjective avec (C) !<0x10011:0x06cd>\nOn a vraiment une super vue d'ici !\n<color green<Regarde autour de toi>coloroff> avec (C) et\nsi tu sens un décalage, <color green<recentre\nton regard >coloroff>avec (v) !<0x10011:0x06cd><0x10011:0x09cd>")
          			  case 1:
/*< 61>*/ 				printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000003>Tu dois participer à la <color red<chevauchée\ncéleste >coloroff>aujourd'hui, non ?\n\n\nSi tu en sors vainqueur, tu passeras\ndans la <color red<classe supérieure >coloroff>de l'école\nde chevalerie. Après quoi, tu pourras\ndevenir <color red<chevalier>coloroff>.\nLes chevaliers sont les garants de\nla sécurité de Célesbourg. En faire\npartie est un grand honneur. J'ai\nhâte de te voir à l'œuvre !")
          			}
          		  case 1:
/*<  5>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>Ah, <heroname> !\nBien le bonjour ! T'as bien dormi\ncette nuit ?\n\nTant mieux. J'avais peur que t'arrives\npas à dormir à cause de la <color red<chevauchée\ncéleste>coloroff> d'aujourd'hui.\n\nQuoi ? Moi ?<pause 40> Eh ben, je répare cette\nporte...\n\n\nCes derniers temps, elle ferme plus\ntrès bien. Une cérémonie importante\nva se dérouler aujourd'hui, alors il\nfaut qu'elle soit réparée.\n<0x10009:0x000c0c00>Mais dis‐moi plutôt, est‐ce que tu\nas bien fait ta <color red<prière>coloroff> à la Déesse,\nce matin ?\n\n<0x1000A:0x000600cd>Si tu fais une prière face à la <color red<statue>coloroff>\nque tu vois là‐bas, tu peux <color red<sauvegarder>coloroff>\nta progression.\n\n<0x10009:0x000c0c00><0x1000A:0xffff00cd>On trouve de ces statues un peu\npartout dans Célesbourg.\n\n\nAlors prends l'habitude de prier\nchaque fois que tu en vois une.\n\n\n<0x10009:0x00000008>Tu sais ce qu'on dit...\n« <color red<Prudence est mère de sûreté>coloroff>. »")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0c000800><0x10006:0xfbcd>... <0x10006:0x00cd><0x30001:0x><heroname>... Tu pourras le\nretrouver à temps ?\n\n\n<0x10009:0x0c000e06>Je ne suis qu'un misérable<0x10006:0xfbcd>...<0x10006:0x00cd> Pardon.")
          	  case 1:
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0c010900><0x10006:0xfbcd>......<0x10006:0x00cd>")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000002>Hé, l'apprenti ! Qu'est‐ce qu'on t'a\nappris à l'école ? C'est pas comme ça\nque tu vas devenir un vrai chevalier !")
          	  case 1:
/*<187>*/ 		printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000002>Fais un peu attention !\nC'est pas parce que la patrouille\nde sauvetage veille au grain qu'il\nfaut faire n'importe quoi !")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000f1300>Et flûte ! Mon <color blue<lucane du bourg >coloroff>s'est\nenfui. Je l'avais presque attrapé...\n\n\n<0x10009:0x000a0900>Attraper des insectes sans filet à\npapillons, c'est même pas la peine\nd'y penser.\n\nJ'aurais pas dû jeter celui que j'avais\nacheté à la <color red<boutique de Terry>coloroff>... <0x10009:0x00110200>Pff...")
          	  case 1:
/*<110>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00000004>Pour faire une <color green<attaque roulade>coloroff>,\ncommence par foncer avec (A)...\n\n\nAprès, le truc, c'est de <color red<secouer le\nNunchuk >coloroff>juste avant d'arriver à\nl'endroit que tu veux attaquer.\n\nSi t'arrives à faire BAM avec une\n<color green<attaque roulade>coloroff>, y aura peut‐être\ndes trucs qui tomberont.\n\nAllez !<pause 30> Essaie pour voir !")
          	}
          }

          void entrypoint_100_22() {
/*<178>*/ 	start()
/*<206>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<207>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<208>*/ 			switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          			  case 0:
          				flw_220:
/*<220>*/ 				printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Ces derniers temps, je n'entends\nplus la voix dans les toilettes.\nJe me demande bien qui c'était...")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Ces derniers temps, quand je passe\ndevant les <color red<toilettes>coloroff>, la <color red<nuit>coloroff>, j'entends\nune voix.\n\nJe me demande qui peut bien rester\nenfermé là‐dedans. En tout cas, c'est\ntrès agaçant !")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Au fait, ça fait un moment que je n'ai\npas vu Hergo. Où est‐ce qu'il a bien pu\npasser ?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Alors, comment vas‐tu ?\nPuisque tu es là, profites‐en pour aller\npasser une bonne nuit de sommeil dans\nton <color red<lit>coloroff>.")
          				  case 1:
/*<179>*/ 					printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x00000001>Oh ! Tu t'en vas ?<pause 20>\nAlors je suppose que tu ne viendras\nplus manger ici pendant un moment.\n\n<0x10009:0x000a0c00>Fais bien attention à toi !\n\n\n\n<0x10009:0x00090800>Et reviens nous voir de temps en temps.\nTu sais ce qu'on dit, on ne dort jamais\nmieux que dans son lit.")
          				}
          			}
          		}
          	  case 1:
          		goto flw_222
          	}
          }

          void entrypoint_100_57() {
/*<214>*/ 	start()
/*<215>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<217>*/ 		printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000002>Hé, l'apprenti ! C'est pas comme ça que\ntu vas devenir un vrai chevalier !\n\n\nEt n'oublie pas que seuls les\nchevaucheurs aguerris tels que\nnous sont autorisés à voler la\nnuit ! Alors, gare à toi !")
          	  case 1:
/*<216>*/ 		printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Fais attention où tu mets les pieds !\nLa nuit, on n'y voit pas grand‐chose,\nalors c'est facile de tomber dans\nle vide.\nDe plus, seuls les chevaucheurs\naguerris tels que nous sont\nautorisés à voler la nuit !\nAlors, gare à toi !")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00000001><0x1000D:0x1906>Attends, <heroname> !\n\n\n<0x1000D:0x0500>\nDis... Je peux te demander un truc ?\n\n\n\nTu voudrais pas faire comme moi,\n<color green<foncer>coloroff> vers cet arbre avec (A) et faire\nune <color green<attaque roulade >coloroff>?\n\nLe truc, c'est de <color red<secouer le Nunchuk\n>coloroff>pour <color green<faire une roulade >coloroff>quand tu es\njuste devant l'arbre et BAM !\n\nAllez...<pause 30> s'te plaît !")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>Je n'entends plus la voix dans\nles toilettes, la nuit.\n\n\nMais maintenant, j'entends Orbo\npleurer dans son sommeil, dans\nla chambre d'Hergo... J'aimerais\nbien qu'il arrête de faire ça...")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000001>Au fait, ça fait un moment que je n'ai\npas vu Hergo. Où est‐ce qu'il a bien pu\npasser ?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000001>Alors, comment vas‐tu ?\nPuisque tu es là, profites‐en pour aller\npasser une bonne nuit de sommeil dans\nton <color red<lit>coloroff>.")
          				  case 1:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000b05>Ah, c'est bien plus calme la nuit,\nquand ces petits monstres sont au lit.\n\n\n<0x10009:0x000a0800>Alors tes recherches avancent ?\nTu crois que tu pourras bientôt\nretrouver Zelda ? Bon courage !")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003>Allez, je ferme cette porte !\nIl faudrait pas que des monstres\nrentrent pendant la nuit...\n\nJe laisse ouvert en haut mais il vaut\nmieux éviter de sortir en pleine nuit...\n\n\nEnfin, je comprends que tu veuilles\nretrouver ton amie Zelda au plus vite.\n\n\nEn général, la nuit, les habitants de\nCélesbourg restent chez eux.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000008>Ouais !<pause 30> T'as réussi !\nMon <color blue<lucane du bourg>coloroff> !\n\n\nHé ! Attends !")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000c1252><0x10008:0x02cd>Cette fois, ça suffit !<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Ça va se régler avec le directeur !\nEt je ferai en sorte que tu sois\nrenvoyé !")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x000c1207><0x10008:0x01cd>Arrête ça tout de suite !<0x1000D:0x1906>\nEspèce de petit voyou !\n\n\n<0x1000A:0x000f00cd>Si tu continues, tu seras privé de repas\npendant une semaine !")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000c1206>Mais qu'est‐ce que tu fais ?!<0x1000D:0x1906>\n\n\n\n<0x1000A:0x000f00cd>Tu vas me faire le plaisir de nettoyer\ntout ça !")
/*<123>*/ 			zone_temp_flags[12 /* 0x0 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_09() {
/*<  7>*/ 	start()
/*< 42>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 46>*/ 		switch (scene_flags[43 /* 0x4 08 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Afin de rejoindre la statue de la\nDéesse sans te perdre, appuie sur (+)\npour regarder ta <color red<carte>coloroff>. Tu peux aller\nchercher ton oiseau de là‐bas.<0x10011:0x03cd>")
          		  case 1:
/*< 47>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000057>Que se passe‐t‐il, <heroname> ?\nTu as l'air tout paniqué...\n\n\nTon oiseau ? Ah, le célestrier\nvermeil ?\n<pause 40>Si je sais où il est ?<0x10006:0xfbcd>...<0x10006:0x00cd>\n\n<0x10009:0x00110200>Non, je ne l'ai pas vu.\n\n\n\n<0x10009:0x00090204>Depuis la statue de la Déesse, on a\nune vue d'ensemble sur le bourg.\nSi tu allais voir là‐bas ?\n\nPour aller à la statue de la Déesse\nsans te perdre, appuie sur (+)\npour regarder ta <color red<carte>coloroff>.<0x10011:0x03cd>")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x000c0209>J'aimerais juste une fois jouer le rôle\nde la Déesse lors de la chevauchée\ncéleste pour passer un moment\nromantique avec un beau chevalier.")
          		  case 1:
/*<  8>*/ 			printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>Oh ! Bonjour, <heroname> !\nAujourd'hui, avec cette douce brise,\nc'est le jour idéal pour la cérémonie.\n\n<0x10009:0x00110200>Je me demande bien qui va gagner.\nSûrement <color blue<Hergo>coloroff>, il est très doué.\n\n\n<0x10009:0x000c0200>Le vainqueur sera récompensé par la\njeune fille qui joue le rôle de la Déesse.\n<0x10009:0x00000609>Comme c'est romantique...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00090802>Tiens, c'est toi, <heroname> ?\nC'est à <color blue<Célestin>coloroff> que j'avais demandé\nde faire ça. Enfin, peu importe...\n\n<0x10009:0x000a0c00>Tu as pourtant une cérémonie\nimportante aujourd'hui, non ?\nC'est gentil de prendre le temps\nde m'aider.")
          	  case 1:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x000a0401>Tiens, <heroname> !\nC'est toi qui fais la livraison ?\n\n\n<0x10009:0x00100802>Pourtant, c'est à <color blue<Célestin>coloroff> que\nj'avais demandé...\n\n\n<0x10009:0x00090400>Enfin, peu importe. Apporte\nce <color red<tonneau>coloroff> par ici.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 32 */ "")
          }

