          void entrypoint_501_07() {
/*<250>*/ 	start()
/*<251>*/ 	printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000004>Tiens, <heroname>!\nT'as vu les rails que j'ai installés, dehors?\n\n\n<0x10009:0x00000b00>Tu veux savoir à quoi ils servent?\nHéhéhé! Tu le sauras bien assez vite!")
          }

          void entrypoint_501_24() {
/*<345>*/ 	start()
/*<382>*/ 	switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          	  case 0:
/*<386>*/ 		switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          		  case 0:
/*<389>*/ 			set_camera(64, 0)
/*<391>*/ 			printf(/* textboxtype: 0, unk: 1, line: 124 */ "<pause 30><0x10006:0xffcd>...")
          		  case 1:
          			flw_347:
/*<347>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 453, 'param3': 32}
/*<453>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<454>*/ 				printf(/* textboxtype: 0, unk: 0, line: 128 */ "Ça, c'est un bel arbre! Je comprends pourquoi\non l'appelle l'arbre de vie!")
          			  case 1:
/*<457>*/ 				check_item_flag(497, 1)
/*<456>*/ 				switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 72}) {
          				  case 0:
/*<455>*/ 					printf(/* textboxtype: 1, unk: 0, line: 126 */ "Y a vraiment rien ici, c'est déprimant. Quand\nje pense que Mémé vit ici depuis des lustres...\n\n\nElle a jamais pensé à planter un arbre dans\nle coin?")
          				  case 1:
/*<458>*/ 					printf(/* textboxtype: 0, unk: 0, line: 125 */ "Quand je regarde Mémé, je me dis que je ne\nserais pas capable de la laisser toute seule...\n\n\n<0x10009:0x00000a00>Surtout, va pas raconter à mes gars que\nje m'occupe d'une vieille, hein!")
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
/*<390>*/ 						printf(/* textboxtype: 0, unk: 1, line: 124 */ "<pause 30><0x10006:0xffcd>...")
          					  case 1:
/*<387>*/ 						printf(/* textboxtype: 0, unk: 1, line: 124 */ "<pause 30><0x10006:0xffcd>...")
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
/*<172>*/ 		printf(/* textboxtype: 0, unk: 0, line: 47 */ "<0x10009:0x0e00000a>Attends, <heroname>! Tu ne dois pas\nutiliser l'<color red<éclat céleste >coloroff>maintenant!\n\n\nCela ne ferait que précipiter le réveil\ndu monstre.\n\n\nTu dois d'abord <color red<emprisonner la créature>coloroff>!\nTu as compris?")
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
/*<160>*/ 		printf(/* textboxtype: 0, unk: 0, line: 41 */ "<0x10009:0x040a321f><0x10008:0x01cd>OUAAAH!!!<0x10005:0x001e0000>")
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
/*<163>*/ 		printf(/* textboxtype: 1, unk: 0, line: 42 */ "<0x10009:0x0e00000a>Hmm... Il semble que <color red<le sceau ait à nouveau\nété brisé>coloroff>...\n\n\n<color red<La créature>coloroff> est sur le point de s'éveiller...\n\n\n\nElle a dû réagir à la <color red<puissance sacrée >coloroff>émanant\nde ton épée.\n\n\n<0x10009:0x0e010b00>C'est le prix à payer pour ouvrir la porte\ndu temps. ")
/*<165>*/ 		set_camera(22, 0)
/*<164>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x0e101600><0x30001:0x><heroname>! Tu dois emprisonner\nce monstre encore une fois.")
/*<276>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 167, 'param3': 50}
/*<167>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 166, 'param3': 13}
/*<166>*/ 		printf(/* textboxtype: 0, unk: 0, line: 44 */ "<0x10009:0x0400030d>Ah, c'est pas trop tôt! Ça va barder!")
/*<290>*/ 		set_camera(50, 0)
/*<289>*/ 		printf(/* textboxtype: 1, unk: 0, line: 45 */ "<0x10009:0x040f2f0f>Le moment de tester mon arme secrète est\nenfin arrivé! Avec ça, il n'ira pas loin, le gros\ntas d'écailles!\n\n<0x10009:0x040b3101>C'est pas le moment de flâner!\nJe pars devant! Grouille‐toi!")
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
/*<380>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10006:0xffcd>Ce grand rouquin...\nIl est assez doué de ses mains.\n\n\nJe pourrais peut‐être lui demander de faire\nquelques réparations dans le temple...")
          	  case 1:
/*<375>*/ 		switch (story_flags[140 /* us: 805A9AE7 0x04, jp: 805ACD67 0x04 */]) {
          		  case 0:
/*<379>*/ 			printf(/* textboxtype: 0, unk: 0, line: 131 */ "<0x10006:0xffcd>Ce temple jadis si calme est devenu bien\nanimé...\n\n\nCe n'est pas le moment de penser à ça...\n\n\n\nCe que je craignais le plus s'est finalement\nproduit...")
          		  case 1:
/*<374>*/ 			switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          			  case 0:
/*<378>*/ 				printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10006:0xffcd>J'espère qu'il pourra retrouver Zelda à temps...")
          			  case 1:
/*<373>*/ 				switch (story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */]) {
          				  case 0:
/*<377>*/ 					printf(/* textboxtype: 1, unk: 0, line: 129 */ "<0x10006:0xffcd>J'espère qu'il pourra retrouver Zelda à temps...")
          				  case 1:
/*<376>*/ 					printf(/* textboxtype: 0, unk: 1, line: 130 */ "<0x10006:0xfecd>.<pause 10>.<pause 10>.")
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
/*<475>*/ 			printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000005>Tu cherches les trois dragons...? Le dragon\nde foudre devrait se trouver dans le désert...")
          		  case 1:
/*<480>*/ 			switch (story_flags[145 /* us: 805A9AEE 0x08, jp: 805ACD6E 0x08 */]) {
          			  case 0:
/*<484>*/ 				switch (scene_flags[95 /* 0xA 80 */]) {
          				  case 0:
/*<483>*/ 					printf(/* textboxtype: 1, unk: 0, line: 87 */ "<0x10009:0x0000000a><0x30001:0x><heroname>! Toi et <color blue<Hergo>coloroff> devez joindre\nvos forces pour emprisonner la bête à nouveau!")
          				  case 1:
/*<481>*/ 					printf(/* textboxtype: 0, unk: 0, line: 86 */ "<0x10009:0x0000000a>Ce<color red< monstre>coloroff> a recommencé à s'agiter. Le sceau\ncréé par dame <color blue<Zelda >coloroff>dans son sommeil a\nbientôt atteint sa limite.\n\n<color blue<<0x30001:0x><heroname>>coloroff>, toi et <color blue<Hergo >coloroff>devez joindre\nvos forces pour emprisonner la bête à nouveau!\n\n\nJe compte sur vous!")
/*<482>*/ 					scene_flags[10 'Sealed Grounds'][95 /* 0xA 80 */] = true;
          				}
          			  case 1:
/*<217>*/ 				printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000005>Alors tu recherches les trois dragons? Une fois\nle Chant du héros reconstitué, la voie vers la\nTriforce s'ouvrira à toi...\n\nSois prudent!")
          			}
          		}
          	  case 1:
/*<215>*/ 		printf(/* textboxtype: 0, unk: 0, line: 68 */ "La clé pour trouver la Triforce se trouve\nquelque part à <color blue<Célesbourg>coloroff>.\n\n\n<0x10009:0x0e000007>Va et trouve la Triforce!")
          	}
          }

          void entrypoint_501_26() {
/*<349>*/ 	start()
/*<357>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 14, 'next': 356, 'param3': 32}
/*<356>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 353, 'param3': 50}
/*<353>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x0e000004>Attends, <heroname>! Les phénomènes\nétranges que je perçois n'émanent pas de\ncette direction!")
/*<354>*/ 	set_camera(62, 0)
/*<352>*/ 	printf(/* textboxtype: 0, unk: 0, line: 29 */ "Nous n'avons pas de temps à perdre! Sors par la\nporte en face et va voir ce qui se passe dehors!")
/*<355>*/ 	set_camera(-1, 0)
/*<351>*/ 	printf(/* textboxtype: 1, unk: 0, line: 30 */ "... À moins que tu ne veuilles rentrer à\nCélesbourg pour ajuster ton équipement?\nDans ce cas, je ne t'arrêterai pas, mais\nreviens vite!")
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
/*<404>*/ 	printf(/* textboxtype: 1, unk: 0, line: 48 */ "<0x10009:0x0e000003>La créature a été enfermée à nouveau...")
/*<399>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 400, 'param3': 47}
/*<400>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 402, 'param3': 15}
/*<402>*/ 	wait_frames(1)
/*<401>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 406, 'param3': 17}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 408, 'param3': 50}
/*<408>*/ 	set_camera(26, 0)
/*<409>*/ 	wait_frames(5)
/*<403>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 407, 'param3': 48}
/*<407>*/ 	wait_frames(15)
/*< 63>*/ 	printf(/* textboxtype: 0, unk: 2, line: 49 */ "Tu as ma gratitude, <heroname>.")
/*< 65>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 62, 'param3': 17}
/*< 62>*/ 	printf(/* textboxtype: 0, unk: 0, line: 50 */ "Et toi aussi, <color blue<Hergo>coloroff>.")
/*<411>*/ 	make_actor_do_something(0, 4)
/*<299>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 64, 'param3': 17}
/*< 64>*/ 	printf(/* textboxtype: 1, unk: 0, line: 51 */ "Je n'ose pas imaginer ce qui aurait pu se\nproduire si vous n'aviez pas été là, tous\nles deux...")
/*< 69>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 70, 'param3': 50}
/*< 70>*/ 	printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0400000d>Héhé! Arrête Mémé, tu vas me faire rougir!\n\n\n\nEt puis, c'est toi qui m'as montré quoi faire\nquand je pleurnichais comme un bon à rien.")
/*<303>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 72, 'param3': 13}
/*< 72>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 71, 'param3': 50}
/*< 71>*/ 	printf(/* textboxtype: 0, unk: 0, line: 53 */ "<0x10009:0x0e080b0b>C'est parce que tu en avais la force.")
/*<410>*/ 	set_camera(27, 0)
/*<300>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 73, 'param3': 17}
/*< 73>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 301, 'param3': 17}
/*<301>*/ 	wait_frames(10)
/*< 74>*/ 	printf(/* textboxtype: 1, unk: 0, line: 54 */ "<0x10009:0x0e000007><0x30001:0x><heroname>! Il est temps de te parler\nde la vraie nature de ce démon...\n\n\nSache qu'il est la source de tout le mal.\nLorsque tu auras passé la porte du temps,\ntout sera clair...\n\n<0x10009:0x0e010b00>C'est un être terrifiant. On aura beau\nl'emprisonner, il parviendra toujours à briser\nles liens qui l'entravent.\n\nPour en venir à bout, il faut éliminer\nson essence même.\n\n\n<0x10009:0x0e100b00>Dépêche‐toi, <heroname>!\nUtilise l'éclat céleste...")
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 76, 'param3': 50}
/*< 76>*/ 	printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x040d0206>Concentre la force dans ton épée et <color green<envoie\n>coloroff>l'éclat céleste dans la porte du temps!")
/*< 75>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 77, 'param3': 17}
/*< 77>*/ 	printf(/* textboxtype: 0, unk: 0, line: 56 */ "... C'est bien ça, Mémé?")
/*<304>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1037, 'param2': 256, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 78, 'param3': 50}
/*< 78>*/ 	printf(/* textboxtype: 1, unk: 0, line: 57 */ "<0x10009:0x0e010007>... En effet. Va vers la porte.\nVa, <heroname>!")
/*<306>*/ 	set_camera(53, 0)
/*<307>*/ 	wait_frames(1)
/*<305>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_501_28() {
/*<449>*/ 	start()
/*<450>*/ 	printf(/* textboxtype: 0, unk: 1, line: 133 */ "Cet endroit semble approprié pour planter cette\npousse, mais elle mettrait trop de temps à pousser\n<color red<à notre époque>coloroff>...")
          }

          void entrypoint_501_11() {
/*<218>*/ 	start()
/*<219>*/ 	printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000003><color blue<Hergo >coloroff>va te permettre de rejoindre la forêt.\n\n\n\n<0x30001:0x><heroname>, il a dû arriver quelque\nchose au <color red<dragon d'eau>coloroff>. Pars à sa rencontre\ndans la forêt!")
          }

          void entrypoint_501_12() {
/*<220>*/ 	start()
/*<225>*/ 	switch (story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */]) {
          	  case 0:
/*<226>*/ 		switch (story_flags[209 /* us: 805A9AF0 0x20, jp: 805ACD70 0x20 */]) {
          		  case 0:
/*<239>*/ 			printf(/* textboxtype: 1, unk: 0, line: 105 */ "<0x10009:0x0000000a>L'heure est enfin venue.\n\n\n\n<0x30001:0x><heroname>! Regagne Célesbourg\net pars à la recherche de la Triforce!")
          		  case 1:
/*<232>*/ 			switch (scene_flags[96 /* 0xD 01 */]) {
          			  case 0:
/*<227>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					flw_487:
/*<487>*/ 					switch (story_flags[369 /* us: 805A9B03 0x80, jp: 805ACD83 0x80 */]) {
          					  case 0:
/*<238>*/ 						printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x0000000a>Une fois que tu auras triomphé de la dernière\népreuve, tu seras digne de recevoir la Triforce.\n\n\nRegagne vite Célesbourg pour passer\ncette épreuve!")
          					  case 1:
/*<488>*/ 						printf(/* textboxtype: 2, unk: 0, line: 104 */ "<0x10009:0x00000014>Excellent, <heroname>! Tu as appris\nles mélodies des trois dragons.\n\n\nIl ne reste que peu de temps. Dépêche‐toi\nde retourner dans le ciel et de compléter\nle Chant du héros!")
          					}
          				  case 1:
/*<228>*/ 					switch (scene_flags[98 /* 0xD 04 */]) {
          					  case 0:
/*<231>*/ 						printf(/* textboxtype: 0, unk: 0, line: 101 */ "<0x10009:0x00000003><color blue<Hergo>coloroff> t'attend. Va le rejoindre <color red<près de\nsa catapulte>coloroff>.")
          					  case 1:
/*<229>*/ 						printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000003>Tu tombes bien, <heroname>.\n\n\n\nJe crois qu'<color blue<Hergo>coloroff> t'attend.\n\n\n\nVa le retrouver <color red<près de sa catapulte>coloroff>.")
/*<230>*/ 						scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          					}
          				}
          			  case 1:
/*<233>*/ 				printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000007>C'est incroyable, ce qui s'est passé dans la\nforêt... Mais heureusement, tout est rentré\ndans l'ordre.")
/*<234>*/ 				scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
/*<236>*/ 				switch (scene_flags[97 /* 0xD 02 */]) {
          				  case 0:
          					goto flw_487
          				  case 1:
/*<235>*/ 					printf(/* textboxtype: 1, unk: 0, line: 102 */ "<0x10009:0x00000003>Au fait, <heroname>, <color blue<Hergo >coloroff>t'attend.\n\n\n\nVa le rejoindre <color red<près de sa catapulte>coloroff>.")
/*<237>*/ 					scene_flags[10 'Sealed Grounds'][98 /* 0xD 04 */] = true;
          				}
          			}
          		}
          	  case 1:
/*<222>*/ 		switch (scene_flags[96 /* 0xD 01 */]) {
          		  case 0:
          			flw_224:
/*<224>*/ 			printf(/* textboxtype: 1, unk: 0, line: 99 */ "<0x10009:0x0000000a>Tu dois continuer et retrouver les autres\nmélodies du <color red<Chant du héros>coloroff>. Le temps presse!")
          		  case 1:
/*<221>*/ 			printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000007>C'est incroyable, ce qui s'est passé dans la\nforêt... Mais heureusement, tout est rentré\ndans l'ordre.")
/*<223>*/ 			scene_flags[10 'Sealed Grounds'][96 /* 0xD 01 */] = true;
          			goto flw_224
          		}
          	}
          }

          void entrypoint_501_13() {
/*<269>*/ 	start()
/*<270>*/ 	printf(/* textboxtype: 1, unk: 0, line: 117 */ "<sound 6>Tu te débrouilles assez bien, je vois.\n\n\n\nBien, passons à la suite!")
/*<271>*/ 	printf(/* textboxtype: 0, unk: 1, line: 118 */ "Maintenant, joue en suivant les mouvements\ndu <color red<cercle de lumière>coloroff>!\n\n\nJe vais t'accompagner au chant.\n\n\n\nCe chant te sera nécessaire pour la suite\nde ta quête.")
          }

          void entrypoint_501_14() {
/*<253>*/ 	start()
/*<464>*/ 	switch (story_flags[341 /* us: 805A9AFE 0x08, jp: 805ACD7E 0x08 */]) {
          	  case 0:
/*<254>*/ 		switch (story_flags[350 /* us: 805A9B01 0x10, jp: 805ACD81 0x10 */]) {
          		  case 0:
/*<256>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<259>*/ 				printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x000d0f0a>Ah, cet arbre est vraiment majestueux!\nIl est comme le symbole de ce temple!\n\n\n<0x10009:0x00030200>Rien qu'à le regarder, je me sens tout heureux\nen dedans.")
          			  case 1:
/*<257>*/ 				switch (scene_flags[38 /* 0x5 40 */]) {
          				  case 0:
/*<258>*/ 					printf(/* textboxtype: 1, unk: 0, line: 81 */ "<0x10009:0x000d022e>OK, t'as planté la pousse...<pause 20> Mais ça va prendre\n<color red<une éternité >coloroff>avant que ça devienne un grand\narbre...")
          				  case 1:
/*<452>*/ 					check_item_flag(497, 1)
/*<260>*/ 					switch ({'type': 'switch', 'subType': 6, 'param2': 0, 'param3': 7, 'param4': 2, 'param5': 50}) {
          					  case 0:
/*<261>*/ 						printf(/* textboxtype: 0, unk: 0, line: 83 */ "<0x10009:0x000d0204>Ooh! <0x30001:0x><heroname>!\nC'est toute une pousse que t'as là!\nT'aurais dû me le dire que tu l'avais!\n\n<0x10009:0x00000e0e>Je ne suis pas un expert, mais il me semble\nqu'elle pourrait devenir un bel arbre qui irait\nbien, ici, près du temple.\n\n<0x10009:0x00030200>Mais...<pause 10> Je me demande combien d'années ça va\nprendre avant que ça devienne un grand arbre...")
          					  case 1:
/*<255>*/ 						printf(/* textboxtype: 0, unk: 0, line: 80 */ "<0x10009:0x00000002>Le sort de <color blue<Zelda >coloroff>est entre tes mains,\n<heroname>!\n\n\nEn passant, je me disais que j'aimerais <color red<planter\n>coloroff>un grand arbre ici. Mais je n'ai pas de pousse\nni rien de ça. T'en aurais pas une à me donner?")
          					}
          				}
          			}
          		  case 1:
/*<252>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x000c0206><color blue<Zelda>coloroff> doit t'attendre de l'autre côté! Ne la fais\npas attendre! Vas‐y, <heroname>!\nDépêche‐toi!")
          		}
          	  case 1:
/*<465>*/ 		printf(/* textboxtype: 1, unk: 0, line: 60 */ "<0x10009:0x000c020d>Il faut que tu concentres la force dans ton épée\net que tu <color green<envoies>coloroff> l'éclat céleste dans la porte!\n\n\n<color blue<Zelda>coloroff> doit t'attendre de l'autre côté!\nNe la fais pas attendre! Vas‐y,\n<heroname>! Dépêche‐toi!")
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
/*< 56>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x0400003d>Hein? Tu veux rire, Mémé!")
/*< 58>*/ 	set_camera(18, 0)
          	flw_27:
/*< 27>*/ 	wait_frames(30)
/*< 12>*/ 	set_camera(10, 0)
/*< 13>*/ 	printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x04000002>Tu veux vraiment rire de moi? Répète donc,\npour voir!")
/*< 15>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 16, 'param3': 50}
/*< 16>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3598, 'param2': -256, 'next': 14, 'param3': 13}
/*< 14>*/ 	printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x0e00000a>C'est la simple vérité. Tu n'es pas celui\nqui pourra sauver la prêtresse... <color blue<Zelda>coloroff>...\n\n\nCe rôle a été attribué à un autre il y a déjà\nfort longtemps. C'est à un autre que revient\nla destinée de nous sauver tous.")
/*< 18>*/ 	set_camera(65, 0)
/*< 32>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 14, 'next': 33, 'param3': 50}
/*< 33>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 17, 'param3': 13}
/*< 17>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x0400003e><0x10008:0x01cd>La ferme, Mémé!\n\n\n\nMoi, le grand <color blue<Hergo>coloroff>, je pourrais pas sauver\n<color blue<Zelda>coloroff>? C'est mal me connaître, Mémé!\n\n\nSi je peux pas la sauver, alors pourquoi je\nserais venu jusqu'ici, hein? Pfff! Et puis, qui\nd'autre que moi pourrait la sauver? Je te le\ndemande!")
/*< 23>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 356, 'next': 28, 'param3': 15}
/*< 28>*/ 	wait_frames(15)
/*< 24>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 17920, 'next': 35, 'param3': 13}
/*< 35>*/ 	printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x0400001e>......!")
/*< 36>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 80, 'param3': 17}
/*< 80>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': 1792, 'next': 37, 'param3': 13}
/*< 37>*/ 	wait_frames(10)
/*< 79>*/ 	set_camera(13, 0)
/*< 19>*/ 	{'type': 'type3', 'subType': 2, 'param1': 1, 'param2': 100, 'next': 20, 'param3': 14}
/*< 20>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 4, 'next': 280, 'param3': 17}
/*<280>*/ 	wait_frames(30)
/*< 21>*/ 	printf(/* textboxtype: 1, unk: 0, line: 21 */ "<0x10009:0x04003218>Ah... Je vois.\n\n\n\n<0x10009:0x040d0a00><0x30001:0x><heroname>, Mémé essaie de me dire\nque c'est toi le grand héros qui va sauver\n<color blue<Zelda>coloroff>... Hmf.")
/*< 22>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1035, 'param2': 12544, 'next': 26, 'param3': 13}
/*< 26>*/ 	set_camera(12, 0)
/*<394>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 395, 'param3': 32}
/*<395>*/ 	wait_frames(1)
/*<393>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 25, 'param3': 17}
/*< 25>*/ 	printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x0400003c>Quelle farce! Je m'en fiche que ce soit ta\ndestinée ou je sais pas quoi! J'accepterai\njamais ça!\n\n<0x10009:0x040b0a00>Je te connais, et tu n'as rien d'un héros,\npetit pois!")
/*< 38>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 4, 'next': 30, 'param3': 17}
/*< 30>*/ 	set_camera(14, 0)
/*< 29>*/ 	{'type': 'type3', 'subType': 2, 'param1': 2, 'param2': 516, 'next': 31, 'param3': 14}
/*< 31>*/ 	printf(/* textboxtype: 0, unk: 0, line: 23 */ "<0x10009:0x04000038><0x10008:0x01cd>OUAAAAAAAH!!!<0x10005:0x002d0000>")
/*< 39>*/ 	wait_frames(35)
/*<462>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 463, 'param3': 24}
/*<463>*/ 	wait_frames(30)
/*<281>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 282, 'param3': 17}
/*<282>*/ 	wait_frames(15)
/*< 40>*/ 	set_camera(49, 0)
/*<283>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 41, 'param3': 16}
/*< 41>*/ 	printf(/* textboxtype: 1, unk: 2, line: 24 */ "<0x10009:0x0e000008>... <0x30001:0x><heroname>. Tu as pu voir <color blue<Zelda>coloroff>?")
/*< 42>*/ 	set_camera(16, 0)
/*< 43>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x0e0eff05>... Je vois. Elle était là, elle aussi.\n\n\n\nCette femme que tu as vue aux côtés de Zelda\nse nomme <color blue<Impa>coloroff>... Elle a été envoyée par\nla <color blue<Déesse >coloroff>pour servir Zelda.")
/*< 50>*/ 	printf(/* textboxtype: 0, unk: 0, line: 26 */ "Pour accomplir la mission que la Déesse leur\na confiée, Zelda et Impa se sont mises en route\nvers un lieu particulier...\n\nMais maintenant qu'Impa a détruit la porte\nqu'elles ont empruntée, il n'existe plus qu'un\nseul moyen de les rejoindre. ")
/*< 49>*/ 	printf(/* textboxtype: 1, unk: 0, line: 27 */ "<0x10009:0x0e0eff00>Tu dois utiliser le pouvoir de la <color blue<lyre >coloroff>que Zelda\nt'a confiée...")
/*< 47>*/ 	set_camera(15, 0)
/*< 44>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10009:0x0e000008>Dis‐moi, <heroname>, sais‐tu jouer\nde la <color blue<lyre>coloroff>?\n\n\nVisiblement, non.\n\n\n\nTrès bien, je vais t'apprendre.\nSuis mes instructions.\n\n\nTout d'abord, sors ta lyre avec <icon 30>.<0x10011:0x10cd>")
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
/*<134>*/ 	printf(/* textboxtype: 0, unk: 1, line: 34 */ "<0x10009:0x0010160f>Oh, ton épée...!\n\n\n\n<0x10009:0x00000b00>Sa lame a été purifiée par les trois flammes.\nBravo, <heroname>! Ton épée déborde\nd'une grande puissance...")
/*<135>*/ 	printf(/* textboxtype: 0, unk: 0, line: 35 */ "<0x10009:0x0001ff07>Cette puissance... Oui! C'est la <color red<force>coloroff>...\n\n\n\n<0x10009:0x00000b00>La puissance sacrée que les anciens dieux ont\ninsufflée en ce monde... La grande puissance\nque mentionne le Chant de la Déesse...\n\nC'est elle qui circule à présent en toi\net dans ton épée. Ça ne fait aucun doute.")
/*<138>*/ 	set_camera(19, 0)
/*<427>*/ 	printf(/* textboxtype: 1, unk: 0, line: 36 */ "<0x10009:0x00001603>Bien, <heroname>!\nL'heure est venue d'ouvrir la porte du temps!")
/*<396>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 397, 'param3': 32}
/*<397>*/ 	wait_frames(1)
/*<398>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 136, 'param3': 17}
/*<136>*/ 	printf(/* textboxtype: 0, unk: 1, line: 37 */ "Avec cette puissance... Avec la <color red<force>coloroff>, il ne fait\naucun doute que l'<color red<éclat céleste >coloroff>pourra activer\nla porte du temps.")
/*<140>*/ 	set_camera(24, 0)
/*<137>*/ 	printf(/* textboxtype: 0, unk: 0, line: 38 */ "Depuis cette estrade, <color green<insuffle la force de ton\népée >coloroff>à la porte du temps!")
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
/*< 85>*/ 	printf(/* textboxtype: 0, unk: 0, line: 62 */ "<0x10009:0x0e010103>Tu es de retour, <heroname>...")
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
/*< 84>*/ 	printf(/* textboxtype: 0, unk: 1, line: 64 */ "Derrière cette porte, <color blue<Zelda>coloroff> est plongée dans\nun profond sommeil.\n\n\nNe crains rien, elle est toujours en vie.")
/*<439>*/ 	wait_frames(30)
/*<313>*/ 	set_camera(33, 0)
/*<312>*/ 	printf(/* textboxtype: 0, unk: 0, line: 65 */ "Comme le dit la légende, la Déesse a dissimulé\nla <color yellow white<Triforce>coloroff>, la puissance qui éliminera l'Avatar\ndu Néant, à Célesbourg.\n\n<0x10009:0x0e010b00>Mais nul n'en connaît l'emplacement exact.\n<pause 15>Il n'a jamais été révélé...")
/*<438>*/ 	set_camera(32, 0)
/*<314>*/ 	printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x0e140b00><0x30001:0x><heroname>! Comme tu l'auras compris...\n\n\n\nLa clé pour trouver la Triforce se trouve\nquelque part à <color blue<Célesbourg>coloroff>.")
/*<315>*/ 	printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x0e080b07>Va et trouve la Triforce!")
/*<316>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 4, 'next': 319, 'param3': 32}
/*<319>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 317, 'param3': 50}
/*<317>*/ 	printf(/* textboxtype: 1, unk: 0, line: 69 */ "<0x10009:0x0401ff04><0x10008:0x01cd>Hé! Pas si vite!")
/*<318>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 131, 'param3': 16}
/*<131>*/ 	set_camera(48, 0)
/*< 91>*/ 	printf(/* textboxtype: 0, unk: 1, line: 70 */ "<0x10009:0x0403ff00><0x30001:0x><heroname>! J'aurais quelque chose\nà te demander...")
/*<308>*/ 	{'type': 'type3', 'subType': 4, 'param1': 1028, 'param2': 256, 'next': 309, 'param3': 13}
/*<309>*/ 	wait_frames(5)
/*< 89>*/ 	set_camera(34, 0)
/*< 90>*/ 	wait_frames(75)
/*< 88>*/ 	{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 92, 'param3': 14}
/*< 92>*/ 	printf(/* textboxtype: 0, unk: 0, line: 71 */ "<0x10009:0x0403ff02>Dis‐moi... <color blue<Zelda>coloroff>... Elle va bien?\n[1-]Oui[2-]En fait...")
/*< 95>*/ 	switch (choice(2)) {
          	  case 0:
/*< 93>*/ 		printf(/* textboxtype: 1, unk: 0, line: 72 */ "C'est vrai? Tant mieux.\n\n\n\n<0x10009:0x04030200>Mais... c'est pas encore fini, hein?")
          		flw_97:
/*< 97>*/ 		set_camera(35, 0)
/*< 96>*/ 		printf(/* textboxtype: 0, unk: 0, line: 74 */ "<0x10009:0x040e0d09>Tu sais, <heroname>, j'ai décidé de ne\npas retourner à Célesbourg.\n\n\n<0x10009:0x04000200>Je vais vivre ici avec Mémé.")
/*< 98>*/ 		printf(/* textboxtype: 1, unk: 0, line: 75 */ "<0x10009:0x0400ff0d>Héhé... Prends pas ça personnellement.\nJe suis très content de ma décision.\n\n\n<0x10009:0x04000200>Je ne sais pas comment t'expliquer... Je sens\nque j'ai encore quelque chose à accomplir ici.\n\n\nIl faut surveiller le gros monstre, <0x10009:0x04000211>et puis il faut\ns'occuper de Mémé...\n\n\nC'est peut‐être pas aussi grandiose que ta\nmission, mais c'est peut‐être ma destinée, à moi!\nJe pense que tu peux comprendre ce que je veux\ndire.")
/*<100>*/ 		set_camera(36, 0)
/*< 99>*/ 		printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x04030d08>Et puis, j'aime ça ici. C'était bien de vivre dans\nle ciel, mais j'aime bien avoir les deux pieds\nsur terre!")
/*<101>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 104, 'param3': 32}
/*<104>*/ 		{'type': 'type3', 'subType': 4, 'param1': 1025, 'param2': -256, 'next': 103, 'param3': 13}
/*<103>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 101, 'next': 102, 'param3': 17}
/*<102>*/ 		printf(/* textboxtype: 0, unk: 0, line: 77 */ "<0x10009:0x040d0209>Regarde ça!")
/*<108>*/ 		{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 109, 'param3': 17}
/*<109>*/ 		set_camera(37, 0)
/*<107>*/ 		printf(/* textboxtype: 1, unk: 0, line: 78 */ "<0x10009:0x04040208>Grâce à Zelda et Mémé, la vie reprend sur\ncette terre.\n\n\n<color red<Si on plantait une pousse >coloroff>ici, je suis sûr qu'elle\ndeviendrait un grand arbre bien solide au fil\ndes ans. Ça mettrait encore plus de vie!\n\n<0x10009:0x040d0211>Enfin, ça prend des années pour qu'un arbre\nsoit bien grand. Mais faut savoir être patient,\ndes fois.\n\n<0x10009:0x04000012>C'est comme ça que je vois les choses en ce\nmoment.")
/*<110>*/ 		set_camera(36, 0)
/*<320>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 106, 'param3': 17}
/*<106>*/ 		printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x040d022e>Et puis... Euh... Bien... Si tu retournes\nà Célesbourg, dis bonjour à tout le monde\nde ma part.\n\n<0x10009:0x04000e00>Dis‐leur que je vais bien et que j'aime mon\nnouveau chez‐moi. Mes compères, Orbo et\nLatruche, s'en remettront sûrement pas!\n\n<0x10009:0x04000209>Merci, <heroname>!")
/*<105>*/ 		story_flags[146 /* us: 805A9AEE 0x10, jp: 805ACD6E 0x10 */] = true;
/*<111>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*< 94>*/ 		printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x04001400>Ouf... C'est pas drôle, ce qui lui arrive...\n\n\n\n<0x10009:0x04030200>Mais, tu vas arranger tout ça, hein?")
          		goto flw_97
          	}
          }

          void entrypoint_501_01() {
          	start()
/*<  1>*/ 	switch (story_flags[87 /* us: 805A9AEC 0x02, jp: 805ACD6C 0x02 */]) {
          	  case 0:
/*<  3>*/ 		switch (story_flags[340 /* us: 805A9AFE 0x04, jp: 805ACD7E 0x04 */]) {
          		  case 0:
/*<133>*/ 			printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x0000000a>Nous poursuivrons notre conversation plus tard.\nMaintenant, tu dois partir.")
          		  case 1:
/*<132>*/ 			printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x00000003>Je suppose que tu l'as déjà vu, mais quelque\nchose est scellé au fond du site en spirale,\ndehors.\n\nPour l'heure, tu n'as pas besoin d'en savoir\ndavantage mais bientôt, le moment viendra...")
          		}
          	  case 1:
/*<  2>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x00001303>La porte menant à la <color red<forêt de Firone >coloroff>est\nouverte. Sors par la porte à ma gauche et\ncontinue tout droit pour accéder à la forêt.\n\nTôt ou tard, toute la vérité se révélera à toi...\nPoursuis ta route sans crainte,\n<heroname>.")
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
/*<335>*/ 	printf(/* textboxtype: 1, unk: 0, line: 0 */ "<0x10009:0x00000001><0x10006:0xfecd>Ooh... L'enfant du destin...<pause 15> Bienvenue à toi,\njeune élu descendu des cieux par‐delà la mer\nde nuages.")
/*<341>*/ 	{'type': 'type3', 'subType': 4, 'param1': 19, 'param2': 0, 'next': 342, 'param3': 13}
/*<342>*/ 	wait_frames(45)
/*<340>*/ 	set_camera(56, 0)
/*<343>*/ 	wait_frames(15)
/*<337>*/ 	printf(/* textboxtype: 0, unk: 1, line: 1 */ "<0x10009:0x00000008><0x10006:0xfecd>Quel est ton nom?\n\n\n\n... <pause 40><0x30001:0x><heroname>?\nHmm... <0x30001:0x><heroname>...\n\n\nTu sembles maîtriser <sound 4>l'<color red<éclat céleste>coloroff>, cette\npuissance sacrée qui emplit ta lame lorsque\ntu la <color green<brandis vers le ciel>coloroff>.\n\n<0x10009:0x0000000b>C'est la preuve que tu es digne de l'<color blue<épée divine\n>coloroff>que tu portes dans ton dos.\n\n\n<0x10006:0xffcd>J'attends ici ton arrivée depuis des lunes\net des lunes. Je serai ton guide...")
/*<181>*/ 	set_camera(43, 0)
/*<182>*/ 	{'type': 'type3', 'subType': 2, 'param1': 9, 'param2': 356, 'next': 183, 'param3': 15}
/*<183>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 180, 'param3': 17}
/*<180>*/ 	set_camera(38, 0)
/*<184>*/ 	printf(/* textboxtype: 0, unk: 0, line: 2 */ "Nous sommes ici dans le <color blue<temple du sceau>coloroff>,\nbâti par la Déesse à une époque immémoriale.\n\n\nIl était écrit depuis fort longtemps déjà que\ntu viendrais ici...\n\n\nLa jeune prêtresse que tu recherches est elle\naussi descendue en ces terres dans un rai de\nlumière il y a peu.\n\n\nTout cela était écrit...")
/*<187>*/ 	set_camera(57, 0)
/*<344>*/ 	wait_frames(15)
/*<185>*/ 	printf(/* textboxtype: 1, unk: 0, line: 3 */ "<0x10009:0x0000000a>Mais c'est d'une manière bien différente de ce\nqui était prédit que la prêtresse est arrivée\njusqu'ici.\n\nUne puissance maléfique œuvre pour tenter\nde changer votre destinée...")
/*<339>*/ 	set_camera(60, 0)
/*<338>*/ 	printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x000eff08><0x30001:0x><heroname>...<pause 30>\nEs‐tu préoccupé par l'avenir de la prêtresse?\n\n\n... Pourtant, tu ne dois penser qu'à aller de\nl'avant. Elle a un grand destin à accomplir.\nTout comme toi.\n\nElle s'est dirigée vers la <color blue<forêt de Firone >coloroff>pour\nen apprendre davantage sur son rôle.\nPars à sa suite.")
/*<186>*/ 	story_flags[130 /* us: 805A9AE4 0x01, jp: 805ACD64 0x01 */] = true;
/*<190>*/ 	printf(/* textboxtype: 0, unk: 0, line: 5 */ "<0x10009:0x000eff00>... Regarde ta carte.")
/*<188>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 364, 'param3': 30}
/*<364>*/ 	wait_frames(20)
/*<363>*/ 	scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<362>*/ 	printf(/* textboxtype: 1, unk: 0, line: 6 */ "La (X) indique la route qui mène à la <color blue<forêt\nde Firone>coloroff>.\n\n\nMais il serait imprudent de t'aventurer dans\ncette forêt inconnue infestée de monstres avec\nune simple carte.\n\nJe vais te donner le pouvoir de poser\ndes <color red<balises>coloroff>.\n\n\nEn posant une <color red<balise >coloroff>sur ta carte, un pilier de\nlumière apparaîtra à l'endroit correspondant,\nce qui facilitera ton orientation.\n\nAllez, pointe l'endroit marqué d'une (X) et\nappuie sur (A) pour y poser une balise. <0x10011:0x00cd>")
/*<189>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 2, 'next': 191, 'param3': 34}
          	flw_191:
/*<191>*/ 	switch (scene_flags[24 /* 0x2 01 */]) {
          	  case 0:
/*<193>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000003>Elle n'est pas visible d'ici, mais ta balise a bien\nété posée. Tu pourras le constater de tes yeux\nlorsque tu seras dehors.\n\nLorsque tu n'auras plus besoin de la balise,\nouvre ta carte, pointe la balise et appuie\nsur (A) pour l'effacer.<0x10011:0x00cd>\n\nTâche de ne pas te perdre.")
/*<194>*/ 		printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x000eff03>Allez, rends‐toi dans la forêt de Firone.\nPars sur les traces de la prêtresse... <color blue<Zelda>coloroff>.\n\n\nTu peux aussi prendre le contenu du <color red<coffre >coloroff>qui\nest dans cette salle. Il te sera sûrement utile\nlors de ton aventure.")
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
/*<206>*/ 		printf(/* textboxtype: 0, unk: 0, line: 11 */ "Sors par cette porte, la forêt sera alors droit\ndevant. Sois prudent.")
/*<333>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 334, 'param3': 17}
/*<334>*/ 		wait_frames(10)
/*<278>*/ 		set_camera(49, 0)
/*<209>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00001303>Tôt ou tard, toute la vérité se révélera à toi...\nPour le moment, poursuis ta route sans crainte,\n<heroname>!")
/*<207>*/ 		story_flags[494 /* us: 805A9B13 0x10, jp: 805ACD93 0x10 */] = true;
/*<208>*/ 		scene_flags[10 'Sealed Grounds'][23 /* 0x3 80 */] = true;
/*<211>*/ 		scene_flags[10 'Sealed Grounds'][84 /* 0xB 10 */] = true;
/*<331>*/ 		set_camera(61, 0)
/*<330>*/ 		{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<192>*/ 		printf(/* textboxtype: 0, unk: 0, line: 8 */ "<0x10009:0x00000006>Il n'y a pas de balise à l'endroit indiqué\npar la (X).\n\n\nPour effacer une balise que tu as posée,\npointe‐la avec le curseur et appuie sur (A).<0x10011:0x00cd>\n\n\nSi tu veux poser une balise de façon plus\nprécise, tu peux agrandir ta carte avec <icon 56>.")
/*<365>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 368, 'param3': 30}
/*<368>*/ 		wait_frames(20)
/*<367>*/ 		scene_flags[10 'Sealed Grounds'][8 /* 0x0 01 */] = true;
/*<369>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "Allez, pointe l'endroit indiqué par la (X) et\nappuie sur <icon 27> pour poser une balise.<0x10011:0x00cd>")
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
/*< 10>*/ 	printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x0400003d>Hein? Tu veux rire, Mémé!")
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
/*<413>*/ 	printf(/* textboxtype: 0, unk: 0, line: 89 */ "<0x10009:0x0e000003>Tu as emprisonné ce monstre par trois fois...")
/*<414>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 415, 'param3': 47}
/*<415>*/ 	{'type': 'type3', 'subType': 2, 'param1': 5, 'param2': 356, 'next': 417, 'param3': 15}
/*<417>*/ 	wait_frames(1)
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 419, 'param3': 17}
/*<419>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 421, 'param3': 50}
/*<421>*/ 	set_camera(26, 0)
/*<422>*/ 	wait_frames(5)
/*<418>*/ 	{'type': 'type3', 'subType': 1, 'param1': 1, 'param2': 15, 'next': 420, 'param3': 48}
/*<420>*/ 	wait_frames(15)
/*<412>*/ 	printf(/* textboxtype: 1, unk: 0, line: 90 */ "<0x30001:0x><heroname>... Toi et Hergo... Vous avez\nà nouveau fait preuve d'une grande bravoure.\n\n\nMais le démon se libère de plus en plus\nfréquemment... Tu dois faire vite,\n<heroname>!\n\nDis‐moi, as‐tu trouvé une piste quant à l'endroit\noù est cachée la Triforce?\n\n\n[1-]Oui[2-]Eh bien...")
/*<424>*/ 	set_camera(44, 0)
/*<426>*/ 	printf(/* textboxtype: 0, unk: 1, line: 91 */ "...<pause 25>\nHmm...\n\n\nLorsque tu auras trouvé les trois dragons\net reconstitué le Chant du héros, la route vers\nla Triforce s'ouvrira...\n\nLe dragon le plus proche se trouve dans\nla <color blue<forêt de Firone>coloroff>...\n\n\n<0x10009:0x0e00000a>Mais il s'y est produit quelque chose de peu\ncommun.\n\n\n<0x10009:0x0e010b00>J'ignore comment c'est arrivé, mais il y a peu...\n\n\n\n... le chemin qui mène à la forêt de Firone s'est\nretrouvé inondé.")
/*<425>*/ 	set_camera(26, 0)
/*<130>*/ 	printf(/* textboxtype: 0, unk: 0, line: 92 */ "J'ai donc fermé la <color red<porte qui mène à la forêt >coloroff>et\nposé un sceau élémentaire pour arrêter l'eau...\n\n\nMais maintenant, on ne peut plus l'ouvrir,\nsinon l'eau inondera le site...\n\n\nLe problème est donc de savoir comment tu vas\npouvoir te rendre dans la forêt de Firone...")
/*<128>*/ 	set_camera(46, 0)
/*<126>*/ 	{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': 100, 'next': 116, 'param3': 50}
/*<116>*/ 	printf(/* textboxtype: 1, unk: 0, line: 93 */ "<0x10009:0x0400000d>Héhé! Y'a rien là! Je m'en occupe!\n\n\n\nPendant qu'on combattait, j'ai pensé à une\nnouvelle manière d'utiliser ma <color red<mégatapulte>coloroff>!\n\n\nSi tu montes dedans et que je tire à pleine\npuissance, t'arriveras dans la forêt en un\nclin d'œil!")
/*<127>*/ 	set_camera(26, 0)
/*<125>*/ 	printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x040c0202>Je sors préparer ma machine! Suis‐moi,\n<heroname>!")
/*<118>*/ 	{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 516, 'next': 467, 'param3': 14}
/*<467>*/ 	wait_frames(15)
/*<124>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 100, 'next': 119, 'param3': 24}
/*<119>*/ 	story_flags[485 /* us: 805A9B10 0x08, jp: 805ACD90 0x08 */] = true;
/*<129>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 99, 'next': 117, 'param3': 50}
/*<117>*/ 	printf(/* textboxtype: 0, unk: 0, line: 95 */ "<0x10009:0x0e00000b>Eh bien...\n\n\n\nOn peut vraiment compter sur lui. Mais il lui\narrive de causer des ennuis à ceux qu'il essaie\nd'aider...")
/*<325>*/ 	{'type': 'type3', 'subType': 1, 'param1': 14, 'param2': 100, 'next': 323, 'param3': 17}
/*<323>*/ 	printf(/* textboxtype: 1, unk: 0, line: 96 */ "<0x10009:0x0e08ff00>Bien, <heroname>. Sois prudent.")
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
/*<471>*/ 					printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x0000000a>... <0x30001:0x><heroname>! À présent, tu es le seul\nqui puisse faire quelque chose. Le sort du\nmonde est entre tes mains!\n\nJe t'en prie! Tu dois nous sauver!")
          				  case 1:
/*<472>*/ 					printf(/* textboxtype: 1, unk: 0, line: 111 */ "<0x10009:0x00000014>Tout à l'heure, <color blue<Hergo>coloroff> s'est précipité dehors!\n\n\n\nJ'imagine qu'il est encore à sa <color red<catapulte>coloroff>.")
          				}
          			  case 1:
/*<249>*/ 				printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x0000000a>... <0x30001:0x><heroname>! À présent, tu es le seul\nqui puisse faire quelque chose. Le sort du\nmonde est entre tes mains!\n\nJe t'en prie! Tu dois nous sauver!")
          			}
          		  case 1:
/*<247>*/ 			printf(/* textboxtype: 1, unk: 0, line: 108 */ "<0x10009:0x00000009>Comment?\nL'<color blue<Avatar du Néant >coloroff>est revenu à la vie...?\n\n\nAah... C'est terrible... Si on ne fait rien, c'en est\nfini de notre monde...")
/*<248>*/ 			scene_flags[10 'Sealed Grounds'][100 /* 0xD 10 */] = true;
/*<479>*/ 			printf(/* textboxtype: 0, unk: 0, line: 110 */ "<0x10009:0x0000000a>... <0x30001:0x><heroname>! À présent, tu es le seul\nqui puisse faire quelque chose. Le sort du\nmonde est entre tes mains!\n\nJe t'en prie! Tu dois nous sauver!")
          		}
          	  case 1:
/*<242>*/ 		switch (scene_flags[99 /* 0xD 08 */]) {
          		  case 0:
/*<243>*/ 			printf(/* textboxtype: 0, unk: 0, line: 107 */ "<0x10009:0x0000000d><0x30001:0x><heroname>! Tu dois absolument\nempêcher la résurrection de l'Avatar du Néant\ndans le monde du passé!\n\nOuvre vite la porte du temps pour te rendre\ndans le passé! ")
          		  case 1:
/*<241>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000009>Aaah... Quelle tragédie...! Alors que nous\npensions avoir enfin triomphé, dame <color blue<Zelda\n>coloroff>s'est fait enlever!\n\n<0x30001:0x><heroname>! Tu dois absolument\nempêcher la résurrection de l'Avatar du Néant\ndans le monde du passé!\n\nOuvre vite la porte du temps pour te rendre\ndans le passé!")
/*<244>*/ 			scene_flags[10 'Sealed Grounds'][99 /* 0xD 08 */] = true;
          		}
          	}
          }

          void entrypoint_501_05() {
/*<265>*/ 	start()
/*<266>*/ 	printf(/* textboxtype: 1, unk: 0, line: 33 */ "« <color blue<Le Chant de la Déesse>coloroff> ».\nIl est très probable qu'il s'agisse du chant que\nchantait dame Zelda le jour de la chevauchée\ncéleste.\nLa probabilité d'obtenir des informations sur\nles paroles de ce chant à l'école de chevalerie\nest de 85 %.")
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
/*<214>*/ 							printf(/* textboxtype: 0, unk: 0, line: 59 */ "<0x10009:0x00101606>Que fais‐tu, <heroname>? As‐tu fait ce\nque tu avais à faire de l'autre côté de la porte?\n\n\n<0x10009:0x00140b00>Alors, traverse cette porte!")
          						  case 1:
/*<152>*/ 							printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00100003>Allez, <heroname>! Ouvre la porte du\ntemps et rends‐toi de l'autre côté!")
          						}
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x0000000a>La créature est sur le point de s'éveiller.\n\n\n\n<0x30001:0x><heroname>! Tu dois l'emprisonner\nà nouveau!")
          					}
          				  case 1:
/*<143>*/ 					printf(/* textboxtype: 1, unk: 0, line: 39 */ "<0x10009:0x00000007>Avec cette puissance... Avec la <color red<force>coloroff>, il ne fait\naucun doute que l'<color red<éclat céleste >coloroff>pourra activer\nla porte du temps.\n\nDepuis cette estrade, <color green<insuffle la force de\nton épée >coloroff>à la porte du temps!")
          				}
          			  case 1:
          				goto flw_134
          			}
          		  case 1:
/*<147>*/ 			printf(/* textboxtype: 0, unk: 0, line: 32 */ "<0x10009:0x0000000a>Tôt ou tard, ce monstre brisera à nouveau\nle sceau...\n\n\nHergo semble réfléchir à un plan pour\ns'y préparer.\n\n\n<0x30001:0x><heroname>, empresse‐toi d'aller\nrecueillir les trois flammes sacrées\ndans ton épée!")
          		}
          	  case 1:
/*<145>*/ 		printf(/* textboxtype: 0, unk: 1, line: 31 */ "<0x10009:0x00000003>Recueille les trois flammes sacrées dans ton\népée, et alors la porte du temps s'ouvrira.\n\n\nLe <color red<Chant de la Déesse >coloroff>qui se transmet\nà Célesbourg, ton village natal, te mettra\nsur la voie des flammes sacrées.\n\nRetourne à Célesbourg sans plus attendre!")
          	}
          }

          void entrypoint_501_23() {
/*<262>*/ 	start()
/*<272>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 2621, 'next': 263, 'param3': 13}
/*<263>*/ 	printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000000>Rattrape ce monstre, <heroname>!\nFaut que tu sauves <color blue<Zelda>coloroff>!")
          }

