          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf("\x0E\x01\x09\x04C\x4500Oups, c'est manqué! Hmm, toute cette\npuissance, et même pas capable d'atteindre\nla cible.\n\n\x0E\x01\x09\x04A\x4000Bon, je recharge la machine. Tiens bon\njusqu'à mon prochain signal!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf("\x0E\x01\x09\x04\x00\x01Je vais tenter d'en apprendre plus sur\nles statues.")
          		  case 1:
/*<427>*/ 			printf("\x0E\x01\x09\x04\x08\xB07Si on en croit les écrits anciens, il existerait,\nlà\x2010haut dans le ciel, un endroit appelé les <r<îles\nde la Déesse>>.\n\nLes vieilles statues comme celle\x2010là permettraient\nd'y aller.\n\n\nMais celle\x2010ci m'a l'air particulière.\nOn dirait qu'elle <r<active>> toutes les autres.\n\n\n\x0E\x01\x09\x04\x16\x1900Ça a tout l'air d'une histoire à dormir debout,\nmais moi, je crois en cette légende.\n\n\n\x0E\x01\x09\x04\x00\xB04On trouve ces statues un peu partout, et j'ai pas\ntrouvé de meilleure explication à leur présence.")
          			flw_62:
/*< 62>*/ 			printf("\x0E\x01\x09\x04\x18\x1700Qu'en penses\x2010tu? Tu veux en savoir plus?\n[1]Oui[2-]Non merci")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf("\x0E\x01\x09\x04\x15\x1902Toi aussi tu es un amateur de contes anciens?\n\n\n\n\x0E\x01\x09\x04\x16\xB00Bien, je vais tout t'expliquer.\n\n\n\nLes habitants de ces îles de la Déesse montent\ndes oiseaux qu'on ne trouve que haut dans le\nciel...\n\n\x0E\x01\x09\x04\x00\x1E00On dit que c'est un ensemble d'îles où l'on\nvénère la Déesse, un véritable havre de paix...\n\n\n\x0E\x01\x09\x04\x00\xB00Et que leur civilisation est beaucoup plus\navancée que la nôtre.")
/*<426>*/ 				printf("\x0E\x01\x09\x04\x08\xB00Et j'ai gardé le meilleur pour la fin, tiens\x2010toi\nbien!\n\n\n\x0E\x01\x09\x04\x1F\x1E00Parce que c'est la Déesse qui a créé ces îles,\non y trouve des tonnes de choses inconnues\net extraordinaires!\n\n\x0E\x01\x09\x04\x00\x1908Là\x2010bas, tous les bâtiments sont en or! Des\nsources de jouvence s'écoulent dans les rivières\nsans jamais se tarir!\n\n\x0E\x01\x09\x04\x00\xB00Sur les arbres poussent des fruits qui guérissent\ntoutes les maladies! Les champs sont remplis de\ncitrouilles et de fleurs colorées!\n\n\x0E\x01\x09\x04\x17\x1900Et puis le climat y est clément, jamais trop\nchaud ni trop froid, comme un éternel\nprintemps! C'est ça, les îles de la Déesse.\n\n\x0E\x01\x09\x04\x00\xB05\x0E\x01\x08\x02\x1CDNon, mais, c'est incroyable tout ça\nnon? \n\n\n\x0E\x01\x09\x04!\x1806\x0E\x01\x08\x02\x2CDTu voudrais en savoir plus,\nje gage?\n[1]Bien sûr![2-]Bof, non.")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf("\x0E\x01\x09\x04'\x1956Super! Je vois que tu as été complètement\nséduit par les îles de la Déesse.\n\n\n\x0E\x01\x09\x04\x16\x1E00J'aimerais pouvoir t'en dire plus, mais pour\ncela, il faudrait que j'étudie davantage.\n\n\n\x0E\x01\x09\x04\x00\xB00On en rediscutera la prochaine fois!")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf("\x0E\x01\x09\x04\x16\x1E56Ah, j'aurais bien aimé t'en parler davantage...\nLa prochaine fois, peut\x2010être?")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf("\x0E\x01\x09\x04\x16\x1E56Ah, j'aurais bien aimé t'en parler davantage...\nLa prochaine fois, peut\x2010être?")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf("\x0E\x01\x09\x04\x00\x08Merci de ton aide!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf("\x0E\x01\x09\x04\x08\xB0AC'était quoi, ces pestes rouges? Je pensais pas\ntrouver ce genre d'indésirables dans cette forêt\nsi paisible...\n\n\x0E\x01\x09\x04\x16\x1E00Et toi? Tu es le deuxième de ton espèce que\nje croise aujourd'hui! Il se passe vraiment\ndes choses étranges, ces temps\x2010ci.\n\n\x0E\x01\x09\x04\x00\xB00Pour te remercier de m'avoir aidé, je vais\nt'apprendre deux ou trois petites choses.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf("\x0E\x01\x09\x04\x08\xB01Je suis venu dans cette forêt pour étudier\nl'histoire ancienne. Je suis un Goron, et\nje me nomme <b<Marcogoro>>.\n\n\x0E\x01\x09\x04\x00\x1700Si on en croit les écrits anciens, il existerait,\nloin dans le ciel, un endroit appelé les <r<îles\nde la Déesse>>.\n\n\x0E\x01\x09\x04\x00\xB00Cette <b<vieille statue >>permettrait de <r<se rendre\ndans le ciel >>et servirait aussi de point de repère\nlorsqu'on descend sur terre.\n\n<pling><r<Examiner toutes les statues >>à mesure qu'on les\ntrouve augmenterait le nombre de points de\nrepère et s'avérerait très pratique.\n\nCette statue\x2010ci semble particulière, elle devrait\npermettre d'<r<activer>> toutes les autres.\n\n\n\x0E\x01\x09\x04\x16\x1907Ça a tout l'air d'une histoire à dormir debout,\nmais moi, je crois en cette légende.\n\n\nOn trouve ces statues un peu partout, et je n'ai\npas trouvé de meilleure explication à leur\nprésence.")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf("\x0E\x01\x09\x04\x00\xB52À moi!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf("\x0E\x01\x09\x04\x1800\xB52Allez\x2010vous\x2010en! Laissez\x2010moi tranquille!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x05\x042\x00\x0E\x01\x12\x04\x00\x04Maître Link.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf("\x0E\x01\x09\x04\x15\x1B09\x0E\x01\x08\x02\x1CDOooh!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf("Bon, cette fois, c'est toi qui sers de boulet!\nJe t'avertis, je paye pas les pots cassés...")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf("\x0E\x01\x05\x04K\x00Voici la <b<terre>> dont parlent les légendes\nde Célesbourg.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 444, 'param3': 6}
/*<444>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHé! Ho! \x0E\x03\x01\x00Link!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FHéhéhé, attends de voir ça... Tu n'en croiras\npas tes yeux! Voici l'ultime arme super secrète\ndu grand Hergo!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf("Je te présente... la <r<mégatapulte>>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Tu en es bouche bée, et c'est bien normal!\nTu serais surpris de savoir combien d'efforts\nj'ai dû mettre pour construire ce chef\x2010d'\x153uvre!")
/*<462>*/ 	printf("Regarde\x2010moi ça!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300J'ai déblayé la zone entière pour pouvoir\ninstaller le rail qui permet de déplacer\nmon bidule. Et j'ai tout fait tout seul!\n\nHa! Je m'épate moi\x2010même...<pause1E> Tout ce talent\nqui ne demandait qu'à s'exprimer!\n\n\n\x0E\x01\x09\x04\x2841\x4000Il ne reste plus qu'à utiliser cette machine de\nrêve pour lui faire avaler sa soupe, à ce démon!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000Une seule de mes bombes devrait suffire\npour calmer les nerfs de notre\ngros\x2010méchant\x2010pas\x2010beau!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf("Oupelaye... Ce monstre est arrivé juste\nun peu trop tôt.")
/*<451>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000La machine a encore besoin de quelques\najustements avant de fonctionner parfaitement.\n\n\nJe t'avertirai quand tout sera prêt.\nOccupe\x2010toi de lui en attendant!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf("\x0E\x01\x05\x04K\x00Cet endroit s'appelle le <b<site du sceau>>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf("\x0E\x01\x06\x02\xFDCDToi... Petit homme...\n\n\n\n\x0E\x01\x06\x02\xFDCDToi, fils du destin, qui descends du ciel...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf("\x0E\x01\x09\x04\x00\x0FLe sceau a été brisé!\n\n\n\nLes explications attendront. Pour le moment,\nil faut empêcher ce monstre de s'échapper.\n\n\nIl ne doit pas s'approcher du temple!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf("\x0E\x01\x09\x04\x10\x160DMaintenant, Link!<pause1E>\n\n\n\nUtilise ton <r<éclat céleste >>sur le pilier de pierre!\n\n\n\n\x0E\x01\x09\x04\x11\x1700Vite!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 511, 'param3': 6}
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 512, 'param3': 6}
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 375, 'param3': 6}
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 517, 'param3': 6}
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf("\x0E\x01\x09\x04\x2800SOupelaye!\x0E\x01\x05\x04\x1E\x00")
/*<254>*/ 	printf("\x0E\x01\x09\x04\x2800\x4000On dirait que le sceau va lâcher d'un moment\nà l'autre...\x0E\x01\x05\x04\x1E\x00")
/*<255>*/ 	printf("\x0E\x01\x09\x04\x283E\x400FSurtout pas de panique!\n\n\n\n\x0E\x01\x09\x04\x2841\x00Tu sais qu'on peut se fier à ma <r<mégatapulte>>,\npas vrai?")
/*<256>*/ 	printf("\x0E\x01\x09\x04\x2800\x00Tant qu'elle sera là, le mot « défaite » fait\npas partie de mon vocabulaire!\n\n\n\x0E\x01\x09\x04\x2800\x200J'ai des bombes à lancer, une terre à défendre.\nJ'ai une mission à remplir.")
/*<257>*/ 	printf("\x0E\x01\x09\x04\x2800\x200Bon. OK, Link! Essaie quand\nmême de ne pas trop te mettre dans mes\njambes pendant que je sauve le monde!")
/*<516>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<371>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<522>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<566>*/ 	story_flags[169 /* us: 805A9AE2 0x01, jp: 805ACD62 0x01 */] = false;
/*<567>*/ 	story_flags[176 /* us: 805A9AE2 0x80, jp: 805ACD62 0x80 */] = true;
/*<312>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 419, 'param3': 42}
/*<419>*/ 	story_flags[483 /* us: 805A9B10 0x02, jp: 805ACD90 0x02 */] = true;
          }

          void entrypoint_500_74() {
/*<480>*/ 	start()
/*<478>*/ 	printf("\x0E\x01\x06\x02\xFDCDLève l'épée divine vers le ciel... <pause0F>\x0E\x01\x06\x02\xFDCDEt libère son\nénergie pour frapper l'aura maléfique...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf("\x0E\x03\x01\x00Link! Le <r<pilier de pierre >>doit se\ntrouver sur le front du démon.\n\n\n\x0E\x01\x09\x04\xE00\x13Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf("\x0E\x01\x05\x04K\x00Soyez prudent, \x0E\x01\x12\x04\x00\x0BMaître.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, veuillez prendre connaissance de ces\ninformations pertinentes :")
/*<482>*/ 	printf("Cette porte semble avoir été ouverte récemment mais,\nà présent, une puissante énergie la maintient fermée.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf("\x0E\x01\x09\x04\x00&Bien joué, Link!\nAvoue que sans le grand Hergo, tu aurais été\nbien mal pris! Pas besoin de me remercier...\n\nBon, il faut aller activer la porte du temps,\nmaintenant! Je vais y aller!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLe <r<pilier de pierre >>est planté dans le front de la bête.\nVous ne devez pas fuir sans avoir refermé le sceau.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nVous devez refermer le sceau qui emprisonne\nle démon.\n\n\nVous ne pouvez pas fuir maintenant, \x0E\x01\x12\x04\x00\x02Maître.")
          			  case 1:
/*<142>*/ 				printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLe <r<pilier de pierre >>est planté dans le front de la bête.\nVous ne devez pas fuir sans avoir refermé le sceau.")
          			}
          		  case 1:
/*<138>*/ 			printf("")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf("\x0E\x01\x09\x04>\x4515\x0E\x01\x08\x02\x1CDGaaah!\n\n\n\n\x0E\x01\x09\x04\x00\x4000Avec tous ces tremblements, les murs se sont\nécroulés et je ne peux plus atteindre mes\nbombes! Pas évident. Qu'est\x2010ce je vais faire?")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf("\x0E\x01\x09\x04\x13\x1907Mais comment as\x2010tu fait ça?\nC'est un tour de magie?\n\n\n\x0E\x01\x09\x04\x17\x1B08La statue a réagi quand tu t'es approché!\nC'est fou!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf("\x0E\x01\x09\x04D\x4300Je l'ai eue, mais on dirait que c'était pas au bon\nmoment! Un peu trop tard, peut\x2010être...\n\n\n\x0E\x01\x09\x04\x00\x4000Bon, je recharge la bête. Tiens bon jusqu'à\nmon prochain signal!")
          }

          void entrypoint_500_25() {
/*< 35>*/ 	start()
/*<525>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 70>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 38>*/ 	scene_flags[10 'Sealed Grounds'][10 /* 0x0 04 */] = true;
/*< 41>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<582>*/ 	story_flags[852 /* us: 805A9B34 0x04, jp: 805ACDB4 0x04 */] = true;
          }

          void entrypoint_500_42() {
/*< 77>*/ 	start()
/*< 75>*/ 	printf("\x0E\x01\x09\x04 \x3010Fiou, Link! Cette fois\x2010ci,\nj'ai vraiment cru qu'on allait y passer!\nUne chance, on s'en est sortis.\n\n\x0E\x01\x09\x04B\x200Je retourne au temple, rejoins\x2010moi là\x2010bas!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf("\x0E\x01\x09\x04>\x4026\x0E\x03\x01\x00Link! <r<Ramène\x2010toi par ici>>, et que\nça saute! Il y a un passage près du temple,\nsur le côté!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf("\x0E\x01\x09\x04 \x403CÇa y est. Es\x2010tu en place? Vise bien le pilier\nde pierre sur son museau!")
          }

          void entrypoint_500_26() {
/*< 36>*/ 	start()
/*<526>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 48>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 39>*/ 	scene_flags[10 'Sealed Grounds'][11 /* 0x0 08 */] = true;
/*< 42>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<583>*/ 	story_flags[853 /* us: 805A9B34 0x08, jp: 805ACDB4 0x08 */] = true;
          }

          void entrypoint_500_43() {
/*<131>*/ 	start()
/*<405>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 369, 'param3': 32}
/*<369>*/ 	set_camera(59, 0)
/*<401>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 260, 'next': 403, 'param3': 15}
/*<403>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 402, 'param3': 13}
/*<402>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 4, 'next': 483, 'param3': 14}
/*<483>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 404, 'param3': 17}
/*<404>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 521, 'param3': 17}
/*<521>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<133>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<262>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 132, 'param3': 13}
/*<132>*/ 	printf("\x0E\x03\x01\x00Link! On dirait bien que\nle gros\x2010méchant\x2010pas\x2010beau refait des siennes!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf("Attends\x2010moi un peu, je vais aller me préparer!")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHé! Ho! \x0E\x03\x01\x00Link!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 229, 'param3': 6}
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FHéhéhé, attends de voir ça... Tu n'en croiras\npas tes yeux! Voici l'ultime arme super secrète\ndu grand Hergo!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf("Je te présente... la <r<mégatapulte>>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Tu en es bouche bée, et c'est bien normal!\nTu serais surpris de savoir combien d'efforts\nj'ai dû mettre pour construire ce chef\x2010d'\x153uvre!")
/*<361>*/ 	printf("Regarde\x2010moi ça!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300J'ai déblayé la zone entière pour pouvoir\ninstaller le rail qui permet de déplacer\nmon bidule. Et j'ai tout fait tout seul!\n\nHa! Je m'épate moi\x2010même...<pause1E> Tout ce talent\nqui ne demandait qu'à s'exprimer!\n\n\n\x0E\x01\x09\x04\x2841\x4000Il ne reste plus qu'à utiliser cette machine de\nrêve pour lui faire avaler sa soupe, à ce démon!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000Une seule de mes bombes devrait suffire\npour calmer les nerfs de notre\ngros\x2010méchant\x2010pas\x2010beau!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("Oupelaye... Ce monstre est arrivé juste\nun peu trop tôt.")
/*<228>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000La machine a encore besoin de quelques\najustements avant de fonctionner parfaitement.\n\n\nJe t'avertirai quand tout sera prêt.\nOccupe\x2010toi de lui en attendant!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nVous devez refermer le sceau qui emprisonne\nle démon.\n\n\nVous ne pouvez pas fuir maintenant, \x0E\x01\x12\x04\x00\x02Maître.")
          }

          void entrypoint_500_27() {
/*< 37>*/ 	start()
/*<527>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = false;
/*< 69>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*< 40>*/ 	scene_flags[10 'Sealed Grounds'][12 /* 0x0 10 */] = true;
/*< 43>*/ 	scene_flags[10 'Sealed Grounds'][13 /* 0x0 20 */] = false;
/*<584>*/ 	story_flags[854 /* us: 805A9B34 0x10, jp: 805ACDB4 0x10 */] = true;
          }

          void entrypoint_500_61() {
/*<220>*/ 	start()
/*<243>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 244, 'param3': 32}
/*<244>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 245, 'param3': 16}
/*<245>*/ 	printf("\x0E\x01\x09\x04\x2800\x04\x0E\x01\x08\x02\x1CDHé! Ho! \x0E\x03\x01\x00Link!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 501, 'param3': 6}
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf("\x0E\x01\x07\x04\x2800\x0FHéhéhé, attends de voir ça... Tu n'en croiras\npas tes yeux! Voici l'ultime arme super secrète\ndu grand Hergo!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 346, 'param3': 6}
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf("Je te présente... la <r<mégatapulte>>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf("\x0E\x01\x09\x04\x2800\x18Tu en es bouche bée, et c'est bien normal!\nTu serais surpris de savoir combien d'efforts\nj'ai dû mettre pour construire ce chef\x2010d'\x153uvre!")
/*<363>*/ 	printf("Regarde\x2010moi ça!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf("\x0E\x01\x09\x04\x2840\x4300J'ai déblayé la zone entière pour pouvoir\ninstaller le rail qui permet de déplacer\nmon bidule. Et j'ai tout fait tout seul!\n\nHa! Je m'épate moi\x2010même...<pause1E> Tout ce talent\nqui ne demandait qu'à s'exprimer!\n\n\n\x0E\x01\x09\x04\x2841\x4000Il ne reste plus qu'à utiliser cette machine de\nrêve pour lui faire avaler sa soupe, à ce démon!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf("\x0E\x01\x09\x04\x2804\x4000Une seule de mes bombes devrait suffire\npour calmer les nerfs de notre\ngros\x2010méchant\x2010pas\x2010beau!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf("Oupelaye... Ce monstre est arrivé juste\nun peu trop tôt.")
/*<252>*/ 	printf("\x0E\x01\x09\x04\x2841\x4000La machine a encore besoin de quelques\najustements avant de fonctionner parfaitement.\n\n\nJe t'avertirai quand tout sera prêt.\nOccupe\x2010toi de lui en attendant!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf("\x0E\x01\x09\x04\x17\x1B08La statue a réagi! On dirait que tu en sais plus\nque ce que je pensais!")
          	  case 1:
/*<355>*/ 		printf("\x0E\x01\x09\x04\x15\x1B05\x0E\x01\x08\x02\x1CDOh!")
/*<357>*/ 		printf("\x0E\x01\x09\x04\x13\x1909Oh\x2010ho! Mais qu'est\x2010ce que...\n\n\n\n\x0E\x01\x09\x04\x17\x1B08Comment as\x2010tu fait ça? La statue a réagi! On\ndirait que tu en sais plus que ce que je pensais!")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf("\x0E\x01\x09\x04\x00&Hoho, on dirait qu'il s'est acheté une paire\nde bras! Très bien!\n\n\nC'est en plein le bon moment de montrer ce\nque ma mégatapulte est capable de faire!\n\n\n\x0E\x01\x09\x04B\x4000Je te ferai signe dès que je serai prêt.\nOccupe\x2010toi de lui en attendant!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLe démon s'est à nouveau réveillé. Vous ne pouvez\npas fuir maintenant.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nVous devez à nouveau refermer le sceau qui\nemprisonne le démon.\n\n\nVous ne pouvez pas fuir maintenant, \x0E\x01\x12\x04\x00\x02Maître.")
          		  case 1:
/*<163>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nLe démon s'est à nouveau réveillé. Vous ne pouvez\npas fuir maintenant.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf("")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 350, 'param3': 6}
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf("\x0E\x01\x09\x04\x2800\x4000On dirait que le sceau va lâcher d'un moment\nà l'autre...\x0E\x01\x05\x04\x1E\x00")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf("\x0E\x01\x09\x04\x283E\x400FSurtout pas de panique!\n\n\n\n\x0E\x01\x09\x04\x2841\x00Tu sais qu'on peut se fier à ma <r<mégatapulte>>,\npas vrai?")
/*<237>*/ 	printf("\x0E\x01\x09\x04\x2800\x00Tant qu'elle sera là, le mot « défaite » fait\npas partie de mon vocabulaire!\n\n\n\x0E\x01\x09\x04\x2800\x200J'ai des bombes à lancer, une terre à défendre.\nJ'ai une mission à remplir.")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf("\x0E\x01\x09\x04\x2800\x200Bon. OK, Link! Essaie quand\nmême de ne pas trop te mettre dans mes\njambes pendant que je sauve le monde!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf("")
          }

          void entrypoint_500_29() {
/*< 72>*/ 	start()
/*<538>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 2, 'next': 100, 'param3': 46}
/*<100>*/ 	switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          	  case 0:
/*<528>*/ 		switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          		  case 0:
/*<530>*/ 			switch (scene_flags[43 /* 0x4 08 */]) {
          			  case 0:
/*<534>*/ 				printf("\x0E\x01\x09\x04\x00\x4026\x0E\x03\x01\x00Link! Je peux plus atteindre ma\nréserve de bombes pour recharger la machine!\n\n\n\x0E\x01\x09\x04 \x4000Bon. Tu vas monter dans la machine et je vais\nte catapulter sur sa tête! Tiens bien ta tuque!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf("\x0E\x01\x09\x04\x00&La <r<mégatapulte>> est prête à livrer bataille!\n\n\n\nAppuie sur \x0E\x02\x04\x02\x1ECD pour te préparer à tirer\nsur cette vermine!\x0E\x01\x11\x02\x10CD\n\n\nTu peux déplacer la machine avec \x0E\x02\x04\x02\xECD et viser\navec le curseur. Ensuite, tire\x2010lui dessus,\net BOUM!")
          				  case 1:
/*<531>*/ 					printf("\x0E\x01\x09\x04\x00\x4226Une fois de plus, le grand Hergo et sa\n<r<mégatapulte>> entrent en jeu!\n\n\nAussitôt que je serai prêt, je te ferai signe en\napparaissant sur \x0E\x02\x04\x02\x1ECD! Tu devrais être habitué,\nmaintenant!\x0E\x01\x11\x02\x10CD\n\n\x0E\x01\x09\x04B\x4000On va lui montrer de quel bois on se chauffe\navec notre super attaque combinée!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf("\x0E\x01\x09\x04\x00&La <r<mégatapulte>> est prête à livrer bataille!\n\n\n\nAppuie sur \x0E\x02\x04\x02\x1ECD pour te préparer à tirer\nsur cette vermine!\x0E\x01\x11\x02\x10CD\n\n\nTu peux déplacer la machine avec \x0E\x02\x04\x02\xECD et viser\navec le curseur. Ensuite, tire\x2010lui dessus,\net BOUM!")
          				  case 1:
/*<535>*/ 					printf("\x0E\x01\x09\x04\x04\x4100C'est le moment idéal pour faire valoir\nla <r<mégatapulte>>, ma super arme secrète!\n\n\n\x0E\x01\x09\x04\x00\x300J'te ferai signe quand je serai prêt, tu pourras\nappuyer sur \x0E\x02\x04\x02\x1ECD pour tirer! \x0E\x01\x09\x04\x00\x4000En attendant,\ndébrouille\x2010toi avec ton épée!\x0E\x01\x11\x02\x10CD")
          				}
          			  case 1:
/*< 78>*/ 				switch (scene_flags[71 /* 0x9 80 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          					  case 0:
/*<261>*/ 						scene_flags[10 'Sealed Grounds'][97 /* 0xD 02 */] = true;
/*<561>*/ 						switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          						  case 0:
/*<564>*/ 							switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          							  case 0:
          								flw_194:
/*<194>*/ 								printf("\x0E\x01\x09\x04\x00&Dis\x2010moi donc... Où est\x2010ce que je t'envoie\ncette fois?\n\n\n[1]Jeux dans\nle ciel[2]Jeux sur\nterre[3-]Nulle part")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf("Les jeux du ciel, hein? Compris!\nOù veux\x2010tu aller, exactement?\n\n\n[1]Roue de\nfortune[2]Île aux\ninsectes[3]Autre part")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf("\x0E\x01\x09\x04B\x342C'est parti, attache bien ta tuque!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf("Où veux\x2010tu aller, exactement?\n[1]Tranche\x2010bambou[2]Tir à la\ncitrouille[3-]Nulle part")
/*<572>*/ 											switch (choice(3)) {
          											  case 0:
          												flw_203:
/*<203>*/ 												zone_temp_flags[3 /* 0x1 08 */] = true;
          												goto flw_204
          											  case 1:
/*<205>*/ 												zone_temp_flags[4 /* 0x1 10 */] = true;
          												goto flw_204
          											  case 2:
          												flw_200:
/*<200>*/ 												printf("Reviens me voir si tu veux que je t'envoie\nquelque part!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf("Les jeux du ciel, hein? Compris!\nOù veux\x2010tu aller, exactement?\n[1]Roue de fortune[2]Île aux\ninsectes[3]Tranche\x2010bambou[4-]Nulle part")
/*<587>*/ 										switch (choice(4)) {
          										  case 0:
          											goto flw_209
          										  case 1:
          											goto flw_202
          										  case 2:
          											goto flw_203
          										  case 3:
          											goto flw_200
          										}
          									}
          								  case 1:
/*<198>*/ 									printf("Aux jeux sur terre? Entendu! Où veux\x2010tu\naller exactement?\n\n\n[1]Grand défi[2]Fouille\x2010rubis[3]Wagonnet\ndu péril[4-]Nulle part")
/*<201>*/ 									switch (choice(4)) {
          									  case 0:
/*<206>*/ 										zone_temp_flags[5 /* 0x1 20 */] = true;
          										goto flw_204
          									  case 1:
/*<207>*/ 										zone_temp_flags[6 /* 0x1 40 */] = true;
          										goto flw_204
          									  case 2:
/*<208>*/ 										zone_temp_flags[7 /* 0x1 80 */] = true;
          										goto flw_204
          									  case 3:
          										goto flw_200
          									}
          								  case 2:
          									goto flw_200
          								}
          							  case 1:
/*<563>*/ 								printf("\x0E\x01\x09\x04\x00\x04Salut, Link!\n\n\n\nBien sûr que le grand Hergo peut t'aider!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf("Hé, je peux t'envoyer à un nouvel endroit\navec ma super machine!")
          									flw_575:
/*<575>*/ 									printf("Avec moi aux commandes de la mégatapulte,\ntu ne vas pas t'ennuyer, c'est garanti!\n\n\nSi tu atterris à un endroit qui ne t'est pas\nfamilier, profites\x2010en pour explorer un peu\npartout!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf("\x0E\x01\x09\x04\x00\x04Salut, Link! Hé, je peux t'envoyer\nà un nouvel endroit avec ma super machine!")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf("\x0E\x01\x09\x04\x00\x03Tu veux aller à la forêt de Firone?\n\n\n\nParfait. Je t'envoie là\x2010bas en vol direct.\nEmbarque dans ma <r<mégatapulte>>!\n[1]OK[2-]Non merci")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf("\x0E\x01\x09\x04\x00BHaha! Tu ne le regretteras pas! Je m'occupe\ndu décollage, et toi, occupe\x2010toi de l'atterrissage!")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf("C'est comme tu veux. Reviens me parler\nsi tu changes d'idée.")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf("\x0E\x01\x09\x04\x00&Encore une fois, le grand Hergo t'a permis\nd'aller refermer le sceau. Grouille\x2010toi,\nmaintenant!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf("\x0E\x01\x09\x04\x00\x4026\x0E\x03\x01\x00Link! Je peux plus atteindre ma\nréserve de bombes pour recharger la machine!\n\n\n\x0E\x01\x09\x04 \x4000Bon. Tu vas monter dans la machine et je vais\nte catapulter sur sa tête! Tiens bien ta tuque!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf("\x0E\x01\x09\x04\x00&La <r<mégatapulte>> est prête à livrer bataille!\n\n\n\nAppuie sur \x0E\x02\x04\x02\x1ECD pour te préparer à tirer\nsur cette vermine!\x0E\x01\x11\x02\x10CD\n\n\nTu peux déplacer la machine avec \x0E\x02\x04\x02\xECD et viser\navec le curseur. Ensuite, tire\x2010lui dessus,\net BOUM!")
          									  case 1:
/*<321>*/ 										printf("\x0E\x01\x09\x04\x00\x4226Une fois de plus, le grand Hergo et sa\n<r<mégatapulte>> entrent en jeu!\n\n\nAussitôt que je serai prêt, je te ferai signe en\napparaissant sur \x0E\x02\x04\x02\x1ECD! Tu devrais être habitué,\nmaintenant!\x0E\x01\x11\x02\x10CD\n\n\x0E\x01\x09\x04B\x4000On va lui montrer de quel bois on se chauffe\navec notre super attaque combinée!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf("\x0E\x01\x09\x04\x00&Grâce à moi, <pause1E>tu peux aller refermer\nle sceau qui emprisonne le monstre!\n\n\nFais comme la dernière fois, et frappe le pilier\nde pierre avec la lumière de ton épée.")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf("\x0E\x01\x09\x04\x00&La <r<mégatapulte>> est prête à livrer bataille!\n\n\n\nAppuie sur \x0E\x02\x04\x02\x1ECD pour te préparer à tirer\nsur cette vermine!\x0E\x01\x11\x02\x10CD\n\n\nTu peux déplacer la machine avec \x0E\x02\x04\x02\xECD et viser\navec le curseur. Ensuite, tire\x2010lui dessus,\net BOUM!")
          								  case 1:
/*< 73>*/ 									printf("\x0E\x01\x09\x04\x04\x4100C'est le moment idéal pour faire valoir\nla <r<mégatapulte>>, ma super arme secrète!\n\n\n\x0E\x01\x09\x04\x00\x300J'te ferai signe quand je serai prêt, tu pourras\nappuyer sur \x0E\x02\x04\x02\x1ECD pour tirer! \x0E\x01\x09\x04\x00\x4000En attendant,\ndébrouille\x2010toi avec ton épée!\x0E\x01\x11\x02\x10CD")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf("\x0E\x01\x09\x04\x00&Mémé dit que le gros monstre là en bas\npourrait se réveiller à nouveau... On va pas\nse laisser faire, tu vas voir!\n\n\x0E\x01\x09\x04\x00\x4200Je lui réserve une petite surprise, à la saveur\nHergo!\n\n\n\x0E\x01\x09\x04\x00\x0FJ'suis en train de construire une arme secrète...\nElle est pas tout à fait prête, mais tu vas voir,\nça va être génial!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x00&Le gros est de retour, on dirait! Allez, viens\ndire bonjour à mon oncle Hergo!\n\n\n\x0E\x01\x09\x04\x04\x4000\x0E\x03\x01\x00Link! Même plan de match que\nl'autre fois. Tu sais ce que tu as à faire!")
          }

          void entrypoint_500_63() {
/*<377>*/ 	start()
/*<406>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 392, 'param3': 32}
/*<392>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 260, 'next': 382, 'param3': 15}
/*<382>*/ 	set_camera(54, 0)
/*<408>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 394, 'param3': 17}
/*<394>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 393, 'param3': 13}
/*<393>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 4, 'next': 395, 'param3': 14}
/*<395>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 524, 'param3': 16}
/*<524>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<380>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<381>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 379, 'param3': 13}
/*<379>*/ 	printf("\x0E\x03\x01\x00Link! On dirait bien que\nle gros\x2010méchant\x2010pas\x2010beau refait des siennes!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf("Attends\x2010moi un peu, je vais aller me préparer!")
/*<384>*/ 	{'type': 'type3', 'subType': 2, 'param1': 24, 'param2': 772, 'next': 422, 'param3': 14}
/*<422>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<415>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<416>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_47() {
/*<154>*/ 	start()
/*<539>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<541>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 540, 'param3': 13}
/*<540>*/ 		printf("\x0E\x03\x01\x00Link! Le <r<pilier de pierre >>doit se\ntrouver sur le front du démon.\n\n\n\x0E\x01\x09\x04\xE00\x13Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf("\x0E\x01\x09\x04\x10\x160DMaintenant, Link!<pause1E>\n\n\n\nUtilise ton <r<éclat céleste >>sur le pilier de pierre!\n\n\n\n\x0E\x01\x09\x04\x11\x1700Vite!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf("\x0E\x03\x01\x00Link! Le <r<pilier de pierre >>doit se\ntrouver sur le front du démon.\n\n\n\x0E\x01\x09\x04\xE00\x13Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          			}
          		  case 1:
/*<155>*/ 			printf("\x0E\x01\x09\x04\x08\x170F\x0E\x03\x01\x00Link! Rends\x2010toi vite au <r<pilier de\npierre >>au centre du site.\n\n\n\x0E\x01\x09\x04\x14\xB00Il est fort inhabituel que la terre tremble ainsi...\nIl faut aller s'assurer que le démon n'est pas\nen train de se réveiller.")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 273, 'param3': 6}
/*<273>*/ 	set_camera(40, 0)
/*<289>*/ 	{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 356, 'next': 270, 'param3': 15}
/*<270>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 500, 'param3': 32}
/*<500>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 268, 'param3': 17}
/*<268>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 271, 'param3': 15}
/*<271>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 269, 'param3': 32}
/*<269>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 504, 'param3': 15}
/*<504>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 288, 'param3': 17}
/*<288>*/ 	set_camera(41, 0)
/*<275>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': 256, 'next': 272, 'param3': 13}
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 290, 'param3': 13}
/*<290>*/ 	set_camera(42, 0)
/*<274>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<286>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15360, 'next': 267, 'param3': 13}
/*<267>*/ 	printf("\x0E\x01\x09\x04\x4000Que... Qu'est\x2010ce qui se passe?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf("\x0E\x01\x09\x04\x4001La terre tremble sous nos pieds!\nC'est pas possible!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf("\x0E\x01\x09\x04\xE00\x10\x0E\x03\x01\x00Link! Va vite examiner le\n<r<pilier de pierre>> au fond du site!")
/*<284>*/ 	printf("\x0E\x01\x09\x04\xE00\x1653Le démon pourrait se réveiller à tout moment.\nIl faut en avoir le c\x153ur net!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf("\x0E\x01\x09\x04\x00\x0FLe sceau a été brisé!\n\n\n\nLes explications attendront. Pour le moment,\nil faut empêcher ce monstre de s'échapper.\n\n\nIl ne doit pas s'approcher du temple!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf("\x0E\x01\x09\x04\x10\x180DTu sais comment refermer le sceau, n'est\x2010ce\npas?\n\n\nRends\x2010toi au pilier de pierre, et frappe\x2010le de\nton <r<éclat céleste>>.<pause1E> Je sais que tu en es capable.")
          		  case 1:
/*<166>*/ 			printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf("\x0E\x01\x09\x04C\x4553\x0E\x01\x08\x02\x1CDGaaah! <pause0A>Depuis quand sait\x2010il voler, lui?\n\n\n\n\x0E\x01\x09\x04B\x4026S'il pense que je vais le laisser planer gentiment\njusqu'au temple, c'est qu'il connaît mal le grand\nHergo! <pause08>Prépare\x2010toi, grosse bête!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître Link, veuillez prendre\nconnaissance de ces informations pertinentes :\n\n\nJe constate que l'éclat céleste a provoqué\nun changement dans la zone.")
/*<495>*/ 	printf("Je détecte également dans le périmètre une aura\nsimilaire à celle de votre parachâle, \x0E\x01\x12\x04\x00\x02Maître.\nIl est très probable qu'il s'agisse de dame Zelda.\n\nGrâce à mon pouvoir de <pling><r<détection>>, je peux vous\nguider dans sa direction.\n\n\nSouhaitez\x2010vous des informations complémentaires\nà ce sujet?\n[1]Oui[2-]Non")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf("\x0E\x01\x12\x04\x00\x05Très bien, Maître.\n\n\n\nAvec la pointe de votre épée, je peux détecter l'aura\ndes cibles que vous recherchez.\n\n\nPlus vous approchez de votre cible, plus le <r<signal\ns'intensifie>>. Je vous l'indiquerai par des sons et\ndes vibrations.\n\nLa <r<pointe de votre curseur>> vous indiquera également\nla direction dans laquelle vous devez aller.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf("Vous pouvez désormais rechercher dame Zelda en\nmaintenant (^), puis en pointant le curseur dans\nla direction que vous souhaitez scruter.\x0E\x01\x11\x02\x8CD")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf("Je me tiens à votre disposition.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf("\x0E\x03\x01\x00Link! Le <r<pilier de pierre >>doit se\ntrouver sur le front du démon.\n\n\n\x0E\x01\x09\x04\xE00\x13Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf("\x0E\x01\x09\x04\x10\x160DMaintenant, Link!<pause1E>\n\n\n\nUtilise ton <r<éclat céleste >>sur le pilier de pierre!\n\n\n\n\x0E\x01\x09\x04\x11\x1700Vite!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf("\x0E\x03\x01\x00Link! Le <r<pilier de pierre >>doit se\ntrouver sur le front du démon.\n\n\n\x0E\x01\x09\x04\xE00\x13Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          			}
          		  case 1:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x08\x170F\x0E\x03\x01\x00Link! Rends\x2010toi vite au <r<pilier de\npierre >>au centre du site.\n\n\n\x0E\x01\x09\x04\x14\xB00Il est fort inhabituel que la terre tremble ainsi...\nIl faut aller s'assurer que le démon n'est pas\nen train de se réveiller.")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf("\x0E\x01\x09\x04\x10\x180DTu sais comment refermer le sceau, n'est\x2010ce\npas?\n\n\nRends\x2010toi au pilier de pierre, et frappe\x2010le de\nton <r<éclat céleste>>.<pause1E> Je sais que tu en es capable.")
          		  case 1:
/*<170>*/ 			printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf("\x0E\x01\x09\x04A\x4043C'est tout? Je pensais qu'il allait nous donner\nplus de fil à retordre que ça! Une seule bombe\nde ma super machine, et paf! C'est tout ce que\nça prenait!\nÀ toi de jouer, Link!\nVite, avant qu'il se relève!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nJe peux vous apporter des informations sur ce\nque vous <g<ciblez >>avec (Z).\x0E\x01\x11\x02\x7CD\n\n\nAppuyez sur (v) <r<lorsque vous ciblez >>avec (Z)\npour m'appeler.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf("\x0E\x01\x09\x04\x001WAAAAAAAH!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf("\x0E\x01\x09\x04\x000Non, mais bouge! Fais quelque chose!\nDépêche\x2010toi de faire ce que dit Mémé!\n\n\nSuffit de toucher le pilier de pierre avec\nla lumière de ton épée, non?\nC'est pas compliqué, ça!")
          			  case 1:
/*<153>*/ 				printf("\x0E\x01\x09\x04\x001WAAAAAAAH!")
          			}
          		  case 1:
/*<152>*/ 			printf("\x0E\x01\x09\x04\x00\x15Que... Qu'est\x2010ce qui se passe?\n\n\n\nLa terre tremble sous nos pieds!\nC'est pas possible!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf("\x0E\x01\x09\x04\x00&Yoho, Link!\nMon bidule est presque prêt!\n\n\nAppuie sur \x0E\x02\x04\x02\x1ECD quand tu as besoin de moi\net de ma machine.\x0E\x01\x11\x02\x10CD")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf("\x0E\x01\x09\x04\x04\x202Je vais l'aider, Zelda.<pause1E> Et à la façon « grand\nHergo »! Tu verras, Link.")
          		  case 1:
/*<326>*/ 			printf("\x0E\x01\x09\x04\x00\x02Hé, ça va Link? Je me suis mis\nà réfléchir depuis la dernière fois, et...\n\n\nC'est sûr que je sais pas me battre avec\nune épée, comme toi...\n\n\nMais comme l'a dit Mémé, je peux me rendre\nutile à ma manière.\n\n\n\x0E\x01\x09\x04@\x4200J'ai décidé... que je ferai tout ce que je peux\npour aider Zelda. Parole d'Hergo.\n\n\nJe te donne pas de détails pour le moment,\nmais tu vas voir! J'ai une vraie idée de génie!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf("\x0E\x01\x09\x04\x00-Arg...<pause1E> Snif...<pause1E> On dirait que<pause1E>.<pause1E>.<pause1E>. je sers vraiment\nà rien...")
          		  case 1:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00=\x0E\x01\x08\x02\x1CDGaaaaah! Pas fort!\n\n\n\n\x0E\x01\x09\x04\x00\x3A00\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x1CDJ'ai rien pu faire!\n\n\n\n\x0E\x01\x09\x04\x00\x4000\x0E\x01\x08\x02\x1CD\x0E\x01\x08\x02\x2CDJe suis bon à rien!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf("\x0E\x01\x12\x04\x00\x01Votre tâche est de refermer le sceau du démon.\nVous ne pouvez pas fuir.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\nVous devez à nouveau refermer le sceau qui\nemprisonne le démon.\n\n\nVous ne pouvez pas fuir maintenant, \x0E\x01\x12\x04\x00\x02Maître.")
          		  case 1:
/*<175>*/ 			printf("\x0E\x01\x12\x04\x00\x01Votre tâche est de refermer le sceau du démon.\nVous ne pouvez pas fuir.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 489, 'param3': 6}
/*<489>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 407, 'param3': 47}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 400, 'param3': 32}
/*<400>*/ 	set_camera(55, 0)
/*<487>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 396, 'param3': 15}
/*<396>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 260, 'next': 486, 'param3': 15}
/*<486>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 490, 'param3': 17}
/*<490>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 398, 'param3': 48}
/*<398>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1042, 'param2': 4352, 'next': 397, 'param3': 13}
/*<397>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 4, 'next': 399, 'param3': 14}
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 523, 'param3': 16}
/*<523>*/ 	story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<387>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<388>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1086, 'param2': 16447, 'next': 386, 'param3': 13}
/*<386>*/ 	printf("\x0E\x03\x01\x00Link! On dirait bien que\nle gros\x2010méchant\x2010pas\x2010beau refait des siennes!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf("Attends\x2010moi un peu, je vais aller me préparer!")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf("\x0E\x01\x09\x04\x00&C'est parti pour la forêt de Firone!\x0E\x01\x05\x04\n\x00")
/*< 99>*/ 	printf("Fais attention à toi!\x0E\x01\x05\x04\x1E\x00")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors\nsois prudent.")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf("\x0E\x01\x09\x04\x10\x180DC'est terrible, le sceau a encore été brisé...\n\n\n\nTu sais comment le refermer, n'est\x2010ce pas?\nJe sais que tu en es capable.")
          		  case 1:
/*<178>*/ 			printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors\nsois prudent.")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf("Ouais! C'est au tour du grand Hergo\nde passer à l'action!")
/*<411>*/ 	printf("Déplace la machine avec \x0E\x02\x04\x02\xECD, et vise bien...\n\n\n\nEnsuite, tire une bombe avec \x0E\x02\x04\x02\x29CD. Si elle atteint\nle démon, celui\x2010ci sera sonné! Profites\x2010en!")
/*<412>*/ 	printf("Si tu ne te souviens plus des commandes de la\n<b<machine>>, consulte\x2010les pendant que tu l'utilises\nen appuyant sur \x0E\x02\x04\x02\x13CD!\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("Laisse\x2010moi bien comprendre,\nLink...\n\n\nTu dis que la vieille qui se trouve dans le\n<r<temple >>au bout de ce chemin sait où est <b<Zelda>>?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf("Ouais! Merci de l'info! Tu peux aller jouer\nailleurs, maintenant.\n\n\n\x0E\x01\x09\x04\x0D\xB41Le grand Hergo se charge d'aller\nretrouver <b<Zelda>>!")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf("Je vais la sauver, et puis on rentrera tous\nles deux au bercail, elle et moi...<pause1E>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf("\x0E\x01\x09\x04\x00\x0CEt je la demanderai en mariage, et elle dira\noui, et puis on vivra heureux pour toujours!")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf("\x0E\x01\x09\x04\x00\x0DEn gros, t'as plus besoin de t'occuper de cette\nhistoire!")
/*<109>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 105, 'param3': 6}
/*<105>*/ 	printf("Bon. Je m'en vais chez la vieille.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf("\x0E\x01\x08\x02\x1CDPorte\x2010toi bien!<pause2D> \x0E\x01\x08\x02\xFFCDÀ pluuuuus!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf("\x0E\x01\x09\x04\xE00T\x0E\x01\x06\x02\x1CDAh...!<pause0F> <r<\x0E\x01\x06\x02ÍLa fin <pause0A>\x0E\x01\x06\x02\xFECDest proche...>>\x0E\x01\x05\x04(\x00")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors\nsois prudent.")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf("\x0E\x01\x09\x04\x10\x180DC'est terrible, le sceau a encore été brisé...\n\n\n\nTu sais comment le refermer, n'est\x2010ce pas?\nJe sais que tu en es capable.")
          		  case 1:
/*<182>*/ 			printf("\x0E\x01\x09\x04\x10\x180F\x0E\x03\x01\x00Link! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors\nsois prudent.")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 44, 'param3': 6}
/*< 44>*/ 	set_camera(21, 0)
/*<467>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 30, 'param3': 15}
/*< 30>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 28, 'param3': 32}
/*< 28>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 260, 'next': 31, 'param3': 15}
/*< 31>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 29, 'param3': 32}
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 270, 'next': 120, 'param3': 15}
/*<120>*/ 	set_camera(25, 0)
/*< 33>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 34, 'param3': 17}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1077, 'param2': 13824, 'next': 32, 'param3': 13}
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 470, 'param3': 17}
/*<470>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 469, 'param3': 6}
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 471, 'param3': 6}
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf("\x0E\x01\x09\x04\x4000Que... Qu'est\x2010ce qui se passe?")
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 130, 'param3': 6}
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 119, 'param3': 6}
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf("\x0E\x01\x09\x04\x4001La terre tremble sous nos pieds!\nC'est pas possible!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf("\x0E\x01\x09\x04\xE00\x10\x0E\x03\x01\x00Link! Va vite examiner le\n<r<pilier de pierre>> au fond du site!")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf("\x0E\x01\x09\x04\xE00\x1653Le démon pourrait se réveiller à tout moment.\nIl faut en avoir le c\x153ur net!")
/*<126>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04B\x4300Alors, qu'est\x2010ce que tu dis de la puissance\nde mon bidule? Ça t'en bouche un coin, hein?\n\n\n\x0E\x01\x09\x04>\x4000Bon, je recharge la bête, alors tiens bon\njusqu'à mon prochain signal!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf("Cette créature qui se fait attaquer sait peut\x2010être\nquelque chose. Je vous suggère de l'aider.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00&Hé, Link!\nMon bidule est presque prêt!\n\n\nTirons sur ce monstre pour l'empêcher\nd'escalader le mur!\n\n\nAppuie sur \x0E\x02\x04\x02\x1ECD quand tu auras besoin de moi\net de ma machine.\x0E\x01\x11\x02\x10CD")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf("\x0E\x01\x12\x04\x00\x01Maître, il est très dangereux d'atterrir sans ouvrir\nvotre <b<parachâle>>.\n\n\nJe vous ai aidé pour cette fois, mais à l'avenir, veuillez\nappuyer sur \x0E\x02\x04\x02\x29CD pour atterrir, \x0E\x01\x12\x04\x00\x02Maître.\x0E\x01\x11\x02\xFCD")
          }

