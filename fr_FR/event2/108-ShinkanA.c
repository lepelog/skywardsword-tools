          void entrypoint_108_03() {
/*< 32>*/ 	start()
/*<255>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 113, 'next': 33, 'param3': 24}
/*< 33>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10008:0x01cd>Partez !<0x10005:0x000f0000>")
          }

          void entrypoint_108_20() {
/*<156>*/ 	start()
/*<289>*/ 	switch (story_flags[17 /* us: 805A9ADB 0x04, jp: 805ACD5B 0x04 */]) {
          	  case 0:
/*<290>*/ 		printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000001>Certes, la statue de la Déesse a disparu,\nmais la Déesse, elle, restera toujours\nen chacun d'entre nous !\n\nTu ne crois pas, <heroname> ?")
          	  case 1:
/*<282>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<283>*/ 			printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000001>Tu as l'air d'avoir beaucoup mûri.\nContinue comme ça !")
          		  case 1:
/*<278>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<281>*/ 				printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x00000001>Comment ? Le grand Narisha ?!<pause 40>\nOui, j'en ai entendu parler, mais...\n\n\nJe ne sais pas grand‐chose à son sujet,\ndésolé.\n\n\nPour ce genre de chose, tu devrais\nt'adresser à <color blue<maître Arfan>coloroff>, ton\nprofesseur de travaux pratiques !")
          			  case 1:
/*<279>*/ 				switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          				  case 0:
/*<280>*/ 					printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x00000001>Ah, Miou est vraiment adorable.<pause 30>\nComment ? La Triforce ?<pause 40>\nQuel rapport ça a avec Miou ?")
          				  case 1:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x00000001>J'ai commencé à m'occuper de la petite\nMiou à la demande du directeur...\n\n\nElle est si mignonne que j'ai presque\nenvie de l'adopter !")
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
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x1000D:0x1906><0x10008:0x01cd>Hé, <heroname> !\nPar ici !")
/*< 57>*/ 	set_camera(11, 0)
/*<244>*/ 	make_actor_do_something(1, 10)
/*<213>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 10, 'next': 261, 'param3': 17}
/*<261>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x0a0e0a01>Bonjour, <heroname>.\nAlors tu as décidé de te frotter au <color red<mode\nhéroïque >coloroff>? C'est très courageux.\n\nLa <color red<chevauchée céleste>coloroff> a lieu\naujourd'hui. Tu te sens d'attaque ?\n\n\nJ'ai quelque chose à te demander,\nalors regarde vers moi en maintenant\n(Z) enfoncé, puis appuie sur (A) pour\nme parler.<0x10011:0x07cd>")
          		flw_64:
/*< 64>*/ 		scene_flags[0 'Skyloft'][36 /* 0x5 10 */] = true;
/*< 75>*/ 		story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = true;
/*<254>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': -1, 'param3': 42}
          	  case 1:
/*< 56>*/ 		printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0a0e0a01>Bonjour, <heroname>.\nLa <color red<chevauchée céleste>coloroff> a lieu\naujourd'hui. Tu te sens d'attaque ?\n\nJ'ai quelque chose à te demander,\nalors regarde vers moi en maintenant\n(Z) enfoncé, puis appuie sur (A) pour\nme parler.<0x10011:0x07cd>")
          		goto flw_64
          	}
          }

          void entrypoint_108_21() {
/*<186>*/ 	start()
/*<192>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 190, 'param3': 32}
/*<190>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 187, 'param3': 13}
/*<187>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10008:0x01cd>Hé oh, <heroname> !")
/*<188>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x1000A:0x001200cd><0x10009:0x000a0202>Monter sur le toit simplement en\n<color green<fonçant >coloroff>avec (A) me semble impossible,\nmême pour toi.")
/*<191>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 193, 'param3': 17}
/*<193>*/ 	wait_frames(15)
/*<189>*/ 	set_camera(19, 0)
/*<230>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "Il doit y avoir une grosse caisse en bois\nnon loin, <color green<déplace‐la en la saisissant>coloroff>\navec (A) puis sers‐t'en comme appui.\n\n<color green<Fonce>coloroff> dessus avec (A) puis utilise (StickUp)\npour monter dessus.")
          }

          void entrypoint_108_05() {
/*< 36>*/ 	start()
/*<267>*/ 	switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          	  case 0:
/*<268>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x000b0a03>Bien, je vois que tu es passé maître\ndans l'art de <color green<foncer>coloroff> avec (A).\n\n\nMais prends garde à ne pas en abuser\nou ta <color red<jauge d'endurance >coloroff>tombera à zéro\net tu seras complètement épuisé.\n\nBien ! Tu sais ce que tu dois faire\nmaintenant, non ?\n[1-]Dites‐moi[2]Je sais")
/*<270>*/ 		switch (choice(2)) {
          		  case 0:
/*<271>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "Sur une courte distance comme\ncelle‐ci, tu peux sauter rien qu'en\navançant ! C'est ce qu'on appelle\nle <color green<saut automatique>coloroff> !\nEt pourtant, tu n'es pas une tomate<0x10006:0xfccd>...<pause 15>\n<0x10006:0x00cd>Bon, d'accord, j'ai compris, c'est pas\ndrôle...")
          		  case 1:
/*<269>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "Très bien. Dans ce cas, viens vite\npar ici !")
          		}
          	  case 1:
/*<266>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x000b0a03>Tu vois ? <color green<Foncer>coloroff> avec (A), c'est très\npratique !\n\n\nMais n'en abuse pas trop, car si ta\n<color red<jauge d'endurance>coloroff> arrive à zéro,\ntu seras épuisé.\n\nSi ta jauge commence à se vider,\nrepose‐toi un peu.\n\n\nBien, passons à la suite.\n\n\n\nTu peux également sauter sur de\ncourtes distances. Cela s'appelle\nle <color green<saut automatique>coloroff>.\n\nAutomatique, et pourtant tu n'as\nrien d'une tomate<0x10006:0xfccd>...<0x10006:0x00cd> Haha !\nTu comprends ? Hem...")
          	}
          }

          void entrypoint_108_22() {
/*<208>*/ 	start()
/*<210>*/ 	switch (scene_flags[92 /* 0xA 10 */]) {
          	  case 0:
/*<211>*/ 		printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x00000001>Nous commencerons la cérémonie\nquand tu auras retrouvé ton célestrier.\n\n\nNe t'inquiète pas et pars à sa\nrecherche !")
          	  case 1:
/*<212>*/ 		printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000001>La chevauchée céleste a été\nreportée pour que tu puisses\nretrouver ton oiseau.\n\nTout va bien.")
          	}
          }

          void entrypoint_108_06() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 2, line: 44 */ "<0x10009:0x000b0a52>Hé oh ! Pour qui tu te prends,\n<heroname> ? Écoute un peu ce\nque te dit ton professeur !\n\nRegarde par ici en maintenant (Z)\nenfoncé, et parle‐moi avec (A).<0x10011:0x07cd>")
          }

          void entrypoint_108_23() {
/*<217>*/ 	start()
/*<225>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<226>*/ 		printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00000001>Alors, <heroname> ? Tout se\npasse bien pour toi ?\n\n\nSi tu as un problème, n'hésite pas à\nm'en parler !")
          	  case 1:
/*<221>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000001>L'attaque tornade demande un très\ngrand effort pour les oiseaux.\n\n\nMais avec ton célestrier vermeil, ça ne\ndevrait pas poser de problème !")
          		  case 1:
/*<220>*/ 			switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          			  case 0:
/*<223>*/ 				printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x00000005>Que fais‐tu dehors à cette heure,\n<heroname> ?\n\n\nComment ? Le grand Narisha ?\nCe n'est pas le moment d'en parler,\nil est bien tard...\n\nReviens plutôt demain, et je te\nraconterai ce que je sais.")
          			  case 1:
/*<219>*/ 				switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          				  case 0:
/*<222>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000001>Alors, <heroname>...\nTu es sur la piste de Zelda ?\n\n\nJe suis sûr que toi, tu peux\nla retrouver !")
          				  case 1:
/*<218>*/ 					printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00000001>La nuit, tu ne peux pas chercher\nZelda, parce que les chevaucheurs\nnormaux ne sont pas autorisés à voler.\n\nRepose‐toi pour cette nuit, et tu\npourras repartir demain !\n\n\nIl vaut toujours mieux être\nbien reposé avant de faire\nquoi que ce soit !")
          				}
          			}
          		}
          	}
          }

          void entrypoint_108_07() {
/*< 73>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x000a0a00><0x10008:0x02cd>Hé oh ! <0x30001:0x><heroname> !\n\n\n\n<0x10008:0x02cd>Tu vas y arriver ?")
          }

          void entrypoint_108_24() {
/*<232>*/ 	start()
/*<245>*/ 	switch (scene_flags[41 /* 0x4 02 */]) {
          	  case 0:
/*<238>*/ 		printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000002>Ce n'est pas le moment de t'amuser,\n<heroname>. Va plutôt à la\nrecherche de ton célestrier !\n\nCommence par demander à tes\ncamarades à l'intérieur s'ils savent\nquelque chose.")
          	  case 1:
/*<239>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<246>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000002><0x30001:0x><heroname> ! Ne fais pas\nsemblant de ne pas m'avoir vu ! \n\n\nViens un peu par ici !")
          		  case 1:
/*<233>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000002>Voyons, <heroname> ! Tu ignores\nton professeur ?\n\n\nViens plutôt par ici, et écoute ce que\nj'ai à te dire.")
          		}
          	}
          }

          void entrypoint_108_08() {
/*< 76>*/ 	start()
/*< 88>*/ 	switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          	  case 0:
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 83>*/ 		switch (story_flags[328 /* us: 805A9AFF 0x40, jp: 805ACD7F 0x40 */]) {
          		  case 0:
/*< 85>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 77, 'param3': 31}
/*< 77>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00000001>Oh, <heroname>. Comment\nse passe la recherche de\nZelda ? Tu l'as trouvée ?\n\n<0x10009:0x00000005>Quoi ? <pause 40>Le grand Narisha ?\nC'est le directeur qui t'en a parlé ?\n\n\nOui, il se trouve bien à l'intérieur\ndu cumulonimbus.\n\n\nMais<0x10006:0xfecd>...<0x10006:0x00cd><pause 25> il ne s'agit plus du Narisha\nque nous connaissions...\n<0x10006:0xfecd>C'est...<pause 40><0x10006:0x01cd> un <color red<monstre >coloroff>!\n\n<0x10009:0x0000000f>Il a la même apparence qu'auparavant,\nmais lorsque j'ai essayé de l'approcher,\nil m'a attaqué !\n\nJ'ai lu dans ses yeux qu'il\nme vouait une haine profonde...\nEst‐ce qu'il a réellement changé...\n\n<0x10006:0xfecd>Ou bien...<0x10006:0x00cd><pause 25> Est‐il possédé ?\n<pause 25>Oui, j'ai eu cette impression.\n")
/*<203>*/ 			wait_frames(40)
/*< 78>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x00000005>Quoi ? <pause 40>Tu voudrais lui parler ?\n\n\n\n<0x10006:0xfecd>C'est...<0x10006:0x00cd> impossible. Il n'est plus en\nmesure de comprendre le langage\ndes humains.\n\n<0x10006:0xfecd>De plus...<0x10006:0x00cd> la dernière fois\nque j'ai tenté de l'approcher pour lui\nparler, j'ai failli me faire dévorer.")
/*<204>*/ 			wait_frames(40)
/*<201>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000052>Quoi ?<pause 40> Tu souhaites\nle rencontrer quand même ?\n\n\n<0x10006:0xfecd>Je vois...<0x10006:0x00cd> Tu penses qu'il\npourrait t'aider à retrouver Zelda ?\n\n\nJe comprends.<pause 30> Il ne m'appartient\ndonc pas de tenter de t'arrêter.")
/*<205>*/ 			wait_frames(30)
/*<202>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "Oh, il me vient une idée.\nSuis‐moi !")
/*< 86>*/ 			story_flags[362 /* us: 805A9B03 0x01, jp: 805ACD83 0x01 */] = true;
/*< 87>*/ 			changeScene(0, 0) // 
          		  case 1:
/*<276>*/ 			switch (story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */]) {
          			  case 0:
/*<277>*/ 				printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00000001>Tiens, <heroname> !\n<pause 30>Comment ? La Triforce ?\n\n\nDésolé, je ne peux pas t'aider.\nSi tu allais demander au directeur ?")
          			  case 1:
/*< 84>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000001>Oh, <heroname> ! Comment\nse passe la recherche de Zelda ?\n\n\nCela me chagrine que tu doives\naccomplir cette tâche seul...\nMais tu dois la retrouver !")
          			}
          		}
          	}
          }

          void entrypoint_108_09() {
/*< 79>*/ 	start()
/*< 80>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00000002>À l'intérieur du cumulonimbus,\nle grand Narisha avait l'air possédé...\n\n\nEn éliminant la source du mal de\nson corps, il est peut‐être possible\nde rendre à Narisha son esprit d'antan.\n\n<0x30001:0x><heroname> ! Je vais t'apprendre\nla technique secrète des\nchevaucheurs...\n\n<0x10009:0x00000003>L'<color red<attaque tornade >coloroff>!")
/*<259>*/ 	set_camera(22, 0)
/*<257>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "L'attaque tornade est une puissante\nattaque, grâce à laquelle tu pourras\néliminer le mal qui infecte Narisha !\n\nIl te suffira d'appuyer sur (A)\npour la réaliser...\n\n\nMais comme elle provoque une\naccélération plus longue que l'<color red<attaque\n>coloroff>normale, ton oiseau sera plus difficile\nà contrôler...\nC'est une technique de haut vol,\nréservée à l'élite des chevaucheurs.\n\n\nC'est un peu tôt pour toi, mais...\n<pause 30>le temps est venu de tester\ntes compétences.")
/*<260>*/ 	set_camera(-1, 0)
/*<258>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00000004>Commence par plonger et\nmonter sur ton oiseau !")
/*< 94>*/ 	story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*< 99>*/ 	story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<249>*/ 	zone_temp_flags[13 /* 0x0 20 */] = true;
          }

          void entrypoint_108_10() {
/*< 91>*/ 	start()
/*<129>*/ 	switch (story_flags[32 /* us: 805A9ADD 0x01, jp: 805ACD5D 0x01 */]) {
          	  case 0:
/*<130>*/ 		printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x0000000f>Je suis désolé, pour Zelda...\n\n\n\nMais ne te sens pas coupable,\nc'était un accident, je le sais...")
          	  case 1:
/*<128>*/ 		switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          		  case 0:
/*<197>*/ 			switch (scene_flags[91 /* 0xA 08 */]) {
          			  case 0:
/*<199>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00000001>Laisse‐nous nous occuper de la\ncérémonie, et va plutôt chercher\nton oiseau !")
          			  case 1:
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x0000000f>Que t'arrive‐t‐il, <heroname> ?\n<pause 30>Ton oiseau ne répond plus à ton appel ?\n\n\nÉtrange, en temps normal un célestrier\nrépond toujours à l'appel de son\nmaître<0x10006:0xfecd>...\n\nTu en as déjà parlé à maître <color blue<Hulul>coloroff>,\nle responsable de la chevauchée\nd'aujourd'hui ?\n\nAh, le directeur est déjà au courant !\nTout devrait bien se passer, dans ce\ncas.\n\nQuant à toi, dépêche‐toi de trouver\nton oiseau !")
/*<200>*/ 				scene_flags[0 'Skyloft'][91 /* 0xA 08 */] = true;
          			}
          		  case 1:
/*<195>*/ 			switch (scene_flags[90 /* 0xA 04 */]) {
          			  case 0:
/*<196>*/ 				printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>Au fait, c'est toi qui nous confonds\nsouvent, non ? Maître <color blue<Hulul>coloroff>, le\nprofesseur qui s'occupe des cours\nthéoriques, a les cheveux bruns... \nEt moi qui ai les cheveux blancs, je suis\nmaître <color blue<Arfan>coloroff>, ton professeur de\npratique. Ne l'oublie pas !")
          			  case 1:
/*< 92>*/ 				printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000001>Bonjour, <heroname>. Le jour de\nla <color red<chevauchée céleste >coloroff>est enfin arrivé !\n\n\nSouviens‐toi bien de mes leçons de\npratique, et des leçons de théorie de\nmaître <color blue<Hulul>coloroff> !\n\nD'ailleurs, te souviens‐tu que tu peux\nappuyer sur (C) pour passer en <color red<vue\nsubjective >coloroff>?<0x10011:0x06cd>\n\nDonc quand tu veux observer ton\nenvironnement, <color green<appuie>coloroff> sur (C) !<0x10011:0x06cd>\n\n\nEt si ton <color red<curseur n'est plus centré>coloroff>,\n<color green<recentre‐le >coloroff>avec (v) en dirigeant\nla télécommande Wii vers l'écran.<0x10011:0x09cd>")
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
/*<275>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00000001>Existe‐t‐il vraiment un monde appelé\nla terre ?\n\n\nEt même s'il existe, j'imagine que\ncontrairement à ici, où la végétation\nest luxuriante, ce ne doit être qu'une\nterre désolée...")
          		  case 1:
/*<272>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<274>*/ 				printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000001>Alors, est‐ce que tes recherches pour\nretrouver Zelda avancent ?\n\n\nSi tu es fatigué, allonge‐toi dans un lit.\nTu peux dormir jusqu'à ce que la nuit\ntombe et tes cœurs seront restaurés !")
          			  case 1:
/*<167>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x00000001>Fais bien attention à toi !\nLe sort de Zelda est entre tes mains !")
          			}
          		}
          	  case 1:
/*<168>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 124, 'param3': 31}
/*<124>*/ 		printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00000011>J'ai entendu dire que tu partais à la\nrecherche de Zelda sous les nuages !\n\n\nLe directeur m'a dit qu'il y avait une\nterre, là en dessous... Que sais‐tu de\ncette terre ?")
/*<169>*/ 		switch (adventure_pouch_has(9 0x0009)) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "Alors voici l'épée dont j'ai entendu\nparler... Mais sans bouclier<pause 10>.<pause 10>.<pause 10>.<pause 10> Bon, tu\nas un bouclier, très bien...\n\nTiens, voici un petit cadeau d'adieu.\n")
          			flw_172:
/*<172>*/ 			give_item(4 0x04);
/*<256>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 173, 'param3': 12}
          			flw_173:
/*<173>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "Si tu ne sais pas te servir de ton\nbouclier, demande des conseils au\n<color blue<capitaine des chevaliers >coloroff>qui se trouve\nà la salle d'escrime.")
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
/*<248>*/ 				printf(/* textboxtype: 1, unk: 0, line: 66 */ "Oh, et voici donc l'épée dont j'ai\nentendu parler... Mais sans bouclier,\nta défense n'est pas assurée.\n\nOh, tu ne peux rien porter de plus !\nBon, tant pis, prends tout de même\nce cadeau d'adieu !")
          				goto flw_172
          			  case 1:
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 65 */ "Oh, et voici donc l'épée dont j'ai\nentendu parler... Mais sans bouclier,\nta défense n'est pas assurée.\n\nAlors prends donc celui‐ci !")
/*<164>*/ 				give_item(116 0x74);
/*<165>*/ 				printf(/* textboxtype: 1, unk: 0, line: 67 */ "Le bouclier en bois est léger et facile\nà utiliser, mais c'est le moins solide\nd'entre tous, et il est vulnérable au feu.\n\nSi jamais il se brise, tu peux\nen racheter un au marché.\n\n\nPour équiper ton bouclier, <color green<maintiens\n(-) enfoncé >coloroff>et <color green<sélectionne‐le >coloroff>avec\nla télécommande Wii.<0x10011:0x02cd>")
          				goto flw_173
          			}
          		}
          	}
          }

          void entrypoint_108_12() {
/*< 95>*/ 	start()
/*<206>*/ 	switch (scene_flags[77 /* 0x8 20 */]) {
          	  case 0:
/*<207>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "")
          	  case 1:
/*< 97>*/ 		switch (story_flags[642 /* us: 805A9B1D 0x08, jp: 805ACD9D 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x0000000a>Oh, tu as réussi à détruire dix\ncibles dans le temps imparti !\n\n\nVous avez brillamment démontré\nvos compétences, ton célestrier\nvermeil et toi !\n\nJe t'autorise donc à utiliser\nl'attaque tornade des\nvéritables chevaucheurs !")
/*< 82>*/ 			printf(/* textboxtype: 1, unk: 0, line: 74 */ "Il te reste à trouver\nle grand Narisha...\n\n\nPour cela, va parler au <color red<patron\nde la Citrouille perchée>coloroff>, qui lui\noffre chaque année de la soupe !\nDemande‐lui donc ce qu'il sait.")
/*<107>*/ 			scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = true;
          		  case 1:
/*< 96>*/ 			switch (story_flags[641 /* us: 805A9B1D 0x04, jp: 805ACD9D 0x04 */]) {
          			  case 0:
/*< 98>*/ 				printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0000000f>Il te reste encore des progrès à\nfaire avant de réussir à détruire dix\ncibles en moins de <color red<120 secondes>coloroff>.\n\nRepose‐toi un peu, je t'attends ici.\nReviens me parler quand tu seras\nprêt à repasser le test !")
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
/*<104>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000001>La Citrouille perchée est un bar\nse trouvant au <color red<sud‐est >coloroff>de Célesbourg,\nsur une petite île.\n\nIl y a là‐bas <color blue<Tironne>coloroff>, une jeune fille\nà la voix magnifique... <pause 30>À vrai dire<0x10006:0xfecd>...<0x10006:0x00cd>\nje suis un fan.\n\nSurtout, ne le dis à personne !")
          	  case 1:
/*<106>*/ 		switch (scene_flags[77 /* 0x8 20 */]) {
          		  case 0:
          			flw_108:
/*<108>*/ 			printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000001>Bien, <heroname> ! Souhaites‐tu\npasser le test de l'attaque tornade ?\n[1-]Oui[2]Plus tard")
/*<109>*/ 			switch (choice(2)) {
          			  case 0:
/*<110>*/ 				printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000003>Bonne réponse !\nBien, commençons ! Tu peux\nplonger dans le ciel.")
/*<112>*/ 				scene_flags[0 'Skyloft'][77 /* 0x8 20 */] = false;
/*<113>*/ 				story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = true;
/*<114>*/ 				story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = true;
/*<251>*/ 				zone_temp_flags[13 /* 0x0 20 */] = true;
          			  case 1:
/*<111>*/ 				printf(/* textboxtype: 1, unk: 0, line: 81 */ "Tu peux attendre jusqu'à\nce que tu te sentes prêt !\n\n\nJe vais rester ici un moment,\nreviens quand tu veux !")
/*<253>*/ 				zone_temp_flags[13 /* 0x0 20 */] = false;
          			}
          		  case 1:
/*<122>*/ 			switch (story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */]) {
          			  case 0:
/*<102>*/ 				printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Que t'arrive‐t‐il ? Plonge donc !\nOu bien souhaites‐tu t'arrêter là ?\n[1-]Je continue[2]J'arrête")
/*<117>*/ 				switch (choice(2)) {
          				  case 0:
/*<121>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00000003>C'est la réponse que j'attendais !\nBien, envole‐toi dans le ciel.")
/*<250>*/ 					zone_temp_flags[13 /* 0x0 20 */] = true;
          				  case 1:
/*<118>*/ 					story_flags[643 /* us: 805A9B1D 0x10, jp: 805ACD9D 0x10 */] = false;
/*<119>*/ 					story_flags[364 /* us: 805A9B03 0x04, jp: 805ACD83 0x04 */] = false;
/*<120>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "Tu peux attendre jusqu'à\nce que tu te sentes prêt !\n\n\nJe vais rester ici un moment,\nreviens quand tu veux !")
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
/*<143>*/ 	printf(/* textboxtype: 1, unk: 0, line: 109 */ "Bien, <heroname> !\n\n\n\nJ'ai appris à ton célestrier à <color green<tournoyer\n>coloroff>lorsque tu appuies sur (A).")
          }

          void entrypoint_108_14() {
/*<115>*/ 	start()
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 83 */ "")
          }

          void entrypoint_108_31() {
/*<144>*/ 	start()
/*<147>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "Tu dois utiliser l'<color red<attaque tornade >coloroff>en\nappuyant sur (A) pour détruire\n<color red<dix cibles>coloroff> parmi les rochers devant toi.")
          }

          void entrypoint_108_15() {
/*<125>*/ 	start()
/*<126>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000002>Hé, <heroname> !\nOù vas‐tu ? La chevauchée céleste\na commencé, dépêche‐toi de plonger !")
          }

          void entrypoint_108_32() {
/*<145>*/ 	start()
/*<148>*/ 	printf(/* textboxtype: 1, unk: 0, line: 111 */ "Si tu parviens à détruire dix cibles\nen moins de <color red<120 secondes>coloroff>, tu\nseras un véritable chevaucheur !")
          }

          void entrypoint_108_16() {
/*<131>*/ 	start()
/*<284>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<286>*/ 		switch (zone_temp_flags[15 /* 0x0 80 */]) {
          		  case 0:
/*<288>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000016>Je me demande bien ce qui a pu se\nproduire pour que les monstres\ndisparaissent et que les lemlys ne\nsoient plus agressifs la nuit...")
          		  case 1:
/*<285>*/ 			printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000d>Regarde ça, <heroname> !\nC'est la nuit et pourtant, Miou\nn'est pas agressive !\n\nC'est vraiment fantastique !\nTu n'es pas d'accord ?")
/*<287>*/ 			zone_temp_flags[15 /* 0x0 80 */] = true;
          		}
          	  case 1:
/*<158>*/ 		switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          		  case 0:
/*<159>*/ 			printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000016>La nuit, je préfère me séparer de la\npetite Miou...\n\n\nUne nuit, je l'ai laissée à l'école...\nJe préfère oublier ce qui s'est passé.\n\n\nEn tout cas, ne sors pas la nuit,\nc'est bien trop dangereux.")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000004>Ne sors pas trop la nuit, c'est très\ndangereux !\n\n\nMême la petite Miou devient une bête\nféroce et sanguinaire...\n\n\nLa nuit, il se passe des choses vraiment\nétranges à Célesbourg...")
          		}
          	}
          }

          void entrypoint_108_33() {
/*<146>*/ 	start()
/*<149>*/ 	printf(/* textboxtype: 1, unk: 0, line: 112 */ "Bien, c'est parti !")
          }

          void entrypoint_108_17() {
/*<133>*/ 	start()
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000002>Hé, <heroname> !\nOù tu vas, comme ça ?\n\n\nDépêche‐toi de plonger et d'appeler\nton célestrier !")
          }

          void entrypoint_108_18() {
/*<135>*/ 	start()
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000002>Oh, <heroname> !\nTu veux un cours à cette heure‐ci ?\n[1-]Oui[2]Non...")
/*<137>*/ 	switch (choice(2)) {
          	  case 0:
/*<139>*/ 		printf(/* textboxtype: 1, unk: 0, line: 92 */ "Oh, quelle motivation !\n\n\n\nBien, parlons de l'histoire de\nCélesbourg !\n\n\nCélesbourg est une île qui flotte dans\nle ciel depuis plusieurs millénaires.\n\n\nNos ancêtres ont toujours vécu ici et\nsur les îles voisines.\n\n\n<0x10009:0x00090a00>Sous la ville s'étend la mer de nuages,\nd'où personne n'est jamais revenu...\n\n\nOn dit que c'est un vide absolu qui\ns'étend sous les nuages !\n\n\n<0x10009:0x000a0a00>Voilà, ce sera tout pour aujourd'hui.\nVa te préparer pour la chevauchée\ncéleste !")
          	  case 1:
/*<138>*/ 		printf(/* textboxtype: 1, unk: 0, line: 91 */ "Ah, euh... De toute façon, pas de\ncours aujourd'hui, puisque c'est le\njour de la chevauchée céleste.\n\nTu ferais mieux de sortir\nte préparer, d'ailleurs !")
          	}
          }

          void entrypoint_108_01() {
          	start()
/*<  9>*/ 	switch (story_flags[23 /* us: 805A9ADB 0x80, jp: 805ACD5B 0x80 */]) {
          	  case 0:
/*< 71>*/ 		switch (scene_flags[41 /* 0x4 02 */]) {
          		  case 0:
/*< 63>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "Fais‐moi confiance, va vite chercher\nton oiseau.")
          		  case 1:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000001>Qu'y a‐t‐il, <heroname> ?\nTu es tout pâle...\n\n\nComment ?<pause 50>\nTon célestrier a disparu ?\n\n\nMais c'est terrible<0x10006:0xfccd>...<0x10006:0x00cd>\nTu penses pouvoir le retrouver ?\n\n\nJe te conseille de partir à sa recherche\ntout de suite... <pause 40>sinon tu risques de rater\nla chevauchée céleste !\n\nEt sans ton <color red<oiseau>coloroff>, tu pourrais\ny laisser des <color red<plumes>coloroff><0x10006:0xfccd>...<pause 30> Haha...\nTu comprends ?\n\n<0x10009:0x00000005><0x10006:0x02cd>Ahem...<pause 30>")
/*<160>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*<161>*/ 				printf(/* textboxtype: 1, unk: 0, line: 19 */ "Oh, le directeur m'appelle ?\n\n\n\nEntendu ! Je te dois bien ça.\n\n\n\nNe t'en fais pas pour la cérémonie,\ncours chercher ton célestrier !")
          				flw_72:
/*< 72>*/ 				scene_flags[0 'Skyloft'][41 /* 0x4 02 */] = true;
          			  case 1:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 0, line: 20 */ "Hum, c'est peut‐être parce que\ntu n'as pas écouté ma requête\nqu'il t'arrive malheur...\n\nBah, oublie ça. Tu dis que le\ndirecteur m'appelle ?\n\n\nTrès bien, ne t'inquiète pas\npour la cérémonie et file\nchercher ton célestrier.")
/*<240>*/ 				story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = false;
          				goto flw_72
          			}
          		}
          	  case 1:
/*< 48>*/ 		switch (scene_flags[28 /* 0x2 10 */]) {
          		  case 0:
/*< 51>*/ 			switch (scene_flags[30 /* 0x2 40 */]) {
          			  case 0:
/*< 10>*/ 				printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x000a0404>Je suis content que Miou soit de retour.\n\n\n\nC'est un <color blue<l>coloroff><color blue<<color blue<e<color blue<mly>coloroff>... <0x10009:0x00000a00>Ils sont très mignons,\nmais méfie‐toi d'eux la nuit !\n[1-]Pourquoi ?[2-]La nuit ?")
/*< 11>*/ 				switch (choice(2)) {
          				  case 0:
/*< 12>*/ 					printf(/* textboxtype: 1, unk: 0, line: 9 */ "Ah, tu ne sais pas comment les\nlemlys se comportent la nuit ?\n\n\nC'est une histoire plutôt effrayante...")
          					flw_13:
/*< 13>*/ 					printf(/* textboxtype: 1, unk: 0, line: 10 */ "<0x10009:0x00000016>Lorsque la nuit tombe sur Célesbourg,\nun étrange pouvoir maléfique s'empare\ndes petits animaux comme les lemlys.\n\nLes monstres d'ordinaire tapis dans des\ngrottes ou des endroits sombres sortent\négalement de leur tanière la nuit.\n\nC'est pour cela que personne ici\nne sort à la nuit tombée, sauf en\ncas d'absolue nécessité.\n\nPour ceux comme toi qui aspirent\nà être chevaliers et sont entraînés\nà se battre, ça va encore...\n\nMais reste tout de même prudent !")
          				  case 1:
          					goto flw_13
          				}
          			  case 1:
/*< 93>*/ 				set_camera(17, 0)
/*< 49>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x000f040d>Oh, tu l'as ramenée saine et sauve !\n<pause 35><0x10009:0x00090400>Merci pour ton aide, <heroname>.\n\n\nBien, je vais nourrir la petite Miou,\nà présent.")
/*<155>*/ 				set_camera(20, 0)
/*< 52>*/ 				printf(/* textboxtype: 1, unk: 0, line: 15 */ "Rends‐toi sur la <color red<place du temple\n>coloroff>et dis au directeur que nous l'avons\nretrouvée.")
/*<241>*/ 				set_camera(21, 0)
/*<242>*/ 				printf(/* textboxtype: 1, unk: 0, line: 16 */ "Zelda doit être avec lui.\nVa vite les prévenir !")
/*<243>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 50, 'param3': 42}
/*< 50>*/ 				scene_flags[0 'Skyloft'][30 /* 0x2 40 */] = true;
          			}
          		  case 1:
/*< 46>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x00000006>Qu'y a‐t‐il, <heroname> ?")
/*< 61>*/ 				set_camera(14, 0)
/*< 60>*/ 				printf(/* textboxtype: 1, unk: 0, line: 12 */ "Monte sur le mur en fonçant dessus,\net <color green<accroche‐toi >coloroff>à la corniche !\n\n\nMais fais attention à ne pas laisser\nta <color red<jauge d'endurance>coloroff> se vider\ncomplètement quand tu es accroché.")
          			  case 1:
/*<  6>*/ 				switch (temp_flags[1 /* 0x1 02 */]) {
          				  case 0:
/*<  7>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00090400>Oh, tu serais d'accord pour ramener\nMiou ?\n[1-]Oui[2-]Non")
/*<  8>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_2:
/*<  2>*/ 						printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x0009040d>C'est bien aimable à toi.\nDésolé de te prendre de ton temps !")
/*< 43>*/ 						{'type': 'type3', 'subType': 4, 'param1': 3328, 'param2': 0, 'next': 44, 'param3': 22}
/*< 44>*/ 						printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00090400>Tu devrais pouvoir monter en\npassant par là‐bas. Accroche‐toi au\nrebord et essaie d'accéder au toit.\n\n<0x10007:0xff000000>Je compte sur toi !")
/*< 45>*/ 						temp_flags[2 /* 0x1 04 */] = true;
/*<235>*/ 						story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Je vois...\n\n\n\nDis simplement au directeur que\nmaître <color blue<Hulul>coloroff> a trouvé Miou et\nqu'il peut se rassurer, d'accord ?")
          					}
          				  case 1:
/*< 68>*/ 					switch (scene_flags[38 /* 0x5 40 */]) {
          					  case 0:
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 1, 'param3': 31}
/*<  1>*/ 						printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Alors, <heroname>, tu souhaites\nt'entraîner avec ton oiseau ce matin ?\n\n\nComment ?<pause 30> Tu as rendez‐vous ?\n<pause 30>Ah, avec <color blue<Zelda>coloroff>, bien sûr !")
/*< 42>*/ 						printf(/* textboxtype: 1, unk: 0, line: 1 */ "En fait, tu tombes très bien.\n\n\n\nFigure‐toi que <color red<Miou>coloroff>, l'animal de\ncompagnie de <color blue<Gaepora>coloroff>, notre directeur\nd'école, s'est encore enfuie...")
/*<237>*/ 						set_camera(12, 0)
/*<236>*/ 						printf(/* textboxtype: 1, unk: 0, line: 2 */ "Regarde un peu où elle est allée\nse fourrer !<0x1000A:0x001000cd>\n\n\n<0x1000A:0xffff00cd>Zelda et son père ne peuvent pas\ns'occuper d'elle aujourd'hui, ils\ndoivent se consacrer aux préparatifs\nde la cérémonie...\nIls m'ont donc chargé de la nourrir,\nmais la cérémonie va bientôt\ncommencer et je ne peux aller la\nchercher dans cette tenue...\n<0x10007:0xff000000>Tu ne voudrais pas me la ramener ?\n[1-]D'accord[2-]Pas le temps")
/*<  4>*/ 						switch (choice(2)) {
          						  case 0:
/*< 54>*/ 							set_camera(-1, 0)
          							goto flw_2
          						  case 1:
/*< 55>*/ 							set_camera(-1, 0)
/*<  3>*/ 							printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00000a00>Je vois...\n\n\n\nDis simplement au directeur que\nmaître <color blue<Hulul>coloroff> a trouvé Miou et\nqu'il peut se rassurer, d'accord ?")
/*<  5>*/ 							temp_flags[1 /* 0x1 02 */] = true;
/*<234>*/ 							story_flags[770 /* us: 805A9B2A 0x04, jp: 805ACDAA 0x04 */] = true;
          						}
          					  case 1:
/*< 65>*/ 						switch (scene_flags[37 /* 0x5 20 */]) {
          						  case 0:
/*< 90>*/ 							set_camera(9, 0)
/*< 67>*/ 							printf(/* textboxtype: 1, unk: 2, line: 43 */ "<0x10009:0x000b0a06>Arrête un peu de lambiner,\net fais ce que je te dis !")
          						  case 1:
/*<154>*/ 							story_flags[565 /* us: 805A9B19 0x10, jp: 805ACD99 0x10 */] = false;
/*<174>*/ 							{'type': 'type3', 'subType': 1, 'param1': 10, 'param2': 100, 'next': 89, 'param3': 17}
/*< 89>*/ 							set_camera(9, 0)
/*<264>*/ 							switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          							  case 0:
/*<265>*/ 								printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x000b0a0d>Oui, comme cela. Lorsque tu maintiens\n(Z) enfoncé en regardant dans une\ndirection, tu peux <color green<cibler>coloroff> quelque chose.<0x10011:0x07cd>\n\n<0x10009:0x00000c04>Oh ?<pause 15> Ne prends pas cet air blasé.\nTu penses peut‐être que je radote,\nmais il ne faut pas négliger les bases !\n\n<0x10009:0x00000a00>En <color red<mode héroïque>coloroff>,<pause 30> le nombre de cœurs\nque tu perds en subissant des dégâts est\n<sound 4><color red<doublé>coloroff> ! Il devient donc encore plus\nimportant de <color green<cibler>coloroff> avec (Z).<0x10011:0x07cd>\nMais nous sommes un peu éloignés.\nMonte donc jusqu'ici pour poursuivre\ncette conversation.")
          								flw_58:
/*< 58>*/ 								set_camera(10, 0)
/*< 41>*/ 								printf(/* textboxtype: 1, unk: 2, line: 38 */ "<0x10009:0x000b0a00>Tu dois pouvoir monter sur cette\ncaisse en bois si tu <color green<fonces>coloroff> dessus.\n\n\nPour <color green<foncer>coloroff>, il suffit de te déplacer\ntout en maintenant (A) enfoncé.\nTu verras, tu peux le faire !\n\nAllez, monte jusqu'ici.")
/*< 66>*/ 								scene_flags[0 'Skyloft'][37 /* 0x5 20 */] = true;
          							  case 1:
/*<263>*/ 								printf(/* textboxtype: 1, unk: 2, line: 41 */ "<0x10009:0x000b0a0d>Oui, comme cela. Lorsque tu maintiens\n(Z) enfoncé en regardant dans une\ndirection, tu peux <color green<cibler>coloroff> quelque chose.<0x10011:0x07cd>\n\nTu peux par exemple facilement\nentamer une conversation avec\nquelqu'un en le <color green<ciblant >coloroff>avec (Z) puis\nen appuyant sur (A).<0x10011:0x07cd>\nMême s'il n'y a rien à <color green<cibler>coloroff>, (Z) te\npermet de regarder droit devant toi.<0x10011:0x07cd>\n\n\nMais nous sommes un peu éloignés.\nMonte donc jusqu'ici pour poursuivre\ncette conversation.")
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
/*<141>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000004>Dis donc, ça c'est la chaise des\nprofesseurs ! Va t'asseoir sur\nles bancs des élèves.")
          }

          void entrypoint_108_02() {
/*< 14>*/ 	start()
/*< 38>*/ 	switch (story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */]) {
          	  case 0:
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000002>Qu'est‐ce que tu attends ? Dépêche‐toi\nde <color red<plonger>coloroff> en <color green<fonçant>coloroff> vers le ciel avec\n(A), et de monter sur ton célestrier !\n\nAppelle ton oiseau avec (v) !<0x10011:0x09cd>")
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
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x00000002>La <color red<chevauchée céleste >coloroff>va pouvoir\ncommencer.\n\n\n<0x30001:0x><heroname> a bien failli ne pas\npouvoir participer...\n\n\nMais heureusement, tout le monde\na répondu à l'appel ! Bien, je vais\ncommencer l'explication des <color red<règles>coloroff>.")
          		flw_16:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Nous allons d'abord procéder au lâcher\ndu célestrier porteur de la statuette\nd'oiseau...\n\nÀ mon signal, vous <color red<foncerez >coloroff>avec (A)\njusqu'à pouvoir <color red<plonger >coloroff>dans le ciel\net monter sur votre oiseau.\n\nUne fois en chute libre, n'oubliez pas\nd'appuyer sur (v) pour <color green<siffler votre\noiseau >coloroff>!<0x10011:0x09cd>\n\nLe premier qui rattrapera l'oiseau\net saisira la statuette avec (A) sera\ndéclaré vainqueur !\n\n<0x1000A:0x000200cd>Voilà, c'est aussi simple que cela.\nTout le monde a bien compris ?\n[1-]Oui[2?]Non")
/*< 18>*/ 		switch (choice(2)) {
          		  case 0:
/*< 30>*/ 			set_camera(3, 0)
/*< 17>*/ 			printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x00000003><0x10008:0x01cd>Bien !\n\n\n\nLe vainqueur passera bien sûr en classe\nsupérieure,<pause 20> et recevra un <color red<présent\nhonorifique>coloroff>.\n\nCe présent lui sera remis par celle\nqui a été choisie pour <color red<représenter\nla Déesse>coloroff>...\n\nEt à l'occasion de ce 25<0x30000:0x>e  anniversaire,\nla cérémonie aura lieu sur la <color red<statue\nde la Déesse >coloroff>!\n\nCette année, la <color red<représentante de la\nDéesse >coloroff>a tenu à <color red<tisser elle‐même >coloroff>le\nprésent. <pause 20>Vous la connaissez tous...")
/*<185>*/ 			{'type': 'type3', 'subType': 4, 'param1': 267, 'param2': 3840, 'next': 178, 'param3': 13}
/*<178>*/ 			set_camera(5, 0)
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x01000009><0x10008:0x01cd>C'est la ravissante Zelda !")
/*<194>*/ 			{'type': 'type3', 'subType': 4, 'param1': 1048, 'param2': 3084, 'next': 31, 'param3': 13}
/*< 31>*/ 			set_camera(2, 0)
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 1, line: 31 */ "C'est le moment pour chacun\nd'entre vous de prouver que votre\nentraînement a porté ses fruits !\n\nEt attention, le lancer d'objets et les\ncharges intempestives sont interdits.")
/*<179>*/ 			set_camera(6, 0)
/*<182>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 4, 'next': 183, 'param3': 50}
/*<183>*/ 			{'type': 'type3', 'subType': 4, 'param1': 512, 'param2': 23, 'next': 176, 'param3': 13}
/*<176>*/ 			printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10008:0x01cd>Compris, <0x10009:0x04191700>Hergo ?")
/*< 40>*/ 			set_camera(4, 0)
/*<184>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 53, 'param3': 50}
/*< 53>*/ 			make_actor_do_something(0, 0)
/*< 39>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000002>À vos marques... Prêts...")
/*< 37>*/ 			story_flags[31 /* us: 805A9ADA 0x80, jp: 805ACD5A 0x80 */] = true;
          		  case 1:
/*< 19>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000052>Hem, je répète !")
/*< 29>*/ 			set_camera(1, 0)
          			goto flw_16
          		}
          	}
          }

