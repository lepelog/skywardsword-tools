          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 1, unk: 0, line: 40 */ "<0x10009:0x00000004>Tiens, <heroname> !\nT'as vu ces rails, dehors ?\n\n\n<0x10009:0x00000b00>Tu veux savoir à quoi ils servent ?\nHéhéhé ! Tu le sauras bien assez tôt !")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf(/* textboxtype: 1, unk: 0, line: 124 */ "<pause 30><0x10006:0xffcd>...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf(/* textboxtype: 1, unk: 0, line: 128 */ "Ça, c'est un bel arbre ! Je comprends\npourquoi on l'appelle l'arbre de vie !")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "Y a vraiment rien ici, c'est déprimant.\nQuand je pense que la vieille\nvit ici depuis des lustres...\n\nElle a jamais pensé à planter un arbre\ndans le coin ?")
          				  case 1:
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 125 */ "Quand je regarde mamie, je peux pas\nme résoudre à la laisser toute seule...\n\n\n<0x10009:0x00000a00>Surtout, va pas raconter à mes acolytes\nque je m'occupe d'une vieille, hein !")
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
/*<390>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<pause 30><0x10006:0xffcd>...")
          					  case 1:
/*<387>*/ 						printf(/* textboxtype: 1, unk: 0, line: 124 */ "<pause 30><0x10006:0xffcd>...")
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
/*<172>*/ 		printf(/* textboxtype: 1, unk: 0, line: 47 */ "<0x10009:0x0e00000a>Attends, <heroname> !\nTu ne dois pas utiliser l'<color red<éclat céleste\n>coloroff>maintenant !\n\nCela ne ferait que précipiter le réveil\ndu monstre.\n\n\nTu dois d'abord <color red<emprisonner la\ncréature >coloroff>! Tu as compris ?")
/*<173>*/ 		scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<332>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<154>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 153, 'param3': 32}
/*<153>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 155, 'param3': 32}
/*<155>*/ 		scene_flags[10 'Sealed Grounds'][26 /* 0x2 04 */] = true;
/*<459>*/ 		story_flags[796 /* us: 805A9B2F 0x10, jp: 805ACDAF 0x10 */] = true;
/*<460>*/ 		scene_flags[10 'Sealed Grounds'][36 /* 0x5 10 */] = true;
/*<477>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1010, 'next': 156, 'param3': 24}
/*<156>*/ 		wait_frames(10)
/*<157>*/ 		set_camera(20, 0)
/*<158>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1034, 'param2': 12800, 'next': 159, 'param3': 13}
/*<159>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3605, 'param2': -256, 'next': 275, 'param3': 13}
/*<275>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 99, 'next': 160, 'param3': 50}
/*<160>*/ 		printf(/* textboxtype: 1, unk: 0, line: 41 */ "<0x10009:0x040a321f><0x10008:0x01cd>OUAAAH !!!<0x10005:0x001e0000>")
/*<288>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3585, 'param2': -256, 'next': 287, 'param3': 13}
/*<287>*/ 		{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 284, 'param3': 50}
/*<284>*/ 		wait_frames(5)
/*<161>*/ 		set_camera(21, 0)
/*<162>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 356, 'next': 285, 'param3': 15}
/*<285>*/ 		wait_frames(1)
/*<286>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 		wait_frames(1)
/*<293>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1085, 'param2': 12800, 'next': 292, 'param3': 13}
/*<292>*/ 		{'type': 'type3', 'subType': 1, 'param1': 13, 'param2': 0, 'next': 163, 'param3': 40}
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0e00000a>Hmm... Il semble que <color red<le sceau ait à\nnouveau été brisé>coloroff>...\n\n\n<color red<La créature>coloroff> est sur le point de\ns'éveiller...\n\n\nElle a dû réagir à la <color red<puissance sacrée\n>coloroff>émanant de ton épée.\n\n\n<0x10009:0x0e010b00>C'est le prix à payer pour ouvrir\nla porte du temps. ")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf(/* textboxtype: 1, unk: 0, line: 43 */ "<0x10009:0x0e101600><0x30001:0x><heroname> !\nTu dois emprisonner ce monstre\nencore une fois.")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf(/* textboxtype: 1, unk: 0, line: 44 */ "<0x10009:0x0400030d>Ah, c'est pas trop tôt ! Ça va chauffer !")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x040f2f0f>Le moment de tester mon arme secrète\nest enfin arrivé !\n\n\nAvec ça, il va pas faire un pli, le gros\ntas d'écailles !\n\n\n<0x10009:0x040b3101>C'est pas le moment de rêvasser !\nJe pars devant ! Grouille‐toi !")
/*<291>*/ 		set_camera(22, 0)
/*<294>*/ 		{'type': 'type3', 'subType': 2, 'param1': 3, 'param2': 516, 'next': 295, 'param3': 14}
/*<295>*/ 		set_camera(51, 0)
/*<296>*/ 		wait_frames(30)
/*<179>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 466, 'param3': 24}
/*<466>*/ 		wait_frames(30)
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
/*<380>*/ 		printf(/* textboxtype: 1, unk: 3, line: 132 */ "<0x10006:0xffcd>Ce grand rouquin...\nIl est assez doué de ses mains.\n\n\nJe pourrais peut‐être lui demander\nde faire quelques réparations dans\nle temple...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf(/* textboxtype: 1, unk: 3, line: 131 */ "<0x10006:0xffcd>Ce temple jadis si calme est devenu\nbien animé...\n\n\nCe n'est pas le moment de penser à ça...\n\n\n\nCe que je craignais le plus s'est\nfinalement produit...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf(/* textboxtype: 1, unk: 3, line: 129 */ "<0x10006:0xffcd>J'espère qu'il pourra retrouver\nZelda à temps...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf(/* textboxtype: 1, unk: 3, line: 129 */ "<0x10006:0xffcd>J'espère qu'il pourra retrouver\nZelda à temps...")
          				  case 1:
/*<376>*/ 					printf(/* textboxtype: 1, unk: 3, line: 130 */ "<0x10006:0xfecd>.<pause 10>.<pause 10>.")
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
/*<475>*/ 			printf(/* textboxtype: 1, unk: 0, line: 88 */ "<0x10009:0x00000005>Tu cherches les trois dragons...?\nLe dragon de foudre devrait\nse trouver dans le désert...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000a><0x30001:0x><heroname> ! Toi et <color blue<Hergo>coloroff> devez\njoindre vos forces pour emprisonner\nla bête à nouveau !")
          				  case 1:
/*<481>*/ 					printf(/* textboxtype: 1, unk: 0, line: 86 */ "<color red<<0x10009:0x0000000a>Cette créature>coloroff> a recommencé à\ns'agiter. Le sceau créé par dame <color blue<Zelda\n>coloroff>dans son sommeil a bientôt atteint\nsa limite.\n<color blue<<0x30001:0x><heroname>>coloroff>, toi et <color blue<Hergo >coloroff>devez\njoindre vos forces pour emprisonner\nla bête à nouveau !\n\nJe compte sur vous !")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf(/* textboxtype: 1, unk: 0, line: 85 */ "<0x10009:0x00000005>Alors tu recherches les trois dragons ?\nUne fois le Chant du héros reconstitué,\nla voie vers la Triforce s'ouvrira à toi...\n\nSois prudent !")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf(/* textboxtype: 1, unk: 0, line: 68 */ "La clé pour trouver la Triforce se\ntrouve quelque part à <color blue<Célesbourg>coloroff>.\n\n\n<0x10009:0x0e000007>Va et trouve la Triforce !")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf(/* textboxtype: 1, unk: 0, line: 28 */ "<0x10009:0x0e000004>Attends, <heroname> ! Les\nphénomènes étranges que je perçois\nn'émanent pas de cette direction !")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf(/* textboxtype: 1, unk: 0, line: 29 */ "Nous n'avons pas de temps à perdre !\nSors par la porte en face et va voir\nce qui se passe dehors !")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "... À moins que tu ne veuilles rentrer\nà Célesbourg pour ajuster ton\néquipement ? Dans ce cas, je ne\nt'arrêterai pas, mais reviens vite !")
/*<350>*/ 	scene_flags[10 'Sealed Grounds'][107 /* 0xC 08 */] = true;
          }

          void entrypoint_501_27() {
/*<440>*/ 	start()
/*<444>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 476, 'param3': 32}
/*<476>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 445, 'param3': 32}
/*<445>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 446, 'param3': 17}
/*<446>*/ 	wait_frames(10)
/*<447>*/ 	{'type': 'type3', 'subType': 1, 'param1': 25, 'param2': 0, 'next': 441, 'param3': 40}
/*<441>*/ 	set_camera(3, 0)
/*<442>*/ 	wait_frames(15)
/*<443>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 9, 'next': 448, 'param3': 24}
/*<448>*/ 	wait_frames(10)
          }

          void entrypoint_501_10() {
/*< 59>*/ 	start()
/*< 61>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 60, 'param3': 32}
/*< 60>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 405, 'param3': 32}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 404, 'param3': 50}
          	flw_404:
/*<404>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0e000003>La créature a été enfermée\nà nouveau...")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	wait_frames(1)
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	wait_frames(5)
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	wait_frames(15)
/*< 63>*/ 	printf(/* textboxtype: 1, unk: 0, line: 49 */ "<0x30001:0x><heroname>...")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf(/* textboxtype: 1, unk: 0, line: 50 */ "... Et toi, <color blue<Hergo>coloroff>.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "C'est grâce à vous deux.")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 52 */ "<0x10009:0x0400000d>Héhé ! Arrête mamie, tu vas me faire\nrougir !\n\n\nEt puis, c'est toi qui m'as montré quoi\nfaire quand je pleurnichais comme\nun bon à rien.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf(/* textboxtype: 1, unk: 0, line: 53 */ "<0x10009:0x0e080b0b>C'est parce que tu en avais la force.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	wait_frames(10)
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0e000007><0x30001:0x><heroname> !\nIl est temps de te parler de la vraie\nnature de ce démon...\n\nSache qu'il est la source de tout le mal.\nLorsque tu auras passé la porte du\ntemps, tout sera clair...\n\n<0x10009:0x0e010b00>C'est un être terrifiant. On aura beau\nl'emprisonner, il parviendra toujours\nà briser les liens qui  l'entravent.\n\nPour en venir à bout, il faut éliminer\nson essence même.\n\n\n<0x10009:0x0e100b00>Dépêche‐toi, <heroname> !\nUtilise l'éclat céleste...")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf(/* textboxtype: 1, unk: 0, line: 55 */ "<0x10009:0x040d0206>Concentre la force dans ton épée et\n<color green<envoie >coloroff>l'éclat céleste dans la porte\ndu temps !")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf(/* textboxtype: 1, unk: 0, line: 56 */ "... C'est bien ça, mamie ?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0e010007>... En effet.\nVa, <heroname> !")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	wait_frames(1)
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf(/* textboxtype: 2, unk: 0, line: 133 */ "Cet endroit semble approprié pour\nplanter cette pousse, mais elle\nmettrait trop de temps à pousser\n<color red<à notre époque>coloroff>...")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf(/* textboxtype: 1, unk: 0, line: 97 */ "<0x10009:0x00000003><color blue<Hergo >coloroff>va te permettre de rejoindre\nla forêt.\n\n\n<0x30001:0x><heroname>, il a dû arriver\nquelque chose au <color red<dragon d'eau>coloroff>.\nPars à sa rencontre dans la forêt !")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0000000a>L'heure est enfin venue.\n\n\n\n<0x30001:0x><heroname> !\nRegagne Célesbourg et pars à la\nrecherche de la Triforce !")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf(/* textboxtype: 1, unk: 0, line: 103 */ "<0x10009:0x0000000a>Une fois que tu auras triomphé de la\ndernière épreuve, tu seras digne de\nrecevoir la Triforce.\n\nRegagne vite Célesbourg pour passer\ncette épreuve !")
          					  case 1:
/*<488>*/ 						printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000014>Excellent, <heroname> ! Tu as\nappris les mélodies des trois dragons.\n\n\nIl ne reste que peu de temps.\nDépêche‐toi de retourner dans\nle ciel et de compléter le Chant\ndu héros !")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf(/* textboxtype: 1, unk: 0, line: 101 */ "<0x10009:0x00000003><color blue<Hergo>coloroff> t'attend. Va le rejoindre <color red<près de\nsa machine>coloroff>.")
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 1, unk: 0, line: 100 */ "<0x10009:0x00000003>Tu tombes bien, <heroname>.\n\n\n\nJe crois qu'<color blue<Hergo>coloroff> t'attend.\n\n\n\nVa le retrouver <color red<près de sa machine>coloroff>.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000007>C'est incroyable, ce qui s'est passé\ndans la forêt...\nMais heureusement, tout est rentré\ndans l'ordre.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000003>Au fait, <heroname>, <color blue<Hergo\n>coloroff>t'attend.\n\n\nVa le rejoindre <color red<près de sa catapulte>coloroff>.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000a>Tu dois continuer et retrouver les\nautres mélodies du <color red<Chant du héros>coloroff>.\nLe temps presse !")
          		  case 1:
/*<221>*/ 			printf(/* textboxtype: 1, unk: 0, line: 98 */ "<0x10009:0x00000007>C'est incroyable, ce qui s'est passé\ndans la forêt...\nMais heureusement, tout est rentré\ndans l'ordre.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 1, unk: 2, line: 117 */ "<sound 6>Tu te débrouilles assez bien, je vois.\n\n\n\nBien, passons à la suite !")
/*<271>*/ 	printf(/* textboxtype: 1, unk: 2, line: 118 */ "Maintenant, joue en suivant les\nmouvements du <color red<cercle de lumière >coloroff>!\n\n\nJe vais t'accompagner au chant.\n\n\n\nCe chant te sera nécessaire pour la\nsuite de ta quête.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf(/* textboxtype: 1, unk: 0, line: 82 */ "<0x10009:0x000d0f0a>Ah, cet arbre est vraiment\nmajestueux ! Il est comme le symbole\nde ce temple !\n\n<0x10009:0x00030200>Rien qu'à le regarder, ça me donne\nune pêche d'enfer !")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x000d022e>OK, t'as planté la pousse...<pause 20>\nMais <color red<à cette époque>coloroff>, pour que ça\ndevienne un arbre, ça va prendre\nun sacré bout de temps...")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf(/* textboxtype: 1, unk: 0, line: 83 */ "<0x10009:0x000d0204>Ooh ! <0x30001:0x><heroname> !\nC'est une belle pousse que t'as là !\n\n\n<0x10009:0x00000e0e>Elle pourrait donner un bel arbre qui\nrentrerait tout pile ici.\n\n\n<0x10009:0x00030200>Mais...<pause 10> Je me demande combien\nd'années ça va prendre avant que\nça devienne un grand arbre...")
          					  case 1:
/*<255>*/ 						printf(/* textboxtype: 1, unk: 0, line: 80 */ "<0x10009:0x00000002>Le sort de <color blue<Zelda >coloroff>est entre tes mains,\n<heroname> !\n\n\nSinon, je me disais que <color red<je ferais bien\npousser >coloroff>un grand arbre ici. T'aurais\npas une graine ou quelque chose dans\nle genre ?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf(/* textboxtype: 1, unk: 0, line: 61 */ "<0x10009:0x000c0206><color blue<Zelda>coloroff> t'attend derrière cette porte !\n\n\n\nAllez, grouille‐toi, <heroname> !")
          		}
          	  case 1:
/*<465>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x000c020d>Il faut que tu concentres la force dans\nton épée et que tu <color green<envoies>coloroff> l'éclat\ncéleste dans la porte !\n\n<color blue<Zelda>coloroff> t'attend de l'autre côté !\n\n\n\nAllez, vas‐y, <heroname> !")
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
/*<322>*/ 	wait_frames(15)
/*<361>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1009, 'next': 56, 'param3': 24}
/*< 56>*/ 	printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x0400003d>Hein ?! Qu'est‐ce que tu racontes,\nmamie ?!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	wait_frames(30)
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf(/* textboxtype: 1, unk: 0, line: 17 */ "<0x10009:0x04000002>Tu te paies ma tête ?!\nRépète un peu pour voir !")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0e00000a>Malheureusement, tu n'es pas celui\nqui pourra sauver la prêtresse...\n<color blue<Zelda>coloroff>...\n\nCe rôle a été attribué il y a déjà fort\nlongtemps. Pour sauver le monde...")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 1, unk: 0, line: 19 */ "<0x10009:0x0400003e><0x10008:0x01cd>La ferme !\n\n\n\nMoi, le grand <color blue<Hergo>coloroff>, je pourrais pas\nsauver <color blue<Zelda>coloroff> ? Ridicule !\n\n\nSi je peux pas la sauver, alors pourquoi\nje suis venu jusqu'ici, hein ?\n\n\nEt puis, qui d'autre que moi pourrait\nla sauver ?!")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	wait_frames(15)
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 1, unk: 0, line: 20 */ "<0x10009:0x0400001e>......!")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	wait_frames(10)
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	wait_frames(30)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x04003218>... Je vois.\n\n\n\n<0x10009:0x040d0a00>Tu veux dire que c'est lui qui va\nsauver <color blue<Zelda>coloroff> ?\n\n\n<0x30001:0x><heroname>...")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	wait_frames(1)
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf(/* textboxtype: 1, unk: 0, line: 22 */ "<0x10009:0x0400003c>Me fais pas rire ! Je m'en fiche que ce\nsoit ta mission ou je sais pas quoi !\nJ'accepterai jamais ça !\n\n<0x10009:0x040b0a00>Tu m'entends ? Jamais !")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf(/* textboxtype: 1, unk: 0, line: 23 */ "<0x10009:0x04000038><0x10008:0x01cd>OUAAAAAAAH !!!<0x10005:0x002d0000>")
/*< 39>*/ 	wait_frames(35)
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	wait_frames(30)
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	wait_frames(15)
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 0, line: 24 */ "<0x10009:0x0e000008>... <0x30001:0x><heroname>.\nTu as pu voir <color blue<Zelda>coloroff> ?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf(/* textboxtype: 1, unk: 0, line: 25 */ "<0x10009:0x0e0eff05>... Je vois. Elle était là, elle aussi.\n\n\n\nCette femme que tu as vue aux côtés\nde Zelda se nomme <color blue<Impa>coloroff>...\n\n\nElle a été envoyée par la <color blue<Déesse >coloroff>pour\nservir Zelda.")
/*< 50>*/ 	printf(/* textboxtype: 1, unk: 0, line: 26 */ "Pour accomplir la mission que la\nDéesse leur a confiée, Zelda et Impa\nse sont mises en route vers un lieu\nparticulier...\nMais maintenant qu'Impa a détruit\nla porte qu'elles ont empruntée, il\nn'existe plus qu'un seul moyen de les\nrejoindre. ")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0e0eff00>Tu dois utiliser le pouvoir de la <color blue<lyre\n>coloroff>que Zelda t'a confiée...")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf(/* textboxtype: 1, unk: 0, line: 112 */ "<0x10009:0x0e000008>Dis‐moi, <heroname>,\nsais‐tu jouer de la <color blue<lyre>coloroff> ?\n\n\nVisiblement, non.\n\n\n\nTrès bien, je vais t'apprendre.\nSuis mes instructions.\n\n\nTout d'abord, sors ta lyre avec (^)\npuis prépare‐toi à jouer en appuyant\nsur (A).<0x10011:0x08cd>")
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
/*<134>*/ 	printf(/* textboxtype: 1, unk: 0, line: 34 */ "<0x10009:0x0010160f>Oh, ton épée...!\n\n\n\n<0x10009:0x00000b00>Sa lame a été purifiée par les trois\nflammes. Bravo, <heroname> !\nTon épée déborde d'une grande\npuissance...")
/*<135>*/ 	printf(/* textboxtype: 1, unk: 0, line: 35 */ "<0x10009:0x0001ff07>Cette puissance... Oui !\nC'est la <color red<force>coloroff>...\n\n\n<0x10009:0x00000b00>La puissance sacrée que les anciens\ndieux ont insufflée en ce monde...\nLa grande puissance que mentionne\nle Chant de la Déesse...\nC'est elle qui circule à présent en toi\net dans ton épée. Ça ne fait aucun\ndoute.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00001603>Bien, <heroname> !\nL'heure est venue d'ouvrir la porte\ndu temps !")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	wait_frames(1)
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf(/* textboxtype: 1, unk: 0, line: 37 */ "Avec cette puissance... Avec la <color red<force>coloroff>,\nil ne fait aucun doute que l'<color red<éclat céleste>coloroff>\npourra activer la porte du temps.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf(/* textboxtype: 1, unk: 0, line: 38 */ "Depuis cette estrade, <color green<insuffle la force\nde ton épée >coloroff>à la porte du temps !")
/*<142>*/ 	scene_flags[10 'Sealed Grounds'][80 /* 0xB 01 */] = true;
/*<370>*/ 	scene_flags[10 'Sealed Grounds'][57 /* 0x6 02 */] = false;
/*<469>*/ 	scene_flags[10 'Sealed Grounds'][30 /* 0x2 40 */] = false;
/*<139>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_18() {
/*< 81>*/ 	start()
/*< 82>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 310, 'param3': 32}
/*<310>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 437, 'param3': 50}
/*<437>*/ 	wait_frames(5)
/*<428>*/ 	set_camera(2, 0)
/*< 85>*/ 	printf(/* textboxtype: 1, unk: 0, line: 62 */ "<0x10009:0x0e010103>Tu es de retour, <heroname>...")
/*<311>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 429, 'param3': 17}
/*<429>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 430, 'param3': 47}
/*<430>*/ 	{'type': 'type3', 'subType': 2, 'param1': 7, 'param2': 356, 'next': 431, 'param3': 15}
/*<431>*/ 	wait_frames(1)
/*<432>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 14, 'next': 433, 'param3': 17}
/*<433>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 435, 'param3': 17}
/*<435>*/ 	wait_frames(5)
/*<434>*/ 	set_camera(32, 0)
/*<436>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 86, 'param3': 48}
/*< 86>*/ 	wait_frames(15)
/*<461>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1015, 'next': 87, 'param3': 24}
/*< 87>*/ 	printf(/* textboxtype: 1, unk: 0, line: 63 */ "Alors tu sais tout, à présent.")
/*< 83>*/ 	set_camera(30, 0)
/*< 84>*/ 	printf(/* textboxtype: 1, unk: 0, line: 64 */ "Derrière cette porte, <color blue<Zelda>coloroff> est plongée\ndans un profond sommeil.\n\n\nNe crains rien, elle est toujours en vie.")
/*<439>*/ 	wait_frames(30)
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf(/* textboxtype: 1, unk: 0, line: 65 */ "Comme le dit la légende, la Déesse a\ndissimulé la <color yellow white<Triforce>coloroff>, la puissance\nqui éliminera l'Avatar du Néant, à\nCélesbourg.\n<0x10009:0x0e010b00>Mais nul n'en connaît l'emplacement\nexact. <pause 15>Il n'a jamais été révélé...")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x0e140b00><0x30001:0x><heroname> ! Comme tu l'auras\ncompris...\n\n\nLa clé pour trouver la Triforce se\ntrouve quelque part à <color blue<Célesbourg>coloroff>.")
/*<315>*/ 	printf(/* textboxtype: 1, unk: 0, line: 67 */ "<0x10009:0x0e080b07>Va et trouve la Triforce !")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x0401ff04><0x10008:0x01cd>Hé ! Pas si vite !")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf(/* textboxtype: 1, unk: 0, line: 70 */ "<0x10009:0x0403ff00><0x30001:0x><heroname> !\nJ'ai deux mots à te dire !")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	wait_frames(5)
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	wait_frames(75)
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x0403ff02>Dis... <color blue<Zelda>coloroff>... Elle va bien ?\n[1-]Oui[2-]En fait...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 72 */ "C'est vrai ? Tant mieux.\n\n\n\n<0x10009:0x04030200>Mais... c'est pas encore fini, hein ?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf(/* textboxtype: 1, unk: 0, line: 74 */ "<0x10009:0x040e0d09>Tu sais, <heroname>, j'ai décidé\nque je rentrerai pas à Célesbourg.\n\n\n<0x10009:0x04000200>Je vais vivre ici avec la vieille.")
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0400ff0d>Héhé... Fais pas cette tête.\nC'est ma décision.\n\n\n<0x10009:0x04000200>Comment dire... J'ai le sentiment que\nj'ai encore des trucs à faire ici.\n\n\nIl faut surveiller le gros monstre, <0x10009:0x04000211>et\npuis il faut s'occuper de mamie...\nEnfin, tu vois, quoi !\n\nC'est peut‐être pas aussi classe que\nta mission, mais c'est quand même\nun sacré boulot !")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf(/* textboxtype: 1, unk: 0, line: 76 */ "<0x10009:0x04030d08>Et puis, je me plais bien ici.\n\n\n\nC'était sympa de vivre dans le ciel,\nmais j'aime bien avoir les pieds sur\nterre !")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf(/* textboxtype: 1, unk: 0, line: 77 */ "<0x10009:0x040d0209>Regarde ça !")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x04040208>Grâce à Zelda et mamie, cette terre est\nà nouveau pleine de vie.\n\n\n<color red<Si on plantait une pousse >coloroff>ici, je suis sûr\nqu'elle deviendrait un grand arbre\ncostaud.\n\nEt peut‐être que cet endroit serait un\npeu plus animé.\n\n\n<0x10009:0x040d0211>Enfin, ça prend des années pour qu'un\narbre soit bien grand. Mais faut savoir\nêtre patient, des fois.\n\n<0x10009:0x04000012>C'est comme ça que je vois les choses\nen ce moment.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf(/* textboxtype: 1, unk: 0, line: 79 */ "<0x10009:0x040d022e>Et donc... Euh... Comment dire...\n\n\n\nSi tu retournes à Célesbourg, passe le\nbonjour à tout le monde de ma part.\n\n\n<0x10009:0x04000e00>Mes compères s'en remettront\nsûrement pas. Mais dis‐leur que\nje me plais bien ici.\n\n<0x10009:0x04000209>Je compte sur toi, <heroname> !")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 1, unk: 0, line: 73 */ "<0x10009:0x04001400>Je vois... C'est pas la joie, ce qui lui est\narrivé...\n\n\n<0x10009:0x04030200>Mais, tu vas arranger ça, hein ?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0000000a>Nous poursuivrons notre conversation\nplus tard. Pour le moment, va dehors !")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 1, unk: 0, line: 14 */ "<0x10009:0x00000003>Je suppose que tu l'as déjà vu, mais\nquelque chose est scellé au fond du\nvallon en spirale, dehors.\n\nPour l'heure, tu n'as pas besoin d'en\nsavoir davantage mais bientôt, le\nmoment viendra...")
          		}
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00001303>La porte menant à la <color red<forêt de Firone>coloroff>\nest ouverte. Sors par la porte à ma\ngauche et continue tout droit pour\naccéder à la forêt.\nTôt ou tard, toute la vérité se révélera\nà toi... Poursuis ta route sans crainte,\n<heroname>.")
          	}
          }

          void entrypoint_501_19() {
/*<210>*/ 	start()
/*<326>*/ 	set_camera(55, 0)
/*<359>*/ 	wait_frames(15)
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': 1, 'next': 327, 'param3': 40}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 100, 'next': 328, 'param3': 14}
/*<328>*/ 	wait_frames(15)
/*<329>*/ 	set_camera(59, 0)
/*<336>*/ 	wait_frames(30)
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001><0x10006:0xfecd>Ooh...<pause 15>\nBienvenue à toi, jeune élu descendu\ndes cieux par‐delà la mer de nuages.")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	wait_frames(45)
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	wait_frames(15)
/*<337>*/ 	printf(/* textboxtype: 1, unk: 0, line: 1 */ "<0x10009:0x00000008><0x10006:0xfecd>Quel est ton nom ?\n\n\n\n... <pause 40><0x30001:0x><heroname> ?\nHmm... <0x30001:0x><heroname>...\n\n\nTu sembles maîtriser <sound 4>l'<color red<éclat céleste>coloroff>,\ncette puissance sacrée qui emplit ta\nlame lorsque tu la <color green<brandis vers le ciel>coloroff>.\n\n<0x10009:0x0000000b>C'est la preuve que tu es digne de\nl'<color blue<épée divine >coloroff>que tu portes dans\nton dos.\n\n<0x10006:0xffcd>J'attends ici ton arrivée depuis des\nlunes et des lunes. Je serai ton guide...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf(/* textboxtype: 1, unk: 0, line: 2 */ "Nous sommes ici dans le <color blue<temple du\nsceau>coloroff>, bâti par la Déesse à une époque\nimmémoriale.\n\nIl était écrit depuis fort longtemps\ndéjà que tu viendrais ici...\n\n\nLa jeune prêtresse que tu recherches\nest elle aussi descendue en ces terres\ndans un rai de lumière il y a peu.\n\nTout cela était écrit...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	wait_frames(15)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Mais c'est d'une manière bien\ndifférente de ce qui était prédit\nque la prêtresse est arrivée jusqu'ici.\n\nUne puissance maléfique œuvre pour\ntenter de changer votre destinée...")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf(/* textboxtype: 1, unk: 0, line: 4 */ "<0x10009:0x000eff08><0x30001:0x><heroname>...<pause 30>\nEs‐tu préoccupé par l'avenir de la\nprêtresse ?\n\n... Pourtant, tu ne dois penser qu'à\naller de l'avant. Elle a un grand\ndestin à accomplir. Tout comme toi.\n\nElle s'est dirigée vers la <color blue<forêt de\nFirone >coloroff>pour en apprendre davantage\nsur son rôle. Pars à sa suite.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x000eff00>... Regarde ta carte.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	wait_frames(20)
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf(/* textboxtype: 1, unk: 1, line: 6 */ "La (X) indique la route qui mène à la\n<color blue<forêt de Firone>coloroff>.\n\n\nMais il serait imprudent de t'aventurer\ndans cette forêt inconnue infestée de\nmonstres avec une simple carte.\n\nJe vais te donner le pouvoir de poser\ndes <color red<balises>coloroff>.\n\n\nEn posant une <color red<balise >coloroff>sur ta carte,\nun pilier de lumière apparaîtra\nà l'endroit correspondant, ce qui\nfacilitera ton orientation.\nAllez, pointe l'endroit marqué d'une\n(X) et appuie sur (C) pour y poser une\nbalise. <0x10011:0x06cd>")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf(/* textboxtype: 1, unk: 0, line: 7 */ "<0x10009:0x00000003>Elle n'est pas visible d'ici, mais ta\nbalise a bien été posée. Tu pourras\nle constater de tes yeux lorsque tu\nseras dehors.\nLorsque tu n'auras plus besoin de la\nbalise, ouvre ta carte, pointe la balise\net appuie sur (C) pour l'effacer.<0x10011:0x06cd>\n\nTâche de ne pas te perdre.")
/*<194>*/ 		printf(/* textboxtype: 1, unk: 0, line: 9 */ "<0x10009:0x000eff03>Allez, rends‐toi dans la forêt de Firone.\nPars sur les traces de la prêtresse...\n<color blue<Zelda>coloroff>.\n\nTu peux aussi prendre le contenu du\n<color red<coffre >coloroff>qui est dans cette salle. Il te sera\nsûrement utile lors de ton aventure.")
/*<195>*/ 		scene_flags[10 'Sealed Grounds'][83 /* 0xB 08 */] = true;
/*<198>*/ 		wait_frames(1)
/*<196>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 197, 'param3': 32}
/*<197>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 199, 'param3': 17}
/*<199>*/ 		set_camera(40, 0)
/*<358>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 279, 'param3': 13}
/*<279>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 200, 'param3': 17}
/*<200>*/ 		make_actor_do_something(0, 0)
/*<201>*/ 		set_camera(41, 0)
/*<202>*/ 		wait_frames(40)
/*<203>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 205, 'param3': 24}
/*<205>*/ 		wait_frames(45)
/*<204>*/ 		set_camera(42, 0)
/*<206>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "Sors par cette porte, la forêt sera\nalors droit devant. Sois prudent.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		wait_frames(10)
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf(/* textboxtype: 1, unk: 0, line: 13 */ "<0x10009:0x00001303>Tôt ou tard, toute la vérité se révélera\nà toi... Pour le moment, poursuis ta\nroute sans crainte, <heroname> !")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000006>Il n'y a pas de balise à l'endroit indiqué\npar la (X).\n\n\nPour effacer une balise que tu as\nposée, pointe‐la avec le curseur\net appuie sur (C).<0x10011:0x06cd>\n\nSi tu veux poser une balise de façon\nplus précise, tu peux agrandir ta carte\navec (A).")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		wait_frames(20)
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf(/* textboxtype: 1, unk: 0, line: 10 */ "Allez, pointe l'endroit indiqué par\nla (X) et appuie sur (C) pour poser\nune balise.<0x10011:0x06cd>")
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
/*< 10>*/ 	printf(/* textboxtype: 1, unk: 2, line: 16 */ "<0x10009:0x0400003d>Hein ?! Qu'est‐ce que tu racontes,\nmamie ?!")
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
/*<413>*/ 	printf(/* textboxtype: 1, unk: 0, line: 89 */ "<0x10009:0x0e000003>Tu as emprisonné ce monstre par\ntrois fois...")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	wait_frames(1)
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	wait_frames(5)
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	wait_frames(15)
/*<412>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x30001:0x><heroname>... Hergo... Vous avez\nà nouveau fait preuve d'une grande\nbravoure.\n\nMais le démon se libère de plus en plus\nfréquemment... Tu dois faire vite,\n<heroname> !\n\nDis‐moi, as‐tu trouvé une piste quant\nà l'endroit où est cachée la Triforce ?\n\n\n[1-]Oui[2-]Eh bien...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf(/* textboxtype: 1, unk: 0, line: 91 */ "...<pause 25>\nHmm...\n\n\nLorsque tu auras trouvé les trois\ndragons et reconstitué le Chant du\nhéros, la route vers la Triforce\ns'ouvrira...\nLe dragon le plus proche se trouve dans\nla <color blue<forêt de Firone>coloroff>...\n\n\n<0x10009:0x0e00000a>Mais il s'y est produit quelque chose\nde peu commun.\n\n\n<0x10009:0x0e010b00>J'ignore comment c'est arrivé,\nmais il y a peu...\n\n\n... le chemin qui mène à la forêt de\nFirone s'est retrouvé inondé.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf(/* textboxtype: 1, unk: 0, line: 92 */ "J'ai donc fermé la <color red<porte qui mène à\nla forêt >coloroff>et posé un sceau élémentaire\npour arrêter l'eau...\n\nMais maintenant, on ne peut plus\nl'ouvrir, sinon l'eau inondera le\nvallon...\n\nLe problème est donc de savoir\ncomment tu vas pouvoir te rendre\ndans la forêt de Firone...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x0400000d>Héhé ! On dirait que c'est à moi\nd'entrer en jeu !\n\n\nPendant qu'on combattait, j'ai pensé à\nune nouvelle manière d'utiliser ma\n<color red<mégatapulte>coloroff> !\n\nSi tu montes dedans et que je tire à\npleine puissance, t'arriveras dans\nla forêt en un clin d'œil !")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf(/* textboxtype: 1, unk: 0, line: 94 */ "<0x10009:0x040c0202>Je sors préparer l'engin !\nSuis‐moi, <heroname> !")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	wait_frames(15)
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf(/* textboxtype: 1, unk: 0, line: 95 */ "<0x10009:0x0e00000b>Eh bien...\n\n\n\nOn peut vraiment compter sur lui.\nMais arriverai‐je à supporter son\ncaractère très longtemps...?")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x0e08ff00>Bien, <heroname>.\nSois prudent.")
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
/*<471>*/ 					printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x0000000a>... <0x30001:0x><heroname> !\nÀ présent, tu es le seul qui puisses faire\nquelque chose. Le sort du monde est\nentre tes mains !\nJe t'en prie ! Tu dois nous sauver !")
          				  case 1:
/*<472>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000014>Tout à l'heure, <color blue<Hergo>coloroff> s'est précipité\ndehors !\n\n\nJ'imagine qu'il est encore à sa\n<color red<catapulte>coloroff>.")
          				}
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x0000000a>... <0x30001:0x><heroname> !\nÀ présent, tu es le seul qui puisses faire\nquelque chose. Le sort du monde est\nentre tes mains !\nJe t'en prie ! Tu dois nous sauver !")
          			}
          		  case 1:
/*<247>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000009>Comment ?!\nL'<color blue<Avatar du Néant >coloroff>est revenu à la\nvie...!\n\nAah... C'est terrible...\nSi on ne fait rien, c'en est fini de\nnotre monde...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10009:0x0000000a>... <0x30001:0x><heroname> !\nÀ présent, tu es le seul qui puisses faire\nquelque chose. Le sort du monde est\nentre tes mains !\nJe t'en prie ! Tu dois nous sauver !")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 1, unk: 0, line: 107 */ "<0x10009:0x0000000d><0x30001:0x><heroname> !\nTu dois absolument empêcher la\nrésurrection de l'Avatar du Néant\ndans le monde du passé !\nOuvre vite la porte du temps pour\nte rendre dans le passé ! ")
          		  case 1:
/*<241>*/ 			printf(/* textboxtype: 1, unk: 0, line: 106 */ "<0x10009:0x00000009>Aaah... Quelle tragédie...!\nAlors que nous pensions avoir enfin\ntriomphé, dame <color blue<Zelda >coloroff>s'est fait\nenlever !\n<0x30001:0x><heroname> !\nTu dois absolument empêcher la\nrésurrection de l'Avatar du Néant\ndans le monde du passé !\nOuvre vite la porte du temps pour\nte rendre dans le passé !")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 2, unk: 0, line: 33 */ "« <color blue<Le Chant de la Déesse>coloroff> ».\nIl est très probable qu'il s'agisse du\nchant que chantait dame Zelda le\njour de la chevauchée céleste.\nLa probabilité d'obtenir des\ninformations sur les paroles de ce\nchant à l'école de chevalerie est\nde 85 %.")
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
/*<214>*/ 							printf(/* textboxtype: 1, unk: 0, line: 59 */ "<0x10009:0x00101606>Que fais‐tu, <heroname> ?\nAs‐tu fait ce que tu avais à faire de\nl'autre côté de la porte ?\n\n<0x10009:0x00140b00>Alors, traverse cette porte !")
          						  case 1:
/*<152>*/ 							printf(/* textboxtype: 1, unk: 0, line: 58 */ "<0x10009:0x00100003>Allez, <heroname> !\nOuvre la porte du temps et rends‐toi\nde l'autre côté !")
          						}
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 46 */ "<0x10009:0x0000000a>La créature est sur le point de\ns'éveiller.\n\n\n<0x30001:0x><heroname> ! Tu dois\nl'emprisonner à nouveau !")
          					}
          				  case 1:
/*<143>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000007>Avec cette puissance... Avec la <color red<force>coloroff>,\nil ne fait aucun doute que l'<color red<éclat céleste>coloroff>\npourra activer la porte du temps.\n\nDepuis cette estrade, <color green<insuffle la force\nde ton épée >coloroff>à la porte du temps !")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf(/* textboxtype: 1, unk: 0, line: 32 */ "<0x10009:0x0000000a>Tôt ou tard, ce monstre brisera à\nnouveau le sceau...\n\n\nHergo semble réfléchir à un plan pour\ns'y préparer.\n\n\n<0x30001:0x><heroname>, empresse‐toi d'aller\nrecueillir les trois flammes sacrées\ndans ton épée !")
          		}
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 1, unk: 0, line: 31 */ "<0x10009:0x00000003>Recueille les trois flammes sacrées\ndans ton épée, et alors la porte du\ntemps s'ouvrira.\n\nLe <color red<Chant de la Déesse >coloroff>qui se transmet\nà Célesbourg, ton village natal, te\nmettra sur la voie des flammes sacrées.\n\nRetourne à Célesbourg sans plus\nattendre !")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000000>Rattrape ce guignol,\n<heroname> !\nFaut que tu sauves <color blue<Zelda>coloroff> !")
          }

