          void entrypoint_100_11() {
/*< 17>*/ 	start()
/*<172>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<176>*/ 		switch (temp_flags[16 /* 0x3 01 */]) {
          		  case 0:
/*<175>*/ 			printf("\x0E\x01\x09\x04\x00\x04De toute façon, c'est pas possible de\nvoler la nuit.\n\n\nSi tu veux prendre le ciel, va te coucher\nen attendant demain matin !")
          		  case 1:
/*<177>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 173, 'param3': 31}
/*<173>*/ 			printf("\x0E\x01\x09\x04\x00\x01Eh bien ! Qu'est\x2010ce que tu fais encore\ndebout à cette heure\x2010ci ?\n\n\n\x0E\x01\x09\x04\x0C\xC09Ne me dis pas que tu comptes partir\nà dos de célestrier ?!\n\n\n\x0E\x01\x09\x04\x09\xC00Tu ne sais donc pas que les célestriers\nne peuvent pas voler la nuit ?\n\n\nMis à part les oiseaux qui ont suivi un\nentraînement spécial, ils ne voient rien\ndans le noir !\n\n\x0E\x01\x09\x04\x08\x400Si tu veux prendre le ciel, attends\ndemain matin !\n\n\nVa donc faire un somme dans ton lit\nen attendant que le jour se lève !\nTu n'es pas si pressé que ça, si ?")
/*<174>*/ 			temp_flags[16 /* 0x3 01 */] = true;
          		}
          	  case 1:
/*< 19>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*< 38>*/ 			switch (scene_flags[18 /* 0x3 04 */]) {
          			  case 0:
/*< 39>*/ 				printf("\x0E\x01\x09\x04\x0B\xC00Tu ne trouveras rien en restant ici.\nVa voir dehors si tu trouves quelque\nchose.\n\nJe vais mener mon enquête de mon\ncôté. Je te ferai signe si je trouve\nquelque chose.")
          			  case 1:
/*< 20>*/ 				printf("\x0E\x01\x09\x04\x00\xC06Mais qu'est\x2010ce que tu fais encore à\ntraîner dans les couloirs de l'école ?!\n\n\n\x0E\x01\x09\x04\x0C\xC09Comment ?!<pause14> Ton célestrier ne vient pas\nquand tu l'appelles ?\n\n\n\x0E\x01\x09\x04\x01\xC00Pourquoi ton oiseau protecteur\nne répond\x2010il pas à ton appel ?\n\n\nC'est la première fois que\nj'entends une telle histoire,\nc'est incompréhensible.\n\n\x0E\x01\x09\x04\x08\x400En tant qu'aîné, mon rôle est de te\nvenir en aide !\n\n\n\x0E\x01\x09\x04\x0B\xC00Pendant que je cherche de mon côté,\nva voir vers la grand\x2010place si quelqu'un\nsait quelque chose.")
/*< 21>*/ 				scene_flags[0 'Skyloft'][18 /* 0x3 04 */] = true;
          			}
          		  case 1:
/*< 36>*/ 			switch (scene_flags[35 /* 0x5 08 */]) {
          			  case 0:
/*< 37>*/ 				printf("\x0E\x01\x09\x04\x0C\x405Si tu as un problème avec ton oiseau,\nn'hésite pas à m'en parler.")
          			  case 1:
/*< 18>*/ 				printf("\x0E\x01\x09\x04\x09\x401Bonjour, Link !\n\n\n\n\x0E\x01\x09\x04\x08\x400C'est aujourd'hui le grand jour,\nla <r<chevauchée céleste >>!\nEst\x2010ce que tu es prêt ?\n\nTu m'as l'air bien détendu.\nTous les autres sont déjà à la\ngrand\x2010place pour s'entraîner.\n\n\x0E\x01\x09\x04\x0B\x400Ton <r<célestrier vermeil >>est vraiment\nun oiseau exceptionnel.\n\n\nLa dernière fois, mon oiseau a\nremporté la chevauchée céleste\nmais je ne sais pas s'il pourrait\nbattre le tien...\n\x0E\x01\x09\x04\x08\x400Mais il n'y a pas de bon oiseau sans\nbon chevaucheur. Tous les jours, je\npoursuis mes recherches sur les\noiseaux.\n\x0E\x01\x09\x04\x0C\x405Alors si jamais tu as un problème avec\nton oiseau, n'hésite pas à venir me voir,\nmoi ton aîné <b<Kiko>> !")
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
/*<146>*/ 			printf("\x0E\x01\x09\x04\x00\x06Tu trouveras <b<Kiko>> près de la <r<salle\nd'escrime>> derrière l'école.")
          		  case 1:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x08\x406Comment ?<pause28> Où est\x2010ce qu'<b<Hergo>> aurait\npu aller ?\n\n\n\x0E\x01\x09\x04\x00\xD00Qu'est\x2010ce qu'ils ont encore fait, lui et\nses sous\x2010fifres ?\n\n\n\x0E\x01\x09\x04\x0C\x400Je sais pas où ils se cachent. Mais\npeut\x2010être que <b<Kiko>> sait quelque chose.\n\n\n\x0E\x01\x09\x04\x08\xE04Justement, je crois qu'il te cherchait\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nIl est près de la <r<salle d'escrime>>, je\ncrois.")
/*<144>*/ 			scene_flags[0 'Skyloft'][64 /* 0x9 01 */] = true;
          		}
          	  case 1:
/*< 25>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<143>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Si tu as un problème avec ton\noiseau, va voir <b<Kiko>>. Je l'ai vu au\nrez\x2010de\x2010chaussée tout à l'heure.\nSi tu allais lui demander conseil ?")
          			  case 1:
/*<150>*/ 				set_camera(14, 0)
/*<148>*/ 				make_actor_do_something(0, 0)
/*<139>*/ 				printf("\x0E\x01\x09\x04\n\xE56\x0E\x01\x08\x02\xFFCDNormalement, c'est à elle d'ouvrir les portes.\nPourquoi il faut que ce soit moi qui m'y colle ?!")
/*<151>*/ 				set_camera(-1, 0)
/*<149>*/ 				make_actor_do_something(1, 0)
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x01\x406Tiens ? Qu'est\x2010ce qui t'arrive,\nLink ? Tu as l'air\nsoucieux.\n\n\x0E\x01\x09\x04\x08\xD00Quoi ?!<pause28> Ton <r<célestrier>> a disparu ?!\n\n\n\n\x0E\x01\x09\x04\x0C\xD12Hmm\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Je n'ai pas bougé de l'école,\nalors j'ai pas vu grand\x2010chose.")
/*<142>*/ 				printf("\x0E\x01\x09\x04\x08\xE06Si tu as un problème avec ton\noiseau, va voir <b<Kiko>>. Je l'ai vu au\nrez\x2010de\x2010chaussée tout à l'heure.\nSi tu allais lui demander conseil ?")
/*<140>*/ 				scene_flags[0 'Skyloft'][63 /* 0x6 80 */] = true;
          			}
          		  case 1:
/*<136>*/ 			switch (scene_flags[62 /* 0x6 40 */]) {
          			  case 0:
/*<138>*/ 				printf("\x0E\x01\x09\x04\x08\x900Si tu remportes la <r<chevauchée céleste>>,\ntu seras avec nous dans la <r<classe\nsupérieure>>. Faisons de notre mieux\npour devenir des chevaliers !")
          			  case 1:
/*< 23>*/ 				printf("\x0E\x01\x09\x04\x08\x901Bonjour, Link !\nBon courage pour la <r<chevauchée\ncéleste >>!\n\n\x0E\x01\x09\x04\x00\x400Si tu sors vainqueur, tu passeras dans\nla <r<classe supérieure >>comme nous.\nC'est la dernière étape avant de\ndevenir <r<chevalier>>.\n\x0E\x01\x09\x04\x08\x900Et tu recevras un <r<uniforme de\nchevalier >>comme le mien ! Je suis\nsûre que tu auras la grande classe !\n\n\x0E\x01\x09\x04\x0B\x713Enfin... Pas autant que lui...\nHaa...")
/*<137>*/ 				scene_flags[0 'Skyloft'][62 /* 0x6 40 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_100_13() {
/*<158>*/ 	start()
/*<159>*/ 	printf("\x0E\x01\x09\x04\x00\x01Regarde un peu cette statue.\nJe sais pas depuis quand elle est là,\nmais...\n\n... elle a qu'un seul \x153il, la pauvre...\n\n\n\nTu peux l'observer de plus près en\nappuyant sur (C) !\x0E\x01\x11\x02\x6CD")
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
/*<166>*/ 		printf("\x0E\x01\x09\x04\x00\x04Hmm... Je sens que ma soupe va encore\nêtre délicieuse !")
          	  case 1:
/*<161>*/ 		printf("\x0E\x01\x09\x04\x00\x02Où est encore passé ce petit chenapan ?\nIl devrait savoir que c'est bientôt\nl'heure de manger !\n\nJe parie qu'il est encore en train de\ncourir après des insectes...")
          	}
          }

          void entrypoint_100_15() {
/*< 30>*/ 	start()
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x00\x07Qu'est\x2010ce que tu fabriques ?\nMaintenant que tu m'as apporté ça,\nlaisse\x2010le donc ici !\n\n\x0E\x01\x09\x04\x00\x1200Allez, va donc voir ailleurs si j'y suis\nau lieu de faire n'importe quoi !")
          }

          void entrypoint_100_16() {
/*<167>*/ 	start()
/*<194>*/ 	switch (story_flags[557 /* us: 805A9B16 0x40, jp: 805ACD96 0x40 */]) {
          	  case 0:
/*<196>*/ 		printf("\x0E\x01\x09\x04\x08\x909Ah ! \x0E\x03\x01\x00Link !\nEncore merci ! Grâce à toi,\nje suis aux anges !\n\nCette nuit encore, il monte la garde.\nEt personne ne le lui a demandé !\n\n\n\x0E\x01\x09\x04\x0E\x90AIl est vraiment formidable !")
          	  case 1:
/*<192>*/ 		switch (story_flags[555 /* us: 805A9B16 0x10, jp: 805ACD96 0x10 */]) {
          		  case 0:
/*<195>*/ 			printf("\x0E\x01\x09\x04\x00\xE12Je ne sais vraiment pas quoi\nfaire avec la lettre d'Orbo...\n\n\n\x0E\x01\x09\x04\x0B\xE00Qu'est\x2010ce que Kiko dirait\ns'il l'apprenait...?")
          		  case 1:
/*<188>*/ 			switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          			  case 0:
/*<197>*/ 				switch (zone_temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
          					flw_193:
/*<193>*/ 					switch (story_flags[552 /* us: 805A9B16 0x02, jp: 805ACD96 0x02 */]) {
          					  case 0:
          					  case 1:
/*<190>*/ 						printf("\x0E\x01\x09\x04\x08\xD57Comment ? Tu as quelque chose\nà me dire ? Ça peut pas attendre\ndemain...?")
/*<198>*/ 						zone_temp_flags[16 /* 0x3 01 */] = true;
          					}
          				  case 1:
/*<189>*/ 					printf("\x0E\x01\x09\x04\n\xE57Dis donc ! Ça ne se fait pas d'entrer\ndans la chambre d'une demoiselle\nen pleine nuit sans frapper !\n\nJ'étais sur le point d'aller prendre\nun bain, alors si tu voulais bien\nsortir, Link !\n\n\x0E\x01\x09\x04\x0C\xE14Mais ça commence à faire un bon\nmoment que la salle de bain est\noccupée. Qui est\x2010ce qui peut mettre\naussi longtemps ?")
/*<191>*/ 					switch (story_flags[547 /* us: 805A9B17 0x10, jp: 805ACD97 0x10 */]) {
          					  case 0:
          						goto flw_193
          					  case 1:
          					}
          				}
          			  case 1:
/*<168>*/ 				printf("\x0E\x01\x09\x04\x0C\xD14Comment Zelda a\x2010t\x2010elle pu tomber\nsous la mer de nuages, elle qui est\nsi douée pour chevaucher son oiseau ?\n\n\x0E\x01\x09\x04\n\xD06Comment, tu as vu un fantôme ?\nMon pauvre, le choc a été si\ngrand que tu as des hallucinations.")
          			}
          		}
          	}
          }

          void entrypoint_100_17() {
/*< 40>*/ 	start()
/*< 41>*/ 	printf("\x0E\x01\x09\x04\x01\x02\x0E\x03\x01\x00Link !\x0E\x01\x0D\x02\x1906")
/*<127>*/ 	set_camera(9, 0)
/*<128>*/ 	printf("Si tu vas à la grand\x2010place, passe par\nla porte du rez\x2010de\x2010chaussée.\n\n\n\x0E\x01\x09\x04\x09\x400La porte du premier est fermée à clé.")
/*<130>*/ 	set_camera(11, 0)
/*<129>*/ 	printf("\x0E\x01\x09\x04\x0C\xC16Pourquoi la cantinière n'a pas encore\nouvert ? Il faudra que je lui en touche\ndeux mots.")
          }

          void entrypoint_100_18() {
/*< 70>*/ 	start()
/*< 91>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*< 92>*/ 		switch (story_flags[28 /* us: 805A9ADA 0x10, jp: 805ACD5A 0x10 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Laisse\x2010moi te donner un conseil.\n\n\n\nAvant de te rendre dans un endroit\ndangereux, prends l'habitude de\n<r<sauvegarder en faisant une prière\nà la Déesse>>.\nLes <r<statues >>où tu peux prier sont\nindiquées sur ta carte. Alors jettes\x2010y\nun \x153il de temps en temps pour ne pas\nte perdre.")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x0C\xC05Si tu vas du côté de la cascade, tu\ndevrais prendre une <r<épée>>. Il y a des\ncréatures inquiétantes qui rôdent par\nlà\x2010bas.\n\x0E\x01\x09\x04\x09\xC00Le <b<capitaine des chevaliers>> est entré\ndans la salle d'escrime tout à l'heure.\nSi tu allais lui demander de te prêter\nune épée ?")
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
/*< 71>*/ 			printf("\x0E\x01\x09\x04\x08\x401Ah, Link !\nTe voilà, je te cherchais !")
          			flw_73:
/*< 73>*/ 			printf("\x0E\x01\x09\x04\x09\xC00J'ai mené ma petite enquête sur la\ndisparition de ton célestrier.\n\n\n\x0E\x01\x09\x04\x00\xC00Quand j'en ai parlé à Célestin, il a fait\nune drôle de tête... donc je lui ai tiré\nles vers du nez.")
/*< 75>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 0, 'next': 133, 'param3': 16}
/*<133>*/ 			set_camera(12, 0)
/*<163>*/ 			make_actor_do_something(0, 0)
/*<135>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\xC00\x812Je suis désolé, Link !\n\n\n\n\x0E\x01\x09\x04\xC00\x800Je voulais tout te raconter mais\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\nSi <b<Hergo>> apprenait que je t'en ai\nparlé...")
/*<204>*/ 			make_actor_do_something(1, 12)
/*< 77>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 134, 'param3': 16}
/*<134>*/ 			set_camera(13, 0)
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\xC16Visiblement, <b<Hergo>> s'est arrangé pour\nle faire taire.")
/*<131>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 12, 'next': 132, 'param3': 17}
/*<132>*/ 			printf("\x0E\x01\x09\x04\x08\xC00Allez !<pause23> Avoue, maintenant !")
/*< 79>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 80, 'param3': 16}
/*< 80>*/ 			printf("\x0E\x01\x09\x04\xC07\xE11Tout à l'heure, quand je faisais le\nménage à la cantine, Hergo et sa bande\nsont arrivés...\n\n\x0E\x01\x09\x04\xC00\x800Au début, ils ne m'ont pas remarqué.\nIls ont commencé à comploter pour\n<r<cacher>> ton célestrier quelque part.\n\n\x0E\x01\x09\x04\xC00\x800J'ai voulu quitter la cantine pour aller\nte prévenir...\n\n\n\x0E\x01\x09\x04\xC01\xE00Mais Hergo et sa bande m'ont repéré...\n\n\n\n\x0E\x01\x09\x04\xC07\xE00Ils m'ont dit que si je te disais quoi\nque ce soit, ils feraient en sorte que\nje ne puisse plus jamais chevaucher\nd'oiseau...")
/*< 81>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 82, 'param3': 16}
/*< 82>*/ 			printf("\x0E\x01\x09\x04\x09\xC00Il semblerait qu'<b<Hergo>> et ses acolytes\naient mis au point un plan pour\ncapturer ton oiseau et le cacher\nvers la <r<<r<<pling><r<cascade>>.\n\x0E\x01\x09\x04\x08\xC00La cascade se trouve\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í <pause28>Fais\x2010moi voir\nta <r<carte>>.")
/*< 87>*/ 			scene_flags[0 'Skyloft'][14 /* 0x0 40 */] = true;
/*< 83>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 85, 'param3': 30}
/*< 85>*/ 			printf("Regarde, c'est ici ! C'est la <r<cascade\n>>indiquée par une \x0E\x02\x04\x02\x19CD.")
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 86, 'param3': 34}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x404Tu sais comment on consulte la carte ?\nEn appuyant sur \x0E\x02\x04\x02\x3CD à tout moment, tu\npeux afficher la carte de l'endroit où tu\nte trouves.\x0E\x01\x11\x02\x3CD\n\x0E\x01\x09\x04\x08\x400Donc, quand tu es perdu, appuie\nsur \x0E\x02\x04\x02\x3CD !\x0E\x01\x11\x02\x3CD")
/*< 88>*/ 			{'type': 'type3', 'subType': 1, 'param1': 12, 'param2': -1, 'next': 89, 'param3': 16}
/*< 89>*/ 			printf("\x0E\x01\x09\x04\xC00\x819Pardon, Link ! Je ne suis\nqu'un poltron... Je suis vraiment\ndésolé.")
/*< 90>*/ 			scene_flags[0 'Skyloft'][55 /* 0x7 80 */] = true;
/*<162>*/ 			story_flags[567 /* us: 805A9B19 0x40, jp: 805ACD99 0x40 */] = true;
/*<164>*/ 			story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */] = true;
/*<157>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x00\xC01\x0E\x03\x01\x00Link ! Tu tombes bien...")
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
/*< 57>*/ 			printf("\x0E\x01\x09\x04\x00\x02<b<Kiko>> sait sûrement quelque chose\nà propos de ton célestrier !\n\n\nTu sais qui c'est, non ? C'est l'élève le\nplus sérieux de l'école de chevalerie !")
          		  case 1:
/*< 55>*/ 			printf("\x0E\x01\x09\x04\x00\x04Que t'arrive\x2010t\x2010il, Link ?\n<pause28>\x0E\x01\x09\x04\x00\x1100Quoi ?! Ton célestrier<pause32> a disparu...\x0E\x01\x06\x02\xFBCD?\x0E\x01\x06\x02Í\n\n\n\x0E\x01\x09\x04\x11\x1100Mais c'est très grave, ça ! Moi qui\nme faisais une joie de voir ses ailes\nvermeilles fendre le ciel...\n\nNon\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í je ne sais pas où il est...\n\n\n\n\x0E\x01\x09\x04\n\x1100Hmm\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Et si tu allais demander à\n<b<<b<<pling><b<Kiko >>? C'est lui qui <r<s'y connaît le plus\nen oiseaux >>à Célesbourg.\n\n\x0E\x01\x09\x04\x00\x700Peut\x2010être qu'il pourra t'aider !")
/*< 56>*/ 			scene_flags[0 'Skyloft'][45 /* 0x4 20 */] = true;
          		}
          	  case 1:
/*< 51>*/ 		switch (scene_flags[44 /* 0x4 10 */]) {
          		  case 0:
/*< 54>*/ 			printf("\x0E\x01\x09\x04\n\x705Je compte sur toi et ton célestrier\nvermeil pour ne pas me décevoir.")
          		  case 1:
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x00\x01Salut Link !\nLa chevauchée céleste va bientôt\ncommencer !\n\nLa dernière fois, <b<Kiko>> a remporté\nla victoire sur le fil. C'était vraiment\nun beau spectacle.\n\n\x0E\x01\x09\x04\n\x700Aujourd'hui, on va pouvoir admirer\nton célestrier vermeil en action !\n<pause28>J'ai hâte de voir ça. Bon courage !")
/*< 53>*/ 			scene_flags[0 'Skyloft'][44 /* 0x4 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_19() {
/*< 96>*/ 	start()
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 12, 'next': 205, 'param3': 32}
/*<205>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3073, 'param2': 256, 'next': 97, 'param3': 13}
/*< 97>*/ 	printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé oh !\x0E\x01\x0D\x02\x1906\n\x0E\x03\x01\x00Link !")
/*<115>*/ 	set_camera(2, 0)
/*<117>*/ 	make_actor_do_something(2, 12)
/*<147>*/ 	printf("\x0E\x01\x08\x02\x2CDPar ici !\x0E\x01\x08\x02Í\n\n\n\n\x0E\x01\n\x04\x03ÍIl faut que je te parle de ton célestrier.\nViens par ici !")
/*<118>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 98, 'param3': 42}
/*< 98>*/ 	scene_flags[0 'Skyloft'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_100_02() {
/*<  2>*/ 	start()
/*< 28>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 29>*/ 		printf("\x0E\x01\x09\x04\x00\x03Quoi ? Qu'est\x2010ce qu'il a ton célestrier ?\n\n\n\n\x0E\x01\x09\x04\x10\xE00Je suis occupée, là. J'ai pas le temps\npour ces histoires !")
          	  case 1:
/*<184>*/ 		switch (scene_flags[22 /* 0x3 40 */]) {
          		  case 0:
/*<185>*/ 			printf("\x0E\x01\x09\x04\x00\x01C'est bientôt l'heure de la <r<chevauchée\ncéleste>>, non ? Ne reste pas ici à\nbayer aux corneilles.")
          		  case 1:
/*<  3>*/ 			printf("\x0E\x01\x09\x04\x00\x02Aah... J'ai demandé à <b<Célestin>> de\nm'apporter des <r<tonneaux>>.\nIl en met, du temps...\n\n\x0E\x01\x09\x04\x10\xF00Qu'est\x2010ce qu'il peut bien fabriquer ?")
          		}
          	}
          }

          void entrypoint_100_03() {
/*< 32>*/ 	start()
/*< 33>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, selon mes estimations, au bout\nde cette lumière devrait se trouver un\nindice à propos des trois flammes.\n\nJe vous recommande de vous\nrendre à l'endroit qu'indique le\nrai de lumière.")
/*<171>*/ 	story_flags[195 /* us: 805A9AEC 0x20, jp: 805ACD6C 0x20 */] = true;
          }

          void entrypoint_100_20() {
/*< 99>*/ 	start()
/*<100>*/ 	printf("\x0E\x01\x09\x04\x00\x04Ah, au fait, Link !")
/*<101>*/ 	printf("\x0E\x01\x09\x04\x0C\xC05Si tu vas du côté de la cascade, tu\ndevrais prendre une <r<épée>>. Il y a des\ncréatures inquiétantes qui rôdent par\nlà\x2010bas.\n\x0E\x01\x09\x04\x09\xC00Le <b<capitaine des chevaliers>> est entré\ndans la salle d'escrime tout à l'heure.\nSi tu allais lui demander de te prêter\nune épée ?")
          }

          void entrypoint_100_04() {
/*<  4>*/ 	start()
/*< 10>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 68>*/ 		switch (scene_flags[53 /* 0x7 20 */]) {
          		  case 0:
/*< 69>*/ 			printf("\x0E\x01\x09\x04\x00\x05Oui ? T'as encore quelque chose\nà me demander ?\n[1]Où est mon\noiseau ?[2]Où est Hergo ?")
          			flw_16:
/*< 16>*/ 			switch (choice(2)) {
          			  case 0:
/*< 64>*/ 				printf("\x0E\x01\x09\x04\x00\x12Je sais pas vraiment par où\nil est parti. Désolé.")
/*< 67>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			  case 1:
/*< 65>*/ 				printf("\x0E\x01\x09\x04\x00\x04<b<Hergo>> et sa clique ont dit qu'ils allaient\ninspecter le point de rassemblement de\nla chevauchée.\n\nIls doivent être dans le bourg. Pour\naller au bourg, le plus court serait de\ndescendre par là...\n\nMais j'ai pas fini de réparer cette\nporte. Désolé mais va falloir que tu\nfasses un détour par l'école. J'ai ouvert\nla porte en bas.")
/*< 66>*/ 				scene_flags[0 'Skyloft'][53 /* 0x7 20 */] = true;
          			}
          		  case 1:
/*< 63>*/ 			printf("\x0E\x01\x09\x04\x00\x05Eh ben, qu'est\x2010ce qui t'arrive ?\nT'as l'air tout paniqué...\n\n\nQuoi ? Ton célestrier a disparu ?\n<pause32>Maintenant que tu le dis... <pling>Je l'ai\n<r<aperçu>> tout à l'heure.\n\nIl essayait de s'enfuir alors que les\ncélestriers d'<b<Hergo>> et sa bande le\npoursuivaient.\n[1]Par où ?[2]Hergo ?")
          			goto flw_16
          		}
          	  case 1:
/*< 15>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 58, 'param3': 31}
/*< 58>*/ 		switch (scene_flags[52 /* 0x7 10 */]) {
          		  case 0:
/*< 60>*/ 			printf("\x0E\x01\x09\x04\x00\x03J'aurai bientôt fini de réparer cette\nporte mais pour l'instant, évite de\npasser par là.\n[1]Où est Zelda ?[2]La chevauchée\ncéleste ?")
/*<  9>*/ 			switch (choice(2)) {
          			  case 0:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x00\x05<b<Zelda >>?<pause1E> Je l'ai vue se diriger vers\nla statue de la Déesse avec\nm'sieur <b<Gaepora>>.\n\nComment ?<pause1E> Tu sais pas où est la\nstatue de la Déesse ? C'est dans ces\nmoments\x2010là qu'il faut passer en vue\nsubjective avec (C) !\x0E\x01\x11\x02\x6CD\nOn a vraiment une super vue d'ici !\n<g<Regarde autour de toi>> avec (C) et\nsi tu sens un décalage, <g<recentre\nton regard >>avec (v) !\x0E\x01\x11\x02\x6CD\x0E\x01\x11\x02\x9CD")
          			  case 1:
/*< 61>*/ 				printf("\x0E\x01\x09\x04\x00\x03Tu dois participer à la <r<chevauchée\ncéleste >>aujourd'hui, non ?\n\n\nSi tu en sors vainqueur, tu passeras\ndans la <r<classe supérieure >>de l'école\nde chevalerie. Après quoi, tu pourras\ndevenir <r<chevalier>>.\nLes chevaliers sont les garants de\nla sécurité de Célesbourg. En faire\npartie est un grand honneur. J'ai\nhâte de te voir à l'\x153uvre !")
          			}
          		  case 1:
/*<  5>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ah, Link !\nBien le bonjour ! T'as bien dormi\ncette nuit ?\n\nTant mieux. J'avais peur que t'arrives\npas à dormir à cause de la <r<chevauchée\ncéleste>> d'aujourd'hui.\n\nQuoi ? Moi ?<pause28> Eh ben, je répare cette\nporte...\n\n\nCes derniers temps, elle ferme plus\ntrès bien. Une cérémonie importante\nva se dérouler aujourd'hui, alors il\nfaut qu'elle soit réparée.\n\x0E\x01\x09\x04\x0C\xC00Mais dis\x2010moi plutôt, est\x2010ce que tu\nas bien fait ta <r<prière>> à la Déesse,\nce matin ?\n\n\x0E\x01\n\x04\x06ÍSi tu fais une prière face à la <r<statue>>\nque tu vois là\x2010bas, tu peux <r<sauvegarder>>\nta progression.\n\n\x0E\x01\x09\x04\x0C\xC00\x0E\x01\n\x04\xFFFFÍOn trouve de ces statues un peu\npartout dans Célesbourg.\n\n\nAlors prends l'habitude de prier\nchaque fois que tu en vois une.\n\n\n\x0E\x01\x09\x04\x00\x08Tu sais ce qu'on dit...\n« <r<Prudence est mère de sûreté>>. »")
/*< 59>*/ 			scene_flags[0 'Skyloft'][52 /* 0x7 10 */] = true;
          		}
          	}
          }

          void entrypoint_100_21() {
/*<102>*/ 	start()
/*<103>*/ 	switch (scene_flags[55 /* 0x7 80 */]) {
          	  case 0:
/*<105>*/ 		printf("\x0E\x01\x09\x04\xC00\x800\x0E\x01\x06\x02\xFBCD... \x0E\x01\x06\x02Í\x0E\x03\x01\x00Link... Tu pourras le\nretrouver à temps ?\n\n\n\x0E\x01\x09\x04\xC00\xE06Je ne suis qu'un misérable\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í Pardon.")
          	  case 1:
/*<104>*/ 		printf("\x0E\x01\x09\x04\xC01\x900\x0E\x01\x06\x02\xFBCD......\x0E\x01\x06\x02Í")
          	}
          }

          void entrypoint_100_56() {
/*<186>*/ 	start()
/*<212>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<213>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hé, l'apprenti ! Qu'est\x2010ce qu'on t'a\nappris à l'école ? C'est pas comme ça\nque tu vas devenir un vrai chevalier !")
          	  case 1:
/*<187>*/ 		printf("\x0E\x01\x09\x04\x00\x02Fais un peu attention !\nC'est pas parce que la patrouille\nde sauvetage veille au grain qu'il\nfaut faire n'importe quoi !")
          	}
          }

          void entrypoint_100_05() {
/*<  6>*/ 	start()
/*< 34>*/ 	switch (scene_flags[58 /* 0x6 04 */]) {
          	  case 0:
/*<111>*/ 		printf("\x0E\x01\x09\x04\x0F\x1300Et flûte ! Mon <b<lucane du bourg >>s'est\nenfui. Je l'avais presque attrapé...\n\n\n\x0E\x01\x09\x04\n\x900Attraper des insectes sans filet à\npapillons, c'est même pas la peine\nd'y penser.\n\nJ'aurais pas dû jeter celui que j'avais\nacheté à la <r<boutique de Terry>>... \x0E\x01\x09\x04\x11\x200Pff...")
          	  case 1:
/*<110>*/ 		printf("\x0E\x01\x09\x04\x00\x04Pour faire une <g<attaque roulade>>,\ncommence par foncer avec (A)...\n\n\nAprès, le truc, c'est de <r<secouer le\nNunchuk >>juste avant d'arriver à\nl'endroit que tu veux attaquer.\n\nSi t'arrives à faire BAM avec une\n<g<attaque roulade>>, y aura peut\x2010être\ndes trucs qui tomberont.\n\nAllez !<pause1E> Essaie pour voir !")
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
/*<220>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ces derniers temps, je n'entends\nplus la voix dans les toilettes.\nJe me demande bien qui c'était...")
          			  case 1:
/*<210>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 209, 'param3': 31}
/*<209>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ces derniers temps, quand je passe\ndevant les <r<toilettes>>, la <r<nuit>>, j'entends\nune voix.\n\nJe me demande qui peut bien rester\nenfermé là\x2010dedans. En tout cas, c'est\ntrès agaçant !")
          			}
          		  case 1:
          			flw_222:
/*<222>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<224>*/ 				printf("\x0E\x01\x09\x04\x00\x01Au fait, ça fait un moment que je n'ai\npas vu Hergo. Où est\x2010ce qu'il a bien pu\npasser ?")
          			  case 1:
/*<221>*/ 				switch (story_flags[4 /* us: 805A9AD9 0x20, jp: 805ACD59 0x20 */]) {
          				  case 0:
/*<223>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, comment vas\x2010tu ?\nPuisque tu es là, profites\x2010en pour aller\npasser une bonne nuit de sommeil dans\nton <r<lit>>.")
          				  case 1:
/*<179>*/ 					printf("\x0E\x01\x09\x04\x00\x01Oh ! Tu t'en vas ?<pause14>\nAlors je suppose que tu ne viendras\nplus manger ici pendant un moment.\n\n\x0E\x01\x09\x04\n\xC00Fais bien attention à toi !\n\n\n\n\x0E\x01\x09\x04\x09\x800Et reviens nous voir de temps en temps.\nTu sais ce qu'on dit, on ne dort jamais\nmieux que dans son lit.")
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
/*<217>*/ 		printf("\x0E\x01\x09\x04\x00\x02Hé, l'apprenti ! C'est pas comme ça que\ntu vas devenir un vrai chevalier !\n\n\nEt n'oublie pas que seuls les\nchevaucheurs aguerris tels que\nnous sont autorisés à voler la\nnuit ! Alors, gare à toi !")
          	  case 1:
/*<216>*/ 		printf("\x0E\x01\x09\x04\x00\x02Fais attention où tu mets les pieds !\nLa nuit, on n'y voit pas grand\x2010chose,\nalors c'est facile de tomber dans\nle vide.\nDe plus, seuls les chevaucheurs\naguerris tels que nous sont\nautorisés à voler la nuit !\nAlors, gare à toi !")
          	}
          }

          void entrypoint_100_23() {
/*<108>*/ 	start()
/*<109>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x0D\x02\x1906Attends, Link !\n\n\n\x0E\x01\x0D\x02\x500\nDis... Je peux te demander un truc ?\n\n\n\nTu voudrais pas faire comme moi,\n<g<foncer>> vers cet arbre avec (A) et faire\nune <g<attaque roulade >>?\n\nLe truc, c'est de <r<secouer le Nunchuk\n>>pour <g<faire une roulade >>quand tu es\njuste devant l'arbre et BAM !\n\nAllez...<pause1E> s'te plaît !")
          }

          void entrypoint_100_07() {
/*< 11>*/ 	start()
/*<169>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*<218>*/ 		switch (story_flags[663 /* us: 805A9B1F 0x20, jp: 805ACD9F 0x20 */]) {
          		  case 0:
/*<219>*/ 			switch (story_flags[559 /* us: 805A9B19 0x01, jp: 805ACD99 0x01 */]) {
          			  case 0:
/*<211>*/ 				printf("\x0E\x01\x09\x04\x00\x01Je n'entends plus la voix dans\nles toilettes, la nuit.\n\n\nMais maintenant, j'entends Orbo\npleurer dans son sommeil, dans\nla chambre d'Hergo... J'aimerais\nbien qu'il arrête de faire ça...")
          			  case 1:
          				goto flw_220
          			}
          		  case 1:
/*<225>*/ 			switch (story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */]) {
          			  case 0:
/*<226>*/ 				printf("\x0E\x01\x09\x04\x00\x01Au fait, ça fait un moment que je n'ai\npas vu Hergo. Où est\x2010ce qu'il a bien pu\npasser ?")
          			  case 1:
/*<227>*/ 				switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          				  case 0:
/*<228>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, comment vas\x2010tu ?\nPuisque tu es là, profites\x2010en pour aller\npasser une bonne nuit de sommeil dans\nton <r<lit>>.")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\xB05Ah, c'est bien plus calme la nuit,\nquand ces petits monstres sont au lit.\n\n\n\x0E\x01\x09\x04\n\x800Alors tes recherches avancent ?\nTu crois que tu pourras bientôt\nretrouver Zelda ? Bon courage !")
          				}
          			}
          		}
          	  case 1:
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x03Allez, je ferme cette porte !\nIl faudrait pas que des monstres\nrentrent pendant la nuit...\n\nJe laisse ouvert en haut mais il vaut\nmieux éviter de sortir en pleine nuit...\n\n\nEnfin, je comprends que tu veuilles\nretrouver ton amie Zelda au plus vite.\n\n\nEn général, la nuit, les habitants de\nCélesbourg restent chez eux.")
          	}
          }

          void entrypoint_100_24() {
/*<112>*/ 	start()
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x08Ouais !<pause1E> T'as réussi !\nMon <b<lucane du bourg>> !\n\n\nHé ! Attends !")
/*<114>*/ 	scene_flags[0 'Skyloft'][58 /* 0x6 04 */] = true;
          }

          void entrypoint_100_25() {
/*<119>*/ 	start()
/*<120>*/ 	switch (zone_temp_flags[13 /* 0x0 20 */]) {
          	  case 0:
/*<126>*/ 		printf("\x0E\x01\x09\x04\x0C\x1252\x0E\x01\x08\x02\x2CDCette fois, ça suffit !\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍÇa va se régler avec le directeur !\nEt je ferai en sorte que tu sois\nrenvoyé !")
          	  case 1:
/*<121>*/ 		switch (zone_temp_flags[12 /* 0x0 10 */]) {
          		  case 0:
/*<124>*/ 			printf("\x0E\x01\x09\x04\x0C\x1207\x0E\x01\x08\x02\x1CDArrête ça tout de suite !\x0E\x01\x0D\x02\x1906\nEspèce de petit voyou !\n\n\n\x0E\x01\n\x04\x0FÍSi tu continues, tu seras privé de repas\npendant une semaine !")
/*<125>*/ 			zone_temp_flags[13 /* 0x0 20 */] = true;
          		  case 1:
/*<122>*/ 			printf("\x0E\x01\x09\x04\x0C\x1206Mais qu'est\x2010ce que tu fais ?!\x0E\x01\x0D\x02\x1906\n\n\n\n\x0E\x01\n\x04\x0FÍTu vas me faire le plaisir de nettoyer\ntout ça !")
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
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x04Afin de rejoindre la statue de la\nDéesse sans te perdre, appuie sur \x0E\x02\x04\x02\x3CD\npour regarder ta <r<carte>>. Tu peux aller\nchercher ton oiseau de là\x2010bas.\x0E\x01\x11\x02\x3CD")
          		  case 1:
/*< 47>*/ 			printf("\x0E\x01\x09\x04\x00WQue se passe\x2010t\x2010il, Link ?\nTu as l'air tout paniqué...\n\n\nTon oiseau ? Ah, le célestrier\nvermeil ?\n<pause28>Si je sais où il est ?\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í\n\n\x0E\x01\x09\x04\x11\x200Non, je ne l'ai pas vu.\n\n\n\n\x0E\x01\x09\x04\x09\x204Depuis la statue de la Déesse, on a\nune vue d'ensemble sur le bourg.\nSi tu allais voir là\x2010bas ?\n\nPour aller à la statue de la Déesse\nsans te perdre, appuie sur \x0E\x02\x04\x02\x3CD\npour regarder ta <r<carte>>.\x0E\x01\x11\x02\x3CD")
/*< 48>*/ 			scene_flags[0 'Skyloft'][43 /* 0x4 08 */] = true;
          		}
          	  case 1:
/*< 44>*/ 		switch (scene_flags[42 /* 0x4 04 */]) {
          		  case 0:
/*< 45>*/ 			printf("\x0E\x01\x09\x04\x0C\x209J'aimerais juste une fois jouer le rôle\nde la Déesse lors de la chevauchée\ncéleste pour passer un moment\nromantique avec un beau chevalier.")
          		  case 1:
/*<  8>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh ! Bonjour, Link !\nAujourd'hui, avec cette douce brise,\nc'est le jour idéal pour la cérémonie.\n\n\x0E\x01\x09\x04\x11\x200Je me demande bien qui va gagner.\nSûrement <b<Hergo>>, il est très doué.\n\n\n\x0E\x01\x09\x04\x0C\x200Le vainqueur sera récompensé par la\njeune fille qui joue le rôle de la Déesse.\n\x0E\x01\x09\x04\x00\x609Comme c'est romantique...")
/*< 43>*/ 			scene_flags[0 'Skyloft'][42 /* 0x4 04 */] = true;
          		}
          	}
          }

          void entrypoint_100_26() {
/*<152>*/ 	start()
/*<154>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<155>*/ 		printf("\x0E\x01\x09\x04\x09\x802Tiens, c'est toi, Link ?\nC'est à <b<Célestin>> que j'avais demandé\nde faire ça. Enfin, peu importe...\n\n\x0E\x01\x09\x04\n\xC00Tu as pourtant une cérémonie\nimportante aujourd'hui, non ?\nC'est gentil de prendre le temps\nde m'aider.")
          	  case 1:
/*<153>*/ 		printf("\x0E\x01\x09\x04\n\x401Tiens, Link !\nC'est toi qui fais la livraison ?\n\n\n\x0E\x01\x09\x04\x10\x802Pourtant, c'est à <b<Célestin>> que\nj'avais demandé...\n\n\n\x0E\x01\x09\x04\x09\x400Enfin, peu importe. Apporte\nce <r<tonneau>> par ici.")
          	}
          }

          void entrypoint_100_10() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("")
          }

