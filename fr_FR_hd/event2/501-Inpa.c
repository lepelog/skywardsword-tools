          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf("\x0E\x01\x09\x04\x00\x04Tiens, Link ! T'as vu ces rails,\ndehors ?\n\n\n\x0E\x01\x09\x04\x00\xB00Tu veux savoir à quoi ils servent ? Héhéhé !\nTu le sauras bien assez tôt !")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf("Ça, c'est un bel arbre ! Je comprends pourquoi\non l'appelle l'arbre de vie !")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf("Y a vraiment rien ici, c'est déprimant. Quand je\npense que la vieille vit ici depuis des lustres...\n\n\nElle a jamais pensé à planter un arbre dans le\ncoin ?")
          				  case 1:
/*<458>*/ 					printf("Quand je regarde mamie, je peux pas me\nrésoudre à la laisser toute seule...\n\n\n\x0E\x01\x09\x04\x00\xA00Surtout, va pas raconter à mes acolytes que je\nm'occupe d'une vieille, hein !")
          				}
          			}
          		}
          	  case 1:
/*<383>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<478>*/ 			switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          			  case 0:
          				goto flw_347
          			  case 1:
/*<385>*/ 				switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          				  case 0:
          					flw_384:
/*<384>*/ 					switch (scene_flags[37 /* 0x5 20 */]) {
          					  case 0:
/*<388>*/ 						set_camera(64, 0)
/*<390>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					  case 1:
/*<387>*/ 						printf("<pause1E>\x0E\x01\x06\x02\xFFCD...")
          					}
          				  case 1:
          					goto flw_347
          				}
          			}
          		  case 1:
          			goto flw_384
          		}
          	}
          }

          void entrypoint_501_08() {
/*<170>*/ 	start()
/*<171>*/ 	switch (scene_flags[81 /* 0xB 02 */]) {
          	  case 0:
/*<175>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 174, 'param3': 32}
/*<174>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': -1, 'next': 176, 'param3': 16}
/*<176>*/ 		set_camera(21, 0)
/*<172>*/ 		printf("\x0E\x01\x09\x04\xE00\nAttends, Link ! Tu ne dois pas\nutiliser l'<r<éclat céleste >>maintenant !\n\n\nCela ne ferait que précipiter le réveil du\nmonstre.\n\n\nTu dois d'abord <r<emprisonner la créature >>!\nTu as compris ?")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 153, 'param3': 32}
/*<153>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 155, 'param3': 32}
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1010, 'next': 156, 'param3': 24}
/*<156>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 157, 'param3': 6}
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1034, 'param2': 12800, 'next': 159, 'param3': 13}
/*<159>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': -256, 'next': 275, 'param3': 13}
/*<275>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 160, 'param3': 50}
/*<160>*/ 		printf("\x0E\x01\x09\x04\x40A\x321F\x0E\x01\x08\x02\x1CDOUAAAH !!!\x0E\x01\x05\x04\x1E\x00")
/*<288>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': -256, 'next': 287, 'param3': 13}
/*<287>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 284, 'param3': 50}
/*<284>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 161, 'param3': 6}
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 285, 'param3': 15}
/*<285>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 286, 'param3': 6}
/*<286>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 293, 'param3': 6}
/*<293>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1085, 'param2': 12800, 'next': 292, 'param3': 13}
/*<292>*/ 		{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 0, 'next': 163, 'param3': 40}
/*<163>*/ 		printf("\x0E\x01\x09\x04\xE00\nHmm... Il semble que <r<le sceau ait à nouveau été\nbrisé>>...\n\n\n<r<La créature>> est sur le point de s'éveiller...\n\n\n\nElle a dû réagir à la <r<puissance sacrée >>émanant\nde ton épée.\n\n\n\x0E\x01\x09\x04\xE01\xB00C'est le prix à payer pour ouvrir la porte du\ntemps. ")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf("\x0E\x01\x09\x04\xE10\x1600\x0E\x03\x01\x00Link ! Tu dois emprisonner ce\nmonstre encore une fois.")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf("\x0E\x01\x09\x04\x400\x30DAh, c'est pas trop tôt ! Ça va chauffer !")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf("\x0E\x01\x09\x04\x40F\x2F0FLe moment de tester mon arme secrète est enfin\narrivé !\n\n\nAvec ça, il va pas faire un pli, le gros tas\nd'écailles !\n\n\n\x0E\x01\x09\x04\x40B\x3101C'est pas le moment de rêvasser ! Je pars\ndevant ! Grouille\x2010toi !")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 516, 'next': 295, 'param3': 14}
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 179, 'param3': 6}
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 466, 'param3': 24}
/*<466>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 177, 'param3': 6}
/*<177>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<169>*/ 		scene_flags[10 'Sealed Grounds'][81 /* 0xB 02 */] = true;
/*<451>*/ 		story_flags[795 /* us: 805A9B2F 0x08, jp: 805ACDAF 0x08 */] = false;
/*<178>*/ 		story_flags[144 /* us: 805A9AEE 0x04, jp: 805ACD6E 0x04 */] = true;
/*<468>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = false;
/*<168>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_501_25() {
/*<346>*/ 	start()
/*<381>*/ 	set_camera(63, 0)
/*<371>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 372, 'param3': 32}
/*<372>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<380>*/ 		printf("\x0E\x01\x06\x02\xFFCDCe grand rouquin... Il est assez doué de ses\nmains.\n\n\nJe pourrais peut\x2010être lui demander de faire\nquelques réparations dans le temple...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf("\x0E\x01\x06\x02\xFFCDCe temple jadis si calme est devenu bien\nanimé...\n\n\nCe n'est pas le moment de penser à ça...\n\n\n\nCe que je craignais le plus s'est finalement\nproduit...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf("\x0E\x01\x06\x02\xFFCDJ'espère qu'il pourra retrouver Zelda à temps...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf("\x0E\x01\x06\x02\xFFCDJ'espère qu'il pourra retrouver Zelda à temps...")
          				  case 1:
/*<376>*/ 					printf("\x0E\x01\x06\x02\xFECD.<pause0A>.<pause0A>.")
          				}
          			}
          		}
          	}
          }

          void entrypoint_501_09() {
/*<  4>*/ 	start()
/*<216>*/ 	switch (story_flags[200 /* us: 805A9AEF 0x04, jp: 805ACD6F 0x04 */]) {
          	  case 0:
/*<474>*/ 		switch (story_flags[175 /* us: 805A9AE2 0x40, jp: 805ACD62 0x40 */]) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x05Tu cherches les trois dragons...? Le dragon de\nfoudre devrait se trouver dans le désert...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf("\x0E\x01\x09\x04\x00\n\x0E\x03\x01\x00Link ! Toi et <b<Hergo>> devez joindre\nvos forces pour emprisonner la bête à nouveau !")
          				  case 1:
/*<481>*/ 					printf("<r<\x0E\x01\x09\x04\x00\nCette créature>> a recommencé à s'agiter.\nLe sceau créé par dame <b<Zelda >>dans son\nsommeil a bientôt atteint sa limite.\n\n<b<\x0E\x03\x01\x00Link>>, toi et <b<Hergo >>devez joindre\nvos forces pour emprisonner la bête à nouveau !\n\n\nJe compte sur vous !")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf("\x0E\x01\x09\x04\x00\x05Alors tu recherches les trois dragons ? Une fois\nle Chant du héros reconstitué, la voie vers la\nTriforce s'ouvrira à toi...\n\nSois prudent !")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf("La clé pour trouver la Triforce se trouve\nquelque part à <b<Célesbourg>>.\n\n\n\x0E\x01\x09\x04\xE00\x07Va et trouve la Triforce !")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf("\x0E\x01\x09\x04\xE00\x04Attends, Link ! Les phénomènes\nétranges que je perçois n'émanent pas de\ncette direction !")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf("Nous n'avons pas de temps à perdre ! Sors par\nla porte en face et va voir ce qui se passe\ndehors !")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf("... À moins que tu ne veuilles rentrer à\nCélesbourg pour ajuster ton équipement ?\nDans ce cas, je ne t'arrêterai pas, mais\nreviens vite !")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 476, 'param3': 32}
/*<476>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 446, 'param3': 17}
/*<446>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 447, 'param3': 6}
/*<447>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 441, 'param3': 40}
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 443, 'param3': 6}
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 448, 'param3': 24}
/*<448>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': -1, 'param3': 6}
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 60, 'param3': 32}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 405, 'param3': 32}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 404, 'param3': 50}
          	flw_404:
/*<404>*/ 	printf("\x0E\x01\x09\x04\xE00\x03La créature a été enfermée à nouveau...")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 401, 'param3': 6}
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 403, 'param3': 6}
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 63, 'param3': 6}
/*< 63>*/ 	printf("\x0E\x03\x01\x00Link...")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf("... Et toi, <b<Hergo>>.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf("C'est grâce à vous deux.")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHéhé ! Arrête mamie, tu vas me faire rougir !\n\n\n\nEt puis, c'est toi qui m'as montré quoi faire\nquand je pleurnichais comme un bon à rien.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf("\x0E\x01\x09\x04\xE08\xB0BC'est parce que tu en avais la force.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 74, 'param3': 6}
/*< 74>*/ 	printf("\x0E\x01\x09\x04\xE00\x07\x0E\x03\x01\x00Link ! Il est temps de te parler\nde la vraie nature de ce démon...\n\n\nSache qu'il est la source de tout le mal.\nLorsque tu auras passé la porte du temps,\ntout sera clair...\n\n\x0E\x01\x09\x04\xE01\xB00C'est un être terrifiant. On aura beau\nl'emprisonner, il parviendra toujours\nà briser les liens qui l'entravent.\n\nPour en venir à bout, il faut éliminer son\nessence même.\n\n\n\x0E\x01\x09\x04\xE10\xB00Dépêche\x2010toi, Link ! Utilise l'éclat\ncéleste...")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x40D\x206Concentre la force dans ton épée et <g<envoie\n>>l'éclat céleste dans la porte du temps !")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf("... C'est bien ça, mamie ?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xE01\x07... En effet. Va, Link !")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf("Cet endroit semble approprié pour planter cette\npousse, mais elle mettrait trop de temps à pousser\n<r<à notre époque>>...")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf("\x0E\x01\x09\x04\x00\x03<b<Hergo >>va te permettre de rejoindre la forêt.\n\n\n\n\x0E\x03\x01\x00Link, il a dû arriver quelque\nchose au <r<dragon d'eau>>. Pars à sa rencontre\ndans la forêt !")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x00\nL'heure est enfin venue.\n\n\n\n\x0E\x03\x01\x00Link ! Regagne Célesbourg et\npars à la recherche de la Triforce !")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x00\nUne fois que tu auras triomphé de la dernière\népreuve, tu seras digne de recevoir la Triforce.\n\n\nRegagne vite Célesbourg pour passer cette\népreuve !")
          					  case 1:
/*<488>*/ 						printf("\x0E\x01\x09\x04\x00\x14Excellent, Link ! Tu as appris\nles mélodies des trois dragons.\n\n\nIl ne reste que peu de temps. Dépêche\x2010toi de\nretourner dans le ciel et de compléter le Chant\ndu héros !")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf("\x0E\x01\x09\x04\x00\x03<b<Hergo>> t'attend. Va le rejoindre <r<près de sa\nmachine>>.")
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\x03Tu tombes bien, Link.\n\n\n\nJe crois qu'<b<Hergo>> t'attend.\n\n\n\nVa le retrouver <r<près de sa machine>>.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf("\x0E\x01\x09\x04\x00\x07C'est incroyable, ce qui s'est passé dans la\nforêt... Mais heureusement, tout est rentré\ndans l'ordre.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x00\x03Au fait, Link, <b<Hergo >>t'attend.\n\n\n\nVa le rejoindre <r<près de sa catapulte>>.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\nTu dois continuer et retrouver les autres\nmélodies du <r<Chant du héros>>. Le temps presse !")
          		  case 1:
/*<221>*/ 			printf("\x0E\x01\x09\x04\x00\x07C'est incroyable, ce qui s'est passé dans la\nforêt... Mais heureusement, tout est rentré\ndans l'ordre.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x0B\x04\x00\x06Tu te débrouilles assez bien, je vois.\n\n\n\nBien, passons à la suite !")
/*<271>*/ 	printf("Maintenant, joue en suivant les mouvements du\n<r<cercle de lumière >>!\n\n\nJe vais t'accompagner au chant.\n\n\n\nCe chant te sera nécessaire pour la suite de ta\nquête.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf("\x0E\x01\x09\x04\x0D\xF0AAh, cet arbre est vraiment majestueux ! Il est\ncomme le symbole de ce temple !\n\n\n\x0E\x01\x09\x04\x03\x200Rien qu'à le regarder, ça me donne une pêche\nd'enfer !")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf("\x0E\x01\x09\x04\x0D\x22EOK, t'as planté la pousse...<pause14> Mais <r<à cette époque>>,\npour que ça devienne un arbre, ça va prendre\nun sacré bout de temps...")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf("\x0E\x01\x09\x04\x0D\x204Ooh ! \x0E\x03\x01\x00Link ! C'est une belle\npousse que t'as là !\n\n\n\x0E\x01\x09\x04\x00\xE0EElle pourrait donner un bel arbre qui rentrerait\ntout pile ici.\n\n\n\x0E\x01\x09\x04\x03\x200Mais...<pause0A> Je me demande combien d'années ça va\nprendre avant que ça devienne un grand arbre...")
          					  case 1:
/*<255>*/ 						printf("\x0E\x01\x09\x04\x00\x02Le sort de <b<Zelda >>est entre tes mains,\nLink !\n\n\nSinon, je me disais que <r<je ferais bien pousser\n>>un grand arbre ici. T'aurais pas une graine ou\nquelque chose dans le genre ?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf("\x0E\x01\x09\x04\x0C\x206<b<Zelda>> t'attend derrière cette porte !\n\n\n\nAllez, grouille\x2010toi, Link !")
          		}
          	  case 1:
/*<465>*/ 		printf("\x0E\x01\x09\x04\x0C\x20DIl faut que tu concentres la force dans ton épée\net que tu <g<envoies>> l'éclat céleste dans la porte !\n\n\n<b<Zelda>> t'attend de l'autre côté !\n\n\n\nAllez, vas\x2010y, Link !")
          	}
          }

          void entrypoint_501_15() {
/*< 51>*/ 	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 52, 'param3': 32}
/*< 52>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 55, 'param3': 32}
/*< 55>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 53, 'param3': 17}
/*< 53>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 274, 'param3': 17}
/*<274>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 57, 'param3': 50}
/*< 57>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 321, 'param3': 13}
/*<321>*/ 	set_camera(54, 0)
/*<322>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 361, 'param3': 6}
/*<361>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1009, 'next': 56, 'param3': 24}
/*< 56>*/ 	printf("\x0E\x01\x09\x04\x400=Hein ?! Qu'est\x2010ce que tu racontes, mamie ?!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 12, 'param3': 6}
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x400\x02Tu te paies ma tête ?! Répète un peu pour\nvoir !")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf("\x0E\x01\x09\x04\xE00\nMalheureusement, tu n'es pas celui qui pourra\nsauver la prêtresse... <b<Zelda>>...\n\n\nCe rôle a été attribué il y a déjà fort longtemps.\nPour sauver le monde...")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDLa ferme !\n\n\n\nMoi, le grand <b<Hergo>>, je pourrais pas sauver\n<b<Zelda>> ? Ridicule !\n\n\nSi je peux pas la sauver, alors pourquoi je suis\nvenu jusqu'ici, hein ?\n\n\nEt puis, qui d'autre que moi pourrait la\nsauver ?!")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 24, 'param3': 6}
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf("\x0E\x01\x09\x04\x400\x1E......!")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 79, 'param3': 6}
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 21, 'param3': 6}
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x400\x3218... Je vois.\n\n\n\n\x0E\x01\x09\x04\x40D\xA00Tu veux dire que c'est lui qui va sauver <b<Zelda>> ?\n\n\n\n\x0E\x03\x01\x00Link...")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 393, 'param3': 6}
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\x400<Me fais pas rire ! Je m'en fiche que ce soit ta\nmission ou je sais pas quoi ! J'accepterai jamais\nça !\n\n\x0E\x01\x09\x04\x40B\xA00Tu m'entends ? Jamais !")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf("\x0E\x01\x09\x04\x4008\x0E\x01\x08\x02\x1CDOUAAAAAAAH !!!\x0E\x01\x05\x04-\x00")
/*< 39>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 35, 'next': 462, 'param3': 6}
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 281, 'param3': 6}
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 40, 'param3': 6}
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf("\x0E\x01\x09\x04\xE00\x08... \x0E\x03\x01\x00Link. Tu as pu voir <b<Zelda>> ?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF05... Je vois. Elle était là, elle aussi.\n\n\n\nCette femme que tu as vue aux côtés de Zelda\nse nomme <b<Impa>>...\n\n\nElle a été envoyée par la <b<Déesse >>pour servir\nZelda.")
/*< 50>*/ 	printf("Pour accomplir la mission que la Déesse leur a\nconfiée, Zelda et Impa se sont mises en route\nvers un lieu particulier...\n\nMais maintenant qu'Impa a détruit la porte\nqu'elles ont empruntée, il n'existe plus qu'un\nseul moyen de les rejoindre. ")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF00Tu dois utiliser le pouvoir de la <b<lyre >>que Zelda\nt'a confiée...")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Dis\x2010moi, Link, sais\x2010tu jouer de la\n<b<lyre>> ?\n\n\nVisiblement, non.\n\n\n\nTrès bien, je vais t'apprendre. Suis mes\ninstructions.\n\n\nTout d'abord, sors ta lyre avec \x0E\x02\x04\x02\x1ECD.\x0E\x01\x11\x02\x10CD")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 45, 'param3': 42}
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
/*<489>*/ 	temp_flags[40 /* 0x4 01 */] = true;
          }

          void entrypoint_501_16() {
/*< 66>*/ 	start()
/*< 67>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 68, 'param3': 32}
/*< 68>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 298, 'param3': 32}
/*<298>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 404, 'param3': 50}
          	goto flw_404
          }

          void entrypoint_501_17() {
/*<144>*/ 	start()
          	flw_134:
/*<134>*/ 	printf("\x0E\x01\x09\x04\x10\x160FOh, ton épée...!\n\n\n\n\x0E\x01\x09\x04\x00\xB00Sa lame a été purifiée par les trois flammes.\nBravo, Link ! Ton épée déborde\nd'une grande puissance...")
/*<135>*/ 	printf("\x0E\x01\x09\x04\x01\xFF07Cette puissance... Oui ! C'est la <r<force>>...\n\n\n\n\x0E\x01\x09\x04\x00\xB00La puissance sacrée que les anciens dieux ont\ninsufflée en ce monde... La grande puissance\nque mentionne le Chant de la Déesse...\n\nC'est elle qui circule à présent en toi et dans\nton épée. Ça ne fait aucun doute.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf("\x0E\x01\x09\x04\x00\x1603Bien, Link ! L'heure est venue\nd'ouvrir la porte du temps !")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 398, 'param3': 6}
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf("Avec cette puissance... Avec la <r<force>>, il ne fait\naucun doute que l'<r<éclat céleste >>pourra activer\nla porte du temps.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf("Depuis cette estrade, <g<insuffle la force de ton\népée >>à la porte du temps !")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 310, 'param3': 32}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 437, 'param3': 50}
/*<437>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 428, 'param3': 6}
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf("\x0E\x01\x09\x04\xE01\x103Tu es de retour, Link...")
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 429, 'param3': 17}
/*<429>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 430, 'param3': 47}
/*<430>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 356, 'next': 431, 'param3': 15}
/*<431>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 432, 'param3': 6}
/*<432>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 433, 'param3': 17}
/*<433>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 435, 'param3': 17}
/*<435>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 434, 'param3': 6}
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 86, 'param3': 48}
/*< 86>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 461, 'param3': 6}
/*<461>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1015, 'next': 87, 'param3': 24}
/*< 87>*/ 	printf("Alors tu sais tout, à présent.")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf("Derrière cette porte, <b<Zelda>> est plongée dans un\nprofond sommeil.\n\n\nNe crains rien, elle est toujours en vie.")
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 313, 'param3': 6}
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf("Comme le dit la légende, la Déesse a dissimulé\nla <y+<Triforce>>, la puissance qui éliminera l'Avatar\ndu Néant, à Célesbourg.\n\n\x0E\x01\x09\x04\xE01\xB00Mais nul n'en connaît l'emplacement exact.\n<pause0F>Il n'a jamais été révélé...")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf("\x0E\x01\x09\x04\xE14\xB00\x0E\x03\x01\x00Link ! Comme tu l'auras\ncompris...\n\n\nLa clé pour trouver la Triforce se trouve\nquelque part à <b<Célesbourg>>.")
/*<315>*/ 	printf("\x0E\x01\x09\x04\xE08\xB07Va et trouve la Triforce !")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf("\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDHé ! Pas si vite !")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x403\xFF00\x0E\x03\x01\x00Link ! J'ai deux mots à te dire !")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 89, 'param3': 6}
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 88, 'param3': 6}
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf("\x0E\x01\x09\x04\x403\xFF02Dis... <b<Zelda>>... Elle va bien ?\n[1]Oui[2]En fait...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf("C'est vrai ? Tant mieux.\n\n\n\n\x0E\x01\x09\x04\x403\x200Mais... c'est pas encore fini, hein ?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x40E\xD09Tu sais, Link, j'ai décidé que je\nrentrerai pas à Célesbourg.\n\n\n\x0E\x01\x09\x04\x400\x200Je vais vivre ici avec la vieille.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x400\xFF0DHéhé... Fais pas cette tête. C'est ma décision.\n\n\n\n\x0E\x01\x09\x04\x400\x200Comment dire... J'ai le sentiment que j'ai encore\ndes trucs à faire ici.\n\n\nIl faut surveiller le gros monstre, \x0E\x01\x09\x04\x400\x211et puis il faut\ns'occuper de mamie... Enfin, tu vois, quoi !\n\n\nC'est peut\x2010être pas aussi classe que ta mission,\nmais c'est quand même un sacré boulot !")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x403\xD08Et puis, je me plais bien ici.\n\n\n\nC'était sympa de vivre dans le ciel, mais j'aime\nbien avoir les pieds sur terre !")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf("\x0E\x01\x09\x04\x40D\x209Regarde ça !")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf("\x0E\x01\x09\x04\x404\x208Grâce à Zelda et mamie, cette terre est à\nnouveau pleine de vie.\n\n\n<r<Si on plantait une pousse >>ici, je suis sûr qu'elle\ndeviendrait un grand arbre costaud.\n\n\nEt peut\x2010être que cet endroit serait un peu plus\nanimé.\n\n\n\x0E\x01\x09\x04\x40D\x211Enfin, ça prend des années pour qu'un arbre\nsoit bien grand. Mais faut savoir être patient,\ndes fois.\n\n\x0E\x01\x09\x04\x400\x12C'est comme ça que je vois les choses en ce\nmoment.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf("\x0E\x01\x09\x04\x40D\x22EEt donc... Euh... Comment dire...\n\n\n\nSi tu retournes à Célesbourg, passe le bonjour\nà tout le monde de ma part.\n\n\n\x0E\x01\x09\x04\x400\xE00Mes compères s'en remettront sûrement pas.\nMais dis\x2010leur que je me plais bien ici.\n\n\n\x0E\x01\x09\x04\x400\x209Je compte sur toi, Link !")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x400\x1400Je vois... C'est pas la joie, ce qui lui est arrivé...\n\n\n\n\x0E\x01\x09\x04\x403\x200Mais, tu vas arranger ça, hein ?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x00\nNous poursuivrons notre conversation plus tard.\nPour le moment, va dehors !")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x03Je suppose que tu l'as déjà vu, mais quelque\nchose est scellé au fond du vallon en spirale,\ndehors.\n\nPour l'heure, tu n'as pas besoin d'en savoir\ndavantage mais bientôt, le moment viendra...")
          		}
          	  case 1:
/*<  2>*/ 		printf("\x0E\x01\x09\x04\x00\x1303La porte menant à la <r<forêt de Firone >>est\nouverte. Sors par la porte à ma gauche et\ncontinue tout droit pour accéder à la forêt.\n\nTôt ou tard, toute la vérité se révélera\nà toi... Poursuis ta route sans crainte,\nLink.")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 485, 'param3': 6}
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 1, 'next': 327, 'param3': 40}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 328, 'param3': 14}
/*<328>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 329, 'param3': 6}
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 335, 'param3': 6}
/*<335>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDOoh...<pause0F> Bienvenue à toi, jeune élu descendu des\ncieux par\x2010delà la mer de nuages.")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 340, 'param3': 6}
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 337, 'param3': 6}
/*<337>*/ 	printf("\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDQuel est ton nom ?\n\n\n\n... <pause28>\x0E\x03\x01\x00Link ? Hmm...\n\x0E\x03\x01\x00Link...\n\n\nTu sembles maîtriser <pling>l'<r<éclat céleste>>, cette\npuissance sacrée qui emplit ta lame lorsque\ntu la <g<brandis vers le ciel>>.\n\n\x0E\x01\x09\x04\x00\x0BC'est la preuve que tu es digne de l'<b<épée divine\n>>que tu portes dans ton dos.\n\n\n\x0E\x01\x06\x02\xFFCDJ'attends ici ton arrivée depuis des lunes et des\nlunes. Je serai ton guide...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf("Nous sommes ici dans le <b<temple du sceau>>, bâti\npar la Déesse à une époque immémoriale.\n\n\nIl était écrit depuis fort longtemps déjà que tu\nviendrais ici...\n\n\nLa jeune prêtresse que tu recherches est elle\naussi descendue en ces terres dans un rai de\nlumière il y a peu.\n\nTout cela était écrit...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 185, 'param3': 6}
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00\nMais c'est d'une manière bien différente de ce\nqui était prédit que la prêtresse est arrivée\njusqu'ici.\n\nUne puissance maléfique \x153uvre pour tenter de\nchanger votre destinée...")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF08\x0E\x03\x01\x00Link...<pause1E> Es\x2010tu préoccupé par\nl'avenir de la prêtresse ?\n\n\n... Pourtant, tu ne dois penser qu'à aller de\nl'avant. Elle a un grand destin à accomplir.\nTout comme toi.\n\nElle s'est dirigée vers la <b<forêt de Firone >>pour\nen apprendre davantage sur son rôle. Pars à\nsa suite.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF00... Regarde ta carte.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 363, 'param3': 6}
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf("La \x0E\x02\x04\x02\x19CD indique la route qui mène à la <b<forêt de\nFirone>>.\n\n\nMais il serait imprudent de t'aventurer dans\ncette forêt inconnue infestée de monstres avec\nune simple carte.\n\nJe vais te donner le pouvoir de poser des\n<r<balises>>.\n\n\nEn posant une <r<balise >>sur ta carte, un pilier de\nlumière apparaîtra à l'endroit correspondant,\nce qui facilitera ton orientation.\n\nAllez, pointe l'endroit marqué d'une \x0E\x02\x04\x02\x19CD et\nappuie sur (A) pour y poser une balise. \x0E\x01\x11\x02Í")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf("\x0E\x01\x09\x04\x00\x03Elle n'est pas visible d'ici, mais ta balise a bien\nété posée. Tu pourras le constater de tes yeux\nlorsque tu seras dehors.\n\nLorsque tu n'auras plus besoin de la balise,\nouvre ta carte, pointe la balise et appuie sur (A)\npour l'effacer.\x0E\x01\x11\x02Í\n\nTâche de ne pas te perdre.")
/*<194>*/ 		printf("\x0E\x01\x09\x04\x0E\xFF03Allez, rends\x2010toi dans la forêt de Firone. Pars\nsur les traces de la prêtresse... <b<Zelda>>.\n\n\nTu peux aussi prendre le contenu du <r<coffre >>qui\nest dans cette salle. Il te sera sûrement utile lors\nde ton aventure.")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 196, 'param3': 6}
/*<196>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 197, 'param3': 32}
/*<197>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 199, 'param3': 17}
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 279, 'param3': 13}
/*<279>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 200, 'param3': 17}
/*<200>*/ 		make_actor_do_something(0, 0)
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 40, 'next': 203, 'param3': 6}
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 205, 'param3': 24}
/*<205>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 204, 'param3': 6}
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf("Sors par cette porte, la forêt sera alors droit\ndevant. Sois prudent.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 278, 'param3': 6}
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Tôt ou tard, toute la vérité se révélera à toi...\nPour le moment, poursuis ta route sans crainte,\nLink !")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf("\x0E\x01\x09\x04\x00\x06Il n'y a pas de balise à l'endroit indiqué par\nla \x0E\x02\x04\x02\x19CD.\n\n\nPour effacer une balise que tu as posée,\npointe\x2010la avec le curseur et appuie sur (A).\x0E\x01\x11\x02Í\n\n\nSi tu veux poser une balise de façon plus\nprécise, tu peux agrandir ta carte avec \x0E\x02\x04\x02\x38CD.")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 367, 'param3': 6}
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf("Allez, pointe l'endroit indiqué par la \x0E\x02\x04\x02\x19CD et\nappuie sur \x0E\x02\x04\x02\x1BCD pour poser une balise.\x0E\x01\x11\x02Í")
/*<366>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          		goto flw_191
          	}
          }

          void entrypoint_501_02() {
/*<  5>*/ 	start()
/*<  8>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 6, 'param3': 32}
/*<  6>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 9, 'param3': 32}
/*<  9>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 7, 'param3': 17}
/*<  7>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 273, 'param3': 17}
/*<273>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 34, 'param3': 50}
/*< 34>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 2560, 'next': 360, 'param3': 13}
/*<360>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1008, 'next': 10, 'param3': 24}
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x400=Hein ?! Qu'est\x2010ce que tu racontes, mamie ?!")
/*<392>*/ 	set_camera(17, 0)
/*< 11>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 27, 'param3': 17}
          	goto flw_27
          }

          void entrypoint_501_20() {
/*<112>*/ 	start()
/*<114>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 113, 'param3': 32}
/*<113>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 115, 'param3': 32}
/*<115>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 413, 'param3': 50}
          	flw_413:
/*<413>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Tu as emprisonné ce monstre par trois fois...")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 416, 'param3': 6}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 418, 'param3': 6}
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 412, 'param3': 6}
/*<412>*/ 	printf("\x0E\x03\x01\x00Link... Hergo... Vous avez à\nnouveau fait preuve d'une grande bravoure.\n\n\nMais le démon se libère de plus en plus\nfréquemment... Tu dois faire vite,\nLink !\n\nDis\x2010moi, as\x2010tu trouvé une piste quant à l'endroit\noù est cachée la Triforce ?\n\n\n[1]Oui[2]Eh bien...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf("...<pause19> Hmm...\n\n\n\nLorsque tu auras trouvé les trois dragons et\nreconstitué le Chant du héros, la route vers la\nTriforce s'ouvrira...\n\nLe dragon le plus proche se trouve dans la <b<forêt\nde Firone>>...\n\n\n\x0E\x01\x09\x04\xE00\nMais il s'y est produit quelque chose de peu\ncommun.\n\n\n\x0E\x01\x09\x04\xE01\xB00J'ignore comment c'est arrivé, mais il y a peu...\n\n\n\n... le chemin qui mène à la forêt de Firone s'est\nretrouvé inondé.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf("J'ai donc fermé la <r<porte qui mène à la forêt >>et\nposé un sceau élémentaire pour arrêter l'eau...\n\n\nMais maintenant, on ne peut plus l'ouvrir, sinon\nl'eau inondera le vallon...\n\n\nLe problème est donc de savoir comment tu vas\npouvoir te rendre dans la forêt de Firone...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHéhé ! On dirait que c'est à moi d'entrer en\njeu !\n\n\nPendant qu'on combattait, j'ai pensé à une\nnouvelle manière d'utiliser ma <r<mégatapulte>> !\n\n\nSi tu montes dedans et que je tire à pleine\npuissance, t'arriveras dans la forêt en un\nclin d'\x153il !")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf("\x0E\x01\x09\x04\x40C\x202Je sors préparer l'engin ! Suis\x2010moi,\nLink !")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf("\x0E\x01\x09\x04\xE00\x0BEh bien...\n\n\n\nOn peut vraiment compter sur lui. Mais\narriverai\x2010je à supporter son caractère très\nlongtemps...?")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf("\x0E\x01\x09\x04\xE08\xFF00Bien, Link. Sois prudent.")
/*<423>*/ 	set_camera(1, 0)
/*<324>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_03() {
/*<264>*/ 	start()
/*<267>*/ 	give_item(186 0xBA);
/*<268>*/ 	story_flags[343 /* us: 805A9AFE 0x20, jp: 805ACD7E 0x20 */] = true;
/*<348>*/ 	make_actor_do_something(0, 0)
          }

          void entrypoint_501_21() {
/*<120>*/ 	start()
/*<122>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 121, 'param3': 32}
/*<121>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 123, 'param3': 32}
/*<123>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 413, 'param3': 50}
          	goto flw_413
          }

          void entrypoint_501_22() {
/*<240>*/ 	start()
/*<245>*/ 	switch (story_flags[225 /* us: 805A9AF2 0x10, jp: 805ACD72 0x10 */]) {
          	  case 0:
/*<246>*/ 		switch (scene_flags[100 /* 0xD 10 */]) {
          		  case 0:
/*<470>*/ 			switch (story_flags[490 /* us: 805A9B13 0x01, jp: 805ACD93 0x01 */]) {
          			  case 0:
/*<473>*/ 				switch (story_flags[799 /* us: 805A9B2F 0x80, jp: 805ACDAF 0x80 */]) {
          				  case 0:
/*<471>*/ 					printf("\x0E\x01\x09\x04\x00\n... \x0E\x03\x01\x00Link ! À présent, tu es le seul\nqui puisses faire quelque chose. Le sort du\nmonde est entre tes mains !\n\nJe t'en prie ! Tu dois nous sauver !")
          				  case 1:
/*<472>*/ 					printf("\x0E\x01\x09\x04\x00\x14Tout à l'heure, <b<Hergo>> s'est précipité dehors !\n\n\n\nJ'imagine qu'il est encore à sa <r<catapulte>>.")
          				}
          			  case 1:
/*<249>*/ 				printf("\x0E\x01\x09\x04\x00\n... \x0E\x03\x01\x00Link ! À présent, tu es le seul\nqui puisses faire quelque chose. Le sort du\nmonde est entre tes mains !\n\nJe t'en prie ! Tu dois nous sauver !")
          			}
          		  case 1:
/*<247>*/ 			printf("\x0E\x01\x09\x04\x00\x09Comment ?! L'<b<Avatar du Néant >>est revenu à\nla vie...!\n\n\nAah... C'est terrible... Si on ne fait rien, c'en est\nfini de notre monde...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf("\x0E\x01\x09\x04\x00\n... \x0E\x03\x01\x00Link ! À présent, tu es le seul\nqui puisses faire quelque chose. Le sort du\nmonde est entre tes mains !\n\nJe t'en prie ! Tu dois nous sauver !")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x0D\x0E\x03\x01\x00Link ! Tu dois absolument\nempêcher la résurrection de l'Avatar\ndu Néant dans le monde du passé !\n\nOuvre vite la porte du temps pour te rendre\ndans le passé ! ")
          		  case 1:
/*<241>*/ 			printf("\x0E\x01\x09\x04\x00\x09Aaah... Quelle tragédie...! Alors que nous\npensions avoir enfin triomphé, dame <b<Zelda\n>>s'est fait enlever !\n\n\x0E\x03\x01\x00Link ! Tu dois absolument\nempêcher la résurrection de l'Avatar du\nNéant dans le monde du passé !\n\nOuvre vite la porte du temps pour te rendre\ndans le passé !")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf("« <b<Le Chant de la Déesse>> ». Il est très probable\nqu'il s'agisse du chant que chantait dame Zelda\nle jour de la chevauchée céleste.\n\nLa probabilité d'obtenir des informations sur\nles paroles de ce chant à l'école de chevalerie\nest de 85 %.")
/*<486>*/ 	story_flags[142 /* us: 805A9AEE 0x01, jp: 805ACD6E 0x01 */] = true;
          }

          void entrypoint_501_06() {
/*<148>*/ 	start()
/*<146>*/ 	switch (story_flags[71 /* us: 805A9AE5 0x80, jp: 805ACD65 0x80 */]) {
          	  case 0:
/*<149>*/ 		switch (story_flags[13 /* us: 805A9AD8 0x40, jp: 805ACD58 0x40 */]) {
          		  case 0:
/*<141>*/ 			switch (scene_flags[80 /* 0xB 01 */]) {
          			  case 0:
/*<150>*/ 				switch (scene_flags[81 /* 0xB 02 */]) {
          				  case 0:
/*<151>*/ 					switch (story_flags[132 /* us: 805A9AE4 0x04, jp: 805ACD64 0x04 */]) {
          					  case 0:
/*<213>*/ 						switch (story_flags[344 /* us: 805A9AFE 0x40, jp: 805ACD7E 0x40 */]) {
          						  case 0:
/*<214>*/ 							printf("\x0E\x01\x09\x04\x10\x1606Que fais\x2010tu, Link ? As\x2010tu fait ce\nque tu avais à faire de l'autre côté de la porte ?\n\n\n\x0E\x01\x09\x04\x14\xB00Alors, traverse cette porte !")
          						  case 1:
/*<152>*/ 							printf("\x0E\x01\x09\x04\x10\x03Allez, Link ! Ouvre la porte du\ntemps et rends\x2010toi de l'autre côté !")
          						}
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\nLa créature est sur le point de s'éveiller.\n\n\n\n\x0E\x03\x01\x00Link ! Tu dois l'emprisonner à\nnouveau !")
          					}
          				  case 1:
/*<143>*/ 					printf("\x0E\x01\x09\x04\x00\x07Avec cette puissance... Avec la <r<force>>, il ne fait\naucun doute que l'<r<éclat céleste >>pourra activer\nla porte du temps.\n\nDepuis cette estrade, <g<insuffle la force de ton\népée >>à la porte du temps !")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf("\x0E\x01\x09\x04\x00\nTôt ou tard, ce monstre brisera à nouveau le\nsceau...\n\n\nHergo semble réfléchir à un plan pour s'y\npréparer.\n\n\n\x0E\x03\x01\x00Link, empresse\x2010toi d'aller\nrecueillir les trois flammes sacrées\ndans ton épée !")
          		}
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\x00\x03Recueille les trois flammes sacrées dans ton\népée, et alors la porte du temps s'ouvrira.\n\n\nLe <r<Chant de la Déesse >>qui se transmet à\nCélesbourg, ton village natal, te mettra sur\nla voie des flammes sacrées.\n\nRetourne à Célesbourg sans plus attendre !")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf("\x0E\x01\x09\x04\x00\x00Rattrape ce guignol, Link !\nFaut que tu sauves <b<Zelda>> !")
          }

