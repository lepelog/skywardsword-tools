          void entrypoint_460_00() {
/*<  1>*/ 	start()
/*< 38>*/ 	story_flags[351 /* us: 805A9B01 0x20, jp: 805ACD81 0x20 */] = false;
/*< 39>*/ 	story_flags[352 /* us: 805A9B01 0x40, jp: 805ACD81 0x40 */] = false;
/*< 33>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = false;
/*< 34>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = false;
/*< 35>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = false;
/*< 36>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = false;
/*< 37>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = false;
          	switch (context_related4(0)) {
          	  case 0:
/*<  4>*/ 		switch (story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */]) {
          		  case 0:
/*<119>*/ 			switch (scene_flags[113 /* 0xF 02 */]) {
          			  case 0:
/*<  8>*/ 				printf("\x0E\x01\x09\x04\x07\xC01Tiens, Link ! Tu es prêt pour des\n<r<combats >>sans merci ? Ou est\x2010ce que tu préfères\nte frotter aux <r<Psysalis>> ?\n[1]Combat[2]Psysalis[3-]Aucun")
/*< 16>*/ 				switch (choice(3)) {
          				  case 0:
          					flw_80:
/*< 80>*/ 					switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          					  case 0:
          						flw_17:
/*< 17>*/ 						switch (context_related2(1)) {
          						  case 0:
          							flw_52:
/*< 52>*/ 							printf("\x0E\x01\x09\x04\x07\xC06C'est bien, tu n'as pas froid aux yeux ! Voyons...")
/*< 40>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = false;
/*< 41>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = false;
/*< 42>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = false;
/*< 43>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = false;
/*< 44>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = false;
/*< 45>*/ 							scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = false;
/*< 46>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = false;
/*< 47>*/ 							scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = false;
/*< 48>*/ 							scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = false;
/*< 49>*/ 							scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = false;
/*< 50>*/ 							scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = false;
/*< 51>*/ 							scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = false;
/*<1010>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
          								flw_13:
/*< 13>*/ 								printf("\x0E\x01\x09\x04\x00\xC00Tu veux affronter des ennemis rencontrés à\nquel moment de ton aventure ?\n[1]Début[2]Milieu[3]Fin[4-]Quitter")
/*< 14>*/ 								switch (choice(4)) {
          								  case 0:
          									flw_236:
/*<236>*/ 									entrypoint_460_41();
          								  case 1:
          									flw_237:
/*<237>*/ 									entrypoint_460_42();
          								  case 2:
/*<262>*/ 									switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          									  case 0:
/*<238>*/ 										entrypoint_460_43();
          									  case 1:
/*<263>*/ 										switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          										  case 0:
/*<265>*/ 											entrypoint_460_44();
          										  case 1:
/*<264>*/ 											switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          											  case 0:
/*<266>*/ 												entrypoint_460_45();
          											  case 1:
/*<267>*/ 												entrypoint_460_46();
          											}
          										}
          									}
          								  case 3:
          									flw_15:
/*< 15>*/ 									printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
          								}
          							  case 1:
/*<194>*/ 								switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          								  case 0:
          									goto flw_13
          								  case 1:
/*<195>*/ 									printf("\x0E\x01\x09\x04\x07\xC00Tu veux affronter des ennemis rencontrés à\nquel moment de ton aventure ?\n[1]Début[2]Récemment[3-]Quitter")
/*<196>*/ 									switch (choice(3)) {
          									  case 0:
          										goto flw_236
          									  case 1:
          										goto flw_237
          									  case 2:
          										goto flw_15
          									}
          								}
          							}
          						  case 1:
/*< 20>*/ 							printf("\x0E\x01\x09\x04\x10\xC0B...<pause0F> Hé ! Tu n'as pas l'air en forme. Tu veux\nvraiment continuer ?\n[1]Oui[2-]Non")
/*< 21>*/ 							switch (choice(2)) {
          							  case 0:
          								goto flw_52
          							  case 1:
/*< 22>*/ 								printf("\x0E\x01\x09\x04\x07\xC09Très bien, je comprends.<pause0F> Si tu meurs... eh bien,\ntu seras mort. Je ne vais donc pas te forcer.\n\n\n\x0E\x01\x09\x04\x00\xC00Mais reviens me voir quand tu te sentiras prêt.")
          							}
          						}
          					  case 1:
/*< 10>*/ 						printf("\x0E\x01\x09\x04\x0B\xC0DVa pour un <r<combat>> ! Ton enthousiasme me\nplaît !\n\n\nTu vas te retrouver face aux plus redoutables\nadversaires que tu as combattus jusqu'à présent.\n\n\n\x0E\x01\x09\x04\x00\xC00Je vais utiliser mes pouvoirs pour recréer tes\ncombats passés.\n\n\nÉvidemment...<pause0F> si tu gagnes, tu seras récompensé.\nLa plus belle récompense est mon trésor le plus\nprécieux, un <r<bouclier sacrément solide>> !\n\n\x0E\x01\x09\x04\x0D\xC00Mais attention...<pause0A> tu ne dois pas prendre ces\ncombats à la légère. <r<Si tu perds, c'est fini >>!\nTu seras perdu à jamais...\n\n\x0E\x01\x09\x04\x00\xC0ATu es toujours partant ?\n[1]Oui ![2-]Non...")
/*< 11>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_17
          						  case 1:
/*< 12>*/ 							printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
          						}
          					}
          				  case 1:
          					flw_81:
/*< 81>*/ 					switch (story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */]) {
          					  case 0:
          						flw_75:
/*< 75>*/ 						switch (context_related2(1)) {
          						  case 0:
/*< 77>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_464:
/*<464>*/ 								entrypoint_460_72();
          							  case 1:
/*<1015>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_464
          								  case 1:
/*<465>*/ 									entrypoint_460_74();
          								}
          							}
          						  case 1:
/*< 76>*/ 							printf("...<pause0F> \x0E\x01\x09\x04\x00\x05Tu joues à quoi, là ? Ça ne vaut pas la peine\nde risquer ta vie pour ça.\n\n\nReviens me voir quand tu auras repris des\nforces.")
          						}
          					  case 1:
/*< 72>*/ 						printf("\x0E\x01\x09\x04\x00\x06Tu veux essayer un défi <r<Psysalis >>? Je suis ravi\nde voir que tu ne te laisses pas impressionner !\n\n\n\x0E\x01\x09\x04\x07\xC00Tu vas revivre l'une des épreuves que tu as déjà\npassées.\n\n\nMais je rajoute une petite difficulté : le temps\nest chronométré. Si tu fais un bon temps, tu\nrecevras une récompense.\n\nPar contre...<pause14> Si tu te fais toucher une seule fois\npar un Gardien, tu auras perdu.\n\n\nSi tu essuies un échec, tu reviendras ici avec\nune <r<jauge de vie considérablement diminuée>>.\n\n\n\x0E\x01\x09\x04\x07\xC0AAlors, tu veux essayer ?\n[1]Oui ![2-]Non")
/*< 73>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_75
          						  case 1:
/*< 74>*/ 							printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
          						}
          					}
          				  case 2:
/*< 19>*/ 					printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
          				}
          			  case 1:
/*<118>*/ 				printf("\x0E\x01\x09\x04\x07\xC01Alors, Link ! Tu es prêt pour un\npeu d'action ?\n\n\n\x0E\x01\x09\x04\x00\xC00Tu vas pouvoir revivre tes expériences passées.\nQu'est\x2010ce que t'en dis ?\n[1]Oui[2-]Non")
          				flw_5:
/*<  5>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					scene_flags[9 'Lanayru Gorge'][113 /* 0xF 02 */] = true;
/*<  6>*/ 					printf("\x0E\x01\x09\x04\x00\xB06Ça, c'est une réponse digne d'un grand héros !\n\n\n\n\x0E\x01\x09\x04\x0B\xC00Bien, laisse\x2010moi jeter un \x153il à tes expériences\npassées...\n\n\n\x0E\x01\x06\x02\xFBCD......\n\n\n\n\x0E\x01\x09\x04\x00\xC08Je vois... Tu as accompli de nombreux exploits...\nTu as <r<combattu >>des monstres redoutables. Et tu\nas dû triompher des <r<Psysalis>>.\n\n\x0E\x01\x09\x04\x0D\xC00Très bien ! Je vais te permettre de revivre ces\ndeux types de défi.\n\n\n\x0E\x01\x09\x04\x00\xC00D'abord, dis\x2010moi ce que tu veux faire.\n[1]Combat[2]Psysalis[3-]Rien")
/*<  9>*/ 					switch (choice(3)) {
          					  case 0:
          						goto flw_80
          					  case 1:
          						goto flw_81
          					  case 2:
/*< 18>*/ 						printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
          					}
          				  case 1:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
          				}
          			}
          		  case 1:
/*< 28>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 2, 'param3': 31}
/*<  2>*/ 			story_flags[509 /* us: 805A9B15 0x08, jp: 805ACD95 0x08 */] = true;
/*<111>*/ 			switch (temp_flags[63 /* 0x6 80 */]) {
          			  case 0:
/*<110>*/ 				printf("\x0E\x01\x09\x04\x0B\xC08Qu'est\x2010ce qu'il y a, Link ? Tu ne\npeux pas attendre ? Tu veux déjà savoir\nce que je t'ai préparé ?\n\n\x0E\x01\x09\x04\x00\x00Très bien, dans ce cas, commençons tout de\nsuite !\n\n\n\x0E\x01\x09\x04\x00\xC00Mais un valeureux guerrier comme toi n'a pas\nde temps à perdre avec des futilités, n'est\x2010ce\npas ?\n\n\x0E\x01\x09\x04\x0D\xC00C'est pourquoi je te propose de revivre les\népreuves et combats que tu as rencontrés\njusqu'à présent.\n\n\x0E\x01\x09\x04\x07\xC00Le meilleur moyen d'apprendre est de tirer les\nleçons du passé !\n\n\n\x0E\x01\x09\x04\x00\xC0AAlors, qu'en dis\x2010tu, Link ?\n[1]C'est parti ![2-]Non merci")
          				goto flw_5
          			  case 1:
/*<  3>*/ 				printf("\x0E\x01\x09\x04\x0B\xC01Bonjour, Link ! Content de te\nrevoir !\n\n\n\x0E\x01\x09\x04\x00\x00Qu'est\x2010ce que tu dirais si on s'amusait un peu ?\n\n\n\n\x0E\x01\x09\x04\x00\xC00Mais un valeureux guerrier comme toi n'a pas\nde temps à perdre avec des futilités, n'est\x2010ce\npas ?\n\n\x0E\x01\x09\x04\x0D\xC00C'est pourquoi je te propose de revivre les\népreuves et combats que tu as rencontrés\njusqu'à présent.\n\n\x0E\x01\x09\x04\x07\xC00Le meilleur moyen d'apprendre est de tirer les\nleçons du passé !\n\n\n\x0E\x01\x09\x04\x00\xC0AAlors, qu'en dis\x2010tu, Link ?\n[1]C'est parti ![2-]Non merci")
          				goto flw_5
          			}
          		}
          	  case 1:
/*<507>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 116, 'param3': 44}
/*<116>*/ 		story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = false;
/*<689>*/ 		entrypoint_460_13();
          	  case 2:
/*<509>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 115, 'param3': 44}
/*<115>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*< 90>*/ 		switch (story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */]) {
          		  case 0:
/*< 92>*/ 			printf("\x0E\x01\x09\x04\x00\x07Beau travail. Tu es rentré sain et sauf.")
          			flw_94:
/*< 94>*/ 			printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour terminer ce défi.")
/*<103>*/ 			switch (context_related4(5)) {
          			  case 0:
/*<108>*/ 				printf("\x0E\x01\x09\x04\x00\x07Incroyable ! Beau travail, Link !\nTu as été rapide. Tu mérites une belle\nrécompense. Voilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
/*<109>*/ 				give_item(64 0x40);
          				flw_470:
/*<470>*/ 				switch (context_related2(6)) {
          				  case 0:
          					flw_91:
/*< 91>*/ 					switch (context_related3(3)) {
          					  case 0:
/*< 95>*/ 						printf("\x0E\x01\x09\x04\x00\xC05C'est la première fois que tu finis ce défi\n<r<Psysalis >>! Voici une récompense.\x0E\x01\x09\x04\x0C\xB06")
          						flw_638:
/*<638>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 639, 'param3': 12}
/*<639>*/ 						rupees += 50;
/*<637>*/ 						printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          						flw_641:
/*<641>*/ 						{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 510, 'param3': 12}
/*<510>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 98, 'param3': 45}
/*< 98>*/ 						printf("\x0E\x01\x09\x04\x00\nAlors, Link ? Tu veux relever un\nautre défi <r<Psysalis>> ?\n[1]Oui ![2-]Non")
/*< 99>*/ 						switch (choice(2)) {
          						  case 0:
/*<466>*/ 							switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          							  case 0:
          								flw_467:
/*<467>*/ 								entrypoint_460_72();
          							  case 1:
/*<1017>*/ 								switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          								  case 0:
          									goto flw_467
          								  case 1:
/*<468>*/ 									entrypoint_460_74();
          								}
          							}
          						  case 1:
/*<100>*/ 							printf("\x0E\x01\x09\x04\x00\x05Pff, t'es pas drôle.<pause14> Reviens me voir si tu\nchanges d'avis.")
/*<652>*/ 							temp_flags[5 /* 0x1 20 */] = true;
          						}
          					  case 1:
/*< 96>*/ 						printf("\x0E\x01\x09\x04\x0B\xC09Bien joué. Tu enregistres un nouveau record !\nJ'ai la récompense qu'il te faut. \x0E\x01\x09\x04\x0C\xB00Tiens, prends\nça.")
          						goto flw_638
          					  case 2:
          						goto flw_641
          					}
          				  case 1:
/*<469>*/ 					printf("Si tu veux gagner la plus belle des récompenses,\ntu vas devoir faire moins de <r<\x0E\x02\x03\x06\x00\x03\x2CD min \x0E\x02\x03\x06\x00\x04\x2CD s>>.\n\n\nIl va falloir te surpasser !")
          					goto flw_91
          				}
          			  case 1:
/*<107>*/ 				printf("\x0E\x01\x09\x04\x00\x07Tu as été très rapide ! Voilà ta récompense.\x0E\x01\x09\x04\x0C\xB06")
/*<635>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 636, 'param3': 12}
/*<636>*/ 				rupees += 100;
/*<634>*/ 				printf("Voilà 100 rubis pour toi. Dépense\x2010les à bon\nescient !")
          				goto flw_470
          			  case 2:
/*<106>*/ 				printf("\x0E\x01\x09\x04\x00\x0BHmm, ça ne casse pas des briques...<pause14> Mais tu as\nfait de ton mieux. Prends donc ceci.\x0E\x01\x09\x04\x0C\xB06")
/*<632>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 633, 'param3': 12}
/*<633>*/ 				rupees += 20;
/*<631>*/ 				printf("Voilà 20 rubis pour toi. Et ne dépense pas tout !")
          				goto flw_470
          			  case 3:
/*<105>*/ 				printf("\x0E\x01\x09\x04\x00\x0BVraiment ?<pause14> Tu peux faire mieux quand même !\n\n\n\nMets\x2010y du c\x153ur la prochaine fois ! Sinon tu\nn'auras que ça.\x0E\x01\x09\x04\x0C\xB06")
/*<629>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 630, 'param3': 12}
/*<630>*/ 				rupees += 5;
/*<628>*/ 				printf("Voilà 5 rubis pour toi. Ne me regarde pas\ncomme ça !")
          				goto flw_470
          			}
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x00\x07\x0E\x03\x01\x00Link ! Tu as collecté toutes les\nlarmes ! Tu es un vrai guerrier !")
/*< 97>*/ 			story_flags[528 /* us: 805A9B14 0x20, jp: 805ACD94 0x20 */] = true;
          			goto flw_94
          		}
          	  case 3:
/*<114>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = false;
/*<104>*/ 		printf("\x0E\x01\x09\x04\x00\x0BBen alors ! Tu as tout raté !\n\n\n\nEt ce n'est pas sans conséquence : ta jauge de\nvie est faible. Reviens quand tu auras repris\ndes forces.")
          	}
          }

          void entrypoint_460_52() {
/*<162>*/ 	start()
/*<128>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<129>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<130>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<131>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<133>*/ 	make_actor_do_something(1, 0)
/*<663>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 132, 'param3': 52}
/*<132>*/ 	changeScene(2, 0) // {'name': 'B200', 'room': 10, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_35() {
/*<417>*/ 	start()
/*<796>*/ 	switch (random(3)) {
          	  case 0:
/*<378>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<380>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<382>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<385>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<386>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<387>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<388>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<389>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<390>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<391>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<392>*/ 												switch (scene_flags[125 /* 0xE 20 */]) {
          												  case 0:
/*<400>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<407>*/ 													entrypoint_460_62();
          												  case 1:
/*<399>*/ 													scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<408>*/ 													entrypoint_460_61();
          												}
          											  case 1:
/*<398>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<405>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<397>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<406>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<396>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<411>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<395>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<412>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<394>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<409>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<393>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<410>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<384>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<403>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<383>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<404>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<381>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<401>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<379>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<402>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<933>*/ 		switch (scene_flags[125 /* 0xE 20 */]) {
          		  case 0:
/*<921>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<931>*/ 				switch (scene_flags[123 /* 0xE 08 */]) {
          				  case 0:
/*<926>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<919>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<932>*/ 							switch (scene_flags[124 /* 0xE 10 */]) {
          							  case 0:
/*<927>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<930>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<928>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<929>*/ 											switch (scene_flags[121 /* 0xE 02 */]) {
          											  case 0:
/*<923>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<941>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<948>*/ 													entrypoint_460_62();
          												  case 1:
/*<924>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<945>*/ 													entrypoint_460_53();
          												}
          											  case 1:
/*<936>*/ 												scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<953>*/ 												entrypoint_460_57();
          											}
          										  case 1:
/*<935>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<950>*/ 											entrypoint_460_56();
          										}
          									  case 1:
/*<937>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<952>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<934>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<951>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<939>*/ 								scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<946>*/ 								entrypoint_460_60();
          							}
          						  case 1:
/*<920>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<943>*/ 							entrypoint_460_51();
          						}
          					  case 1:
/*<925>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<944>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<938>*/ 					scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<947>*/ 					entrypoint_460_59();
          				}
          			  case 1:
/*<922>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<942>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<940>*/ 			scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<949>*/ 			entrypoint_460_61();
          		}
          	  case 2:
/*<966>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<963>*/ 			switch (scene_flags[120 /* 0xE 01 */]) {
          			  case 0:
/*<964>*/ 				switch (scene_flags[121 /* 0xE 02 */]) {
          				  case 0:
/*<968>*/ 					switch (scene_flags[125 /* 0xE 20 */]) {
          					  case 0:
/*<954>*/ 						switch (scene_flags[115 /* 0xF 08 */]) {
          						  case 0:
/*<965>*/ 							switch (scene_flags[122 /* 0xE 04 */]) {
          							  case 0:
/*<962>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<956>*/ 									switch (scene_flags[116 /* 0xF 10 */]) {
          									  case 0:
/*<961>*/ 										switch (scene_flags[118 /* 0xF 40 */]) {
          										  case 0:
/*<967>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<958>*/ 												switch (scene_flags[117 /* 0xF 20 */]) {
          												  case 0:
/*<976>*/ 													scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
/*<983>*/ 													entrypoint_460_62();
          												  case 1:
/*<959>*/ 													scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<980>*/ 													entrypoint_460_53();
          												}
          											  case 1:
/*<974>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<981>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<960>*/ 											scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<979>*/ 											entrypoint_460_54();
          										}
          									  case 1:
/*<957>*/ 										scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<977>*/ 										entrypoint_460_52();
          									}
          								  case 1:
/*<969>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<986>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<972>*/ 								scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<987>*/ 								entrypoint_460_58();
          							}
          						  case 1:
/*<955>*/ 							scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<978>*/ 							entrypoint_460_51();
          						}
          					  case 1:
/*<975>*/ 						scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<984>*/ 						entrypoint_460_61();
          					}
          				  case 1:
/*<971>*/ 					scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<988>*/ 					entrypoint_460_57();
          				}
          			  case 1:
/*<970>*/ 				scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<985>*/ 				entrypoint_460_56();
          			}
          		  case 1:
/*<973>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<982>*/ 			entrypoint_460_59();
          		}
          	}
          }

          void entrypoint_460_53() {
/*<163>*/ 	start()
/*<134>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<135>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<136>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<138>*/ 	make_actor_do_something(2, 0)
/*<662>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 137, 'param3': 52}
/*<137>*/ 	changeScene(8, 0) // {'name': 'B300', 'room': 0, 'layer': 2, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_01() {
/*<235>*/ 	start()
/*< 23>*/ 	switch (story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */]) {
          	  case 0:
          		flw_25:
/*< 25>*/ 		printf("\x0E\x01\x09\x04\x00\xC00Ton équipement actuel te convient ? Tu es\nprêt ?\n[1]Oui ![2-]Non")
/*< 26>*/ 		switch (choice(2)) {
          		  case 0:
/*< 27>*/ 			printf("\x0E\x01\x09\x04\x07\xC0DAllez, donne tout ce que tu as !")
/*< 78>*/ 			story_flags[522 /* us: 805A9B15 0x80, jp: 805ACD95 0x80 */] = true;
/*<112>*/ 			story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 30>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<174>*/ 				entrypoint_460_51();
          			  case 1:
/*< 31>*/ 				switch (scene_flags[116 /* 0xF 10 */]) {
          				  case 0:
/*<173>*/ 					entrypoint_460_52();
          				  case 1:
/*< 32>*/ 					switch (scene_flags[117 /* 0xF 20 */]) {
          					  case 0:
/*<177>*/ 						entrypoint_460_53();
          					  case 1:
/*<178>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<176>*/ 							entrypoint_460_54();
          						  case 1:
/*<182>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<191>*/ 								entrypoint_460_55();
          							  case 1:
/*<179>*/ 								switch (scene_flags[120 /* 0xE 01 */]) {
          								  case 0:
/*<190>*/ 									entrypoint_460_56();
          								  case 1:
/*<180>*/ 									switch (scene_flags[121 /* 0xE 02 */]) {
          									  case 0:
/*<193>*/ 										entrypoint_460_57();
          									  case 1:
/*<181>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<192>*/ 											entrypoint_460_58();
          										  case 1:
/*<183>*/ 											switch (scene_flags[123 /* 0xE 08 */]) {
          											  case 0:
/*<187>*/ 												entrypoint_460_59();
          											  case 1:
/*<184>*/ 												switch (scene_flags[124 /* 0xE 10 */]) {
          												  case 0:
/*<186>*/ 													entrypoint_460_60();
          												  case 1:
/*<185>*/ 													switch (scene_flags[125 /* 0xE 20 */]) {
          													  case 0:
/*<189>*/ 														entrypoint_460_61();
          													  case 1:
/*<188>*/ 														entrypoint_460_62();
          													}
          												}
          											}
          										}
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*< 29>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Oh, tu as changé d'avis ?<pause14> Ce n'est pas grave.\nReviens quand tu veux.\n\n\n\x0E\x01\x09\x04\x07\xC00Tu peux t'équiper d'un bouclier ou en changer,\npuis revenir me parler plus tard.")
          		}
          	  case 1:
/*< 24>*/ 		printf("\x0E\x01\x09\x04\x0D\xC00Ah oui...<pause0F> J'ai oublié de te dire quelque chose.\n\n\n\nTu ne peux utiliser que l'arsenal que tu\npossédais <r<au moment du combat >>en question.\n\n\n\x0E\x01\x09\x04\x07\xC00Et <r<tu ne peux pas utiliser les objets de ta\nsacoche >>! Certes, les ennemis sont puissants,\nmais tu les connais.\n\n\x0E\x01\x09\x04\x00\xC00Bon d'accord, c'est peut\x2010être un peu trop\nextrême. Allez, je te laisse <r<utiliser un bouclier\nsi tu veux>>.")
          		goto flw_25
          	}
          }

          void entrypoint_460_54() {
/*<164>*/ 	start()
/*<175>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<139>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<140>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<142>*/ 	make_actor_do_something(3, 0)
/*<661>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 665, 'param3': 52}
/*<665>*/ 	story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = true;
/*<668>*/ 	story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = false;
/*<669>*/ 	story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = false;
/*<670>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<993>*/ 	story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = false;
/*<1005>*/ 	story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */] = false;
/*<1008>*/ 	story_flags[149 /* us: 805A9AEE 0x80, jp: 805ACD6E 0x80 */] = false;
/*<141>*/ 	changeScene(9, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_71() {
/*<463>*/ 	start()
/*<102>*/ 	switch (context_related2(4)) {
          	  case 0:
/*<992>*/ 		make_actor_do_something(21, 0)
/*<101>*/ 		printf("Très bien... Ton meilleur temps pour cette\nPsysalis est de \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)>.")
          		flw_82:
/*< 82>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DAlors c'est parti ! Ferme les yeux et\nconcentre\x2010toi !")
/*< 79>*/ 		story_flags[523 /* us: 805A9B14 0x01, jp: 805ACD94 0x01 */] = true;
/*<113>*/ 		story_flags[531 /* us: 805A9B17 0x01, jp: 805ACD97 0x01 */] = true;
/*< 83>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 85>*/ 			make_actor_do_something(12, 0)
          		  case 1:
/*< 84>*/ 			switch (zone_temp_flags[1 /* 0x1 02 */]) {
          			  case 0:
/*< 86>*/ 				make_actor_do_something(13, 0)
          			  case 1:
/*< 87>*/ 				switch (zone_temp_flags[2 /* 0x1 04 */]) {
          				  case 0:
/*< 88>*/ 					make_actor_do_something(14, 0)
          				  case 1:
/*< 89>*/ 					make_actor_do_something(15, 0)
          				}
          			}
          		}
          	  case 1:
          		goto flw_82
          	}
          }

          void entrypoint_460_02() {
/*<472>*/ 	start()
/*< 54>*/ 	switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          	  case 0:
/*< 55>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07Bien joué. Tu m'as impressionné une fois de\nplus !")
          		flw_57:
/*< 57>*/ 		printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour battre\n<b<<string arg0>>>.")
/*< 53>*/ 		switch (context_related3(3)) {
          		  case 0:
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x00\x08Attends voir. Comme c'est la première fois\nque tu bats cet ennemi pour moi, voici une\nrécompense bien méritée.\x0E\x01\x09\x04\x0C\xB06")
          			flw_545:
/*<545>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 546, 'param3': 12}
/*<546>*/ 			rupees += 50;
/*<544>*/ 			printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          			flw_640:
/*<640>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 508, 'param3': 12}
/*<508>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 61, 'param3': 45}
/*< 61>*/ 			switch (story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */]) {
          			  case 0:
          				flw_64:
/*< 64>*/ 				printf("Si tu arrêtes maintenant, tu gagnes\n<r<<string arg1>>>.\nMais l'enjeu du prochain combat est\n<r<<r<<string arg2><r<>> !\n\x0E\x01\x09\x04\x00\nAlors, tu veux continuer ?\n[1]Oui[2-]Non")
/*< 65>*/ 				switch (choice(2)) {
          				  case 0:
/*< 70>*/ 					switch (scene_flags[114 /* 0xF 04 */]) {
          					  case 0:
/*< 68>*/ 						printf("\x0E\x01\x09\x04\x00\x08C'est une réponse digne d'un vrai héros !\n\n\n\nLe prochain combat sera le <numeric arg3>\x0E\x03\x00\x00e\x0F\x03\x00. Encore <numeric arg4> et tu\nauras vaincu tous tes adversaires !\n\n\nAllez, c'est parti !")
          						flw_117:
/*<117>*/ 						story_flags[530 /* us: 805A9B14 0x80, jp: 805ACD94 0x80 */] = true;
/*< 71>*/ 						switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          						  case 0:
/*<421>*/ 							entrypoint_460_35();
          						  case 1:
/*<418>*/ 							switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          							  case 0:
/*<422>*/ 								entrypoint_460_34();
          							  case 1:
/*<419>*/ 								switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          								  case 0:
/*<423>*/ 									entrypoint_460_33();
          								  case 1:
/*<420>*/ 									switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          									  case 0:
/*<424>*/ 										entrypoint_460_32();
          									  case 1:
/*<425>*/ 										entrypoint_460_31();
          									}
          								}
          							}
          						}
          					  case 1:
/*< 67>*/ 						printf("\x0E\x01\x09\x04\x00\x08C'est une réponse digne d'un vrai héros ! Mais\ntu dois savoir un petit détail.\n\n\n\x0E\x01\x09\x04\x07\x900Après le premier combat, c'est moi qui choisis\nles prochains ennemis. Tu n'as pas à y penser.\nEt ça rajoute un peu de suspense !\n\nAllez, fini de bavarder, passons aux choses\nsérieuses !")
/*< 69>*/ 						scene_flags[9 'Lanayru Gorge'][114 /* 0xF 04 */] = true;
          						goto flw_117
          					}
          				  case 1:
/*< 66>*/ 					printf("\x0E\x01\x09\x04\x00\x05Très bien...<pause0F> Je comprends que tu ne veuilles pas\nprendre de risques inutiles.\n\n\n\x0E\x01\x09\x04\x0C\xB06En tout cas, tu t'es bien battu ! Comme promis,\nvoilà ta récompense.")
/*<499>*/ 					switch (context_related3(12)) {
          					  case 0:
/*<500>*/ 						switch (context_related4(13)) {
          						  case 0:
/*<512>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 513, 'param3': 12}
/*<513>*/ 							rupees += 20;
/*<511>*/ 							printf("Voilà 20 rubis pour toi. Et ne dépense pas tout !")
          							flw_648:
/*<648>*/ 							temp_flags[5 /* 0x1 20 */] = true;
/*<471>*/ 							make_actor_do_something(20, 0)
/*<995>*/ 							printf("\x0E\x01\x09\x04\x01\xC09Reviens quand tu veux ! À bientôt !")
          						  case 1:
/*<503>*/ 							give_item(61 0x3D);
          							goto flw_648
          						  case 2:
/*<515>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 516, 'param3': 12}
/*<516>*/ 							rupees += 100;
/*<514>*/ 							printf("Voilà 100 rubis pour toi. Dépense\x2010les à bon\nescient !")
          							goto flw_648
          						  case 3:
/*<990>*/ 							switch (story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */]) {
          							  case 0:
/*<518>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 519, 'param3': 12}
/*<519>*/ 								rupees += 200;
/*<517>*/ 								printf("Voilà 200 rubis pour toi. Tu l'as bien mérité !")
          								goto flw_648
          							  case 1:
/*<989>*/ 								give_item(94 0x5E);
/*<991>*/ 								story_flags[511 /* us: 805A9B15 0x20, jp: 805ACD95 0x20 */] = true;
          								goto flw_648
          							}
          						}
          					  case 1:
/*<501>*/ 						switch (context_related4(14)) {
          						  case 0:
/*<521>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 522, 'param3': 12}
/*<522>*/ 							rupees += 300;
/*<520>*/ 							printf("Voilà 300 rubis pour toi. Fais\x2010toi plaisir !")
          							goto flw_648
          						  case 1:
/*<504>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<524>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 525, 'param3': 12}
/*<525>*/ 							rupees += 500;
/*<523>*/ 							printf("Voilà 500 rubis pour toi. C'est une sacrée\nsomme !")
          							goto flw_648
          						  case 3:
/*<526>*/ 							switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          							  case 0:
/*<529>*/ 								{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 530, 'param3': 12}
/*<530>*/ 								rupees += 1000;
/*<528>*/ 								printf("Incroyable ! 1 000 rubis ! Tu n'en reviens\npas, hein ?")
          								goto flw_648
          							  case 1:
/*<1007>*/ 								switch (is_adventure_pouch_full()) {
          								  case 0:
/*<997>*/ 									switch (is_item_check_full()) {
          									  case 0:
/*<1003>*/ 										{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1014, 'param3': 12}
/*<1014>*/ 										printf("\x0E\x01\x09\x04\x0B\xC09Oh ? Mais ta sacoche est pleine... et la consigne\naussi. Dommage, je ne vais pas pouvoir te\nremettre ce bouclier.")
/*<1004>*/ 										rupees += 1000;
/*<1002>*/ 										printf("Je te donne 1 000 rubis à la place.\x0E\x01\x09\x04\x0C\xB06 Tu pourras\nle gagner une prochaine fois !")
          										goto flw_648
          									  case 1:
          										flw_505:
/*<505>*/ 										give_item(125 0x7D);
/*<527>*/ 										story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          										goto flw_648
          									}
          								  case 1:
          									goto flw_505
          								}
          							}
          						}
          					  case 2:
/*<502>*/ 						switch (context_related4(15)) {
          						  case 0:
/*<532>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 533, 'param3': 12}
/*<533>*/ 							rupees += 2000;
/*<531>*/ 							printf("2 000 rubis ! C'est une vraie fortune !")
          							goto flw_648
          						  case 1:
/*<506>*/ 							give_item(64 0x40);
/*<536>*/ 							printf("\x0E\x01\x09\x04\x0C\xB00Voici ta récompense !")
/*<534>*/ 							give_item(64 0x40);
/*<537>*/ 							printf("\x0E\x01\x09\x04\x0C\xB00Tu as gagné ceci !")
/*<535>*/ 							give_item(64 0x40);
          							goto flw_648
          						  case 2:
/*<539>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 540, 'param3': 12}
/*<540>*/ 							rupees += 3000;
/*<538>*/ 							printf("Ouaaah ! 3 000 rubis ! Que vas\x2010tu faire avec\nune telle somme ?")
          							goto flw_648
          						  case 3:
/*<542>*/ 							{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 543, 'param3': 12}
/*<543>*/ 							rupees += 9900;
/*<541>*/ 							printf("Tu as décroché le jackpot : 9 900 rubis !\nMaintenant, je suis sur la paille !")
          							goto flw_648
          						}
          					}
          				}
          			  case 1:
/*< 62>*/ 				printf("\x0E\x01\x09\x04\x10\xC00Dis\x2010moi, Link...<pause0F> Est\x2010ce que tu es\nprêt à enchaîner avec un autre combat ?\n\n\n\x0E\x01\x09\x04\x0B\xC09Bien sûr, plus tu remportes de victoires\nconsécutives, plus la valeur de ta récompense\nest grande.\n\nPar exemple, tu peux gagner un <r<bouclier super\nrésistant >>! Ça te fait envie, pas vrai ?\n\n\n\x0E\x01\x09\x04\x0D\xC00Par contre...<pause14> J'imagine que tu le sais déjà, mais\nsi tu perds, c'en est fini de toi.\n\n\nDe plus, ta <r<jauge du bouclier >>et ta <r<jauge de vie\n>>ne se remplissent pas après chaque victoire.\nMais ça rajoute un peu de piment !")
/*< 63>*/ 				story_flags[510 /* us: 805A9B15 0x10, jp: 805ACD95 0x10 */] = true;
          				goto flw_64
          			}
          		  case 1:
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x00\x06Beau travail ! Tu as battu ton record ! Je ne\npeux pas te laisser repartir les mains vides !\nVoilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
          			goto flw_545
          		  case 2:
/*< 60>*/ 			printf("Ben alors ! Tu n'as pas battu ton record !\nApplique\x2010toi, la prochaine fois.")
          			goto flw_640
          		}
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\x0B\xC07Oh, bravo Link ! Tu es un vrai\nhéros !")
          		goto flw_57
          	}
          }

          void entrypoint_460_55() {
/*<165>*/ 	start()
/*<143>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<144>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<146>*/ 	make_actor_do_something(4, 0)
/*<660>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 145, 'param3': 52}
/*<145>*/ 	changeScene(10, 0) // {'name': 'B101', 'room': 0, 'layer': 2, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_72() {
/*<452>*/ 	start()
/*<444>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ça, c'est une réponse digne d'un héros ! Choisis\nle lieu du défi Psysalis.\n[1]Forêt de\nFirone[2]Volcan\nd'Ordinn[3]Désert de\nLanelle[4]Autre")
          	flw_445:
/*<445>*/ 	switch (choice(4)) {
          	  case 0:
/*<448>*/ 		make_actor_do_something(16, 0)
/*<446>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_460:
/*<460>*/ 		entrypoint_460_71();
          	  case 1:
/*<449>*/ 		make_actor_do_something(17, 0)
/*<447>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_460
          	  case 2:
/*<451>*/ 		make_actor_do_something(18, 0)
/*<450>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_460
          	  case 3:
/*<457>*/ 		printf("\x0E\x01\x09\x04\x00\x05Un autre lieu ? Où donc ?\n[1]Célesbourg[2]Lieux\nprécédents[3-]Quitter")
/*<455>*/ 		switch (choice(3)) {
          		  case 0:
/*<456>*/ 			make_actor_do_something(19, 0)
          			goto flw_460
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\nAlors, décide\x2010toi ! Choisis le lieu du défi\nPsysalis !\n[1]Forêt de\nFirone[2]Volcan\nd'Ordinn[3]Désert de\nLanelle[4]Autre")
          			goto flw_445
          		  case 2:
/*<459>*/ 			printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
/*<650>*/ 			temp_flags[5 /* 0x1 20 */] = true;
          		}
          	}
          }

          void entrypoint_460_03() {
/*<488>*/ 	start()
/*<489>*/ 	printf("\x0E\x01\x09\x04\x0B\xC09Et de huit victoires consécutives ! Magnifique !\nFélicitations !")
/*<549>*/ 	switch (story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */]) {
          	  case 0:
/*<552>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 553, 'param3': 12}
/*<553>*/ 		rupees += 1000;
/*<551>*/ 		printf("Incroyable ! 1 000 rubis ! Tu n'en reviens\npas, hein ?")
          		flw_647:
/*<647>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 649, 'param3': 12}
/*<649>*/ 		temp_flags[5 /* 0x1 20 */] = true;
/*<492>*/ 		make_actor_do_something(20, 0)
/*<996>*/ 		printf("\x0E\x01\x09\x04\x01\xC09Reviens quand tu veux ! À bientôt !")
          	  case 1:
/*<1006>*/ 		switch (is_adventure_pouch_full()) {
          		  case 0:
/*<998>*/ 			switch (is_item_check_full()) {
          			  case 0:
/*<1000>*/ 				{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 1016, 'param3': 12}
/*<1016>*/ 				printf("\x0E\x01\x09\x04\x0B\xC09Oh ? Mais ta sacoche est pleine... et la consigne\naussi. Dommage, je ne vais pas pouvoir te\nremettre ce bouclier.")
/*<1001>*/ 				rupees += 1000;
/*<999>*/ 				printf("Je te donne 1 000 rubis à la place.\x0E\x01\x09\x04\x0C\xB06 Tu pourras\nle gagner une prochaine fois !")
          				goto flw_647
          			  case 1:
          				flw_547:
/*<547>*/ 				give_item(125 0x7D);
/*<550>*/ 				story_flags[512 /* us: 805A9B15 0x40, jp: 805ACD95 0x40 */] = true;
          				goto flw_647
          			}
          		  case 1:
          			goto flw_547
          		}
          	}
          }

          void entrypoint_460_56() {
/*<166>*/ 	start()
/*<148>*/ 	make_actor_do_something(5, 0)
/*<659>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 147, 'param3': 52}
/*<147>*/ 	changeScene(11, 0) // {'name': 'B301', 'room': 0, 'layer': 2, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_73() {
/*<453>*/ 	start()
/*<427>*/ 	printf("")
/*<428>*/ 	switch (choice(4)) {
          	  case 0:
/*<433>*/ 		make_actor_do_something(16, 0)
/*<430>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_461:
/*<461>*/ 		entrypoint_460_71();
          	  case 1:
/*<434>*/ 		make_actor_do_something(17, 0)
/*<432>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_461
          	  case 2:
/*<437>*/ 		make_actor_do_something(18, 0)
/*<436>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_461
          	  case 3:
/*<435>*/ 		make_actor_do_something(19, 0)
          		goto flw_461
          	}
          }

          void entrypoint_460_04() {
/*<490>*/ 	start()
/*<491>*/ 	printf("\x0E\x01\x09\x04\x0B\xC09Ouah ! Neuf victoires consécutives ! Qui\nl'aurait cru ?")
/*<555>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 556, 'param3': 12}
/*<556>*/ 	rupees += 2000;
/*<554>*/ 	printf("2 000 rubis ! C'est une vraie fortune !")
          	goto flw_647
          }

          void entrypoint_460_57() {
/*<167>*/ 	start()
/*<150>*/ 	make_actor_do_something(6, 0)
/*<658>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 149, 'param3': 52}
/*<149>*/ 	changeScene(12, 0) // {'name': 'B201', 'room': 0, 'layer': 3, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_74() {
/*<454>*/ 	start()
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x06Ça, c'est une réponse digne d'un vrai héros !\nChoisis le lieu du défi Psysalis.\n[1]Forêt de\nFirone[2]Volcan\nd'Ordinn[3]Désert de\nLanelle[4-]Quitter")
/*<429>*/ 	switch (choice(4)) {
          	  case 0:
/*<440>*/ 		make_actor_do_something(16, 0)
/*<438>*/ 		zone_temp_flags[0 /* 0x1 01 */] = true;
          		flw_462:
/*<462>*/ 		entrypoint_460_71();
          	  case 1:
/*<441>*/ 		make_actor_do_something(17, 0)
/*<439>*/ 		zone_temp_flags[1 /* 0x1 02 */] = true;
          		goto flw_462
          	  case 2:
/*<443>*/ 		make_actor_do_something(18, 0)
/*<442>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          		goto flw_462
          	  case 3:
/*<431>*/ 		printf("\x0E\x01\x09\x04\x00\xC05Comment ça ? Tu me déçois...\n\n\n\n\x0E\x01\x09\x04\x07\xC00Dommage... Mais si tu changes d'avis, tu es le\nbienvenu.")
/*<651>*/ 		temp_flags[5 /* 0x1 20 */] = true;
          	}
          }

          void entrypoint_460_05() {
/*<493>*/ 	start()
/*<494>*/ 	printf("\x0E\x01\x09\x04\x0B\xC09Quoi ? Dix victoires consécutives ? Tu es un\nvrai champion !")
/*<557>*/ 	printf("\x0E\x01\x09\x04\x0C\xB06Tiens, prends\x2010ça.")
/*<548>*/ 	give_item(64 0x40);
/*<560>*/ 	printf("\x0E\x01\x09\x04\x0C\xB00Voici ta récompense !")
/*<558>*/ 	give_item(64 0x40);
/*<561>*/ 	printf("\x0E\x01\x09\x04\x0C\xB00Tu as gagné ceci !")
/*<559>*/ 	give_item(64 0x40);
          	goto flw_647
          }

          void entrypoint_460_58() {
/*<168>*/ 	start()
/*<152>*/ 	make_actor_do_something(7, 0)
/*<657>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 666, 'param3': 52}
/*<666>*/ 	story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = true;
/*<671>*/ 	story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = false;
/*<672>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<151>*/ 	changeScene(13, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_06() {
/*<495>*/ 	start()
/*<496>*/ 	printf("\x0E\x01\x09\x04\x0B\xC09Je n'en crois pas mes yeux ! Onze victoires\nconsécutives... Je suis très impressionné.")
/*<563>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 564, 'param3': 12}
/*<564>*/ 	rupees += 3000;
/*<562>*/ 	printf("Ouaaah ! 3 000 rubis ! Que vas\x2010tu faire avec\nune telle somme ?")
          	goto flw_647
          }

          void entrypoint_460_59() {
/*<169>*/ 	start()
/*<154>*/ 	make_actor_do_something(8, 0)
/*<656>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 667, 'param3': 52}
/*<667>*/ 	story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = true;
/*<674>*/ 	story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = true;
/*<1011>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<1012>*/ 		story_flags[495 /* us: 805A9B13 0x20, jp: 805ACD93 0x20 */] = true;
          		flw_673:
/*<673>*/ 		story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */] = false;
/*<153>*/ 		changeScene(14, 0) // {'name': 'F401', 'room': 1, 'layer': 0, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          	  case 1:
/*<1013>*/ 		story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
          		goto flw_673
          	}
          }

          void entrypoint_460_41() {
/*<231>*/ 	start()
/*<197>*/ 	printf("\x0E\x01\x09\x04\x00\x09Au début de ton aventure... Voyons...<pause14> Ceux\x2010là\nm'ont l'air assez costauds. Lequel choisis\x2010tu ?\n[1]Ghirahim[2]Bela Darma[3]Moldgath[4]Le Banni ")
/*<198>*/ 	switch (choice(4)) {
          	  case 0:
/*<199>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Ghirahim>>, le type étrange que tu\nas combattu au <b<temple de la contemplation>>.\nLui, je l'aime vraiment pas.")
/*<203>*/ 		scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
          		flw_228:
/*<228>*/ 		entrypoint_460_01();
          	  case 1:
/*<201>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Bela Darma>>, la grosse boule de feu\nque tu as combattue au <b<temple de la terre>>.")
/*<204>*/ 		scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
          		goto flw_228
          	  case 2:
/*<202>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Moldgath>>, l'espèce de gros scorpion\nque tu as combattu à la <b<raffinerie de Lanelle>>.")
/*<205>*/ 		scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
          		goto flw_228
          	  case 3:
/*<200>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<le Banni>>, le monstre gigantesque\nque tu as combattu au <b<vallon du sceau>>.")
/*<206>*/ 		scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
          		goto flw_228
          	}
          }

          void entrypoint_460_07() {
/*<497>*/ 	start()
/*<498>*/ 	printf("\x0E\x01\x09\x04\x0B\xC09Douze combats, autant de victoires ! Personne\nne t'arrive à la cheville ! Tu n'as pas volé ton\ntitre de héros !")
/*<566>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 567, 'param3': 12}
/*<567>*/ 	rupees += 9900;
/*<565>*/ 	printf("Tu as décroché le jackpot : 9 900 rubis !\nMaintenant, je suis sur la paille !")
          	goto flw_647
          }

          void entrypoint_460_42() {
/*<232>*/ 	start()
/*<234>*/ 	switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          	  case 0:
/*<227>*/ 		printf("\x0E\x01\x09\x04\x00\x09Au milieu de ton aventure... Voyons...<pause14> Ceux\x2010là\nm'ont l'air assez costauds. Lequel choisis\x2010tu ?\n[1]Da Ihloma[2]Daidagos[3]Ghirahim[4]Le Banni ")
          		flw_207:
/*<207>*/ 		switch (choice(4)) {
          		  case 0:
/*<208>*/ 			printf("\x0E\x01\x09\x04\x0B\xC09Tu as choisi <b<Da Ihloma>>, la créature à six bras\nque tu as combattue dans la <b<grande caverne\nantique>>.")
/*<212>*/ 			scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
          			flw_229:
/*<229>*/ 			entrypoint_460_01();
          		  case 1:
/*<210>*/ 			printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Daidagos>>, le monstre cyclope que\ntu as combattu sur le <b<galion des sables>>.")
/*<213>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
          			goto flw_229
          		  case 2:
/*<211>*/ 			printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Ghirahim>>, le type agaçant que tu\nas combattu au <b<grand sanctuaire ancien>>.")
/*<214>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
          			goto flw_229
          		  case 3:
/*<209>*/ 			printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi de revivre le deuxième\naffrontement contre <b<le Banni>>, le monstre\ngigantesque que tu as combattu au <b<vallon\ndu sceau>>.")
/*<215>*/ 			scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
          			goto flw_229
          		}
          	  case 1:
/*<226>*/ 		printf("\x0E\x01\x09\x04\x00\x09Récemment... Voyons...<pause14> Ceux\x2010là m'ont l'air assez\ncostauds. Lequel tu choisis ?\n[1]Da Ihloma[2]Daidagos[3]Ghirahim[4]Le Banni")
          		goto flw_207
          	}
          }

          void entrypoint_460_08() {
/*<578>*/ 	start()
/*<569>*/ 	printf("\x0E\x01\x09\x04\x0B\xC07Bien joué. Tu m'as impressionné une fois de\nplus !")
/*<570>*/ 	printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour battre\n<b<<string arg0>>>.")
/*<568>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<571>*/ 		printf("\x0E\x01\x09\x04\x00\x08Attends voir. Comme c'est la première fois\nque tu bats cet ennemi pour moi, voici une\nrécompense bien méritée.\x0E\x01\x09\x04\x0C\xB06")
          		flw_576:
/*<576>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 577, 'param3': 12}
/*<577>*/ 		rupees += 50;
/*<575>*/ 		printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          		flw_642:
/*<642>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 574, 'param3': 12}
/*<574>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 623, 'param3': 45}
/*<623>*/ 		entrypoint_460_03();
          	  case 1:
/*<572>*/ 		printf("\x0E\x01\x09\x04\x00\x06Beau travail ! Tu as battu ton record ! Je ne\npeux pas te laisser repartir les mains vides !\nVoilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
          		goto flw_576
          	  case 2:
/*<573>*/ 		printf("Ben alors ! Tu n'as pas battu ton record ! Mais\nbon, c'est déjà bien d'avoir battu tous les\nennemis que tu avais rencontrés jusqu'à présent.")
          		goto flw_642
          	}
          }

          void entrypoint_460_60() {
/*<170>*/ 	start()
/*<156>*/ 	make_actor_do_something(9, 0)
/*<655>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 1009, 'param3': 52}
/*<1009>*/ 	story_flags[347 /* us: 805A9B01 0x02, jp: 805ACD81 0x02 */] = true;
/*<155>*/ 	changeScene(15, 0) // {'name': 'F403', 'room': 1, 'layer': 0, 'entrance': 1, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_43() {
/*<233>*/ 	start()
/*<216>*/ 	printf("\x0E\x01\x09\x04\x00\x09Vers la fin de ton aventure ? Voyons...<pause14> Ceux\x2010là\nm'ont l'air assez costauds. Lequel tu choisis ?\n[1]Le Banni[2]La horde\nde démons[3]Ghirahim[4]L'Avatar\ndu Néant")
/*<217>*/ 	switch (choice(4)) {
          	  case 0:
/*<218>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi de revivre le troisième\naffrontement contre <b<le Banni>>, le monstre\nrécalcitrant que tu as combattu au <b<vallon\ndu sceau>>.")
/*<222>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_230:
/*<230>*/ 		entrypoint_460_01();
          	  case 1:
/*<220>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<la horde de démons>>, l'armée de\nmonstres que <b<Ghirahim >>a envoyée contre toi\nau <b<vallon du sceau>>.")
/*<223>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_230
          	  case 2:
/*<221>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Ghirahim>>, le type détestable que tu\nas combattu au <b<vallon du sceau>>.")
/*<224>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_230
          	  case 3:
/*<219>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<l'Avatar du Néant>>. De tous les\nennemis que tu as combattus, celui\x2010là est le\nplus redoutable ! J'en ai la chair de poule !")
/*<225>*/ 		scene_flags[9 'Lanayru Gorge'][126 /* 0xE 40 */] = true;
          		goto flw_230
          	}
          }

          void entrypoint_460_09() {
/*<589>*/ 	start()
/*<580>*/ 	printf("\x0E\x01\x09\x04\x0B\xC07Bien joué. Tu m'as impressionné une fois de\nplus !")
/*<581>*/ 	printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour battre\n<b<<string arg0>>>.")
/*<579>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<582>*/ 		printf("\x0E\x01\x09\x04\x00\x08Attends voir. Comme c'est la première fois\nque tu bats cet ennemi pour moi, voici une\nrécompense bien méritée.\x0E\x01\x09\x04\x0C\xB06")
          		flw_587:
/*<587>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 588, 'param3': 12}
/*<588>*/ 		rupees += 50;
/*<586>*/ 		printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          		flw_643:
/*<643>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 585, 'param3': 12}
/*<585>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 624, 'param3': 45}
/*<624>*/ 		entrypoint_460_04();
          	  case 1:
/*<583>*/ 		printf("\x0E\x01\x09\x04\x00\x06Beau travail ! Tu as battu ton record ! Je ne\npeux pas te laisser repartir les mains vides !\nVoilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
          		goto flw_587
          	  case 2:
/*<584>*/ 		printf("Ben alors ! Tu n'as pas battu ton record ! Mais\nbon, c'est déjà bien d'avoir battu tous les\nennemis que tu avais rencontrés jusqu'à présent.")
          		goto flw_643
          	}
          }

          void entrypoint_460_61() {
/*<171>*/ 	start()
/*<158>*/ 	make_actor_do_something(10, 0)
/*<654>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 691, 'param3': 52}
/*<691>*/ 	story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = true;
/*<157>*/ 	changeScene(16, 0) // {'name': 'F403', 'room': 1, 'layer': 4, 'entrance': 7, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_44() {
/*<248>*/ 	start()
/*<239>*/ 	printf("\x0E\x01\x09\x04\x00\x09Vers la fin de ton aventure ? Voyons...<pause14> Ah, voici\ndes adversaires de taille ! Lequel choisis\x2010tu ?\n[1]Le Banni[2]La horde\nde démons[3]Ghirahim")
/*<240>*/ 	switch (choice(3)) {
          	  case 0:
/*<241>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi de revivre le troisième\naffrontement contre <b<le Banni>>, le monstre\nrécalcitrant que tu as combattu au <b<vallon\ndu sceau>>.")
/*<244>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_247:
/*<247>*/ 		entrypoint_460_01();
          	  case 1:
/*<242>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<la horde de démons>>, l'armée de\nmonstres que <b<Ghirahim >>a envoyée contre toi\nau <b<vallon du sceau>>.")
/*<245>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_247
          	  case 2:
/*<243>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<Ghirahim>>, le type détestable que tu\nas combattu au <b<vallon du sceau>>.")
/*<246>*/ 		scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
          		goto flw_247
          	}
          }

          void entrypoint_460_62() {
/*<172>*/ 	start()
/*<160>*/ 	make_actor_do_something(11, 0)
/*<653>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 159, 'param3': 52}
/*<159>*/ 	changeScene(17, 0) // {'name': 'B400', 'room': 0, 'layer': 1, 'entrance': 3, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_45() {
/*<256>*/ 	start()
/*<249>*/ 	printf("\x0E\x01\x09\x04\x00\x09Vers la fin de ton aventure ? Voyons...<pause14> Ah, voici\ndes adversaires de taille ! Lequel choisis\x2010tu ?\n[1]Le Banni[2]La horde\nde démons")
/*<250>*/ 	switch (choice(2)) {
          	  case 0:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi de revivre le troisième\naffrontement contre <b<le Banni>>, le monstre\nrécalcitrant que tu as combattu au <b<vallon\ndu sceau>>.")
/*<253>*/ 		scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
          		flw_255:
/*<255>*/ 		entrypoint_460_01();
          	  case 1:
/*<252>*/ 		printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi <b<la horde de démons>>, l'armée de\nmonstres que <b<Ghirahim >>a envoyée contre toi\nau <b<vallon du sceau>>.")
/*<254>*/ 		scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
          		goto flw_255
          	}
          }

          void entrypoint_460_10() {
/*<600>*/ 	start()
/*<591>*/ 	printf("\x0E\x01\x09\x04\x0B\xC07Bien joué. Tu m'as impressionné une fois de\nplus !")
/*<592>*/ 	printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour battre\n<b<<string arg0>>>.")
/*<590>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<593>*/ 		printf("\x0E\x01\x09\x04\x00\x08Attends voir. Comme c'est la première fois\nque tu bats cet ennemi pour moi, voici une\nrécompense bien méritée.\x0E\x01\x09\x04\x0C\xB06")
          		flw_598:
/*<598>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 599, 'param3': 12}
/*<599>*/ 		rupees += 50;
/*<597>*/ 		printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          		flw_644:
/*<644>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 596, 'param3': 12}
/*<596>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 625, 'param3': 45}
/*<625>*/ 		entrypoint_460_05();
          	  case 1:
/*<594>*/ 		printf("\x0E\x01\x09\x04\x00\x06Beau travail ! Tu as battu ton record ! Je ne\npeux pas te laisser repartir les mains vides !\nVoilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
          		goto flw_598
          	  case 2:
/*<595>*/ 		printf("Ben alors ! Tu n'as pas battu ton record ! Mais\nbon, c'est déjà bien d'avoir battu tous les\nennemis que tu avais rencontrés jusqu'à présent.")
          		goto flw_644
          	}
          }

          void entrypoint_460_46() {
/*<261>*/ 	start()
/*<257>*/ 	printf("\x0E\x01\x09\x04\x00\x09Vers la fin de ton aventure...?<pause14> Pour l'instant,\nje ne vois que <b<le Banni >>qui soit à ta hauteur.")
/*<258>*/ 	printf("\x0E\x01\x09\x04\x0B\xC0DTu as choisi de revivre le troisième\naffrontement contre <b<le Banni>>, le monstre\nrécalcitrant que tu as combattu au <b<vallon\ndu sceau>>.")
/*<259>*/ 	scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<260>*/ 	entrypoint_460_01();
          }

          void entrypoint_460_11() {
/*<611>*/ 	start()
/*<602>*/ 	printf("\x0E\x01\x09\x04\x0B\xC07Bien joué. Tu m'as impressionné une fois de\nplus !")
/*<603>*/ 	printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour battre\n<b<<string arg0>>>.")
/*<601>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<604>*/ 		printf("\x0E\x01\x09\x04\x00\x08Attends voir. Comme c'est la première fois\nque tu bats cet ennemi pour moi, voici une\nrécompense bien méritée.\x0E\x01\x09\x04\x0C\xB06")
          		flw_609:
/*<609>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 610, 'param3': 12}
/*<610>*/ 		rupees += 50;
/*<608>*/ 		printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          		flw_645:
/*<645>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 607, 'param3': 12}
/*<607>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 626, 'param3': 45}
/*<626>*/ 		entrypoint_460_06();
          	  case 1:
/*<605>*/ 		printf("\x0E\x01\x09\x04\x00\x06Beau travail ! Tu as battu ton record ! Je ne\npeux pas te laisser repartir les mains vides !\nVoilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
          		goto flw_609
          	  case 2:
/*<606>*/ 		printf("Ben alors ! Tu n'as pas battu ton record ! Mais\nbon, c'est déjà bien d'avoir battu tous les\nennemis que tu avais rencontrés jusqu'à présent.")
          		goto flw_645
          	}
          }

          void entrypoint_460_12() {
/*<622>*/ 	start()
/*<613>*/ 	printf("\x0E\x01\x09\x04\x0B\xC07Bien joué. Tu m'as impressionné une fois de\nplus !")
/*<614>*/ 	printf("Tu as mis \x0E\x02\x03\x06\x00\x00\x2CD min <numeric arg1(2)> s <numeric arg2(2)> pour battre\n<b<<string arg0>>>.")
/*<612>*/ 	switch (context_related3(3)) {
          	  case 0:
/*<615>*/ 		printf("\x0E\x01\x09\x04\x00\x08Attends voir. Comme c'est la première fois\nque tu bats cet ennemi pour moi, voici une\nrécompense bien méritée.\x0E\x01\x09\x04\x0C\xB06")
          		flw_620:
/*<620>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 621, 'param3': 12}
/*<621>*/ 		rupees += 50;
/*<619>*/ 		printf("Voilà 50 rubis pour toi. Allez, prends\x2010les !")
          		flw_646:
/*<646>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 618, 'param3': 12}
/*<618>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 627, 'param3': 45}
/*<627>*/ 		entrypoint_460_07();
          	  case 1:
/*<616>*/ 		printf("\x0E\x01\x09\x04\x00\x06Beau travail ! Tu as battu ton record ! Je ne\npeux pas te laisser repartir les mains vides !\nVoilà pour toi.\x0E\x01\x09\x04\x0C\xB06")
          		goto flw_620
          	  case 2:
/*<617>*/ 		printf("Ben alors ! Tu n'as pas battu ton record ! Mais\nbon, c'est déjà bien d'avoir battu tous les\nennemis que tu avais rencontrés jusqu'à présent.")
          		goto flw_646
          	}
          }

          void entrypoint_460_13() {
/*<687>*/ 	start()
/*<675>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<680>*/ 		story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */] = false;
/*<686>*/ 		story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          		flw_690:
/*<690>*/ 		entrypoint_460_14();
          	  case 1:
/*<676>*/ 		switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          		  case 0:
/*<679>*/ 			story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */] = false;
/*<684>*/ 			story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */] = true;
/*<685>*/ 			story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
          			goto flw_690
          		  case 1:
/*<677>*/ 			switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          			  case 0:
/*<678>*/ 				story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */] = false;
/*<681>*/ 				story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */] = true;
/*<682>*/ 				story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */] = true;
/*<683>*/ 				story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */] = false;
/*<994>*/ 				story_flags[11 /* us: 805A9AD8 0x10, jp: 805ACD58 0x10 */] = true;
          				goto flw_690
          			  case 1:
/*<692>*/ 				switch (story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */]) {
          				  case 0:
/*<693>*/ 					story_flags[726 /* us: 805A9B24 0x40, jp: 805ACDA4 0x40 */] = false;
          					goto flw_690
          				  case 1:
          					goto flw_690
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_31() {
/*<413>*/ 	start()
/*<694>*/ 	switch (random(3)) {
          	  case 0:
/*<268>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<270>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<272>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<275>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<276>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<277>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<278>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<282>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<289>*/ 									entrypoint_460_58();
          								  case 1:
/*<281>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<290>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<280>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<287>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<279>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<288>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<274>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<285>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<273>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<286>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<271>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<283>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<269>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<284>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<704>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<702>*/ 			switch (scene_flags[118 /* 0xF 40 */]) {
          			  case 0:
/*<699>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<703>*/ 					switch (scene_flags[119 /* 0xF 80 */]) {
          					  case 0:
/*<705>*/ 						switch (scene_flags[121 /* 0xE 02 */]) {
          						  case 0:
/*<695>*/ 							switch (scene_flags[115 /* 0xF 08 */]) {
          							  case 0:
/*<697>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<709>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<716>*/ 									entrypoint_460_58();
          								  case 1:
/*<698>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<710>*/ 									entrypoint_460_52();
          								}
          							  case 1:
/*<696>*/ 								scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<711>*/ 								entrypoint_460_51();
          							}
          						  case 1:
/*<708>*/ 							scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<717>*/ 							entrypoint_460_57();
          						}
          					  case 1:
/*<706>*/ 						scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<715>*/ 						entrypoint_460_55();
          					}
          				  case 1:
/*<700>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<713>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<701>*/ 				scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<712>*/ 				entrypoint_460_54();
          			}
          		  case 1:
/*<707>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<714>*/ 			entrypoint_460_56();
          		}
          	  case 2:
/*<725>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<726>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<718>*/ 				switch (scene_flags[115 /* 0xF 08 */]) {
          				  case 0:
/*<728>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<720>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<727>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<722>*/ 								switch (scene_flags[117 /* 0xF 20 */]) {
          								  case 0:
/*<732>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<739>*/ 									entrypoint_460_58();
          								  case 1:
/*<723>*/ 									scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<736>*/ 									entrypoint_460_53();
          								}
          							  case 1:
/*<730>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<737>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<721>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<733>*/ 							entrypoint_460_52();
          						}
          					  case 1:
/*<731>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<740>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<719>*/ 					scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<734>*/ 					entrypoint_460_51();
          				}
          			  case 1:
/*<729>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<738>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<724>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<735>*/ 			entrypoint_460_54();
          		}
          	}
          }

          void entrypoint_460_14() {
/*<688>*/ 	start()
/*<473>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<477>*/ 		switch (context_related2(7)) {
          		  case 0:
/*<487>*/ 			entrypoint_460_12();
          		  case 1:
          			flw_482:
/*<482>*/ 			entrypoint_460_02();
          		}
          	  case 1:
/*<474>*/ 		switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (context_related2(8)) {
          			  case 0:
/*<486>*/ 				entrypoint_460_11();
          			  case 1:
          				goto flw_482
          			}
          		  case 1:
/*<475>*/ 			switch (story_flags[134 /* us: 805A9AE4 0x10, jp: 805ACD64 0x10 */]) {
          			  case 0:
/*<479>*/ 				switch (context_related2(9)) {
          				  case 0:
/*<485>*/ 					entrypoint_460_10();
          				  case 1:
          					goto flw_482
          				}
          			  case 1:
/*<476>*/ 				switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          				  case 0:
/*<480>*/ 					switch (context_related2(10)) {
          					  case 0:
/*<484>*/ 						entrypoint_460_09();
          					  case 1:
          						goto flw_482
          					}
          				  case 1:
/*<481>*/ 					switch (context_related2(11)) {
          					  case 0:
/*<483>*/ 						entrypoint_460_08();
          					  case 1:
          						goto flw_482
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_460_32() {
/*<414>*/ 	start()
/*<741>*/ 	switch (random(3)) {
          	  case 0:
/*<291>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<293>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<295>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<298>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<299>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<300>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<301>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<302>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<307>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<312>*/ 										entrypoint_460_59();
          									  case 1:
/*<306>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<315>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<305>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<316>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<304>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<313>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<303>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<314>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<297>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<310>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<296>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<311>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<294>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<308>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<292>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<309>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<752>*/ 		switch (scene_flags[121 /* 0xE 02 */]) {
          		  case 0:
/*<753>*/ 			switch (scene_flags[122 /* 0xE 04 */]) {
          			  case 0:
/*<751>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<742>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<746>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<749>*/ 							switch (scene_flags[118 /* 0xF 40 */]) {
          							  case 0:
/*<744>*/ 								switch (scene_flags[116 /* 0xF 10 */]) {
          								  case 0:
/*<750>*/ 									switch (scene_flags[119 /* 0xF 80 */]) {
          									  case 0:
/*<758>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<763>*/ 										entrypoint_460_59();
          									  case 1:
/*<754>*/ 										scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<765>*/ 										entrypoint_460_55();
          									}
          								  case 1:
/*<745>*/ 									scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<759>*/ 									entrypoint_460_52();
          								}
          							  case 1:
/*<748>*/ 								scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<761>*/ 								entrypoint_460_54();
          							}
          						  case 1:
/*<747>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<762>*/ 							entrypoint_460_53();
          						}
          					  case 1:
/*<743>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<760>*/ 						entrypoint_460_51();
          					}
          				  case 1:
/*<755>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<764>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<757>*/ 				scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<766>*/ 				entrypoint_460_58();
          			}
          		  case 1:
/*<756>*/ 			scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<767>*/ 			entrypoint_460_57();
          		}
          	  case 2:
/*<775>*/ 		switch (scene_flags[118 /* 0xF 40 */]) {
          		  case 0:
/*<770>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<777>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<778>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<772>*/ 						switch (scene_flags[117 /* 0xF 20 */]) {
          						  case 0:
/*<776>*/ 							switch (scene_flags[119 /* 0xF 80 */]) {
          							  case 0:
/*<779>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<768>*/ 									switch (scene_flags[115 /* 0xF 08 */]) {
          									  case 0:
/*<784>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<789>*/ 										entrypoint_460_59();
          									  case 1:
/*<769>*/ 										scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<786>*/ 										entrypoint_460_51();
          									}
          								  case 1:
/*<783>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<792>*/ 									entrypoint_460_58();
          								}
          							  case 1:
/*<780>*/ 								scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<791>*/ 								entrypoint_460_55();
          							}
          						  case 1:
/*<773>*/ 							scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<788>*/ 							entrypoint_460_53();
          						}
          					  case 1:
/*<782>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<793>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<781>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<790>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<771>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<785>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<774>*/ 			scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<787>*/ 			entrypoint_460_54();
          		}
          	}
          }

          void entrypoint_460_33() {
/*<415>*/ 	start()
/*<794>*/ 	switch (random(3)) {
          	  case 0:
/*<317>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<319>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<321>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<324>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<325>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<326>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<327>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<328>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<329>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<335>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<340>*/ 											entrypoint_460_60();
          										  case 1:
/*<334>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<341>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<333>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<344>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<332>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<345>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<331>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<342>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<330>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<343>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<323>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<338>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<322>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<339>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<320>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<336>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<318>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<337>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<809>*/ 		switch (scene_flags[123 /* 0xE 08 */]) {
          		  case 0:
/*<799>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<801>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<797>*/ 					switch (scene_flags[115 /* 0xF 08 */]) {
          					  case 0:
/*<804>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<807>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<805>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<808>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<806>*/ 										switch (scene_flags[120 /* 0xE 01 */]) {
          										  case 0:
/*<815>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<820>*/ 											entrypoint_460_60();
          										  case 1:
/*<811>*/ 											scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<822>*/ 											entrypoint_460_56();
          										}
          									  case 1:
/*<813>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<824>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<810>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<823>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<812>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<825>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<803>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<818>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<798>*/ 						scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<817>*/ 						entrypoint_460_51();
          					}
          				  case 1:
/*<802>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<819>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<800>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<816>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<814>*/ 			scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<821>*/ 			entrypoint_460_59();
          		}
          	  case 2:
/*<835>*/ 		switch (scene_flags[120 /* 0xE 01 */]) {
          		  case 0:
/*<826>*/ 			switch (scene_flags[115 /* 0xF 08 */]) {
          			  case 0:
/*<830>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<838>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<828>*/ 						switch (scene_flags[116 /* 0xF 10 */]) {
          						  case 0:
/*<836>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<834>*/ 								switch (scene_flags[119 /* 0xF 80 */]) {
          								  case 0:
/*<833>*/ 									switch (scene_flags[118 /* 0xF 40 */]) {
          									  case 0:
/*<837>*/ 										switch (scene_flags[122 /* 0xE 04 */]) {
          										  case 0:
/*<844>*/ 											scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<849>*/ 											entrypoint_460_60();
          										  case 1:
/*<842>*/ 											scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<853>*/ 											entrypoint_460_58();
          										}
          									  case 1:
/*<832>*/ 										scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<847>*/ 										entrypoint_460_54();
          									}
          								  case 1:
/*<839>*/ 									scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<852>*/ 									entrypoint_460_55();
          								}
          							  case 1:
/*<841>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<854>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<829>*/ 							scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<845>*/ 							entrypoint_460_52();
          						}
          					  case 1:
/*<843>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<850>*/ 						entrypoint_460_59();
          					}
          				  case 1:
/*<831>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<848>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<827>*/ 				scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<846>*/ 				entrypoint_460_51();
          			}
          		  case 1:
/*<840>*/ 			scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<851>*/ 			entrypoint_460_56();
          		}
          	}
          }

          void entrypoint_460_51() {
/*<161>*/ 	start()
/*<121>*/ 	story_flags[353 /* us: 805A9B01 0x80, jp: 805ACD81 0x80 */] = true;
/*<122>*/ 	story_flags[354 /* us: 805A9B00 0x04, jp: 805ACD80 0x04 */] = true;
/*<123>*/ 	story_flags[355 /* us: 805A9B00 0x02, jp: 805ACD80 0x02 */] = true;
/*<124>*/ 	story_flags[356 /* us: 805A9B00 0x01, jp: 805ACD80 0x01 */] = true;
/*<125>*/ 	story_flags[357 /* us: 805A9B00 0x08, jp: 805ACD80 0x08 */] = true;
/*<127>*/ 	make_actor_do_something(0, 0)
/*<664>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 692, 'next': 126, 'param3': 52}
/*<126>*/ 	changeScene(7, 0) // {'name': 'B100', 'room': 0, 'layer': 5, 'entrance': 2, 'byte4': 2, 'byte5': 0, 'flag6': 0, 'zero': 0, 'flag8': 0}
          }

          void entrypoint_460_34() {
/*<416>*/ 	start()
/*<795>*/ 	switch (random(3)) {
          	  case 0:
/*<346>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<348>*/ 			switch (scene_flags[116 /* 0xF 10 */]) {
          			  case 0:
/*<350>*/ 				switch (scene_flags[117 /* 0xF 20 */]) {
          				  case 0:
/*<353>*/ 					switch (scene_flags[118 /* 0xF 40 */]) {
          					  case 0:
/*<354>*/ 						switch (scene_flags[119 /* 0xF 80 */]) {
          						  case 0:
/*<355>*/ 							switch (scene_flags[120 /* 0xE 01 */]) {
          							  case 0:
/*<356>*/ 								switch (scene_flags[121 /* 0xE 02 */]) {
          								  case 0:
/*<357>*/ 									switch (scene_flags[122 /* 0xE 04 */]) {
          									  case 0:
/*<358>*/ 										switch (scene_flags[123 /* 0xE 08 */]) {
          										  case 0:
/*<359>*/ 											switch (scene_flags[124 /* 0xE 10 */]) {
          											  case 0:
/*<366>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<373>*/ 												entrypoint_460_61();
          											  case 1:
/*<365>*/ 												scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<371>*/ 												entrypoint_460_60();
          											}
          										  case 1:
/*<364>*/ 											scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<372>*/ 											entrypoint_460_59();
          										}
          									  case 1:
/*<363>*/ 										scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<376>*/ 										entrypoint_460_58();
          									}
          								  case 1:
/*<362>*/ 									scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<377>*/ 									entrypoint_460_57();
          								}
          							  case 1:
/*<361>*/ 								scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<374>*/ 								entrypoint_460_56();
          							}
          						  case 1:
/*<360>*/ 							scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<375>*/ 							entrypoint_460_55();
          						}
          					  case 1:
/*<352>*/ 						scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<369>*/ 						entrypoint_460_54();
          					}
          				  case 1:
/*<351>*/ 					scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<370>*/ 					entrypoint_460_53();
          				}
          			  case 1:
/*<349>*/ 				scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<367>*/ 				entrypoint_460_52();
          			}
          		  case 1:
/*<347>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<368>*/ 			entrypoint_460_51();
          		}
          	  case 1:
/*<857>*/ 		switch (scene_flags[116 /* 0xF 10 */]) {
          		  case 0:
/*<863>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<864>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<867>*/ 					switch (scene_flags[123 /* 0xE 08 */]) {
          					  case 0:
/*<862>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<865>*/ 							switch (scene_flags[121 /* 0xE 02 */]) {
          							  case 0:
/*<866>*/ 								switch (scene_flags[122 /* 0xE 04 */]) {
          								  case 0:
/*<868>*/ 									switch (scene_flags[124 /* 0xE 10 */]) {
          									  case 0:
/*<855>*/ 										switch (scene_flags[115 /* 0xF 08 */]) {
          										  case 0:
/*<859>*/ 											switch (scene_flags[117 /* 0xF 20 */]) {
          											  case 0:
/*<875>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<882>*/ 												entrypoint_460_61();
          											  case 1:
/*<860>*/ 												scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<879>*/ 												entrypoint_460_53();
          											}
          										  case 1:
/*<856>*/ 											scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<877>*/ 											entrypoint_460_51();
          										}
          									  case 1:
/*<874>*/ 										scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<880>*/ 										entrypoint_460_60();
          									}
          								  case 1:
/*<872>*/ 									scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<885>*/ 									entrypoint_460_58();
          								}
          							  case 1:
/*<871>*/ 								scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<886>*/ 								entrypoint_460_57();
          							}
          						  case 1:
/*<861>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<878>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<873>*/ 						scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<881>*/ 						entrypoint_460_59();
          					}
          				  case 1:
/*<870>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<883>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<869>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<884>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<858>*/ 			scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<876>*/ 			entrypoint_460_52();
          		}
          	  case 2:
/*<887>*/ 		switch (scene_flags[115 /* 0xF 08 */]) {
          		  case 0:
/*<895>*/ 			switch (scene_flags[119 /* 0xF 80 */]) {
          			  case 0:
/*<896>*/ 				switch (scene_flags[120 /* 0xE 01 */]) {
          				  case 0:
/*<897>*/ 					switch (scene_flags[121 /* 0xE 02 */]) {
          					  case 0:
/*<894>*/ 						switch (scene_flags[118 /* 0xF 40 */]) {
          						  case 0:
/*<891>*/ 							switch (scene_flags[117 /* 0xF 20 */]) {
          							  case 0:
/*<900>*/ 								switch (scene_flags[124 /* 0xE 10 */]) {
          								  case 0:
/*<899>*/ 									switch (scene_flags[123 /* 0xE 08 */]) {
          									  case 0:
/*<889>*/ 										switch (scene_flags[116 /* 0xF 10 */]) {
          										  case 0:
/*<898>*/ 											switch (scene_flags[122 /* 0xE 04 */]) {
          											  case 0:
/*<907>*/ 												scene_flags[9 'Lanayru Gorge'][125 /* 0xE 20 */] = true;
/*<914>*/ 												entrypoint_460_61();
          											  case 1:
/*<904>*/ 												scene_flags[9 'Lanayru Gorge'][122 /* 0xE 04 */] = true;
/*<917>*/ 												entrypoint_460_58();
          											}
          										  case 1:
/*<890>*/ 											scene_flags[9 'Lanayru Gorge'][116 /* 0xF 10 */] = true;
/*<908>*/ 											entrypoint_460_52();
          										}
          									  case 1:
/*<905>*/ 										scene_flags[9 'Lanayru Gorge'][123 /* 0xE 08 */] = true;
/*<913>*/ 										entrypoint_460_59();
          									}
          								  case 1:
/*<906>*/ 									scene_flags[9 'Lanayru Gorge'][124 /* 0xE 10 */] = true;
/*<912>*/ 									entrypoint_460_60();
          								}
          							  case 1:
/*<892>*/ 								scene_flags[9 'Lanayru Gorge'][117 /* 0xF 20 */] = true;
/*<911>*/ 								entrypoint_460_53();
          							}
          						  case 1:
/*<893>*/ 							scene_flags[9 'Lanayru Gorge'][118 /* 0xF 40 */] = true;
/*<910>*/ 							entrypoint_460_54();
          						}
          					  case 1:
/*<903>*/ 						scene_flags[9 'Lanayru Gorge'][121 /* 0xE 02 */] = true;
/*<918>*/ 						entrypoint_460_57();
          					}
          				  case 1:
/*<902>*/ 					scene_flags[9 'Lanayru Gorge'][120 /* 0xE 01 */] = true;
/*<915>*/ 					entrypoint_460_56();
          				}
          			  case 1:
/*<901>*/ 				scene_flags[9 'Lanayru Gorge'][119 /* 0xF 80 */] = true;
/*<916>*/ 				entrypoint_460_55();
          			}
          		  case 1:
/*<888>*/ 			scene_flags[9 'Lanayru Gorge'][115 /* 0xF 08 */] = true;
/*<909>*/ 			entrypoint_460_51();
          		}
          	}
          }

