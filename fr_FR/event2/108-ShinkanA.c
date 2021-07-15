          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf("\x0E\x01\x08\x02\x1CDPartez !\x0E\x01\x05\x04\x0F\x00")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf("\x0E\x01\x09\x04\x00\x01Certes, la statue de la Déesse a disparu,\nmais la Déesse, elle, restera toujours\nen chacun d'entre nous !\n\nTu ne crois pas, Link ?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf("\x0E\x01\x09\x04\x00\x01Tu as l'air d'avoir beaucoup mûri.\nContinue comme ça !")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf("\x0E\x01\x09\x04\x00\x01Comment ? Le grand Narisha ?!<pause28>\nOui, j'en ai entendu parler, mais...\n\n\nJe ne sais pas grand\x2010chose à son sujet,\ndésolé.\n\n\nPour ce genre de chose, tu devrais\nt'adresser à <b<maître Arfan>>, ton\nprofesseur de travaux pratiques !")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf("\x0E\x01\x09\x04\x00\x01Ah, Miou est vraiment adorable.<pause1E>\nComment ? La Triforce ?<pause28>\nQuel rapport ça a avec Miou ?")
          				  case 1:
/*<157>*/ 					printf("\x0E\x01\x09\x04\x00\x01J'ai commencé à m'occuper de la petite\nMiou à la demande du directeur...\n\n\nElle est si mignonne que j'ai presque\nenvie de l'adopter !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_04() {
/*< 34>*/ 	start()
/*<151>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 59, 'param3': 32}
/*< 59>*/ 	{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': -1, 'next': 153, 'param3': 50}
/*<153>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 150, 'param3': 49}
/*<150>*/ 	make_actor_do_something(0, 10)
/*<152>*/ 	{'type': 'type3', 'subType': 4, 'param1': 2578, 'param2': 2562, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x0D\x02\x1906\x0E\x01\x08\x02\x1CDHé, Link !\nPar ici !")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Bonjour, Link.\nAlors tu as décidé de te frotter au <r<mode\nhéroïque >>? C'est très courageux.\n\nLa <r<chevauchée céleste>> a lieu\naujourd'hui. Tu te sens d'attaque ?\n\n\nJ'ai quelque chose à te demander,\nalors regarde vers moi en maintenant\n(Z) enfoncé, puis appuie sur (A) pour\nme parler.\x0E\x01\x11\x02\x7CD")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf("\x0E\x01\x09\x04\xA0E\xA01Bonjour, Link.\nLa <r<chevauchée céleste>> a lieu\naujourd'hui. Tu te sens d'attaque ?\n\nJ'ai quelque chose à te demander,\nalors regarde vers moi en maintenant\n(Z) enfoncé, puis appuie sur (A) pour\nme parler.\x0E\x01\x11\x02\x7CD")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf("\x0E\x01\x08\x02\x1CDHé oh, Link !")
/*<188>*/ 	printf("\x0E\x01\n\x04\x12Í\x0E\x01\x09\x04\n\x202Monter sur le toit simplement en\n<g<fonçant >>avec (A) me semble impossible,\nmême pour toi.")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 189, 'param3': 6}
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf("Il doit y avoir une grosse caisse en bois\nnon loin, <g<déplace\x2010la en la saisissant>>\navec (A) puis sers\x2010t'en comme appui.\n\n<g<Fonce>> dessus avec (A) puis utilise \x0E\x02\x04\x02\x9CD\npour monter dessus.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf("\x0E\x01\x09\x04\x0B\xA03Bien, je vois que tu es passé maître\ndans l'art de <g<foncer>> avec (A).\n\n\nMais prends garde à ne pas en abuser\nou ta <r<jauge d'endurance >>tombera à zéro\net tu seras complètement épuisé.\n\nBien ! Tu sais ce que tu dois faire\nmaintenant, non ?\n[1]Dites\x2010moi[2-]Je sais")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf("Sur une courte distance comme\ncelle\x2010ci, tu peux sauter rien qu'en\navançant ! C'est ce qu'on appelle\nle <g<saut automatique>> !\nEt pourtant, tu n'es pas une tomate\x0E\x01\x06\x02\xFCCD...<pause0F>\n\x0E\x01\x06\x02ÍBon, d'accord, j'ai compris, c'est pas\ndrôle...")
          		  case 1:
/*<269>*/ 			printf("Très bien. Dans ce cas, viens vite\npar ici !")
          		}
          	  case 1:
/*<266>*/ 		printf("\x0E\x01\x09\x04\x0B\xA03Tu vois ? <g<Foncer>> avec (A), c'est très\npratique !\n\n\nMais n'en abuse pas trop, car si ta\n<r<jauge d'endurance>> arrive à zéro,\ntu seras épuisé.\n\nSi ta jauge commence à se vider,\nrepose\x2010toi un peu.\n\n\nBien, passons à la suite.\n\n\n\nTu peux également sauter sur de\ncourtes distances. Cela s'appelle\nle <g<saut automatique>>.\n\nAutomatique, et pourtant tu n'as\nrien d'une tomate\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í Haha !\nTu comprends ? Hem...")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf("\x0E\x01\x09\x04\x00\x01Nous commencerons la cérémonie\nquand tu auras retrouvé ton célestrier.\n\n\nNe t'inquiète pas et pars à sa\nrecherche !")
          	  case 1:
/*<212>*/ 		printf("\x0E\x01\x09\x04\x00\x01La chevauchée céleste a été\nreportée pour que tu puisses\nretrouver ton oiseau.\n\nTout va bien.")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x0B\xA52Hé oh ! Pour qui tu te prends,\nLink ? Écoute un peu ce\nque te dit ton professeur !\n\nRegarde par ici en maintenant (Z)\nenfoncé, et parle\x2010moi avec (A).\x0E\x01\x11\x02\x7CD")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf("\x0E\x01\x09\x04\x00\x01Alors, Link ? Tout se\npasse bien pour toi ?\n\n\nSi tu as un problème, n'hésite pas à\nm'en parler !")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\x01L'attaque tornade demande un très\ngrand effort pour les oiseaux.\n\n\nMais avec ton célestrier vermeil, ça ne\ndevrait pas poser de problème !")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf("\x0E\x01\x09\x04\x00\x05Que fais\x2010tu dehors à cette heure,\nLink ?\n\n\nComment ? Le grand Narisha ?\nCe n'est pas le moment d'en parler,\nil est bien tard...\n\nReviens plutôt demain, et je te\nraconterai ce que je sais.")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf("\x0E\x01\x09\x04\x00\x01Alors, Link...\nTu es sur la piste de Zelda ?\n\n\nJe suis sûr que toi, tu peux\nla retrouver !")
          				  case 1:
/*<218>*/ 					printf("\x0E\x01\x09\x04\x00\x01La nuit, tu ne peux pas chercher\nZelda, parce que les chevaucheurs\nnormaux ne sont pas autorisés à voler.\n\nRepose\x2010toi pour cette nuit, et tu\npourras repartir demain !\n\n\nIl vaut toujours mieux être\nbien reposé avant de faire\nquoi que ce soit !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\n\xA00\x0E\x01\x08\x02\x2CDHé oh ! \x0E\x03\x01\x00Link !\n\n\n\n\x0E\x01\x08\x02\x2CDTu vas y arriver ?")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf("\x0E\x01\x09\x04\x00\x02Ce n'est pas le moment de t'amuser,\nLink. Va plutôt à la\nrecherche de ton célestrier !\n\nCommence par demander à tes\ncamarades à l'intérieur s'ils savent\nquelque chose.")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x03\x01\x00Link ! Ne fais pas\nsemblant de ne pas m'avoir vu ! \n\n\nViens un peu par ici !")
          		  case 1:
/*<233>*/ 			printf("\x0E\x01\x09\x04\x00\x02Voyons, Link ! Tu ignores\nton professeur ?\n\n\nViens plutôt par ici, et écoute ce que\nj'ai à te dire.")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf("")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf("\x0E\x01\x09\x04\x00\x01Oh, Link. Comment\nse passe la recherche de\nZelda ? Tu l'as trouvée ?\n\n\x0E\x01\x09\x04\x00\x05Quoi ? <pause28>Le grand Narisha ?\nC'est le directeur qui t'en a parlé ?\n\n\nOui, il se trouve bien à l'intérieur\ndu cumulonimbus.\n\n\nMais\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í<pause19> il ne s'agit plus du Narisha\nque nous connaissions...\n\x0E\x01\x06\x02\xFECDC'est...<pause28>\x0E\x01\x06\x02\x1CD un <r<monstre >>!\n\n\x0E\x01\x09\x04\x00\x0FIl a la même apparence qu'auparavant,\nmais lorsque j'ai essayé de l'approcher,\nil m'a attaqué !\n\nJ'ai lu dans ses yeux qu'il\nme vouait une haine profonde...\nEst\x2010ce qu'il a réellement changé...\n\n\x0E\x01\x06\x02\xFECDOu bien...\x0E\x01\x06\x02Í<pause19> Est\x2010il possédé ?\n<pause19>Oui, j'ai eu cette impression.\n")
/*<203>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 78, 'param3': 6}
/*< 78>*/ 			printf("\x0E\x01\x09\x04\x00\x05Quoi ? <pause28>Tu voudrais lui parler ?\n\n\n\n\x0E\x01\x06\x02\xFECDC'est...\x0E\x01\x06\x02Í impossible. Il n'est plus en\nmesure de comprendre le langage\ndes humains.\n\n\x0E\x01\x06\x02\xFECDDe plus...\x0E\x01\x06\x02Í la dernière fois\nque j'ai tenté de l'approcher pour lui\nparler, j'ai failli me faire dévorer.")
/*<204>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 201, 'param3': 6}
/*<201>*/ 			printf("\x0E\x01\x09\x04\x00RQuoi ?<pause28> Tu souhaites\nle rencontrer quand même ?\n\n\n\x0E\x01\x06\x02\xFECDJe vois...\x0E\x01\x06\x02Í Tu penses qu'il\npourrait t'aider à retrouver Zelda ?\n\n\nJe comprends.<pause1E> Il ne m'appartient\ndonc pas de tenter de t'arrêter.")
/*<205>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 202, 'param3': 6}
/*<202>*/ 			printf("Oh, il me vient une idée.\nSuis\x2010moi !")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens, Link !\n<pause1E>Comment ? La Triforce ?\n\n\nDésolé, je ne peux pas t'aider.\nSi tu allais demander au directeur ?")
          			  case 1:
/*< 84>*/ 				printf("\x0E\x01\x09\x04\x00\x01Oh, Link ! Comment\nse passe la recherche de Zelda ?\n\n\nCela me chagrine que tu doives\naccomplir cette tâche seul...\nMais tu dois la retrouver !")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf("\x0E\x01\x09\x04\x00\x02À l'intérieur du cumulonimbus,\nle grand Narisha avait l'air possédé...\n\n\nEn éliminant la source du mal de\nson corps, il est peut\x2010être possible\nde rendre à Narisha son esprit d'antan.\n\n\x0E\x03\x01\x00Link ! Je vais t'apprendre\nla technique secrète des\nchevaucheurs...\n\n\x0E\x01\x09\x04\x00\x03L'<r<attaque tornade >>!")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf("L'attaque tornade est une puissante\nattaque, grâce à laquelle tu pourras\néliminer le mal qui infecte Narisha !\n\nIl te suffira d'appuyer sur (A)\npour la réaliser...\n\n\nMais comme elle provoque une\naccélération plus longue que l'<r<attaque\n>>normale, ton oiseau sera plus difficile\nà contrôler...\nC'est une technique de haut vol,\nréservée à l'élite des chevaucheurs.\n\n\nC'est un peu tôt pour toi, mais...\n<pause1E>le temps est venu de tester\ntes compétences.")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf("\x0E\x01\x09\x04\x00\x04Commence par plonger et\nmonter sur ton oiseau !")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf("\x0E\x01\x09\x04\x00\x0FJe suis désolé, pour Zelda...\n\n\n\nMais ne te sens pas coupable,\nc'était un accident, je le sais...")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf("\x0E\x01\x09\x04\x00\x01Laisse\x2010nous nous occuper de la\ncérémonie, et va plutôt chercher\nton oiseau !")
          			  case 1:
/*<127>*/ 				printf("\x0E\x01\x09\x04\x00\x0FQue t'arrive\x2010t\x2010il, Link ?\n<pause1E>Ton oiseau ne répond plus à ton appel ?\n\n\nÉtrange, en temps normal un célestrier\nrépond toujours à l'appel de son\nmaître\x0E\x01\x06\x02\xFECD...\n\nTu en as déjà parlé à maître <b<Hulul>>,\nle responsable de la chevauchée\nd'aujourd'hui ?\n\nAh, le directeur est déjà au courant !\nTout devrait bien se passer, dans ce\ncas.\n\nQuant à toi, dépêche\x2010toi de trouver\nton oiseau !")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf("\x0E\x01\x09\x04\x00\x01Au fait, c'est toi qui nous confonds\nsouvent, non ? Maître <b<Hulul>>, le\nprofesseur qui s'occupe des cours\nthéoriques, a les cheveux bruns... \nEt moi qui ai les cheveux blancs, je suis\nmaître <b<Arfan>>, ton professeur de\npratique. Ne l'oublie pas !")
          			  case 1:
/*< 92>*/ 				printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link. Le jour de\nla <r<chevauchée céleste >>est enfin arrivé !\n\n\nSouviens\x2010toi bien de mes leçons de\npratique, et des leçons de théorie de\nmaître <b<Hulul>> !\n\nD'ailleurs, te souviens\x2010tu que tu peux\nappuyer sur (C) pour passer en <r<vue\nsubjective >>?\x0E\x01\x11\x02\x6CD\n\nDonc quand tu veux observer ton\nenvironnement, <g<appuie>> sur (C) !\x0E\x01\x11\x02\x6CD\n\n\nEt si ton <r<curseur n'est plus centré>>,\n<g<recentre\x2010le >>avec (v) en dirigeant\nla télécommande Wii vers l'écran.\x0E\x01\x11\x02\x9CD")
/*<198>*/ 				scene_flags[0 'Skyloft'][90 /* 0xA 04 */] = true;
          			}
          		}
          	}
          }

          void entrypoint_108_11() {
/*<123>*/ 	start()
/*<163>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*<273>*/ 		switch (story_flags[7 /* us: 805A9AD8 0x01, jp: 805ACD58 0x01 */]) {
          		  case 0:
/*<275>*/ 			printf("\x0E\x01\x09\x04\x00\x01Existe\x2010t\x2010il vraiment un monde appelé\nla terre ?\n\n\nEt même s'il existe, j'imagine que\ncontrairement à ici, où la végétation\nest luxuriante, ce ne doit être qu'une\nterre désolée...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf("\x0E\x01\x09\x04\x00\x01Alors, est\x2010ce que tes recherches pour\nretrouver Zelda avancent ?\n\n\nSi tu es fatigué, allonge\x2010toi dans un lit.\nTu peux dormir jusqu'à ce que la nuit\ntombe et tes c\x153urs seront restaurés !")
          			  case 1:
/*<167>*/ 				printf("\x0E\x01\x09\x04\x00\x01Fais bien attention à toi !\nLe sort de Zelda est entre tes mains !")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf("\x0E\x01\x09\x04\x00\x11J'ai entendu dire que tu partais à la\nrecherche de Zelda sous les nuages !\n\n\nLe directeur m'a dit qu'il y avait une\nterre, là en dessous... Que sais\x2010tu de\ncette terre ?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf("Alors voici l'épée dont j'ai entendu\nparler... Mais sans bouclier<pause0A>.<pause0A>.<pause0A>.<pause0A> Bon, tu\nas un bouclier, très bien...\n\nTiens, voici un petit cadeau d'adieu.\n")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf("Si tu ne sais pas te servir de ton\nbouclier, demande des conseils au\n<b<capitaine des chevaliers >>qui se trouve\nà la salle d'escrime.")
/*<166>*/ 			scene_flags[0 'Skyloft'][20 /* 0x3 10 */] = true;
/*<214>*/ 			switch (scene_flags[89 /* 0xA 02 */]) {
          			  case 0:
          			  case 1:
/*<215>*/ 				story_flags[568 /* us: 805A9B19 0x80, jp: 805ACD99 0x80 */] = true;
/*<216>*/ 				scene_flags[0 'Skyloft'][89 /* 0xA 02 */] = true;
          			}
          		  case 1:
/*<247>*/ 			switch (is_adventure_pouch_full()) {
          			  case 0:
/*<248>*/ 				printf("Oh, et voici donc l'épée dont j'ai\nentendu parler... Mais sans bouclier,\nta défense n'est pas assurée.\n\nOh, tu ne peux rien porter de plus !\nBon, tant pis, prends tout de même\nce cadeau d'adieu !")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf("Oh, et voici donc l'épée dont j'ai\nentendu parler... Mais sans bouclier,\nta défense n'est pas assurée.\n\nAlors prends donc celui\x2010ci !")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf("Le bouclier en bois est léger et facile\nà utiliser, mais c'est le moins solide\nd'entre tous, et il est vulnérable au feu.\n\nSi jamais il se brise, tu peux\nen racheter un au marché.\n\n\nPour équiper ton bouclier, <g<maintiens\n\x0E\x02\x04\x02\x2CD enfoncé >>et <g<sélectionne\x2010le >>avec\nla télécommande Wii.\x0E\x01\x11\x02\x2CD")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf("")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("\x0E\x01\x09\x04\x00\nOh, tu as réussi à détruire dix\ncibles dans le temps imparti !\n\n\nVous avez brillamment démontré\nvos compétences, ton célestrier\nvermeil et toi !\n\nJe t'autorise donc à utiliser\nl'attaque tornade des\nvéritables chevaucheurs !")
/*< 82>*/ 			printf("Il te reste à trouver\nle grand Narisha...\n\n\nPour cela, va parler au <r<patron\nde la Citrouille perchée>>, qui lui\noffre chaque année de la soupe !\nDemande\x2010lui donc ce qu'il sait.")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf("\x0E\x01\x09\x04\x00\x0FIl te reste encore des progrès à\nfaire avant de réussir à détruire dix\ncibles en moins de <r<120 secondes>>.\n\nRepose\x2010toi un peu, je t'attends ici.\nReviens me parler quand tu seras\nprêt à repasser le test !")
/*<100>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<227>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<228>*/ 				story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */] = false;
/*<105>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          			  case 1:
          			}
          		}
          	}
          }

          void entrypoint_108_13() {
/*<101>*/ 	start()
/*<103>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<104>*/ 		printf("\x0E\x01\x09\x04\x00\x01La Citrouille perchée est un bar\nse trouvant au <r<sud\x2010est >>de Célesbourg,\nsur une petite île.\n\nIl y a là\x2010bas <b<Tironne>>, une jeune fille\nà la voix magnifique... <pause1E>À vrai dire\x0E\x01\x06\x02\xFECD...\x0E\x01\x06\x02Í\nje suis un fan.\n\nSurtout, ne le dis à personne !")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf("\x0E\x01\x09\x04\x00\x01Bien, Link ! Souhaites\x2010tu\npasser le test de l'attaque tornade ?\n[1]Oui[2-]Plus tard")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf("\x0E\x01\x09\x04\x00\x03Bonne réponse !\nBien, commençons ! Tu peux\nplonger dans le ciel.")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf("Tu peux attendre jusqu'à\nce que tu te sentes prêt !\n\n\nJe vais rester ici un moment,\nreviens quand tu veux !")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf("\x0E\x01\x09\x04\x00\x01Que t'arrive\x2010t\x2010il ? Plonge donc !\nOu bien souhaites\x2010tu t'arrêter là ?\n[1]Je continue[2-]J'arrête")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf("\x0E\x01\x09\x04\x00\x03C'est la réponse que j'attendais !\nBien, envole\x2010toi dans le ciel.")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf("Tu peux attendre jusqu'à\nce que tu te sentes prêt !\n\n\nJe vais rester ici un moment,\nreviens quand tu veux !")
/*<252>*/ 					zone_temp_flags[13 /* 0x0 20 */] = false;
          				}
          			  case 1:
          				goto flw_108
          			}
          		}
          	}
          }

          void entrypoint_108_30() {
/*<142>*/ 	start()
/*<143>*/ 	printf("Bien, Link !\n\n\n\nJ'ai appris à ton célestrier à <g<tournoyer\n>>lorsque tu appuies sur (A).")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf("")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf("Tu dois utiliser l'<r<attaque tornade >>en\nappuyant sur (A) pour détruire\n<r<dix cibles>> parmi les rochers devant toi.")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hé, Link !\nOù vas\x2010tu ? La chevauchée céleste\na commencé, dépêche\x2010toi de plonger !")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf("Si tu parviens à détruire dix cibles\nen moins de <r<120 secondes>>, tu\nseras un véritable chevaucheur !")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf("\x0E\x01\x09\x04\x00\x16Je me demande bien ce qui a pu se\nproduire pour que les monstres\ndisparaissent et que les lemlys ne\nsoient plus agressifs la nuit...")
          		  case 1:
/*<285>*/ 			printf("\x0E\x01\x09\x04\x00\x0DRegarde ça, Link !\nC'est la nuit et pourtant, Miou\nn'est pas agressive !\n\nC'est vraiment fantastique !\nTu n'es pas d'accord ?")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf("\x0E\x01\x09\x04\x00\x16La nuit, je préfère me séparer de la\npetite Miou...\n\n\nUne nuit, je l'ai laissée à l'école...\nJe préfère oublier ce qui s'est passé.\n\n\nEn tout cas, ne sors pas la nuit,\nc'est bien trop dangereux.")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ne sors pas trop la nuit, c'est très\ndangereux !\n\n\nMême la petite Miou devient une bête\nféroce et sanguinaire...\n\n\nLa nuit, il se passe des choses vraiment\nétranges à Célesbourg...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf("Bien, c'est parti !")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf("\x0E\x01\x09\x04\x00\x02Hé, Link !\nOù tu vas, comme ça ?\n\n\nDépêche\x2010toi de plonger et d'appeler\nton célestrier !")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf("\x0E\x01\x09\x04\x00\x02Oh, Link !\nTu veux un cours à cette heure\x2010ci ?\n[1]Oui[2-]Non...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf("Oh, quelle motivation !\n\n\n\nBien, parlons de l'histoire de\nCélesbourg !\n\n\nCélesbourg est une île qui flotte dans\nle ciel depuis plusieurs millénaires.\n\n\nNos ancêtres ont toujours vécu ici et\nsur les îles voisines.\n\n\n\x0E\x01\x09\x04\x09\xA00Sous la ville s'étend la mer de nuages,\nd'où personne n'est jamais revenu...\n\n\nOn dit que c'est un vide absolu qui\ns'étend sous les nuages !\n\n\n\x0E\x01\x09\x04\n\xA00Voilà, ce sera tout pour aujourd'hui.\nVa te préparer pour la chevauchée\ncéleste !")
          	  case 1:
/*<138>*/ 		printf("Ah, euh... De toute façon, pas de\ncours aujourd'hui, puisque c'est le\njour de la chevauchée céleste.\n\nTu ferais mieux de sortir\nte préparer, d'ailleurs !")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf("Fais\x2010moi confiance, va vite chercher\nton oiseau.")
          		  case 1:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x00\x01Qu'y a\x2010t\x2010il, Link ?\nTu es tout pâle...\n\n\nComment ?<pause32>\nTon célestrier a disparu ?\n\n\nMais c'est terrible\x0E\x01\x06\x02\xFCCD...\x0E\x01\x06\x02Í\nTu penses pouvoir le retrouver ?\n\n\nJe te conseille de partir à sa recherche\ntout de suite... <pause28>sinon tu risques de rater\nla chevauchée céleste !\n\nEt sans ton <r<oiseau>>, tu pourrais\ny laisser des <r<plumes>>\x0E\x01\x06\x02\xFCCD...<pause1E> Haha...\nTu comprends ?\n\n\x0E\x01\x09\x04\x00\x05\x0E\x01\x06\x02\x2CDAhem...<pause1E>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf("Oh, le directeur m'appelle ?\n\n\n\nEntendu ! Je te dois bien ça.\n\n\n\nNe t'en fais pas pour la cérémonie,\ncours chercher ton célestrier !")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf("Hum, c'est peut\x2010être parce que\ntu n'as pas écouté ma requête\nqu'il t'arrive malheur...\n\nBah, oublie ça. Tu dis que le\ndirecteur m'appelle ?\n\n\nTrès bien, ne t'inquiète pas\npour la cérémonie et file\nchercher ton célestrier.")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf("\x0E\x01\x09\x04\n\x404Je suis content que Miou soit de retour.\n\n\n\nC'est un <b<l>><b<<b<e<b<mly>>... \x0E\x01\x09\x04\x00\xA00Ils sont très mignons,\nmais méfie\x2010toi d'eux la nuit !\n[1]Pourquoi ?[2]La nuit ?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf("Ah, tu ne sais pas comment les\nlemlys se comportent la nuit ?\n\n\nC'est une histoire plutôt effrayante...")
          					flw_13:
/*< 13>*/ 					printf("\x0E\x01\x09\x04\x00\x16Lorsque la nuit tombe sur Célesbourg,\nun étrange pouvoir maléfique s'empare\ndes petits animaux comme les lemlys.\n\nLes monstres d'ordinaire tapis dans des\ngrottes ou des endroits sombres sortent\négalement de leur tanière la nuit.\n\nC'est pour cela que personne ici\nne sort à la nuit tombée, sauf en\ncas d'absolue nécessité.\n\nPour ceux comme toi qui aspirent\nà être chevaliers et sont entraînés\nà se battre, ça va encore...\n\nMais reste tout de même prudent !")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf("\x0E\x01\x09\x04\x0F\x40DOh, tu l'as ramenée saine et sauve !\n<pause23>\x0E\x01\x09\x04\x09\x400Merci pour ton aide, Link.\n\n\nBien, je vais nourrir la petite Miou,\nà présent.")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf("Rends\x2010toi sur la <r<place du temple\n>>et dis au directeur que nous l'avons\nretrouvée.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf("Zelda doit être avec lui.\nVa vite les prévenir !")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x06Qu'y a\x2010t\x2010il, Link ?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf("Monte sur le mur en fonçant dessus,\net <g<accroche\x2010toi >>à la corniche !\n\n\nMais fais attention à ne pas laisser\nta <r<jauge d'endurance>> se vider\ncomplètement quand tu es accroché.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf("\x0E\x01\x09\x04\x09\x400Oh, tu serais d'accord pour ramener\nMiou ?\n[1]Oui[2]Non")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf("\x0E\x01\x09\x04\x09\x40DC'est bien aimable à toi.\nDésolé de te prendre de ton temps !")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf("\x0E\x01\x09\x04\x09\x400Tu devrais pouvoir monter en\npassant par là\x2010bas. Accroche\x2010toi au\nrebord et essaie d'accéder au toit.\n\n\x0E\x01\x07\x04\xFF00\x00Je compte sur toi !")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\xA00Je vois...\n\n\n\nDis simplement au directeur que\nmaître <b<Hulul>> a trouvé Miou et\nqu'il peut se rassurer, d'accord ?")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf("\x0E\x01\x09\x04\x00\x01Alors, Link, tu souhaites\nt'entraîner avec ton oiseau ce matin ?\n\n\nComment ?<pause1E> Tu as rendez\x2010vous ?\n<pause1E>Ah, avec <b<Zelda>>, bien sûr !")
/*< 42>*/ 						printf("En fait, tu tombes très bien.\n\n\n\nFigure\x2010toi que <r<Miou>>, l'animal de\ncompagnie de <b<Gaepora>>, notre directeur\nd'école, s'est encore enfuie...")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf("Regarde un peu où elle est allée\nse fourrer !\x0E\x01\n\x04\x10Í\n\n\n\x0E\x01\n\x04\xFFFFÍZelda et son père ne peuvent pas\ns'occuper d'elle aujourd'hui, ils\ndoivent se consacrer aux préparatifs\nde la cérémonie...\nIls m'ont donc chargé de la nourrir,\nmais la cérémonie va bientôt\ncommencer et je ne peux aller la\nchercher dans cette tenue...\n\x0E\x01\x07\x04\xFF00\x00Tu ne voudrais pas me la ramener ?\n[1]D'accord[2]Pas le temps")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf("\x0E\x01\x09\x04\x00\xA00Je vois...\n\n\n\nDis simplement au directeur que\nmaître <b<Hulul>> a trouvé Miou et\nqu'il peut se rassurer, d'accord ?")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf("\x0E\x01\x09\x04\x0B\xA06Arrête un peu de lambiner,\net fais ce que je te dis !")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DOui, comme cela. Lorsque tu maintiens\n(Z) enfoncé en regardant dans une\ndirection, tu peux <g<cibler>> quelque chose.\x0E\x01\x11\x02\x7CD\n\n\x0E\x01\x09\x04\x00\xC04Oh ?<pause0F> Ne prends pas cet air blasé.\nTu penses peut\x2010être que je radote,\nmais il ne faut pas négliger les bases !\n\n\x0E\x01\x09\x04\x00\xA00En <r<mode héroïque>>,<pause1E> le nombre de c\x153urs\nque tu perds en subissant des dégâts est\n<pling><r<doublé>> ! Il devient donc encore plus\nimportant de <g<cibler>> avec (Z).\x0E\x01\x11\x02\x7CD\nMais nous sommes un peu éloignés.\nMonte donc jusqu'ici pour poursuivre\ncette conversation.")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf("\x0E\x01\x09\x04\x0B\xA00Tu dois pouvoir monter sur cette\ncaisse en bois si tu <g<fonces>> dessus.\n\n\nPour <g<foncer>>, il suffit de te déplacer\ntout en maintenant (A) enfoncé.\nTu verras, tu peux le faire !\n\nAllez, monte jusqu'ici.")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf("\x0E\x01\x09\x04\x0B\xA0DOui, comme cela. Lorsque tu maintiens\n(Z) enfoncé en regardant dans une\ndirection, tu peux <g<cibler>> quelque chose.\x0E\x01\x11\x02\x7CD\n\nTu peux par exemple facilement\nentamer une conversation avec\nquelqu'un en le <g<ciblant >>avec (Z) puis\nen appuyant sur (A).\x0E\x01\x11\x02\x7CD\nMême s'il n'y a rien à <g<cibler>>, (Z) te\npermet de regarder droit devant toi.\x0E\x01\x11\x02\x7CD\n\n\nMais nous sommes un peu éloignés.\nMonte donc jusqu'ici pour poursuivre\ncette conversation.")
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
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x04Dis donc, ça c'est la chaise des\nprofesseurs ! Va t'asseoir sur\nles bancs des élèves.")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\x02Qu'est\x2010ce que tu attends ? Dépêche\x2010toi\nde <r<plonger>> en <g<fonçant>> vers le ciel avec\n(A), et de monter sur ton célestrier !\n\nAppelle ton oiseau avec (v) !\x0E\x01\x11\x02\x9CD")
          	  case 1:
/*< 28>*/ 		set_camera(1, 0)
/*< 22>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 23, 'param3': 32}
/*< 23>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 24, 'param3': 32}
/*< 24>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 6, 'next': 177, 'param3': 32}
/*<177>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 180, 'param3': 32}
/*<180>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 25, 'param3': 32}
/*< 25>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 		{'type': 'type3', 'subType': 1, 'param1': 5, 'param2': 0, 'next': 27, 'param3': 17}
/*< 27>*/ 		{'type': 'type3', 'subType': 1, 'param1': 6, 'param2': 0, 'next': 181, 'param3': 17}
/*<181>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 19, 'next': 15, 'param3': 13}
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x02La <r<chevauchée céleste >>va pouvoir\ncommencer.\n\n\n\x0E\x03\x01\x00Link a bien failli ne pas\npouvoir participer...\n\n\nMais heureusement, tout le monde\na répondu à l'appel ! Bien, je vais\ncommencer l'explication des <r<règles>>.")
          		flw_16:
/*< 16>*/ 		printf("Nous allons d'abord procéder au lâcher\ndu célestrier porteur de la statuette\nd'oiseau...\n\nÀ mon signal, vous <r<foncerez >>avec (A)\njusqu'à pouvoir <r<plonger >>dans le ciel\net monter sur votre oiseau.\n\nUne fois en chute libre, n'oubliez pas\nd'appuyer sur (v) pour <g<siffler votre\noiseau >>!\x0E\x01\x11\x02\x9CD\n\nLe premier qui rattrapera l'oiseau\net saisira la statuette avec (A) sera\ndéclaré vainqueur !\n\n\x0E\x01\n\x04\x02ÍVoilà, c'est aussi simple que cela.\nTout le monde a bien compris ?\n[1]Oui[2?]Non")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x1CDBien !\n\n\n\nLe vainqueur passera bien sûr en classe\nsupérieure,<pause14> et recevra un <r<présent\nhonorifique>>.\n\nCe présent lui sera remis par celle\nqui a été choisie pour <r<représenter\nla Déesse>>...\n\nEt à l'occasion de ce 25\x0E\x03\x00\x00e\x0F\x03\x00 anniversaire,\nla cérémonie aura lieu sur la <r<statue\nde la Déesse >>!\n\nCette année, la <r<représentante de la\nDéesse >>a tenu à <r<tisser elle\x2010même >>le\nprésent. <pause14>Vous la connaissez tous...")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf("\x0E\x01\x09\x04\x100\x09\x0E\x01\x08\x02\x1CDC'est la ravissante Zelda !")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf("C'est le moment pour chacun\nd'entre vous de prouver que votre\nentraînement a porté ses fruits !\n\nEt attention, le lancer d'objets et les\ncharges intempestives sont interdits.")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf("\x0E\x01\x08\x02\x1CDCompris, \x0E\x01\x09\x04\x419\x1700Hergo ?")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf("\x0E\x01\x09\x04\x00\x02À vos marques... Prêts...")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x00RHem, je répète !")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

