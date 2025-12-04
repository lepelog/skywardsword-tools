          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf(/* textboxtype: 1, unk: 0, line: 6 */ "Le diseur de bonne aventure est revenu\nau poste! Le bazar a retrouvé son âme!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "Comme ça, le diseur de bonne aventure\nest chez lui, en train de déprimer...\n\n\nIl reviendrait peut‐être si quelqu'un\nlui trouvait une nouvelle boule de\ncristal...")
          				  case 1:
/*<128>*/ 					printf(/* textboxtype: 1, unk: 0, line: 4 */ "Si je ne me trompe pas, la maison du\ndiseur de bonne aventure se trouve\n<color red<vers la côte est>coloroff>.\n\nIl me manque, le bonhomme...\nJ'aimais bien entendre sa voix!\nVa donc lui rendre visite chez\nlui pour voir si tout va bien.")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf(/* textboxtype: 1, unk: 0, line: 3 */ "Hmm, ça fait longtemps que je n'ai\npas vu le <color blue<diseur de bonne aventure\n>coloroff>dans le coin...\n\nJe suis sûr qu'il reste chez lui à se\nlamenter sur sa boule de cristal fêlée...\nIl me semble qu'il aurait pu prévenir\nça, non?")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf(/* textboxtype: 1, unk: 0, line: 8 */ "Ah bon?")
/*<194>*/ 					printf(/* textboxtype: 1, unk: 0, line: 7 */ "Comme ça, le diseur de bonne aventure\nest chez lui, en train de déprimer...\n\n\nIl reviendrait peut‐être si quelqu'un\nlui trouvait une nouvelle boule de\ncristal...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf(/* textboxtype: 1, unk: 0, line: 5 */ "Pourrais-tu aller voir comment il va?\n\n\n\nJe suis quasiment sûr qu'il habite\n<color red<à l'extrémité est >coloroff>de Célesbourg.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf(/* textboxtype: 1, unk: 0, line: 2 */ "Tu t'es déjà baladé dans Célesbourg,\nla nuit?<pause 25> Tu ne peux pas t'imaginer\ncomme c'est différent!\n\nPar exemple, si tu vas voir le patron\nde l'armurerie  la nuit, il achètera tes\ntrésors, si tu veux.\n\nC'est vrai que c'est un peu dangereux\nde rester dehors si tard, mais je ne\nm'inquiète pas pour un apprenti\nchevalier comme toi!\nSi tu veux attendre jusqu'à la tombée\nde la nuit, il te suffit d'aller <color green<dormir\ndans un lit>coloroff>!<pause 25> Pas plus compliqué que ça!")
          			  case 1:
/*<  3>*/ 				printf(/* textboxtype: 1, unk: 0, line: 1 */ "Quand on est fatigué, il n'y a qu'une\nchose à faire : se reposer.<pause 25> <color green<Tu peux\ndormir n'importe où qu'il y a un lit>coloroff>!\n\nCélesbourg est très différent à la nuit\ntombée.\n\n\nIl te suffit <color green<d'aller dormir>coloroff> pour choisir\nde te réveiller la nuit, et découvrir\nla ville sous un jour différent. Haha!")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf(/* textboxtype: 1, unk: 0, line: 60 */ "Miroir, gentil miroir...\nDis‐moi qui est la plus belle!")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x22000002>C'est justement ce que tu pensais,\nn'est‐ce pas, <heroname>?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf(/* textboxtype: 1, unk: 0, line: 11 */ "J'ai entendu une rumeur au sujet\ndu <color red<dortoir>coloroff>. Apparemment, <color red<la nuit>coloroff>,\non entend une femme pleurnicher.\n\nJ'ai beau être grand et fort, mais...\nJ'avoue que ça me donne la trouille.")
/*<170>*/ 				printf(/* textboxtype: 1, unk: 0, line: 13 */ "Quoi? Dans les toilettes?\nUne main?\n\n\nBon...<pause 20> Elle est peut-être gênée...")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "J'ai entendu une rumeur au sujet\ndu <color red<dortoir>coloroff>. Apparemment, <color red<la nuit>coloroff>,\non entend une femme pleurnicher.\n\nJ'ai beau être grand et fort, mais...\nJ'avoue que ça me donne la trouille.")
/*<167>*/ 					printf(/* textboxtype: 1, unk: 0, line: 12 */ "Hein?<pause 20> Dans les toilettes?\nElle demande du papier?\n\n\nLa pauvre! J'ai connu ça, et c'est\npas drôle du tout...")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf(/* textboxtype: 1, unk: 0, line: 11 */ "J'ai entendu une rumeur au sujet\ndu <color red<dortoir>coloroff>. Apparemment, <color red<la nuit>coloroff>,\non entend une femme pleurnicher.\n\nJ'ai beau être grand et fort, mais...\nJ'avoue que ça me donne la trouille.")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf(/* textboxtype: 1, unk: 0, line: 10 */ "J'espère que tu n'as pas oublié mon\nconseil! Appuie sur (2) pour obtenir\nde l'aide.<0x10011:0x05cd>")
          			  case 1:
/*<  5>*/ 				printf(/* textboxtype: 1, unk: 0, line: 9 */ "Comme ça, tu es apprenti chevalier?\nFélicitations!\n\n\nMais tu as sans doute encore beaucoup\nà apprendre. S'il y a des choses que tu\nne comprends pas, appuie sur (2) pour\nobtenir de l'aide.<0x10011:0x05cd>\nCompris? Rappelle-toi de ça!")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000001>Ah, c'est toi, <heroname>!\nC'est le grand jour, non? Le jour\nde la chevauchée céleste!\n\nSi tu remportes cette épreuve, tu vas\nenfin passer en classe élite!")
/*<  8>*/ 	printf(/* textboxtype: 1, unk: 0, line: 15 */ "À Célesbourg, on est jugé selon son\naisance à voler avec son célestrier. \n\n\n<0x10009:0x000a0404>Et c'est d'autant plus vrai pour\nvous autres qui aspirez à devenir\nchevaliers.\n\nNous avons tous dû nous entraîner\ntrès fort pour apprendre à voler avec\nnos oiseaux.")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 0, line: 16 */ "<0x10009:0x00000002>On ne t'a jamais dit que c'était mal\nélevé de faire irruption comme ça\nchez les gens, sans avoir été invité?\nOn ne t'a jamais appris à cogner?\nD'habitude, je travaille au bazar\npendant la journée, mais aujourd'hui\nj'ai fermé boutique pour la cérémonie.\n\n<0x10009:0x00000015>C'est bizarre... Je rêve toujours de\nprendre une journée de congé, et\ndès que j'en ai une, je ne sais pas\nquoi faire de ma peau!")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x12110016>Tu...<pause 15> Tu ne le regretteras pas!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "<0x10009:0x14080913>Bien sûr que non! Voyons!\n\n\n\nJe pense que nous devrions aller\nannoncer ça à ta mère au plus tôt!\n\n\nJe suis sûre qu'elle est tout à fait\ncomme toi, honnête et travailleuse!\nN'est‐ce pas?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf(/* textboxtype: 1, unk: 0, line: 64 */ "<0x10009:0x12090c18>Eh bien, il est peut‐être encore un peu\ntôt pour les présentations...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "<0x10009:0x14000005>Pourquoi? Voyons donc!\nC'est toujours mieux de se débarrasser\nde ces formalités au plus vite!\n\n<0x10009:0x14080913>Bon, j'espère que tu vas m'inviter\nchez toi bientôt!")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x00000001>Hé, <heroname>!\nComment ça se fait que t'es pas encore\ncouché, à cette heure‐ci?\n\n<0x10009:0x00111300>Ma maman est encore en train de\ncuisiner... J'espère que ça sera\nprêt bientôt. J'ai faim, moi!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x000e0812>Mais... C'est épouvantable!\nLa Déesse... Elle a disparu!\n\n\n<0x10009:0x000f0d00>Il se passe des choses étranges\nici, à Célesbourg...")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf(/* textboxtype: 1, unk: 0, line: 67 */ "Picalia n'est toujours pas rentrée...\nJe commence vraiment à m'inquiéter.\n\n\n<0x10009:0x00000800><0x30001:0x><heroname>, peux-tu aller me la\ntrouver, s'il te plaît?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x00000001>Salut, garçon!\nTu le trouves utile, Récupix?\n\n\nIl a pas sa langue dans sa poche,\nl'animal, mais il a un bon fond,\nj'te le garantis!\n\nPromets‐moi d'faire un effort pour\nbien t'entendre avec lui!")
          	  case 1:
/*< 15>*/ 		printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x00000003>Dis donc, garçon! Qu'est‐ce que tu\nfais dehors à une heure pareille?\nTu veux te faire dévorer par un\nlemly, ou quoi?\nJ'crois qu't'as pas bien compris... \nÀ moins que ce ne soit absolument\nnécessaire, évite de sortir la nuit.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf(/* textboxtype: 1, unk: 0, line: 68 */ "À voir le patron bricoler ses machines\ntoute la journée, bzzt, on serait porté\nà croire que ce n'est qu'un simple\npasse‐temps... Vrrrrm... \nMais en fait, ce qu'il essaie de\nfabriquer, c'est un lavoir\nautomatique pour sa mère... \nBzzt-CLANG!\nC'est si gentil de sa part, vrrrrm!\n\n\n\nL'exact opposé d'une certaine personne\nqui n'hésite pas à traîner mam'selle Fay\noù bon lui semble, sans égard pour elle.\nBzzat-grr!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x00000056>Nom d'un p'tit oiseau! Veux-tu s'il te\nplaît parler à mon fils? Je n'en peux\nplus!")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf(/* textboxtype: 1, unk: 0, line: 25 */ "Et moi qui me disais qu'il arrêterait\nde perdre son temps avec sa ferraille\nquand son robot serait réparé...\n\nIl aurait pu avoir les mains propres\nune fois pour toutes! Mais non, bien\nsûr, il ne changera pas! Quand on\nest souillon, c'est pour la vie!")
          	  case 1:
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Toutes les nuits, il reste assis là\njusqu'aux petites heures du matin\nà essayer de réparer le stupide\nrobot de son grand‐père!\nVeux-tu bien me dire ce qu'il va\nfaire avec cette espèce de tas\nde ferraille tout rouillé?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x00000056>Aaaah. Regarde‐moi donc la saleté que\nme ramène mon fils...\n\n\nJe veux bien croire qu'il adore réparer\nplein de choses, c'est pas une raison\npour se salir comme ça! J'en ai assez\nde faire son lavage!\n[1-]Ton fils?[2-]Pauvre toi")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf(/* textboxtype: 1, unk: 0, line: 22 */ "Bien oui, mon souillon de fils qui\ns'occupe de l'atelier de rénovation!\nJ'en ai pas cinquante...")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf(/* textboxtype: 1, unk: 0, line: 23 */ "Je ne sais plus quoi faire...\nCe garçon me désespère!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00001101>Il me semble que tu ferais mieux\nde chercher ton oiseau, non?")
          		  case 1:
/*< 93>*/ 			printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x00001104>Je me demande bien de quoi ils\ndiscutaient, là‐bas... Ça avait\nl'air sérieux!")
          		}
          	  case 1:
/*< 91>*/ 		printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x00000005>J'adore rester assis ici et prendre le\ntemps de relaxer.\n\n\nJe reste là, et je pense à elle pendant\ndes heures...\n\n\n<0x10009:0x000a0c00><color blue<Tironne>coloroff>, de la Citrouille perchée...\nQuelle belle créature!")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x00000001>Bonjour, <heroname>.\nTu n'as pas vu Picalia, par hasard?\n\n\nC'est une vraie girouette, celle-là!\nOn ne sait jamais quel bord elle\nva prendre. On ne peut jamais\navoir l'esprit tranquille avec elle.")
          	  case 1:
/*< 24>*/ 		printf(/* textboxtype: 1, unk: 0, line: 26 */ "<0x10009:0x0000000a>Oh, bonjour, <heroname>.\nComment vas‐tu? Tu n'aurais pas\nvu ma petite Picalia, par hasard?\n\nElle n'arrête pas de se sauver, et je\ndois courir partout pour la retrouver!\nJe ne sais pas ce que je vais faire\navec cette enfant-là!\nTant qu'elle n'aura pas eu une bonne\nfrousse, elle ne comprendra pas...")
          	}
          }

          void entrypoint_122_26() {
/*< 96>*/ 	start()
/*< 97>*/ 	set_camera(4, 0)
/*< 98>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_27() {
/*<101>*/ 	start()
/*<195>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<197>*/ 		switch (story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */]) {
          		  case 0:
/*<198>*/ 			entrypoint_118_12();
          		  case 1:
          			flw_102:
/*<102>*/ 			printf(/* textboxtype: 1, unk: 0, line: 72 */ "<0x10009:0x00000004>Ah! C'est toi! Elle est partie, la Déesse!\nSavais-tu ça?\n\n\n<0x10009:0x00000011>Penses-tu que c'est parce que\nz'ai pas été saze?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x00000001>Bonzour, toi!\nC'est ma maison, là, tu vois!\n\n\nZe vais zouer encore avec mon ami,\nauzourd'hui. Z'aime bien zouer, moi!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x0009030a>HÉ OH!!!\n\n\n\n<0x10009:0x00ffff04>Hem, bon euh...<pause 20>\nBon, tu peux bien t'asseoir, après tout.\n\n\n<0x10009:0x00ff03ff>Mais fais bien attention à ne pas salir\nce siège. Il est très dispendieux,\ntu sauras!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "<0x10009:0x00000011>Zzzz, rooo, bonzour monsieur Monstre!\nZzzz rrr zzz...")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf(/* textboxtype: 1, unk: 0, line: 74 */ "Si t'es là pour déjeuner, il est trop\ntard! La cuisine est fermée depuis\nun bon moment. Va falloir que tu\nattendes l'heure du dîner!")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf(/* textboxtype: 1, unk: 0, line: 33 */ "<0x10009:0x00000001>Salut, <heroname>!\nRegarde autour de toi.\n\n\nIl y a plus de monstres,\ntout est calme...\n\n\nÇa faisait longtemps que je n'avais\nplus fait de promenade, la nuit...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x00000001>Quel soulagement d'avoir retrouvé\nnotre petite Picalia! Merci de tout\ncœur!<0x10009:0x00000009>\n\nNon mais regarde‐la! Après tout\nce qu'elle vient de nous faire vivre,\nla voilà qui dort tout paisiblement.")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x0000000e>Vraiment?! Tu as retrouvé Picalia?!\n\n\n\nJ'en étais sûr, je le savais! Personne, ici\nà Célesbourg, ne ferait de mal à une\npetite puce comme elle!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000004>Où Picalia a‐t‐elle bien pu passer?\nSa mère répète qu'elle a été kidnappée,\nmais je n'y crois pas une seconde.\n\n<0x10009:0x000e0d00>Personne à Célesbourg ne serait\ncapable de faire une chose pareille!\nVoyons donc!\n\n<0x10009:0x00000d0f>Elle va retontir bientôt, c'est sûr!\n\n\n\nEn tous cas, si tu la vois, dis-lui de\nrevenir à la maison tout de suite!")
          				  case 1:
/*< 30>*/ 					printf(/* textboxtype: 1, unk: 0, line: 30 */ "<0x10009:0x00000001>Salut, <heroname>!\nRegarde ma petite Picalia...\nElle est si mignonne quand elle dort!\n\nJ'ai juste à la regarder pour me donner\nle courage de continuer à travailler\naussi fort que je le fais!\n\nMais... C'est quoi, cette histoire de\nmonstre? Elle en parle tout le temps.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_122_13() {
/*< 31>*/ 	start()
/*< 61>*/ 	switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          	  case 0:
/*<188>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 60, 'param3': 31}
/*< 60>*/ 		printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00000012>Aaah... Toujours aucune nouvelle\nde Picalia...\n\n\nAide‐nous, je t'en supplie! Retrouve\nma fille et ramène‐la‐nous!")
          	  case 1:
/*< 32>*/ 		printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x00000001>Bonsoir. Dis donc, il est très tard...\nEst-ce que je peux faire quelque\nchose pour toi?")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf(/* textboxtype: 1, unk: 0, line: 74 */ "Si t'es là pour déjeuner, il est trop\ntard! La cuisine est fermée depuis\nun bon moment. Va falloir que tu\nattendes l'heure du dîner!")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x00000002>Salut, <heroname>!\nPicalia est de retour à la maison!\n\n\nJ'ai entendu dire que c'est toi qui\nl'as trouvée!\n\n\n<0x10009:0x00100d09>Merci beaucoup.\nSa mère était dans tous ses états!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x000f0d12>Oh, salut <heroname>...\nNotre petite Picalia a disparu...\n\n\n<0x10009:0x00ffff00>Sa mère court partout en hurlant\nqu'elle a été kidnappée...\n\n\n<0x10009:0x00100d03>Mais je la connais bien, moi.<pause 10>\nJe suis sûre qu'elle est juste cachée\nquelque part, en train de s'amuser.")
/*<120>*/ 			printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x000f0d00>Si tu la vois, dis‐le‐moi, d'accord?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x00000002>Salut, <heroname>.\n\n\n\nTe voici à la <color red<tour de lumière>coloroff>.\nT'as déjà grimpé jusqu'en haut?\nLa vue est à couper le souffle!")
          			  case 1:
/*< 34>*/ 				printf(/* textboxtype: 1, unk: 0, line: 37 */ "<0x10009:0x00000002>Salut, <heroname>.\n\n\n\nÇa, c'est la <color red<tour de lumière>coloroff>. À ce qu'on\nraconte, elle est là pour permettre de\nrepérer Célesbourg de loin. Sauf que...\n\n<0x10009:0x000f0d00>Je me demande pourquoi on l'appelle\nla tour de lumière... T'en vois de la\nlumière, toi? Et qui a bien pu la\nconstruire? Et pourquoi?\n<0x10009:0x00100d00>Dis donc, tu devrais l'escalader! On\na une vue superbe sur la Déesse de\nlà‐haut.")
/*< 35>*/ 				printf(/* textboxtype: 1, unk: 0, line: 38 */ "<0x10009:0x000f0d05>Qui, moi, escalader?\n\n\n\n<0x10009:0x00000800>Ça, il n'en est pas question!\nJ'ai un vertige épouvantable!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10012:0x00000064>Zrrrt! L'entrée du volcan!<pause 30>\nJe ferais mieux d'arriver là‐bas avant\nle petit maître en vert!")
          }

          void entrypoint_122_15() {
/*< 36>*/ 	start()
/*< 44>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 37, 'next': 45, 'param3': 32}
/*< 45>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 38, 'next': 46, 'param3': 32}
/*< 46>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 39, 'next': 62, 'param3': 32}
/*< 62>*/ 	set_camera(1, 0)
/*<179>*/ 	switch (story_flags[33 /* us: 805A9ADD 0x02, jp: 805ACD5D 0x02 */]) {
          	  case 0:
/*<176>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 173, 'param3': 16}
/*<173>*/ 		printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x25070707>Avez-vous entendu ce qu'on raconte?\nIl paraît que le célestrier d'un des\nparticipants de la chevauchée céleste\nd'aujourd'hui a disparu!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x26070701>Mes aïeux! Ça n'a pas d'allure, ça!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x27070702>J'avoue que je n'aime pas beaucoup ces\noiseaux... Le simple fait de leur voir les\nergots, ça me donne des frissons.\nIls ont l'air si pointus!")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x25070707>Regardez‐moi ce temps radieux!\nQuand je pense que je suis trop\noccupée pour seulement en profiter\nun peu!")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x26070701>Tu le dis! J'ai des montagnes de\nlavage à faire pour mon souillon\nde fils!\n\nEt j'ai beau laver, laver, et laver\nencore, rien n'y fait!\nLes taches ne partent pas...")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x27070702>Je ne sais pas comment vous faites...\nJ'ai horreur de nettoyer quoi que ce\nsoit! J'aimerais bien trouver quelqu'un\nqui le fasse à ma place...")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	wait_frames(20)
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x070a0c12>Hmm...\n<0x10008:0xfecd>Mais où peut‐elle bien être...?")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf(/* textboxtype: 1, unk: 0, line: 54 */ "Reviens me piquer une jasette quand\ntu veux!")
          	  case 1:
/*<141>*/ 		printf(/* textboxtype: 1, unk: 0, line: 50 */ "Hohoho! Ça va les études, p'tit gars?\nQu'est‐ce que tu dirais de prendre un\np'tit quelque chose? C'est moi qui paie\nla traite!\n[1-]Avec plaisir[2]Non merci")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x00010700>Hoho! Tiens c'est pour toi, fiston!\nÀ ta santé!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			wait_frames(60)
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x00070700>Héhé! Tout d'un trait! J'aime ton style,\np'tit gars!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf(/* textboxtype: 1, unk: 0, line: 55 */ "Je vais te révéler quelque chose qui\npourrait peut‐être t'intéresser.\n\n\nTu as sûrement déjà aperçu des\n<color red<rochers percés d'un trou>coloroff> quand\ntu volais dans le ciel...\n\n<0x10009:0x00010700>On dit qu'une énergie mystérieuse\na tendance à se concentrer dans\nces trous.\n\nSi tu passes dedans avec ton célestrier,\ntu seras propulsé à grande vitesse.\n\n\n<0x10009:0x00070700>Les chevaliers les plus expérimentés\ns'en servent pour parcourir rapidement\nde grandes distances.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf(/* textboxtype: 1, unk: 0, line: 56 */ "Je vais partager avec toi quelque chose\nqui pourrait te faire réfléchir.\n\n\n<0x10009:0x00010700>En plus de Célesbourg, il y a tout un\ntas d'îlots qui flottent dans le ciel.\n\n\nPersonne ne sait depuis quand ni\ncomment ils se sont formés. On\nignore également ce qui leur permet\nde rester dans les airs.\n<0x10009:0x00070700>Mais en tout cas, ce que je sais, c'est\nque si on peut vivre en paix comme\nmaintenant, c'est grâce à la Déesse\nqui veille sur nous.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf(/* textboxtype: 1, unk: 0, line: 49 */ "Hohoho, j'aurais quelque chose d'utile\nà partager avec toi, si tu veux bien\nm'écouter, jeune homme?\n\nLes meilleurs cavaliers viennent\ntoujours de l'école de chevalerie\noù vous allez, tes copains et toi.\n\nEt quand tu seras fait chevalier, toi\naussi tu pourras devenir un fier\nprotecteur de Célesbourg, fendant\ngracieusement les airs!\nTu as sûrement déjà rencontré les\nmembres de la patrouille de sauvetage.\nIls te récupèrent si tu tombes de l'île!\n\n<0x10009:0x00010700>Ils ne prennent que les étudiants\nles plus prometteurs dans la patrouille.\nLa crème de la crème!\n\nJ'espère te voir un jour devenir un\nchevalier à la mesure de ces gars‐là!\nMais il va falloir que tu travailles\nfort!\n<0x10009:0x00070700>Pour ne rien te cacher, mon petit‐fils\nfait partie des patrouilleurs...\nPas besoin de te dire que j'en suis\ntrès, très fier. Ho<pause 5>ho<pause 5>ho!")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf(/* textboxtype: 1, unk: 0, line: 57 */ "Je vais te dire quelque chose qui\npourrait t'être utile.\n\n\nEst‐ce que tu utilises la <color yellow<potion\nd'endurance>coloroff> qu'ils vendent à la\nboutique de potions?\n\n<0x10009:0x00010700>C'est de la potion, ça, Monsieur!\nElle fait baisser ta jauge d'endurance\nplus lentement...\n\nMais ne va pas croire qu'elle est utile\njuste pour courir.\n\n\n<0x10009:0x00070700>Elle te permet aussi d'utiliser plus\nsouvent l'attaque circulaire. Alors\nprends‐en un flacon avec toi pour\naffronter des monstres coriaces!")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf(/* textboxtype: 1, unk: 0, line: 51 */ "Oh, t'as pas de temps à passer avec\nun p'tit vieux comme moi? J'ai tout\ncompris.")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x00000001>Salut, <heroname>! J'avais\noublié comment il était agréable\nde se promener la nuit. D'autant\nplus qu'il n'y a plus de monstres!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf(/* textboxtype: 1, unk: 0, line: 58 */ "Tu as faim? Les plats qu'ils servent ici\nsont dé-li-cieux!\n\n\nPar contre, faut pas être pressé... \nIls ne sont pas pressés pour servir!")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001>Et maintenant, la touche finale...\nUne petite pincée de poivre!\n\n\n<0x10009:0x00000004>Im-pec-ca-ble! Ma soupe, c'est de l'art\nculinaire à son meilleur!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00000004>Tu as l'air fatigué, <heroname>.\n\n\n\nJe comprends ça, tu sais...\nMoi aussi, ça m'arrive!\n\n\n<0x10009:0x00010d00>Tu peux te reposer ici,\nne te gêne surtout pas.")
          }

