          void entrypoint_122_01() {
/*<  2>*/ 	start()
/*<133>*/ 	switch (story_flags[375 /* us: 805A9B02 0x20, jp: 805ACD82 0x20 */]) {
          	  case 0:
/*<134>*/ 		printf("Le diseur de bonne aventure est de retour !\nLe marché couvert a retrouvé son âme !")
          	  case 1:
/*<125>*/ 		switch (story_flags[370 /* us: 805A9B02 0x01, jp: 805ACD82 0x01 */]) {
          		  case 0:
/*<126>*/ 			switch (story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */]) {
          			  case 0:
/*<135>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<136>*/ 					printf("Alors comme ça, le diseur de bonne aventure\nest bien en train de déprimer chez lui...\n\n\nIl reviendrait peut\x2010être si quelqu'un pouvait lui\ntrouver une nouvelle boule de cristal...")
          				  case 1:
/*<128>*/ 					printf("Je crois savoir où vit le diseur de bonne\naventure... C'est <r<vers la côte est >>de l'île,\nil me semble...\n\nIl me manque, ce bonhomme... J'aimais bien\nentendre sa voix ! Tu voudrais pas aller jeter\nun \x153il chez lui pour voir si tout va bien ?")
          				}
          			  case 1:
/*<130>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 127, 'param3': 31}
/*<127>*/ 				printf("Hmm, ça fait un moment que je n'ai pas vu le\n<b<diseur de bonne aventure >>dans le coin...\n\n\nJe suis sûr qu'il reste chez lui à se lamenter sur\nsa boule de cristal fêlée...")
/*<132>*/ 				switch (story_flags[371 /* us: 805A9B02 0x02, jp: 805ACD82 0x02 */]) {
          				  case 0:
/*<193>*/ 					printf("Ah bon ?")
/*<194>*/ 					printf("Alors comme ça, le diseur de bonne aventure\nest bien en train de déprimer chez lui...\n\n\nIl reviendrait peut\x2010être si quelqu'un pouvait lui\ntrouver une nouvelle boule de cristal...")
          					flw_129:
/*<129>*/ 					story_flags[834 /* us: 805A9B32 0x04, jp: 805ACDB2 0x04 */] = true;
          				  case 1:
/*<131>*/ 					printf("Tu veux bien aller voir s'il va bien ?\n\n\n\nJe suis quasiment sûr qu'il habite <r<à l'extrémité\nest >>de Célesbourg.")
          					goto flw_129
          				}
          			}
          		  case 1:
/*<139>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<140>*/ 				printf("Tu t'es déjà baladé dans Célesbourg, la nuit ?<pause19>\nÇa n'a absolument rien à voir !\n\n\nSi tu vas voir le patron de l'armurerie la nuit,\nil t'achètera des trésors.\n\n\nC'est vrai que c'est un peu dangereux de rester\ndehors si tard, mais je ne m'inquiète pas pour\nun apprenti chevalier tel que toi !\n\nSi tu veux attendre jusqu'à la tombée de la nuit,\nil te suffit d'aller <g<dormir dans un lit >>!<pause19> Pas plus\ncompliqué que ça !")
          			  case 1:
/*<  3>*/ 				printf("Le sommeil est la solution à tous les maux !<pause19> <g<Tu\npeux dormir n'importe où, tant qu'il y a un lit >>!\n\n\nCélesbourg est très différent à la nuit tombée.\n\n\n\nIl te suffit <g<d'aller dormir>> pour choisir de te\nréveiller la nuit, et découvrir la ville sous un\njour différent. Haha !")
          			}
          		}
          	}
          }

          void entrypoint_122_19() {
/*< 56>*/ 	start()
/*<111>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 34, 'next': 112, 'param3': 32}
/*<112>*/ 	{'type': 'type3', 'subType': 1, 'param1': 34, 'param2': -1, 'next': 57, 'param3': 50}
/*< 57>*/ 	printf("Miroir, mon beau miroir... Dis\x2010moi qui est le\nplus beau !")
/*<114>*/ 	set_camera(7, 0)
/*<113>*/ 	printf("\x0E\x01\x09\x04\x2200\x02C'est ce à quoi tu pensais, n'est\x2010ce pas,\nLink ?")
          }

          void entrypoint_122_02() {
/*<  4>*/ 	start()
/*<161>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
/*<162>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<168>*/ 			switch (story_flags[550 /* us: 805A9B17 0x80, jp: 805ACD97 0x80 */]) {
          			  case 0:
/*<169>*/ 				printf("J'ai entendu une rumeur sur l'<r<internat >>de\nl'école de chevalerie. Apparemment, <r<la nuit>>,\non y entend une femme pleurnicher.\n\nJe ne peux rien faire personnellement, mais je\ndéteste ne pas pouvoir aider les autres...")
/*<170>*/ 				printf("Quoi ? Dans les toilettes ? Une main ?\n\n\n\n<pause14>Elle doit être gênée...")
          			  case 1:
/*<165>*/ 				switch (story_flags[546 /* us: 805A9B17 0x08, jp: 805ACD97 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("J'ai entendu une rumeur sur l'<r<internat >>de\nl'école de chevalerie. Apparemment, <r<la nuit>>,\non y entend une femme pleurnicher.\n\nJe ne peux rien faire personnellement, mais je\ndéteste ne pas pouvoir aider les autres...")
/*<167>*/ 					printf("Hein ?<pause14> Dans les toilettes ? Elle demande du\npapier ?\n\n\nLa pauvre ! J'ai connu ça, et c'est pas marrant...")
          				  case 1:
/*<163>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 164, 'param3': 31}
/*<164>*/ 					printf("J'ai entendu une rumeur sur l'<r<internat >>de\nl'école de chevalerie. Apparemment, <r<la nuit>>,\non y entend une femme pleurnicher.\n\nJe ne peux rien faire personnellement, mais je\ndéteste ne pas pouvoir aider les autres...")
          				}
          			}
          		  case 1:
          			flw_137:
/*<137>*/ 			switch (story_flags[5 /* us: 805A9AD9 0x40, jp: 805ACD59 0x40 */]) {
          			  case 0:
/*<138>*/ 				printf("J'espère que tu n'as pas oublié mon conseil !\nAppuie sur \x0E\x02\x04\x02\x13CD pour obtenir de l'aide.\x0E\x01\x11\x02\xBCD")
          			  case 1:
/*<  5>*/ 				printf("Alors comme ça, tu es apprenti chevalier ?\nFélicitations !\n\n\nMais va pas prendre la grosse tête pour autant.\nS'il y a des choses que tu ne comprends pas,\nappuie sur \x0E\x02\x04\x02\x13CD pour obtenir de l'aide.\x0E\x01\x11\x02\xBCD\n\nCompris ? N'oublie jamais ça !")
          			}
          		}
          	  case 1:
          		goto flw_137
          	}
          }

          void entrypoint_122_03() {
/*<  6>*/ 	start()
/*<  7>*/ 	printf("\x0E\x01\x09\x04\x00\x01Ah, te voilà, Link ! Alors, c'est le\ngrand jour ? Le jour de la chevauchée céleste !\n\n\nSi tu remportes cette épreuve, tu vas enfin\npasser en dernière année !")
/*<  8>*/ 	printf("À Célesbourg, on juge une personne à son\naisance à voler avec son célestrier.\n\n\n\x0E\x01\x09\x04\n\x404Et c'est d'autant plus vrai pour vous autres qui\naspirez à devenir chevaliers.\n\n\nNous avons tous dû nous entraîner durement\npour apprendre à voler avec nos oiseaux.")
          }

          void entrypoint_122_20() {
/*< 58>*/ 	start()
/*< 59>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': -1, 'param3': 24}
          }

          void entrypoint_122_04() {
/*<  9>*/ 	start()
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x00\x02On ne t'a jamais dit que c'était mal élevé de\nfaire irruption comme ça chez les gens, sans\navoir été invité ?\n\nD'habitude, je travaille au marché couvert\npendant la journée, mais aujourd'hui j'ai\nfermé boutique pour la cérémonie.\n\n\x0E\x01\x09\x04\x00\x15C'est fou ça, je ne cesse de rêver de prendre un\njour de congé, et dès que j'en ai un, je tourne en\nrond toute la journée !")
          }

          void entrypoint_122_21() {
/*< 63>*/ 	start()
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 18, 'next': 69, 'param3': 32}
/*< 69>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 116, 'param3': 32}
/*<116>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 117, 'param3': 17}
/*<117>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 74, 'param3': 17}
/*< 74>*/ 	set_camera(2, 0)
/*< 70>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 64, 'param3': 50}
/*< 64>*/ 	printf("\x0E\x01\x09\x04\x1211\x16Tu...<pause0F> Tu ne le regretteras pas !")
/*< 71>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 65, 'param3': 50}
/*< 65>*/ 	printf("\x0E\x01\x09\x04\x1408\x913Bien sûr que non !\n\n\n\nJe pense que nous devrions aller annoncer ça à\nta mère au plus tôt !\n\n\nJe suis sûre qu'elle est tout à fait comme toi,\nhonnête et travailleuse ! N'est\x2010ce pas ?")
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 18, 'param2': 20, 'next': 66, 'param3': 50}
/*< 66>*/ 	printf("\x0E\x01\x09\x04\x1209\xC18Eh bien, il est peut\x2010être encore un peu tôt pour\nles présentations...")
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 20, 'param2': 18, 'next': 67, 'param3': 50}
/*< 67>*/ 	printf("\x0E\x01\x09\x04\x1400\x05Pourquoi ? Ne sois pas bête ! Il vaut toujours\nmieux se débarrasser de ces formalités\nrapidement !\n\n\x0E\x01\x09\x04\x1408\x913Bon, tant que tu m'invites chez toi bientôt !")
          }

          void entrypoint_122_05() {
/*< 11>*/ 	start()
/*< 12>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hé, Link ! T'es pas encore couché,\nà cette heure\x2010ci ?\n\n\n\x0E\x01\x09\x04\x11\x1300Ma maman est encore en train de cuisiner...\nJ'espère que ça sera bientôt prêt. C'est que\nj'ai faim, moi !")
          }

          void entrypoint_122_22() {
/*< 75>*/ 	start()
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x0E\x812Que se passe\x2010t\x2010il ? La Déesse... Elle a disparu !\n\n\n\n\x0E\x01\x09\x04\x0F\xD00Il se passe quelque chose d'étrange à\nCélesbourg...")
/*< 77>*/ 	switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          	  case 0:
          	  case 1:
/*< 78>*/ 		printf("Nacia n'est toujours pas rentrée... Je commence\nvraiment à m'inquiéter.\n\n\n\x0E\x01\x09\x04\x00\x800\x0E\x03\x01\x00Link, tu veux bien la trouver pour\nmoi ?")
          	}
          }

          void entrypoint_122_06() {
/*< 13>*/ 	start()
/*< 83>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 84>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, garçon ! Alors, il te plaît, le p'tit\nRécupix ?\n\n\nIl a pas sa langue dans sa poche, l'animal, mais\nil a un bon fond, j'te le garantis !\n\n\nPromets\x2010moi d'faire un effort pour bien\nt'entendre avec lui !")
          	  case 1:
/*< 15>*/ 		printf("\x0E\x01\x09\x04\x00\x03Dis donc, garçon ! Qu'est\x2010ce que tu fabriques\ndehors à une heure pareille ? Tu veux te faire\ndévorer les entrailles par un Lemly, ou quoi ?\n\nJ'crois qu't'as pas bien compris... Sors pas la\nnuit si tu peux l'éviter.")
          	}
          }

          void entrypoint_122_23() {
/*< 81>*/ 	start()
/*< 82>*/ 	printf("À voir le patron bidouiller ses machines toute la\njournée, on pourrait croire que c'est juste son\npasse\x2010temps...\n\nMais en fait, ce qu'il essaie de fabriquer, c'est\nun lavoir automatique pour sa mère...\n\n\nQuel homme attentionné !\n\n\n\nVraiment l'exact opposé d'une certaine personne\nqui n'hésite pas à traîner ma jolie Fay partout\noù il lui prend l'envie d'aller !")
          }

          void entrypoint_122_07() {
/*< 14>*/ 	start()
/*< 16>*/ 	printf("\x0E\x01\x09\x04\x00VNom d'un p'tit oiseau, c'est plus possible !\nTu veux bien parler à mon fils, dis ?")
          	flw_85:
/*< 85>*/ 	switch (story_flags[323 /* us: 805A9AFF 0x02, jp: 805ACD7F 0x02 */]) {
          	  case 0:
/*< 86>*/ 		printf("Et moi qui me disais qu'il arrêterait de perdre\nson temps avec sa ferraille quand son robot\nserait réparé...\n\nMais non, bien sûr, il ne changera pas !\nQuand on est sot, c'est pour la vie !")
          	  case 1:
/*< 22>*/ 		printf("Toutes les nuits, il reste assis là jusqu'au petit\nmatin à essayer de réparer le stupide robot de\nson grand\x2010père !\n\nÀ quoi pourrait bien lui servir cette espèce de\ntas de ferraille rouillé ?")
          	}
          }

          void entrypoint_122_24() {
/*< 87>*/ 	start()
/*< 88>*/ 	set_camera(3, 0)
/*< 89>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_122_08() {
/*< 17>*/ 	start()
/*< 18>*/ 	printf("\x0E\x01\x09\x04\x00VAaaah. Regarde\x2010moi la saleté que me ramène\nmon fils...\n\n\nPeu m'importe qu'il adore réparer des choses,\nc'est pas une raison pour se salir comme ça !\n\n\n[1]Ton fils ?[2]C'est ennuyeux")
/*< 19>*/ 	switch (choice(2)) {
          	  case 0:
/*< 20>*/ 		printf("Ben oui, mon idiot de fils qui tient l'atelier de\nrénovation ! C'est pas comme si j'en avais\ncinquante...")
          		goto flw_85
          	  case 1:
/*< 21>*/ 		printf("Je ne sais plus quoi faire... Ce garçon me\ndésespère !")
          		goto flw_85
          	}
          }

          void entrypoint_122_25() {
/*< 90>*/ 	start()
/*< 92>*/ 	switch (story_flags[29 /* us: 805A9ADA 0x20, jp: 805ACD5A 0x20 */]) {
          	  case 0:
/*< 95>*/ 		switch (scene_flags[45 /* 0x4 20 */]) {
          		  case 0:
/*< 94>*/ 			printf("\x0E\x01\x09\x04\x00\x1101Tu ne crois pas que tu ferais mieux de chercher\nton oiseau ?")
          		  case 1:
/*< 93>*/ 			printf("\x0E\x01\x09\x04\x00\x1104Pourquoi vous vous disputiez, là\x2010bas, tout à\nl'heure ? Ça avait l'air sérieux !")
          		}
          	  case 1:
/*< 91>*/ 		printf("\x0E\x01\x09\x04\x00\x05J'adore rester assis ici.\n\n\n\nJe reste là, et je pense à elle...\n\n\n\n\x0E\x01\x09\x04\n\xC00<b<Tironne>>, de la Citrouille perchée... Il n'existe\npas de femme plus belle !")
          	}
          }

          void entrypoint_122_09() {
/*< 23>*/ 	start()
/*< 79>*/ 	switch (story_flags[36 /* us: 805A9ADD 0x10, jp: 805ACD5D 0x10 */]) {
          	  case 0:
/*< 80>*/ 		printf("\x0E\x01\x09\x04\x00\x01Bonjour, Link. Tu n'as pas vu\nNacia, par hasard ?\n\n\nElle est toujours en vadrouille ! Je suis\nvraiment inquiète...")
          	  case 1:
/*< 24>*/ 		printf("\x0E\x01\x09\x04\x00\nOh, bonjour, Link. Comment\nvas\x2010tu ? Tu n'aurais pas aperçu\nma petite Nacia, par hasard ?\n\nElle n'arrête pas de se sauver, et je dois courir\npartout pour la retrouver !\n\n\nTant qu'elle n'aura pas eu une bonne frayeur,\nelle ne comprendra pas...")
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
/*<102>*/ 			printf("\x0E\x01\x09\x04\x00\x04Ah ! C'est toi ! Elle est partie, la Déesse !\n\n\n\n\x0E\x01\x09\x04\x00\x11C'est parce que z'ai pas été saze, tu crois ?")
/*<196>*/ 			story_flags[1116 /* us: 805A9B57 0x04, jp: 805ACDD7 0x04 */] = true;
          		}
          	  case 1:
          		goto flw_102
          	}
          }

          void entrypoint_122_10() {
/*< 25>*/ 	start()
/*< 26>*/ 	printf("\x0E\x01\x09\x04\x00\x01Bonzour, toi ! C'est ma maison, là, tu vois !\n\n\n\nZe vais zouer encore avec mon ami, auzourd'hui.\nZ'aime bien zouer, moi !")
          }

          void entrypoint_122_28() {
/*<103>*/ 	start()
/*<104>*/ 	printf("\x0E\x01\x09\x04\x09\x30AHÉ OH !!!\n\n\n\n\x0E\x01\x09\x04ÿ\xFF04Hem, bon euh...<pause14> Y a pas de mal à s'asseoir,\naprès tout.\n\n\n\x0E\x01\x09\x04ÿ\x3FFMais fais bien attention à ne rien salir, tout est\ntellement hors de prix de nos jours !")
          }

          void entrypoint_122_11() {
/*< 27>*/ 	start()
/*< 28>*/ 	printf("\x0E\x01\x09\x04\x00\x11Zzzz, rooo, c'est monsieur Démon !\nZzzz rrr zzz...")
          }

          void entrypoint_122_29() {
/*<105>*/ 	start()
/*<109>*/ 	set_camera(5, 0)
/*<106>*/ 	printf("Si t'es là pour manger, c'est trop tard, on ne\nsert plus !\n\n\nTu vas devoir attendre l'heure du déjeuner !")
          }

          void entrypoint_122_12() {
/*< 29>*/ 	start()
/*<189>*/ 	switch (story_flags[360 /* us: 805A9B00 0x40, jp: 805ACD80 0x40 */]) {
          	  case 0:
/*<190>*/ 		printf("\x0E\x01\x09\x04\x00\x01Salut, Link ! Regarde autour de\ntoi.\n\n\nIl y a plus de monstres, tout est calme...\n\n\n\nÇa faisait longtemps que je n'avais plus fait\nde promenade nocturne...")
          	  case 1:
/*< 43>*/ 		switch (story_flags[326 /* us: 805A9AFF 0x10, jp: 805ACD7F 0x10 */]) {
          		  case 0:
          			flw_42:
/*< 42>*/ 			printf("\x0E\x01\x09\x04\x00\x01Quel soulagement d'avoir retrouvé notre petite\nNacia ! Merci de tout c\x153ur !\x0E\x01\x09\x04\x00\x09\n\n\nNon mais regarde\x2010la ! Elle vient de nous faire\nvivre un enfer, et elle s'endort le plus\ninnocemment du monde...")
          		  case 1:
/*< 99>*/ 			switch (story_flags[304 /* us: 805A9AFC 0x04, jp: 805ACD7C 0x04 */]) {
          			  case 0:
/*<115>*/ 				switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          				  case 0:
          					goto flw_42
          				  case 1:
/*<100>*/ 					printf("\x0E\x01\x09\x04\x00\x0EVraiment ?! Tu as retrouvé Nacia ?!\n\n\n\nJ'en étais sûr, je le savais ! Il n'y a pas une\nseule âme mauvaise à Célesbourg !")
          				}
          			  case 1:
/*< 40>*/ 				switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          				  case 0:
/*< 41>*/ 					printf("\x0E\x01\x09\x04\x00\x04Où Nacia a\x2010t\x2010elle bien pu passer ? Sa mère\nrépète qu'elle a été kidnappée, mais je n'y\ncrois pas une seconde.\n\n\x0E\x01\x09\x04\x0E\xD00Personne à Célesbourg ne serait capable de\nfaire une chose pareille !\n\n\n\x0E\x01\x09\x04\x00\xD0FJe suis certain qu'elle va bientôt réapparaître.\n\n\n\nEnfin, si tu la vois, je t'en prie, ramène\x2010la\x2010nous !")
          				  case 1:
/*< 30>*/ 					printf("\x0E\x01\x09\x04\x00\x01Salut, Link ! Regarde ma petite\nNacia... Elle est si mignonne quand elle dort !\n\n\nIl me suffit de la regarder pour me sentir plein\nd'énergie !\n\n\nMais... C'est quoi, cette histoire de démon ?")
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
/*< 60>*/ 		printf("\x0E\x01\x09\x04\x00\x12Aaah... Toujours aucune trace de Nacia...\n\n\n\nAide\x2010nous, je t'en supplie ! Retrouve ma fille et\nramène\x2010la\x2010moi !")
          	  case 1:
/*< 32>*/ 		printf("\x0E\x01\x09\x04\x00\x01Bonsoir. Est\x2010ce qu'il y a un problème ?\nIl est très tard...")
          	}
          }

          void entrypoint_122_30() {
/*<107>*/ 	start()
/*<110>*/ 	set_camera(6, 0)
/*<108>*/ 	printf("Si t'es là pour manger, c'est trop tard, on ne\nsert plus !\n\n\nTu vas devoir attendre l'heure du déjeuner !")
          }

          void entrypoint_122_14() {
/*< 33>*/ 	start()
/*<122>*/ 	switch (story_flags[329 /* us: 805A9AFF 0x80, jp: 805ACD7F 0x80 */]) {
          	  case 0:
/*<121>*/ 		printf("\x0E\x01\x09\x04\x00\x02Salut, Link ! Nacia est de retour\nà la maison !\n\n\nAh, c'est toi qui l'as trouvée ?\n\n\n\n\x0E\x01\x09\x04\x10\xD09Merci beaucoup. Sa mère était dans tous ses\nétats !")
          	  case 1:
/*<118>*/ 		switch (story_flags[303 /* us: 805A9AFC 0x02, jp: 805ACD7C 0x02 */]) {
          		  case 0:
/*<119>*/ 			printf("\x0E\x01\x09\x04\x0F\xD12Oh, salut Link... Notre petite\nNacia a disparu...\n\n\n\x0E\x01\x09\x04ÿ\xFF00Sa mère court partout en hurlant qu'elle a été\nkidnappée...\n\n\n\x0E\x01\x09\x04\x10\xD03Mais je la connais bien, moi.<pause0A> Je suis sûre qu'elle\nest juste cachée quelque part, en train de\ns'amuser.")
/*<120>*/ 			printf("\x0E\x01\x09\x04\x0F\xD00Si tu la vois, dis\x2010le\x2010moi, d'accord ?")
          		  case 1:
/*<171>*/ 			switch (zone_temp_flags[14 /* 0x0 40 */]) {
          			  case 0:
/*<172>*/ 				printf("\x0E\x01\x09\x04\x00\x02Salut, Link.\n\n\n\nTe voici à la <r<tour de lumière>>. T'as déjà grimpé\njusque là\x2010haut ? La vue est à couper le souffle !")
          			  case 1:
/*< 34>*/ 				printf("\x0E\x01\x09\x04\x00\x02Salut, Link.\n\n\n\nTu es devant la <r<tour de lumière>>. Apparemment,\nelle est là pour permettre de repérer Célesbourg\nde loin.\n\n\x0E\x01\x09\x04\x0F\xD00Mais je me demande pourquoi on l'appelle la\ntour de lumière... Tu vois de la lumière, toi ?\nEt qui a bien pu la construire ?\n\n\x0E\x01\x09\x04\x10\xD00Dis donc, pourquoi tu l'escaladerais pas ? On a\nune vue superbe sur la Déesse de là\x2010haut.")
/*< 35>*/ 				printf("\x0E\x01\x09\x04\x0F\xD05Qui, moi, escalader ?\n\n\n\n\x0E\x01\x09\x04\x00\x800Ça, ça risque pas ! J'ai un vertige\népouvantable !")
          			}
          		}
          	}
          }

          void entrypoint_122_31() {
/*<123>*/ 	start()
/*<124>*/ 	printf("\x0E\x01\x12\x04\x00dOh ! L'entrée du volcan !<pause1E> Je ferais mieux\nd'arriver là\x2010bas avant le petit maître en vert !")
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
/*<173>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Vous avez entendu ce qu'on raconte ?! Il paraît\nque le célestrier d'un des participants de la\nchevauchée céleste d'aujourd'hui a disparu !")
/*<177>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 174, 'param3': 16}
/*<174>*/ 		printf("\x0E\x01\x09\x04\x2607\x701Juste ciel ! Mais c'est terrible, ça !")
/*<178>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 175, 'param3': 16}
/*<175>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Moi, j'aime pas beaucoup ces oiseaux...\nLe simple fait de voir leurs serres, ça\nme fait froid dans le dos...")
          	  case 1:
/*< 47>*/ 		{'type': 'type3', 'subType': 1, 'param1': 37, 'param2': -1, 'next': 37, 'param3': 16}
/*< 37>*/ 		printf("\x0E\x01\x09\x04\x2507\x707Regardez\x2010moi ce temps radieux ! Quand je\npense que je suis trop occupée pour seulement\nen profiter un peu !")
/*< 48>*/ 		{'type': 'type3', 'subType': 1, 'param1': 38, 'param2': -1, 'next': 38, 'param3': 16}
/*< 38>*/ 		printf("\x0E\x01\x09\x04\x2607\x701T'es pas la seule, figure\x2010toi ! J'ai des montagnes\nde vêtements à laver pour mon bon à rien de\nfils !\n\nEt j'ai beau laver, laver, et laver encore, rien\nn'y fait ! Les taches ne partent pas...")
/*< 49>*/ 		{'type': 'type3', 'subType': 1, 'param1': 39, 'param2': -1, 'next': 39, 'param3': 16}
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x2707\x702Je ne sais pas comment vous faites... J'ai\nhorreur de nettoyer quoi que ce soit !\nJ'aimerais bien trouver quelqu'un qui le\nfasse pour moi...")
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
/*<153>*/ 		printf("Reviens faire la causette quand tu veux !")
          	  case 1:
/*<141>*/ 		printf("Hohoho ! Ça va les études, p'tit gars ?\nQu'est\x2010ce que tu dirais de prendre un\nverre ? C'est moi qui régale !\n\n[1]Avec plaisir[2-]Non merci")
/*<142>*/ 		switch (choice(2)) {
          		  case 0:
/*<144>*/ 			printf("\x0E\x01\x09\x04\x01\x700Hoho ! Tiens c'est pour toi !")
/*<148>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 147, 'param3': 47}
/*<147>*/ 			set_camera(8, 0)
/*<160>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 115, 'next': 150, 'param3': 24}
/*<150>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 149, 'param3': 6}
/*<149>*/ 			{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 30, 'next': 159, 'param3': 48}
/*<159>*/ 			make_actor_do_something(0, 0)
/*<145>*/ 			printf("\x0E\x01\x09\x04\x07\x700Hé ! T'as une bonne descente ! Tu me plais\nbien, p'tit gars !")
/*<146>*/ 			set_camera(-1, 0)
/*<154>*/ 			switch (random(4)) {
          			  case 0:
/*<155>*/ 				printf("Bien, je vais te révéler un truc qui pourrait\npeut\x2010être t'intéresser.\n\n\nTu as sûrement déjà aperçu des <r<rochers percés\nd'un trou>> quand tu volais dans le ciel, non ?\n\n\n\x0E\x01\x09\x04\x01\x700On dit qu'une énergie mystérieuse a tendance\nà se concentrer dans ces trous.\n\n\nSi tu passes dedans avec ton célestrier, tu seras\npropulsé à grande vitesse.\n\n\n\x0E\x01\x09\x04\x07\x700Les chevaliers les plus expérimentés s'en\nservent pour parcourir rapidement de\ngrandes distances.")
          				flw_151:
/*<151>*/ 				temp_flags[52 /* 0x7 10 */] = true;
          			  case 1:
/*<156>*/ 				printf("Je vais te raconter un truc qui va sûrement\nt'intéresser.\n\n\n\x0E\x01\x09\x04\x01\x700En plus de Célesbourg, il y a tout un tas d'îlots\nqui flottent dans le ciel.\n\n\nPersonne ne sait depuis quand ni comment ils y\nsont arrivés...\n\n\n\x0E\x01\x09\x04\x07\x700Mais en tout cas, ce que je sais, c'est que si on\npeut vivre en paix comme maintenant, c'est\ngrâce à la Déesse.")
          				goto flw_151
          			  case 2:
          				flw_53:
/*< 53>*/ 				printf("Hohoho, tu veux que je te raconte un truc,\npetit ?\n\n\nLes meilleurs chevaucheurs viennent toujours\nde l'école de chevalerie où vous allez, tes\ncopains et toi.\n\nEt quand tu seras fait chevalier, toi aussi tu\npourras devenir un fier protecteur de\nCélesbourg, fendant gracieusement les airs !\n\nTu as sûrement déjà rencontré les membres de\nla patrouille de sauvetage. Ils te récupèrent si\ntu tombes de l'île !\n\n\x0E\x01\x09\x04\x01\x700Ils ne prennent que les étudiants les plus\nprometteurs dans la patrouille.\n\n\nJ'espère te voir un jour devenir un chevalier à\nla mesure de ces gars\x2010là !\n\n\n\x0E\x01\x09\x04\x07\x700Pour ne rien te cacher, mon petit\x2010fils fait partie\ndes patrouilleurs... Quelle fierté, ho<pause05>ho<pause05>ho !")
          				goto flw_151
          			  case 3:
/*<158>*/ 				switch (scene_flags[85 /* 0xB 20 */]) {
          				  case 0:
/*<157>*/ 					printf("Je vais te dire un truc qui pourrait t'être utile.\n\n\n\nEst\x2010ce que tu utilises l'<y<Endurol>> qu'ils vendent à\nla boutique de potions ?\n\n\n\x0E\x01\x09\x04\x01\x700C'est une sacrée potion ! Elle fait baisser ta\njauge d'endurance plus lentement...\n\n\nMais il faut pas croire qu'elle est utile que\nquand tu cours.\n\n\n\x0E\x01\x09\x04\x07\x700Elle te permet aussi d'utiliser plus souvent\nl'attaque circulaire. Alors prends\x2010en un\nflacon avec toi si tu dois affronter des\nmonstres coriaces !")
          					goto flw_151
          				  case 1:
          					goto flw_53
          				}
          			}
          		  case 1:
/*<143>*/ 			printf("Oh, t'es pas du genre marrant, on dirait...")
          		}
          	}
          }

          void entrypoint_122_33() {
/*<191>*/ 	start()
/*<192>*/ 	printf("\x0E\x01\x09\x04\x00\x01Tiens, Link ! Jusqu'à présent, je\nne sortais pas trop la nuit...\n\n\nMais maintenant qu'il n'y a plus de monstres,\nje peux profiter de la douceur nocturne.")
          }

          void entrypoint_122_17() {
/*< 51>*/ 	start()
/*< 52>*/ 	printf("Tu as faim ? Les plats qu'ils servent ici sont\nincomparables !\n\n\nPar contre, faut pas être pressé... Ils prennent\nleur temps pour servir !")
          }

          void entrypoint_122_00() {
          	start()
/*<  1>*/ 	printf("\x0E\x01\x09\x04\x00\x01Et maintenant, la touche finale... Une petite\npincée de poivre !\n\n\n\x0E\x01\x09\x04\x00\x04Impeccable ! De la grande cuisine, ou je ne m'y\nconnais pas !")
          }

          void entrypoint_122_18() {
/*< 54>*/ 	start()
/*< 55>*/ 	printf("\x0E\x01\x09\x04\x00\x04Tu as l'air fatigué, Link.\n\n\n\nJe comprends ça, tu sais... Moi aussi, ça\nm'arrive !\n\n\n\x0E\x01\x09\x04\x01\xD00Mais tu peux te reposer ici, bien sûr.")
          }

