          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf("Le diseur de bonne aventure est revenu\nau poste! Le bazar a retrouvé son âme!")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf("Comme ça, le diseur de bonne aventure est chez\nlui, en train de déprimer...\n\n\nIl reviendrait peut\x2010être si quelqu'un lui trouvait\nune nouvelle boule de cristal...")
          				  case 1:
/*<128>*/ 					printf("Si je ne me trompe pas, la maison du diseur de\nbonne aventure se trouve <r<vers la côte est>>.\n\n\nIl me manque, le bonhomme... J'aimais bien\nentendre sa voix! Va donc lui rendre visite\nchez lui pour voir si tout va bien.")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf("Hmm, ça fait longtemps que je n'ai pas vu le\n<b<diseur de bonne aventure >>dans le coin...\n\n\nJe suis sûr qu'il reste chez lui à se lamenter sur\nsa boule de cristal fêlée... Il me semble qu'il\naurait pu prévenir ça, non?")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf("Ah bon?")
/*<194>*/ 					printf("Comme ça, le diseur de bonne aventure est chez\nlui, en train de déprimer...\n\n\nIl reviendrait peut\x2010être si quelqu'un lui trouvait\nune nouvelle boule de cristal...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf("Pourrais-tu aller voir comment il va?\n\n\n\nJe suis quasiment sûr qu'il habite <r<à l'extrémité\nest >>de Célesbourg.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf("Tu t'es déjà baladé dans Célesbourg, la nuit?\n<pause19>Tu ne peux pas t'imaginer comme\nc'est différent!\n\nPar exemple, si tu vas voir le patron de\nl'armurerie la nuit, il achètera tes trésors,\nsi tu veux.\n\nC'est vrai que c'est un peu dangereux de rester\ndehors si tard, mais je ne m'inquiète pas pour\nun apprenti chevalier comme toi!\n\nSi tu veux attendre jusqu'à la tombée de la nuit,\nil te suffit d'aller <g<dormir dans un lit>>!<pause19> Pas plus\ncompliqué que ça!")
          			  case 1:
/*<  3>*/ 				printf("Quand on est fatigué, il n'y a qu'une chose\nà faire : se reposer.<pause19> <g<Tu peux dormir\nn'importe où qu'il y a un lit>>!\n\nCélesbourg est très différent à la nuit tombée.\n\n\n\nIl te suffit <g<d'aller dormir>> pour choisir de te\nréveiller la nuit, et découvrir la ville sous\nun jour différent. Haha!")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf("Miroir, gentil miroir... Dis\x2010moi qui est la\nplus belle!")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf("\x0E\x01\x09\x04\x2200\x02C'est justement ce que tu pensais, n'est\x2010ce pas,\nLink?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf("J'ai entendu une rumeur au sujet du <r<dortoir>>.\nApparemment, <r<la nuit>>, on entend une femme\npleurnicher.\n\nJ'ai beau être grand et fort, mais...\nJ'avoue que ça me donne la trouille.")
/*<170>*/ 				printf("Quoi? Dans les toilettes? Une main?\n\n\n\nBon...<pause14> Elle est peut-être gênée...")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("J'ai entendu une rumeur au sujet du <r<dortoir>>.\nApparemment, <r<la nuit>>, on entend une femme\npleurnicher.\n\nJ'ai beau être grand et fort, mais...\nJ'avoue que ça me donne la trouille.")
/*<167>*/ 					printf("Hein?<pause14> Dans les toilettes? Elle demande\ndu papier?\n\n\nLa pauvre! J'ai connu ça, et c'est pas drôle\ndu tout...")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf("J'ai entendu une rumeur au sujet du <r<dortoir>>.\nApparemment, <r<la nuit>>, on entend une femme\npleurnicher.\n\nJ'ai beau être grand et fort, mais...\nJ'avoue que ça me donne la trouille.")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf("J'espère que tu n'as pas oublié mon conseil!\nAppuie sur \x0E\x02\x04\x02\x13CD pour obtenir de l'aide.\x0E\x01\x11\x02\xBCD")
          			  case 1:
/*<  5>*/ 				printf("Comme ça, tu es apprenti chevalier?\nFélicitations!\n\n\nMais tu as sans doute encore beaucoup à\napprendre. S'il y a des choses que tu ne\ncomprends pas, appuie sur \x0E\x02\x04\x02\x13CD pour\nobtenir de l'aide.\x0E\x01\x11\x02\xBCD\nCompris? Rappelle-toi de ça!")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ah, c'est toi, Link! C'est le grand\njour, non? Le jour de la chevauchée céleste!\n\n\nSi tu remportes cette épreuve, tu vas enfin\npasser en classe élite!")
/*<  8>*/ 	printf("À Célesbourg, on est jugé selon son aisance à\nvoler avec son célestrier.\n\n\n\x0E\x01\x09\x04\n\x404Et c'est d'autant plus vrai pour vous autres\nqui aspirez à devenir chevaliers.\n\n\nNous avons tous dû nous entraîner très fort\npour apprendre à voler avec nos oiseaux.")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x02On ne t'a jamais dit que c'était mal élevé de\nfaire irruption comme ça chez les gens, sans\navoir été invité? On ne t'a jamais appris\nà cogner?\nD'habitude, je travaille au bazar pendant la\njournée, mais aujourd'hui j'ai fermé boutique\npour la cérémonie.\n\n\x0E\x01\x09\x04\x00\x15C'est bizarre... Je rêve toujours de prendre une\njournée de congé, et dès que j'en ai une, je ne\nsais pas quoi faire de ma peau!")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf("\x0E\x01\x09\x04\x1211\x16Tu...<pause0F> Tu ne le regretteras pas!")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf("\x0E\x01\x09\x04\x1408\x913Bien sûr que non! Voyons!\n\n\n\nJe pense que nous devrions aller annoncer\nça à ta mère au plus tôt!\n\n\nJe suis sûre qu'elle est tout à fait comme\ntoi, honnête et travailleuse! N'est\x2010ce pas?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf("\x0E\x01\x09\x04\x1209\xC18Eh bien, il est peut\x2010être encore un peu tôt\npour les présentations...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf("\x0E\x01\x09\x04\x1400\x05Pourquoi? Voyons donc! C'est toujours mieux\nde se débarrasser de ces formalités au plus vite!\n\n\n\x0E\x01\x09\x04\x1408\x913Bon, j'espère que tu vas m'inviter\nchez toi bientôt!")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hé, Link! Comment ça se fait que\nt'es pas encore couché, à cette heure\x2010ci?\n\n\n\x0E\x01\x09\x04\x11\x1300Ma maman est encore en train de cuisiner...\nJ'espère que ça sera prêt bientôt.\nJ'ai faim, moi!")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x0E\x812Mais... C'est épouvantable! La Déesse...\nElle a disparu!\n\n\n\x0E\x01\x09\x04\x0F\xD00Il se passe des choses étranges ici,\nà Célesbourg...")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf("Picalia n'est toujours pas rentrée... Je commence\nvraiment à m'inquiéter.\n\n\n\x0E\x01\x09\x04\x00\x800\x0E\x03\x01\x00Link, peux-tu aller me la trouver,\ns'il te plaît?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, garçon! Tu le trouves utile, Récupix?\n\n\n\nIl a pas sa langue dans sa poche, l'animal,\nmais il a un bon fond, j'te le garantis!\n\n\nPromets\x2010moi d'faire un effort pour bien\nt'entendre avec lui!")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x03Dis donc, garçon! Qu'est\x2010ce que tu fais dehors\nà une heure pareille? Tu veux te faire dévorer\npar un Lemly, ou quoi?\n\nJ'crois qu't'as pas bien compris... À moins que\nce ne soit absolument nécessaire, évite de sortir\nla nuit.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("À voir le patron bricoler ses machines toute la\njournée, bzzt, on serait porté à croire que ce\nn'est qu'un simple passe\x2010temps... Vrrrrm... \n\nMais en fait, ce qu'il essaie de fabriquer,\nc'est un lavoir automatique pour sa mère...\nBzzt-CLANG!\n\nC'est si gentil de sa part, vrrrrm!\n\n\n\nL'exact opposé d'une certaine personne\nqui n'hésite pas à traîner mam'selle Fay\noù bon lui semble, sans égard pour elle.\nBzzat-grr!")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x09\x04\x00VNom d'un p'tit oiseau! Veux-tu s'il te plaît\nparler à mon fils? Je n'en peux plus!")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf("Et moi qui me disais qu'il arrêterait de perdre\nson temps avec sa ferraille quand son robot\nserait réparé...\n\nIl aurait pu avoir les mains propres une fois\npour toutes! Mais non, bien sûr, il ne changera\npas! Quand on est souillon, c'est pour la vie!")
          	  case 1:
/*< 22>*/ 		printf("Toutes les nuits, il reste assis là jusqu'aux petites\nheures du matin à essayer de réparer le stupide\nrobot de son grand\x2010père!\n\nVeux-tu bien me dire ce qu'il va faire avec cette\nespèce de tas de ferraille tout rouillé?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00VAaaah. Regarde\x2010moi donc la saleté que me\nramène mon fils...\n\n\nJe veux bien croire qu'il adore réparer plein de\nchoses, c'est pas une raison pour se salir comme\nça! J'en ai assez de faire son lavage!\n\n[1]Ton fils?[2]Pauvre toi")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf("Bien oui, mon souillon de fils qui s'occupe de\nl'atelier de rénovation! J'en ai pas cinquante...")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf("Je ne sais plus quoi faire... Ce garçon\nme désespère!")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\x1101Il me semble que tu ferais mieux de chercher\nton oiseau, non?")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Je me demande bien de quoi ils discutaient,\nlà\x2010bas... Ça avait l'air sérieux!")
          		}
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x00\x05J'adore rester assis ici et prendre le temps\nde relaxer.\n\n\nJe reste là, et je pense à elle pendant\ndes heures...\n\n\n\x0E\x01\x09\x04\n\xC00<b<Tironne>>, de la Citrouille perchée...\nQuelle belle créature!")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link. Tu n'as pas vu\nPicalia, par hasard?\n\n\nC'est une vraie girouette, celle-là! On ne sait\njamais quel bord elle va prendre. On ne peut\njamais avoir l'esprit tranquille avec elle.")
          	  case 1:
/*< 24>*/ 		printf("\x0E\x01\x09\x04\x00\nOh, bonjour, Link. Comment\nvas\x2010tu? Tu n'aurais pas vu ma petite Picalia,\npar hasard?\n\nElle n'arrête pas de se sauver, et je dois courir\npartout pour la retrouver! Je ne sais pas ce que\nje vais faire avec cette enfant-là!\n\nTant qu'elle n'aura pas eu une bonne frousse,\nelle ne comprendra pas...")
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
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ah! C'est toi! Elle est partie, la Déesse!\nSavais-tu ça?\n\n\n\x0E\x01\x09\x04\x00\x11Penses-tu que c'est parce que z'ai pas été saze?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x01Bonzour, toi! C'est ma maison, là, tu vois!\n\n\n\nZe vais zouer encore avec mon ami, auzourd'hui.\nZ'aime bien zouer, moi!")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf("\x0E\x01\x09\x04\x09\x30AHÉ OH!!!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF04Hem, bon euh...<pause14> Bon, tu peux bien t'asseoir,\naprès tout.\n\n\n\x0E\x01\x09\x04ÿ\x3FFMais fais bien attention à ne pas salir ce siège.\nIl est très dispendieux, tu sauras!")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x00\x11Zzzz, rooo, bonzour monsieur Monstre!\nZzzz rrr zzz...")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf("Si t'es là pour déjeuner, il est trop tard! La\ncuisine est fermée depuis un bon moment.\nVa falloir que tu attendes l'heure du dîner!")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, Link!\nRegarde autour de toi.\n\n\nIl y a plus de monstres, tout est calme...\n\n\n\nÇa faisait longtemps que je n'avais plus fait\nde promenade, la nuit...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf("\x0E\x01\x09\x04\x00\x01Quel soulagement d'avoir retrouvé notre\npetite Picalia! Merci de tout c\x153ur!\x0E\x01\x09\x04\x00\x09\n\n\nNon mais regarde\x2010la! Après tout ce qu'elle\nvient de nous faire vivre, la voilà qui dort\ntout paisiblement.")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf("\x0E\x01\x09\x04\x00\x0EVraiment?! Tu as retrouvé Picalia?!\n\n\n\nJ'en étais sûr, je le savais! Personne, ici à\nCélesbourg, ne ferait de mal à une petite\npuce comme elle!")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x00\x04Où Picalia a\x2010t\x2010elle bien pu passer? Sa mère\nrépète qu'elle a été kidnappée, mais je n'y\ncrois pas une seconde.\n\n\x0E\x01\x09\x04\x0E\xD00Personne à Célesbourg ne serait capable\nde faire une chose pareille! Voyons donc!\n\n\n\x0E\x01\x09\x04\x00\xD0FElle va retontir bientôt, c'est sûr!\n\n\n\nEn tous cas, si tu la vois, dis-lui de\nrevenir à la maison tout de suite!")
          				  case 1:
/*< 30>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link! Regarde ma\npetite Picalia... Elle est si mignonne\nquand elle dort!\n\nJ'ai juste à la regarder pour me donner le\ncourage de continuer à travailler aussi fort\nque je le fais!\n\nMais... C'est quoi, cette histoire de monstre?\nElle en parle tout le temps.")
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
/*< 60>*/ 		printf("\x0E\x01\x09\x04\x00\x12Aaah... Toujours aucune nouvelle de Picalia...\n\n\n\nAide\x2010nous, je t'en supplie! Retrouve ma fille\net ramène\x2010la\x2010nous!")
          	  case 1:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x00\x01Bonsoir. Dis donc, il est très tard... Est-ce que\nje peux faire quelque chose pour toi?")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf("Si t'es là pour déjeuner, il est trop tard! La\ncuisine est fermée depuis un bon moment.\nVa falloir que tu attendes l'heure du dîner!")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x00\x02Salut, Link! Picalia est de\nretour à la maison!\n\n\nJ'ai entendu dire que c'est toi qui l'as trouvée!\n\n\n\n\x0E\x01\x09\x04\x10\xD09Merci beaucoup. Sa mère était dans tous\nses états!")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x0F\xD12Oh, salut Link... Notre petite\nPicalia a disparu...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Sa mère court partout en hurlant qu'elle\na été kidnappée...\n\n\n\x0E\x01\x09\x04\x10\xD03Mais je la connais bien, moi.<pause0A> Je suis sûre\nqu'elle est juste cachée quelque part,\nen train de s'amuser.")
/*<120>*/ 			printf("\x0E\x01\x09\x04\x0F\xD00Si tu la vois, dis\x2010le\x2010moi, d'accord?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x00\x02Salut, Link.\n\n\n\nTe voici à la <r<tour de lumière>>. T'as déjà grimpé\njusqu'en haut? La vue est à couper le souffle!")
          			  case 1:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x02Salut, Link.\n\n\n\nÇa, c'est la <r<tour de lumière>>. À ce qu'on raconte,\nelle est là pour permettre de repérer Célesbourg\nde loin. Sauf que...\n\n\x0E\x01\x09\x04\x0F\xD00Je me demande pourquoi on l'appelle la tour\nde lumière... T'en vois de la lumière, toi?\nEt qui a bien pu la construire? Et pourquoi?\n\n\x0E\x01\x09\x04\x10\xD00Dis donc, tu devrais l'escalader! On a une vue\nsuperbe sur la Déesse de là\x2010haut.")
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x0F\xD05Qui, moi, escalader?\n\n\n\n\x0E\x01\x09\x04\x00\x800Ça, il n'en est pas question! J'ai un vertige\népouvantable!")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf("\x0E\x01\x12\x04\x00dZrrrt! L'entrée du volcan!<pause1E> Je ferais mieux\nd'arriver là\x2010bas avant le petit maître en vert!")
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
/*<173>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Avez-vous entendu ce qu'on raconte? Il paraît\nque le célestrier d'un des participants de la\nchevauchée céleste d'aujourd'hui a disparu!")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Mes aïeux! Ça n'a pas d'allure, ça!")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf("\x0E\x01\x09\x04\x2707\x702J'avoue que je n'aime pas beaucoup ces oiseaux...\nLe simple fait de leur voir les ergots, ça me\ndonne des frissons. Ils ont l'air si pointus!")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Regardez\x2010moi ce temps radieux! Quand je pense\nque je suis trop occupée pour seulement en\nprofiter un peu!")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Tu le dis! J'ai des montagnes de lavage à faire\npour mon souillon de fils!\n\n\nEt j'ai beau laver, laver, et laver encore, rien\nn'y fait! Les taches ne partent pas...")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Je ne sais pas comment vous faites... J'ai\nhorreur de nettoyer quoi que ce soit!\nJ'aimerais bien trouver quelqu'un qui\nle fasse à ma place...")
          	}
          }

          void entrypoint_122_32() {
/*<180>*/ 	start()
/*<182>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 7, 'next': 186, 'param3': 32}
/*<186>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 7, 'next': 187, 'param3': 17}
/*<187>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 183, 'param3': 6}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 7, 'param2': 99, 'next': 185, 'param3': 16}
/*<185>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1802, 'param2': 3072, 'next': 184, 'param3': 13}
/*<184>*/ 	set_camera(9, 0)
/*<181>*/ 	printf("\x0E\x01\x09\x04\x70A\xC12Hmm... \x0E\x01\x08\x02\xFECDMais où peut\x2010elle bien être...?")
          }

          void entrypoint_122_16() {
/*< 50>*/ 	start()
/*<152>*/ 	switch (temp_flags[52 /* 0x7 10 */]) {
          	  case 0:
/*<153>*/ 		printf("Reviens me piquer une jasette quand tu veux!")
          	  case 1:
/*<141>*/ 		printf("Hohoho! Ça va les études, p'tit gars? Qu'est\x2010ce\nque tu dirais de prendre un p'tit quelque chose?\nC'est moi qui paie la traite!\n[1]Avec plaisir[2-]Non merci")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x01\x700Hoho! Tiens c'est pour toi, fiston! À ta santé!")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 149, 'param3': 6}
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf("\x0E\x01\x09\x04\x07\x700Héhé! Tout d'un trait! J'aime ton style,\np'tit gars!")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf("Je vais te révéler quelque chose qui pourrait\npeut\x2010être t'intéresser.\n\n\nTu as sûrement déjà aperçu des <r<rochers percés\nd'un trou>> quand tu volais dans le ciel...\n\n\n\x0E\x01\x09\x04\x01\x700On dit qu'une énergie mystérieuse a tendance\nà se concentrer dans ces trous.\n\n\nSi tu passes dedans avec ton célestrier, tu seras\npropulsé à grande vitesse.\n\n\n\x0E\x01\x09\x04\x07\x700Les chevaliers les plus expérimentés s'en\nservent pour parcourir rapidement de\ngrandes distances.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf("Je vais partager avec toi quelque chose qui\npourrait te faire réfléchir.\n\n\n\x0E\x01\x09\x04\x01\x700En plus de Célesbourg, il y a tout un tas d'îlots\nqui flottent dans le ciel.\n\n\nPersonne ne sait depuis quand ni comment ils\nse sont formés. On ignore également ce qui\nleur permet de rester dans les airs.\n\n\x0E\x01\x09\x04\x07\x700Mais en tout cas, ce que je sais, c'est que si\non peut vivre en paix comme maintenant,\nc'est grâce à la Déesse qui veille sur nous.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf("Hohoho, j'aurais quelque chose d'utile à\npartager avec toi, si tu veux bien m'écouter,\njeune homme?\n\nLes meilleurs cavaliers viennent toujours de\nl'école de chevalerie où vous allez, tes copains\net toi.\n\nEt quand tu seras fait chevalier, toi aussi tu\npourras devenir un fier protecteur de\nCélesbourg, fendant gracieusement les airs!\n\nTu as sûrement déjà rencontré les membres\nde la patrouille de sauvetage. Ils te\nrécupèrent si tu tombes de l'île!\n\n\x0E\x01\x09\x04\x01\x700Ils ne prennent que les étudiants les plus\nprometteurs dans la patrouille. La crème\nde la crème!\n\nJ'espère te voir un jour devenir un chevalier\nà la mesure de ces gars\x2010là! Mais il va falloir\nque tu travailles fort!\n\n\x0E\x01\x09\x04\x07\x700Pour ne rien te cacher, mon petit\x2010fils fait partie\ndes patrouilleurs... Pas besoin de te dire que j'en\nsuis très, très fier. Ho<pause05>ho<pause05>ho!")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf("Je vais te dire quelque chose qui pourrait\nt'être utile.\n\n\nEst\x2010ce que tu utilises la <y<potion d'endurance\n>>qu'ils vendent à la boutique de potions?\n\n\n\x0E\x01\x09\x04\x01\x700C'est de la potion, ça, Monsieur! Elle fait\nbaisser ta jauge d'endurance plus lentement...\n\n\nMais ne va pas croire qu'elle est utile juste\npour courir.\n\n\n\x0E\x01\x09\x04\x07\x700Elle te permet aussi d'utiliser plus souvent\nl'attaque circulaire. Alors prends\x2010en un flacon\navec toi pour affronter des monstres coriaces!")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf("Oh, t'as pas de temps à passer avec un p'tit\nvieux comme moi? J'ai tout compris.")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf("\x0E\x01\x09\x04\x00\x01Salut, Link! J'avais oublié\ncomment il était agréable de se promener la\nnuit. D'autant plus qu'il n'y a plus de monstres!")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Tu as faim? Les plats qu'ils servent ici\nsont dé-li-cieux!\n\n\nPar contre, faut pas être pressé... \nIls ne sont pas pressés pour servir!")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04\x00\x01Et maintenant, la touche finale... Une petite\npincée de poivre!\n\n\n\x0E\x01\x09\x04\x00\x04Im-pec-ca-ble! Ma soupe, c'est de l'art culinaire\nà son meilleur!")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x09\x04\x00\x04Tu as l'air fatigué, Link.\n\n\n\nJe comprends ça, tu sais... Moi aussi,\nça m'arrive!\n\n\n\x0E\x01\x09\x04\x01\xD00Tu peux te reposer ici, ne te gêne surtout pas.")
          }

