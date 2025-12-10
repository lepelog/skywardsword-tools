          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "<0x10009:0x00434500>Oups, c'est manqué! Hmm, toute\ncette puissance, et même pas\ncapable d'atteindre la cible.\n\n<0x10009:0x00414000>Bon, je recharge la machine. Tiens\nbon jusqu'à mon prochain signal!")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x00000001>Je vais tenter d'en apprendre\nplus sur les statues.")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 1, unk: 0, line: 56 */ "<0x10009:0x00080b07>Si on en croit les écrits anciens,\nil existerait, là‐haut dans le ciel,\nun endroit appelé les <color red<îles de la Déesse>coloroff>.\n\nLes vieilles statues comme celle‐là\npermettraient d'y aller.\n\n\nMais celle‐ci m'a l'air particulière.\nOn dirait qu'elle <color red<active>coloroff> toutes les\nautres.\n\n<0x10009:0x00161900>Ça a tout l'air d'une histoire à dormir\ndebout, mais moi, je crois en cette\nlégende.\n\n<0x10009:0x00000b04>On trouve ces statues un peu partout,\net j'ai pas trouvé de meilleure\nexplication à leur présence.")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>Qu'en penses‐tu? Tu veux en savoir\nplus?\n[1-]Oui[2]Non merci")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x00151902>Toi aussi tu es un amateur de contes\nanciens?\n\n\n<0x10009:0x00160b00>Bien, je vais tout t'expliquer.\n\n\n\nLes habitants de ces îles de la Déesse\nmontent des oiseaux qu'on ne trouve\nque haut dans le ciel...\n\n<0x10009:0x00001e00>On dit que c'est un ensemble d'îles\noù l'on vénère la Déesse, un véritable\nhavre de paix...\n\n<0x10009:0x00000b00>Et que leur civilisation est beaucoup\nplus avancée que la nôtre.")
/*<426>*/ 				printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x00080b00>Et j'ai gardé le meilleur pour la fin,\ntiens‐toi bien!\n\n\n<0x10009:0x001f1e00>Parce que c'est la Déesse qui a créé\nces îles, on y trouve des tonnes de\nchoses inconnues et extraordinaires!\n\n<0x10009:0x00001908>Là‐bas, tous les bâtiments sont en or!\nDes sources de jouvence s'écoulent\ndans les rivières sans jamais se tarir!\n\n<0x10009:0x00000b00>Sur les arbres poussent des fruits qui\nguérissent toutes les maladies! Les\nchamps sont remplis de citrouilles\net de fleurs colorées!\n<0x10009:0x00171900>Et puis le climat y est clément, jamais\ntrop chaud ni trop froid, comme un\néternel printemps! C'est ça, les îles\nde la Déesse.\n<0x10009:0x00000b05><0x10008:0x01cd>Non, mais, c'est incroyable\ntout ça non? \n\n\n<0x10009:0x00211806><0x10008:0x02cd>Tu voudrais en savoir plus,\nje gage?\n[1-]Bien sûr![2]Bof, non.")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x00271956>Super! Je vois que tu as été\ncomplètement séduit par les îles\nde la Déesse.\n\n<0x10009:0x00161e00>J'aimerais pouvoir t'en dire plus,\nmais pour cela, il faudrait que\nj'étudie davantage.\n\n<0x10009:0x00000b00>On en rediscutera la prochaine fois!")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00161e56>Ah, j'aurais bien aimé t'en parler\ndavantage... La prochaine fois, \npeut‐être?")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x00161e56>Ah, j'aurais bien aimé t'en parler\ndavantage... La prochaine fois, \npeut‐être?")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00000008>Merci de ton aide!")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>C'était quoi, ces pestes rouges?\nJe pensais pas trouver ce genre\nd'indésirables dans cette forêt\nsi paisible...\n<0x10009:0x00161e00>Et toi? Tu es le deuxième de ton\nespèce que je croise aujourd'hui!\nIl se passe vraiment des choses\nétranges, ces temps‐ci.\n<0x10009:0x00000b00>Pour te remercier de m'avoir aidé,\nje vais t'apprendre deux ou trois\npetites choses.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x00080b01>Je suis venu dans cette forêt pour\nétudier l'histoire ancienne. Je suis\nun Goron, et je me nomme <color blue<Marcogoro>coloroff>.\n\n<0x10009:0x00001700>Si on en croit les écrits anciens,\nil existerait, loin dans le ciel, un\nendroit appelé les <color red<îles de la Déesse>coloroff>.\n\n<0x10009:0x00000b00>Cette <color blue<vieille statue >coloroff>permettrait de\n<color red<se rendre dans le ciel >coloroff>et servirait aussi\nde point de repère lorsqu'on descend\nsur terre.\n<sound 4><color red<Examiner toutes les statues >coloroff>à mesure\nqu'on les trouve augmenterait le\nnombre de points de repère et\ns'avérerait très pratique.\nCette statue‐ci semble particulière,\nelle devrait permettre d'<color red<activer>coloroff> toutes\nles autres.\n\n<0x10009:0x00161907>Ça a tout l'air d'une histoire à dormir\ndebout, mais moi, je crois en cette\nlégende.\n\nOn trouve ces statues un peu\npartout, et je n'ai pas trouvé de\nmeilleure explication à leur présence.")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00000b52>À moi!")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>Allez‐vous‐en! Laissez‐moi tranquille!")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Maître <heroname>.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>Oooh!")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "Bon, cette fois, c'est toi qui sers\nde boulet! Je t'avertis, je paye\npas les pots cassés...")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>Voici la <color blue<terre>coloroff> dont parlent les légendes\nde Célesbourg.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé! Ho! <0x30001:0x><heroname>!")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Héhéhé, attends de voir ça...\nTu n'en croiras pas tes yeux!\nVoici l'ultime arme super secrète\ndu grand Hergo!")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "Je te présente... la <color red<mégatapulte>coloroff>!")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Tu en es bouche bée, et c'est bien\nnormal! Tu serais surpris de savoir\ncombien d'efforts j'ai dû mettre\npour construire ce chef‐d'œuvre!")
/*<462>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Regarde‐moi ça!")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>J'ai déblayé la zone entière pour\npouvoir installer le rail qui permet\nde déplacer mon bidule. Et j'ai tout\nfait tout seul!\nHa! Je m'épate moi‐même...<pause 30>\nTout ce talent qui ne demandait\nqu'à s'exprimer!\n\n<0x10009:0x28414000>Il ne reste plus qu'à utiliser\ncette machine de rêve pour lui\nfaire avaler sa soupe, à ce démon!")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>Une seule de mes bombes devrait\nsuffire pour calmer les nerfs de\nnotre gros‐méchant‐pas‐beau!")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Oupelaye... Ce monstre est arrivé\njuste un peu trop tôt.")
/*<451>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>La machine a encore besoin de\nquelques ajustements avant\nde fonctionner parfaitement.\n\nJe t'avertirai quand tout sera prêt.\nOccupe‐toi de lui en attendant!")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 2, unk: 0, line: 13 */ "<0x10005:0x004b0000>Cet endroit s'appelle le <color blue<site du sceau>coloroff>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 1, unk: 2, line: 17 */ "<0x10006:0xfdcd>Toi... Petit homme...\n\n\n\n<0x10006:0xfdcd>Toi, fils du destin, qui descends\ndu ciel...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>Le sceau a été brisé!\n\n\n\nLes explications attendront. Pour\nle moment, il faut empêcher ce\nmonstre de s'échapper.\n\nIl ne doit pas s'approcher du temple!")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Maintenant, <heroname>!<pause 30>\n\n\n\nUtilise ton <color red<éclat céleste >coloroff>sur le\npilier de pierre!\n\n\n<0x10009:0x00111700>Vite!")
          }

          void entrypoint_500_57() {
/*<413>*/ 	start()
/*<370>*/ 	{'type': 'type3', 'subType': 2, 'param1': 23, 'param2': 356, 'next': 310, 'param3': 15}
/*<310>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 311, 'param3': 32}
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 484, 'param3': 17}
/*<484>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 40, 'next': 509, 'param3': 17}
/*<509>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<510>*/ 	wait_frames(30)
/*<511>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = false;
/*<515>*/ 	wait_frames(10)
/*<512>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<513>*/ 	wait_frames(60)
/*<375>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<514>*/ 	wait_frames(10)
/*<517>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 17664, 'next': 485, 'param3': 13}
/*<485>*/ 	set_camera(52, 0)
/*<376>*/ 	printf(/* textboxtype: 1, unk: 1, line: 119 */ "<0x10009:0x28000053>Oupelaye!<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 1, unk: 1, line: 118 */ "<0x10009:0x28004000>On dirait que le sceau va lâcher d'un\nmoment à l'autre...<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 1, line: 120 */ "<0x10009:0x283e400f>Surtout pas de panique!\n\n\n\n<0x10009:0x28410000>Tu sais qu'on peut se fier à ma\n<color red<mégatapulte>coloroff>, pas vrai?")
/*<256>*/ 	printf(/* textboxtype: 1, unk: 1, line: 121 */ "<0x10009:0x28000000>Tant qu'elle sera là, le mot « défaite »\nfait pas partie de mon vocabulaire!\n\n\n<0x10009:0x28000200>J'ai des bombes à lancer, une terre à\ndéfendre. J'ai une mission à remplir.")
/*<257>*/ 	printf(/* textboxtype: 1, unk: 1, line: 122 */ "<0x10009:0x28000200>Bon. OK, <heroname>!\nEssaie quand même de ne pas\ntrop te mettre dans mes jambes\npendant que je sauve le monde!")
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
/*<478>*/ 	printf(/* textboxtype: 1, unk: 2, line: 18 */ "<0x10006:0xfdcd>Lève l'épée divine vers le ciel...\n<pause 15><0x10006:0xfdcd>Et libère son énergie pour frapper\nl'aura maléfique...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Le <color red<pilier de pierre>coloroff>\ndoit se trouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier\navec ton épée, tu devrais pouvoir\nvaincre ce monstre.")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10005:0x004b0000>Soyez prudent, <0x10012:0x0000000b>Maître.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 2, unk: 0, line: 8 */ "Maître, veuillez prendre connaissance\nde ces informations pertinentes :")
/*<482>*/ 	printf(/* textboxtype: 2, unk: 0, line: 9 */ "Cette porte semble avoir été ouverte\nrécemment mais, à présent, une\npuissante énergie la maintient fermée.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 86 */ "<0x10009:0x00000026>Bien joué, <heroname>!\nAvoue que sans le grand Hergo,\ntu aurais été bien mal pris! Pas\nbesoin de me remercier...\nBon, il faut aller activer la porte\ndu temps, maintenant! Je vais\ny aller!")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nLe <color red<pilier de pierre >coloroff>est planté dans\nle front de la bête.\nVous ne devez pas fuir sans avoir\nrefermé le sceau.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 2, unk: 0, line: 42 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nVous devez refermer le sceau qui\nemprisonne le démon.\nVous ne pouvez pas fuir\nmaintenant, <0x10012:0x00000002>Maître.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nLe <color red<pilier de pierre >coloroff>est planté dans\nle front de la bête.\nVous ne devez pas fuir sans avoir\nrefermé le sceau.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 2, unk: 0, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>Gaaah!\n\n\n\n<0x10009:0x00004000>Avec tous ces tremblements, les murs\nse sont écroulés et je ne peux plus\natteindre mes bombes! Pas évident.\nQu'est‐ce je vais faire?")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x00131907>Mais comment as‐tu fait ça?\nC'est un tour de magie?\n\n\n<0x10009:0x00171b08>La statue a réagi quand tu t'es\napproché! C'est fou!")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>Je l'ai eue, mais on dirait que c'était\npas au bon moment! Un peu\ntrop tard, peut‐être...\n\n<0x10009:0x00004000>Bon, je recharge la bête. Tiens bon\njusqu'à mon prochain signal!")
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
/*< 75>*/ 	printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00203010>Fiou, <heroname>! Cette fois‐ci,\nj'ai vraiment cru qu'on allait y passer!\nUne chance, on s'en est sortis.\n\n<0x10009:0x00420200>Je retourne au temple,\nrejoins‐moi là‐bas!")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 1, unk: 2, line: 73 */ "<0x10009:0x003e4026><0x30001:0x><heroname>! <color red<Ramène‐toi par ici>coloroff>,\net que ça saute! Il y a un passage \nprès du temple, sur le côté!")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 2, line: 4 */ "<0x10009:0x0020403c>Ça y est. Es‐tu en place? Vise bien\nle pilier de pierre sur son museau!")
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
/*<132>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x30001:0x><heroname>! On dirait bien que\nle gros‐méchant‐pas‐beau refait des\nsiennes!")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Attends‐moi un peu, je vais\naller me préparer!")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé! Ho! <0x30001:0x><heroname>!")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Héhéhé, attends de voir ça...\nTu n'en croiras pas tes yeux!\nVoici l'ultime arme super secrète\ndu grand Hergo!")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "Je te présente... la <color red<mégatapulte>coloroff>!")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Tu en es bouche bée, et c'est bien\nnormal! Tu serais surpris de savoir\ncombien d'efforts j'ai dû mettre\npour construire ce chef‐d'œuvre!")
/*<361>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Regarde‐moi ça!")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>J'ai déblayé la zone entière pour\npouvoir installer le rail qui permet\nde déplacer mon bidule. Et j'ai tout\nfait tout seul!\nHa! Je m'épate moi‐même...<pause 30>\nTout ce talent qui ne demandait\nqu'à s'exprimer!\n\n<0x10009:0x28414000>Il ne reste plus qu'à utiliser\ncette machine de rêve pour lui\nfaire avaler sa soupe, à ce démon!")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>Une seule de mes bombes devrait\nsuffire pour calmer les nerfs de\nnotre gros‐méchant‐pas‐beau!")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Oupelaye... Ce monstre est arrivé\njuste un peu trop tôt.")
/*<228>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>La machine a encore besoin de\nquelques ajustements avant\nde fonctionner parfaitement.\n\nJe t'avertirai quand tout sera prêt.\nOccupe‐toi de lui en attendant!")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 2, unk: 0, line: 128 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nVous devez refermer le sceau\nqui emprisonne le démon.\nVous ne pouvez pas fuir maintenant,\n<0x10012:0x00000002>Maître.")
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
/*<245>*/ 	printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé! Ho! <0x30001:0x><heroname>!")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 1, unk: 1, line: 109 */ "<0x10007:0x2800000f>Héhéhé, attends de voir ça...\nTu n'en croiras pas tes yeux!\nVoici l'ultime arme super secrète\ndu grand Hergo!")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 1, unk: 1, line: 110 */ "Je te présente... la <color red<mégatapulte>coloroff>!")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10009:0x28000018>Tu en es bouche bée, et c'est bien\nnormal! Tu serais surpris de savoir\ncombien d'efforts j'ai dû mettre\npour construire ce chef‐d'œuvre!")
/*<363>*/ 	printf(/* textboxtype: 1, unk: 1, line: 112 */ "Regarde‐moi ça!")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 1, unk: 1, line: 113 */ "<0x10009:0x28404300>J'ai déblayé la zone entière pour\npouvoir installer le rail qui permet\nde déplacer mon bidule. Et j'ai tout\nfait tout seul!\nHa! Je m'épate moi‐même...<pause 30>\nTout ce talent qui ne demandait\nqu'à s'exprimer!\n\n<0x10009:0x28414000>Il ne reste plus qu'à utiliser\ncette machine de rêve pour lui\nfaire avaler sa soupe, à ce démon!")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 1, line: 114 */ "<0x10009:0x28044000>Une seule de mes bombes devrait\nsuffire pour calmer les nerfs de\nnotre gros‐méchant‐pas‐beau!")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 1, unk: 1, line: 115 */ "Oupelaye... Ce monstre est arrivé\njuste un peu trop tôt.")
/*<252>*/ 	printf(/* textboxtype: 1, unk: 1, line: 116 */ "<0x10009:0x28414000>La machine a encore besoin de\nquelques ajustements avant\nde fonctionner parfaitement.\n\nJe t'avertirai quand tout sera prêt.\nOccupe‐toi de lui en attendant!")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x00171b08>La statue a réagi! On dirait que\ntu en sais plus que ce que je pensais!")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>Oh!")
/*<357>*/ 		printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00131909>Oh‐ho! Mais qu'est‐ce que...\n\n\n\n<0x10009:0x00171b08>Comment as‐tu fait ça? La statue\na réagi! On dirait que tu en sais plus\nque ce que je pensais!")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>Hoho, on dirait qu'il s'est acheté\nune paire de bras! Très bien!\n\n\nC'est en plein le bon moment de\nmontrer ce que ma mégatapulte\nest capable de faire!\n\n<0x10009:0x00424000>Je te ferai signe dès que je serai prêt.\nOccupe‐toi de lui en attendant!")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nLe démon s'est à nouveau réveillé.\nVous ne pouvez pas fuir maintenant.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 2, unk: 0, line: 44 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nVous devez à nouveau refermer\nle sceau qui emprisonne le démon.\nVous ne pouvez pas fuir\nmaintenant, <0x10012:0x00000002>Maître.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 2, unk: 0, line: 43 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nLe démon s'est à nouveau réveillé.\nVous ne pouvez pas fuir maintenant.")
          		}
          	}
          }

          void entrypoint_500_62() {
/*<221>*/ 	start()
/*<234>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "")
/*<303>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 307, 'param3': 40}
/*<307>*/ 	wait_frames(45)
/*<305>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 349, 'param3': 32}
/*<349>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 306, 'param3': 16}
/*<306>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 304, 'param3': 17}
/*<304>*/ 	set_camera(31, 0)
/*<308>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 238, 'param3': 15}
/*<238>*/ 	wait_frames(30)
/*<350>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 235, 'param3': 13}
/*<235>*/ 	printf(/* textboxtype: 1, unk: 1, line: 118 */ "<0x10009:0x28004000>On dirait que le sceau va lâcher d'un\nmoment à l'autre...<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 1, line: 120 */ "<0x10009:0x283e400f>Surtout pas de panique!\n\n\n\n<0x10009:0x28410000>Tu sais qu'on peut se fier à ma\n<color red<mégatapulte>coloroff>, pas vrai?")
/*<237>*/ 	printf(/* textboxtype: 1, unk: 1, line: 121 */ "<0x10009:0x28000000>Tant qu'elle sera là, le mot « défaite »\nfait pas partie de mon vocabulaire!\n\n\n<0x10009:0x28000200>J'ai des bombes à lancer, une terre à\ndéfendre. J'ai une mission à remplir.")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 1, unk: 1, line: 122 */ "<0x10009:0x28000200>Bon. OK, <heroname>!\nEssaie quand même de ne pas\ntrop te mettre dans mes jambes\npendant que je sauve le monde!")
/*<309>*/ 	set_camera(45, 0)
/*<239>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_11() {
/*< 15>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 2, unk: 0, line: 15 */ "")
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
/*<534>*/ 				printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname>! Je peux plus\natteindre ma réserve de bombes\npour recharger la machine!\n\n<0x10009:0x00204000>Bon. Tu vas monter dans la machine\net je vais te catapulter sur sa tête!\nTiens bien ta tuque!")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<mégatapulte>coloroff> est prête\nà livrer bataille!\n\n\nAppuie sur (^) pour te préparer à tirer\nsur cette vermine!<0x10011:0x08cd>\n\n\nTu peux déplacer la machine avec (ControlStick)\net viser avec la <color red<manette Wii Remote>coloroff>.\nEnsuite, tire‐lui dessus, et BOUM!")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Une fois de plus, le grand Hergo et sa\n<color red<mégatapulte>coloroff> entrent en jeu!\n\n\nAussitôt que je serai prêt, je te ferai\nsigne en apparaissant sur (^)! Tu\ndevrais être habitué, maintenant!<0x10011:0x08cd>\n\n<0x10009:0x00424000>On va lui montrer de quel bois\non se chauffe avec notre super\nattaque combinée!")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<mégatapulte>coloroff> est prête\nà livrer bataille!\n\n\nAppuie sur (^) pour te préparer à tirer\nsur cette vermine!<0x10011:0x08cd>\n\n\nTu peux déplacer la machine avec (ControlStick)\net viser avec la <color red<manette Wii Remote>coloroff>.\nEnsuite, tire‐lui dessus, et BOUM!")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00044100>C'est le moment idéal pour faire valoir\nla <color red<mégatapulte>coloroff>, ma super arme secrète!\n\n\n<0x10009:0x00000300>J'te ferai signe quand je serai prêt,\ntu pourras appuyer sur (^) pour tirer!\n<0x10009:0x00004000>En attendant, débrouille‐toi avec\nton épée!<0x10011:0x08cd>")
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
/*<194>*/ 								printf(/* textboxtype: 1, unk: 1, line: 100 */ "<0x10009:0x00000026>Dis‐moi donc... Où est‐ce que\nje t'envoie cette fois?\n\n\n[1-]Jeux dans\nle ciel[2-]Jeux sur\nterre[3]Nulle part")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 1, unk: 1, line: 101 */ "Les jeux du ciel, hein? Compris!\nOù veux‐tu aller, exactement?\n\n\n[1-]Roue de\nfortune[2-]Île aux\ninsectes[3-]Autre part")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x00420342>C'est parti, attache bien ta tuque!")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 1, line: 102 */ "Où veux‐tu aller, exactement?\n[1-]Tranche‐bambou[2-]Tir à la\ncitrouille[3]Nulle part")
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
/*<200>*/ 												printf(/* textboxtype: 1, unk: 0, line: 106 */ "Reviens me voir si tu veux que\nje t'envoie quelque part!")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 1, unk: 1, line: 103 */ "Les jeux du ciel, hein? Compris!\nOù veux‐tu aller, exactement?\n[1-]Roue de fortune[2-]Île aux\ninsectes[3-]Tranche‐bambou[4]Nulle part")
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
/*<198>*/ 									printf(/* textboxtype: 1, unk: 1, line: 104 */ "Aux jeux sur terre? Entendu!\nOù veux‐tu aller exactement?\n\n\n[1-]Grand défi[2-]Fouille‐rubis[3-]Wagonnet\ndu péril[4]Nulle part")
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
/*<563>*/ 								printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x00000004>Salut, <heroname>!\n\n\n\nBien sûr que le grand Hergo peut\nt'aider!")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 1, unk: 0, line: 98 */ "Hé, je peux t'envoyer à un nouvel\nendroit avec ma super machine!")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "Avec moi aux commandes de\nla mégatapulte, tu ne vas pas\nt'ennuyer, c'est garanti!\n\nSi tu atterris à un endroit qui ne\nt'est pas familier, profites‐en\npour explorer un peu partout!")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000004>Salut, <heroname>!\nHé, je peux t'envoyer à un nouvel\nendroit avec ma super machine!")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Tu veux aller à la forêt de Firone?\n\n\n\nParfait. Je t'envoie là‐bas en vol direct.\nEmbarque dans ma <color red<mégatapulte>coloroff>!\n[1-]OK[2]Non merci")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 1, unk: 0, line: 92 */ "<0x10009:0x00000042>Haha! Tu ne le regretteras pas!\nJe m'occupe du décollage, et toi,\noccupe‐toi de l'atterrissage!")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 1, unk: 0, line: 91 */ "C'est comme tu veux. Reviens me\nparler si tu changes d'idée.")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x00000026>Encore une fois, le grand Hergo t'a\npermis d'aller refermer le sceau.\nGrouille‐toi, maintenant!")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname>! Je peux plus\natteindre ma réserve de bombes\npour recharger la machine!\n\n<0x10009:0x00204000>Bon. Tu vas monter dans la machine\net je vais te catapulter sur sa tête!\nTiens bien ta tuque!")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<mégatapulte>coloroff> est prête\nà livrer bataille!\n\n\nAppuie sur (^) pour te préparer à tirer\nsur cette vermine!<0x10011:0x08cd>\n\n\nTu peux déplacer la machine avec (ControlStick)\net viser avec la <color red<manette Wii Remote>coloroff>.\nEnsuite, tire‐lui dessus, et BOUM!")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Une fois de plus, le grand Hergo et sa\n<color red<mégatapulte>coloroff> entrent en jeu!\n\n\nAussitôt que je serai prêt, je te ferai\nsigne en apparaissant sur (^)! Tu\ndevrais être habitué, maintenant!<0x10011:0x08cd>\n\n<0x10009:0x00424000>On va lui montrer de quel bois\non se chauffe avec notre super\nattaque combinée!")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>Grâce à moi, <pause 30>tu peux aller refermer\nle sceau qui emprisonne le monstre!\n\n\nFais comme la dernière fois, et frappe\nle pilier de pierre avec la lumière de\nton épée.")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x00000026>La <color red<mégatapulte>coloroff> est prête\nà livrer bataille!\n\n\nAppuie sur (^) pour te préparer à tirer\nsur cette vermine!<0x10011:0x08cd>\n\n\nTu peux déplacer la machine avec (ControlStick)\net viser avec la <color red<manette Wii Remote>coloroff>.\nEnsuite, tire‐lui dessus, et BOUM!")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x00044100>C'est le moment idéal pour faire valoir\nla <color red<mégatapulte>coloroff>, ma super arme secrète!\n\n\n<0x10009:0x00000300>J'te ferai signe quand je serai prêt,\ntu pourras appuyer sur (^) pour tirer!\n<0x10009:0x00004000>En attendant, débrouille‐toi avec\nton épée!<0x10011:0x08cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000026>Mémé dit que le gros monstre là en\nbas pourrait se réveiller à nouveau...\nOn va pas se laisser faire, tu vas voir!\n\n<0x10009:0x00004200>Je lui réserve une petite surprise,\nà la saveur Hergo!\n\n\n<0x10009:0x0000000f>J'suis en train de construire une arme\nsecrète... Elle est pas tout à fait prête,\nmais tu vas voir, ça va être génial!")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x00000026>Le gros est de retour, on dirait! Allez,\nviens dire bonjour à mon oncle Hergo!\n\n\n<0x10009:0x00044000><0x30001:0x><heroname>! Même plan de\nmatch que l'autre fois. Tu sais ce\nque tu as à faire!")
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
/*<379>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x30001:0x><heroname>! On dirait bien que\nle gros‐méchant‐pas‐beau refait des\nsiennes!")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Attends‐moi un peu, je vais\naller me préparer!")
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
/*<540>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Le <color red<pilier de pierre>coloroff>\ndoit se trouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier\navec ton épée, tu devrais pouvoir\nvaincre ce monstre.")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Maintenant, <heroname>!<pause 30>\n\n\n\nUtilise ton <color red<éclat céleste >coloroff>sur le\npilier de pierre!\n\n\n<0x10009:0x00111700>Vite!")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Le <color red<pilier de pierre>coloroff>\ndoit se trouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier\navec ton épée, tu devrais pouvoir\nvaincre ce monstre.")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>! Rends‐toi vite au\n<color red<pilier de pierre >coloroff>au centre du site.\n\n\n<0x10009:0x00140b00>Il est fort inhabituel que la terre\ntremble ainsi... Il faut aller s'assurer\nque le démon n'est pas en train de\nse réveiller.")
          		}
          	}
          }

          void entrypoint_500_64() {
/*<265>*/ 	start()
/*<276>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 281, 'param3': 40}
/*<281>*/ 	wait_frames(60)
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
/*<267>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x04000030>Que... Qu'est‐ce qui se passe?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>La terre tremble sous nos pieds!\nC'est pas possible!")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000010><0x30001:0x><heroname>! Va vite examiner le\n<color red<pilier de pierre>coloroff> au fond du site!")
/*<284>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0e001653>Le démon pourrait se réveiller à tout\nmoment. Il faut en avoir le cœur net!")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x0000000f>Le sceau a été brisé!\n\n\n\nLes explications attendront. Pour\nle moment, il faut empêcher ce\nmonstre de s'échapper.\n\nIl ne doit pas s'approcher du temple!")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que\ntu ailles refermer le sceau qui\nemprisonne le démon.\n\nSon pouvoir s'est intensifié,\nsois prudent.")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0010180d>Tu sais comment refermer le sceau,\nn'est‐ce pas?\n\n\nRends‐toi au pilier de pierre, et\nfrappe‐le de ton <color red<éclat céleste>coloroff>.<pause 30>\nJe sais que tu en es capable.")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que\ntu ailles refermer le sceau qui\nemprisonne le démon.\n\nSon pouvoir s'est intensifié,\nsois prudent.")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>Gaaah! <pause 10>Depuis quand sait‐il\nvoler, lui?\n\n\n<0x10009:0x00424026>S'il pense que je vais le laisser planer\ngentiment jusqu'au temple, c'est qu'il\nconnaît mal le grand Hergo!\n<pause 8>Prépare‐toi, grosse bête!")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 2, unk: 1, line: 123 */ "<0x10012:0x0000000b>Maître <heroname>,\nveuillez prendre connaissance\nde ces informations pertinentes :\n\nJe constate que l'éclat céleste\na provoqué un changement dans\nla zone.")
/*<495>*/ 	printf(/* textboxtype: 2, unk: 1, line: 124 */ "Je détecte également dans le périmètre\nune aura similaire à celle de votre\nparachâle, <0x10012:0x00000002>Maître. Il est très probable\nqu'il s'agisse de dame Zelda.\nGrâce à mon pouvoir de <sound 4><color red<détection>coloroff>,\nje peux vous guider dans sa direction.\n\n\nSouhaitez‐vous des informations\ncomplémentaires à ce sujet?\n[1-]Oui[2]Non")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 2, unk: 1, line: 125 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nAvec la pointe de votre épée, je peux\ndétecter l'aura des cibles que vous\nrecherchez.\n\nPlus vous approchez de votre cible,\nplus le <color red<signal s'intensifie>coloroff>. Je vous\nl'indiquerai par des sons et des\nvibrations.\nLa <color red<pointe de votre curseur>coloroff> vous\nindiquera également la direction dans\nlaquelle vous devez aller.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 2, unk: 1, line: 126 */ "Vous pouvez désormais rechercher\ndame Zelda en appuyant sur (C), puis\nen pointant le curseur dans la direction\nque vous souhaitez scruter.<0x10011:0x06cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 2, unk: 1, line: 127 */ "Je me tiens à votre disposition.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Le <color red<pilier de pierre>coloroff>\ndoit se trouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier\navec ton épée, tu devrais pouvoir\nvaincre ce monstre.")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Maintenant, <heroname>!<pause 30>\n\n\n\nUtilise ton <color red<éclat céleste >coloroff>sur le\npilier de pierre!\n\n\n<0x10009:0x00111700>Vite!")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x30001:0x><heroname>! Le <color red<pilier de pierre>coloroff>\ndoit se trouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier\navec ton épée, tu devrais pouvoir\nvaincre ce monstre.")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname>! Rends‐toi vite au\n<color red<pilier de pierre >coloroff>au centre du site.\n\n\n<0x10009:0x00140b00>Il est fort inhabituel que la terre\ntremble ainsi... Il faut aller s'assurer\nque le démon n'est pas en train de\nse réveiller.")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que\ntu ailles refermer le sceau qui\nemprisonne le démon.\n\nSon pouvoir s'est intensifié,\nsois prudent.")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x0010180d>Tu sais comment refermer le sceau,\nn'est‐ce pas?\n\n\nRends‐toi au pilier de pierre, et\nfrappe‐le de ton <color red<éclat céleste>coloroff>.<pause 30>\nJe sais que tu en es capable.")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que\ntu ailles refermer le sceau qui\nemprisonne le démon.\n\nSon pouvoir s'est intensifié,\nsois prudent.")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>C'est tout? Je pensais qu'il allait nous\ndonner plus de fil à retordre que ça!\nUne seule bombe de ma super machine,\net paf! C'est tout ce que ça prenait!\nÀ toi de jouer, <heroname>!\nVite, avant qu'il se relève!")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 2, unk: 0, line: 19 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\n\n\nJe peux vous apporter des informations\nsur ce que vous <color green<ciblez >coloroff>avec (Z).<0x10011:0x07cd>\n\n\nAppuyez sur (v) <color red<lorsque vous ciblez>coloroff>\navec (Z) pour m'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000031>WAAAAAAAH!")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x00000030>Non, mais bouge! Fais quelque chose!\nDépêche‐toi de faire ce que dit Mémé!\n\n\nSuffit de toucher le pilier de pierre\navec la lumière de ton épée, non?\nC'est pas compliqué, ça!")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000031>WAAAAAAAH!")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x00000015>Que... Qu'est‐ce qui se passe?\n\n\n\nLa terre tremble sous nos pieds!\nC'est pas possible!")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 1, unk: 2, line: 71 */ "<0x10009:0x00000026>Yoho, <heroname>!\nMon bidule est presque prêt!\n\n\nAppuie sur (^) quand tu as besoin\nde moi et de ma machine.<0x10011:0x08cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 1, unk: 0, line: 50 */ "<0x10009:0x00040202>Je vais l'aider, Zelda.<pause 30>\nEt à la façon « grand Hergo »!\nTu verras, <heroname>.")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x10009:0x00000002>Hé, ça va <heroname>?\nJe me suis mis à réfléchir\ndepuis la dernière fois, et...\n\nC'est sûr que je sais pas me battre\navec une épée, comme toi...\n\n\nMais comme l'a dit Mémé, je peux\nme rendre utile à ma manière.\n\n\n<0x10009:0x00404200>J'ai décidé... que je ferai tout ce\nque je peux pour aider Zelda.\nParole d'Hergo.\n\nJe te donne pas de détails pour le\nmoment, mais tu vas voir! J'ai une\nvraie idée de génie!")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Arg...<pause 30> Snif...<pause 30>\nOn dirait que<pause 30>.<pause 30>.<pause 30>.\nje sers vraiment à rien...")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>Gaaaaah! Pas fort!\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>J'ai rien pu faire!\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>Je suis bon à rien!")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000001>Votre tâche est de refermer\nle sceau du démon.\nVous ne pouvez pas fuir.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 2, unk: 0, line: 46 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance\nde ces informations pertinentes :\nVous devez à nouveau refermer\nle sceau qui emprisonne le démon.\nVous ne pouvez pas fuir\nmaintenant, <0x10012:0x00000002>Maître.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 2, unk: 0, line: 45 */ "<0x10012:0x00000001>Votre tâche est de refermer\nle sceau du démon.\nVous ne pouvez pas fuir.")
          		}
          	}
          }

          void entrypoint_500_68() {
/*<378>*/ 	start()
/*<488>*/ 	wait_frames(30)
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
/*<386>*/ 	printf(/* textboxtype: 1, unk: 1, line: 95 */ "<0x30001:0x><heroname>! On dirait bien que\nle gros‐méchant‐pas‐beau refait des\nsiennes!")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 1, line: 96 */ "Attends‐moi un peu, je vais\naller me préparer!")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000026>C'est parti pour la forêt de Firone!\n<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 1, unk: 2, line: 94 */ "Fais attention à toi!<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que tu ailles\nrefermer le sceau qui emprisonne\nle démon.\n\nSon pouvoir n'a jamais été aussi fort,\nalors sois prudent.")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>C'est terrible, le sceau a\nencore été brisé...\n\n\nTu sais comment le refermer, n'est‐ce\npas? Je sais que tu en es capable.")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que tu ailles\nrefermer le sceau qui emprisonne\nle démon.\n\nSon pouvoir n'a jamais été aussi fort,\nalors sois prudent.")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 1, unk: 2, line: 74 */ "Ouais! C'est au tour du grand Hergo\nde passer à l'action!")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 2, line: 75 */ "Déplace la machine avec (ControlStick), et vise\navec la <color red<manette Wii Remote>coloroff>...\n\n\nEnsuite, tire une bombe avec (A).\nSi elle atteint le démon, celui‐ci\nsera sonné! Profites‐en!")
/*<412>*/ 	printf(/* textboxtype: 1, unk: 2, line: 76 */ "Si tu ne te souviens plus des commandes\nde la <color blue<machine>coloroff>, consulte‐les pendant\nque tu l'utilises en appuyant sur (2)!<0x10011:0x05cd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "Laisse‐moi bien comprendre,\n<heroname>...\n\n\nTu dis que la vieille qui se trouve dans\nle <color red<temple >coloroff>au bout de ce chemin sait où\nest <color blue<Zelda>coloroff>?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "Ouais! Merci de l'info! Tu peux aller\njouer ailleurs, maintenant.\n\n\n<0x10009:0x000d0b41>Le grand Hergo se charge d'aller\nretrouver <color blue<Zelda>coloroff>!")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "Je vais la sauver, et puis on rentrera\ntous les deux au bercail, elle et moi...<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x0000000c>Et je la demanderai en mariage,\net elle dira oui, et puis on vivra\nheureux pour toujours!")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0000000d>En gros, t'as plus besoin de t'occuper\nde cette histoire!")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "Bon. Je m'en vais chez la vieille.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10008:0x01cd>Porte‐toi bien!<pause 45>\n<0x10008:0xffcd>À pluuuuus!")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>Ah...!<pause 15>\n<color red<<0x10006:0x00cd>La fin <pause 10><0x10006:0xfecd>est proche...>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que tu ailles\nrefermer le sceau qui emprisonne\nle démon.\n\nSon pouvoir n'a jamais été aussi fort,\nalors sois prudent.")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>C'est terrible, le sceau a\nencore été brisé...\n\n\nTu sais comment le refermer, n'est‐ce\npas? Je sais que tu en es capable.")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname>! Il faut que tu ailles\nrefermer le sceau qui emprisonne\nle démon.\n\nSon pouvoir n'a jamais été aussi fort,\nalors sois prudent.")
          		}
          	}
          }

          void entrypoint_500_18() {
/*<519>*/ 	start()
/*< 66>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = true;
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 116, 'param3': 40}
/*<116>*/ 	wait_frames(60)
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
/*<470>*/ 	wait_frames(30)
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<518>*/ 	set_camera(26, 0)
/*<129>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1082, 'param2': 15381, 'next': 472, 'param3': 13}
/*<472>*/ 	wait_frames(15)
/*<471>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': 2319, 'next': 24, 'param3': 13}
/*< 24>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x04000030>Que... Qu'est‐ce qui se passe?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>La terre tremble sous nos pieds!\nC'est pas possible!")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000010><0x30001:0x><heroname>! Va vite examiner le\n<color red<pilier de pierre>coloroff> au fond du site!")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x0e001653>Le démon pourrait se réveiller à tout\nmoment. Il faut en avoir le cœur net!")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00424300>Alors, qu'est‐ce que tu dis de\nla puissance de mon bidule?\nÇa t'en bouche un coin, hein?\n\n<0x10009:0x003e4000>Bon, je recharge la bête, alors tiens bon\njusqu'à mon prochain signal!")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 2, unk: 0, line: 10 */ "Cette créature qui se fait attaquer\nsait peut‐être quelque chose. Je\nvous suggère de l'aider.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 1, unk: 2, line: 70 */ "<0x10009:0x00000026>Hé, <heroname>!\nMon bidule est presque prêt!\n\n\nTirons sur ce monstre pour\nl'empêcher d'escalader le mur!\n\n\nAppuie sur (^) quand tu auras besoin\nde moi et de ma machine.<0x10011:0x08cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 2, unk: 0, line: 16 */ "<0x10012:0x00000001>Maître, il est très dangereux d'atterrir\nsans ouvrir votre <color blue<parachâle>coloroff>.\n\n\nJe vous ai aidé pour cette fois, mais\nà l'avenir, veuillez appuyer sur (B)\npour atterrir, <0x10012:0x00000002>Maître.<0x10011:0x01cd>")
          }

