          void entrypoint_500_02() {
/*<  2>*/ 	start()
/*<  3>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00434500>Oups, raté ! Hmm, ça n'a vraiment servi à\nrien...\n\n\n<0x10009:0x00414000>Bon, je recharge la machine, alors tiens bon\njusqu'à mon prochain signal !")
          }

          void entrypoint_500_37() {
/*< 49>*/ 	start()
/*< 61>*/ 	switch (scene_flags[14 /* 0x0 40 */]) {
          	  case 0:
/*<435>*/ 		switch (scene_flags[109 /* 0xC 20 */]) {
          		  case 0:
/*<436>*/ 			printf(/* textboxtype: 2, unk: 0, line: 63 */ "<0x10009:0x00000001>Je vais tenter d'en apprendre plus sur les\nstatues.")
          		  case 1:
/*<427>*/ 			printf(/* textboxtype: 0, unk: 0, line: 56 */ "<0x10009:0x00080b07>Si on en croit les écrits anciens, il existerait,\nlà‐haut dans le ciel, un endroit appelé les <color red<îles\nde la Déesse>coloroff>.\n\nLes vieilles statues comme celle‐là permettraient\nd'y aller.\n\n\nMais celle‐ci m'a l'air particulière. On dirait\nqu'elle <color red<active>coloroff> toutes les autres.\n\n\n<0x10009:0x00161900>Ça a tout l'air d'une histoire à dormir debout,\nmais moi, je crois en cette légende.\n\n\n<0x10009:0x00000b04>On trouve ces statues un peu partout, et j'ai pas\ntrouvé de meilleure explication à leur présence.")
          			flw_62:
/*< 62>*/ 			printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x00181700>Qu'en penses‐tu ? Tu veux en savoir plus ?\n[1-]Oui[2]Non merci")
/*<423>*/ 			switch (choice(2)) {
          			  case 0:
/*<424>*/ 				printf(/* textboxtype: 0, unk: 2, line: 61 */ "<0x10009:0x00151902>Toi aussi tu es un amateur de contes anciens ?\n\n\n\n<0x10009:0x00160b00>Bien, je vais tout t'expliquer.\n\n\n\nLes habitants de ces îles de la Déesse montent\ndes oiseaux qu'on ne trouve que haut dans le\nciel...\n\n<0x10009:0x00001e00>On dit que c'est un ensemble d'îles où l'on\nvénère la Déesse, un véritable havre de paix...\n\n\n<0x10009:0x00000b00>Et que leur civilisation est beaucoup plus\navancée que la nôtre.")
/*<426>*/ 				printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x00080b00>Et j'ai gardé le meilleur pour la fin, tiens‐toi\nbien !\n\n\n<0x10009:0x001f1e00>Parce que c'est la Déesse qui a créé ces îles,\non y trouve des tonnes de choses inconnues\net extraordinaires !\n\n<0x10009:0x00001908>Là‐bas, tous les bâtiments sont en or !\nDes sources de jouvence s'écoulent dans\nles rivières sans jamais se tarir !\n\n<0x10009:0x00000b00>Sur les arbres poussent des fruits qui guérissent\ntoutes les maladies ! Les champs sont remplis\nde citrouilles et de fleurs colorées !\n\n<0x10009:0x00171900>Et puis le climat y est clément, jamais trop\nchaud ni trop froid, comme un éternel\nprintemps ! C'est ça, les îles de la Déesse.\n\n<0x10009:0x00000b05><0x10008:0x01cd>Alors ? Qu'est‐ce que tu en dis ?\nTu aimes ?\n\n\n<0x10009:0x00211806><0x10008:0x02cd>Tu veux en savoir plus ?\n\n\n\n<0x10008:0x01cd>Alors ?\n[1-]Oui[2]Non")
/*<434>*/ 				scene_flags[10 'Sealed Grounds'][109 /* 0xC 20 */] = true;
/*<430>*/ 				switch (choice(2)) {
          				  case 0:
/*<428>*/ 					printf(/* textboxtype: 0, unk: 0, line: 65 */ "<0x10009:0x00271956>Waouh ! Je vois que tu as été complètement\nséduit par les îles de la Déesse.\n\n\n<0x10009:0x00161e00>J'aimerais pouvoir t'en dire plus, mais pour\ncela, il faudrait que j'étudie davantage.\n\n\n<0x10009:0x00000b00>On en rediscutera la prochaine fois !")
          					flw_433:
/*<433>*/ 					switch (scene_flags[14 /* 0x0 40 */]) {
          					  case 0:
          					  case 1:
/*< 60>*/ 						scene_flags[10 'Sealed Grounds'][14 /* 0x0 40 */] = true;
/*<579>*/ 						scene_flags[10 'Sealed Grounds'][35 /* 0x5 08 */] = true;
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					}
          				  case 1:
/*<429>*/ 					printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>Ah, j'aurais bien aimé t'en parler davantage...\nLa prochaine fois, alors ?")
          					goto flw_433
          				}
          			  case 1:
/*<425>*/ 				printf(/* textboxtype: 0, unk: 2, line: 64 */ "<0x10009:0x00161e56>Ah, j'aurais bien aimé t'en parler davantage...\nLa prochaine fois, alors ?")
          				goto flw_433
          			}
          		}
          	  case 1:
/*< 55>*/ 		switch (scene_flags[3 /* 0x1 08 */]) {
          		  case 0:
/*<341>*/ 			printf(/* textboxtype: 0, unk: 11, line: 53 */ "<0x10009:0x00000008>Merci de ton aide !")
/*<334>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 340, 'param3': 47}
/*<340>*/ 			set_camera(49, 0)
/*<338>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 256, 'next': 339, 'param3': 15}
/*<339>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 335, 'param3': 15}
/*<335>*/ 			{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 58, 'param3': 48}
/*< 58>*/ 			printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x00080b0a>C'était quoi, ces rougeauds ? Je pensais pas\ntrouver ce genre d'empêcheurs de tourner\nen rond dans cette forêt...\n\n<0x10009:0x00161e00>Maintenant que j'y pense, tu es le deuxième de\nton espèce que je croise aujourd'hui ! Il se passe\nvraiment des choses étranges, ces temps‐ci.\n\n<0x10009:0x00000b00>Pour te remercier de m'avoir aidé, je vais\nt'apprendre deux ou trois petites choses.")
/*< 57>*/ 			set_camera(13, 0)
/*<437>*/ 			{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 356, 'next': 65, 'param3': 15}
/*< 65>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 256, 'next': 56, 'param3': 15}
/*< 56>*/ 			{'type': 'type3', 'subType': 2, 'param1': 6, 'param2': 0, 'next': 260, 'param3': 14}
/*<260>*/ 			{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 342, 'param3': 17}
/*<342>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 365, 'param3': 17}
/*<365>*/ 			{'type': 'type3', 'subType': 2, 'param1': 16, 'param2': 256, 'next': 59, 'param3': 15}
/*< 59>*/ 			printf(/* textboxtype: 11, unk: 1, line: 55 */ "<0x10009:0x00080b01>Je suis venu dans cette forêt pour étudier\nl'histoire ancienne. Je suis un Goron, et\nje me nomme <color blue<Marpo>coloroff>.\n\n<0x10009:0x00001700>Si on en croit les écrits anciens, il existerait,\nloin dans le ciel, un endroit appelé les <color red<îles de\nla Déesse>coloroff>.\n\n<0x10009:0x00000b00>Cette <color blue<vieille statue >coloroff>permettrait de <color red<se rendre\ndans le ciel >coloroff>et servirait aussi de point de\nrepère lorsqu'on descend sur terre.\n\n<sound 4><color red<Examiner toutes les statues >coloroff>à mesure qu'on les\ntrouve augmenterait le nombre de points de\nrepère et s'avérerait très pratique.\n\nCette statue‐ci semble particulière, elle devrait\npermettre d'<color red<activer>coloroff> toutes les autres.\n\n\n<0x10009:0x00161907>Ça a tout l'air d'une histoire à dormir debout,\nmais moi, je crois en cette légende.\n\n\nOn trouve ces statues un peu partout, et je\nn'ai pas trouvé de meilleure explication à\nleur présence.")
          			goto flw_62
          		  case 1:
/*<336>*/ 			switch (scene_flags[94 /* 0xA 40 */]) {
          			  case 0:
/*<337>*/ 				printf(/* textboxtype: 11, unk: 1, line: 52 */ "<0x10009:0x00000b52>À moi !")
          			  case 1:
/*<258>*/ 				set_camera(37, 0)
/*<465>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 50, 'param3': 32}
/*< 50>*/ 				printf(/* textboxtype: 1, unk: 0, line: 51 */ "<0x10009:0x18000b52>Allez‐vous‐en ! Laissez‐moi tranquille !")
/*<259>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_500_54() {
/*<215>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 6, line: 11 */ "<0x10005:0x00320000><0x10012:0x00000004>Maître <heroname>.")
          }

          void entrypoint_500_71() {
/*<438>*/ 	start()
/*<439>*/ 	printf(/* textboxtype: 2, unk: 0, line: 66 */ "<0x10009:0x00151b09><0x10008:0x01cd>Oooh !")
          }

          void entrypoint_500_03() {
/*<  4>*/ 	start()
/*<568>*/ 	{'type': 'type3', 'subType': 4, 'param1': 62, 'param2': 16384, 'next': 5, 'param3': 13}
/*<  5>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "Bon, cette fois, c'est toi qui sers de boulet !\nJ'te préviens, je paye pas les pots cassés...")
          }

          void entrypoint_500_55() {
/*<210>*/ 	start()
/*<211>*/ 	printf(/* textboxtype: 2, unk: 0, line: 12 */ "<0x10005:0x004b0000>Voici la <color blue<terre>coloroff> dont parlent les légendes de Célesbourg.")
          }

          void entrypoint_500_72() {
/*<442>*/ 	start()
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 453, 'param3': 40}
/*<453>*/ 	wait_frames(30)
/*<444>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé ! Ho ! <0x30001:0x><heroname> !")
/*<454>*/ 	set_camera(51, 0)
/*<458>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 446, 'param3': 16}
/*<446>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Héhéhé, sous tes yeux ébahis... Voici l'ultime\narme super secrète du grand Hergo !")
/*<455>*/ 	set_camera(56, 0)
/*<459>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 447, 'param3': 13}
/*<447>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Son petit nom, c'est... la <color red<mégatapulte>coloroff> !")
/*<460>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 448, 'param3': 13}
/*<448>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>J'vois que t'en restes coi, et c'est bien normal !\nCe n'est qu'au bout d'incroyables efforts que j'ai\nréussi à construire ce chef‐d'œuvre !")
/*<462>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Regarde un peu ça !")
/*<456>*/ 	set_camera(48, 0)
/*<463>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>J'ai déblayé la zone entière pour pouvoir\ninstaller le rail qui permet de déplacer\ncet engin. Et j'ai tout fait tout seul !\n\nHa, je m'étonne moi‐même...<pause 30> Tout ce talent qui\nne demandait qu'à s'exprimer !\n\n\n<0x10009:0x28414000>Il ne reste plus qu'à utiliser cette machine\nde rêve pour lui faire la tête au carré, à ce\ndémon !")
/*<464>*/ 	set_camera(32, 0)
/*<449>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Une seule de mes petites bombes dans ce gros\ntas, ça devrait le calmer un petit moment !")
/*<461>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 450, 'param3': 13}
/*<450>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Enfin, c'est bien joli, mais ce démon arrive un\npoil trop tôt.")
/*<451>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>La machine a encore besoin de quelques\nréglages avant de fonctionner parfaitement.\n\n\nJe te préviendrai quand tout sera prêt, alors\ntiens bon jusque‐là !")
/*<457>*/ 	set_camera(57, 0)
/*<452>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_04() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 2, line: 6 */ "")
          }

          void entrypoint_500_56() {
/*<214>*/ 	start()
/*<212>*/ 	printf(/* textboxtype: 0, unk: 2, line: 13 */ "<0x10005:0x004b0000>Cet endroit s'appelle le <color blue<vallon du sceau>coloroff>.")
          }

          void entrypoint_500_73() {
/*<479>*/ 	start()
/*<477>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10006:0xfdcd>Toi...\n\n\n\n<0x10006:0xfdcd>Toi, fils du destin, qui descends du ciel...")
          }

          void entrypoint_500_05() {
/*<  8>*/ 	start()
/*<  9>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Le sceau a été brisé !\n\n\n\nLes explications attendront.\n\n\n\nPour le moment, il faut empêcher ce monstre\nde s'échapper.\n\n\nIl ne doit pas s'approcher du temple !")
          }

          void entrypoint_500_22() {
/*< 26>*/ 	start()
/*< 81>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 80, 'param3': 32}
/*< 80>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 27, 'param3': 16}
/*< 27>*/ 	printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Maintenant, <heroname> !<pause 30>\n\n\n\nUtilise ton <color red<éclat céleste >coloroff>sur le pilier de pierre !\n\n\n\n<0x10009:0x00111700>Vite !")
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
/*<376>*/ 	printf(/* textboxtype: 0, unk: 11, line: 119 */ "<0x10009:0x28000053>Waouh !<0x10005:0x001e0000>")
/*<254>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>On dirait que les gros ennuis vont commencer...<0x10005:0x001e0000>")
/*<255>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>Mais rassure‐toi !\n\n\n\n<0x10009:0x28410000>Tu commences à connaître l'efficacité de ma\n<color red<mégatapulte>coloroff>, non ?")
/*<256>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>Tant qu'elle sera là, le mot « défaite » ne\nfigurera pas dans mon dictionnaire !\n\n\n<0x10009:0x28000200>J'ai une mission à remplir...")
/*<257>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200>Alors essaie de ne pas trop me gêner pendant\nque je sauve le monde, <heroname> !")
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
/*<478>*/ 	printf(/* textboxtype: 2, unk: 0, line: 18 */ "<0x10006:0xfdcd>Lève l'épée divine vers le ciel... <pause 15><0x10006:0xfdcd>Et libère son\nénergie pour frapper l'aura maléfique...")
          }

          void entrypoint_500_40() {
/*< 51>*/ 	start()
/*< 85>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 84, 'param3': 32}
/*< 84>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3592, 'param2': 2829, 'next': 86, 'param3': 13}
/*< 86>*/ 	set_camera(15, 0)
/*< 52>*/ 	printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname> ! Le <color red<pilier du sceau >coloroff>doit se\ntrouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
/*< 87>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_58() {
/*<216>*/ 	start()
/*<213>*/ 	printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10005:0x004b0000>Soyez prudent, <0x10012:0x0000000b>Maître.")
          }

          void entrypoint_500_23() {
/*<475>*/ 	start()
/*<481>*/ 	printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10012:0x00000001>Maître, Fay au rapport.")
/*<482>*/ 	printf(/* textboxtype: 1, unk: 0, line: 9 */ "Cette porte semble avoir été ouverte récemment mais\nà présent, une puissante énergie la maintient fermée.")
          }

          void entrypoint_500_75() {
/*<497>*/ 	start()
/*<498>*/ 	story_flags[790 /* us: 805A9B2C 0x40, jp: 805ACDAC 0x40 */] = true;
/*<520>*/ 	scene_flags[10 'Sealed Grounds'][54 /* 0x7 40 */] = true;
          }

          void entrypoint_500_41() {
/*< 76>*/ 	start()
/*< 74>*/ 	printf(/* textboxtype: 0, unk: 76, line: 86 */ "<0x10009:0x00000026>Bien joué, <heroname> ! Allez,\nremercie‐moi !\n\n\nBon, il faut aller activer la porte du temps,\nmaintenant ! J'y cours, j'y vole !")
          }

          void entrypoint_500_24() {
/*<137>*/ 	start()
/*<547>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<548>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Le <color red<pilier du sceau >coloroff>est planté\ndans le front de la bête.\n\n\nVous ne devez pas fuir sans avoir refermé le sceau.")
          	  case 1:
/*<139>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<140>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<141>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Vous devez refermer le sceau\nqui emprisonne le démon.\n\n\nVous ne pouvez pas fuir maintenant, <0x10012:0x00000002>Maître.")
          			  case 1:
/*<142>*/ 				printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Le <color red<pilier du sceau >coloroff>est planté\ndans le front de la bête.\n\n\nVous ne devez pas fuir sans avoir refermé le sceau.")
          			}
          		  case 1:
/*<138>*/ 			printf(/* textboxtype: 0, unk: 1, line: 40 */ "")
          		}
          	}
          }

          void entrypoint_500_59() {
/*<217>*/ 	start()
/*<218>*/ 	printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x003e4515><0x10008:0x01cd>Gaaah !\n\n\n\n<0x10009:0x00004000>Avec tous ces tremblements, les murs se sont\nécroulés et les bombes ne sont plus accessibles !\n\n\nÇa, c'est rude ! Qu'est‐ce qu'on va faire ?\n\n\n\n<0x10008:0x01cd>!!!")
          }

          void entrypoint_500_76() {
/*<506>*/ 	start()
/*<466>*/ 	printf(/* textboxtype: 0, unk: 2, line: 67 */ "<0x10009:0x00131907>Mais comment as‐tu fait ça ? C'est un tour\nde magie ?\n\n\n<0x10009:0x00171b08>La statue a réagi quand tu t'es approché !\nQuel talent !")
          }

          void entrypoint_500_08() {
/*< 10>*/ 	start()
/*< 11>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x00444300>Je l'ai touché, mais on dirait que c'était pas le\nbon moment ! Un peu trop tard, peut‐être...\n\n\n<0x10009:0x00004000>Bon, je recharge la bête, alors tiens bon jusqu'à\nmon prochain signal !")
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
/*< 75>*/ 	printf(/* textboxtype: 76, unk: 1, line: 88 */ "<0x10009:0x00203010>Pfiou, <heroname> ! Cette fois‐ci, j'ai\nvraiment cru qu'on allait y passer !\nHeureusement, on s'en est sortis.\n\n<0x10009:0x00420200>Je retourne au temple, rejoins‐moi là‐bas !")
          }

          void entrypoint_500_77() {
/*<507>*/ 	start()
/*<508>*/ 	printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x003e4026><0x30001:0x><heroname> ! <color red<Ramène ta fraise par ici>coloroff>,\net fissa ! Il y a un passage près du temple,\nsur le côté !")
          }

          void entrypoint_500_09() {
/*< 12>*/ 	start()
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0020403c>Ça y est, tu es en place ? Allez, vise bien le\npilier de pierre sur son museau !")
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
/*<132>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "<0x30001:0x><heroname> ! On dirait bien que le gros\nvilain pas beau refait des siennes !")
/*<263>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 136, 'param3': 13}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Attends‐moi un peu, je vais aller me préparer !")
/*<135>*/ 	{'type': 'type3', 'subType': 2, 'param1': 22, 'param2': 772, 'next': 420, 'param3': 14}
/*<420>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<134>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<418>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_60() {
/*<219>*/ 	start()
/*<372>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 222, 'param3': 32}
/*<222>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé ! Ho ! <0x30001:0x><heroname> !")
/*<293>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 294, 'param3': 40}
/*<294>*/ 	wait_frames(45)
/*<229>*/ 	set_camera(31, 0)
/*<231>*/ 	{'type': 'type3', 'subType': 1, 'param1': 40, 'param2': 100, 'next': 295, 'param3': 16}
/*<295>*/ 	{'type': 'type3', 'subType': 2, 'param1': 20, 'param2': 356, 'next': 223, 'param3': 15}
/*<223>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Héhéhé, sous tes yeux ébahis... Voici l'ultime\narme super secrète du grand Hergo !")
/*<230>*/ 	set_camera(32, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 224, 'param3': 13}
/*<224>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Son petit nom, c'est... la <color red<mégatapulte>coloroff> !")
/*<345>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10302, 'param2': 512, 'next': 225, 'param3': 13}
/*<225>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>J'vois que t'en restes coi, et c'est bien normal !\nCe n'est qu'au bout d'incroyables efforts que j'ai\nréussi à construire ce chef‐d'œuvre !")
/*<361>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Regarde un peu ça !")
/*<232>*/ 	set_camera(33, 0)
/*<362>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>J'ai déblayé la zone entière pour pouvoir\ninstaller le rail qui permet de déplacer\ncet engin. Et j'ai tout fait tout seul !\n\nHa, je m'étonne moi‐même...<pause 30> Tout ce talent qui\nne demandait qu'à s'exprimer !\n\n\n<0x10009:0x28414000>Il ne reste plus qu'à utiliser cette machine\nde rêve pour lui faire la tête au carré, à ce\ndémon !")
/*<233>*/ 	set_camera(32, 0)
/*<226>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Une seule de mes petites bombes dans ce gros\ntas, ça devrait le calmer un petit moment !")
/*<368>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Enfin, c'est bien joli, mais ce démon arrive un\npoil trop tôt.")
/*<228>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>La machine a encore besoin de quelques\nréglages avant de fonctionner parfaitement.\n\n\nJe te préviendrai quand tout sera prêt, alors\ntiens bon jusque‐là !")
/*<296>*/ 	set_camera(45, 0)
/*<240>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_78() {
/*<580>*/ 	start()
/*<581>*/ 	printf(/* textboxtype: 0, unk: 11, line: 128 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Vous devez refermer le sceau\nqui emprisonne le démon.\n\n\nVous ne pouvez pas fuir maintenant, <0x10012:0x00000002>Maître.")
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
/*<245>*/ 	printf(/* textboxtype: 1, unk: 2, line: 108 */ "<0x10009:0x28000004><0x10008:0x01cd>Hé ! Ho ! <0x30001:0x><heroname> !")
/*<246>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 297, 'param3': 40}
/*<297>*/ 	wait_frames(30)
/*<501>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 298, 'param3': 47}
/*<298>*/ 	set_camera(36, 0)
/*<503>*/ 	{'type': 'type3', 'subType': 2, 'param1': 30, 'param2': 356, 'next': 502, 'param3': 15}
/*<502>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 0, 'next': 247, 'param3': 48}
/*<247>*/ 	printf(/* textboxtype: 11, unk: 1, line: 109 */ "<0x10007:0x2800000f>Héhéhé, sous tes yeux ébahis... Voici l'ultime\narme super secrète du grand Hergo !")
/*<299>*/ 	set_camera(46, 0)
/*<300>*/ 	wait_frames(15)
/*<346>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16909, 'next': 248, 'param3': 13}
/*<248>*/ 	printf(/* textboxtype: 2, unk: 11, line: 110 */ "Son petit nom, c'est... la <color red<mégatapulte>coloroff> !")
/*<474>*/ 	{'type': 'type3', 'subType': 2, 'param1': 29, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 249, 'param3': 13}
/*<249>*/ 	printf(/* textboxtype: 1, unk: 2, line: 111 */ "<0x10009:0x28000018>J'vois que t'en restes coi, et c'est bien normal !\nCe n'est qu'au bout d'incroyables efforts que j'ai\nréussi à construire ce chef‐d'œuvre !")
/*<363>*/ 	printf(/* textboxtype: 11, unk: 1, line: 112 */ "Regarde un peu ça !")
/*<301>*/ 	set_camera(47, 0)
/*<364>*/ 	printf(/* textboxtype: 2, unk: 11, line: 113 */ "<0x10009:0x28404300>J'ai déblayé la zone entière pour pouvoir\ninstaller le rail qui permet de déplacer\ncet engin. Et j'ai tout fait tout seul !\n\nHa, je m'étonne moi‐même...<pause 30> Tout ce talent qui\nne demandait qu'à s'exprimer !\n\n\n<0x10009:0x28414000>Il ne reste plus qu'à utiliser cette machine\nde rêve pour lui faire la tête au carré, à ce\ndémon !")
/*<367>*/ 	set_camera(32, 0)
/*<250>*/ 	printf(/* textboxtype: 1, unk: 2, line: 114 */ "<0x10009:0x28044000>Une seule de mes petites bombes dans ce gros\ntas, ça devrait le calmer un petit moment !")
/*<348>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 251, 'param3': 13}
/*<251>*/ 	printf(/* textboxtype: 11, unk: 1, line: 115 */ "Enfin, c'est bien joli, mais ce démon arrive un\npoil trop tôt.")
/*<252>*/ 	printf(/* textboxtype: 0, unk: 11, line: 116 */ "<0x10009:0x28414000>La machine a encore besoin de quelques\nréglages avant de fonctionner parfaitement.\n\n\nJe te préviendrai quand tout sera prêt, alors\ntiens bon jusque‐là !")
/*<302>*/ 	set_camera(50, 0)
/*<253>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_44() {
/*<354>*/ 	start()
/*<356>*/ 	switch (scene_flags[6 /* 0x1 40 */]) {
          	  case 0:
/*<358>*/ 		printf(/* textboxtype: 2, unk: 0, line: 60 */ "<0x10009:0x00171b08>La statue a réagi ! On dirait que tu en sais plus\nque ce que je pensais !")
          	  case 1:
/*<355>*/ 		printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00151b05><0x10008:0x01cd>Oh !")
/*<357>*/ 		printf(/* textboxtype: 0, unk: 6, line: 59 */ "<0x10009:0x00131909>Oh‐ho !\n\n\n\n<0x10009:0x00171b08>Comment as‐tu fait ça ? La statue a réagi ! On\ndirait que tu en sais plus que ce que je pensais !")
/*<359>*/ 		scene_flags[10 'Sealed Grounds'][6 /* 0x1 40 */] = true;
          	}
          }

          void entrypoint_500_45() {
/*< 89>*/ 	start()
/*< 88>*/ 	printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x00000026>Hoho, on dirait qu'il s'est acheté une paire de\nbras ! Très bien !\n\n\nC'est pile le moment de montrer ce que ma\nmégatapulte a dans le ventre !\n\n\n<0x10009:0x00424000>Je te ferai signe dès que je serai prêt, alors\ntiens bon en attendant !")
          }

          void entrypoint_500_28() {
/*<160>*/ 	start()
/*<553>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<554>*/ 		printf(/* textboxtype: 6, unk: 1, line: 43 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Le démon s'est à nouveau\nréveillé. Vous ne pouvez pas fuir maintenant.")
          	  case 1:
/*<161>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<162>*/ 			printf(/* textboxtype: 0, unk: 6, line: 44 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Vous devez à nouveau\nrefermer le sceau qui emprisonne le démon.\n\n\nVous ne pouvez pas fuir maintenant, <0x10012:0x00000002>Maître.")
          		  case 1:
/*<163>*/ 			printf(/* textboxtype: 6, unk: 1, line: 43 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Le démon s'est à nouveau\nréveillé. Vous ne pouvez pas fuir maintenant.")
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
/*<235>*/ 	printf(/* textboxtype: 11, unk: 1, line: 118 */ "<0x10009:0x28004000>On dirait que les gros ennuis vont commencer...<0x10005:0x001e0000>")
/*<241>*/ 	set_camera(32, 0)
/*<351>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10304, 'param2': 16896, 'next': 236, 'param3': 13}
/*<236>*/ 	printf(/* textboxtype: 1, unk: 0, line: 120 */ "<0x10009:0x283e400f>Mais rassure‐toi !\n\n\n\n<0x10009:0x28410000>Tu commences à connaître l'efficacité de ma\n<color red<mégatapulte>coloroff>, non ?")
/*<237>*/ 	printf(/* textboxtype: 11, unk: 1, line: 121 */ "<0x10009:0x28000000>Tant qu'elle sera là, le mot « défaite » ne\nfigurera pas dans mon dictionnaire !\n\n\n<0x10009:0x28000200>J'ai une mission à remplir...")
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 10305, 'param2': 17152, 'next': 242, 'param3': 13}
/*<242>*/ 	printf(/* textboxtype: 0, unk: 11, line: 122 */ "<0x10009:0x28000200>Alors essaie de ne pas trop me gêner pendant\nque je sauve le monde, <heroname> !")
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
/*<534>*/ 				printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname> ! Je peux plus accéder à la\nréserve de bombes pour recharger la machine !\n\n\n<0x10009:0x00204000>Alors monte dans la machine, je vais t'envoyer\ndirectement sur sa tête !")
          			  case 1:
/*<532>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<533>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Tu peux utiliser la <color red<mégatapulte>coloroff> !\n\n\n\nAppuie sur <icon 30> pour te préparer à tirer sur\ncette vermine !<0x10011:0x10cd>\n\n\nTu peux déplacer la machine avec (ControlStick) et viser\navec le curseur. Ensuite, tire‐lui dessus, et\nboum !")
          				  case 1:
/*<531>*/ 					printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Une fois de plus, le grand Hergo et sa\n<color red<mégatapulte>coloroff> entrent en jeu !\n\n\nDès que je serai prêt, je te ferai signe en\napparaissant sur <icon 30> ! Tu devrais avoir\nl'habitude, maintenant !<0x10011:0x10cd>\n\n<0x10009:0x00424000>Allez, il est temps de lui botter le derrière avec\nnotre super attaque combinée de la mort !")
          				}
          			}
          		  case 1:
/*<529>*/ 			switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          			  case 0:
/*<536>*/ 				switch (zone_temp_flags[11 /* 0x0 08 */]) {
          				  case 0:
/*<537>*/ 					printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Tu peux utiliser la <color red<mégatapulte>coloroff> !\n\n\n\nAppuie sur <icon 30> pour te préparer à tirer sur\ncette vermine !<0x10011:0x10cd>\n\n\nTu peux déplacer la machine avec (ControlStick) et viser\navec le curseur. Ensuite, tire‐lui dessus, et\nboum !")
          				  case 1:
/*<535>*/ 					printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>C'est le moment idéal pour que la <color red<mégatapulte>coloroff>,\nma super arme secrète, entre en jeu !\n\n\n<0x10009:0x00000300>J'te ferai signe quand je serai prêt, tu pourras\nappuyer sur <icon 30> pour tirer ! <0x10009:0x00004000>En attendant,\ndébrouille‐toi avec ton épée !<0x10011:0x10cd>")
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
/*<194>*/ 								printf(/* textboxtype: 76, unk: 1, line: 100 */ "<0x10009:0x00000026>Alors, où est‐ce que je te jette ?\n\n\n\n[1-]Jeux dans\nle ciel[2-]Jeux sur\nterre[3]Nulle part")
/*<195>*/ 								switch (choice(3)) {
          								  case 0:
/*<586>*/ 									switch (story_flags[394 /* us: 805A9B0C 0x10, jp: 805ACD8C 0x10 */]) {
          									  case 0:
/*<196>*/ 										printf(/* textboxtype: 0, unk: 76, line: 101 */ "Les jeux du ciel, hein ? Compris ! Où veux‐tu\naller, exactement ?\n\n\n[1-]Roulette[2-]Île aux\ninsectes[3-]Autre part")
/*<571>*/ 										switch (choice(3)) {
          										  case 0:
          											flw_209:
/*<209>*/ 											zone_temp_flags[1 /* 0x1 02 */] = true;
          											flw_204:
/*<204>*/ 											{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 199, 'param3': 42}
/*<199>*/ 											printf(/* textboxtype: 1, unk: 2, line: 105 */ "<0x10009:0x00420342>C'est parti, accroche‐toi bien !")
          										  case 1:
          											flw_202:
/*<202>*/ 											zone_temp_flags[2 /* 0x1 04 */] = true;
          											goto flw_204
          										  case 2:
/*<197>*/ 											printf(/* textboxtype: 1, unk: 0, line: 102 */ "Où veux‐tu aller, exactement ?\n[1-]Tranche‐bambou[2-]Tir à la\ncitrouille[3]Nulle part")
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
/*<200>*/ 												printf(/* textboxtype: 11, unk: 1, line: 106 */ "Reviens me voir si tu veux que je t'envoie\nquelque part !")
          											}
          										}
          									  case 1:
/*<585>*/ 										printf(/* textboxtype: 6, unk: 1, line: 103 */ "Les jeux du ciel, hein ? Compris ! Où veux‐tu\naller, exactement ?\n[1-]Roulette[2-]Île aux\ninsectes[3-]Tranche‐bambou[4]Nulle part")
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
/*<198>*/ 									printf(/* textboxtype: 0, unk: 6, line: 104 */ "Aux jeux sur terre ? Entendu ! Où veux‐tu\naller exactement ?\n\n\n[1-]Grand défi[2-]Fouille‐rubis[3-]Wagonnet\ndu péril[4]Nulle part")
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
/*<563>*/ 								printf(/* textboxtype: 2, unk: 11, line: 107 */ "<0x10009:0x00000004>Salut, <heroname> !\n\n\n\nBien sûr que le grand Hergo peut t'aider !")
/*<562>*/ 								story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */] = true;
/*<577>*/ 								switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          								  case 0:
          									goto flw_194
          								  case 1:
/*<578>*/ 									printf(/* textboxtype: 0, unk: 76, line: 98 */ "Hé, je peux t'envoyer à un nouvel endroit avec\nma super machine !")
          									flw_575:
/*<575>*/ 									printf(/* textboxtype: 1, unk: 0, line: 99 */ "Je peux t'envoyer là où ça te chante !\n\n\n\nEnfin, si tu y es jamais allé, pense bien à\nfouiller un peu partout !")
/*<576>*/ 									story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */] = true;
          									goto flw_194
          								}
          							}
          						  case 1:
/*<573>*/ 							switch (story_flags[824 /* us: 805A9B33 0x01, jp: 805ACDB3 0x01 */]) {
          							  case 0:
          								goto flw_194
          							  case 1:
/*<574>*/ 								printf(/* textboxtype: 76, unk: 1, line: 97 */ "<0x10009:0x00000004>Salut, <heroname> ! Hé, je peux t'envoyer\nà un nouvel endroit avec ma super machine !")
          								goto flw_575
          							}
          						}
          					  case 1:
/*< 79>*/ 						printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x10009:0x00000003>Tu veux aller à la forêt de Firone ?\n\n\n\nOK, je t'envoie là‐bas en un coup de cuillère à\npot, euh, de <color red<mégatapulte>coloroff> !\n[1-]OK[2]Non merci")
/*< 93>*/ 						switch (choice(2)) {
          						  case 0:
/*< 95>*/ 							printf(/* textboxtype: 0, unk: 76, line: 92 */ "<0x10009:0x00000042>Haha ! Laisse‐moi te montrer ce que je sais\nfaire !")
/*< 92>*/ 							zone_temp_flags[0 /* 0x1 01 */] = true;
/*< 96>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*< 94>*/ 							printf(/* textboxtype: 76, unk: 1, line: 91 */ "Reviens me parler si t'as envie d'y aller !")
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          					  case 0:
/*<187>*/ 						switch (story_flags[133 /* us: 805A9AE4 0x08, jp: 805ACD64 0x08 */]) {
          						  case 0:
          							flw_190:
/*<190>*/ 							printf(/* textboxtype: 0, unk: 76, line: 89 */ "<0x10009:0x00000026>Tu peux remercier le grand Hergo, une fois\nde plus ! Allez, va refermer le sceau !\nGrouille‐toi !")
          						  case 1:
/*<192>*/ 							switch (scene_flags[19 /* 0x3 08 */]) {
          							  case 0:
          								goto flw_190
          							  case 1:
/*<320>*/ 								switch (scene_flags[43 /* 0x4 08 */]) {
          								  case 0:
/*<324>*/ 									printf(/* textboxtype: 76, unk: 1, line: 85 */ "<0x10009:0x00004026><0x30001:0x><heroname> ! Je peux plus accéder à la\nréserve de bombes pour recharger la machine !\n\n\n<0x10009:0x00204000>Alors monte dans la machine, je vais t'envoyer\ndirectement sur sa tête !")
          								  case 1:
/*<322>*/ 									switch (zone_temp_flags[11 /* 0x0 08 */]) {
          									  case 0:
/*<323>*/ 										printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Tu peux utiliser la <color red<mégatapulte>coloroff> !\n\n\n\nAppuie sur <icon 30> pour te préparer à tirer sur\ncette vermine !<0x10011:0x10cd>\n\n\nTu peux déplacer la machine avec (ControlStick) et viser\navec le curseur. Ensuite, tire‐lui dessus, et\nboum !")
          									  case 1:
/*<321>*/ 										printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00004226>Une fois de plus, le grand Hergo et sa\n<color red<mégatapulte>coloroff> entrent en jeu !\n\n\nDès que je serai prêt, je te ferai signe en\napparaissant sur <icon 30> ! Tu devrais avoir\nl'habitude, maintenant !<0x10011:0x10cd>\n\n<0x10009:0x00424000>Allez, il est temps de lui botter le derrière avec\nnotre super attaque combinée de la mort !")
          									}
          								}
          							}
          						}
          					  case 1:
/*<186>*/ 						switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          						  case 0:
          							flw_189:
/*<189>*/ 							printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x00000026>Grâce à moi, <pause 30>tu peux aller refermer le sceau\nqui emprisonne le monstre !\n\n\nLa dernière fois, tu as frappé le pilier de pierre\navec euh, la lumière de ton épée, non ?")
          						  case 1:
/*<191>*/ 							switch (scene_flags[18 /* 0x3 04 */]) {
          							  case 0:
          								goto flw_189
          							  case 1:
/*<318>*/ 								switch (zone_temp_flags[11 /* 0x0 08 */]) {
          								  case 0:
/*<319>*/ 									printf(/* textboxtype: 0, unk: 76, line: 83 */ "<0x10009:0x00000026>Tu peux utiliser la <color red<mégatapulte>coloroff> !\n\n\n\nAppuie sur <icon 30> pour te préparer à tirer sur\ncette vermine !<0x10011:0x10cd>\n\n\nTu peux déplacer la machine avec (ControlStick) et viser\navec le curseur. Ensuite, tire‐lui dessus, et\nboum !")
          								  case 1:
/*< 73>*/ 									printf(/* textboxtype: 1, unk: 1, line: 82 */ "<0x10009:0x00044100>C'est le moment idéal pour que la <color red<mégatapulte>coloroff>,\nma super arme secrète, entre en jeu !\n\n\n<0x10009:0x00000300>J'te ferai signe quand je serai prêt, tu pourras\nappuyer sur <icon 30> pour tirer ! <0x10009:0x00004000>En attendant,\ndébrouille‐toi avec ton épée !<0x10011:0x10cd>")
          								}
          							}
          						}
          					}
          				}
          			}
          		}
          	  case 1:
/*<101>*/ 		printf(/* textboxtype: 0, unk: 1, line: 77 */ "<0x10009:0x00000026>La vieille dit que le gros monstre là en bas\npourrait se réveiller à nouveau...\n\n\n<0x10009:0x00004200>Mais je lui réserve une petite surprise à la sauce\nHergo !\n\n\n<0x10009:0x0000000f>J'suis en train de construire une arme secrète...\nElle est pas encore au point, mais tu vas voir,\ntu vas adorer !")
          	}
          }

          void entrypoint_500_46() {
/*< 90>*/ 	start()
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 1, line: 79 */ "<0x10009:0x00000026>Le gros est de retour, on dirait ! Allez, viens\ndire bonjour à tonton Hergo !\n\n\n<0x10009:0x00044000><0x30001:0x><heroname> ! On remet ça, exactement\ncomme la dernière fois !")
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
/*<379>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "<0x30001:0x><heroname> ! On dirait bien que le gros\nvilain pas beau refait des siennes !")
/*<383>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 385, 'param3': 13}
/*<385>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Attends‐moi un peu, je vais aller me préparer !")
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
/*<540>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname> ! Le <color red<pilier du sceau >coloroff>doit se\ntrouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          	  case 1:
/*<156>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<157>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<159>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Maintenant, <heroname> !<pause 30>\n\n\n\nUtilise ton <color red<éclat céleste >coloroff>sur le pilier de pierre !\n\n\n\n<0x10009:0x00111700>Vite !")
          			  case 1:
/*<374>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 158, 'param3': 13}
/*<158>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname> ! Le <color red<pilier du sceau >coloroff>doit se\ntrouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          			}
          		  case 1:
/*<155>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname> ! Rends‐toi vite au <color red<pilier du\nsceau >coloroff>au centre du vallon.\n\n\n<0x10009:0x00140b00>Il est fort inhabituel que la terre tremble ainsi...\nIl faut aller s'assurer que le démon n'est pas en\ntrain de se réveiller.")
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
/*<267>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>Que... Qu'est‐ce que c'est que ça ?")
/*<291>*/ 	set_camera(24, 0)
/*<287>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 283, 'param3': 13}
/*<283>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>La terre tremble sous nos pieds ! J'y crois pas !")
/*<279>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<278>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*<277>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<280>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 353, 'param3': 13}
/*<353>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3584, 'param2': 5632, 'next': 499, 'param3': 13}
/*<499>*/ 	set_camera(43, 0)
/*<266>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010><0x30001:0x><heroname> ! Va vite examiner le <color red<pilier\nde pierre>coloroff> au fond du vallon !")
/*<284>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>Le démon pourrait se réveiller à tout moment.\nIl faut en avoir le cœur net !")
/*<292>*/ 	set_camera(44, 0)
/*<505>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 285, 'param3': 15}
/*<285>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_30() {
/*< 82>*/ 	start()
/*< 83>*/ 	printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Le sceau a été brisé !\n\n\n\nLes explications attendront.\n\n\n\nPour le moment, il faut empêcher ce monstre\nde s'échapper.\n\n\nIl ne doit pas s'approcher du temple !")
          }

          void entrypoint_500_48() {
/*<164>*/ 	start()
/*<552>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<551>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          	  case 1:
/*<165>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<167>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Tu sais comment refermer le sceau, n'est‐ce\npas ?\n\n\nRends‐toi au pilier de pierre, et frappe‐le de ton\n<color red<éclat céleste>coloroff>.<pause 30> Je sais que tu en es capable.")
          		  case 1:
/*<166>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          		}
          	}
          }

          void entrypoint_500_65() {
/*<328>*/ 	start()
/*<330>*/ 	printf(/* textboxtype: 0, unk: 1, line: 80 */ "<0x10009:0x00434553><0x10008:0x01cd>Gaaah ! <pause 10>Il vole !\n\n\n\n<0x10009:0x00424026>Il croit peut‐être qu'il va pouvoir\ntranquillement planer jusqu'au temple,\nmais c'est sans compter sur le grand\nHergo ! <pause 8>Zou, tir au pigeon !")
          }

          void entrypoint_500_13() {
/*<476>*/ 	start()
/*<491>*/ 	printf(/* textboxtype: 1, unk: 0, line: 123 */ "<0x10012:0x0000000b>Maître <heroname>, Fay au rapport. Je constate\nque l'éclat céleste a provoqué un changement dans\nla zone.")
/*<495>*/ 	printf(/* textboxtype: 11, unk: 1, line: 124 */ "Je détecte également dans le périmètre une aura\nsimilaire à celle de votre parachâle, <0x10012:0x00000002>Maître. Il est\ntrès probable qu'il s'agisse de dame Zelda.\n\nGrâce à mon pouvoir de <sound 4><color red<détection>coloroff>, je peux vous guider\ndans sa direction.\n\n\nSouhaitez‐vous des informations complémentaires à ce\nsujet ?\n[1-]Oui[2]Non")
/*<569>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<492>*/ 	switch (choice(2)) {
          	  case 0:
/*<493>*/ 		printf(/* textboxtype: 0, unk: 11, line: 125 */ "<0x10012:0x00000005>Très bien, Maître.\n\n\n\nAvec la pointe de votre épée, je peux détecter l'aura\ndes cibles que vous recherchez.\n\n\nPlus vous approchez de votre cible, plus le <color red<signal\ns'intensifie>coloroff>. Je vous l'indiquerai par des sons et\ndes vibrations.\n\nLa <color red<pointe de votre curseur>coloroff> vous indiquera également\nla direction dans laquelle vous devez aller.")
          		flw_570:
/*<570>*/ 		open_dowsing_wheel(0)
/*<496>*/ 		printf(/* textboxtype: 1, unk: 0, line: 126 */ "Vous pouvez désormais rechercher dame Zelda en\nappuyant sur (^), puis en pointant le curseur dans la\ndirection que vous souhaitez scruter.<0x10011:0x08cd>")
/*<565>*/ 		story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          	  case 1:
/*<494>*/ 		printf(/* textboxtype: 11, unk: 1, line: 127 */ "Je me tiens à votre disposition.")
          		goto flw_570
          	}
          }

          void entrypoint_500_31() {
/*<143>*/ 	start()
/*<544>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<546>*/ 		{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 545, 'param3': 13}
/*<545>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname> ! Le <color red<pilier du sceau >coloroff>doit se\ntrouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          	  case 1:
/*<145>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<146>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<148>*/ 				printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x0010160d>Maintenant, <heroname> !<pause 30>\n\n\n\nUtilise ton <color red<éclat céleste >coloroff>sur le pilier de pierre !\n\n\n\n<0x10009:0x00111700>Vite !")
          			  case 1:
/*<373>*/ 				{'type': 'type3', 'subType': 4, 'param1': 16, 'param2': 6157, 'next': 147, 'param3': 13}
/*<147>*/ 				printf(/* textboxtype: 0, unk: 0, line: 68 */ "<0x30001:0x><heroname> ! Le <color red<pilier du sceau >coloroff>doit se\ntrouver sur le front du démon.\n\n\n<0x10009:0x0e000013>Si tu parviens à enfoncer ce pilier avec ton\népée, tu devrais pouvoir vaincre ce monstre.")
          			}
          		  case 1:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x0008170f><0x30001:0x><heroname> ! Rends‐toi vite au <color red<pilier du\nsceau >coloroff>au centre du vallon.\n\n\n<0x10009:0x00140b00>Il est fort inhabituel que la terre tremble ainsi...\nIl faut aller s'assurer que le démon n'est pas en\ntrain de se réveiller.")
          		}
          	}
          }

          void entrypoint_500_49() {
/*<168>*/ 	start()
/*<549>*/ 	switch (story_flags[704 /* us: 805A9B22 0x10, jp: 805ACDA2 0x10 */]) {
          	  case 0:
/*<550>*/ 		printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          	  case 1:
/*<169>*/ 		switch (scene_flags[18 /* 0x3 04 */]) {
          		  case 0:
/*<171>*/ 			printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x0010180d>Tu sais comment refermer le sceau, n'est‐ce\npas ?\n\n\nRends‐toi au pilier de pierre, et frappe‐le de ton\n<color red<éclat céleste>coloroff>.<pause 30> Je sais que tu en es capable.")
          		  case 1:
/*<170>*/ 			printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir s'est intensifié, sois prudent.")
          		}
          	}
          }

          void entrypoint_500_66() {
/*<329>*/ 	start()
/*<331>*/ 	printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x00414043>Ha, il m'a bien fait peur, mais heureusement,\nma super machine est fidèle au poste. Une seule\nbombe, et il tombe comme une mouche !\n\nÀ toi de jouer, maintenant ! Vite, avant qu'il se\nrelève !")
          }

          void entrypoint_500_14() {
/*<440>*/ 	start()
/*<441>*/ 	printf(/* textboxtype: 0, unk: 2, line: 19 */ "<0x10012:0x0000000b>Maître, Fay au rapport.\n\n\n\nJe peux vous apporter des informations sur ce que\nvous <color green<ciblez >coloroff>avec (Z).<0x10011:0x07cd>\n\n\nAppuyez sur (v) <color red<lorsque vous ciblez >coloroff>avec (Z) pour\nm'appeler.<0x10011:0x07cd><0x10011:0x09cd>")
          }

          void entrypoint_500_32() {
/*< 25>*/ 	start()
/*<542>*/ 	switch (story_flags[703 /* us: 805A9B22 0x08, jp: 805ACDA2 0x08 */]) {
          	  case 0:
/*<543>*/ 		printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>WAAAAAAAH !")
          	  case 1:
/*<149>*/ 		switch (story_flags[136 /* us: 805A9AE4 0x40, jp: 805ACD64 0x40 */]) {
          		  case 0:
/*<150>*/ 			switch (scene_flags[17 /* 0x3 02 */]) {
          			  case 0:
/*<151>*/ 				printf(/* textboxtype: 0, unk: 0, line: 38 */ "<0x10009:0x00000030>Ouh ! Ah ! Hé ! Ouais, va vite faire ce que dit\nla vieille !\n\n\nSuffit de toucher le pilier de pierre avec la\nlumière de ton épée, non ?")
          			  case 1:
/*<153>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000031>WAAAAAAAH !")
          			}
          		  case 1:
/*<152>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x00000015>Que... Qu'est‐ce que c'est que ça ?\n\n\n\nLa terre tremble sous nos pieds ! J'y crois pas !")
          		}
          	}
          }

          void entrypoint_500_67() {
/*<332>*/ 	start()
/*<333>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x00000026>Yoho, <heroname> ! Mon engin est fin\nprêt !\n\n\nAppuie sur <icon 30> quand tu as besoin de moi et de\nma machine.<0x10011:0x10cd>")
          }

          void entrypoint_500_33() {
/*< 47>*/ 	start()
/*<313>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<325>*/ 		switch (scene_flags[106 /* 0xC 04 */]) {
          		  case 0:
/*<314>*/ 			printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00040202>Attends, et tu verras...<pause 30> Je m'en vais l'aider,\nZelda, et façon « grand Hergo » !")
          		  case 1:
/*<326>*/ 			printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000002>Oh, <heroname> ? J'ai bien réfléchi\ndepuis la dernière fois, et...\n\n\nC'est sûr, je sais pas me battre aussi bien que\ntoi...\n\n\nMais comme l'a dit la vieille, je peux me rendre\nutile à ma manière.\n\n\n<0x10009:0x00404200>J'ai décidé... que je ferai tout ce que je peux\npour aider Zelda.\n\n\nJe te le dis, moi, tu verras !")
/*<327>*/ 			scene_flags[10 'Sealed Grounds'][106 /* 0xC 04 */] = true;
          		}
          	  case 1:
/*<315>*/ 		switch (scene_flags[105 /* 0xC 02 */]) {
          		  case 0:
/*<316>*/ 			printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0000002d>Arg...<pause 30> Snif...<pause 30> On dirait que<pause 30>.<pause 30>.<pause 30>. je sers vraiment\nà rien...")
          		  case 1:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0000003d><0x10008:0x01cd>Gaaaaah !\n\n\n\n<0x10009:0x00003a00><0x10008:0x01cd><0x10008:0x01cd>J'ai rien pu faire !\n\n\n\n<0x10009:0x00004000><0x10008:0x01cd><0x10008:0x02cd>Rien du tout !")
/*<317>*/ 			scene_flags[10 'Sealed Grounds'][105 /* 0xC 02 */] = true;
          		}
          	}
          }

          void entrypoint_500_50() {
/*<172>*/ 	start()
/*<559>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<560>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10012:0x00000001>Votre tâche est de refermer le sceau du démon.\nVous ne pouvez pas fuir.")
          	  case 1:
/*<173>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<174>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10012:0x0000000b>Maître, Fay au rapport. Vous devez à nouveau\nrefermer le sceau qui emprisonne le démon.\n\n\nVous ne pouvez pas fuir maintenant, <0x10012:0x00000002>Maître.")
          		  case 1:
/*<175>*/ 			printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10012:0x00000001>Votre tâche est de refermer le sceau du démon.\nVous ne pouvez pas fuir.")
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
/*<386>*/ 	printf(/* textboxtype: 0, unk: 76, line: 95 */ "<0x30001:0x><heroname> ! On dirait bien que le gros\nvilain pas beau refait des siennes !")
/*<389>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1089, 'param2': 16384, 'next': 391, 'param3': 13}
/*<391>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "Attends‐moi un peu, je vais aller me préparer !")
/*<390>*/ 	{'type': 'type3', 'subType': 2, 'param1': 25, 'param2': 772, 'next': 421, 'param3': 14}
/*<421>*/ 	scene_flags[10 'Sealed Grounds'][108 /* 0xC 10 */] = true;
/*<414>*/ 	story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */] = true;
/*<417>*/ 	changeScene(16, 0) // 
          }

          void entrypoint_500_34() {
/*< 97>*/ 	start()
/*< 98>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x00000026>C'est parti pour la forêt de Firone !<0x10005:0x000a0000>")
/*< 99>*/ 	printf(/* textboxtype: 76, unk: 1, line: 94 */ "Fais attention à toi !<0x10005:0x001e0000>")
          }

          void entrypoint_500_51() {
/*<176>*/ 	start()
/*<557>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<558>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors sois\nprudent.")
          	  case 1:
/*<177>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<179>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>C'est terrible, le sceau a encore été brisé...\n\n\n\nTu sais comment le refermer, n'est‐ce pas ?\nJe sais que tu en es capable.")
          		  case 1:
/*<178>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors sois\nprudent.")
          		}
          	}
          }

          void entrypoint_500_69() {
/*<409>*/ 	start()
/*<410>*/ 	printf(/* textboxtype: 0, unk: 0, line: 74 */ "Ouais ! À moi de jouer !")
/*<411>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "Déplace la machine avec (ControlStick), et vise bien...\n\n\n\nEnsuite, tire une bombe avec <icon 41>, et profite de\nce que le démon soit sonné !")
/*<412>*/ 	printf(/* textboxtype: 0, unk: 1, line: 76 */ "Si tu ne te souviens plus des commandes de la\n<color blue<machine>coloroff>, consulte‐les pendant que tu l'utilises\nen appuyant sur <icon 19> !<0x10011:0x0bcd>")
          }

          void entrypoint_500_17() {
/*<473>*/ 	start()
/*< 19>*/ 	set_camera(16, 0)
/*<102>*/ 	{'type': 'type3', 'subType': 4, 'param1': 15, 'param2': 3330, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "Alors, <heroname>...\n\n\n\nTu dis que la vieille qui se trouve dans le\n<color red<temple >coloroff>au bout de ce chemin sait où est <color blue<Zelda>coloroff> ?")
/*< 20>*/ 	set_camera(17, 0)
/*<104>*/ 	printf(/* textboxtype: 2, unk: 0, line: 21 */ "OK ! Merci pour l'info ! Tu peux aller jouer\nailleurs, maintenant.\n\n\n<0x10009:0x000d0b41>Le grand Hergo se charge d'aller retrouver\n<color blue<Zelda>coloroff> !")
/*<103>*/ 	{'type': 'type3', 'subType': 4, 'param1': 24, 'param2': 5632, 'next': 18, 'param3': 13}
/*< 18>*/ 	printf(/* textboxtype: 0, unk: 2, line: 22 */ "Je vais la sauver, et puis on rentrera tous les\ndeux au bercail...<pause 30>")
/*<106>*/ 	set_camera(18, 0)
/*<107>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x0000000c>Et je la demanderai en mariage, et elle dira oui,\net puis on vivra heureux pour toujours !")
/*<108>*/ 	set_camera(19, 0)
/*<112>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 512, 'next': 113, 'param3': 13}
/*<113>*/ 	printf(/* textboxtype: 2, unk: 0, line: 24 */ "<0x10009:0x0000000d>En gros, t'as plus besoin de t'occuper de cette\nhistoire !")
/*<109>*/ 	wait_frames(30)
/*<105>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "Bon allez, je file chez la vieille.")
/*< 21>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 1024, 'next': 22, 'param3': 14}
/*< 22>*/ 	printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10008:0x01cd>Porte‐toi bien !<pause 45> <0x10008:0xffcd>À pluuuuus !")
/*<110>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 256, 'next': 111, 'param3': 15}
/*<111>*/ 	set_camera(20, 0)
/*<114>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_35() {
/*< 54>*/ 	start()
/*<360>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 53, 'param3': 13}
/*< 53>*/ 	printf(/* textboxtype: 2, unk: 0, line: 69 */ "<0x10009:0x0e000054><0x10006:0x01cd>Ah...!<pause 15> <color red<<0x10006:0x00cd>La fin <pause 10><0x10006:0xfecd>est proche...>coloroff><0x10005:0x00280000>")
          }

          void entrypoint_500_52() {
/*<180>*/ 	start()
/*<555>*/ 	switch (story_flags[705 /* us: 805A9B22 0x20, jp: 805ACDA2 0x20 */]) {
          	  case 0:
/*<556>*/ 		printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors sois\nprudent.")
          	  case 1:
/*<181>*/ 		switch (scene_flags[19 /* 0x3 08 */]) {
          		  case 0:
/*<183>*/ 			printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x0010180d>C'est terrible, le sceau a encore été brisé...\n\n\n\nTu sais comment le refermer, n'est‐ce pas ?\nJe sais que tu en es capable.")
          		  case 1:
/*<182>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0010180f><0x30001:0x><heroname> ! Il faut que tu ailles\nrefermer le sceau qui emprisonne le démon.\n\n\nSon pouvoir n'a jamais été aussi fort, alors sois\nprudent.")
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
/*< 24>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x04000030>Que... Qu'est‐ce que c'est que ça ?")
/*<121>*/ 	wait_frames(30)
/*<130>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1079, 'param2': 14592, 'next': 468, 'param3': 13}
/*<468>*/ 	wait_frames(15)
/*<119>*/ 	set_camera(24, 0)
/*<118>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x04000031>La terre tremble sous nos pieds ! J'y crois pas !")
/*< 45>*/ 	set_camera(27, 0)
/*< 71>*/ 	scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*< 68>*/ 	scene_flags[10 'Sealed Grounds'][25 /* 0x2 02 */] = false;
/*< 67>*/ 	scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<115>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 125, 'param3': 13}
/*<125>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 128, 'param3': 17}
/*<128>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3600, 'param2': 5632, 'next': 23, 'param3': 13}
/*< 23>*/ 	printf(/* textboxtype: 0, unk: 2, line: 28 */ "<0x10009:0x0e000010><0x30001:0x><heroname> ! Va vite examiner le <color red<pilier\nde pierre>coloroff> au fond du vallon !")
/*<123>*/ 	{'type': 'type3', 'subType': 2, 'param1': 28, 'param2': 356, 'next': 122, 'param3': 15}
/*<122>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "<0x10009:0x0e001653>Le démon pourrait se réveiller à tout moment.\nIl faut en avoir le cœur net !")
/*<126>*/ 	wait_frames(15)
/*<124>*/ 	set_camera(28, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 2, 'param1': 17, 'param2': 270, 'next': 366, 'param3': 15}
/*<366>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
/*<127>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_500_01() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00424300>Alors, qu'est‐ce que tu dis de la puissance de\nmon engin ? Ça t'en bouche un coin, hein ?\n\n\n<0x10009:0x003e4000>Bon, je recharge la bête, alors tiens bon jusqu'à\nmon prochain signal !")
          }

          void entrypoint_500_36() {
/*< 63>*/ 	start()
/*< 64>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "Cette créature qui se fait attaquer sait peut‐être\nquelque chose. Je vous suggère de l'aider.")
          }

          void entrypoint_500_53() {
/*<184>*/ 	start()
/*<185>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x00000026>Hé, <heroname> ! Mon engin est fin\nprêt !\n\n\nTirons sur ce monstre pour l'empêcher\nd'escalader le mur !\n\n\nAppuie sur <icon 30> quand tu as besoin de moi et de\nma machine.<0x10011:0x10cd>")
          }

          void entrypoint_500_70() {
/*<431>*/ 	start()
/*<432>*/ 	printf(/* textboxtype: 0, unk: 2, line: 16 */ "<0x10012:0x00000001>Maître, il est très dangereux d'atterrir sans ouvrir\nvotre <color blue<parachâle>coloroff>.\n\n\nJe vous ai aidé pour cette fois, mais à l'avenir, veuillez\nappuyer sur <icon 41> pour atterrir, <0x10012:0x00000002>Maître.<0x10011:0x0fcd>")
          }

