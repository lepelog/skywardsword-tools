          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<254>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDPartez!\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<155>*/ 	start()
/*<288>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<289>*/ 		printf("\x0E\x01\x09\x04\x00\x01La statue de la Déesse a bel et bien disparu,\nmais la Déesse, elle, restera toujours en\nchacun d'entre nous!\n\nTu ne crois pas, Link?")
          	  case 1:
/*<281>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<282>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tu as l'air d'avoir pris beaucoup de maturité.\nContinue comme ça!")
          		  case 1:
/*<277>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<280>*/ 				printf("\x0E\x01\x09\x04\x00\x01Pardon? Le grand Narisha?<pause28> Oui, j'en ai\nentendu parler, mais...\n\n\nJe ne sais pas grand\x2010chose à son sujet, désolé.\n\n\n\nPour ce genre de chose, il faut t'adresser à\n<b<maître Arfan>>, ton professeur de travaux\npratiques!")
          			  case 1:
/*<278>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<279>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ah, Miou est vraiment adorable.<pause1E> Comment?\nLa Triforce?<pause28> Quel rapport ça a avec Miou?")
          				  case 1:
/*<156>*/ 					printf("\x0E\x01\x09\x04\x00\x01J'ai commencé à m'occuper de la petite Miou\nà la demande du directeur...\n\n\nElle est si mignonne que j'ai presque envie\nde l'adopter!")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<150>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 152, 'param3': 50}
/*<152>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 149, 'param3': 49}
/*<149>*/ 	make_actor_do_something(0, 10)
/*<151>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDHé, Link! Par ici!")
/*< 57>*/ 	set_camera(11, 0)
/*<243>*/ 	make_actor_do_something(1, 10)
/*<212>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 260, 'param3': 17}
/*<260>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<261>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Bonjour, Link. Alors, tu as décidé\nde tenter le <r<mode héroïque>>? C'est très\ncourageux.\n\nLa <r<chevauchée céleste>> a lieu aujourd'hui. Tu te\nsens d'attaque?\n\n\nJ'ai quelque chose à te demander, alors\n<g<cible\x2010moi>> pour me parler.")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*<291>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 253, 'param3': 60}
/*<253>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 293, 'param3': 42}
/*<293>*/ 		scene_flags[0 'Skyloft'][27 /* 0x2 08 */] = true;
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Bonjour, Link. La <r<chevauchée\ncéleste>> a lieu aujourd'hui. Tu te sens d'attaque?\n\n\nJ'ai quelque chose à te demander, alors\n<g<cible\x2010moi>> pour me parler.")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<185>*/ 	start()
/*<191>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 189, 'param3': 32}
/*<189>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 186, 'param3': 13}
/*<186>*/ 	printf("\x0E\x01\x08\x02\x1CDHé oh, Link!")
/*<187>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202Monter sur le toit simplement en <g<fonçant >>me\nsemble impossible, même pour toi.")
/*<190>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 192, 'param3': 17}
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 188, 'param3': 6}
/*<188>*/ 	set_camera(19, 0)
/*<229>*/ 	printf("Il doit y avoir une grosse caisse en bois non\nloin, <g<déplace\x2010la en la saisissant >>avec (A) puis\nsers\x2010t'en comme appui.\n\n<g<Fonce>> dessus ou incline \x0E\x02\x04\x02\x9CD pour monter dessus.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<266>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<267>*/ 		printf("")
/*<269>*/ 		switch (choice(2)) {
          		  case 0:
/*<270>*/ 			printf("")
          		  case 1:
/*<268>*/ 			printf("")
          		}
          	  case 1:
/*<265>*/ 		printf("")
          	}
          }

          void entrypoint_108_22() {
/*<207>*/ 	start()
/*<209>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<210>*/ 		printf("\x0E\x01\x09\x04\x00\x01Nous commencerons la cérémonie quand tu\nauras retrouvé ton célestrier.\n\n\nNe t'inquiète pas et pars à sa recherche!")
          	  case 1:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01La chevauchée céleste a été reportée pour\nque tu puisses retrouver ton oiseau.\n\n\nNe t'inquiète surtout pas.")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Hé oh! Pour qui tu te prends,\nLink? Écoute un peu\nce que te dit ton professeur!\n\n<r<Cible\x2010moi>> et parle\x2010moi!")
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 60}
          }

          void entrypoint_108_23() {
/*<216>*/ 	start()
/*<224>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<225>*/ 		printf("\x0E\x01\x09\x04\x00\x01Et puis, Link? Tout se passe bien\npour toi?\n\n\nSi tu as un problème, n'hésite pas à m'en parler!")
          	  case 1:
/*<220>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<223>*/ 			printf("\x0E\x01\x09\x04\x00\x01L'attaque tornade demande un très grand effort\npour les oiseaux.\n\n\nMais avec ton célestrier vermeil, ça ne devrait\npas poser de problème!")
          		  case 1:
/*<219>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<222>*/ 				printf("\x0E\x01\x09\x04\x00\x05Qu'est-ce que tu fais dehors à cette heure si\ntardive, Link?\n\n\nQu'est-ce que tu racontes? Le grand Narisha?\nCe n'est pas le moment d'en parler, il se fait\nbien tard...\n\nReviens plutôt demain, et je te raconterai ce\nque je sais.")
          			  case 1:
/*<218>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<221>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, Link... Tu es sur la piste\nde Zelda?\n\n\nJe suis sûr que toi, tu peux la retrouver!")
          				  case 1:
/*<217>*/ 					printf("\x0E\x01\x09\x04\x00\x01La nuit, tu ne peux pas chercher Zelda, parce\nque les chevaucheurs normaux ne sont pas\nautorisés à voler.\n\nRepose\x2010toi cette nuit, et tu pourras repartir\ndemain!\n\n\nTon rendement sera bien meilleur si ton corps\net ton esprit sont frais et dispos.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CDHé oh! \x0E\x03\x01\x00Link!\n\n\n\n\x0E\x01\x08\x02\x2CDTu vas y arriver?")
          }

          void entrypoint_108_24() {
/*<231>*/ 	start()
/*<244>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<237>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ce n'est pas le moment de t'amuser,\nLink. Va plutôt à la recherche\nde ton célestrier!\n\nCommence par demander à tes camarades à\nl'intérieur s'ils savent quelque chose.")
          	  case 1:
/*<238>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<245>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link! Ne fais pas semblant de ne\npas m'avoir vu!\n\n\nViens un peu par ici!")
          		  case 1:
/*<232>*/ 			printf("\x0E\x01\x09\x04\x00\x02Voyons, Link! Tu ignores ton\nprofesseur?\n\n\nViens plutôt par ici, et écoute ce que j'ai à\nte dire.")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 75>*/ 	start()
/*< 87>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<208>*/ 		printf("")
          	  case 1:
/*< 82>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 84>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 76, 'param3': 31}
/*< 76>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link. Comment se passe la\nrecherche de Zelda? Tu l'as trouvée?\n\n\n\x0E\x01\x09\x04\x00\x05Quoi? <pause28>Le grand Narisha? C'est le directeur\nqui t'en a parlé?\n\n\nOui, il se trouve bien à l'intérieur\ndu cumulonimbus.\n\n\nMais\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í<pause19> il ne s'agit plus du Narisha que nous\nconnaissions... \x0E\x01\x06\x02\xFECDIl est devenu...<pause28>\x0E\x01\x06\x02\x1CD un <r<monstre>>!\n\n\n\x0E\x01\x09\x04\x00\x0FIl a la même apparence qu'auparavant, mais\nlorsque j'ai essayé de l'approcher, il s'est rué\nsur moi!\n\nJ'ai vu dans ses yeux... un regard plein de\nhargne. Est\x2010ce qu'il a réellement changé...\n\n\n\x0E\x01\x06\x02\xFECDOu bien...\x0E\x01\x06\x02Í<pause19> Est\x2010il possédé? <pause19>Oui, j'ai eu\ncette impression.")
/*<202>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 77, 'param3': 6}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x05Quoi? <pause28>Tu voudrais parler à Narisha?\n\n\n\n\x0E\x01\x06\x02\xFECDC'est...\x0E\x01\x06\x02Í impossible. Dans son état, il n'est plus en\nmesure de comprendre le langage des humains.\n\n\n\x0E\x01\x06\x02\xFECDDe plus...\x0E\x01\x06\x02Í même si tu réussissais à t'en\napprocher, il t'enverrait probablement\nchoir la tête la première dans une mer\nde nuages. Et pas en douceur.")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 200, 'param3': 6}
/*<200>*/ 			printf("\x0E\x01\x09\x04\x00RQuoi?<pause28> Tu souhaites le rencontrer quand même?\n\n\n\n\x0E\x01\x06\x02\xFECDJe vois...\x0E\x01\x06\x02Í Tu penses qu'il pourrait t'aider à\nretrouver Zelda?\n\n\nJe comprends.<pause1E> Il ne m'appartient donc pas\nde tenter de t'arrêter.")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("Oh, il me vient une idée. Suis\x2010moi!")
/*< 85>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 86>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<275>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<276>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, Link! <pause1E>Pardon?\nLa Triforce?\n\n\nDésolé, je ne peux pas t'aider. Va donc\ndemander au directeur...")
          			  case 1:
/*< 83>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, Link! Comment se passe la\nrecherche de Zelda?\n\n\n\nCela me chagrine que tu doives accomplir\ncette tâche seul... Mais tu dois la retrouver!")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 78>*/ 	start()
/*< 79>*/ 	printf("\x0E\x01\x09\x04\x00\x02À l'intérieur du cumulonimbus, le grand\nNarisha avait l'air possédé...\n\n\nEn éliminant la source du mal de son corps,\nil est peut\x2010être possible de rendre à Narisha\nson esprit d'antan.\n\n\x0E\x03\x01\x00Link! Je vais t'apprendre la\ntechnique secrète des chevaucheurs de\ncélestrier...\n\n\x0E\x01\x09\x04\x00\x03L'<r<attaque tornade>>!")
/*<258>*/ 	set_camera(22, 0)
/*<256>*/ 	printf("L'attaque tornade est une puissante attaque,\ngrâce à laquelle tu pourras éliminer le mal\nqui infecte Narisha!\n\nIl te suffira d'appuyer sur \x0E\x02\x04\x02\x1ECD pour la réaliser...\x0E\x01\x11\x02\x10CD\n\n\n\nMais comme elle provoque une accélération\nplus longue que l'<r<attaque >>normale, ton oiseau\nsera plus difficile à contrôler...\n\nC'est une technique de haut vol, réservée à\nl'élite des chevaucheurs.\n\n\nC'est un peu tôt pour toi, mais... <pause1E>le temps est\nvenu de tester tes compétences.")
/*<259>*/ 	set_camera(-1, 0)
/*<257>*/ 	printf("\x0E\x01\x09\x04\x00\x04Commence par plonger et appeler ton oiseau!")
/*< 93>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 98>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<248>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 90>*/ 	start()
/*<128>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<129>*/ 		printf("\x0E\x01\x09\x04\x00\x0FJe suis désolé, pour Zelda...\n\n\n\nMais ne te sens pas coupable, c'était un\naccident, je le sais...")
          	  case 1:
/*<127>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<196>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<198>*/ 				printf("\x0E\x01\x09\x04\x00\x01Laisse\x2010nous nous occuper de la cérémonie,\net va plutôt chercher ton oiseau!")
          			  case 1:
/*<126>*/ 				printf("\x0E\x01\x09\x04\x00\x0FQu'est-ce qui t'arrive, Link?\n<pause1E>Ton oiseau ne répond plus à ton appel?\n\n\nÉtrange, en temps normal un célestrier\nrépond toujours à l'appel de son maître\x0E\x01\x06\x02\xFECD...\n\n\nTu en as déjà parlé à maître <b<Hulul>>, le\nresponsable de la chevauchée d'aujourd'hui?\n\n\nAh, le directeur est déjà au courant!\nTout devrait bien se passer, dans ce cas.\n\n\nQuant à toi, dépêche\x2010toi de trouver ton oiseau!")
/*<199>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<194>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<195>*/ 				printf("\x0E\x01\x09\x04\x00\x01Au fait, c'est toi qui nous confonds souvent,\nnon? Maître <b<Hulul>>, le professeur qui s'occupe\ndes cours théoriques, a les cheveux bruns... \n\nEt moi qui ai les cheveux blancs, je suis maître\n<b<Arfan>>, ton professeur de pratique.\nNe l'oublie pas!")
          			  case 1:
/*< 91>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link. Le jour de la\n<r<chevauchée céleste >>est enfin arrivé!\n\n\nSouviens\x2010toi bien de mes leçons de pratique,\net des leçons de théorie de maître <b<Hulul>>!\n\n\nD'ailleurs, te souviens\x2010tu que tu peux appuyer\nsur (^) pour passer en <r<vue subjective>>?\x0E\x01\x11\x02\x8CD\n\n\nDonc quand tu veux observer ton\nenvironnement, <g<appuie>> sur \x0E\x02\x04\x02\x22CD!\x0E\x01\x11\x02\x8CD")
/*<197>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<122>*/ 	start()
/*<162>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<272>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<274>*/ 			printf("\x0E\x01\x09\x04\x00\x01Existe\x2010t\x2010il vraiment un monde au-delà\ndes nuages?\n\n\nEt même s'il existe, j'imagine que\ncontrairement à ici, où la végétation\nest luxuriante, ce ne doit être qu'une\nterre désolée...")
          		  case 1:
/*<271>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<273>*/ 				printf("\x0E\x01\x09\x04\x00\x01Alors, est\x2010ce que tes recherches pour retrouver\nZelda avancent?\n\n\nSi tu es fatigué, allonge\x2010toi dans un lit. Tu peux\ndormir jusqu'à ce que la nuit tombe et tes c\x153urs\nseront restaurés!")
          			  case 1:
/*<166>*/ 				printf("\x0E\x01\x09\x04\x00\x01Fais bien attention à toi! Le sort de Zelda est\nentre tes mains!")
          			}
          		}
          	  case 1:
/*<167>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 123, 'param3': 31}
/*<123>*/ 		printf("\x0E\x01\x09\x04\x00\x11J'ai entendu dire que tu partais à la recherche\nde Zelda sous les nuages!\n\n\nLe directeur m'a dit qu'il y avait une terre,\nlà en dessous... Que sais\x2010tu de cette terre?")
/*<168>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<170>*/ 			printf("Alors voici l'épée dont j'ai entendu parler...\nMais sans bouclier<pause0A>.<pause0A>.<pause0A>.<pause0A> Bon, tu as un bouclier,\ntrès bien...\n\nTiens, voici un petit cadeau d'adieu.")
          			flw_171:
/*<171>*/ 			give_item(4 0x04);
/*<255>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 172, 'param3': 12}
          			flw_172:
/*<172>*/ 			printf("Si tu ne sais pas te servir de ton bouclier,\ndemande des conseils au <b<capitaine des\nchevaliers >>qui se trouve à la salle\nd'escrime.")
/*<165>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<213>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<214>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<215>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<246>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<247>*/ 				printf("Oh, et voici donc l'épée dont j'ai entendu\nparler... Mais sans bouclier, ta défense\nn'est pas assurée.\n\nOh, tu ne peux rien porter de plus! Bon, tant\npis, prends tout de même ce cadeau d'adieu!")
          				goto flw_171
          			  case 1:
/*<169>*/ 				printf("Oh, et voici donc l'épée dont j'ai entendu\nparler... Mais sans bouclier, ta défense\nn'est pas assurée.\n\nAlors prends donc celui\x2010ci!")
/*<163>*/ 				give_item(116 0x74);
/*<164>*/ 				printf("Le bouclier de bois est léger et facile à\nutiliser, mais c'est le moins solide d'entre\ntous, et il est vulnérable au feu.\n\nSi jamais il se brise, tu peux en racheter un\nau bazar.\n\n\nPour équiper ton bouclier, <g<maintiens \x0E\x02\x04\x02\x28CD\nenfoncé>>, choisis le bouclier que tu veux\npuis relâche \x0E\x02\x04\x02\x28CD.\x0E\x01\x11\x02\xECD")
          				goto flw_172
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 94>*/ 	start()
/*<205>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<206>*/ 		printf("")
          	  case 1:
/*< 96>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 80>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, tu as réussi à détruire dix cibles dans le\ntemps imparti!\n\n\nVous avez brillamment démontré vos\ncompétences, ton célestrier vermeil et toi!\n\n\nJe t'autorise donc à utiliser l'attaque tornade\ndes véritables chevaucheurs!")
/*< 81>*/ 			printf("Il te reste à trouver le grand Narisha...\n\n\n\nPour cela, va parler au <r<patron de la Citrouille\nperchée>>, qui lui offre chaque année de la soupe!\nDemande\x2010lui donc ce qu'il sait.")
/*<106>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 95>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 97>*/ 				printf("\x0E\x01\x09\x04\x00\x0FIl te reste encore des progrès à faire avant de\nréussir à détruire dix cibles en moins de\n<r<120 secondes>>.\n\nRepose\x2010toi un peu, je t'attends ici. Reviens me\nparler quand tu seras prêt à repasser le test!")
/*< 99>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<226>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<227>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<104>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<100>*/ 	start()
/*<102>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<103>*/ 		printf("\x0E\x01\x09\x04\x00\x01La Citrouille perchée est un bistro se trouvant\nau <r<sud\x2010est >>de Célesbourg, sur une petite île.\n\n\nIl y a là\x2010bas <b<Tironne>>, une jeune fille à la\nvoix magnifique... <pause1E>À vrai dire\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í je suis\nun admirateur.\n\nSurtout, ne le dis à personne!")
          	  case 1:
/*<105>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_107:
/*<107>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bien, Link! Souhaites\x2010tu\nt'entraîner à faire l'attaque tornade?\n[1]Oui[2-]Plus tard")
/*<108>*/ 			switch (choice(2)) {
          			  case 0:
/*<109>*/ 				printf("\x0E\x01\x09\x04\x00\x03Bonne réponse! Bien, commençons!\nTu peux plonger dans le ciel.")
/*<111>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<112>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<113>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<250>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<110>*/ 				printf("Tu peux attendre jusqu'à ce que tu te sentes\nprêt!\n\n\nJe vais rester ici un moment, reviens quand\ntu veux!")
/*<252>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<121>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<101>*/ 				printf("\x0E\x01\x09\x04\x00\x01Qu'est-ce qui se passe? Plonge donc!\nOu bien souhaites\x2010tu t'arrêter là?\n[1]Je continue[2-]J'arrête")
/*<116>*/ 				switch (choice(2)) {
          				  case 0:
/*<120>*/ 					printf("\x0E\x01\x09\x04\x00\x03C'est la réponse que j'attendais! Bien,\nenvole\x2010toi dans le ciel.")
/*<249>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<117>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<118>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<119>*/ 					printf("Tu peux attendre jusqu'à ce que tu te sentes\nprêt!\n\n\nJe vais rester ici un moment, reviens quand\ntu veux!")
/*<251>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_107
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<141>*/ 	start()
/*<142>*/ 	printf("Bien, Link!\n\n\n\nJ'ai appris à ton célestrier à <g<tournoyer\n>>lorsque tu appuies sur \x0E\x02\x04\x02\x1ECD.")
          }

          void entrypoint_108_14() {
/*<114>*/ 	start()
/*<115>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<143>*/ 	start()
/*<146>*/ 	printf("Tu dois utiliser l'<r<attaque tornade >>pour détruire\n<r<dix cibles>> parmi les rochers devant toi.")
          }

          void entrypoint_108_15() {
/*<124>*/ 	start()
/*<125>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Où vas\x2010tu?\nLa chevauchée céleste a commencé,\ndépêche\x2010toi de plonger!")
          }

          void entrypoint_108_32() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Si tu parviens à détruire dix cibles en moins\nde <r<120 secondes>>, tu seras un véritable\nchevaucheur!")
          }

          void entrypoint_108_16() {
/*<130>*/ 	start()
/*<283>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<285>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<287>*/ 			printf("\x0E\x01\x09\x04\x00\x16Je me demande bien ce qui a pu se produire\npour que les monstres disparaissent et que les\nLemlys ne soient plus agressifs la nuit...")
          		  case 1:
/*<284>*/ 			printf("\x0E\x01\x09\x04\x00\x0DRegarde ça, Link! C'est la nuit\net pourtant, Miou n'est pas agressive!\n\n\nC'est vraiment fantastique! Trouves-tu?")
/*<286>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<157>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<158>*/ 			printf("\x0E\x01\x09\x04\x00\x16La nuit, je préfère me séparer de la petite\nMiou...\n\n\nUne nuit, je l'ai laissée à l'école... Je préfère\noublier ce qui s'est passé.\n\n\nEn tout cas, ne sors pas la nuit, c'est bien\ntrop dangereux.")
          		  case 1:
/*<131>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ne sors pas trop la nuit, c'est très dangereux!\n\n\n\nMême la petite Miou devient une bête féroce\net sanguinaire...\n\n\nLa nuit, il se passe des choses vraiment\nétranges à Célesbourg...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<145>*/ 	start()
/*<148>*/ 	printf("C'est ça. Vas-y maintenant.")
          }

          void entrypoint_108_17() {
/*<132>*/ 	start()
/*<133>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hé, Link! Où tu vas, comme ça?\n\n\n\nDépêche\x2010toi de plonger et d'appeler\nton célestrier!")
          }

          void entrypoint_108_18() {
/*<134>*/ 	start()
/*<135>*/ 	printf("\x0E\x01\x09\x04\x00\x02Oh, Link!\nTu veux un cours à cette heure\x2010ci?\n[1]Oui[2-]Non...")
/*<136>*/ 	switch (choice(2)) {
          	  case 0:
/*<138>*/ 		printf("Oh, quelle motivation!\n\n\n\nBien, parlons de l'histoire de Célesbourg!\n\n\n\nCélesbourg est une île qui flotte dans le ciel\ndepuis plusieurs millénaires.\n\n\nNos ancêtres ont toujours vécu ici et sur les\nîles voisines.\n\n\n\x0E\x01\x09\x04\x09\xA00Sous la ville s'étend la mer de nuages, d'où\npersonne n'est jamais revenu...\n\n\nOn dit que c'est un vide absolu qui s'étend\nsous les nuages!\n\n\n\x0E\x01\x09\x04\n\xA00Voilà, ce sera tout pour aujourd'hui. Va te\npréparer pour la chevauchée céleste!")
          	  case 1:
/*<137>*/ 		printf("Ah, euh... De toute façon, pas de cours\naujourd'hui, puisque c'est le jour de la\nchevauchée céleste.\n\nTu ferais mieux de sortir te préparer,\nd'ailleurs!")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Je vais voir ce que je peux faire au sujet de la\ncérémonie. Va vite chercher ton oiseau!")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Qu'est-ce qu'il y a, Link? Tu es\ntout pâle...\n\n\nComment?<pause32> Ton célestrier a disparu?\n\n\n\nMais c'est terrible\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Tu penses pouvoir\nle retrouver?\n\n\nJe te conseille de partir à sa recherche tout de\nsuite... <pause28>sinon tu risques de rater la chevauchée\ncéleste!\n\nEt sans ton <r<oiseau>>, tu pourrais y laisser des\n<r<plumes>>\x0E\x01\x06\x02\xFCCD...<pause1E> Haha... Tu comprends?\n\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDAhem...<pause1E>")
/*<159>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<160>*/ 				printf("Oh, le directeur m'appelle?\n\n\n\nEntendu! Je te dois bien ça.\n\n\n\nNe t'en fais pas pour la cérémonie, cours\nchercher ton célestrier!")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<161>*/ 				printf("Hum, c'est peut\x2010être parce que tu n'as pas voulu\nécouter ton maître qu'il t'arrive malheur...\n\n\nBah, oublie ça. Tu dis que le directeur\nm'appelle?\n\n\nTrès bien, ne t'inquiète pas pour la cérémonie\net va vite chercher ton célestrier.")
/*<239>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Je suis content que Miou soit de retour.\n\n\n\nC'est un <b<Lemly>>... \x0E\x01\x09\x04\x00\xA00Ils sont très mignons, mais\nméfie\x2010toi d'eux la nuit!\n[1]Pourquoi?[2]La nuit?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Ah, tu ne sais pas comment les Lemlys se\ncomportent la nuit?\n\n\nC'est une histoire plutôt effrayante...")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Lorsque la nuit tombe sur Célesbourg, un\nétrange pouvoir maléfique s'empare des\npetits animaux comme les Lemlys.\n\nLes monstres normalement tapis dans des\ngrottes ou des endroits sombres sortent\naussi de leur tanière la nuit.\n\nC'est pour cela que personne ici ne sort à la\nnuit tombée, sauf en cas d'absolue nécessité.\n\n\nPour ceux comme toi qui aspirent à être\nchevaliers et sont entraînés à se battre,\nça va encore...\n\nMais reste tout de même prudent!")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 92>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x09\x400Merci pour ton aide, Link.\n\x0E\x01\x09\x04\x0F\x40DTu l'as ramenée saine et sauve!\nJe sais que tu es bien occupé.\n\nBien, je vais nourrir la petite Miou, maintenant.\n")
/*<154>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Rends\x2010toi à la <r<statue de la déesse >>et dis au\ndirecteur que nous l'avons retrouvée.")
/*<240>*/ 				set_camera(21, 0)
/*<241>*/ 				printf("Zelda doit être avec lui. Va vite leur dire!\n\n\n\nMais avant, j'ai une récompense pour toi... Ce\nn'est pas grand\x2010chose, mais c'est de bon c\x153ur!\nÇa reste entre nous, d'accord?")
/*<242>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
/*<292>*/ 				give_item(4 0x04);
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06Qu'est-ce qu'il y a, Link?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("Monte sur le mur en fonçant dessus, et\n<g<accroche\x2010toi >>à la corniche!\n\n\nMais fais attention à ne pas laisser ta <r<jauge\nd'endurance>> se vider complètement quand tu\nes accroché.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400Oh, tu serais d'accord pour ramener Miou?\n[1]Oui[2]Non")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DC'est bien aimable à toi. Désolé de te prendre\nde ton temps! J'apprécie ta gentillesse.")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400Tu devrais pouvoir monter en passant par\nlà\x2010bas. Accroche\x2010toi au rebord et essaie\nd'accéder au toit.\n\n\x0E\x01\x07\x04\xFF00\x00Je compte sur toi!")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<234>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<228>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Je vois...\n\n\n\nDis simplement au directeur que maître <b<Hulul\n>>a trouvé Miou et qu'il peut se rassurer,\nd'accord?")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<230>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Alors, Link, tu souhaites\nt'entraîner avec ton oiseau ce matin?\n\n\nAh, bon?<pause1E> Tu as rendez\x2010vous? <pause1E>Ah, avec <b<Zelda>>,\nbien sûr!")
/*< 42>*/ 						printf("En fait, tu tombes très bien.\n\n\n\nFigure\x2010toi que <r<Miou>>, l'animal de compagnie de\n<b<Gaepora>>, notre directeur d'école, s'est encore\nenfuie...")
/*<236>*/ 						set_camera(12, 0)
/*<235>*/ 						printf("Regarde un peu où elle est allée se cacher!\x0E\x01\n\x04\x10Í\n\n\n\n\x0E\x01\n\x04\xFFFFÍZelda et son père sont trop occupés à préparer\nla cérémonie...\n\n\nJe devais m'occuper de nourrir Miou, mais la\ncérémonie va bientôt commencer, et je ne peux\naller la chercher dans cette tenue...\n\n\x0E\x01\x07\x04\xFF00\x00Tu ne voudrais pas me la ramener?\n[1]D'accord[2]Pas le temps")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Je vois...\n\n\n\nDis simplement au directeur que maître <b<Hulul\n>>a trouvé Miou et qu'il peut se rassurer,\nd'accord?")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<233>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 89>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Arrête un peu de lambiner, et fais ce que je\nte dis!")
          						  case 1:
/*<153>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<173>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 88, 'param3': 17}
/*< 88>*/ 							set_camera(9, 0)
/*<263>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<264>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DParfait! Garde toujours en tête que tu peux\n<g<cibler >>quelqu'un pour engager une conversation\nplus facilement.\n\n\x0E\x01\x09\x04\x00\xC04Oh?<pause0F> Ne prends pas cet air blasé. Tu penses\npeut\x2010être que je radote, mais il ne faut pas\nnégliger les bases!\n\n\x0E\x01\x09\x04\x00\xA00En <r<mode héroïque>>,<pause1E> le nombre de c\x153urs que tu\nperds en subissant des dégâts est <pling><r<doublé>>! Il\ndevient donc encore plus important de <g<cibler>>.\n\nMais nous sommes un peu éloignés. Monte donc\njusqu'ici pour poursuivre cette conversation.")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Tu dois pouvoir monter sur cette caisse en bois\nsi tu <g<fonces>> dessus.\n\n\nTu verras, tu peux le faire! Essaie de monter\njusqu'ici.")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
/*<290>*/ 								{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': -1, 'param3': 60}
          							  case 1:
/*<262>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DParfait! Garde toujours en tête que tu peux\n<g<cibler >>quelqu'un pour engager une conversation\nplus facilement.\n\nMême s'il n'y a rien à <g<cibler>>, le ciblage te\npermet de regarder droit devant toi.\n\n\nMais nous sommes un peu éloignés. Monte donc\njusqu'ici pour poursuivre cette conversation.")
          								goto flw_58
          							}
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_19() {
/*<139>*/ 	start()
/*<140>*/ 	printf("\x0E\x01\x09\x04\x00\x04Dis donc, ça c'est la chaise des professeurs!\nVa t'asseoir sur les bancs des élèves.")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Qu'est\x2010ce que tu attends? Dépêche\x2010toi de\n<r<plonger>> en <g<fonçant>> vers le ciel avec (B),\net de monter sur ton célestrier!\n\nAppelle ton oiseau avec (v)!\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 176, 'param3': 32}
/*<176>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 179, 'param3': 32}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 180, 'param3': 17}
/*<180>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02La <r<chevauchée céleste >>va pouvoir commencer.\n\n\n\n\x0E\x03\x01\x00Link a bien failli ne pas pouvoir\nparticiper...\n\n\nMais heureusement, tout le monde a répondu à\nl'appel! Bien, je vais commencer l'explication\ndes <r<règles>>.")
          		flw_16:
/*< 16>*/ 		printf("Nous allons d'abord procéder au lâcher du\ncélestrier porteur de la statuette d'oiseau...\n\n\nÀ mon signal, vous <g<foncerez >>jusqu'à pouvoir\n<r<plonger >>dans le ciel et monter sur votre oiseau.\n\n\nUne fois en chute libre, n'oubliez pas d'appuyer\nsur (v) pour <g<siffler votre oiseau>>!\x0E\x01\x11\x02\x9CD\n\n\nLe premier qui rattrapera l'oiseau et saisira la\n<r<statuette >>sera déclaré vainqueur!\n\n\n\x0E\x01\n\x04\x02ÍVoilà, c'est aussi simple que cela. Tout le monde\na bien compris?\n[1]Oui[2?]Non")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDBien!\n\n\n\nLe vainqueur passera bien sûr en classe élite,<pause14>\net recevra un <r<présent honorifique>>.\n\n\nCe présent lui sera remis par celle qui a été\nchoisie pour <r<représenter la Déesse>>...\n\n\nEt à l'occasion de ce 25\x0E\x03\x00\x00e\x0F\x03\x00 anniversaire, la\ncérémonie aura lieu sur la <r<statue de la Déesse>>!\n\n\nCette année, la <r<représentante de la Déesse >>a\ntenu à <r<tisser elle\x2010même >>le présent. <pause14>Vous la\nconnaissez tous...")
/*<184>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 177, 'param3': 13}
/*<177>*/ 			set_camera(5, 0)
/*<174>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDC'est la ravissante Zelda!")
/*<193>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("C'est le moment pour chacun d'entre vous de\nprouver que votre entraînement a porté\nses fruits!\n\nEt attention, le lancer d'objets et les charges\nintempestives sont interdits.")
/*<178>*/ 			set_camera(6, 0)
/*<181>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 182, 'param3': 50}
/*<182>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 175, 'param3': 13}
/*<175>*/ 			printf("\x0E\x01\x08\x02\x1CDCompris, \x0E\x01\x09\x04\x419\x1700Hergo?")
/*< 40>*/ 			set_camera(4, 0)
/*<183>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf("\x0E\x01\x09\x04\x00\x02À vos marques... Prêts...")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x00RHem, je répète!")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

