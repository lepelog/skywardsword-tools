          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf("\x0E\x01\x09\x04\x00\x04Tiens, Link !\nT'as vu ces rails, dehors ?\n\n\n\x0E\x01\x09\x04\x00\xB00Tu veux savoir à quoi ils servent ?\nHéhéhé ! Tu le sauras bien assez tôt !")
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
/*<454>*/ 				printf("Ça, c'est un bel arbre ! Je comprends\npourquoi on l'appelle l'arbre de vie !")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf("Y a vraiment rien ici, c'est déprimant.\nQuand je pense que la vieille\nvit ici depuis des lustres...\n\nElle a jamais pensé à planter un arbre\ndans le coin ?")
          				  case 1:
/*<458>*/ 					printf("Quand je regarde mamie, je peux pas\nme résoudre à la laisser toute seule...\n\n\n\x0E\x01\x09\x04\x00\xA00Surtout, va pas raconter à mes acolytes\nque je m'occupe d'une vieille, hein !")
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
/*<172>*/ 		printf("\x0E\x01\x09\x04\xE00\nAttends, Link !\nTu ne dois pas utiliser l'<r<éclat céleste\n>>maintenant !\n\nCela ne ferait que précipiter le réveil\ndu monstre.\n\n\nTu dois d'abord <r<emprisonner la\ncréature >>! Tu as compris ?")
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
/*<163>*/ 		printf("\x0E\x01\x09\x04\xE00\nHmm... Il semble que <r<le sceau ait à\nnouveau été brisé>>...\n\n\n<r<La créature>> est sur le point de\ns'éveiller...\n\n\nElle a dû réagir à la <r<puissance sacrée\n>>émanant de ton épée.\n\n\n\x0E\x01\x09\x04\xE01\xB00C'est le prix à payer pour ouvrir\nla porte du temps. ")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf("\x0E\x01\x09\x04\xE10\x1600\x0E\x03\x01\x00Link !\nTu dois emprisonner ce monstre\nencore une fois.")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf("\x0E\x01\x09\x04\x400\x30DAh, c'est pas trop tôt ! Ça va chauffer !")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf("\x0E\x01\x09\x04\x40F\x2F0FLe moment de tester mon arme secrète\nest enfin arrivé !\n\n\nAvec ça, il va pas faire un pli, le gros\ntas d'écailles !\n\n\n\x0E\x01\x09\x04\x40B\x3101C'est pas le moment de rêvasser !\nJe pars devant ! Grouille\x2010toi !")
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
/*<380>*/ 		printf("\x0E\x01\x06\x02\xFFCDCe grand rouquin...\nIl est assez doué de ses mains.\n\n\nJe pourrais peut\x2010être lui demander\nde faire quelques réparations dans\nle temple...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf("\x0E\x01\x06\x02\xFFCDCe temple jadis si calme est devenu\nbien animé...\n\n\nCe n'est pas le moment de penser à ça...\n\n\n\nCe que je craignais le plus s'est\nfinalement produit...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf("\x0E\x01\x06\x02\xFFCDJ'espère qu'il pourra retrouver\nZelda à temps...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf("\x0E\x01\x06\x02\xFFCDJ'espère qu'il pourra retrouver\nZelda à temps...")
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
/*<475>*/ 			printf("\x0E\x01\x09\x04\x00\x05Tu cherches les trois dragons...?\nLe dragon de foudre devrait\nse trouver dans le désert...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf("\x0E\x01\x09\x04\x00\n\x0E\x03\x01\x00Link ! Toi et <b<Hergo>> devez\njoindre vos forces pour emprisonner\nla bête à nouveau !")
          				  case 1:
/*<481>*/ 					printf("<r<\x0E\x01\x09\x04\x00\nCette créature>> a recommencé à\ns'agiter. Le sceau créé par dame <b<Zelda\n>>dans son sommeil a bientôt atteint\nsa limite.\n<b<\x0E\x03\x01\x00Link>>, toi et <b<Hergo >>devez\njoindre vos forces pour emprisonner\nla bête à nouveau !\n\nJe compte sur vous !")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf("\x0E\x01\x09\x04\x00\x05Alors tu recherches les trois dragons ?\nUne fois le Chant du héros reconstitué,\nla voie vers la Triforce s'ouvrira à toi...\n\nSois prudent !")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf("La clé pour trouver la Triforce se\ntrouve quelque part à <b<Célesbourg>>.\n\n\n\x0E\x01\x09\x04\xE00\x07Va et trouve la Triforce !")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf("\x0E\x01\x09\x04\xE00\x04Attends, Link ! Les\nphénomènes étranges que je perçois\nn'émanent pas de cette direction !")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf("Nous n'avons pas de temps à perdre !\nSors par la porte en face et va voir\nce qui se passe dehors !")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf("... À moins que tu ne veuilles rentrer\nà Célesbourg pour ajuster ton\néquipement ? Dans ce cas, je ne\nt'arrêterai pas, mais reviens vite !")
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
/*<404>*/ 	printf("\x0E\x01\x09\x04\xE00\x03La créature a été enfermée\nà nouveau...")
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
/*< 70>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHéhé ! Arrête mamie, tu vas me faire\nrougir !\n\n\nEt puis, c'est toi qui m'as montré quoi\nfaire quand je pleurnichais comme\nun bon à rien.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf("\x0E\x01\x09\x04\xE08\xB0BC'est parce que tu en avais la force.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 74, 'param3': 6}
/*< 74>*/ 	printf("\x0E\x01\x09\x04\xE00\x07\x0E\x03\x01\x00Link !\nIl est temps de te parler de la vraie\nnature de ce démon...\n\nSache qu'il est la source de tout le mal.\nLorsque tu auras passé la porte du\ntemps, tout sera clair...\n\n\x0E\x01\x09\x04\xE01\xB00C'est un être terrifiant. On aura beau\nl'emprisonner, il parviendra toujours\nà briser les liens qui  l'entravent.\n\nPour en venir à bout, il faut éliminer\nson essence même.\n\n\n\x0E\x01\x09\x04\xE10\xB00Dépêche\x2010toi, Link !\nUtilise l'éclat céleste...")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf("\x0E\x01\x09\x04\x40D\x206Concentre la force dans ton épée et\n<g<envoie >>l'éclat céleste dans la porte\ndu temps !")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf("... C'est bien ça, mamie ?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf("\x0E\x01\x09\x04\xE01\x07... En effet.\nVa, Link !")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 305, 'param3': 6}
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf("Cet endroit semble approprié pour\nplanter cette pousse, mais elle\nmettrait trop de temps à pousser\n<r<à notre époque>>...")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf("\x0E\x01\x09\x04\x00\x03<b<Hergo >>va te permettre de rejoindre\nla forêt.\n\n\n\x0E\x03\x01\x00Link, il a dû arriver\nquelque chose au <r<dragon d'eau>>.\nPars à sa rencontre dans la forêt !")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf("\x0E\x01\x09\x04\x00\nL'heure est enfin venue.\n\n\n\n\x0E\x03\x01\x00Link !\nRegagne Célesbourg et pars à la\nrecherche de la Triforce !")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf("\x0E\x01\x09\x04\x00\nUne fois que tu auras triomphé de la\ndernière épreuve, tu seras digne de\nrecevoir la Triforce.\n\nRegagne vite Célesbourg pour passer\ncette épreuve !")
          					  case 1:
/*<488>*/ 						printf("\x0E\x01\x09\x04\x00\x14Excellent, Link ! Tu as\nappris les mélodies des trois dragons.\n\n\nIl ne reste que peu de temps.\nDépêche\x2010toi de retourner dans\nle ciel et de compléter le Chant\ndu héros !")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf("\x0E\x01\x09\x04\x00\x03<b<Hergo>> t'attend. Va le rejoindre <r<près de\nsa machine>>.")
          					  case 1:
/*<229>*/ 						printf("\x0E\x01\x09\x04\x00\x03Tu tombes bien, Link.\n\n\n\nJe crois qu'<b<Hergo>> t'attend.\n\n\n\nVa le retrouver <r<près de sa machine>>.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf("\x0E\x01\x09\x04\x00\x07C'est incroyable, ce qui s'est passé\ndans la forêt...\nMais heureusement, tout est rentré\ndans l'ordre.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf("\x0E\x01\x09\x04\x00\x03Au fait, Link, <b<Hergo\n>>t'attend.\n\n\nVa le rejoindre <r<près de sa catapulte>>.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf("\x0E\x01\x09\x04\x00\nTu dois continuer et retrouver les\nautres mélodies du <r<Chant du héros>>.\nLe temps presse !")
          		  case 1:
/*<221>*/ 			printf("\x0E\x01\x09\x04\x00\x07C'est incroyable, ce qui s'est passé\ndans la forêt...\nMais heureusement, tout est rentré\ndans l'ordre.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf("\x0E\x01\x0B\x04\x00\x06Tu te débrouilles assez bien, je vois.\n\n\n\nBien, passons à la suite !")
/*<271>*/ 	printf("Maintenant, joue en suivant les\nmouvements du <r<cercle de lumière >>!\n\n\nJe vais t'accompagner au chant.\n\n\n\nCe chant te sera nécessaire pour la\nsuite de ta quête.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf("\x0E\x01\x09\x04\x0D\xF0AAh, cet arbre est vraiment\nmajestueux ! Il est comme le symbole\nde ce temple !\n\n\x0E\x01\x09\x04\x03\x200Rien qu'à le regarder, ça me donne\nune pêche d'enfer !")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf("\x0E\x01\x09\x04\x0D\x22EOK, t'as planté la pousse...<pause14>\nMais <r<à cette époque>>, pour que ça\ndevienne un arbre, ça va prendre\nun sacré bout de temps...")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf("\x0E\x01\x09\x04\x0D\x204Ooh ! \x0E\x03\x01\x00Link !\nC'est une belle pousse que t'as là !\n\n\n\x0E\x01\x09\x04\x00\xE0EElle pourrait donner un bel arbre qui\nrentrerait tout pile ici.\n\n\n\x0E\x01\x09\x04\x03\x200Mais...<pause0A> Je me demande combien\nd'années ça va prendre avant que\nça devienne un grand arbre...")
          					  case 1:
/*<255>*/ 						printf("\x0E\x01\x09\x04\x00\x02Le sort de <b<Zelda >>est entre tes mains,\nLink !\n\n\nSinon, je me disais que <r<je ferais bien\npousser >>un grand arbre ici. T'aurais\npas une graine ou quelque chose dans\nle genre ?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf("\x0E\x01\x09\x04\x0C\x206<b<Zelda>> t'attend derrière cette porte !\n\n\n\nAllez, grouille\x2010toi, Link !")
          		}
          	  case 1:
/*<465>*/ 		printf("\x0E\x01\x09\x04\x0C\x20DIl faut que tu concentres la force dans\nton épée et que tu <g<envoies>> l'éclat\ncéleste dans la porte !\n\n<b<Zelda>> t'attend de l'autre côté !\n\n\n\nAllez, vas\x2010y, Link !")
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
/*< 56>*/ 	printf("\x0E\x01\x09\x04\x400=Hein ?! Qu'est\x2010ce que tu racontes,\nmamie ?!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 12, 'param3': 6}
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf("\x0E\x01\x09\x04\x400\x02Tu te paies ma tête ?!\nRépète un peu pour voir !")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf("\x0E\x01\x09\x04\xE00\nMalheureusement, tu n'es pas celui\nqui pourra sauver la prêtresse...\n<b<Zelda>>...\n\nCe rôle a été attribué il y a déjà fort\nlongtemps. Pour sauver le monde...")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf("\x0E\x01\x09\x04\x400>\x0E\x01\x08\x02\x1CDLa ferme !\n\n\n\nMoi, le grand <b<Hergo>>, je pourrais pas\nsauver <b<Zelda>> ? Ridicule !\n\n\nSi je peux pas la sauver, alors pourquoi\nje suis venu jusqu'ici, hein ?\n\n\nEt puis, qui d'autre que moi pourrait\nla sauver ?!")
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
/*< 21>*/ 	printf("\x0E\x01\x09\x04\x400\x3218... Je vois.\n\n\n\n\x0E\x01\x09\x04\x40D\xA00Tu veux dire que c'est lui qui va\nsauver <b<Zelda>> ?\n\n\n\x0E\x03\x01\x00Link...")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 393, 'param3': 6}
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf("\x0E\x01\x09\x04\x400<Me fais pas rire ! Je m'en fiche que ce\nsoit ta mission ou je sais pas quoi !\nJ'accepterai jamais ça !\n\n\x0E\x01\x09\x04\x40B\xA00Tu m'entends ? Jamais !")
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
/*< 41>*/ 	printf("\x0E\x01\x09\x04\xE00\x08... \x0E\x03\x01\x00Link.\nTu as pu voir <b<Zelda>> ?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF05... Je vois. Elle était là, elle aussi.\n\n\n\nCette femme que tu as vue aux côtés\nde Zelda se nomme <b<Impa>>...\n\n\nElle a été envoyée par la <b<Déesse >>pour\nservir Zelda.")
/*< 50>*/ 	printf("Pour accomplir la mission que la\nDéesse leur a confiée, Zelda et Impa\nse sont mises en route vers un lieu\nparticulier...\nMais maintenant qu'Impa a détruit\nla porte qu'elles ont empruntée, il\nn'existe plus qu'un seul moyen de les\nrejoindre. ")
/*< 49>*/ 	printf("\x0E\x01\x09\x04\xE0E\xFF00Tu dois utiliser le pouvoir de la <b<lyre\n>>que Zelda t'a confiée...")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf("\x0E\x01\x09\x04\xE00\x08Dis\x2010moi, Link,\nsais\x2010tu jouer de la <b<lyre>> ?\n\n\nVisiblement, non.\n\n\n\nTrès bien, je vais t'apprendre.\nSuis mes instructions.\n\n\nTout d'abord, sors ta lyre avec (^)\npuis prépare\x2010toi à jouer en appuyant\nsur (A).\x0E\x01\x11\x02\x8CD")
/*< 48>*/ 	story_flags[135 /* us: 805A9AE4 0x20, jp: 805ACD64 0x20 */] = true;
/*< 46>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 0, 'next': 45, 'param3': 42}
/*< 45>*/ 	scene_flags[10 'Sealed Grounds'][28 /* 0x2 10 */] = true;
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
/*<134>*/ 	printf("\x0E\x01\x09\x04\x10\x160FOh, ton épée...!\n\n\n\n\x0E\x01\x09\x04\x00\xB00Sa lame a été purifiée par les trois\nflammes. Bravo, Link !\nTon épée déborde d'une grande\npuissance...")
/*<135>*/ 	printf("\x0E\x01\x09\x04\x01\xFF07Cette puissance... Oui !\nC'est la <r<force>>...\n\n\n\x0E\x01\x09\x04\x00\xB00La puissance sacrée que les anciens\ndieux ont insufflée en ce monde...\nLa grande puissance que mentionne\nle Chant de la Déesse...\nC'est elle qui circule à présent en toi\net dans ton épée. Ça ne fait aucun\ndoute.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf("\x0E\x01\x09\x04\x00\x1603Bien, Link !\nL'heure est venue d'ouvrir la porte\ndu temps !")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 398, 'param3': 6}
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf("Avec cette puissance... Avec la <r<force>>,\nil ne fait aucun doute que l'<r<éclat céleste>>\npourra activer la porte du temps.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf("Depuis cette estrade, <g<insuffle la force\nde ton épée >>à la porte du temps !")
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
/*< 84>*/ 	printf("Derrière cette porte, <b<Zelda>> est plongée\ndans un profond sommeil.\n\n\nNe crains rien, elle est toujours en vie.")
/*<439>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 313, 'param3': 6}
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf("Comme le dit la légende, la Déesse a\ndissimulé la <y+<Triforce>>, la puissance\nqui éliminera l'Avatar du Néant, à\nCélesbourg.\n\x0E\x01\x09\x04\xE01\xB00Mais nul n'en connaît l'emplacement\nexact. <pause0F>Il n'a jamais été révélé...")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf("\x0E\x01\x09\x04\xE14\xB00\x0E\x03\x01\x00Link ! Comme tu l'auras\ncompris...\n\n\nLa clé pour trouver la Triforce se\ntrouve quelque part à <b<Célesbourg>>.")
/*<315>*/ 	printf("\x0E\x01\x09\x04\xE08\xB07Va et trouve la Triforce !")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf("\x0E\x01\x09\x04\x401\xFF04\x0E\x01\x08\x02\x1CDHé ! Pas si vite !")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf("\x0E\x01\x09\x04\x403\xFF00\x0E\x03\x01\x00Link !\nJ'ai deux mots à te dire !")
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
/*< 96>*/ 		printf("\x0E\x01\x09\x04\x40E\xD09Tu sais, Link, j'ai décidé\nque je rentrerai pas à Célesbourg.\n\n\n\x0E\x01\x09\x04\x400\x200Je vais vivre ici avec la vieille.")
/*< 98>*/ 		printf("\x0E\x01\x09\x04\x400\xFF0DHéhé... Fais pas cette tête.\nC'est ma décision.\n\n\n\x0E\x01\x09\x04\x400\x200Comment dire... J'ai le sentiment que\nj'ai encore des trucs à faire ici.\n\n\nIl faut surveiller le gros monstre, \x0E\x01\x09\x04\x400\x211et\npuis il faut s'occuper de mamie...\nEnfin, tu vois, quoi !\n\nC'est peut\x2010être pas aussi classe que\nta mission, mais c'est quand même\nun sacré boulot !")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf("\x0E\x01\x09\x04\x403\xD08Et puis, je me plais bien ici.\n\n\n\nC'était sympa de vivre dans le ciel,\nmais j'aime bien avoir les pieds sur\nterre !")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf("\x0E\x01\x09\x04\x40D\x209Regarde ça !")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf("\x0E\x01\x09\x04\x404\x208Grâce à Zelda et mamie, cette terre est\nà nouveau pleine de vie.\n\n\n<r<Si on plantait une pousse >>ici, je suis sûr\nqu'elle deviendrait un grand arbre\ncostaud.\n\nEt peut\x2010être que cet endroit serait un\npeu plus animé.\n\n\n\x0E\x01\x09\x04\x40D\x211Enfin, ça prend des années pour qu'un\narbre soit bien grand. Mais faut savoir\nêtre patient, des fois.\n\n\x0E\x01\x09\x04\x400\x12C'est comme ça que je vois les choses\nen ce moment.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf("\x0E\x01\x09\x04\x40D\x22EEt donc... Euh... Comment dire...\n\n\n\nSi tu retournes à Célesbourg, passe le\nbonjour à tout le monde de ma part.\n\n\n\x0E\x01\x09\x04\x400\xE00Mes compères s'en remettront\nsûrement pas. Mais dis\x2010leur que\nje me plais bien ici.\n\n\x0E\x01\x09\x04\x400\x209Je compte sur toi, Link !")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf("\x0E\x01\x09\x04\x400\x1400Je vois... C'est pas la joie, ce qui lui est\narrivé...\n\n\n\x0E\x01\x09\x04\x403\x200Mais, tu vas arranger ça, hein ?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf("\x0E\x01\x09\x04\x00\nNous poursuivrons notre conversation\nplus tard. Pour le moment, va dehors !")
          		  case 1:
/*<132>*/ 			printf("\x0E\x01\x09\x04\x00\x03Je suppose que tu l'as déjà vu, mais\nquelque chose est scellé au fond du\nvallon en spirale, dehors.\n\nPour l'heure, tu n'as pas besoin d'en\nsavoir davantage mais bientôt, le\nmoment viendra...")
          		}
          	  case 1:
/*<  2>*/ 		printf("\x0E\x01\x09\x04\x00\x1303La porte menant à la <r<forêt de Firone>>\nest ouverte. Sors par la porte à ma\ngauche et continue tout droit pour\naccéder à la forêt.\nTôt ou tard, toute la vérité se révélera\nà toi... Poursuis ta route sans crainte,\nLink.")
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
/*<335>*/ 	printf("\x0E\x01\x09\x04\x00\x01\x0E\x01\x06\x02\xFECDOoh...<pause0F>\nBienvenue à toi, jeune élu descendu\ndes cieux par\x2010delà la mer de nuages.")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 45, 'next': 340, 'param3': 6}
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 337, 'param3': 6}
/*<337>*/ 	printf("\x0E\x01\x09\x04\x00\x08\x0E\x01\x06\x02\xFECDQuel est ton nom ?\n\n\n\n... <pause28>\x0E\x03\x01\x00Link ?\nHmm... \x0E\x03\x01\x00Link...\n\n\nTu sembles maîtriser <pling>l'<r<éclat céleste>>,\ncette puissance sacrée qui emplit ta\nlame lorsque tu la <g<brandis vers le ciel>>.\n\n\x0E\x01\x09\x04\x00\x0BC'est la preuve que tu es digne de\nl'<b<épée divine >>que tu portes dans\nton dos.\n\n\x0E\x01\x06\x02\xFFCDJ'attends ici ton arrivée depuis des\nlunes et des lunes. Je serai ton guide...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf("Nous sommes ici dans le <b<temple du\nsceau>>, bâti par la Déesse à une époque\nimmémoriale.\n\nIl était écrit depuis fort longtemps\ndéjà que tu viendrais ici...\n\n\nLa jeune prêtresse que tu recherches\nest elle aussi descendue en ces terres\ndans un rai de lumière il y a peu.\n\nTout cela était écrit...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 185, 'param3': 6}
/*<185>*/ 	printf("\x0E\x01\x09\x04\x00\nMais c'est d'une manière bien\ndifférente de ce qui était prédit\nque la prêtresse est arrivée jusqu'ici.\n\nUne puissance maléfique \x153uvre pour\ntenter de changer votre destinée...")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF08\x0E\x03\x01\x00Link...<pause1E>\nEs\x2010tu préoccupé par l'avenir de la\nprêtresse ?\n\n... Pourtant, tu ne dois penser qu'à\naller de l'avant. Elle a un grand\ndestin à accomplir. Tout comme toi.\n\nElle s'est dirigée vers la <b<forêt de\nFirone >>pour en apprendre davantage\nsur son rôle. Pars à sa suite.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf("\x0E\x01\x09\x04\x0E\xFF00... Regarde ta carte.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 363, 'param3': 6}
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf("La \x0E\x02\x04\x02\x19CD indique la route qui mène à la\n<b<forêt de Firone>>.\n\n\nMais il serait imprudent de t'aventurer\ndans cette forêt inconnue infestée de\nmonstres avec une simple carte.\n\nJe vais te donner le pouvoir de poser\ndes <r<balises>>.\n\n\nEn posant une <r<balise >>sur ta carte,\nun pilier de lumière apparaîtra\nà l'endroit correspondant, ce qui\nfacilitera ton orientation.\nAllez, pointe l'endroit marqué d'une\n\x0E\x02\x04\x02\x19CD et appuie sur (C) pour y poser une\nbalise. \x0E\x01\x11\x02\x6CD")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf("\x0E\x01\x09\x04\x00\x03Elle n'est pas visible d'ici, mais ta\nbalise a bien été posée. Tu pourras\nle constater de tes yeux lorsque tu\nseras dehors.\nLorsque tu n'auras plus besoin de la\nbalise, ouvre ta carte, pointe la balise\net appuie sur (C) pour l'effacer.\x0E\x01\x11\x02\x6CD\n\nTâche de ne pas te perdre.")
/*<194>*/ 		printf("\x0E\x01\x09\x04\x0E\xFF03Allez, rends\x2010toi dans la forêt de Firone.\nPars sur les traces de la prêtresse...\n<b<Zelda>>.\n\nTu peux aussi prendre le contenu du\n<r<coffre >>qui est dans cette salle. Il te sera\nsûrement utile lors de ton aventure.")
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
/*<206>*/ 		printf("Sors par cette porte, la forêt sera\nalors droit devant. Sois prudent.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 278, 'param3': 6}
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf("\x0E\x01\x09\x04\x00\x1303Tôt ou tard, toute la vérité se révélera\nà toi... Pour le moment, poursuis ta\nroute sans crainte, Link !")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf("\x0E\x01\x09\x04\x00\x06Il n'y a pas de balise à l'endroit indiqué\npar la \x0E\x02\x04\x02\x19CD.\n\n\nPour effacer une balise que tu as\nposée, pointe\x2010la avec le curseur\net appuie sur (C).\x0E\x01\x11\x02\x6CD\n\nSi tu veux poser une balise de façon\nplus précise, tu peux agrandir ta carte\navec (A).")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 367, 'param3': 6}
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf("Allez, pointe l'endroit indiqué par\nla \x0E\x02\x04\x02\x19CD et appuie sur (C) pour poser\nune balise.\x0E\x01\x11\x02\x6CD")
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
/*< 10>*/ 	printf("\x0E\x01\x09\x04\x400=Hein ?! Qu'est\x2010ce que tu racontes,\nmamie ?!")
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
/*<413>*/ 	printf("\x0E\x01\x09\x04\xE00\x03Tu as emprisonné ce monstre par\ntrois fois...")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 416, 'param3': 6}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 418, 'param3': 6}
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 412, 'param3': 6}
/*<412>*/ 	printf("\x0E\x03\x01\x00Link... Hergo... Vous avez\nà nouveau fait preuve d'une grande\nbravoure.\n\nMais le démon se libère de plus en plus\nfréquemment... Tu dois faire vite,\nLink !\n\nDis\x2010moi, as\x2010tu trouvé une piste quant\nà l'endroit où est cachée la Triforce ?\n\n\n[1]Oui[2]Eh bien...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf("...<pause19>\nHmm...\n\n\nLorsque tu auras trouvé les trois\ndragons et reconstitué le Chant du\nhéros, la route vers la Triforce\ns'ouvrira...\nLe dragon le plus proche se trouve dans\nla <b<forêt de Firone>>...\n\n\n\x0E\x01\x09\x04\xE00\nMais il s'y est produit quelque chose\nde peu commun.\n\n\n\x0E\x01\x09\x04\xE01\xB00J'ignore comment c'est arrivé,\nmais il y a peu...\n\n\n... le chemin qui mène à la forêt de\nFirone s'est retrouvé inondé.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf("J'ai donc fermé la <r<porte qui mène à\nla forêt >>et posé un sceau élémentaire\npour arrêter l'eau...\n\nMais maintenant, on ne peut plus\nl'ouvrir, sinon l'eau inondera le\nvallon...\n\nLe problème est donc de savoir\ncomment tu vas pouvoir te rendre\ndans la forêt de Firone...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf("\x0E\x01\x09\x04\x400\x0DHéhé ! On dirait que c'est à moi\nd'entrer en jeu !\n\n\nPendant qu'on combattait, j'ai pensé à\nune nouvelle manière d'utiliser ma\n<r<mégatapulte>> !\n\nSi tu montes dedans et que je tire à\npleine puissance, t'arriveras dans\nla forêt en un clin d'\x153il !")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf("\x0E\x01\x09\x04\x40C\x202Je sors préparer l'engin !\nSuis\x2010moi, Link !")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 124, 'param3': 6}
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf("\x0E\x01\x09\x04\xE00\x0BEh bien...\n\n\n\nOn peut vraiment compter sur lui.\nMais arriverai\x2010je à supporter son\ncaractère très longtemps...?")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf("\x0E\x01\x09\x04\xE08\xFF00Bien, Link.\nSois prudent.")
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
/*<471>*/ 					printf("\x0E\x01\x09\x04\x00\n... \x0E\x03\x01\x00Link !\nÀ présent, tu es le seul qui puisses faire\nquelque chose. Le sort du monde est\nentre tes mains !\nJe t'en prie ! Tu dois nous sauver !")
          				  case 1:
/*<472>*/ 					printf("\x0E\x01\x09\x04\x00\x14Tout à l'heure, <b<Hergo>> s'est précipité\ndehors !\n\n\nJ'imagine qu'il est encore à sa\n<r<catapulte>>.")
          				}
          			  case 1:
/*<249>*/ 				printf("\x0E\x01\x09\x04\x00\n... \x0E\x03\x01\x00Link !\nÀ présent, tu es le seul qui puisses faire\nquelque chose. Le sort du monde est\nentre tes mains !\nJe t'en prie ! Tu dois nous sauver !")
          			}
          		  case 1:
/*<247>*/ 			printf("\x0E\x01\x09\x04\x00\x09Comment ?!\nL'<b<Avatar du Néant >>est revenu à la\nvie...!\n\nAah... C'est terrible...\nSi on ne fait rien, c'en est fini de\nnotre monde...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf("\x0E\x01\x09\x04\x00\n... \x0E\x03\x01\x00Link !\nÀ présent, tu es le seul qui puisses faire\nquelque chose. Le sort du monde est\nentre tes mains !\nJe t'en prie ! Tu dois nous sauver !")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf("\x0E\x01\x09\x04\x00\x0D\x0E\x03\x01\x00Link !\nTu dois absolument empêcher la\nrésurrection de l'Avatar du Néant\ndans le monde du passé !\nOuvre vite la porte du temps pour\nte rendre dans le passé ! ")
          		  case 1:
/*<241>*/ 			printf("\x0E\x01\x09\x04\x00\x09Aaah... Quelle tragédie...!\nAlors que nous pensions avoir enfin\ntriomphé, dame <b<Zelda >>s'est fait\nenlever !\n\x0E\x03\x01\x00Link !\nTu dois absolument empêcher la\nrésurrection de l'Avatar du Néant\ndans le monde du passé !\nOuvre vite la porte du temps pour\nte rendre dans le passé !")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf("« <b<Le Chant de la Déesse>> ».\nIl est très probable qu'il s'agisse du\nchant que chantait dame Zelda le\njour de la chevauchée céleste.\nLa probabilité d'obtenir des\ninformations sur les paroles de ce\nchant à l'école de chevalerie est\nde 85 %.")
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
/*<214>*/ 							printf("\x0E\x01\x09\x04\x10\x1606Que fais\x2010tu, Link ?\nAs\x2010tu fait ce que tu avais à faire de\nl'autre côté de la porte ?\n\n\x0E\x01\x09\x04\x14\xB00Alors, traverse cette porte !")
          						  case 1:
/*<152>*/ 							printf("\x0E\x01\x09\x04\x10\x03Allez, Link !\nOuvre la porte du temps et rends\x2010toi\nde l'autre côté !")
          						}
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\nLa créature est sur le point de\ns'éveiller.\n\n\n\x0E\x03\x01\x00Link ! Tu dois\nl'emprisonner à nouveau !")
          					}
          				  case 1:
/*<143>*/ 					printf("\x0E\x01\x09\x04\x00\x07Avec cette puissance... Avec la <r<force>>,\nil ne fait aucun doute que l'<r<éclat céleste>>\npourra activer la porte du temps.\n\nDepuis cette estrade, <g<insuffle la force\nde ton épée >>à la porte du temps !")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf("\x0E\x01\x09\x04\x00\nTôt ou tard, ce monstre brisera à\nnouveau le sceau...\n\n\nHergo semble réfléchir à un plan pour\ns'y préparer.\n\n\n\x0E\x03\x01\x00Link, empresse\x2010toi d'aller\nrecueillir les trois flammes sacrées\ndans ton épée !")
          		}
          	  case 1:
/*<145>*/ 		printf("\x0E\x01\x09\x04\x00\x03Recueille les trois flammes sacrées\ndans ton épée, et alors la porte du\ntemps s'ouvrira.\n\nLe <r<Chant de la Déesse >>qui se transmet\nà Célesbourg, ton village natal, te\nmettra sur la voie des flammes sacrées.\n\nRetourne à Célesbourg sans plus\nattendre !")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf("\x0E\x01\x09\x04\x00\x00Rattrape ce guignol,\nLink !\nFaut que tu sauves <b<Zelda>> !")
          }

