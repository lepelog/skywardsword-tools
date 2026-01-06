          void entrypoint_117_40() {
/*< 38>*/ 	start()
/*<348>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<350>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<351>*/ 			printf(/* textboxtype: 1, unk: 0, line: 109 */ "<0x10009:0x00111153>Aaaaaah, mais qu'est‐ce que t'as fait?\nTu vas en entendre parler, mon gars!")
          		  case 1:
          			flw_493:
/*<493>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<614>*/ 				switch (scene_flags[69 /* 0x9 20 */]) {
          				  case 0:
/*<613>*/ 					switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          					  case 0:
/*<616>*/ 						printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10009:0x00000001>J'ai entendu dire qu'on te devait\nce nouveau lustre.\n\n\n<0x10009:0x00000300>Tu n'essaierais pas de t'attirer les\nfaveurs de Tironne, par hasard?")
          					  case 1:
          						flw_617:
/*<617>*/ 						switch (scene_flags[5 /* 0x1 20 */]) {
          						  case 0:
/*<494>*/ 							printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x00000001>Alors toutes ces histoires de démons\nn'étaient que des superstitions,\nfinalement...\n\n<0x10009:0x00000300>Ce vieux fou cherchait seulement à se\nrendre intéressant!")
          						  case 1:
          							flw_41:
/*< 41>*/ 							printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000001>Écoute donc ça!\n\n\n\nTu vois le vieil homme assis là?\nIl prétend qu'il a vu un démon...\n\n\n<0x10009:0x000a0300>C'est pas en racontant des histoires\ncomme ça qu'il va gagner le cœur\nde Tironne!")
          						}
          					}
          				  case 1:
/*<615>*/ 					scene_flags[21 'The Sky'][69 /* 0x9 20 */] = true;
          					goto flw_617
          				}
          			  case 1:
/*< 71>*/ 				switch (scene_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*< 72>*/ 					printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00111104>Tu y crois, toi, aux histoires de démons\net autres superstitions du genre?\n\n\n<0x10009:0x000a0300>Mais dis donc, toi! Serais-tu en train\nd'essayer de séduire Tironne aussi,\npar hasard?!")
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
/*<176>*/ 	printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00070803>Quelle bonne idée tu as eue de me\nprésenter ce bon monsieur Taupe!\nComme il est brave, et utile!\n\nEt j'ai tellement de choses à lui faire\nfaire par ici...\n<0x10009:0x00130800>Merci <pause 5>de <pause 5>tout <pause 5>cœur <pause 5>!")
/*<166>*/ 	story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */] = true;
/*<468>*/ 	story_flags[366 /* us: 805A9B03 0x10, jp: 805ACD83 0x10 */] = true;
/*<505>*/ 	temp_flags[17 /* 0x3 02 */] = true;
/*<386>*/ 	give_gratitude_crystals();
          }

          void entrypoint_117_41() {
/*<107>*/ 	start()
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x00000008>Héhéhé! Recule‐toi, p'tit gars!\nLaisse faire le pro!")
          }

          void entrypoint_117_24() {
/*<307>*/ 	start()
/*<327>*/ 	switch (scene_flags[22 /* 0x3 40 */]) {
          	  case 0:
/*<328>*/ 		printf(/* textboxtype: 1, unk: 1, line: 179 */ "<0x10009:0x00000004>Alors, qu'est‐ce que tu veux faire?\n[1-]Jouer de\nla lyre[2-]Flacon de\nsoupe[3]Rien")
          		flw_312:
/*<312>*/ 		switch (choice(3)) {
          		  case 0:
/*<542>*/ 			switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          			  case 0:
/*<324>*/ 				printf(/* textboxtype: 1, unk: 0, line: 177 */ "<0x10009:0x000e1000>Très bien! Dans ce cas, va faire un\npetit numéro avec ma belle Tironne.\nÇa va lui faire plaisir!")
/*<325>*/ 				entrypoint_117_32();
          			  case 1:
/*<543>*/ 				printf(/* textboxtype: 1, unk: 0, line: 178 */ "<0x10009:0x000c0700>Désolé, Tironne ne chante que la nuit!\n\n\n\nReviens ce soir!")
          			}
          		  case 1:
/*<315>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 316, 'param3': 12}
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>Que ça me fait plaisir! Un jeune qui a\nle goût assez raffiné pour apprécier\nma soupe!\n\nSi tu veux en emporter une fiole,\nc'est <color red<10 rubis>coloroff>.\n[1-]J'achète![2]Non merci")
/*<317>*/ 			switch (choice(2)) {
          			  case 0:
/*<318>*/ 				switch (has_rupees(10)) {
          				  case 0:
/*<320>*/ 					switch (adventure_pouch_has(1 0x0001)) {
          					  case 0:
/*<535>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 322, 'param3': 42}
/*<322>*/ 						give_item(195 0xC3);
/*<550>*/ 						rupees += -10;
/*<552>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "Ma soupe est bien meilleure quand on\nla mange chaude! Mais elle refroidit en\nseulement cinq minutes.")
          					  case 1:
/*<321>*/ 						printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>Tu n'as pas de flacon vide?\n\n\n\nSi tu veux goûter ma soupe, il va t'en\nfalloir un. Va chercher un flacon vide\net tu pourras te régaler!")
          					}
          				  case 1:
/*<319>*/ 					printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x000c0700>On dirait bien que t'es cassé...\nReviens me voir plus tard.")
          				}
          			  case 1:
/*<323>*/ 				printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x000d0a00>Eh bien, décide‐toi, mon garçon!")
          			}
          		  case 2:
/*<313>*/ 			printf(/* textboxtype: 1, unk: 0, line: 175 */ "<0x10009:0x00081000>Je vois... Eh bien, tu peux t'asseoir si\ntu veux, et te détendre un peu.\n\n\n<0x10009:0x00000700>Oh, et n'oublie pas de passer dire\nbonjour à Tironne de temps en temps!")
          		}
          	  case 1:
/*<309>*/ 		printf(/* textboxtype: 1, unk: 0, line: 172 */ "<0x10009:0x00000001>Salut, <heroname>!\nQue penses‐tu de mon nouveau lustre?\n\n\n<0x10009:0x000b1100>Laisse‐moi te dire qu'il m'a coûté une\nsomme rondelette!")
/*<326>*/ 		scene_flags[21 'The Sky'][22 /* 0x3 40 */] = true;
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x000d1006>...\nTu trouves que je suis allé un peu loin?\n\n\n<0x10009:0x00080009>Garde tes opinions pour toi-même!\nC'est grâce à toi que j'ai pu m'offrir\nun lustre aussi sensationnel!\n\n<0x10009:0x000c0900>Mais que je te voie pas t'en approcher!")
/*<311>*/ 		printf(/* textboxtype: 1, unk: 1, line: 174 */ "<0x10009:0x00080700>Bon. Qu'est-ce que je peux faire pour\ntoi aujourd'hui? Ça t'intéresserait de\nme rendre des petits services, comme\navant?\n<0x10009:0x000e0700>Je te paierai, bien sûr!\nTu pourrais nous jouer un peu de lyre!\nOu bien prendre une rasade de soupe?\n[1-]Rendre\nservice[2-]Flacon de\nsoupe[3]Pas\nle temps!")
          		goto flw_312
          	}
          }

          void entrypoint_117_42() {
/*<121>*/ 	start()
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 142, 'param3': 32}
/*<142>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10009:0x00070701>Tu sais quoi? Loisel va m'aider à\nrécolter les citrouilles!")
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 122, 'param3': 16}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 133 */ "<0x10009:0x1b090702>Tu m'étonnes! Je pourrais lui labourer\nson lot, moi, et bien plus vite que cette\nvieille taupe!")
/*<128>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 177, 'param3': 16}
/*<177>*/ 	{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 2048, 'next': 123, 'param3': 13}
/*<123>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10009:0x00000008>C'est vrai? Je suis si heureuse!")
/*<178>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 129, 'param3': 13}
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 27, 'param2': 0, 'next': 124, 'param3': 16}
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 135 */ "<0x10009:0x1b070705>Hahaha! Si tu as besoin de mon aide,\npeu importe que ce soit pour cueillir\ntes citrouilles ou te tirer d'une\nmaison en flammes! Je serai là!")
/*<130>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 27, 'next': 179, 'param3': 16}
/*<179>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 2048, 'next': 125, 'param3': 13}
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x1a000009>Oh! Dans ce cas, j'accepte ton offre\navec plaisir!")
/*<180>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1, 'param2': -256, 'next': 143, 'param3': 13}
/*<143>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 144, 'param3': 16}
/*<144>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Je vous adore!\nVous êtes tellement gentils!<0x10009:0x00070703>")
          }

          void entrypoint_117_08() {
/*<283>*/ 	start()
/*<165>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000009>Merveilleux! Tu l'as trouvé!\n...Tu l'as trouvé, n'est-ce pas?")
/*<167>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00010705>Mais... Tu vois bien que ce n'est pas\nune personne...\n\n\n<0x10009:0x00070700>Ooh, je vois... C'est cette taupe qui va\nlabourer ma terre...")
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
/*<201>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00070703>Parfait! Je suis content de savoir que\nje peux toujours compter sur toi!\n[1-]Au travail![2]Non,\ndésolé!")
/*<202>*/ 				switch (choice(2)) {
          				  case 0:
/*<515>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00130809>Merveilleux! Je savais que je pouvais\ncompter sur toi!<0x10005:0x001e0000>")
          					flw_87:
/*< 87>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x00070700>Si tu veux les porter toutes à la fois,\nn'oublie pas une chose : <color red<marche très\nlentement>coloroff>.\n\nSi elles penchent à droite, avance vers\nla droite. Si elles penchent à gauche,\navance vers la gauche.\nC'est juste une question d'équilibre!\n<0x10009:0x00010700>Mais pas de panique surtout, elles\ntomberont si tu vas trop vite! <pause 20>\nC'est tout! Bonne chance!")
/*<  2>*/ 					make_actor_do_something(0, 0)
          				  case 1:
          					flw_397:
/*<397>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*<513>*/ 						switch (random(2)) {
          						  case 0:
/*<395>*/ 							printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00011606>Tu es sérieux? Et moi qui pensais que\ntu allais nous aider...")
          						  case 1:
/*<514>*/ 							printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00011611>Hm. Dis donc... Est-ce que ça t'arrive\nd'être aimable de temps en temps?")
          						}
          					  case 1:
/*<  5>*/ 						printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00011606>Tu es sérieux?\nJe vais le dire à mon père!")
          					}
          				}
          			  case 1:
/*<499>*/ 				switch (temp_flags[16 /* 0x3 01 */]) {
          				  case 0:
/*<500>*/ 					printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00070808>J'espère que tu reviendras récolter\nmes citrouilles un de ces jours!\nMon vaillant <0x10006:0xfbcd>chevalier<0x10006:0x00cd>!")
          				  case 1:
/*<508>*/ 					switch (story_flags[472 /* us: 805A9B0E 0x10, jp: 805ACD8E 0x10 */]) {
          					  case 0:
/*<509>*/ 						printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00010700>Te voilà! Tu me sauves la vie!\nQue dirais‐tu de te retrousser\nles manches et de suer un peu?\n\n<0x10009:0x00070700>J'ai à nouveau besoin de tes talents de\nporteur de citrouilles. Ça te tente?\nJe te paierai, évidemment!\n\n[1-]Allons‐y![2]Non,\ndésolé.")
          						flw_3:
/*<  3>*/ 						switch (choice(2)) {
          						  case 0:
/*<  4>*/ 							printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00070703>Alors allons‐y! Je vais te montrer où\nranger les citrouilles.")
/*< 88>*/ 							set_camera(1, 0)
/*< 86>*/ 							printf(/* textboxtype: 1, unk: 0, line: 8 */ "Tu dois les porter jusqu'à l'abri, un\npeu plus loin!")
/*< 89>*/ 							set_camera(-1, 0)
          							goto flw_87
          						  case 1:
          							goto flw_397
          						}
          					  case 1:
/*<398>*/ 						switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          						  case 0:
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Maintenant que la récolte est terminée,\nil ne reste plus qu'à planter de\nnouvelles citrouilles. Mais avant, il\nfaut labourer la terre!\nOù est‐ce que je pourrais bien trouver\nquelqu'un qui sache labourer?")
/*<396>*/ 							printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00010700>Au fait, j'aurais une petite faveur à te\ndemander. C'est qu'il me reste encore\ndes citrouilles à transporter... Et que...\n\n<0x10009:0x00070700>Crois‐tu que tu pourrais me donner un\ncoup de main et les déposer dans \nl'abri? Je te paierai, bien entendu,\net généreusement!\n[1-]En avant![2]Non,\ndésolé!")
          							goto flw_3
          						  case 1:
/*< 92>*/ 							printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Alors, tu es partant pour nous aider\nà récolter nos citrouilles?\n[1-]Au travail![2]Non,\ndésolé!")
          							goto flw_3
          						}
          					}
          				}
          			}
          		  case 1:
/*<605>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 91, 'param3': 31}
/*< 91>*/ 			scene_flags[21 'The Sky'][6 /* 0x1 40 */] = true;
/*<  1>*/ 			printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00010701>Ah, c'est bien. Tu es là pour m'aider à\nla <color red<récolte de citrouilles>coloroff>!\n\n\n<0x10009:0x00070700>J'avoue que je me sens bien soulagée.\nAs‐tu seulement idée du poids que ça\npèse, une citrouille?\n\n<0x10009:0x00011600>Ah oui? Comme ça, tu penses que\nça pèse une plume?\n\n\n<0x10009:0x00010700>Ah ha! Je vois. Et si on rendait tout\nça un petit peu plus intéressant, hein?\nVoyons si tu es capable de <color red<porter cinq\ncitrouilles >coloroff>à la fois!\n<0x10009:0x00071600>Un conseil, en passant. Vas‐y\ndoucement si tu ne veux pas les\nfaire tomber. Bon, ça suffit.\nEn avant, les citrouilles!\n[1-]Au travail![2]Pas\nle temps")
          			goto flw_3
          		}
          	  case 1:
/*<389>*/ 		switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          		  case 0:
/*<391>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 390, 'param3': 12}
/*<390>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00130809>Tu as réussi, j'en étais sûre!\nJe savais bien qu'on pouvait te confier\ncette tâche délicate!\n\n<0x10009:0x00070800>Voilà 50 rubis pour toi!")
/*<392>*/ 			rupees += 50;
/*<497>*/ 			printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00070800>Merci <pause 15>de <pause 15>tout <pause 15>cœur!\nRepasse nous voir quand tu veux!")
/*<393>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 0, 'next': 498, 'param3': 12}
          			flw_498:
/*<498>*/ 			temp_flags[16 /* 0x3 01 */] = true;
/*<512>*/ 			zone_temp_flags[2 /* 0x1 04 */] = false;
          		  case 1:
/*< 35>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130809>Tu as réussi, j'en étais sûre!\n\n\n\n<0x10009:0x00010700>Très bien, je te laisse tranquille avec\nmes citrouilles maintenant!\n\n\n<0x10009:0x00190800>Merci <pause 15>de <pause 15>tout <pause 15>cœur<pause 15>!")
/*< 83>*/ 			story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */] = true;
          			goto flw_498
          		}
          	  case 2:
/*< 36>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh non! Il faudrait que tu fasses un\npeu plus attention, quand même!\n\n\n<0x10009:0x00070700>Viens par ici si tu veux réessayer.")
/*<199>*/ 		zone_temp_flags[2 /* 0x1 04 */] = true;
          	}
          }

          void entrypoint_117_43() {
/*<131>*/ 	start()
/*<132>*/ 	printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x00000006>Hohoho...\nRien de tel qu'une bonne journée de\nlabeur pour se dégourdir!\n\n<0x10009:0x000c0d00>Et laisse‐moi te dire qu'avec cette jolie\nfille sous les yeux, on sent même pas la\nfatigue!\n\n<0x10009:0x00010900>Mais dis‐moi<pause 10>.<pause 10>.<pause 10>.<pause 10> as‐tu vu comme elle me\nregardait, la petite?\n\n\n<0x10009:0x000c0d00>Je pense que je lui ai tombé dans l'œil,\nma parole!\n\n\n<0x10009:0x00090d0b>Demain, je vais travailler encore plus\nfort. Regardez-moi bien aller!")
          }

          void entrypoint_117_09() {
/*<284>*/ 	start()
/*<168>*/ 	printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x0000000a>Non mais... Tu veux rire de moi?\nLabourer toute la journée? C'est\npour ça que tu m'as fait venir ici?\nSans farce?")
          }

          void entrypoint_117_26() {
/*<431>*/ 	start()
          	flw_73:
/*< 73>*/ 	switch (choice(2)) {
          	  case 0:
/*<314>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 74, 'param3': 12}
/*< 74>*/ 		printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00081004>Que ça me fait plaisir! Un jeune qui a\nle goût assez raffiné pour apprécier\nma soupe!\n\nSi tu veux en emporter une fiole,\nc'est <color red<10 rubis>coloroff>.\n[1-]J'achète![2]Non merci")
/*<112>*/ 		switch (choice(2)) {
          		  case 0:
/*<113>*/ 			switch (has_rupees(10)) {
          			  case 0:
/*<115>*/ 				switch (adventure_pouch_has(1 0x0001)) {
          				  case 0:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "Enfin! Tiens. C'est pour toi!")
/*<530>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 117, 'param3': 42}
/*<117>*/ 					give_item(195 0xC3);
/*<549>*/ 					rupees += -10;
/*<551>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "Ma soupe est bien meilleure quand on\nla mange chaude! Mais elle refroidit en\nseulement cinq minutes.")
          				  case 1:
/*<116>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00000700>Tu n'as pas de flacon vide?\n\n\n\nSi tu veux goûter ma soupe, il va t'en\nfalloir un. Va chercher un flacon vide\net tu pourras te régaler!")
          				}
          			  case 1:
/*<114>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x000c0700>On dirait bien que t'es cassé...\nReviens me voir plus tard.")
          			}
          		  case 1:
          			flw_434:
/*<434>*/ 			switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          			  case 0:
          				flw_437:
/*<437>*/ 				printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00100705>Ça va. Il n'y a pas que la soupe qui est\nagréable ici. Tu peux aussi y rencontrer\ndes énergumènes hauts en couleur.\nFais comme chez toi et détends‐toi.\nIl n'y a qu'une seule règle ici :\ninterdiction FORMELLE de détruire\nou déranger quoi que ce soit dans\nmon établissement!\n<0x10009:0x00080700>Je vais même être plus précis : pas\ntouche à mon lustre de luxe, compris?\nIl est sur mesure et hors de prix.\n\n<0x10009:0x00000900>Alors que je te vois pas t'y accrocher!")
          			  case 1:
/*<435>*/ 				switch (scene_flags[26 /* 0x2 04 */]) {
          				  case 0:
/*<439>*/ 					printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00100905>Je vois. Dans ce cas, tu vas devoir\ntravailler pour moi, mon garçon,\npour rembourser mon lustre.\n\n<0x10009:0x00000700>Reviens me voir quand tu repasseras\npar ici.")
          				  case 1:
/*<436>*/ 					switch (scene_flags[25 /* 0x2 02 */]) {
          					  case 0:
/*<438>*/ 						printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00100905>Je vois. Dans ce cas, tu vas devoir\ntravailler pour moi, mon garçon,\npour rembourser mon lustre.\n\n<0x10009:0x00000700>Reviens me voir quand tu repasseras\npar ici.")
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
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>J'espère que tu ne dis pas ça\njuste pour me rassurer...\n\n\n<0x10009:0x00070700>Bon, un peu d'optimisme n'a jamais tué\npersonne, de toute façon. J'attendrai\npatiemment ton ami ici.")
          			  case 1:
/*<139>*/ 				printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0000000f>Maintenant que la récolte est terminée,\nil ne reste plus qu'à planter de\nnouvelles citrouilles. Mais avant, il\nfaut labourer la terre!\nOù est‐ce que je pourrais bien trouver\nquelqu'un qui sache labourer?")
          			}
          		  case 1:
/*<135>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00010701>Tu viens proposer tes services pour la\nrécolte de citrouilles?\n\n\n<0x10009:0x00070700>Il est un peu tard pour ça, tu ne penses\npas? Reviens donc demain matin. Les\nplants seront encore là à t'attendre.")
          		}
          	  case 1:
/*<423>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<137>*/ 			printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Tiens, si c'est pas le chevalier qui a\ndétruit notre lustre de luxe! Tu essaies\ntoujours de le rembourser?\n\n<0x10009:0x00010700>Ah tiens, ça me revient!<pause 30> Papa disait\njustement qu'il avait du travail pour\ntoi. Ça tombe bien!\n\n<0x10009:0x00070700>Tu devrais aller le voir, il te donnera\nsûrement quelque chose à faire!")
          		  case 1:
/*<424>*/ 			printf(/* textboxtype: 1, unk: 0, line: 6 */ "<0x10009:0x00000001>Tiens, mais c'est le chevalier qui a\ndétruit notre lustre de luxe! Tu essaies\ntoujours de le rembourser?")
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
/*<472>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x1a000001>Je pense que tu ferais mieux d'aller\nparler à mon père sans tarder!\n\n\n<0x10009:0x1a1a0800>S'il s'énerve, ça sera pas beau à voir!")
          		flw_454:
/*<454>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 282, 'next': 539, 'param3': 14}
/*<539>*/ 		{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 0, 'next': 455, 'param3': 40}
/*<455>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<449>*/ 		printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x1a000001>Bonjour à toi!\nBienvenue à <color red<la Citrouille perchée>coloroff>.\nNotre soupe de citrouille est réputée\naux quatre coins du ciel!\n<0x10009:0x1a1a0800>Il n'y a pas grand‐chose à faire ici,\nmais tu peux te détendre et t'amuser!")
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
/*< 18>*/ 					printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x0000000e>Tu as enfin remboursé mon lustre,\nmon garçon! Beau travail!\n\n\nFaut bien dire que je ne pensais pas\nque tu tiendrais ta parole.\n\n\n<0x10009:0x00001000>La prochaine fois que tu passeras,\ntu seras à nouveau mon client!")
          				  case 1:
/*< 15>*/ 					switch (story_flags[294 /* us: 805A9AFD 0x01, jp: 805ACD7D 0x01 */]) {
          					  case 0:
/*< 80>*/ 						switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          						  case 0:
/*<266>*/ 							switch (scene_flags[21 /* 0x3 20 */]) {
          							  case 0:
/*<516>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<267>*/ 									printf(/* textboxtype: 1, unk: 1, line: 97 */ "<0x10009:0x00000001>Tu veux bien rejouer pour ma petite\nTironne?\n[1-]Je suis prêt![2-]Hein?[3]Non merci")
/*<268>*/ 									switch (choice(3)) {
          									  case 0:
/*<270>*/ 										printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000e>Voilà exactement ce que je voulais\nentendre!")
          										flw_383:
/*<383>*/ 										story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = true;
          										flw_546:
/*<546>*/ 										set_camera(9, 0)
/*<293>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 294, 'param3': 32}
/*<294>*/ 										{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 26, 'next': 295, 'param3': 15}
/*<295>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 261, 'param3': 16}
/*<261>*/ 										printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x000d0002>Parfait! Tu vas très bien t'en sortir.\nHé, Tironne!")
/*<300>*/ 										set_camera(10, 0)
/*<298>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 297, 'param3': 16}
/*<297>*/ 										printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x1a000008>Oui, papa?")
/*<301>*/ 										set_camera(11, 0)
/*<302>*/ 										{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 299, 'param3': 50}
/*<299>*/ 										{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 26, 'next': 262, 'param3': 17}
/*<262>*/ 										printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x000b0b00>Voici le garçon qui va t'accompagner\npendant que tu chantes! Veux‐tu bien\nnous enchanter de ta voix mélodieuse,\nma belle fille?")
/*<303>*/ 										set_camera(12, 0)
/*<296>*/ 										{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 100, 'next': 263, 'param3': 16}
/*<263>*/ 										printf(/* textboxtype: 1, unk: 0, line: 95 */ "Bien sûr! Je suis prête!")
/*<246>*/ 										make_actor_do_something(0, 0)
          									  case 1:
/*<545>*/ 										printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0000000e>D'accord, écoute bien.")
          										flw_265:
/*<265>*/ 										printf(/* textboxtype: 1, unk: 0, line: 91 */ "<0x10009:0x00000700>Les chansons de Tironne sont\nentraînantes, et les clients se laissent\ntoujours porter par la musique.\nTu vas devoir être à la hauteur!\n<0x10009:0x000f0700>En général, ils écoutent la chanson en\nse balançant sur leur chaise de gauche \nà droite.\n\nObserve leurs mouvements et joue\nen rythme! Peu importe la direction,\nmais ne va ni plus vite, ni plus\nlentement qu'eux!\n<0x10009:0x00080700>Lorsqu'ils s'immobilisent, tu peux\njouer au rythme qui te plaît!\n\n\nTu as compris? Bien en rythme,\nsurtout!\n[1-]Compris![2]Euh...")
/*<260>*/ 										switch (choice(2)) {
          										  case 0:
          											goto flw_383
          										  case 1:
/*<264>*/ 											printf(/* textboxtype: 1, unk: 0, line: 96 */ "Eh bien, qu'est‐ce que je t'ai dit?\nÉcoute mieux la prochaine fois!")
          											goto flw_265
          										}
          									  case 2:
/*<269>*/ 										printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000004>Très bien! Tu joueras sûrement mieux\nsi tu prends le temps de te détendre\nun peu avant!")
          									}
          								  case 1:
/*<519>*/ 									printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00000001>Encore toi! <pause 30>Ne me dis rien, je sais ce\nque tu veux. T'as envie de nous jouer\nun air de ta lyre! C'est ça, hein?\n\nDésolé, mon garçon. On ne fait pas\nde spectacles pendant la journée.\n\n\nRepasse donc cette nuit!")
          								}
          							  case 1:
/*<604>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 517, 'param3': 31}
/*<517>*/ 								switch (story_flags[737 /* us: 805A9B26 0x02, jp: 805ACDA6 0x02 */]) {
          								  case 0:
/*<197>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 19, 'param3': 13}
/*< 19>*/ 									printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000001>Te revoilà! Voyons voir...\nQu'est‐ce que je pourrais bien\nte faire faire cette fois?\n\n<0x10009:0x000d0700>Tiens, qu'est‐ce que c'est que cet\ninstrument bizarre que tu tiens là?\n\n\n<0x10009:0x00001100>Dis donc. Savais-tu que ma petite\nTironne était une chanteuse de talent?\nOn dirait pas, mais c'est pourtant vrai!\n\n<0x10009:0x00000700>Il n'y a pas si longtemps, elle chantait\nsouvent pour divertir les clients.\n\n\n<0x10009:0x00080000>Et puis le musicien qui l'accompagnait\na démissionné, alors elle a dû arrêter.\n\n\nTu voudrais pas nous jouer un petit air\nsur ton instrument pour accompagner\nma fille?\n\n[1-]Avec plaisir![2]Pas\nquestion")
/*< 53>*/ 									switch (choice(2)) {
          									  case 0:
/*< 54>*/ 										printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x0000100e>Parfait! Je savais que je pouvais\ncompter sur toi!\n\n\n<0x10009:0x000d0a00>Mais pas de blague, hein! Je veux une\ninterprétation de professionnel, pas\nd'amateur!")
          										goto flw_265
          									  case 1:
/*<198>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 55, 'param3': 13}
/*< 55>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>Wow. C'est quand même quelque chose!\nÇa ne t'arrive jamais d'apprendre de\ntes erreurs?")
          									}
          								  case 1:
/*<518>*/ 									printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>Tiens, te revoilà! Qu'est‐ce que je vais\nbien pouvoir te faire faire, cette fois?\n\n\n<0x10009:0x00000700>Oh, oui, c'est vrai que tu as cet\ninstrument bizarre!\n\n\n<0x10009:0x000b1000>Parfait! J'ai une idée de boulot\npour toi!\n\n\n<0x10009:0x00000700>Hmm, mais c'est plutôt un boulot de\nnuit... Tu veux bien revenir à la nuit\ntombée?")
          								}
          							}
          						  case 1:
/*<433>*/ 							switch (scene_flags[26 /* 0x2 04 */]) {
          							  case 0:
/*< 81>*/ 								printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000006>Je ne t'ai pas encore trouvé de travail,\nmon garçon! Repasse donc plus tard.\n\n\nÀ moins que t'aies l'intention de\nm'acheter de la soupe de citrouille pour\nfaire monter mon chiffre d'affaire?\n\n[1-]Présenté\ncomme ça...[2]Non merci")
/*<442>*/ 								entrypoint_117_26();
          							  case 1:
/*<440>*/ 								printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x000b100e>Excellent, mon garçon! Tu as terminé\n la récolte des citrouilles.\n\n\n<0x10009:0x00000700>Mais laisse‐moi te dire que tu n'as\ntoujours pas remboursé mon lustre\nde luxe. Tu as encore pas mal de\nchemin à faire, en fait.\n<0x10009:0x00080000>Je vais réfléchir à ce que je pourrais\nencore te faire faire. Reviens me voir\nplus tard.")
/*<441>*/ 								scene_flags[21 'The Sky'][26 /* 0x2 04 */] = true;
          							}
          						}
          					  case 1:
/*< 16>*/ 						switch (story_flags[292 /* us: 805A9AFA 0x40, jp: 805ACD7A 0x40 */]) {
          						  case 0:
/*< 49>*/ 							switch (story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */]) {
          							  case 0:
/*<194>*/ 								{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 50, 'param3': 13}
/*< 50>*/ 								printf(/* textboxtype: 1, unk: 0, line: 85 */ "Écoute bien ce que Tironne va te dire\net aide‐la à récolter les citrouilles.")
/*<196>*/ 								{'type': 'type3', 'subType': 4, 'param1': 8, 'param2': 1792, 'next': 195, 'param3': 13}
/*<195>*/ 								printf(/* textboxtype: 1, unk: 0, line: 87 */ "Mais n'oublie pas! Tu ne peux ramasser\nles citrouilles qu'en journée.\n\n\nOn sait jamais ce qui pourrait arriver\nquand il fait sombre...")
          							  case 1:
/*< 78>*/ 								switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          								  case 0:
/*<603>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 192, 'param3': 31}
/*<192>*/ 									{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 563, 'param3': 13}
/*<563>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<562>*/ 										printf(/* textboxtype: 1, unk: 0, line: 62 */ "Te voilà, mon garçon! Tu tombes bien.\nJ'ai un autre travail pour toi!\n\n\nTu vas nous aider avec la <color red<récolte\nde citrouilles>coloroff>, et que je t'entende pas\nrouspéter!\n\n[1-]D'accord...[2]Pas\nquestion!")
          										flw_47:
/*< 47>*/ 										switch (choice(2)) {
          										  case 0:
/*< 51>*/ 											printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00080704>Tu devrais être capable de t'en tirer.\nAs-tu vu le champ de citrouilles dont\nTironne s'occupe, là derrière?\n\nJe voudrais que tu ranges ces\ncitrouilles dans l'abri! Va voir\n<color blue<Tironne>coloroff>, elle va t'expliquer.")
/*<133>*/ 											printf(/* textboxtype: 1, unk: 0, line: 87 */ "Mais n'oublie pas! Tu ne peux ramasser\nles citrouilles qu'en journée.\n\n\nOn sait jamais ce qui pourrait arriver\nquand il fait sombre...")
/*< 52>*/ 											story_flags[293 /* us: 805A9AFA 0x80, jp: 805ACD7A 0x80 */] = true;
          										  case 1:
/*<193>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 48, 'param3': 13}
/*< 48>*/ 											printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000011>Wow. C'est quand même quelque chose!\nÇa ne t'arrive jamais d'apprendre de\ntes erreurs?")
          										}
          									  case 1:
/*< 20>*/ 										printf(/* textboxtype: 1, unk: 0, line: 61 */ "Merveilleux! Tu as pu livrer la soupe\nà temps à Aquilus, le capitaine des\nchevaliers!\n\n<0x10009:0x000c0700>Je vais donc déduire ta paie de la\nfacture de mon nouveau lustre...\n\n\n<0x10009:0x000f0900>Tu croyais peut‐être que tu allais t'en\nsortir rien qu'avec ce petit service?\n\n\nEh ben, t'avais tort! Ta tâche suivante\nsera la <color red<récolte des citrouilles>coloroff>, et que je\nne t'entende pas rouspéter!\n\n[1-]D'accord...[2]Pas\nquestion!")
          										goto flw_47
          									}
          								  case 1:
/*<428>*/ 									switch (scene_flags[25 /* 0x2 02 */]) {
          									  case 0:
/*<430>*/ 										printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000006>Eh bien quoi, qu'est‐ce que tu veux?\nJe réfléchis toujours à ce que je\npourrais te faire faire!\n\nUn lustre de ce prix, ça se remplace\npas en claquant des doigts!\n\n\nEt si tu m'achetais de la soupe de\ncitrouille, histoire de faire tourner\nmon bistrot?\n[1-]Présenté\ncomme ça...[2]Non merci")
/*<432>*/ 										entrypoint_117_26();
          									  case 1:
/*< 79>*/ 										printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x000b100e>Merveilleux! Tu as pu livrer la soupe\nà Aquilus, le capitaine des chevaliers!\n\n\nJe vais donc déduire ta paie de la\nfacture de mon nouveau lustre...\n\n\n<0x10009:0x00080700>Mais tu n'as pas encore fini, mon\ngarçon! J'ai encore beaucoup de\ntravail pour toi en réserve.\n\nMais je dois d'abord réfléchir à ce que\nje vais te faire faire en premier.\nRepasse me voir plus tard.")
/*<429>*/ 										scene_flags[21 'The Sky'][25 /* 0x2 02 */] = true;
          									}
          								}
          							}
          						  case 1:
/*< 27>*/ 							switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          							  case 0:
/*< 24>*/ 								switch (adventure_pouch_has(2 0x0002)) {
          								  case 0:
/*< 25>*/ 									printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x00000001>La soupe refroidit en <color red<cinq minutes>coloroff>!\nGrouille‐toi, il faut l'apporter au\ncapitaine!")
          								  case 1:
/*< 26>*/ 									switch (adventure_pouch_has(3 0x0003)) {
          									  case 0:
/*<160>*/ 										printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000008>Qu'est‐ce que je t'ai dit? Pas question\nde laisser refroidir la soupe!\n\n\nTu en fais des belles, toi, dis donc.\nTiens, revoilà de la soupe chaude.")
/*< 45>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
          											flw_532:
/*<532>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 29, 'param3': 42}
/*< 29>*/ 											give_item(195 0xC3);
/*<156>*/ 											printf(/* textboxtype: 1, unk: 0, line: 76 */ "Mais il va falloir payer!\nTu me dois <color red<10 rubis>coloroff>!")
/*<157>*/ 											switch (has_rupees(10)) {
          											  case 0:
/*<159>*/ 												rupees += -10;
          											  case 1:
/*<190>*/ 												{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 158, 'param3': 13}
/*<158>*/ 												printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x0000000d>Comment ça, tu n'as pas 10 rubis?\nTu n'es pas un cadeau, toi! Bon.\nJe te laisse la garder, mais c'est\nla dernière fois, compris?")
          											}
          										  case 1:
/*<191>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 46, 'param3': 13}
/*< 46>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
          										}
          									  case 1:
/*<553>*/ 										switch (adventure_pouch_has(1 0x0001)) {
          										  case 0:
/*< 28>*/ 											printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x00000007>Bien voyons! Tu n'as plus de soupe?\n\n\n\n<0x10009:0x000d0a00>Ne viens pas me dire que tu l'as bue!\nT'es un p'tit comique, toi.\n\n\nBon. Tiens, en revoilà!")
          											goto flw_532
          										  case 1:
/*<556>*/ 											printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x00000007>Qu'est-ce que tu dis?\nTu n'as plus de soupe?\n\n\n<0x10009:0x000d0a00>Ne me dis pas que tu l'as bue!\nTrès bien, je vais t'en redonner.")
/*<555>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2304, 'next': 554, 'param3': 13}
/*<554>*/ 											printf(/* textboxtype: 1, unk: 0, line: 78 */ "Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
          										}
          									}
          								}
          							  case 1:
/*<589>*/ 								switch (scene_flags[48 /* 0x7 01 */]) {
          								  case 0:
/*<590>*/ 									switch (adventure_pouch_has(1 0x0001)) {
          									  case 0:
/*<593>*/ 										printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Ah, je vois que tu as apporté\nun flacon vide comme je te\nl'ai demandé! Parfait.")
          										flw_189:
/*<189>*/ 										{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4100, 'next': 22, 'param3': 13}
/*< 22>*/ 										printf(/* textboxtype: 1, unk: 0, line: 69 */ "C'est très bien.\nVoici la <color red<soupe de citrouille>coloroff>!\n\n\n<0x10009:0x00000700>Apporte‐la au capitaine des chevaliers.")
/*<533>*/ 										{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 30, 'param3': 42}
/*< 30>*/ 										give_item(195 0xC3);
/*< 77>*/ 										printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00010700>J'oubliais, mon garçon... Le capitaine\na horreur de la soupe froide!\n\n\nAlors il faudra pas que tu traînes...\n\n\n\nHmm, à mon avis, il va falloir lui\napporter en <color red<moins de cinq minutes>coloroff>,\nsinon elle sera froide!")
/*< 31>*/ 										story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */] = true;
          									  case 1:
/*<592>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 591, 'param3': 13}
/*<591>*/ 										printf(/* textboxtype: 1, unk: 0, line: 78 */ "Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
          									}
          								  case 1:
/*<602>*/ 									{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 155, 'param3': 31}
/*<155>*/ 									switch (scene_flags[8 /* 0x0 01 */]) {
          									  case 0:
/*<185>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 154, 'param3': 13}
/*<154>*/ 										printf(/* textboxtype: 1, unk: 0, line: 67 */ "Alors, t'es prêt à me rembourser mon\nlustre de luxe?\n[1-]Bien, oui[2]Je ne\nsais pas")
          										flw_75:
/*< 75>*/ 										switch (choice(2)) {
          										  case 0:
/*<187>*/ 											{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4110, 'next': 76, 'param3': 13}
/*< 76>*/ 											printf(/* textboxtype: 1, unk: 0, line: 66 */ "Oh, t'as l'air motivé! Très bien, je suis\nprêt à te faire confiance.\n\n\n<0x10009:0x00000700>Allez, au travail! Je veux que tu livres\nma soupe au <color red<capitaine des chevaliers\nde Célesbourg>coloroff>.\n\n<0x10009:0x00080700>Le capitaine est un habitué. Il est\nincapable de commencer sa journée\ns'il n'a pas un peu de soupe pour\npartir du bon pied!\nQu'est-ce que t'en dis?\nPrêt pour la livraison de soupe?\n[1-]Oui, prêt![2]Attends!")
/*<274>*/ 											scene_flags[21 'The Sky'][20 /* 0x3 10 */] = true;
          											flw_17:
/*< 17>*/ 											switch (choice(2)) {
          											  case 0:
/*< 43>*/ 												switch (adventure_pouch_has(1 0x0001)) {
          												  case 0:
          													goto flw_189
          												  case 1:
/*<188>*/ 													{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2309, 'next': 44, 'param3': 13}
/*< 44>*/ 													printf(/* textboxtype: 1, unk: 0, line: 78 */ "Mais... tu n'as pas de flacon vide!\n\n\n\nSi tu veux pouvoir emporter de la\nsoupe, il va t'en falloir un!\n\n\nVa donc chercher un flacon vide et\nreviens me voir!")
/*<588>*/ 													scene_flags[21 'The Sky'][48 /* 0x7 01 */] = true;
          												}
          											  case 1:
/*<275>*/ 												printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x000d0a0d>Hé! Un homme ne revient jamais sur sa\nparole! Tu vas livrer cette soupe au\ncapitaine des chevaliers! Compris?\n[1-]Compris![2]Attends\nun peu.")
          												goto flw_17
          											}
          										  case 1:
/*<186>*/ 											{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 23, 'param3': 13}
/*< 23>*/ 											printf(/* textboxtype: 1, unk: 0, line: 71 */ "Non mais, je rêve! Tu manques pas\nde culot, mon garçon! Tu te pointes,\ntu fracasses mon lustre et tu crois\nque tu vas t'en sortir comme ça?")
/*<153>*/ 											scene_flags[21 'The Sky'][8 /* 0x0 01 */] = true;
          										}
          									  case 1:
/*<184>*/ 										{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2317, 'next': 21, 'param3': 13}
/*< 21>*/ 										printf(/* textboxtype: 1, unk: 0, line: 65 */ "Non mais, c'est pas vrai! Tu te\nrends compte de ce que t'as fait?\n\n\nMon lustre de luxe sur mesure est\nréduit en mille morceaux!\n\n\nTu ne vas pas t'en tirer si facilement!\nJe vais te faire travailler, moi, et tu vas\nme rembourser mon lustre jusqu'au\ndernier rubis!\nAlors? T'es prêt?\n[1-]D'accord...[2]Pas\nquestion!")
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
/*<557>*/ 				printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Bien le bonjour, toi!\nQue dirais‐tu d'un petit remontant?\nJ'ai justement de la <color red<soupe de citrouille\n>coloroff>sur le feu!\n[1-]Juste un peu[2]Non merci")
          				flw_558:
/*<558>*/ 				zone_temp_flags[4 /* 0x1 10 */] = true;
          				goto flw_73
          			  case 1:
/*< 13>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000001>Bienvenue à la Citrouille perchée,\nle bistrot favori des plus grands\nchevaucheurs célestes!\n\nIl n'existe pas de meilleur potage que\nma <color red<soupe de citrouille >coloroff>maison!\n\n\nQue dirais‐tu d'y goûter un peu,\nhistoire de savoir ce que tu manques?\n[1-]Juste un peu[2]Non merci")
          				goto flw_558
          			}
          		}
          	}
          }

          void entrypoint_117_45() {
/*<145>*/ 	start()
/*<147>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 26, 'next': 151, 'param3': 32}
/*<151>*/ 	printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10009:0x00000001>Ah, Tironne, Tironne... Un seul mot\nde sa part, et je prendrais soin de\nses citrouilles comme aucun autre\nne saurait le faire!")
/*<148>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 425, 'param3': 16}
/*<425>*/ 	printf(/* textboxtype: 1, unk: 0, line: 138 */ "<0x10009:0x1a000003>Ah ça non, pas question! C'est pas\nle rôle des clients de s'occuper\ndes citrouilles!")
/*<181>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 149, 'param3': 13}
/*<149>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 26, 'next': 426, 'param3': 16}
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 139 */ "<0x10009:0x00000002>Ne t'inquiète pas! Je vais travailler\ndeux fois plus vite que cette vieille\ntaupe plus que suspecte...")
/*<150>*/ 	{'type': 'type3', 'subType': 1, 'param1': 26, 'param2': 0, 'next': 182, 'param3': 16}
/*<182>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6675, 'param2': 2048, 'next': 146, 'param3': 13}
/*<146>*/ 	printf(/* textboxtype: 1, unk: 0, line: 136 */ "<0x10009:0x1a000009>Oh! Dans ce cas, j'accepte ton offre\navec plaisir!")
/*<183>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6657, 'param2': -256, 'next': 152, 'param3': 13}
/*<152>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 427, 'param3': 16}
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0, line: 140 */ "<0x10009:0x00090705>Il me suffit de voir briller son sourire\npour me sentir pousser des ailes! Je ne\nsens même pas la fatigue! Haha!")
          }

          void entrypoint_117_28() {
/*<457>*/ 	start()
/*<560>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<561>*/ 		printf(/* textboxtype: 1, unk: 0, line: 200 */ "<0x10009:0x00000003>Tu t'en es bien sorti. Tu nous as rendu\nbon nombre de services, je dois dire!\n\n\nMaintenant, tu peux profiter de notre\nétablissement en tant que client.\n\n\nEt si ça t'intéresse, tu peux encore nous\ndonner un coup de main... Et tu seras\nrémunéré, il va sans dire!")
          	  case 1:
/*<474>*/ 		switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          		  case 0:
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 199 */ "<0x10009:0x00000003>Tu crois que c'est le moment de faire\nune pause? T'aurais pas des choses\nà faire, par hasard?")
          		  case 1:
/*<458>*/ 			printf(/* textboxtype: 1, unk: 0, line: 198 */ "<0x10009:0x00000003>Mais, qu'est‐ce que tu fais assis là?\n\n\n\n<0x10009:0x000d0700>Bah, j'imagine que tout le monde a\nbesoin de se reposer un moment pour\nréfléchir tranquillement de temps\nen temps.\n<0x10009:0x00001000>Détends‐toi! Prends ton temps!")
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
/*<212>*/ 			printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>J'apportais toujours ma soupe à\n<color blue<Narisha >coloroff>sur la petite île avec un\n<color red<arc‐en‐ciel>coloroff>, à l'intérieur du gros nuage.<sound 4>\n\n<0x10009:0x00000700>Tu la reconnaîtras tout de suite en la\nvoyant! Bonne chance!")
          		  case 1:
/*<209>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 459, 'param3': 31}
/*<459>*/ 			switch (story_flags[367 /* us: 805A9B03 0x20, jp: 805ACD83 0x20 */]) {
          			  case 0:
/*<460>*/ 				printf(/* textboxtype: 1, unk: 0, line: 156 */ "<0x10009:0x000f090d>Qu'est‐ce que c'est que cette histoire?\nTu crois que je me serais donné tant de\nmal pour faire ma soupe si c'était pour\nque tu fasses demi‐tour?\n<0x10009:0x000a0000>Ton robot a rapporté ma soupe\njusqu'ici.\n[1-]Désolé![2-]J'y retourne")
/*<461>*/ 				switch (choice(2)) {
          				  case 0:
          					flw_462:
/*<462>*/ 					printf(/* textboxtype: 1, unk: 0, line: 157 */ "<0x10009:0x000d0900>Puisque c'est pour Narisha, je vais t'en\nfaire une autre marmite! Mais c'est\nbien parce que c'est pour lui. Hmf.")
/*<463>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 464, 'param3': 32}
/*<464>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 471, 'param3': 32}
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1013, 'next': 470, 'param3': 24}
/*<470>*/ 					printf(/* textboxtype: 1, unk: 0, line: 149 */ "<0x10009:0x00000900>Attends‐moi ici! Je viens d'être saisi\nd'une irrésistible pulsion de création\nculinaire!")
/*<340>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 223, 'param3': 16}
/*<223>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 228, 'param3': 47}
/*<228>*/ 					{'type': 'type3', 'subType': 2, 'param1': 0, 'param2': 256, 'next': 229, 'param3': 15}
/*<229>*/ 					{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 230, 'param3': 15}
/*<230>*/ 					set_camera(2, 0)
/*<338>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 4096, 'next': 523, 'param3': 13}
/*<523>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 108, 'next': 524, 'param3': 24}
/*<524>*/ 					wait_frames(45)
/*<224>*/ 					{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 0, 'next': 547, 'param3': 48}
/*<547>*/ 					wait_frames(10)
/*<548>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 8, 'next': 217, 'param3': 24}
/*<217>*/ 					printf(/* textboxtype: 1, unk: 0, line: 150 */ "<0x10009:0x000b1009>Et voilà!\n\n\n\n<0x10009:0x000f1100>Ça fait des décennies que je popote,\net j'avoue que c'est la meilleure <color red<soupe\nde citrouille >coloroff>que j'aie jamais faite!")
/*<382>*/ 					make_actor_do_something(3, 23)
/*<218>*/ 					{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 525, 'param3': 51}
/*<525>*/ 					{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 256, 'next': 219, 'param3': 13}
/*<219>*/ 					printf(/* textboxtype: 2, unk: 0, line: 151 */ "<0x10012:0x00000001>Maître, je vais immédiatement\nconvoquer le robot.")
/*<336>*/ 					{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 23, 'next': 536, 'param3': 17}
/*<536>*/ 					make_actor_do_something(0, 3)
/*<344>*/ 					wait_frames(10)
/*<337>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 23, 'next': 345, 'param3': 17}
/*<345>*/ 					wait_frames(15)
/*<341>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 23, 'next': 220, 'param3': 17}
/*<220>*/ 					printf(/* textboxtype: 1, unk: 0, line: 152 */ "<0x10012:0x00000064>Mam'selle Fayyy! Me voilààà!")
/*<225>*/ 					make_actor_do_something(1, 23)
/*<221>*/ 					printf(/* textboxtype: 1, unk: 0, line: 153 */ "<0x10012:0x00000064>Eh ben, voilà une cargaison qui pèse\nson poids!\n\n\nMais je ferais n'importe quoi pour\nFay... Bon, je t'attends dehors!\nOn part quand tu veux!")
/*<226>*/ 					make_actor_do_something(2, 23)
/*<343>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 342, 'param3': 16}
/*<342>*/ 					set_camera(5, 0)
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 154 */ "<0x10009:0x00000004>J'apportais toujours ma soupe à\n<color blue<Narisha >coloroff>sur la petite île avec un\n<color red<arc‐en‐ciel>coloroff>, à l'intérieur du gros nuage.<sound 4>\n\n<0x10009:0x00000700>Tu la reconnaîtras tout de suite en la\nvoyant! Bonne chance!")
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
/*<203>*/ 					printf(/* textboxtype: 1, unk: 0, line: 143 */ "<0x10009:0x00000001>Qu'est‐ce qu'il t'arrive? Je sais\nreconnaître le visage d'un jeune\nhomme préoccupé, et toi, mon\ngarçon, tu as l'air perturbé!\n[1-]En fait...[2]Pas\nvraiment")
          					flw_204:
/*<204>*/ 					switch (choice(2)) {
          					  case 0:
/*<206>*/ 						printf(/* textboxtype: 1, unk: 0, line: 147 */ "<0x10009:0x000d0d04><color blue<Narisha>coloroff><0x10006:0xfbcd>...<0x10006:0x00cd>?\n\n\n\n<0x10009:0x00000700>Je connais bien Narisha, en effet. Mais\nje ne savais pas qu'il avait des ennuis!\n\n\n<0x10009:0x00080700>Tous les ans, je lui apporte une\ngrosse marmite débordante de\n<color red<soupe de citrouille>coloroff>!\n\nMais avec ce gros nuage, je ne peux\nplus me rendre là‐bas. Narisha n'a\ndonc pas eu de soupe cette année...\nJ'en suis fort peiné.")
/*<227>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 23, 'next': 339, 'param3': 32}
/*<339>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 207, 'param3': 32}
/*<207>*/ 						printf(/* textboxtype: 1, unk: 0, line: 148 */ "<0x10009:0x000d0d08>Qu'est-ce que tu dis? Tu voudrais\napporter ma soupe à <color blue<Narisha>coloroff>?\n\n\n<0x10009:0x00000700><0x10006:0xfdcd>...<0x10006:0x00cd> Je ne vois pas comment tu vas\nrégler le problème du nuage, mais\nbon...\n\n<0x10009:0x000b1000>Puisque c'est à Narisha que tu vas\nessayer d'apporter ma soupe, je vais\nfaire la meilleure chaudronnée de ma\ncarrière!")
          						goto flw_471
          					  case 1:
/*<564>*/ 						switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          						  case 0:
          							flw_205:
/*<205>*/ 							printf(/* textboxtype: 1, unk: 0, line: 144 */ "<0x10009:0x00000005>Oh, ce n'était donc rien! Tant mieux.\nAlors, si tout va bien, prends un siège\net détends‐toi un peu!")
          						  case 1:
/*<346>*/ 							switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          							  case 0:
/*<347>*/ 								printf(/* textboxtype: 1, unk: 0, line: 145 */ "<0x10009:0x00000004>Très bien, si tu le dis, je vais pas te\ncontredire! Que dirais‐tu de travailler\nun peu pour éponger ta dette?")
          							  case 1:
          								goto flw_205
          							}
          						}
          					}
          				  case 1:
/*<522>*/ 					printf(/* textboxtype: 1, unk: 0, line: 146 */ "<0x10009:0x00000001>Bienvenue à la Citrouille perchée,\nle bistrot préféré des plus grands\nchevaucheurs du ciel!\n\nTu ne trouveras ma délicieuse soupe de\ncitrouille maison nulle part ailleurs!\n\n\nMais qu'est‐ce que c'est que ce visage\nsombre? Tu m'as pas l'air dans ton\nassiette, fiston...\n[1-]En vérité...[2]Vraiment?")
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
/*<404>*/ 		printf(/* textboxtype: 1, unk: 0, line: 186 */ "Ça y est, tout est perdu.\n\n\n\nJ'aurais pas dû ambitionner...")
          	  case 1:
/*<411>*/ 		switch (story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */]) {
          		  case 0:
/*<420>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<color blue<Picoro >coloroff>est drôlement doué quand il\ns'agit de faire des réparations.\n\n\nJe suis sûr qu'il est tout à fait capable\nde réparer le moulin de Célesbourg.")
          		  case 1:
/*<412>*/ 			switch (story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */]) {
          			  case 0:
/*<419>*/ 				printf(/* textboxtype: 1, unk: 0, line: 184 */ "On ne voit plus <color blue<Caïk >coloroff>au <color blue<bazar\n>coloroff>ces temps‐ci...\n\n\nC'est dommage, c'était un vrai bon\ndiseur de bonne aventure!")
          			  case 1:
/*<413>*/ 				switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          				  case 0:
/*<418>*/ 					printf(/* textboxtype: 1, unk: 0, line: 183 */ "<color blue<Tironne >coloroff>a du pain sur la planche avec\ntoutes les tâches dont elle s'occupe.\n\n\nTu connaîtrais pas quelqu'un qui soit\nun expert pour creuser des trous dans\nla terre?")
          				  case 1:
/*<414>*/ 					switch (story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */]) {
          					  case 0:
/*<417>*/ 						printf(/* textboxtype: 1, unk: 0, line: 182 */ "As‐tu déjà observé la collection de\nplantes d'<color blue<Arfan>coloroff>?\n\n\nJe me demande s'il en a trouvé de\nnouvelles récemment.")
          					  case 1:
/*<415>*/ 						switch (story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */]) {
          						  case 0:
/*<400>*/ 							printf(/* textboxtype: 1, unk: 0, line: 181 */ "Tu n'aurais pas des nouvelles de <color blue<Dodon>coloroff>,\npar hasard?\n\n\nJe sais qu'il a travaillé très fort\npour construire un endroit dédié\nau divertissement...")
          						  case 1:
/*<416>*/ 							printf(/* textboxtype: 1, unk: 0, line: 180 */ "Il y a des gens qui s'amusent à plonger\nen chute libre au‐dessus de la Citrouille\nperchée...\n\nEt on raconte que de jolies créatures\ncolorées t'accompagnent pendant\nta chute.\n\nJe me demande si quelque chose de bien\nse produit quand tu planes avec elles.")
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
/*<482>*/ 		printf(/* textboxtype: 1, unk: 0, line: 197 */ "<0x10009:0x1a000001>Je pense que tu ferais mieux d'aller\nparler à mon père sans tarder!\n\n\n<0x10009:0x1a1a0800>S'il s'énerve, ça sera pas beau à voir!")
          		flw_480:
/*<480>*/ 		{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 282, 'next': 481, 'param3': 14}
/*<481>*/ 		{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 26, 'next': -1, 'param3': 15}
          	  case 1:
/*<479>*/ 		printf(/* textboxtype: 1, unk: 0, line: 196 */ "<0x10009:0x1a000001>Bonjour à toi!\nBienvenue à <color red<la Citrouille perchée>coloroff>.\nNotre soupe de citrouille est réputée\naux quatre coins du ciel!\n<0x10009:0x1a1a0800>Il n'y a pas grand‐chose à faire ici,\nmais tu peux te détendre et t'amuser!")
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
/*<408>*/ 		printf(/* textboxtype: 1, unk: 0, line: 188 */ "Qu'est-ce qui s'est passé?")
          	  case 1:
/*<406>*/ 		printf(/* textboxtype: 1, unk: 0, line: 187 */ "Je viens toujours ici, le soir.")
          	}
          }

          void entrypoint_117_30() {
/*< 39>*/ 	start()
/*<352>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<353>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<354>*/ 			printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x000b0704>Fais-moi pas peur comme ça! J'ai failli\nfaire une syncope!\n\n\n<0x10009:0x000a0700>Qu'est‐ce que tu veux, encore?")
          			flw_56:
/*< 56>*/ 			switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          			  case 0:
/*< 62>*/ 				switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          				  case 0:
/*<610>*/ 					switch (scene_flags[70 /* 0x9 40 */]) {
          					  case 0:
/*<609>*/ 						switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          						  case 0:
/*<612>*/ 							printf(/* textboxtype: 1, unk: 0, line: 130 */ "<0x10009:0x00000004>C'est bien d'avoir un grand lustre\ncomme ça, mais toute cette lumière\nest un peu forte pour mes yeux!")
          						  case 1:
          							flw_70:
/*< 70>*/ 							printf(/* textboxtype: 1, unk: 0, line: 125 */ "<0x10009:0x000b0c04>Quoi, tu as déplacé la pierre tombale?\n\n\n\n<0x10009:0x000a0f00>As‐tu aperçu l'effroyable créature?\nÉtait‐elle terrifiante?\n\n\nN'essaie pas de jouer au héros! Je suis\nsûr que ton sang s'est glacé à sa vue!")
          						}
          					  case 1:
/*<611>*/ 						scene_flags[21 'The Sky'][70 /* 0x9 40 */] = true;
          						goto flw_70
          					}
          				  case 1:
/*< 69>*/ 					switch (scene_flags[5 /* 0x1 20 */]) {
          					  case 0:
/*<585>*/ 						printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x00000001>Comment? Y a quelque chose que t'as\npas compris?\n[1-]La nuit?[2-]Au cimetière?")
/*<586>*/ 						switch (choice(2)) {
          						  case 0:
/*<587>*/ 							printf(/* textboxtype: 1, unk: 0, line: 121 */ "<0x10009:0x000b0704>Oui. Pour attendre que la <color red<nuit>coloroff> tombe,\nretourne à Célesbourg et <color green<dors dans un\nlit>coloroff>, n'importe lequel.\n\nLa nuit, Célesbourg montre un tout\nautre visage.\n\n\n<0x10009:0x000a0f00>Mais, moi, si j'étais toi, je n'irais pas.\nS'il t'arrive des pépins, tu pourras pas\ndire que je t'avais pas averti.")
          						  case 1:
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 0, line: 119 */ "<0x10009:0x000b0704>Eh bien, figure‐toi qu'au cimetière,\nlorsque la <color red<pierre tombale près de\nl'arbre subit un choc>coloroff>, elle s'illumine!\n\nIl suffit de <color red<pousser cette pierre>coloroff> pour\nque la porte de la remise s'ouvre...\n\n\nC'est là qu'il se trouve... le démon!\nCaché au fond de la remise!\n\n\n<0x10009:0x000a0f00>Je suis très sérieux! Tu ne devrais\npas y aller! C'est trop dangereux!\nSi tu y vas, tu courras à ta perte!\nEt je ne pourrai rien pour toi.")
          						}
          					  case 1:
/*<606>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 42, 'param3': 31}
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 118 */ "<0x10009:0x000b0704>Il y a un monstre qui vit à Célesbourg!\nIl faut me croire! Me crois-tu, hein?\nMe crois-tu?\n\nNon, ce n'est pas un monstre...\nC'est un démon! Aucun de ceux qui\nl'ont vu n'est encore là pour en parler!\n\n<0x10009:0x000b0700>Quoi? Euh, oui, bon, sauf moi,\nen effet...\n[1-]Raconte‐moi[2]Laisse\ntomber")
/*< 63>*/ 						switch (choice(2)) {
          						  case 0:
/*< 64>*/ 							printf(/* textboxtype: 1, unk: 0, line: 122 */ "<0x10009:0x000a0f00>C'est vrai, je suis toujours là pour en\nparler, mais j'étais vraiment à deux\ndoigts d'y rester! Je ne dois mon salut\nqu'à ma parfaite condition physique.\n<0x10009:0x000b0700>N'importe qui d'autre y aurait laissé\nsa peau, je t'en passe un papier!")
          							flw_66:
/*< 66>*/ 							printf(/* textboxtype: 1, unk: 0, line: 124 */ "<0x10009:0x000b0700>Ils auront beau dire ce qu'ils veulent.\nJe sais ce que j'ai vu, et personne\npourra me convaincre du contraire!\n\nJ'étais en train de marcher près du\ngrand arbre, dans le cimetière, <color red<en\npleine nuit>coloroff>...\n\nJe l'ai vu <color red<heurter la pierre tombale\nprès de l'arbre>coloroff>, et elle s'est illuminée!\n\n\nEnsuite, il a poussé <color red<cette pierre >coloroff>et la\nporte de la cabane s'est ouverte toute\nseule!\n\nAlors il est entré et, chose étrange, il\na pris le temps de fermer la porte\nderrière lui comme un homme\ncivilisé. <0x10009:0x000b0700>Quel cauchemar!\nQuoi qu'il arrive, ne t'aventure jamais\ndans le <color red<cimetière la nuit>coloroff>!")
/*< 68>*/ 							scene_flags[21 'The Sky'][5 /* 0x1 20 */] = true;
/*<577>*/ 							story_flags[825 /* us: 805A9B33 0x02, jp: 805ACDB3 0x02 */] = true;
          						  case 1:
/*< 65>*/ 							printf(/* textboxtype: 1, unk: 0, line: 123 */ "Ne me coupe pas la parole quand je\nraconte mon histoire!")
          							goto flw_66
          						}
          					}
          				}
          			  case 1:
/*< 57>*/ 				printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x00000001>J'espère que tu me crois, au moins?\n[1-]Je crois\nquoi?[2-]Oui![3]Pas une\nseconde!")
/*< 58>*/ 				switch (choice(3)) {
          				  case 0:
/*< 59>*/ 					printf(/* textboxtype: 1, unk: 0, line: 115 */ "<0x10009:0x000b0703>Il y a un démon maléfique à\nCélesbourg, faut me croire!\n\n\nJ'étais à deux doigts de me faire\ndévorer sans pitié par cette créature!\n\n\n<0x10009:0x000b0700>Il ne ferait qu'une bouchée d'un\napprenti chevalier comme toi,\nmon p'tit gars!")
          				  case 1:
/*< 60>*/ 					printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10009:0x000b0e04>Bien, oui! Bien, oui!\nTu es vraiment un bon garçon!")
          				  case 2:
/*< 61>*/ 					printf(/* textboxtype: 1, unk: 0, line: 117 */ "<0x10009:0x000a0f03>Non, mais.<pause 20>.<pause 20>.<pause 20>\nC'est quoi leur problème, aux jeunes,\nde nos jours?")
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
/*<173>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000008>Très bien, dans ce cas!\nMerci <pause 10>beaucoup <pause 10>monsieur <pause 10>Taupe!")
          }

          void entrypoint_117_48() {
/*<421>*/ 	start()
/*<501>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<502>*/ 		printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x00000001>J'ai entendu Tironne chanter... Je\nn'en suis pas encore revenu! Je crois\nbien que je viens de tomber amoureux\nd'elle pour la douzième fois!")
          	  case 1:
/*<422>*/ 		printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000001>Tu savais que <color blue<Tironne>coloroff> chantait parfois\npour les clients du bistrot?\n\n\n<0x10009:0x00090700>Si seulement elle avait un musicien\npour l'accompagner, nous pourrions\nentendre sa voix mélodieuse!")
          	}
          }

          void entrypoint_117_31() {
/*< 37>*/ 	start()
/*<503>*/ 	switch (story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */]) {
          	  case 0:
/*<504>*/ 		printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10009:0x00000004>J'en étais sûr! La voix de Tironne est\nà son image, belle à couper le souffle!\n\n\nRien à voir avec la voix de casserole\nde ma femme...")
          	  case 1:
/*<401>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<402>*/ 			printf(/* textboxtype: 1, unk: 0, line: 127 */ "<0x10009:0x000b0704>Fais-moi pas peur comme ça! J'ai failli\nfaire une syncope!\n\n\n<0x10009:0x000a0700>Qu'est‐ce que tu veux, encore?")
          		  case 1:
/*<495>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<496>*/ 				printf(/* textboxtype: 1, unk: 0, line: 128 */ "<0x10009:0x00000004>Tironne chante comme un ange.<pause 10>.<pause 10>.<pause 10>\nMais le musicien qui l'accompagnait\nest parti, et elle ne peut plus nous\ncharmer de ses douces mélopées.\nComme j'aimerais l'entendre chanter\nencore! Sa voix est inoubliable, d'une\nchaleur indescriptible!")
          			  case 1:
/*< 40>*/ 				printf(/* textboxtype: 1, unk: 0, line: 126 */ "<0x10009:0x00000004>Tu devrais pas te promener la nuit,\ncomme ça! Si tu veux me parler,\nreviens me voir quand il fera jour!")
          			}
          		}
          	}
          }

          void entrypoint_117_14() {
/*<286>*/ 	start()
/*<174>*/ 	printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000005>C'est-à-dire que... Je... En tout cas...\nBon, j'imagine qu'il n'y aurait pas de\nmal à essayer.")
          }

          void entrypoint_117_15() {
/*<287>*/ 	start()
/*<169>*/ 	printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x00000009>Alors, qu'est‐ce que vous dites de ça?")
          }

          void entrypoint_117_32() {
/*<544>*/ 	start()
          	goto flw_546
          }

          void entrypoint_117_50() {
/*<109>*/ 	start()
/*<111>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x00000012><0x10008:0x02cd>Non mais ça va pas?!\n\n\n\n<0x10008:0x00cd>Viens ici tout de suite!")
/*<110>*/ 	story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */] = true;
/*<349>*/ 	zone_temp_flags[3 /* 0x1 08 */] = true;
          }

          void entrypoint_117_16() {
/*<288>*/ 	start()
/*<170>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000009>Wow! Avez-vous vu ça?\nC'est absolument extraordinaire!")
          }

          void entrypoint_117_51() {
/*<271>*/ 	start()
/*<276>*/ 	set_camera(3, 0)
/*<277>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 272, 'param3': 13}
/*<272>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Minute!\n\n\n\nTu ne crois pas sérieusement que je\nvais te laisser détruire mon lustre de\nluxe et disparaître dans la nature?")
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_17() {
/*<289>*/ 	start()
/*<171>*/ 	printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x00000006>Hohoho... Vous trouvez?\nPourtant, laissez‐moi vous dire\nque c'était rien, ça, ma p'tite dame!\n\nChez nous, le premier venu est capable\nd'en faire du pareil! C'est pas la mer\nà boire.")
          }

          void entrypoint_117_52() {
/*<273>*/ 	start()
/*<280>*/ 	set_camera(4, 0)
/*<281>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 2321, 'next': 279, 'param3': 13}
/*<279>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "Minute!\n\n\n\nTu ne crois pas sérieusement que je\nvais te laisser détruire mon lustre de\nluxe et disparaître dans la nature?")
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_18() {
/*<290>*/ 	start()
/*<172>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0000000a>Vous voudriez pas recommencer, hm?\nOh! S'il vous plaaaît! Encore une fois!\nOuiii! S'il vous plaaaît?")
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
/*<100>*/ 								printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00130808>Le plus incroyable, c'est qu'il abat\nle travail d'une centaine d'ouvriers à\nlui tout seul! Je lui en suis tellement\nreconnaissante...")
          							  case 1:
/*<510>*/ 								switch (zone_temp_flags[7 /* 0x1 80 */]) {
          								  case 0:
          									flw_388:
/*<388>*/ 									entrypoint_117_25();
          								  case 1:
/*<507>*/ 									printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00130808>Depuis l'arrivée de monsieur Taupe,\nla culture des citrouilles est devenue\nune partie de plaisir! Notre production\nde citrouilles va décoller!")
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
/*<234>*/ 								printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x000b0e0f>Tu n'as pas l'intention d'aller le voir\nbientôt, ton ami laboureur, par\nhasard?")
/*<233>*/ 								switch (story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */]) {
          								  case 0:
          								  case 1:
/*<235>*/ 									{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 236, 'param3': 51}
/*<236>*/ 									printf(/* textboxtype: 2, unk: 0, line: 38 */ "La <sound 4><color red<fonction détection >coloroff>n'est pas\nactuellement configurée pour localiser\nl'individu que recherche cette jeune\npersonne.\nDois‐je régler la <sound 4><color red<détection >coloroff>pour réagir\nà un <color red<individu capable de labourer un\nchamp>coloroff>?\n[1-]Oui, merci![2]Pas\nmaintenant")
/*<237>*/ 									switch (choice(2)) {
          									  case 0:
/*<239>*/ 										story_flags[680 /* us: 805A9B1E 0x20, jp: 805ACD9E 0x20 */] = true;
/*<240>*/ 										story_flags[668 /* us: 805A9B1E 0x04, jp: 805ACD9E 0x04 */] = false;
/*<241>*/ 										story_flags[669 /* us: 805A9B1E 0x08, jp: 805ACD9E 0x08 */] = false;
/*<242>*/ 										story_flags[670 /* us: 805A9B1E 0x10, jp: 805ACD9E 0x10 */] = false;
/*<243>*/ 										story_flags[681 /* us: 805A9B1E 0x40, jp: 805ACD9E 0x40 */] = false;
/*<244>*/ 										story_flags[682 /* us: 805A9B1E 0x80, jp: 805ACD9E 0x80 */] = false;
/*<575>*/ 										open_dowsing_wheel(15)
/*<576>*/ 										printf(/* textboxtype: 2, unk: 0, line: 39 */ "Très bien, <0x10012:0x00000005>Maître.\n\n\n\nLa <sound 4><color red<fonction détection >coloroff>est à présent\nconfigurée pour réagir à l'individu\nrecherché par cette jeune fille.")
          										flw_245:
/*<245>*/ 										{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 36}
          									  case 1:
/*<238>*/ 										printf(/* textboxtype: 2, unk: 0, line: 40 */ "Très bien, <0x10012:0x00000005>Maître.\nLa configuration de la <sound 4>fonction\ndétection est annulée.")
          										goto flw_245
          									}
          								}
          							}
          						}
          					  case 1:
/*< 97>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 99, 'param3': 31}
/*< 99>*/ 						printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000001>Salut! Merci encore pour ton aide de\nl'autre jour, avec les citrouilles.\n\n\nNous sommes presque prêts à en\nplanter de nouvelles!\n\n\n<0x10009:0x00010100><pause 30>Le problème, c'est qu'il faut d'abord\nlabourer la terre...\n<0x10009:0x000b0e00>Et toute seule, c'est pas facile...\n\n<0x10009:0x00070700>Mais où pourrais‐je bien trouver\nquelqu'un qui sache labourer?\n[1-]Je sais![2]Aucune\nidée...")
/*<101>*/ 						switch (choice(2)) {
          						  case 0:
/*<103>*/ 							printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x00070809>C'est vrai? Il faut vraiment que je\nfasse venir cette personne ici pour\nm'aider.\n\n<0x10009:0x00010700>Si jamais tu croises cette personne à\nnouveau, envoie-la-moi! Veux-tu?")
/*<120>*/ 							{'type': 'type3', 'subType': 1, 'param1': 45, 'param2': 0, 'next': 119, 'param3': 51}
/*<119>*/ 							printf(/* textboxtype: 2, unk: 0, line: 35 */ "La probabilité que cette quête ait un\nrapport avec l'obtention de <color yellow<cristaux\nde gratitude >coloroff>est de 90 %.\n\nJe peux ajouter l'individu capable de\nlabourer le champ de cette jeune fille\naux cibles à <sound 4><color red<détecter>coloroff>.\n\nToutefois, si vous êtes à la recherche\nd'un autre objet pour quelqu'un\nd'autre, cet objet sera retiré de la\nliste des cibles à détecter.\nVoulez‐vous que je règle la détection\npour réagir à un <color red<individu capable de\nlabourer un champ>coloroff>?\n[1-]S'il te plaît[2]Pas encore")
/*<594>*/ 							switch (choice(2)) {
          							  case 0:
/*<595>*/ 								printf(/* textboxtype: 2, unk: 0, line: 37 */ "<0x10012:0x00000005>Très bien, Maître.\nJ'ai enregistré l'<color red<individu capable de\nlabourer un champ>coloroff>.")
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
/*<573>*/ 								printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0001070f>J'espère que tu ne dis pas ça\njuste pour me rassurer...\n\n\n<0x10009:0x00070700>Bon, un peu d'optimisme n'a jamais tué\npersonne, de toute façon. J'attendrai\npatiemment ton ami ici.")
          							  case 1:
/*<596>*/ 								printf(/* textboxtype: 2, unk: 0, line: 36 */ "<0x10012:0x00000005>Très bien, Maître.\nSi vous souhaitez régler la détection,\nparlez à nouveau à cette jeune fille.")
          								goto flw_572
          							}
          						  case 1:
/*<102>*/ 							printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x00011611>Non, mais!! Ne viens pas me dire que ça\nne te dérange pas de savoir qu'une jolie\nfille comme moi est obligée de\ns'éreinter à labourer son champ!\nQuand je pense que je te prenais\npour un noble chevalier... Hmf!")
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
/*< 85>*/ 				printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x00000001>Tiens, si c'est pas le chevalier qui a\ndétruit notre lustre de luxe! Tu essaies\ntoujours de le rembourser?\n\n<0x10009:0x00010700>Ah tiens, ça me revient!<pause 30> Papa disait\njustement qu'il avait du travail pour\ntoi. Ça tombe bien!\n\n<0x10009:0x00070700>Tu devrais aller le voir, il te donnera\nsûrement quelque chose à faire!")
          			  case 1:
/*<541>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00000001>Tiens, mais c'est le chevalier qui\na détruit notre lustre de luxe! Tu\nessaies toujours de le rembourser?\n\n<0x10009:0x00010700>Ça me fait penser qu'il sera bientôt\ntemps de récolter les citrouilles...<pause 30>\n\n\n<0x10009:0x00070700>Je me demande bien comment je vais\nfaire pour soulever toutes ces grosses\ncitrouilles... Elles sont si lourdes!")
          			}
          		}
          	}
          }

          void entrypoint_117_19() {
/*<291>*/ 	start()
/*<175>*/ 	printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000000c>Wouhou! C'est parti!")
          }

          void entrypoint_117_53() {
/*<355>*/ 	start()
/*<356>*/ 	set_camera(13, 0)
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 359, 'param3': 40}
/*<359>*/ 	wait_frames(45)
/*<361>*/ 	set_camera(14, 0)
/*<360>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 358, 'param3': 40}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_02() {
/*<  8>*/ 	start()
/*< 32>*/ 	switch (context_related2(0)) {
          	  case 0:
/*<  9>*/ 		printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00130809>Tu as réussi, j'en étais sûre!\n\n\n\n<0x10009:0x00010700>Très bien, je te laisse tranquille avec\nmes citrouilles maintenant!\n\n\n<0x10009:0x00190800>Merci <pause 15>de <pause 15>tout <pause 15>cœur<pause 15>!")
          	  case 1:
/*< 33>*/ 		printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh non! Il faudrait que tu fasses un\npeu plus attention, quand même!\n\n\n<0x10009:0x00070700>Viens par ici si tu veux réessayer.")
          	}
          }

          void entrypoint_117_54() {
/*<362>*/ 	start()
/*<526>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 527, 'param3': 32}
/*<527>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 363, 'param3': 17}
/*<363>*/ 	set_camera(15, 0)
/*<364>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 366, 'param3': 40}
/*<366>*/ 	wait_frames(45)
/*<368>*/ 	set_camera(16, 0)
/*<367>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 365, 'param3': 40}
/*<365>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_03() {
/*<  7>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00011611>Oh non! Il faudrait que tu fasses un\npeu plus attention, quand même!\n\n\n<0x10009:0x00070700>Viens par ici si tu veux réessayer.")
          }

          void entrypoint_117_20() {
/*< 11>*/ 	start()
/*<104>*/ 	switch (story_flags[290 /* us: 805A9AFA 0x10, jp: 805ACD7A 0x10 */]) {
          	  case 0:
/*<409>*/ 		switch (zone_temp_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<106>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00101604>Regarde ce que tu as fait!\nJe n'aurais jamais dû t'en parler! Mais\nje voulais seulement m'assurer que tu\nn'y toucherais pas!\n<0x10009:0x001a1600>Mon père va t'en faire voir de toutes\nles couleurs! Mais... Ce n'est pas ma\nfaute. Rappelle-toi de ça!")
          		  case 1:
/*<537>*/ 			switch (story_flags[291 /* us: 805A9AFA 0x20, jp: 805ACD7A 0x20 */]) {
          			  case 0:
/*<410>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000001>Tiens, bonjour!\n\n\n\nMon père m'a raconté que tu devais\nrembourser le lustre que tu as brisé.\n\n\n<0x10009:0x001a0800>Ça va prendre du temps, mais tu vas\ny arriver!")
          				flw_491:
/*<491>*/ 				switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          				  case 0:
          				  case 1:
/*<490>*/ 					switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          					  case 0:
/*<492>*/ 						printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x001a1000>Quoi? Il est arrivé quelque chose\nà Narisha?\n\n\nÀ bien y penser, il me semble que\nmon père lui préparait de la soupe\nde citrouille, à une époque. Il\npourrait peut‐être te conseiller...")
          					  case 1:
          					}
          				}
          			  case 1:
/*<538>*/ 				printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00101604>Regarde ce que tu as fait!\nJe n'aurais jamais dû t'en parler! Mais\nje voulais seulement m'assurer que tu\nn'y toucherais pas!\n<0x10009:0x001a1600>Mon père va t'en faire voir de toutes\nles couleurs! Mais... Ce n'est pas ma\nfaute. Rappelle-toi de ça!")
          				goto flw_491
          			}
          		}
          	  case 1:
/*<489>*/ 		switch (story_flags[368 /* us: 805A9B03 0x40, jp: 805ACD83 0x40 */]) {
          		  case 0:
          			flw_105:
/*<105>*/ 			printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Ah, tiens, bonjour! Je devine à ton\nélégant costume que tu es un chevalier\nde Célesbourg...\n\n<0x10009:0x001a0800>Viens donc t'asseoir un instant!\n\n\n\n<0x10009:0x000d0700>As‐tu vu les rubis placés sur le lustre?\n\n\n\n<0x10009:0x00100000>Ne va pas te mettre dans la tête \nd'aller les récupérer.\n\n\nCe serait sûrement possible de les\nfaire tomber en faisant vaciller le\nlustre avec un choc bien placé...\n\n<0x10009:0x001a1600>Mais <0x10006:0xfccd>n'y pense même pas<0x10006:0x00cd>!")
          		  case 1:
/*<487>*/ 			switch (story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */]) {
          			  case 0:
/*<488>*/ 				printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Tiens, bonjour!\n\n\n\nBienvenue à la Citrouille perchée!\nMets‐toi à l'aise!\n<pause 30>Tout va bien? Tu as l'air nerveux.")
          			  case 1:
          				goto flw_105
          			}
          		}
          	}
          }

          void entrypoint_117_55() {
/*<369>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 372, 'param3': 40}
/*<372>*/ 	wait_frames(45)
/*<374>*/ 	set_camera(17, 0)
/*<373>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 371, 'param3': 40}
/*<371>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_04() {
/*<163>*/ 	start()
/*<161>*/ 	printf(/* textboxtype: 1, unk: 0, line: 141 */ "Voici le vieux Mogma!")
          }

          void entrypoint_117_21() {
/*<247>*/ 	start()
/*<248>*/ 	switch (context_related4(1)) {
          	  case 0:
/*<249>*/ 		printf(/* textboxtype: 1, unk: 0, line: 158 */ "<0x10009:0x00171411>Hmm, je suis déçue, je pensais que ton\ninstrument produirait un bien plus\nbeau son... Il est si joli!\n\n<0x10009:0x00011600>Et nos clients n'ont pas eu l'air\nà apprécier, eux non plus.")
          		flw_252:
/*<252>*/ 		scene_flags[21 'The Sky'][21 /* 0x3 20 */] = true;
/*<384>*/ 		story_flags[675 /* us: 805A9B20 0x10, jp: 805ACDA0 0x10 */] = false;
          	  case 1:
/*<599>*/ 		printf(/* textboxtype: 1, unk: 0, line: 161 */ "<0x10009:0x00171411>Bon... Et bien... Tu as réussi à jouer\njusqu'au bout, c'est vrai.\n\n\n<0x10009:0x00011600>Mais pour être honnête, je m'attendais\nà mieux.")
          		goto flw_252
          	  case 2:
/*<250>*/ 		printf(/* textboxtype: 1, unk: 0, line: 159 */ "<0x10009:0x00161309>Eh bien! Tu es un excellent musicien!\nJe t'ai sous‐estimé, on dirait.\n\n\n<0x10009:0x00070700>J'espère avoir l'occasion de chanter\nà nouveau avec toi un jour!")
          		goto flw_252
          	  case 3:
/*<251>*/ 		printf(/* textboxtype: 1, unk: 0, line: 160 */ "<0x10009:0x00150d0a>Tu as été exceptionnel!\nTa musique était plus belle encore que\nma ravissante voix!\n\n<0x10009:0x00070800>Je suis officiellement ton admiratrice\ninconditionnelle! Je ne rêve plus que\nde t'entendre jouer encore.")
          		goto flw_252
          	}
          }

          void entrypoint_117_56() {
/*<375>*/ 	start()
/*<528>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 529, 'param3': 32}
/*<529>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 376, 'param3': 17}
/*<376>*/ 	set_camera(18, 0)
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 379, 'param3': 40}
/*<379>*/ 	wait_frames(45)
/*<381>*/ 	set_camera(19, 0)
/*<380>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 0, 'next': 378, 'param3': 40}
/*<378>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_117_05() {
/*<164>*/ 	start()
/*<162>*/ 	printf(/* textboxtype: 1, unk: 0, line: 142 */ "Mes hommages à Fay,\nma princesse azur!")
          }

          void entrypoint_117_22() {
/*<253>*/ 	start()
/*<329>*/ 	switch (story_flags[688 /* us: 805A9B21 0x20, jp: 805ACDA1 0x20 */]) {
          	  case 0:
/*<330>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<331>*/ 			printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x000a090d>Mais qu'est‐ce qui t'a pris? C'était\ntellement affreux que même la voix\npure de ma fille n'a pas pu sauver\nle spectacle! \n<0x10009:0x000d0000>Écoute‐moi bien, mon garçon. Ce n'est\npas avec ce genre de prestation que\nj'vais te payer, tu peux me croire!")
          		  case 1:
/*<600>*/ 			printf(/* textboxtype: 1, unk: 0, line: 171 */ "<0x10009:0x00000010>Hmm... Tu pourrais pas essayer de\nte forcer un peu plus? Je peux pas te\npayer pour une prestation comme\ncelle‐là!")
          		  case 2:
/*<333>*/ 			printf(/* textboxtype: 1, unk: 0, line: 168 */ "<0x10009:0x0000000e>C'était pas mal. Essaie de jouer encore\nun peu mieux la prochaine fois, je sens\nque tu pourrais bien impressionner\nma fille.\n<0x10009:0x000e0700>Voilà ton cachet : <color red<20 rubis>coloroff>!")
/*<334>*/ 			rupees += 20;
          		  case 3:
/*<332>*/ 			printf(/* textboxtype: 1, unk: 0, line: 169 */ "<0x10009:0x000b100c>Impressionnant, <heroname>!\nC'était fantastique!\n<0x10009:0x000c0700>Tiens, tu as bien mérité <color red<50 rubis>coloroff>!")
/*<335>*/ 			rupees += 50;
          		}
          	  case 1:
/*<255>*/ 		switch (context_related4(0)) {
          		  case 0:
/*<254>*/ 			printf(/* textboxtype: 1, unk: 0, line: 162 */ "<0x10009:0x000f0a0d>Ciel! Mais qu'est‐ce qui te prend?\nTu appelles ça de la musique?\n\n\n<0x10009:0x000a0900>Ne me regarde pas comme ça! Si tu\npenses qu'on est quittes, tu te trompes.\nTon interprétation était épouvantable! \nIl va falloir que tu te reprennes.")
          		  case 1:
/*<601>*/ 			printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00000010>Mouais, c'était pas sensationnel comme\nprestation. Je peux pas dire que je suis\nsatisfait, mais comme c'était ta\npremière fois, on va dire que c'est bon.")
          			flw_258:
/*<258>*/ 			printf(/* textboxtype: 1, unk: 0, line: 165 */ "<0x10009:0x000b0700>Je crois que tu en as suffisamment\nfait pour réparer ta gaffe! Bravo!\n\n\n<0x10009:0x000e1100>Il est temps que je m'achète un\nnouveau lustre!\n\n\n<0x10009:0x000d0700>Et comme tu as vraiment dépassé mes\nattentes, tu mérites une récompense.\nTiens, c'est pour toi!")
/*<534>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 305, 'param3': 42}
/*<305>*/ 			give_item(94 0x5E);
/*<304>*/ 			printf(/* textboxtype: 1, unk: 0, line: 166 */ "<0x10009:0x00010700>N'hésite pas à passer nous voir.\nEn tant que client, cette fois!")
/*<259>*/ 			story_flags[296 /* us: 805A9AFD 0x04, jp: 805ACD7D 0x04 */] = true;
          		  case 2:
/*<256>*/ 			printf(/* textboxtype: 1, unk: 0, line: 163 */ "<0x10009:0x0000000e>Pas si mal, pas si mal!\nDisons que ça fait l'affaire.")
          			goto flw_258
          		  case 3:
/*<257>*/ 			printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x000b100c>C'était absolument... exaltant!\nJe crois même avoir versé une larme!\nJe ne me serais jamais douté que tu\npouvais jouer comme ça!")
          			goto flw_258
          		}
          	}
          }

          void entrypoint_117_57() {
/*<443>*/ 	start()
/*<465>*/ 	switch (zone_temp_flags[3 /* 0x1 08 */]) {
          	  case 0:
/*<466>*/ 		printf(/* textboxtype: 1, unk: 0, line: 192 */ "<0x10009:0x0003080c>Oh non! Mais quelle mouche t'a\npiqué?\n\n\n<0x10009:0x00000100>Tu t'es mis dans de beaux draps...")
          	  case 1:
/*<579>*/ 		switch (story_flags[131 /* us: 805A9AE4 0x02, jp: 805ACD64 0x02 */]) {
          		  case 0:
/*<584>*/ 			printf(/* textboxtype: 1, unk: 0, line: 193 */ "<0x10009:0x00000001>Hé, <heroname>!\nSi t'as trop d'insectes et que tu sais\nplus quoi en faire, donne‐les-moi!\n\n<0x10009:0x00120000>Mais pas ici. Il y a beaucoup trop de\nmonde. Tu ferais mieux de me les\napporter la nuit dans ma chambre,\nà l'école.")
          		  case 1:
/*<578>*/ 			switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          			  case 0:
/*<581>*/ 				switch (zone_temp_flags[5 /* 0x1 20 */]) {
          				  case 0:
/*<583>*/ 					printf(/* textboxtype: 1, unk: 0, line: 195 */ "<0x10009:0x00120001>Passer dans les trous des rochers te\npermet de te déplacer beaucoup\nplus vite dans le ciel!\n\n<0x10009:0x00030104>Par contre, si tu fonces dans les\nrochers, t'obtiendras l'effet inverse!\nHéhéhé...")
          				  case 1:
/*<580>*/ 					printf(/* textboxtype: 1, unk: 0, line: 194 */ "<0x10009:0x00000001>Salut, <heroname>.\nJ'ai quelque chose à te dire...\n\n\nT'as déjà remarqué les <color red<rochers avec\nun trou à l'intérieur>coloroff>, en volant?\n\n\nLes trous sont dotés d'un pouvoir\nmystérieux, et si tu passes dedans,\nt'accélères <color red<pendant un instant>coloroff>!\n\n<0x10009:0x00120000>Les chevaucheurs expérimentés\nutilisent souvent cette technique pour\nse déplacer plus vite.")
/*<582>*/ 					zone_temp_flags[5 /* 0x1 20 */] = true;
          				}
          			  case 1:
/*<444>*/ 				printf(/* textboxtype: 1, unk: 0, line: 189 */ "<0x10009:0x00000001>Salut, <heroname>!\n\n\n\n<0x10009:0x00120000>Je pensais pas te croiser par ici! Tu te\ndemandes sûrement ce que je fais là!\n[1-]Oui[2-]En fait, non")
/*<445>*/ 				switch (choice(2)) {
          				  case 0:
/*<446>*/ 					printf(/* textboxtype: 1, unk: 0, line: 190 */ "<0x10009:0x00030104>J'ai déjà dû te le dire, mais j'adore\nles insectes.\n\n\nC'est pour ça que je suis venu ici, je\ncrois pouvoir en trouver quelques‐uns.\n\n\n<0x10009:0x00040100>Si t'as un filet, tu peux\nessayer d'en attraper, toi aussi, c'est\nintéressant.\n\nHéhéhé ! Si t'en as pas, tu peux\ntoujours en acheter un chez Beedle.\n\n\n<0x10009:0x00120100>Il est sûrement en train de faire sa\ntournée du côté de Célesbourg.")
          				  case 1:
/*<447>*/ 					printf(/* textboxtype: 1, unk: 0, line: 191 */ "<0x10009:0x00040805>Comment ça, non?\n\n\n\n<0x10009:0x00040100>Tant pis pour toi. Je le savais que tu\nn'étais pas un entomologiste comme\nmoi!")
          				}
          			}
          		}
          	}
          }

