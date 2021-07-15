          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf("\x0E\x01\x09\x04\x11\x1153Aaaaaah, mais qu'est\x2010ce que t'as fait?\nTu vas en entendre parler, mon gars!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf("\x0E\x01\x09\x04\x00\x01J'ai entendu dire qu'on te devait\nce nouveau lustre.\n\n\n\x0E\x01\x09\x04\x00\x300Tu n'essaierais pas de t'attirer les\nfaveurs de Tironne, par hasard?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf("\x0E\x01\x09\x04\x00\x01Alors toutes ces histoires de démons\nn'étaient que des superstitions,\nfinalement...\n\n\x0E\x01\x09\x04\x00\x300Ce vieux fou cherchait seulement à se\nrendre intéressant!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf("\x0E\x01\x09\x04\x00\x01Écoute donc ça!\n\n\n\nTu vois le vieil homme assis là?\nIl prétend qu'il a vu un démon...\n\n\n\x0E\x01\x09\x04\n\x300C'est pas en racontant des histoires\ncomme ça qu'il va gagner le c\x153ur\nde Tironne!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf("\x0E\x01\x09\x04\x11\x1104Tu y crois, toi, aux histoires de démons\net autres superstitions du genre?\n\n\n\x0E\x01\x09\x04\n\x300Mais dis donc, toi! Serais-tu en train\nd'essayer de séduire Tironne aussi,\npar hasard?!")
          				  case 1:
          					goto flw_41
          				}
          			}
          		}
          	  case 1:
          		goto flw_493
          	}
          }

          void entrypoint_117_23() {
/*<292>*/ 	start()
/*<176>*/ 	printf("\x0E\x01\x09\x04\x07\x803Quelle bonne idée tu as eue de me\nprésenter ce bon monsieur Taupe!\nComme il est brave, et utile!\n\nEt j'ai tellement de choses à lui faire\nfaire par ici...\n\x0E\x01\x09\x04\x13\x800Merci <pause05>de <pause05>tout <pause05>c\x153ur <pause05>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf("\x0E\x01\x09\x04\x00\x08Héhéhé! Recule\x2010toi, p'tit gars!\nLaisse faire le pro!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf("\x0E\x01\x09\x04\x00\x04Alors, qu'est\x2010ce que tu veux faire?\n[1]Jouer de\nla lyre[2]Flacon de\nsoupe[3-]Rien")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf("\x0E\x01\x09\x04\x0E\x1000Très bien! Dans ce cas, va faire un\npetit numéro avec ma belle Tironne.\nÇa va lui faire plaisir!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf("\x0E\x01\x09\x04\x0C\x700Désolé, Tironne ne chante que la nuit!\n\n\n\nReviens ce soir!")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf("\x0E\x01\x09\x04\x08\x1004Que ça me fait plaisir! Un jeune qui a\nle goût assez raffiné pour apprécier\nma soupe!\n\nSi tu veux en emporter une fiole,\nc'est <r<10 rubis>>.\n[1]J'achète![2-]Non merci")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf("Ma soupe est bien meilleure quand on\nla mange chaude! Mais elle refroidit en\nseulement cinq minutes.")
          					  case 1:
/*<321>*/ 						printf("\x0E\x01\x09\x04\x00\x700Tu n'as pas de flacon vide?\n\n\n\nSi tu veux goûter ma soupe, il va t'en\nfalloir un. Va chercher un flacon vide\net tu pourras te régaler!")
          					}
          				  case 1:
/*<319>*/ 					printf("\x0E\x01\x09\x04\x0C\x700On dirait bien que t'es cassé...\nReviens me voir plus tard.")
          				}
          			  case 1:
/*<323>*/ 				printf("\x0E\x01\x09\x04\x0D\xA00Eh bien, décide\x2010toi, mon garçon!")
          			}
          		  case 2:
/*<313>*/ 			printf("\x0E\x01\x09\x04\x08\x1000Je vois... Eh bien, tu peux t'asseoir si\ntu veux, et te détendre un peu.\n\n\n\x0E\x01\x09\x04\x00\x700Oh, et n'oublie pas de passer dire\nbonjour à Tironne de temps en temps!")
          		}
          	  case 1:
/*<309>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\nQue penses\x2010tu de mon nouveau lustre?\n\n\n\x0E\x01\x09\x04\x0B\x1100Laisse\x2010moi te dire qu'il m'a coûté une\nsomme rondelette!")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf("\x0E\x01\x09\x04\x0D\x1006...\nTu trouves que je suis allé un peu loin?\n\n\n\x0E\x01\x09\x04\x08\x09Garde tes opinions pour toi-même!\nC'est grâce à toi que j'ai pu m'offrir\nun lustre aussi sensationnel!\n\n\x0E\x01\x09\x04\x0C\x900Mais que je te voie pas t'en approcher!")
/*<311>*/ 		printf("\x0E\x01\x09\x04\x08\x700Bon. Qu'est-ce que je peux faire pour\ntoi aujourd'hui? Ça t'intéresserait de\nme rendre des petits services, comme\navant?\n\x0E\x01\x09\x04\x0E\x700Je te paierai, bien sûr!\nTu pourrais nous jouer un peu de lyre!\nOu bien prendre une rasade de soupe?\n[1]Rendre\nservice[2]Flacon de\nsoupe[3-]Pas\nle temps!")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf("\x0E\x01\x09\x04\x07\x701Tu sais quoi? Loisel va m'aider à\nrécolter les citrouilles!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf("\x0E\x01\x09\x04\x1B09\x702Tu m'étonnes! Je pourrais lui labourer\nson lot, moi, et bien plus vite que cette\nvieille taupe!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf("\x0E\x01\x09\x04\x00\x08C'est vrai? Je suis si heureuse!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf("\x0E\x01\x09\x04\x1B07\x705Hahaha! Si tu as besoin de mon aide,\npeu importe que ce soit pour cueillir\ntes citrouilles ou te tirer d'une\nmaison en flammes! Je serai là!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oh! Dans ce cas, j'accepte ton offre\navec plaisir!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf("Je vous adore!\nVous êtes tellement gentils!\x0E\x01\x09\x04\x07\x703")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf("\x0E\x01\x09\x04\x00\x09Merveilleux! Tu l'as trouvé!\n...Tu l'as trouvé, n'est-ce pas?")
/*<167>*/ 	printf("\x0E\x01\x09\x04\x01\x705Mais... Tu vois bien que ce n'est pas\nune personne...\n\n\n\x0E\x01\x09\x04\x07\x700Ooh, je vois... C'est cette taupe qui va\nlabourer ma terre...")
          }

          void entrypoint_117_25() {
/*<394>*/ 	start()
          	flw_34:
/*< 34>*/ 	switch (context_related3(0)) {
          	  case 0:
/*< 90>*/ 		switch (scene_flags[6 /* 0x1 40 */]) {
          		  case 0:
/*<200>*/ 			switch (zone_temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<201>*/ 				printf("\x0E\x01\x09\x04\x07\x703Parfait! Je suis content de savoir que\nje peux toujours compter sur toi!\n[1]Au travail![2-]Non,\ndésolé!")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf("\x0E\x01\x09\x04\x13\x809Merveilleux! Je savais que je pouvais\ncompter sur toi!\x0E\x01\x05\x04\x1E\x00")
          					flw_87:
/*< 87>*/ 					printf("\x0E\x01\x09\x04\x07\x700Si tu veux les porter toutes à la fois,\nn'oublie pas une chose : <r<marche très\nlentement>>.\n\nSi elles penchent à droite, avance vers\nla droite. Si elles penchent à gauche,\navance vers la gauche.\nC'est juste une question d'équilibre!\n\x0E\x01\x09\x04\x01\x700Mais pas de panique surtout, elles\ntomberont si tu vas trop vite! <pause14>\nC'est tout! Bonne chance!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf("\x0E\x01\x09\x04\x01\x1606Tu es sérieux? Et moi qui pensais que\ntu allais nous aider...")
          						  case 1:
/*<514>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Hm. Dis donc... Est-ce que ça t'arrive\nd'être aimable de temps en temps?")
          						}
          					  case 1:
/*<  5>*/ 						printf("\x0E\x01\x09\x04\x01\x1606Tu es sérieux?\nJe vais le dire à mon père!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf("\x0E\x01\x09\x04\x07\x808J'espère que tu reviendras récolter\nmes citrouilles un de ces jours!\nMon vaillant \x0E\x01\x06\x02\xFBCDchevalier\x0E\x01\x06\x02Í!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf("\x0E\x01\x09\x04\x01\x700Te voilà! Tu me sauves la vie!\nQue dirais\x2010tu de te retrousser\nles manches et de suer un peu?\n\n\x0E\x01\x09\x04\x07\x700J'ai à nouveau besoin de tes talents de\nporteur de citrouilles. Ça te tente?\nJe te paierai, évidemment!\n\n[1]Allons\x2010y![2-]Non,\ndésolé.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf("\x0E\x01\x09\x04\x07\x703Alors allons\x2010y! Je vais te montrer où\nranger les citrouilles.")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf("Tu dois les porter jusqu'à l'abri, un\npeu plus loin!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf("\x0E\x01\x09\x04\x00\x0FMaintenant que la récolte est terminée,\nil ne reste plus qu'à planter de\nnouvelles citrouilles. Mais avant, il\nfaut labourer la terre!\nOù est\x2010ce que je pourrais bien trouver\nquelqu'un qui sache labourer?")
/*<396>*/ 							printf("\x0E\x01\x09\x04\x01\x700Au fait, j'aurais une petite faveur à te\ndemander. C'est qu'il me reste encore\ndes citrouilles à transporter... Et que...\n\n\x0E\x01\x09\x04\x07\x700Crois\x2010tu que tu pourrais me donner un\ncoup de main et les déposer dans \nl'abri? Je te paierai, bien entendu,\net généreusement!\n[1]En avant![2-]Non,\ndésolé!")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf("\x0E\x01\x09\x04\x00\x01Alors, tu es partant pour nous aider\nà récolter nos citrouilles?\n[1]Au travail![2-]Non,\ndésolé!")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf("\x0E\x01\x09\x04\x01\x701Ah, c'est bien. Tu es là pour m'aider à\nla <r<récolte de citrouilles>>!\n\n\n\x0E\x01\x09\x04\x07\x700J'avoue que je me sens bien soulagée.\nAs\x2010tu seulement idée du poids que ça\npèse, une citrouille?\n\n\x0E\x01\x09\x04\x01\x1600Ah oui? Comme ça, tu penses que\nça pèse une plume?\n\n\n\x0E\x01\x09\x04\x01\x700Ah ha! Je vois. Et si on rendait tout\nça un petit peu plus intéressant, hein?\nVoyons si tu es capable de <r<porter cinq\ncitrouilles >>à la fois!\n\x0E\x01\x09\x04\x07\x1600Un conseil, en passant. Vas\x2010y\ndoucement si tu ne veux pas les\nfaire tomber. Bon, ça suffit.\nEn avant, les citrouilles!\n[1]Au travail![2-]Pas\nle temps")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf("\x0E\x01\x09\x04\x13\x809Tu as réussi, j'en étais sûre!\nJe savais bien qu'on pouvait te confier\ncette tâche délicate!\n\n\x0E\x01\x09\x04\x07\x800Voilà 50 rubis pour toi!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf("\x0E\x01\x09\x04\x07\x800Merci <pause0F>de <pause0F>tout <pause0F>c\x153ur!\nRepasse nous voir quand tu veux!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf("\x0E\x01\x09\x04\x13\x809Tu as réussi, j'en étais sûre!\n\n\n\n\x0E\x01\x09\x04\x01\x700Très bien, je te laisse tranquille avec\nmes citrouilles maintenant!\n\n\n\x0E\x01\x09\x04\x19\x800Merci <pause0F>de <pause0F>tout <pause0F>c\x153ur<pause0F>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh non! Il faudrait que tu fasses un\npeu plus attention, quand même!\n\n\n\x0E\x01\x09\x04\x07\x700Viens par ici si tu veux réessayer.")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf("\x0E\x01\x09\x04\x00\x06Hohoho...\nRien de tel qu'une bonne journée de\nlabeur pour se dégourdir!\n\n\x0E\x01\x09\x04\x0C\xD00Et laisse\x2010moi te dire qu'avec cette jolie\nfille sous les yeux, on sent même pas la\nfatigue!\n\n\x0E\x01\x09\x04\x01\x900Mais dis\x2010moi<pause0A>.<pause0A>.<pause0A>.<pause0A> as\x2010tu vu comme elle me\nregardait, la petite?\n\n\n\x0E\x01\x09\x04\x0C\xD00Je pense que je lui ai tombé dans l'\x153il,\nma parole!\n\n\n\x0E\x01\x09\x04\x09\xD0BDemain, je vais travailler encore plus\nfort. Regardez-moi bien aller!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf("\x0E\x01\x09\x04\x00\nNon mais... Tu veux rire de moi?\nLabourer toute la journée? C'est\npour ça que tu m'as fait venir ici?\nSans farce?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf("\x0E\x01\x09\x04\x08\x1004Que ça me fait plaisir! Un jeune qui a\nle goût assez raffiné pour apprécier\nma soupe!\n\nSi tu veux en emporter une fiole,\nc'est <r<10 rubis>>.\n[1]J'achète![2-]Non merci")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf("Enfin! Tiens. C'est pour toi!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf("Ma soupe est bien meilleure quand on\nla mange chaude! Mais elle refroidit en\nseulement cinq minutes.")
          				  case 1:
/*<116>*/ 					printf("\x0E\x01\x09\x04\x00\x700Tu n'as pas de flacon vide?\n\n\n\nSi tu veux goûter ma soupe, il va t'en\nfalloir un. Va chercher un flacon vide\net tu pourras te régaler!")
          				}
          			  case 1:
/*<114>*/ 				printf("\x0E\x01\x09\x04\x0C\x700On dirait bien que t'es cassé...\nReviens me voir plus tard.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf("\x0E\x01\x09\x04\x10\x705Ça va. Il n'y a pas que la soupe qui est\nagréable ici. Tu peux aussi y rencontrer\ndes énergumènes hauts en couleur.\nFais comme chez toi et détends\x2010toi.\nIl n'y a qu'une seule règle ici :\ninterdiction FORMELLE de détruire\nou déranger quoi que ce soit dans\nmon établissement!\n\x0E\x01\x09\x04\x08\x700Je vais même être plus précis : pas\ntouche à mon lustre de luxe, compris?\nIl est sur mesure et hors de prix.\n\n\x0E\x01\x09\x04\x00\x900Alors que je te vois pas t'y accrocher!")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf("\x0E\x01\x09\x04\x10\x905Je vois. Dans ce cas, tu vas devoir\ntravailler pour moi, mon garçon,\npour rembourser mon lustre.\n\n\x0E\x01\x09\x04\x00\x700Reviens me voir quand tu repasseras\npar ici.")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf("\x0E\x01\x09\x04\x10\x905Je vois. Dans ce cas, tu vas devoir\ntravailler pour moi, mon garçon,\npour rembourser mon lustre.\n\n\x0E\x01\x09\x04\x00\x700Reviens me voir quand tu repasseras\npar ici.")
          					  case 1:
          						goto flw_437
          					}
          				}
          			}
          		}
          	  case 1:
          		goto flw_434
          	}
          }

          void entrypoint_117_44() {
/*<134>*/ 	start()
/*<136>*/ 	switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          	  case 0:
/*<138>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<140>*/ 			switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x09\x04\x01\x70FJ'espère que tu ne dis pas ça\njuste pour me rassurer...\n\n\n\x0E\x01\x09\x04\x07\x700Bon, un peu d'optimisme n'a jamais tué\npersonne, de toute façon. J'attendrai\npatiemment ton ami ici.")
          			  case 1:
/*<139>*/ 				printf("\x0E\x01\x09\x04\x00\x0FMaintenant que la récolte est terminée,\nil ne reste plus qu'à planter de\nnouvelles citrouilles. Mais avant, il\nfaut labourer la terre!\nOù est\x2010ce que je pourrais bien trouver\nquelqu'un qui sache labourer?")
          			}
          		  case 1:
/*<135>*/ 			printf("\x0E\x01\x09\x04\x01\x701Tu viens proposer tes services pour la\nrécolte de citrouilles?\n\n\n\x0E\x01\x09\x04\x07\x700Il est un peu tard pour ça, tu ne penses\npas? Reviens donc demain matin. Les\nplants seront encore là à t'attendre.")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tiens, si c'est pas le chevalier qui a\ndétruit notre lustre de luxe! Tu essaies\ntoujours de le rembourser?\n\n\x0E\x01\x09\x04\x01\x700Ah tiens, ça me revient!<pause1E> Papa disait\njustement qu'il avait du travail pour\ntoi. Ça tombe bien!\n\n\x0E\x01\x09\x04\x07\x700Tu devrais aller le voir, il te donnera\nsûrement quelque chose à faire!")
          		  case 1:
/*<424>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tiens, mais c'est le chevalier qui a\ndétruit notre lustre de luxe! Tu essaies\ntoujours de le rembourser?")
          		}
          	}
          }

          void entrypoint_117_27() {
/*<448>*/ 	start()
/*<456>*/ 	set_camera(30, 0)
/*<450>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 452, 'param3': 32}
/*<452>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 453, 'param3': 15}
/*<453>*/ 	{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 26, 'next': 451, 'param3': 14}
/*<451>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 473, 'param3': 16}
/*<473>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<472>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Je pense que tu ferais mieux d'aller\nparler à mon père sans tarder!\n\n\n\x0E\x01\x09\x04\x1A1A\x800S'il s'énerve, ça sera pas beau à voir!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Bonjour à toi!\nBienvenue à <r<la Citrouille perchée>>.\nNotre soupe de citrouille est réputée\naux quatre coins du ciel!\n\x0E\x01\x09\x04\x1A1A\x800Il n'y a pas grand\x2010chose à faire ici,\nmais tu peux te détendre et t'amuser!")
          		goto flw_454
          	}
          }

          void entrypoint_117_10() {
/*<  6>*/ 	start()
/*<118>*/ 	switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          	  case 0:
/*<214>*/ 		entrypoint_117_11();
          	  case 1:
          		flw_520:
/*<520>*/ 		scene_flags[21 'The Sky'][33 /* 0x5 02 */] = true;
/*< 12>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          			  case 0:
/*<308>*/ 				entrypoint_117_24();
          			  case 1:
/*< 14>*/ 				switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          				  case 0:
/*< 18>*/ 					printf("\x0E\x01\x09\x04\x00\x0ETu as enfin remboursé mon lustre,\nmon garçon! Beau travail!\n\n\nFaut bien dire que je ne pensais pas\nque tu tiendrais ta parole.\n\n\n\x0E\x01\x09\x04\x00\x1000La prochaine fois que tu passeras,\ntu seras à nouveau mon client!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf("\x0E\x01\x09\x04\x00\x01Tu veux bien rejouer pour ma petite\nTironne?\n[1]Je suis prêt![2]Hein?[3-]Non merci")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf("\x0E\x01\x09\x04\x00\x0EVoilà exactement ce que je voulais\nentendre!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf("\x0E\x01\x09\x04\x0D\x02Parfait! Tu vas très bien t'en sortir.\nHé, Tironne!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf("\x0E\x01\x09\x04\x1A00\x08Oui, papa?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf("\x0E\x01\x09\x04\x0B\xB00Voici le garçon qui va t'accompagner\npendant que tu chantes! Veux\x2010tu bien\nnous enchanter de ta voix mélodieuse,\nma belle fille?")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf("Bien sûr! Je suis prête!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf("\x0E\x01\x09\x04\x00\x0ED'accord, écoute bien.")
          										flw_265:
/*<265>*/ 										printf("\x0E\x01\x09\x04\x00\x700Les chansons de Tironne sont\nentraînantes, et les clients se laissent\ntoujours porter par la musique.\nTu vas devoir être à la hauteur!\n\x0E\x01\x09\x04\x0F\x700En général, ils écoutent la chanson en\nse balançant sur leur chaise de gauche \nà droite.\n\nObserve leurs mouvements et joue\nen rythme! Peu importe la direction,\nmais ne va ni plus vite, ni plus\nlentement qu'eux!\n\x0E\x01\x09\x04\x08\x700Lorsqu'ils s'immobilisent, tu peux\njouer au rythme qui te plaît!\n\n\nTu as compris? Bien en rythme,\nsurtout!\n[1]Compris![2-]Euh...")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf("Eh bien, qu'est\x2010ce que je t'ai dit?\nÉcoute mieux la prochaine fois!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf("\x0E\x01\x09\x04\x00\x04Très bien! Tu joueras sûrement mieux\nsi tu prends le temps de te détendre\nun peu avant!")
          									}
          								  case 1:
/*<519>*/ 									printf("\x0E\x01\x09\x04\x00\x01Encore toi! <pause1E>Ne me dis rien, je sais ce\nque tu veux. T'as envie de nous jouer\nun air de ta lyre! C'est ça, hein?\n\nDésolé, mon garçon. On ne fait pas\nde spectacles pendant la journée.\n\n\nRepasse donc cette nuit!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf("\x0E\x01\x09\x04\x00\x01Te revoilà! Voyons voir...\nQu'est\x2010ce que je pourrais bien\nte faire faire cette fois?\n\n\x0E\x01\x09\x04\x0D\x700Tiens, qu'est\x2010ce que c'est que cet\ninstrument bizarre que tu tiens là?\n\n\n\x0E\x01\x09\x04\x00\x1100Dis donc. Savais-tu que ma petite\nTironne était une chanteuse de talent?\nOn dirait pas, mais c'est pourtant vrai!\n\n\x0E\x01\x09\x04\x00\x700Il n'y a pas si longtemps, elle chantait\nsouvent pour divertir les clients.\n\n\n\x0E\x01\x09\x04\x08\x00Et puis le musicien qui l'accompagnait\na démissionné, alors elle a dû arrêter.\n\n\nTu voudrais pas nous jouer un petit air\nsur ton instrument pour accompagner\nma fille?\n\n[1]Avec plaisir![2-]Pas\nquestion")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf("\x0E\x01\x09\x04\x00\x100EParfait! Je savais que je pouvais\ncompter sur toi!\n\n\n\x0E\x01\x09\x04\x0D\xA00Mais pas de blague, hein! Je veux une\ninterprétation de professionnel, pas\nd'amateur!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf("\x0E\x01\x09\x04\x00\x11Wow. C'est quand même quelque chose!\nÇa ne t'arrive jamais d'apprendre de\ntes erreurs?")
          									}
          								  case 1:
/*<518>*/ 									printf("\x0E\x01\x09\x04\x00\x01Tiens, te revoilà! Qu'est\x2010ce que je vais\nbien pouvoir te faire faire, cette fois?\n\n\n\x0E\x01\x09\x04\x00\x700Oh, oui, c'est vrai que tu as cet\ninstrument bizarre!\n\n\n\x0E\x01\x09\x04\x0B\x1000Parfait! J'ai une idée de boulot\npour toi!\n\n\n\x0E\x01\x09\x04\x00\x700Hmm, mais c'est plutôt un boulot de\nnuit... Tu veux bien revenir à la nuit\ntombée?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf("\x0E\x01\x09\x04\x00\x06Je ne t'ai pas encore trouvé de travail,\nmon garçon! Repasse donc plus tard.\n\n\nÀ moins que t'aies l'intention de\nm'acheter de la soupe de citrouille pour\nfaire monter mon chiffre d'affaire?\n\n[1]Présenté\ncomme ça...[2-]Non merci")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf("\x0E\x01\x09\x04\x0B\x100EExcellent, mon garçon! Tu as terminé\n la récolte des citrouilles.\n\n\n\x0E\x01\x09\x04\x00\x700Mais laisse\x2010moi te dire que tu n'as\ntoujours pas remboursé mon lustre\nde luxe. Tu as encore pas mal de\nchemin à faire, en fait.\n\x0E\x01\x09\x04\x08\x00Je vais réfléchir à ce que je pourrais\nencore te faire faire. Reviens me voir\nplus tard.")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf("Écoute bien ce que Tironne va te dire\net aide\x2010la à récolter les citrouilles.")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf("Mais n'oublie pas! Tu ne peux ramasser\nles citrouilles qu'en journée.\n\n\nOn sait jamais ce qui pourrait arriver\nquand il fait sombre...")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf("Te voilà, mon garçon! Tu tombes bien.\nJ'ai un autre travail pour toi!\n\n\nTu vas nous aider avec la <r<récolte\nde citrouilles>>, et que je t'entende pas\nrouspéter!\n\n[1]D'accord...[2-]Pas\nquestion!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf("\x0E\x01\x09\x04\x08\x704Tu devrais être capable de t'en tirer.\nAs-tu vu le champ de citrouilles dont\nTironne s'occupe, là derrière?\n\nJe voudrais que tu ranges ces\ncitrouilles dans l'abri! Va voir\n<b<Tironne>>, elle va t'expliquer.")
/*<133>*/ 											printf("Mais n'oublie pas! Tu ne peux ramasser\nles citrouilles qu'en journée.\n\n\nOn sait jamais ce qui pourrait arriver\nquand il fait sombre...")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf("\x0E\x01\x09\x04\x00\x11Wow. C'est quand même quelque chose!\nÇa ne t'arrive jamais d'apprendre de\ntes erreurs?")
          										}
          									  case 1:
/*< 20>*/ 										printf("Merveilleux! Tu as pu livrer la soupe\nà temps à Aquilus, le capitaine des\nchevaliers!\n\n\x0E\x01\x09\x04\x0C\x700Je vais donc déduire ta paie de la\nfacture de mon nouveau lustre...\n\n\n\x0E\x01\x09\x04\x0F\x900Tu croyais peut\x2010être que tu allais t'en\nsortir rien qu'avec ce petit service?\n\n\nEh ben, t'avais tort! Ta tâche suivante\nsera la <r<récolte des citrouilles>>, et que je\nne t'entende pas rouspéter!\n\n[1]D'accord...[2-]Pas\nquestion!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf("\x0E\x01\x09\x04\x00\x06Eh bien quoi, qu'est\x2010ce que tu veux?\nJe réfléchis toujours à ce que je\npourrais te faire faire!\n\nUn lustre de ce prix, ça se remplace\npas en claquant des doigts!\n\n\nEt si tu m'achetais de la soupe de\ncitrouille, histoire de faire tourner\nmon bistrot?\n[1]Présenté\ncomme ça...[2-]Non merci")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf("\x0E\x01\x09\x04\x0B\x100EMerveilleux! Tu as pu livrer la soupe\nà Aquilus, le capitaine des chevaliers!\n\n\nJe vais donc déduire ta paie de la\nfacture de mon nouveau lustre...\n\n\n\x0E\x01\x09\x04\x08\x700Mais tu n'as pas encore fini, mon\ngarçon! J'ai encore beaucoup de\ntravail pour toi en réserve.\n\nMais je dois d'abord réfléchir à ce que\nje vais te faire faire en premier.\nRepasse me voir plus tard.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf("\x0E\x01\x09\x04\x00\x01La soupe refroidit en <r<cinq minutes>>!\nGrouille\x2010toi, il faut l'apporter au\ncapitaine!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf("\x0E\x01\x09\x04\x00\x08Qu'est\x2010ce que je t'ai dit? Pas question\nde laisser refroidir la soupe!\n\n\nTu en fais des belles, toi, dis donc.\nTiens, revoilà de la soupe chaude.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf("Mais il va falloir payer!\nTu me dois <r<10 rubis>>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf("\x0E\x01\x09\x04\x00\x0DComment ça, tu n'as pas 10 rubis?\nTu n'es pas un cadeau, toi! Bon.\nJe te laisse la garder, mais c'est\nla dernière fois, compris?")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf("Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf("\x0E\x01\x09\x04\x00\x07Bien voyons! Tu n'as plus de soupe?\n\n\n\n\x0E\x01\x09\x04\x0D\xA00Ne viens pas me dire que tu l'as bue!\nT'es un p'tit comique, toi.\n\n\nBon. Tiens, en revoilà!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf("\x0E\x01\x09\x04\x00\x07Qu'est-ce que tu dis?\nTu n'as plus de soupe?\n\n\n\x0E\x01\x09\x04\x0D\xA00Ne me dis pas que tu l'as bue!\nTrès bien, je vais t'en redonner.")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf("Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf("\x0E\x01\x09\x04\x00\x01Ah, je vois que tu as apporté\nun flacon vide comme je te\nl'ai demandé! Parfait.")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf("C'est très bien.\nVoici la <r<soupe de citrouille>>!\n\n\n\x0E\x01\x09\x04\x00\x700Apporte\x2010la au capitaine des chevaliers.")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf("\x0E\x01\x09\x04\x01\x700J'oubliais, mon garçon... Le capitaine\na horreur de la soupe froide!\n\n\nAlors il faudra pas que tu traînes...\n\n\n\nHmm, à mon avis, il va falloir lui\napporter en <r<moins de cinq minutes>>,\nsinon elle sera froide!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf("Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf("Alors, t'es prêt à me rembourser mon\nlustre de luxe?\n[1]Bien, oui[2-]Je ne\nsais pas")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf("Oh, t'as l'air motivé! Très bien, je suis\nprêt à te faire confiance.\n\n\n\x0E\x01\x09\x04\x00\x700Allez, au travail! Je veux que tu livres\nma soupe au <r<capitaine des chevaliers\nde Célesbourg>>.\n\n\x0E\x01\x09\x04\x08\x700Le capitaine est un habitué. Il est\nincapable de commencer sa journée\ns'il n'a pas un peu de soupe pour\npartir du bon pied!\nQu'est-ce que t'en dis?\nPrêt pour la livraison de soupe?\n[1]Oui, prêt![2-]Attends!")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf("Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf("\x0E\x01\x09\x04\x0D\xA0DHé! Un homme ne revient jamais sur sa\nparole! Tu vas livrer cette soupe au\ncapitaine des chevaliers! Compris?\n[1]Compris![2-]Attends\nun peu.")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf("Non mais, je rêve! Tu manques pas\nde culot, mon garçon! Tu te pointes,\ntu fracasses mon lustre et tu crois\nque tu vas t'en sortir comme ça?")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf("Non mais, c'est pas vrai! Tu te\nrends compte de ce que t'as fait?\n\n\nMon lustre de luxe sur mesure est\nréduit en mille morceaux!\n\n\nTu ne vas pas t'en tirer si facilement!\nJe vais te faire travailler, moi, et tu vas\nme rembourser mon lustre jusqu'au\ndernier rubis!\nAlors? T'es prêt?\n[1]D'accord...[2-]Pas\nquestion!")
          										goto flw_75
          									}
          								}
          							}
          						}
          					}
          				}
          			}
          		  case 1:
/*<559>*/ 			switch (zone_temp_flags[4 /* 0x1 10 */]) {
          			  case 0:
/*<557>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bien le bonjour, toi!\nQue dirais\x2010tu d'un petit remontant?\nJ'ai justement de la <r<soupe de citrouille\n>>sur le feu!\n[1]Juste un peu[2-]Non merci")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bienvenue à la Citrouille perchée,\nle bistrot favori des plus grands\nchevaucheurs célestes!\n\nIl n'existe pas de meilleur potage que\nma <r<soupe de citrouille >>maison!\n\n\nQue dirais\x2010tu d'y goûter un peu,\nhistoire de savoir ce que tu manques?\n[1]Juste un peu[2-]Non merci")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ah, Tironne, Tironne... Un seul mot\nde sa part, et je prendrais soin de\nses citrouilles comme aucun autre\nne saurait le faire!")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf("\x0E\x01\x09\x04\x1A00\x03Ah ça non, pas question! C'est pas\nle rôle des clients de s'occuper\ndes citrouilles!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf("\x0E\x01\x09\x04\x00\x02Ne t'inquiète pas! Je vais travailler\ndeux fois plus vite que cette vieille\ntaupe plus que suspecte...")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf("\x0E\x01\x09\x04\x1A00\x09Oh! Dans ce cas, j'accepte ton offre\navec plaisir!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf("\x0E\x01\x09\x04\x09\x705Il me suffit de voir briller son sourire\npour me sentir pousser des ailes! Je ne\nsens même pas la fatigue! Haha!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf("\x0E\x01\x09\x04\x00\x03Tu t'en es bien sorti. Tu nous as rendu\nbon nombre de services, je dois dire!\n\n\nMaintenant, tu peux profiter de notre\nétablissement en tant que client.\n\n\nEt si ça t'intéresse, tu peux encore nous\ndonner un coup de main... Et tu seras\nrémunéré, il va sans dire!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x03Tu crois que c'est le moment de faire\nune pause? T'aurais pas des choses\nà faire, par hasard?")
          		  case 1:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x00\x03Mais, qu'est\x2010ce que tu fais assis là?\n\n\n\n\x0E\x01\x09\x04\x0D\x700Bah, j'imagine que tout le monde a\nbesoin de se reposer un moment pour\nréfléchir tranquillement de temps\nen temps.\n\x0E\x01\x09\x04\x00\x1000Détends\x2010toi! Prends ton temps!")
          		}
          	}
          }

          void entrypoint_117_11() {
/*<213>*/ 	start()
/*<211>*/ 	switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          	  case 0:
/*<216>*/ 		entrypoint_117_12();
          	  case 1:
/*<208>*/ 		switch (story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */]) {
          		  case 0:
/*<212>*/ 			printf("\x0E\x01\x09\x04\x00\x04J'apportais toujours ma soupe à\n<b<Narisha >>sur la petite île avec un\n<r<arc\x2010en\x2010ciel>>, à l'intérieur du gros nuage.<pling>\n\n\x0E\x01\x09\x04\x00\x700Tu la reconnaîtras tout de suite en la\nvoyant! Bonne chance!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf("\x0E\x01\x09\x04\x0F\x90DQu'est\x2010ce que c'est que cette histoire?\nTu crois que je me serais donné tant de\nmal pour faire ma soupe si c'était pour\nque tu fasses demi\x2010tour?\n\x0E\x01\x09\x04\n\x00Ton robot a rapporté ma soupe\njusqu'ici.\n[1]Désolé![2]J'y retourne")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf("\x0E\x01\x09\x04\x0D\x900Puisque c'est pour Narisha, je vais t'en\nfaire une autre marmite! Mais c'est\nbien parce que c'est pour lui. Hmf.")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf("\x0E\x01\x09\x04\x00\x900Attends\x2010moi ici! Je viens d'être saisi\nd'une irrésistible pulsion de création\nculinaire!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 224, 'param3': 6}
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 548, 'param3': 6}
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf("\x0E\x01\x09\x04\x0B\x1009Et voilà!\n\n\n\n\x0E\x01\x09\x04\x0F\x1100Ça fait des décennies que je popote,\net j'avoue que c'est la meilleure <r<soupe\nde citrouille >>que j'aie jamais faite!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf("\x0E\x01\x12\x04\x00\x01Maître, je vais immédiatement\nconvoquer le robot.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 337, 'param3': 6}
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 341, 'param3': 6}
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf("\x0E\x01\x12\x04\x00dMam'selle Fayyy! Me voilààà!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf("\x0E\x01\x12\x04\x00dEh ben, voilà une cargaison qui pèse\nson poids!\n\n\nMais je ferais n'importe quoi pour\nFay... Bon, je t'attends dehors!\nOn part quand tu veux!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x04J'apportais toujours ma soupe à\n<b<Narisha >>sur la petite île avec un\n<r<arc\x2010en\x2010ciel>>, à l'intérieur du gros nuage.<pling>\n\n\x0E\x01\x09\x04\x00\x700Tu la reconnaîtras tout de suite en la\nvoyant! Bonne chance!")
/*<210>*/ 					story_flags[365 /* us: 805A9B03 0x08, jp: 805ACD83 0x08 */] = true;
/*<385>*/ 					story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */] = true;
/*<467>*/ 					story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = false;
/*<232>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          				  case 1:
          					goto flw_462
          				}
          			  case 1:
/*<521>*/ 				switch (scene_flags[33 /* 0x5 02 */]) {
          				  case 0:
/*<203>*/ 					printf("\x0E\x01\x09\x04\x00\x01Qu'est\x2010ce qu'il t'arrive? Je sais\nreconnaître le visage d'un jeune\nhomme préoccupé, et toi, mon\ngarçon, tu as l'air perturbé!\n[1]En fait...[2-]Pas\nvraiment")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf("\x0E\x01\x09\x04\x0D\xD04<b<Narisha>>\x0E\x01\x06\x02\xFBCD...\x0E\x01\x06\x02Í?\n\n\n\n\x0E\x01\x09\x04\x00\x700Je connais bien Narisha, en effet. Mais\nje ne savais pas qu'il avait des ennuis!\n\n\n\x0E\x01\x09\x04\x08\x700Tous les ans, je lui apporte une\ngrosse marmite débordante de\n<r<soupe de citrouille>>!\n\nMais avec ce gros nuage, je ne peux\nplus me rendre là\x2010bas. Narisha n'a\ndonc pas eu de soupe cette année...\nJ'en suis fort peiné.")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf("\x0E\x01\x09\x04\x0D\xD08Qu'est-ce que tu dis? Tu voudrais\napporter ma soupe à <b<Narisha>>?\n\n\n\x0E\x01\x09\x04\x00\x700\x0E\x01\x06\x02\xFDCD...\x0E\x01\x06\x02Í Je ne vois pas comment tu vas\nrégler le problème du nuage, mais\nbon...\n\n\x0E\x01\x09\x04\x0B\x1000Puisque c'est à Narisha que tu vas\nessayer d'apporter ma soupe, je vais\nfaire la meilleure chaudronnée de ma\ncarrière!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf("\x0E\x01\x09\x04\x00\x05Oh, ce n'était donc rien! Tant mieux.\nAlors, si tout va bien, prends un siège\net détends\x2010toi un peu!")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf("\x0E\x01\x09\x04\x00\x04Très bien, si tu le dis, je vais pas te\ncontredire! Que dirais\x2010tu de travailler\nun peu pour éponger ta dette?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf("\x0E\x01\x09\x04\x00\x01Bienvenue à la Citrouille perchée,\nle bistrot préféré des plus grands\nchevaucheurs du ciel!\n\nTu ne trouveras ma délicieuse soupe de\ncitrouille maison nulle part ailleurs!\n\n\nMais qu'est\x2010ce que c'est que ce visage\nsombre? Tu m'as pas l'air dans ton\nassiette, fiston...\n[1]En vérité...[2-]Vraiment?")
          					goto flw_204
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_46() {
/*<399>*/ 	start()
/*<403>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<404>*/ 		printf("Ça y est, tout est perdu.\n\n\n\nJ'aurais pas dû ambitionner...")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf("<b<Picoro >>est drôlement doué quand il\ns'agit de faire des réparations.\n\n\nJe suis sûr qu'il est tout à fait capable\nde réparer le moulin de Célesbourg.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf("On ne voit plus <b<Caïk >>au <b<bazar\n>>ces temps\x2010ci...\n\n\nC'est dommage, c'était un vrai bon\ndiseur de bonne aventure!")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf("<b<Tironne >>a du pain sur la planche avec\ntoutes les tâches dont elle s'occupe.\n\n\nTu connaîtrais pas quelqu'un qui soit\nun expert pour creuser des trous dans\nla terre?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf("As\x2010tu déjà observé la collection de\nplantes d'<b<Arfan>>?\n\n\nJe me demande s'il en a trouvé de\nnouvelles récemment.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf("Tu n'aurais pas des nouvelles de <b<Dodon>>,\npar hasard?\n\n\nJe sais qu'il a travaillé très fort\npour construire un endroit dédié\nau divertissement...")
          						  case 1:
/*<416>*/ 							printf("Il y a des gens qui s'amusent à plonger\nen chute libre au\x2010dessus de la Citrouille\nperchée...\n\nEt on raconte que de jolies créatures\ncolorées t'accompagnent pendant\nta chute.\n\nJe me demande si quelque chose de bien\nse produit quand tu planes avec elles.")
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_117_29() {
/*<476>*/ 	start()
/*<486>*/ 	set_camera(31, 0)
/*<477>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 484, 'param3': 32}
/*<484>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 485, 'param3': 15}
/*<485>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 26, 'next': 478, 'param3': 14}
/*<478>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': -1, 'next': 483, 'param3': 16}
/*<483>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<482>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Je pense que tu ferais mieux d'aller\nparler à mon père sans tarder!\n\n\n\x0E\x01\x09\x04\x1A1A\x800S'il s'énerve, ça sera pas beau à voir!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf("\x0E\x01\x09\x04\x1A00\x01Bonjour à toi!\nBienvenue à <r<la Citrouille perchée>>.\nNotre soupe de citrouille est réputée\naux quatre coins du ciel!\n\x0E\x01\x09\x04\x1A1A\x800Il n'y a pas grand\x2010chose à faire ici,\nmais tu peux te détendre et t'amuser!")
          		goto flw_480
          	}
          }

          void entrypoint_117_12() {
/*<215>*/ 	start()
          	goto flw_520
          }

          void entrypoint_117_47() {
/*<405>*/ 	start()
/*<407>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<408>*/ 		printf("Qu'est-ce qui s'est passé?")
          	  case 1:
/*<406>*/ 		printf("Je viens toujours ici, le soir.")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Fais-moi pas peur comme ça! J'ai failli\nfaire une syncope!\n\n\n\x0E\x01\x09\x04\n\x700Qu'est\x2010ce que tu veux, encore?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf("\x0E\x01\x09\x04\x00\x04C'est bien d'avoir un grand lustre\ncomme ça, mais toute cette lumière\nest un peu forte pour mes yeux!")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf("\x0E\x01\x09\x04\x0B\xC04Quoi, tu as déplacé la pierre tombale?\n\n\n\n\x0E\x01\x09\x04\n\xF00As\x2010tu aperçu l'effroyable créature?\nÉtait\x2010elle terrifiante?\n\n\nN'essaie pas de jouer au héros! Je suis\nsûr que ton sang s'est glacé à sa vue!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf("\x0E\x01\x09\x04\x00\x01Comment? Y a quelque chose que t'as\npas compris?\n[1]La nuit?[2]Au cimetière?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Oui. Pour attendre que la <r<nuit>> tombe,\nretourne à Célesbourg et <g<dors dans un\nlit>>, n'importe lequel.\n\nLa nuit, Célesbourg montre un tout\nautre visage.\n\n\n\x0E\x01\x09\x04\n\xF00Mais, moi, si j'étais toi, je n'irais pas.\nS'il t'arrive des pépins, tu pourras pas\ndire que je t'avais pas averti.")
          						  case 1:
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\x704Eh bien, figure\x2010toi qu'au cimetière,\nlorsque la <r<pierre tombale près de\nl'arbre subit un choc>>, elle s'illumine!\n\nIl suffit de <r<pousser cette pierre>> pour\nque la porte de la remise s'ouvre...\n\n\nC'est là qu'il se trouve... le démon!\nCaché au fond de la remise!\n\n\n\x0E\x01\x09\x04\n\xF00Je suis très sérieux! Tu ne devrais\npas y aller! C'est trop dangereux!\nSi tu y vas, tu courras à ta perte!\nEt je ne pourrai rien pour toi.")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf("\x0E\x01\x09\x04\x0B\x704Il y a un monstre qui vit à Célesbourg!\nIl faut me croire! Me crois-tu, hein?\nMe crois-tu?\n\nNon, ce n'est pas un monstre...\nC'est un démon! Aucun de ceux qui\nl'ont vu n'est encore là pour en parler!\n\n\x0E\x01\x09\x04\x0B\x700Quoi? Euh, oui, bon, sauf moi,\nen effet...\n[1]Raconte\x2010moi[2-]Laisse\ntomber")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf("\x0E\x01\x09\x04\n\xF00C'est vrai, je suis toujours là pour en\nparler, mais j'étais vraiment à deux\ndoigts d'y rester! Je ne dois mon salut\nqu'à ma parfaite condition physique.\n\x0E\x01\x09\x04\x0B\x700N'importe qui d'autre y aurait laissé\nsa peau, je t'en passe un papier!")
          							flw_66:
/*< 66>*/ 							printf("\x0E\x01\x09\x04\x0B\x700Ils auront beau dire ce qu'ils veulent.\nJe sais ce que j'ai vu, et personne\npourra me convaincre du contraire!\n\nJ'étais en train de marcher près du\ngrand arbre, dans le cimetière, <r<en\npleine nuit>>...\n\nJe l'ai vu <r<heurter la pierre tombale\nprès de l'arbre>>, et elle s'est illuminée!\n\n\nEnsuite, il a poussé <r<cette pierre >>et la\nporte de la cabane s'est ouverte toute\nseule!\n\nAlors il est entré et, chose étrange, il\na pris le temps de fermer la porte\nderrière lui comme un homme\ncivilisé. \x0E\x01\x09\x04\x0B\x700Quel cauchemar!\nQuoi qu'il arrive, ne t'aventure jamais\ndans le <r<cimetière la nuit>>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf("Ne me coupe pas la parole quand je\nraconte mon histoire!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf("\x0E\x01\x09\x04\x00\x01J'espère que tu me crois, au moins?\n[1]Je crois\nquoi?[2]Oui![3-]Pas une\nseconde!")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf("\x0E\x01\x09\x04\x0B\x703Il y a un démon maléfique à\nCélesbourg, faut me croire!\n\n\nJ'étais à deux doigts de me faire\ndévorer sans pitié par cette créature!\n\n\n\x0E\x01\x09\x04\x0B\x700Il ne ferait qu'une bouchée d'un\napprenti chevalier comme toi,\nmon p'tit gars!")
          				  case 1:
/*< 60>*/ 					printf("\x0E\x01\x09\x04\x0B\xE04Bien, oui! Bien, oui!\nTu es vraiment un bon garçon!")
          				  case 2:
/*< 61>*/ 					printf("\x0E\x01\x09\x04\n\xF03Non, mais.<pause14>.<pause14>.<pause14>\nC'est quoi leur problème, aux jeunes,\nde nos jours?")
          				}
          			}
          		  case 1:
          			goto flw_56
          		}
          	  case 1:
          		goto flw_56
          	}
          }

          void entrypoint_117_13() {
/*<285>*/ 	start()
/*<173>*/ 	printf("\x0E\x01\x09\x04\x00\x08Très bien, dans ce cas!\nMerci <pause0A>beaucoup <pause0A>monsieur <pause0A>Taupe!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf("\x0E\x01\x09\x04\x00\x01J'ai entendu Tironne chanter... Je\nn'en suis pas encore revenu! Je crois\nbien que je viens de tomber amoureux\nd'elle pour la douzième fois!")
          	  case 1:
/*<422>*/ 		printf("\x0E\x01\x09\x04\x00\x01Tu savais que <b<Tironne>> chantait parfois\npour les clients du bistrot?\n\n\n\x0E\x01\x09\x04\x09\x700Si seulement elle avait un musicien\npour l'accompagner, nous pourrions\nentendre sa voix mélodieuse!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf("\x0E\x01\x09\x04\x00\x04J'en étais sûr! La voix de Tironne est\nà son image, belle à couper le souffle!\n\n\nRien à voir avec la voix de casserole\nde ma femme...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf("\x0E\x01\x09\x04\x0B\x704Fais-moi pas peur comme ça! J'ai failli\nfaire une syncope!\n\n\n\x0E\x01\x09\x04\n\x700Qu'est\x2010ce que tu veux, encore?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf("\x0E\x01\x09\x04\x00\x04Tironne chante comme un ange.<pause0A>.<pause0A>.<pause0A>\nMais le musicien qui l'accompagnait\nest parti, et elle ne peut plus nous\ncharmer de ses douces mélopées.\nComme j'aimerais l'entendre chanter\nencore! Sa voix est inoubliable, d'une\nchaleur indescriptible!")
          			  case 1:
/*< 40>*/ 				printf("\x0E\x01\x09\x04\x00\x04Tu devrais pas te promener la nuit,\ncomme ça! Si tu veux me parler,\nreviens me voir quand il fera jour!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf("\x0E\x01\x09\x04\x00\x05C'est-à-dire que... Je... En tout cas...\nBon, j'imagine qu'il n'y aurait pas de\nmal à essayer.")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf("\x0E\x01\x09\x04\x00\x09Alors, qu'est\x2010ce que vous dites de ça?")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf("\x0E\x01\x09\x04\x00\x12\x0E\x01\x08\x02\x2CDNon mais ça va pas?!\n\n\n\n\x0E\x01\x08\x02ÍViens ici tout de suite!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf("\x0E\x01\x09\x04\x00\x09Wow! Avez-vous vu ça?\nC'est absolument extraordinaire!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf("Minute!\n\n\n\nTu ne crois pas sérieusement que je\nvais te laisser détruire mon lustre de\nluxe et disparaître dans la nature?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf("\x0E\x01\x09\x04\x00\x06Hohoho... Vous trouvez?\nPourtant, laissez\x2010moi vous dire\nque c'était rien, ça, ma p'tite dame!\n\nChez nous, le premier venu est capable\nd'en faire du pareil! C'est pas la mer\nà boire.")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf("Minute!\n\n\n\nTu ne crois pas sérieusement que je\nvais te laisser détruire mon lustre de\nluxe et disparaître dans la nature?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf("\x0E\x01\x09\x04\x00\nVous voudriez pas recommencer, hm?\nOh! S'il vous plaaaît! Encore une fois!\nOuiii! S'il vous plaaaît?")
          }

          void entrypoint_117_01() {
          	start()
/*< 82>*/ 	switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          	  case 0:
/*< 93>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*< 94>*/ 			switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          			  case 0:
/*< 95>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*< 96>*/ 					switch (story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */]) {
          					  case 0:
/*< 98>*/ 						switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          						  case 0:
/*<506>*/ 							switch (temp_flags[17 /* 0x3 02 */]) {
          							  case 0:
/*<100>*/ 								printf("\x0E\x01\x09\x04\x13\x808Le plus incroyable, c'est qu'il abat\nle travail d'une centaine d'ouvriers à\nlui tout seul! Je lui en suis tellement\nreconnaissante...")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf("\x0E\x01\x09\x04\x13\x808Depuis l'arrivée de monsieur Taupe,\nla culture des citrouilles est devenue\nune partie de plaisir! Notre production\nde citrouilles va décoller!")
/*<511>*/ 									zone_temp_flags[7 /* 0x1 80 */] = true;
          									goto flw_388
          								}
          							}
          						  case 1:
/*<607>*/ 							switch (story_flags[471 /* us: 805A9B0E 0x08, jp: 805ACD8E 0x08 */]) {
          							  case 0:
/*<608>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 31}
          							  case 1:
/*<598>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 234, 'param3': 31}
/*<234>*/ 								printf("\x0E\x01\x09\x04\x0B\xE0FTu n'as pas l'intention d'aller le voir\nbientôt, ton ami laboureur, par\nhasard?")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf("La <pling><r<fonction détection >>n'est pas\nactuellement configurée pour localiser\nl'individu que recherche cette jeune\npersonne.\nDois\x2010je régler la <pling><r<détection >>pour réagir\nà un <r<individu capable de labourer un\nchamp>>?\n[1]Oui, merci![2-]Pas\nmaintenant")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître.\n\n\n\nLa <pling><r<fonction détection >>est à présent\nconfigurée pour réagir à l'individu\nrecherché par cette jeune fille.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf("Très bien, \x0E\x01\x12\x04\x00\x05Maître.\nLa configuration de la <pling>fonction\ndétection est annulée.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf("\x0E\x01\x09\x04\x00\x01Salut! Merci encore pour ton aide de\nl'autre jour, avec les citrouilles.\n\n\nNous sommes presque prêts à en\nplanter de nouvelles!\n\n\n\x0E\x01\x09\x04\x01\x100<pause1E>Le problème, c'est qu'il faut d'abord\nlabourer la terre...\n\x0E\x01\x09\x04\x0B\xE00Et toute seule, c'est pas facile...\n\n\x0E\x01\x09\x04\x07\x700Mais où pourrais\x2010je bien trouver\nquelqu'un qui sache labourer?\n[1]Je sais![2-]Aucune\nidée...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf("\x0E\x01\x09\x04\x07\x809C'est vrai? Il faut vraiment que je\nfasse venir cette personne ici pour\nm'aider.\n\n\x0E\x01\x09\x04\x01\x700Si jamais tu croises cette personne à\nnouveau, envoie-la-moi! Veux-tu?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf("La probabilité que cette quête ait un\nrapport avec l'obtention de <y<cristaux\nde gratitude >>est de 90 %.\n\nJe peux ajouter l'individu capable de\nlabourer le champ de cette jeune fille\naux cibles à <pling><r<détecter>>.\n\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nVoulez\x2010vous que je règle la détection\npour réagir à un <r<individu capable de\nlabourer un champ>>?\n[1]S'il te plaît[2-]Pas encore")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nJ'ai enregistré l'<r<individu capable de\nlabourer un champ>>.")
/*<565>*/ 								story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<566>*/ 								story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<567>*/ 								story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<568>*/ 								story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<569>*/ 								story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<570>*/ 								story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<574>*/ 								open_dowsing_wheel(15)
          								flw_572:
/*<572>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 571, 'param3': 36}
/*<571>*/ 								story_flags[470 /* us: 805A9B0E 0x04, jp: 805ACD8E 0x04 */] = true;
/*<597>*/ 								{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 573, 'param3': 16}
/*<573>*/ 								printf("\x0E\x01\x09\x04\x01\x70FJ'espère que tu ne dis pas ça\njuste pour me rassurer...\n\n\n\x0E\x01\x09\x04\x07\x700Bon, un peu d'optimisme n'a jamais tué\npersonne, de toute façon. J'attendrai\npatiemment ton ami ici.")
          							  case 1:
/*<596>*/ 								printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\nSi vous souhaitez régler la détection,\nparlez à nouveau à cette jeune fille.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf("\x0E\x01\x09\x04\x01\x1611Non, mais!! Ne viens pas me dire que ça\nne te dérange pas de savoir qu'une jolie\nfille comme moi est obligée de\ns'éreinter à labourer son champ!\nQuand je pense que je te prenais\npour un noble chevalier... Hmf!")
          						}
          					}
          				  case 1:
          					flw_387:
/*<387>*/ 					entrypoint_117_25();
          				}
          			  case 1:
          				goto flw_387
          			}
          		  case 1:
          			goto flw_387
          		}
          	  case 1:
/*< 84>*/ 		switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          		  case 0:
          			goto flw_34
          		  case 1:
/*<540>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*< 85>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, si c'est pas le chevalier qui a\ndétruit notre lustre de luxe! Tu essaies\ntoujours de le rembourser?\n\n\x0E\x01\x09\x04\x01\x700Ah tiens, ça me revient!<pause1E> Papa disait\njustement qu'il avait du travail pour\ntoi. Ça tombe bien!\n\n\x0E\x01\x09\x04\x07\x700Tu devrais aller le voir, il te donnera\nsûrement quelque chose à faire!")
          			  case 1:
/*<541>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, mais c'est le chevalier qui\na détruit notre lustre de luxe! Tu\nessaies toujours de le rembourser?\n\n\x0E\x01\x09\x04\x01\x700Ça me fait penser qu'il sera bientôt\ntemps de récolter les citrouilles...<pause1E>\n\n\n\x0E\x01\x09\x04\x07\x700Je me demande bien comment je vais\nfaire pour soulever toutes ces grosses\ncitrouilles... Elles sont si lourdes!")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf("\x0E\x01\x09\x04\x00\x0CWouhou! C'est parti!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 361, 'param3': 6}
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf("\x0E\x01\x09\x04\x13\x809Tu as réussi, j'en étais sûre!\n\n\n\n\x0E\x01\x09\x04\x01\x700Très bien, je te laisse tranquille avec\nmes citrouilles maintenant!\n\n\n\x0E\x01\x09\x04\x19\x800Merci <pause0F>de <pause0F>tout <pause0F>c\x153ur<pause0F>!")
          	  case 1:
/*< 33>*/ 		printf("\x0E\x01\x09\x04\x01\x1611Oh non! Il faudrait que tu fasses un\npeu plus attention, quand même!\n\n\n\x0E\x01\x09\x04\x07\x700Viens par ici si tu veux réessayer.")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 368, 'param3': 6}
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x01\x1611Oh non! Il faudrait que tu fasses un\npeu plus attention, quand même!\n\n\n\x0E\x01\x09\x04\x07\x700Viens par ici si tu veux réessayer.")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf("\x0E\x01\x09\x04\x10\x1604Regarde ce que tu as fait!\nJe n'aurais jamais dû t'en parler! Mais\nje voulais seulement m'assurer que tu\nn'y toucherais pas!\n\x0E\x01\x09\x04\x1A\x1600Mon père va t'en faire voir de toutes\nles couleurs! Mais... Ce n'est pas ma\nfaute. Rappelle-toi de ça!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, bonjour!\n\n\n\nMon père m'a raconté que tu devais\nrembourser le lustre que tu as brisé.\n\n\n\x0E\x01\x09\x04\x1A\x800Ça va prendre du temps, mais tu vas\ny arriver!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x1A\x1000Quoi? Il est arrivé quelque chose\nà Narisha?\n\n\nÀ bien y penser, il me semble que\nmon père lui préparait de la soupe\nde citrouille, à une époque. Il\npourrait peut\x2010être te conseiller...")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf("\x0E\x01\x09\x04\x10\x1604Regarde ce que tu as fait!\nJe n'aurais jamais dû t'en parler! Mais\nje voulais seulement m'assurer que tu\nn'y toucherais pas!\n\x0E\x01\x09\x04\x1A\x1600Mon père va t'en faire voir de toutes\nles couleurs! Mais... Ce n'est pas ma\nfaute. Rappelle-toi de ça!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf("\x0E\x01\x09\x04\x00\x01Ah, tiens, bonjour! Je devine à ton\nélégant costume que tu es un chevalier\nde Célesbourg...\n\n\x0E\x01\x09\x04\x1A\x800Viens donc t'asseoir un instant!\n\n\n\n\x0E\x01\x09\x04\x0D\x700As\x2010tu vu les rubis placés sur le lustre?\n\n\n\n\x0E\x01\x09\x04\x10\x00Ne va pas te mettre dans la tête \nd'aller les récupérer.\n\n\nCe serait sûrement possible de les\nfaire tomber en faisant vaciller le\nlustre avec un choc bien placé...\n\n\x0E\x01\x09\x04\x1A\x1600Mais \x0E\x01\x06\x02\xFCCDn'y pense même pas\x0E\x01\x06\x02Í!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, bonjour!\n\n\n\nBienvenue à la Citrouille perchée!\nMets\x2010toi à l'aise!\n<pause1E>Tout va bien? Tu as l'air nerveux.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 374, 'param3': 6}
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf("Voici le vieux Mogma!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Hmm, je suis déçue, je pensais que ton\ninstrument produirait un bien plus\nbeau son... Il est si joli!\n\n\x0E\x01\x09\x04\x01\x1600Et nos clients n'ont pas eu l'air\nà apprécier, eux non plus.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf("\x0E\x01\x09\x04\x17\x1411Bon... Et bien... Tu as réussi à jouer\njusqu'au bout, c'est vrai.\n\n\n\x0E\x01\x09\x04\x01\x1600Mais pour être honnête, je m'attendais\nà mieux.")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf("\x0E\x01\x09\x04\x16\x1309Eh bien! Tu es un excellent musicien!\nJe t'ai sous\x2010estimé, on dirait.\n\n\n\x0E\x01\x09\x04\x07\x700J'espère avoir l'occasion de chanter\nà nouveau avec toi un jour!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf("\x0E\x01\x09\x04\x15\xD0ATu as été exceptionnel!\nTa musique était plus belle encore que\nma ravissante voix!\n\n\x0E\x01\x09\x04\x07\x800Je suis officiellement ton admiratrice\ninconditionnelle! Je ne rêve plus que\nde t'entendre jouer encore.")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 381, 'param3': 6}
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf("Mes hommages à Fay,\nma princesse azur!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf("\x0E\x01\x09\x04\n\x90DMais qu'est\x2010ce qui t'a pris? C'était\ntellement affreux que même la voix\npure de ma fille n'a pas pu sauver\nle spectacle! \n\x0E\x01\x09\x04\x0D\x00Écoute\x2010moi bien, mon garçon. Ce n'est\npas avec ce genre de prestation que\nj'vais te payer, tu peux me croire!")
          		  case 1:
/*<600>*/ 			printf("\x0E\x01\x09\x04\x00\x10Hmm... Tu pourrais pas essayer de\nte forcer un peu plus? Je peux pas te\npayer pour une prestation comme\ncelle\x2010là!")
          		  case 2:
/*<333>*/ 			printf("\x0E\x01\x09\x04\x00\x0EC'était pas mal. Essaie de jouer encore\nun peu mieux la prochaine fois, je sens\nque tu pourrais bien impressionner\nma fille.\n\x0E\x01\x09\x04\x0E\x700Voilà ton cachet : <r<20 rubis>>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CImpressionnant, Link!\nC'était fantastique!\n\x0E\x01\x09\x04\x0C\x700Tiens, tu as bien mérité <r<50 rubis>>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf("\x0E\x01\x09\x04\x0F\xA0DCiel! Mais qu'est\x2010ce qui te prend?\nTu appelles ça de la musique?\n\n\n\x0E\x01\x09\x04\n\x900Ne me regarde pas comme ça! Si tu\npenses qu'on est quittes, tu te trompes.\nTon interprétation était épouvantable! \nIl va falloir que tu te reprennes.")
          		  case 1:
/*<601>*/ 			printf("\x0E\x01\x09\x04\x00\x10Mouais, c'était pas sensationnel comme\nprestation. Je peux pas dire que je suis\nsatisfait, mais comme c'était ta\npremière fois, on va dire que c'est bon.")
          			flw_258:
/*<258>*/ 			printf("\x0E\x01\x09\x04\x0B\x700Je crois que tu en as suffisamment\nfait pour réparer ta gaffe! Bravo!\n\n\n\x0E\x01\x09\x04\x0E\x1100Il est temps que je m'achète un\nnouveau lustre!\n\n\n\x0E\x01\x09\x04\x0D\x700Et comme tu as vraiment dépassé mes\nattentes, tu mérites une récompense.\nTiens, c'est pour toi!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf("\x0E\x01\x09\x04\x01\x700N'hésite pas à passer nous voir.\nEn tant que client, cette fois!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf("\x0E\x01\x09\x04\x00\x0EPas si mal, pas si mal!\nDisons que ça fait l'affaire.")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf("\x0E\x01\x09\x04\x0B\x100CC'était absolument... exaltant!\nJe crois même avoir versé une larme!\nJe ne me serais jamais douté que tu\npouvais jouer comme ça!")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf("\x0E\x01\x09\x04\x03\x80COh non! Mais quelle mouche t'a\npiqué?\n\n\n\x0E\x01\x09\x04\x00\x100Tu t'es mis dans de beaux draps...")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf("\x0E\x01\x09\x04\x00\x01Hé, Link!\nSi t'as trop d'insectes et que tu sais\nplus quoi en faire, donne\x2010les-moi!\n\n\x0E\x01\x09\x04\x12\x00Mais pas ici. Il y a beaucoup trop de\nmonde. Tu ferais mieux de me les\napporter la nuit dans ma chambre,\nà l'école.")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf("\x0E\x01\x09\x04\x12\x01Passer dans les trous des rochers te\npermet de te déplacer beaucoup\nplus vite dans le ciel!\n\n\x0E\x01\x09\x04\x03\x104Par contre, si tu fonces dans les\nrochers, t'obtiendras l'effet inverse!\nHéhéhé...")
          				  case 1:
/*<580>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link.\nJ'ai quelque chose à te dire...\n\n\nT'as déjà remarqué les <r<rochers avec\nun trou à l'intérieur>>, en volant?\n\n\nLes trous sont dotés d'un pouvoir\nmystérieux, et si tu passes dedans,\nt'accélères <r<pendant un instant>>!\n\n\x0E\x01\x09\x04\x12\x00Les chevaucheurs expérimentés\nutilisent souvent cette technique pour\nse déplacer plus vite.")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\n\n\n\n\x0E\x01\x09\x04\x12\x00Je pensais pas te croiser par ici! Tu te\ndemandes sûrement ce que je fais là!\n[1]Oui[2]En fait, non")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf("\x0E\x01\x09\x04\x03\x104J'ai déjà dû te le dire, mais j'adore\nles insectes.\n\n\nC'est pour ça que je suis venu ici, je\ncrois pouvoir en trouver quelques\x2010uns.\n\n\n\x0E\x01\x09\x04\x04\x100Si t'as un filet, tu peux\nessayer d'en attraper, toi aussi, c'est\nintéressant.\n\nHéhéhé ! Si t'en as pas, tu peux\ntoujours en acheter un chez Beedle.\n\n\n\x0E\x01\x09\x04\x12\x100Il est sûrement en train de faire sa\ntournée du côté de Célesbourg.")
          				  case 1:
/*<447>*/ 					printf("\x0E\x01\x09\x04\x04\x805Comment ça, non?\n\n\n\n\x0E\x01\x09\x04\x04\x100Tant pis pour toi. Je le savais que tu\nn'étais pas un entomologiste comme\nmoi!")
          				}
          			}
          		}
          	}
          }

