          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDVa\x2010t'en ! Va\x2010t'en !")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDCamouflage plante verte...\nCamouflage plante verte...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, je vous suggère de vous assurer\nde la sécurité de cette créature.")
          	  case 1:
/*< 49>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, si vous n'aidez pas cette\ncréature, ses chances de survie\nsont de 5 %.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<439>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 443, 'param3': 46}
/*<443>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 51}
/*<444>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf("")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("")
          		flw_222:
/*<222>*/ 		printf("")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<436>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf("")
/*<438>*/ 			set_camera(32, 0)
/*<437>*/ 			printf("")
          			flw_441:
/*<441>*/ 			set_camera(34, 0)
/*<442>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 440, 'param3': 36}
/*<440>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<643>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf("")
          			goto flw_441
          		}
          	  case 1:
/*<  6>*/ 		printf("")
          		goto flw_222
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<300>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 77, 'param3': 6}
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 202, 'param3': 17}
/*<202>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf("\x0E\x01\x08\x02\x1CDAaah ! Y en a un vert !")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x00\x0FOh gnon ! Épargne\x2010moi juste ma vie...")
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 124, 'param3': 14}
/*<124>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 203, 'param3': 15}
/*<203>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 135, 'param3': 13}
/*<135>*/ 		set_camera(2, 0)
/*< 18>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 122, 'param3': 6}
/*<122>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<137>*/ 		set_camera(9, 0)
          	  case 1:
/*<299>*/ 		printf("\x0E\x01\x09\x04\x00\x0BGnu ? On dirait que ça s'est calmé...")
/*<301>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<658>*/ 	start()
/*<659>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, je peux à\nprésent analyser votre habileté au\ncombat contre vos ennemis.")
/*<664>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<665>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 670, 'param3': 32}
/*<670>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 671, 'param3': 17}
/*<671>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 666, 'param3': 6}
/*<666>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 667, 'param3': 17}
/*<667>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 669, 'param3': 6}
/*<669>*/ 	set_camera(39, 0)
/*<668>*/ 	printf("Lorsque vous <g<ciblez >>quelque chose avec\n(Z), appuyez sur (v) pour m'appeler et\nje vous présenterai les résultats de\nmon analyse.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<672>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 673, 'param3': 36}
/*<673>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 674, 'param3': 6}
/*<674>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x07Merci d'avoir trouvé tous mes amis\nTikwis !\n\n\n\x0E\x01\x09\x04\x00\x13Mais ton amie comme toi était pas là...\nTu peux la trouver !")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 153, 'param3': 13}
/*<153>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<154>*/ 				printf("\x0E\x01\x09\x04\x00\x07Le Vénérable va bien aussi, youpi !\nIl était tout près d'ici, en fait...\nJ'aurais pu deviner qu'il roulerait\npas sa mousse si loin !\n\x0E\x01\x09\x04\x00\x13Mais ton amie comme toi était pas\navec lui...")
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x00\x04Dis au Vénérable que je vais bien.\nTon amie comme toi est sûrement\navec lui !")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 346, 'param3': 31}
/*<346>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf("Il me poursuit encore !\nSi c'est comme ça...")
/*<362>*/ 		set_camera(18, 0)
/*<429>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<430>*/ 		printf("\x0E\x01\x08\x02\x2CDBadabim !")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf("\x0E\x01\x08\x02\xFECD\x0E\x01\x06\x02\xFDCD......")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf("Hmm ? Pas taper ? Tout bien réfléchi,\ntu as corrigé les gros méchants rouges\ntout à l'heure...")
/*<379>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 431, 'param3': 6}
/*<431>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x00\x01Moi c'est <b<Pirsel>>, des Tikwis !\nT'es moins méchant que t'en\nas l'air, tu m'as sauvé !")
/*<139>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 138, 'param3': 13}
/*<138>*/ 		printf("\x0E\x01\x09\x04\x00\x05Tiens, d'ailleurs, j'en ai vu une\nun peu comme toi tout à l'heure...\n[1]Zelda ?[2]Qui était\x2010ce ?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x04Tu la connais ? Elle avait l'air\nen danger !")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x00\nPlein de rouges sont venus l'attaquer !\n<pling>Elle s'est enfuie avec le <b<Vénérable>> !")
/*<360>*/ 			set_camera(20, 0)
/*<361>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf("\x0E\x01\x09\x04\x00\x04N'en sais rien, moi ! Mais elle avait\nl'air en danger !")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Je constate une forte réaction à ma\nfonction détection. Je vous encourage\nà continuer de chercher dans cette\nzone.")
          }

          void entrypoint_200_71() {
/*<678>*/ 	start()
/*<679>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 680, 'param3': 51}
/*<680>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 681, 'param3': 16}
/*<681>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 682, 'param3': 17}
/*<682>*/ 	set_camera(40, 0)
/*<683>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf("\x0E\x01\x09\x04\x00\x07Merci d'avoir trouvé tous mes amis\nTikwis !\n\n\n\x0E\x01\x09\x04\x00\x13Mais la forêt a encore l'air\ndangereuse...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 163, 'param3': 13}
/*<163>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<164>*/ 				printf("\x0E\x01\x09\x04\x00\x07Content de savoir que le Vénérable\nva bien ! Moi, je reste ici tant que tous\nles méchants sont pas partis.")
          			  case 1:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x04Je vais attendre ici un moment !\nSi tu vois le Vénérable, dis\x2010le\x2010lui !")
          			}
          		  case 1:
/*<364>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf("J'suis pas bon à manger !\nJ'vaux pas un radis !\nLaisse\x2010moi filer !")
/*<160>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<597>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 				printf("\x0E\x01\x09\x04\x00\x05Hein ? Le Vénérable se fait du souci\npour moi ? Content d'entendre qu'il\nva bien en tout cas !")
          				flw_209:
/*<209>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 				printf("\x0E\x01\x09\x04\x00\x01Moi, c'est <b<Romar >>! Si tu vois le\nVénérable, dis\x2010lui que j'amasse\nma mousse ici.\n\n\x0E\x01\x09\x04\x00\x0FY a encore du danger par ici, je vais\nrester jusqu'à ce que les méchants\ndisparaissent.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<365>*/ 				set_camera(16, 0)
/*<366>*/ 				entrypoint_200_62();
          			  case 1:
/*<598>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf("\x0E\x01\x09\x04\x00\x05En fait, tu ressembles pas\ntrop à un monstre.\n\n\nUne fille avec une tête jaune ?<pause0F>\n\x0E\x01\x09\x04\x00\x13Sais pas, j'étais caché tout\nle temps, j'ai rien vu !")
          				goto flw_209
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Je ne détecte plus la présence de\nmonstres dans cette zone. Faire tomber\nle Tikwi de son arbre ne présente donc\npas de danger.\nIl ne semble pas pouvoir bouger par\nlui\x2010même. Il vous faut penser à un\nautre moyen.\n\nVous pouvez consulter à tout\nmoment la liste des actions\npossibles en appuyant sur (2).\x0E\x01\x11\x02\x5CD")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\x07Tu as trouvé tous mes compagnons,\nmerci !\n\n\n\x0E\x01\x09\x04\x00\x0BIci, y a pas de monstres, je suis\nen sécurité... je crois.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<169>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 171, 'param3': 13}
/*<171>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<172>*/ 					printf("\x0E\x01\x09\x04\x00\x07Heureux de savoir que le Vénérable\nva bien.\n\n\n\x0E\x01\x09\x04\x00\x13J'ai encore les racines qui tremblent,\nje vais rester ici un moment.")
          				  case 1:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\x04Je vais me reposer un peu ici. Si tu\nvois le Vénérable, tu lui diras, hein ?")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 207, 'param3': 31}
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf("\x0E\x01\x09\x04\x00\x11Fenouil ! Ail ! Ça fait mal !<pause1E>\nMais merci de m'avoir aidé.")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 167, 'param3': 13}
/*<167>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x00\x05Hmm ? Le Vénérable s'inquiète pour\nmoi ? Content d'entendre qu'il va bien,\nen tout cas !")
          					flw_212:
/*<212>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 211, 'param3': 13}
/*<211>*/ 					printf("\x0E\x01\x09\x04\x00\x01Je m'appelle <b<Jasmi>>. Si tu vois\nle Vénérable, dis\x2010lui que je suis ici.\n\n\n\x0E\x01\x09\x04\x00\x13Pfiou, j'ai encore les racines qui\ntremblent !")
/*<165>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<116>*/ 					set_camera(27, 0)
/*<400>*/ 					entrypoint_200_63();
          				  case 1:
/*<166>*/ 					printf("\x0E\x01\x09\x04\x00\x05Hmm ? Une fille ? Connais pas.\n\n\n\n\x0E\x01\x09\x04\x00\x04Le Vénérable sait sûrement quelque\nchose, lui.")
          					goto flw_212
          				}
          			}
          		  case 1:
/*<130>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 204, 'param3': 13}
/*<204>*/ 			set_camera(4, 0)
/*<129>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\xFECDTikwi !")
/*<111>*/ 			set_camera(5, 0)
/*<131>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 118, 'param3': 6}
/*<118>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 117, 'param3': 13}
/*<117>*/ 			printf("\x0E\x01\x09\x04\x00\x0BT'as battu tous les bonshommes\nrouges ! T'es...<pause0F> un justicier ?!\n\n\n\x0E\x01\x09\x04\x00\x13J'ai les racines qui flagellent, je peux\npas descendre... Tu veux pas m'aider ?")
/*<119>*/ 			temp_flags[1 /* 0x1 02 */] = true;
/*<133>*/ 			set_camera(6, 0)
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<333>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<332>*/ 		printf("Avant de partir vers le c\x153ur de la forêt\nsur les traces de dame Zelda, je vous\nrecommande de sauvegarder votre\nprogression.")
          	  case 1:
/*<327>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<328>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<330>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<331>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<325>*/ 						printf("Il n'y a pas d'autre aura de Tikwi dans\ncette zone.\n\n\nRetournez voir le Vénérable pour\nobtenir d'autres informations.")
          					  case 1:
          						flw_326:
/*<326>*/ 						printf("Depuis ici, la vue est dégagée. Je vous\nrecommande d'utiliser la fonction\ndétection pour chercher les Tikwis.")
          					}
          				  case 1:
          					goto flw_326
          				}
          			  case 1:
          				goto flw_326
          			}
          		  case 1:
/*<596>*/ 			printf("L'aura de dame Zelda est faible dans\ncette zone. Je vous recommande\nd'aller voir ailleurs.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<221>*/ 	start()
/*<334>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<329>*/ 		printf("\x0E\x01\x09\x04\x18\x1705Hmm ? Tu as quelque chose à me\ndemander ?\n[1]Les cubes[2]Le temple[3-]Non")
/*<476>*/ 		switch (choice(3)) {
          		  case 0:
/*<475>*/ 			printf("\x0E\x01\x09\x04\x16\x1E04Si tu touches un cube avec la lumière\nqui naît de ton épée, il disparaît dans\nle ciel.\n\nSelon les écrits anciens, il existe de\nnombreux cubes, un peu partout sur\nterre.")
          			flw_631:
/*<631>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<633>*/ 			printf("\x0E\x01\x09\x04\x08\xB04Les écrits anciens expliquent\nque le bâtiment qui se trouve à\nproximité s'appelle le temple de\nla contemplation...\n... et qu'il accueille les êtres venus\ndu ciel.")
/*<477>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_631
          			  case 1:
/*<478>*/ 				printf("\x0E\x01\x09\x04\x00\x1707D'ailleurs, il y avait une plaque de\npierre dans le coin...\n\n\n\x0E\x01\x09\x04\x16\xB00Elle portait des inscriptions...<pause0F>\nÇa devrait t'aider à trouver comment\nentrer dans le temple !")
          				goto flw_631
          			}
          		  case 2:
/*<632>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<626>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<480>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<521>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 32}
          				flw_479:
/*<479>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Ce cube est fait d'un métal que j'ai\njamais vu... Il a l'air indestructible !")
/*<494>*/ 				set_camera(-1, 0)
/*<505>*/ 				printf("\x0E\x01\x09\x04\x16\xB07Ça doit bien signifier quelque chose,\n« <r<l'épée des cieux>> » et « <r<la lumière issue\nde sa lame >>»...\n\n\x0E\x01\x09\x04\x00\x1705T'as pas une idée, toi ?")
/*<506>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 507, 'param3': 17}
/*<507>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 508, 'param3': 17}
/*<508>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 509, 'param3': 6}
/*<509>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<514>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<483>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_499:
/*<499>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 500, 'param3': 32}
/*<500>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 501, 'param3': 17}
/*<501>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 502, 'param3': 17}
/*<502>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 485, 'param3': 6}
/*<485>*/ 					set_camera(37, 0)
/*<486>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF05Regarde...<pause0F> Ça, c'est un trésor que\nla Déesse a laissé pour le héros venu\ndu ciel...\n\nJ'ai appelé ça<pause1E> un <b<cube de la Déesse >>!\n\n\n")
/*<487>*/ 					set_camera(-1, 0)
/*<488>*/ 					printf("\x0E\x01\x09\x04\x00\x1E04On peut lire dans les écrits anciens...\n\n\n\n« Si le porteur de l'épée des cieux<pause1E>\nles touche de la lumière issue de sa\nlame,<pause1E> il en sera récompensé. »")
/*<503>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 504, 'param3': 17}
/*<504>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 489, 'param3': 17}
/*<489>*/ 					printf("\x0E\x01\x09\x04\x18\x170BDis, t'as pas une épée, toi ? Je voudrais\nque tu m'aides à résoudre l'énigme\nde ces cubes !\n[1]D'accord[2]Je ne\nveux pas")
/*<491>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_490:
/*<490>*/ 						printf("\x0E\x01\x09\x04\x17\x1908Oh, merci !")
          						flw_493:
/*<493>*/ 						set_camera(37, 0)
          						goto flw_479
          					  case 1:
/*<492>*/ 						printf("\x0E\x01\x09\x04\x18\x170CAllez, s'il te plaît !\n[1]D'accord[2]Je ne\nveux pas")
/*<495>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_490
          						  case 1:
/*<496>*/ 							printf("\x0E\x01\x09\x04\x08\x07Ah je vois... Tu veux quelque chose\nen échange.")
/*<498>*/ 							give_item(161 0xA1);
/*<497>*/ 							printf("\x0E\x01\x09\x04\x17\x1906Avec ça, tu peux plus refuser !")
          							goto flw_493
          						}
          					}
          				  case 1:
/*<484>*/ 					printf("\x0E\x01\x09\x04\x17\x1908Tu arrives au bon moment !\n\n\n\nJe viens juste de découvrir quelque\nchose dont parlent les écrits anciens.")
          					goto flw_499
          				}
          			}
          		  case 1:
/*<628>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<629>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hé, toi ! Viens vite par ici !")
/*<630>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<627>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<624>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hé, toi ! Comme on se retrouve !\n\n\n\nPar ici ! J'aurais besoin de ton aide !")
/*<625>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf("")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x13Tu nous as tous trouvés...\nT'en fais un peu trop, non ?")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf("\x0E\x01\x09\x04\x00\x05J'comprends pas comment tu m'as\ntrouvé... J'étais parfaitement invisible\nà l'\x153il nu !")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 177, 'param3': 13}
/*<177>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<178>*/ 				printf("\x0E\x01\x09\x04\x00\x07Si tu as trouvé le Vénérable, tu dois\nêtre un as de la trouvette !")
          			  case 1:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x00\x14Mais tu n'as pas encore trouvé\nle Vénérable, on dirait...")
          			}
          		  case 1:
/*<345>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 372, 'param3': 31}
/*<372>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf("\x0E\x01\x09\x04\x00\x13Comment tu m'as trouvé ?\nJ'étais si bien caché !")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 210, 'param3': 13}
/*<210>*/ 			printf("\x0E\x01\x09\x04\x00\x01Mon petit nom, c'est <b<Basil>>.\nC'est moi le plus fort en cachettes\naprès le Vénérable.")
/*<637>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<676>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<373>*/ 			set_camera(38, 0)
/*<374>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<303>*/ 	start()
/*<304>*/ 	printf("")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x02Celle que tu appelles Zelda s'est rendue\nau temple au c\x153ur de la forêt.")
/*<120>*/ 			printf("En utilisant le <y<lance\x2010pierre>>, tu devrais\npouvoir te rendre jusqu'au temple\nau c\x153ur de la forêt.\n\n\x0E\x01\x09\x04\x00\x06Puisses\x2010tu trouver ton amie ! Hoho !")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf("\x0E\x01\x09\x04\x00\x01Sers\x2010toi de moi comme d'un\nmarchepied et prends\x2010le !")
          				  case 1:
/*<109>*/ 					printf("\x0E\x01\x09\x04\x00\x01Monte vite sur mon dos, et attrape\x2010le !")
          				}
          			  case 1:
          				flw_128:
/*<128>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x00\nHoho ! Tout le monde va bien ?\nJe ne dois plus m'inquiéter, alors !\n\n\nTu es vraiment doué pour trouver les\ngens ! Je ne sais pas qui tu es ni\nd'où tu viens, mais je te remercie.")
/*<604>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<605>*/ 					printf("\x0E\x01\x09\x04\x00\x08Hmm ? Tu recherches aussi une amie ?\n\n\n\nIl y avait bien une fille avec des poils\njaunes sur la tête...")
          					flw_595:
/*<595>*/ 					set_camera(-1, 0)
/*<420>*/ 					printf("\x0E\x01\x09\x04\x00\x02Celle que tu appelles Zelda a dit\nqu'elle devait se rendre au temple\nqui se trouve au c\x153ur de la forêt...\n\nJe lui ai dit de ne pas y aller parce que\nc'est dangereux, mais elle m'a grimpé\ndessus et y est allée quand même !")
/*<421>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 422, 'param3': 32}
/*<422>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 423, 'param3': 17}
/*<423>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 424, 'param3': 6}
/*<424>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 427, 'param3': 17}
/*<427>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 425, 'param3': 6}
/*<425>*/ 					set_camera(31, 0)
/*<126>*/ 					set_camera(7, 0)
/*<140>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 141, 'param3': 15}
/*<141>*/ 					make_actor_do_something(3, 0)
/*<125>*/ 					printf("\x0E\x01\x09\x04\x00\x03Si tu continues par là, tu devrais\narriver au temple...<pause0F> Mais attention\naux monstres qui rôdent...")
/*<428>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 144, 'param3': 17}
/*<144>*/ 					set_camera(8, 0)
/*<145>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 146, 'param3': 15}
/*<146>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 309, 'param3': 17}
/*<309>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 426, 'param3': 17}
/*<426>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 127, 'param3': 6}
/*<127>*/ 					printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\x1CDOh mais attends !\n\n\n\nPour te remercier d'avoir retrouvé\nmes compagnons, je vais te donner\nnotre trésor.\n\n\x0E\x01\x09\x04\x00\x08Attention là\x2010dessous !")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<606>*/ 					printf("\x0E\x01\x09\x04\x00\x09Maintenant que je suis rassuré,\nje me souviens par où est partie\nton amie !")
          					goto flw_595
          				}
          			}
          		}
          	  case 1:
/*<147>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<148>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<149>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<150>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<409>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 408, 'param3': 6}
/*<408>*/ 						set_camera(29, 0)
/*<677>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_410:
/*<410>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<526>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_128
          					  case 1:
/*<151>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<592>*/ 						switch (choice(2)) {
          						  case 0:
/*<594>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<590>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_593:
/*<593>*/ 							set_camera(29, 0)
/*<591>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<152>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_410
          						  case 1:
/*<675>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_593
          						}
          					}
          				  case 1:
/*<179>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<181>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel, Romar et Jasmi sont sains et\nsaufs, dis\x2010tu ?\n\n\nEst\x2010ce que ça te déracinerait de\nchercher encore <r<un>> de mes petits\ncompagnons ?\n\n\x0E\x01\x09\x04\x00\x02Il aime se fondre dans les herbes,\nalors je te conseille de chercher...\ndes herbes.\n\nEncore un effort, et je me rappellerai\noù ton amie est allée.")
          					  case 1:
/*<214>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<530>*/ 						switch (choice(2)) {
          						  case 0:
/*<532>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_531:
/*<531>*/ 							set_camera(29, 0)
/*<528>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<529>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hoho ! Pirsel, Romar et Jasmi\nsont sains et saufs, dis\x2010tu ?\n\n\nMais la forêt grouille encore de\nmonstres, je ne peux pas bouger d'ici...")
/*<533>*/ 							set_camera(-1, 0)
/*<534>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_411:
/*<411>*/ 								printf("\x0E\x01\x09\x04\x00\x08Est\x2010ce que ça te déracinerait de\nchercher encore <r<un>> de mes petits\ncompagnons ?\n\nIl aime se fondre dans les herbes,\nalors je te conseille de chercher\ndes herbes.\n\n\x0E\x01\x09\x04\x00\x02Si tu le trouves, cela m'aidera à me\nrappeler où ton amie est allée.")
          								flw_180:
/*<180>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<418>*/ 								set_camera(30, 0)
/*<419>*/ 								entrypoint_200_61();
          							  case 1:
/*<535>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_411
          							}
          						  case 1:
          							goto flw_531
          						}
          					}
          				}
          			  case 1:
/*<182>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<183>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<186>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel, Romar et Basil\nsont sains et saufs, dis\x2010tu ?\n\n\nEst\x2010ce que ça te déracinerait de\nchercher encore <r<un>> de mes\npetits compagnons ?\n\n\x0E\x01\x09\x04\x00\x02Il aime monter dans les\narbres, alors je te conseille\nde chercher... des arbres.\n\nEncore un effort, et je me\nrappellerai où ton amie est allée !")
          					  case 1:
/*<215>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<539>*/ 						switch (choice(2)) {
          						  case 0:
/*<541>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<537>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_540:
/*<540>*/ 							set_camera(29, 0)
/*<538>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<536>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hoho ! Pirsel, Romar et Basil\nsont sains et saufs, dis\x2010tu ?\n\n\nMais la forêt grouille encore de\nmonstres, je ne peux pas bouger d'ici...")
/*<542>*/ 							set_camera(-1, 0)
/*<543>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_412:
/*<412>*/ 								printf("\x0E\x01\x09\x04\x00\x08Est\x2010ce que ça te déracinerait de\nchercher encore <r<un>> de mes petits\ncompagnons ?\n\nIl aime monter dans les arbres, alors je\nte conseille de chercher... des arbres.\n\n\n\x0E\x01\x09\x04\x00\x02Si tu le trouves, cela m'aidera à me\nrappeler où ton amie est allée.")
          								goto flw_180
          							  case 1:
/*<544>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_412
          							}
          						  case 1:
          							goto flw_540
          						}
          					}
          				  case 1:
/*<184>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<185>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel et Romar vont bien, tant mieux !\nMais je m'inquiète encore pour\nles autres...\n\nEst\x2010ce que ça te déracinerait de\nchercher encore <r<deux>> de mes\npetits compagnons ?\n\n\x0E\x01\x09\x04\x00\x08Ton amie est partie par là.\nOh, attends, non !\nC'était peut\x2010être par ici...")
          					  case 1:
/*<216>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<548>*/ 						switch (choice(2)) {
          						  case 0:
/*<550>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<546>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_549:
/*<549>*/ 							set_camera(29, 0)
/*<547>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<545>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hoho ! Pirsel et Romar\nsont sains et saufs, dis\x2010tu ?\n\n\nMais la forêt grouille encore de\nmonstres, je ne peux pas bouger d'ici...")
/*<551>*/ 							set_camera(-1, 0)
/*<552>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_413:
/*<413>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça te déracinerait de\nchercher encore <r<deux>> de mes\npetits compagnons ?\n\nSi tu les trouves, cela m'aidera à me\nrappeler où ton amie est allée.")
          								goto flw_180
          							  case 1:
/*<553>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_413
          							}
          						  case 1:
          							goto flw_549
          						}
          					}
          				}
          			}
          		  case 1:
/*<187>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<188>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<189>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<197>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel, Basil et Jasmi\nsont sains et saufs, dis\x2010tu ?\n\n\nEst\x2010ce que ça te déracinerait de\nchercher encore <r<un>> de mes\npetits compagnons ?\n\nIl aime se déguiser en plante, \nalors je te conseille de\nchercher... des plantes.\n\n\x0E\x01\x09\x04\x00\x02Encore un effort, et je me\nrappellerai où ton amie est allée !")
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<557>*/ 						switch (choice(2)) {
          						  case 0:
/*<559>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<555>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_558:
/*<558>*/ 							set_camera(29, 0)
/*<556>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<554>*/ 							printf("\x0E\x01\x09\x04\x00\x03Ho ho ! Pirsel, Basil et Jasmi\nsont sains et saufs, dis\x2010tu ?\n\n\nMais la forêt grouille encore de\nmonstres, et je ne peux pas bouger\nd'ici...")
/*<560>*/ 							set_camera(-1, 0)
/*<561>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_414:
/*<414>*/ 								printf("\x0E\x01\x09\x04\x00\x08Est\x2010ce que ça te déracinerait de\nchercher encore <r<un>> de mes\npetits compagnons ?\n\nIl aime se déguiser en plante, \nalors je te conseille de\nchercher... des plantes.\n\n\x0E\x01\x09\x04\x00\x02Si tu le trouves, cela m'aidera à me\nrappeler où ton amie est allée.")
          								goto flw_180
          							  case 1:
/*<562>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_414
          							}
          						  case 1:
          							goto flw_558
          						}
          					}
          				  case 1:
/*<190>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<191>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel et Jasmi vont bien, tant mieux !\nMais je m'inquiète encore pour\nles autres...\n\nEst\x2010ce que ça te déracinerait de\nchercher encore <r<deux>> de mes\npetits compagnons ?\n\n\x0E\x01\x09\x04\x00\x08Ton amie est partie par là.\nOh, attends, non !\nC'était peut\x2010être par ici...")
          					  case 1:
/*<218>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<566>*/ 						switch (choice(2)) {
          						  case 0:
/*<568>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<564>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_567:
/*<567>*/ 							set_camera(29, 0)
/*<565>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<563>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hoho ! Pirsel et Jasmi\nsont sains et saufs, dis\x2010tu ?\n\n\nMais la forêt grouille encore de\nmonstres, je ne peux pas bouger d'ici...")
/*<569>*/ 							set_camera(-1, 0)
/*<570>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_415:
/*<415>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça te déracinerait de\nchercher encore <r<deux>> de mes\npetits compagnons ?\n\nSi tu les trouves, cela m'aidera à me\nrappeler où ton amie est allée.")
          								goto flw_180
          							  case 1:
/*<571>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_415
          							}
          						  case 1:
          							goto flw_567
          						}
          					}
          				}
          			  case 1:
/*<192>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<193>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<196>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel et Basil vont bien, tant mieux !\nMais je m'inquiète encore pour\nles autres...\n\nEst\x2010ce que ça te déracinerait de\nchercher encore <r<deux>> de mes\npetits compagnons ?\n\n\x0E\x01\x09\x04\x00\x08Ton amie est partie par là.\nOh, attends, non !\nC'était peut\x2010être par ici...")
          					  case 1:
/*<219>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<575>*/ 						switch (choice(2)) {
          						  case 0:
/*<577>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<573>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_576:
/*<576>*/ 							set_camera(29, 0)
/*<574>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<572>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hoho ! Pirsel et Basil\nsont sains et saufs, dis\x2010tu ?\n\n\nMais la forêt grouille encore de\nmonstres, je ne peux pas bouger d'ici...")
/*<578>*/ 							set_camera(-1, 0)
/*<579>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_416:
/*<416>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça te déracinerait de\nchercher encore <r<deux>> de mes\npetits compagnons ?\n\nSi tu les trouves, cela m'aidera à me\nrappeler où ton amie est allée.")
          								goto flw_180
          							  case 1:
/*<580>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_416
          							}
          						  case 1:
          							goto flw_576
          						}
          					}
          				  case 1:
/*<194>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf("\x0E\x01\x09\x04\x00\x03Pirsel va bien, tant mieux ! Mais je\nm'inquiète encore pour les autres...\n\n\nEst\x2010ce que ça te déracinerait de\nchercher <r<trois>> de mes petits\ncompagnons ?\n\n\x0E\x01\x09\x04\x00\x08Ma mémoire me joue des tours,\nje ne me souviens plus par où\nest partie ton amie !")
          					  case 1:
/*<220>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hoho !<pause0F> Je suis <b<Lorion>>, chef des Tikwis.\n\n\n\nTu as percé mon camouflage,\nton \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert !\n\n[1]Où est\nZelda ?[2]J'ai un\nmessage")
/*<584>*/ 						switch (choice(2)) {
          						  case 0:
/*<586>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<582>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nAh ! Tu parles de la fille qui te\nressemble, avec des poils jaunes sur\nla tête ? Oui, elle était avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard.\nLa forêt est remplie de monstres,\net j'ai perdu mes petits compagnons\nde vue...\nJe suis très inquiet pour eux, et\ndans cet état, mes souvenirs sont\ntrès confus.")
          							flw_585:
/*<585>*/ 							set_camera(29, 0)
/*<583>*/ 							printf("\x0E\x01\x09\x04\x00\x0EComment ? Tu as rencontré un de\nmes petits compagnons ?")
/*<581>*/ 							printf("\x0E\x01\x09\x04\x00\x03Ho ho ! Pirsel est sain et sauf, dis\x2010tu ?\n\n\n\nMais la forêt grouille encore de\nmonstres, je ne peux pas bouger d'ici...")
/*<587>*/ 							set_camera(-1, 0)
/*<588>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_417:
/*<417>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça te déracinerait de\nchercher <r<trois>> de mes petits\ncompagnons ?\n\nSi tu les retrouves tous, je pense\nque je me rappellerai où ton amie\nest allée.")
          								goto flw_180
          							  case 1:
/*<589>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie ?\n\n\n\nHmm... Il y avait une fille avec des\npoils jaunes sur la tête avec moi,\nil y a un moment.\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela\nmaintenant. La forêt est remplie\nde monstres, et j'ai perdu mes petits\ncompagnons de vue...\nJe suis très inquiet pour eux,\net dans cet état, mes souvenirs\nsont très confus.")
          								goto flw_417
          							}
          						  case 1:
          							goto flw_585
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, voici des\ninformations à propos de l'utilisation\nde vos objets.\n\nEn <g<appuyant brièvement >>sur (B),\nvous vous apprêterez à tirer au\n<y<lance\x2010pierre>>, puisqu'il s'agit du\ndernier objet que vous avez utilisé.\x0E\x01\x11\x02\x1CD\nSi vous n'arrivez pas à viser\ncorrectement, <g<recentrez le viseur\n>>en pointant la télécommande Wii\nvers l'écran et en appuyant sur (v).\x0E\x01\x11\x02\x9CD")
          }

          void entrypoint_200_92() {
/*<305>*/ 	start()
/*<306>*/ 	printf("")
          }

          void entrypoint_200_40() {
/*<336>*/ 	start()
/*<337>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x01Maître, nous sommes arrivés\ndans la <b<forêt de Firone>>.")
/*<355>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 205, 'param3': 13}
/*<205>*/ 	set_camera(3, 0)
/*<602>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 603, 'param3': 13}
/*<603>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': -1, 'param3': 6}
          }

          void entrypoint_200_59() {
/*<206>*/ 	start()
/*<621>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<623>*/ 		printf("\x0E\x01\x12\x04\x00\x04Maître Link, la\nprobabilité que la flamme sacrée se\ntrouve dans le lac est de 80 %.")
          	  case 1:
/*<622>*/ 		printf("\x0E\x01\x12\x04\x00\x04Maître Link, la\nprobabilité que la flamme sacrée se\ntrouve par\x2010delà cette porte est de 80 %.\n\nL'ermite Tikwi a révélé que le pouvoir\nde la Déesse permettait de compléter\nle symbole. Il est probable qu'il faisait\nréférence à l'<r<éclat céleste>>.\nInvoquez l'éclat céleste devant\nla porte et <g<complétez le dessin>>.")
/*<655>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<338>*/ 	start()
/*<339>*/ 	printf("\x0E\x01\x05\x04K\x00La grande quantité d'eau présente\nici favorise la poussée de grands\narbres et de plantes.")
          }

          void entrypoint_200_93() {
/*<445>*/ 	start()
/*<446>*/ 	printf("\x0E\x01\x09\x04\x00\x01Hé, toi ! Comme on se retrouve !")
/*<513>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<132>*/ 	start()
/*<213>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<601>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 660, 'param3': 13}
/*<660>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<662>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<661>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<600>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<340>*/ 	start()
/*<341>*/ 	printf("\x0E\x01\x05\x04K\x00De nombreuses créatures vivent\négalement dans cet environnement\nnaturel favorable.")
          }

          void entrypoint_200_94() {
/*<447>*/ 	start()
/*<453>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 455, 'param3': 46}
/*<455>*/ 	set_camera(35, 0)
/*<457>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<516>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<515>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAttends une seconde !\n\n\n\nJ'aimerais que tu m'aides à résoudre\nle mystère des cubes.")
          			flw_465:
/*<465>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 463, 'param3': 49}
/*<463>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 464, 'param3': 15}
/*<464>*/ 			set_camera(36, 0)
/*<511>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<517>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé, t'en va pas !\n\n\n\nJ'ai quelque chose à te demander.\n\n")
          			goto flw_465
          		}
          	  case 1:
/*<462>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<481>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<461>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDAttends une minute !\n\n\n\n\x0E\x01\x09\x04\x17\x600Fais pas semblant de ne pas m'avoir\nremarqué !<pause0F> Tu m'aimes pas, ou quoi ?\n[1]Oups, pardon ![2]Je ne\nt'aime pas")
/*<459>*/ 		switch (choice(2)) {
          		  case 0:
/*<458>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Ah bon, tu recherches une jeune fille\net tu es pressé ? Excuse\x2010moi !\n\n\nMais... j'aimerais que tu m'accordes\nune minute.")
          			goto flw_465
          		  case 1:
/*<460>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Ah... C'est ainsi, les explorateurs\nseront de tout temps des incompris...\n\n\nMais accorde\x2010moi une minute, si tu\nveux bien.")
          			goto flw_465
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 232, 'param3': 51}
/*<232>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 223, 'param3': 17}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 227, 'param3': 13}
/*<227>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 432, 'param3': 6}
/*<432>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 224, 'param3': 49}
/*<224>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 226, 'param3': 13}
/*<226>*/ 	make_actor_do_something(0, 0)
/*<234>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 433, 'param3': 6}
/*<433>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 435, 'param3': 50}
/*<435>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, vous venez\nd'obtenir une information concernant\ndame Zelda.\n\nElle s'est enfuie après avoir été\nattaquée par des monstres.<pause0F>\nElle est très probablement encore\nen danger.")
/*<156>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 358, 'param3': 30}
/*<358>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 335, 'param3': 6}
/*<335>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<155>*/ 	printf("<pling>J'ai marqué la position du Tikwi Pirsel.\nRegardez votre carte.")
/*<159>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 359, 'param3': 34}
/*<359>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 225, 'param3': 6}
/*<225>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 302, 'param3': 13}
/*<302>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 157, 'param3': 17}
/*<157>*/ 	printf("La fonction détection a réagi au Tikwi\ncar il a dû être en contact avec dame\nZelda.\n\nLa probabilité que le Vénérable,\nqui s'est enfui avec dame Zelda,\nfasse également réagir la détection\nest de 85 %.\n\nJe vous recommande en conséquence\nde continuer à rechercher dame Zelda\navec ma fonction détection.")
/*<158>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 434, 'param3': 36}
/*<434>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 231, 'param3': 6}
/*<231>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 277, 'param3': 13}
/*<277>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 363, 'param3': 6}
/*<363>*/ 	set_camera(19, 0)
/*<278>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 230, 'param3': 17}
/*<230>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 229, 'param3': 13}
/*<229>*/ 	printf("\x0E\x01\x09\x04\x00\x0DAaah, j'ai failli tomber dans les\npommes de peur ! Ta copine bleue\nest vraiment bizarre...")
/*<523>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 522, 'param3': 13}
/*<522>*/ 	printf("\x0E\x01\x09\x04\x00\x07T'as l'air de vouloir partir à leur\nrecherche. Tu pourrais <r<dire>><r< au\n>><b<Vénérable>> <r<que je vais bien>>, si ça\nte déracine pas ?\n\x0E\x01\x09\x04\x00\x05Ton amie comme toi est sûrement\navec lui !")
/*<618>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<619>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<142>*/ 	start()
/*<143>*/ 	printf("\x0E\x01\x09\x04\x00\x02Avec ça, tu devrais pouvoir te rendre\nau temple au c\x153ur de la forêt.")
/*<380>*/ 	set_camera(21, 0)
/*<381>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 382, 'param3': 15}
/*<382>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 383, 'param3': 32}
/*<383>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 384, 'param3': 17}
/*<384>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 385, 'param3': 17}
/*<385>*/ 	set_camera(22, 0)
/*<388>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<390>*/ 		printf("\x0E\x01\x09\x04\x00\x08Vise donc cette liane entortillée\npour comm...<pause0F> Hmm ?\n\n\nTu es un rapide, dis donc !<pause0F>\nBah, au moins, ça va faciliter\nles explications.")
          		flw_391:
/*<391>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sors ton lance\x2010pierre avec (B), puis tire\nen appuyant sur (A)\x0E\x01\x11\x02\x1CD.\n\n\nSi tu es à court de munitions,\ntu pourras <g<trouver des graines>>\ndans les fruits des arbres du coin.")
/*<386>*/ 		set_camera(23, 0)
/*<394>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 393, 'param3': 17}
/*<393>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<387>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 392, 'param3': 17}
/*<392>*/ 			printf("\x0E\x01\x09\x04\x00\x06Puisses\x2010tu trouver ton amie ! Hoho !")
/*<398>*/ 			set_camera(25, 0)
/*<399>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<395>*/ 			printf("\x0E\x01\x09\x04\x00\x06Puisses\x2010tu trouver ton amie ! Hoho !")
/*<396>*/ 			set_camera(24, 0)
/*<397>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<389>*/ 		printf("\x0E\x01\x09\x04\x00\x08Pour commencer, essaie de viser\ncette liane entortillée.")
          		goto flw_391
          	}
          }

          void entrypoint_200_43() {
/*<342>*/ 	start()
/*<343>*/ 	printf("\x0E\x01\x05\x04K\x00Mon analyse suggère que dame Zelda\nse trouve quelque part dans cette forêt.\n\n\n\x0E\x01\x05\x04K\x00Je vous recommande donc de la\nchercher à l'aide de ma fonction\ndétection.")
/*<644>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<645>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<450>*/ 	start()
/*<454>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 456, 'param3': 46}
/*<456>*/ 	set_camera(35, 0)
/*<466>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<519>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<518>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAttends une seconde !\n\n\n\nJ'aimerais que tu m'aides à résoudre\nle mystère des cubes.")
          			flw_474:
/*<474>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 472, 'param3': 49}
/*<472>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 473, 'param3': 15}
/*<473>*/ 			set_camera(36, 0)
/*<512>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<520>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé, t'en va pas !\n\n\n\nJ'ai quelque chose à te demander.\n\n")
          			goto flw_474
          		}
          	  case 1:
/*<471>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<482>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<470>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDAttends une minute !\n\n\n\n\x0E\x01\x09\x04\x17\x600Fais pas semblant de ne pas m'avoir\nremarqué !<pause0F> Tu m'aimes pas, ou quoi ?\n[1]Oups, pardon ![2]Je ne\nt'aime pas")
/*<468>*/ 		switch (choice(2)) {
          		  case 0:
/*<467>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Ah bon, tu recherches une jeune fille\net tu es pressé ? Excuse\x2010moi !\n\n\nMais... j'aimerais que tu m'accordes\nune minute.")
          			goto flw_474
          		  case 1:
/*<469>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Ah... C'est ainsi, les explorateurs\nseront de tout temps des incompris...\n\n\nMais accorde\x2010moi une minute, si tu\nveux bien.")
          			goto flw_474
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<651>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<200>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 405, 'param3': 51}
/*<405>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 201, 'param3': 17}
/*<201>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 199, 'param3': 16}
/*<199>*/ 	printf("Malheureusement, le Vénérable n'est\nplus avec dame Zelda.<pause0F> Cependant,\nil semble posséder des informations.\n\nLes chances d'obtenir des informations\nsur dame Zelda en aidant le Vénérable\nà retrouver ses compagnons perdus\nsont de 85 %.\nJ'ai ajouté l'<r<<pling>aura des Tikwis >>à\nla fonction détection.")
/*<653>*/ 	open_dowsing_wheel(1)
/*<654>*/ 	printf("Souhaitez\x2010vous des informations\ncomplémentaires sur le changement\nde cible de ma fonction détection ?\n[1]Oui[2-]Non")
/*<636>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_524:
/*<524>*/ 		printf("Maintenez (C) enfoncé pour afficher\nles cibles possibles de la fonction\ndétection.\x0E\x01\x11\x02\x6CD\n\nSélectionnez ce que vous souhaitez\ndétecter <g<avec la télécommande Wii\n>>puis relâchez (C) pour valider.\x0E\x01\x11\x02\x6CD\n\nSi vous ne souhaitez rien détecter,\nsélectionnez la <g<vue subjective>> et\nrelâchez (C).\n[1]Encore\nune fois[2-]Compris")
/*<525>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_524
          		  case 1:
          			flw_652:
/*<652>*/ 			printf("Les Tikwis que vous avez déjà trouvés\nseront indiqués sur la carte et ne\nferont plus réagir ma fonction\ndétection.\nVous pouvez maintenant partir à la\nrecherche des Tikwis perdus.")
/*<648>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<649>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 650, 'param3': 36}
/*<650>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_652
          	}
          }

          void entrypoint_200_44() {
/*<356>*/ 	start()
/*<357>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<451>*/ 	start()
/*<452>*/ 	printf("\x0E\x01\x09\x04\x15\x1908Oooh ! Le cube s'en est allé dans le ciel !\n\n\n\n\x0E\x01\x09\x04\x13\x1B00Il a réagi à la lumière que ton épée\na libérée...\n\n\n\x0E\x01\x09\x04\x00\x1B05Où le cube a\x2010t\x2010il bien pu aller\nexactement ? Le mystère ne fait\nque s'épaissir...\n\n\x0E\x01\x09\x04\x16\x1E00Selon les écrits anciens, il existe de\nnombreux cubes sur la terre...\n\n\n\x0E\x01\x09\x04\x00\x1700Essaie d'en trouver d'autres, et dis\x2010moi\nsi tu en apprends plus à leur sujet !")
/*<510>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<235>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<236>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<244>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<245>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<246>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<241>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 287, 'param3': 51}
/*<287>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 285, 'param3': 17}
/*<285>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 286, 'param3': 13}
/*<286>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 243, 'param3': 6}
/*<243>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 240, 'param3': 16}
/*<240>*/ 						printf("La fonction détection ne réagit plus\nà aucune aura dans les environs.\n\n\nJe vous recommande de retourner\nauprès du Vénérable pour obtenir\nd'autres informations.")
/*<242>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          						flw_288:
/*<288>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 368, 'param3': 6}
/*<368>*/ 						set_camera(17, 0)
/*<367>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 371, 'param3': 17}
/*<371>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 370, 'param3': 17}
/*<370>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 369, 'param3': 13}
/*<369>*/ 						printf("\x0E\x01\x09\x04\x00\x14Ah ! Me fais pas peur comme ça !")
/*<406>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_238:
/*<238>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 284, 'param3': 51}
/*<284>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 282, 'param3': 17}
/*<282>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 283, 'param3': 13}
/*<283>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 239, 'param3': 6}
/*<239>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 612, 'param3': 16}
/*<612>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<237>*/ 							printf("J'ai <pling>marqué la position du Tikwi\nRomar. Cependant, la fonction\ndétection semble indiquer la présence\nd'autres Tikwis.")
          							flw_308:
/*<308>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 599, 'param3': 17}
/*<599>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 288, 'param3': 36}
          							goto flw_288
          						  case 1:
/*<613>*/ 							printf("J'ai <pling>marqué la position du Tikwi\nRomar. Dame Zelda n'était pas\navec lui.")
          							goto flw_308
          						}
          					}
          				  case 1:
          					goto flw_238
          				}
          			  case 1:
          				goto flw_238
          			}
          		  case 1:
          			goto flw_238
          		}
          	  case 1:
          		goto flw_238
          	}
          }

          void entrypoint_200_10() {
/*<310>*/ 	start()
/*<607>*/ 	set_camera(-1, 0)
/*<608>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 609, 'param3': 40}
/*<609>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 610, 'param3': 13}
/*<610>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 350, 'param3': 6}
/*<350>*/ 	set_camera(15, 0)
/*<348>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 353, 'param3': 6}
/*<353>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 354, 'param3': 24}
/*<354>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 347, 'param3': 15}
/*<347>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 349, 'param3': 13}
/*<349>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 351, 'param3': 14}
/*<351>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 313, 'param3': 13}
/*<313>*/ 	printf("\x0E\x01\x09\x04\x00\x07Hé, le vert, c'est moi !\nT'as trouvé ton amie comme toi ?\n[1]Qui es\x2010tu ?[2]Pas encore")
/*<314>*/ 	switch (choice(2)) {
          	  case 0:
/*<317>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 315, 'param3': 13}
/*<315>*/ 		printf("\x0E\x01\x09\x04\x00\x13Gnu ? Tu m'as déjà oublié ? C'est moi,\n<b<Pirsel>> ! C'est pas très gentil...")
          		flw_319:
/*<319>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 320, 'param3': 13}
/*<320>*/ 		printf("\x0E\x01\x09\x04\x00\x07J'ai retrouvé tous mes amis Tikwis !\nC'est grâce à toi, le vert !")
/*<312>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 318, 'param3': 13}
/*<318>*/ 		printf("\x0E\x01\x09\x04\x00\x05J'espère que tu trouveras ton amie\ncomme toi !")
/*<321>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 322, 'param3': 14}
/*<322>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<344>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<311>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 316, 'param3': 13}
/*<316>*/ 		printf("\x0E\x01\x09\x04\x00\x13Ah... Mais au moins, tu sais vers où\nelle est allée...")
          		goto flw_319
          	}
          }

          void entrypoint_200_63() {
/*<247>*/ 	start()
/*<248>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<249>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<258>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<259>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<260>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<255>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 294, 'param3': 35}
/*<294>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 292, 'param3': 17}
/*<292>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 293, 'param3': 13}
/*<293>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 257, 'param3': 6}
/*<257>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 254, 'param3': 16}
/*<254>*/ 						printf("La fonction détection ne réagit plus\nà aucune aura dans les environs.\n\n\nJe vous recommande de retourner\nauprès du Vénérable pour obtenir\nd'autres informations.")
/*<256>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          						flw_295:
/*<295>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 402, 'param3': 6}
/*<402>*/ 						set_camera(26, 0)
/*<401>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 298, 'param3': 17}
/*<298>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 297, 'param3': 17}
/*<297>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 						printf("\x0E\x01\x09\x04\x00\x0DAaah, ne me fais pas peur comme ça !\nJ'ai encore cru que c'était un monstre !")
/*<611>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<620>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
          						flw_251:
/*<251>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 291, 'param3': 35}
/*<291>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 289, 'param3': 17}
/*<289>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 290, 'param3': 13}
/*<290>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 253, 'param3': 6}
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 614, 'param3': 16}
/*<614>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<250>*/ 							printf("J'ai <pling>marqué la position du Tikwi Jasmi.\nCependant, la fonction détection\nsemble indiquer la présence d'autres\nTikwis.")
          							flw_307:
/*<307>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 252, 'param3': 17}
/*<252>*/ 							{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 295, 'param3': 36}
          							goto flw_295
          						  case 1:
/*<615>*/ 							printf("J'ai <pling>marqué la position du Tikwi Jasmi.\nDame Zelda n'était pas avec lui.")
          							goto flw_307
          						}
          					}
          				  case 1:
          					goto flw_251
          				}
          			  case 1:
          				goto flw_251
          			}
          		  case 1:
          			goto flw_251
          		}
          	  case 1:
          		goto flw_251
          	}
          }

          void entrypoint_200_64() {
/*<261>*/ 	start()
/*<262>*/ 	switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          	  case 0:
/*<263>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<269>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<270>*/ 				switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          				  case 0:
/*<271>*/ 					switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          					  case 0:
/*<267>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 268, 'param3': 51}
/*<268>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 404, 'param3': 16}
/*<404>*/ 						printf("La fonction détection ne réagit plus\nà aucune aura dans les environs.\n\n\nJe vous recommande de retourner\nauprès du Vénérable pour obtenir\nd'autres informations.")
          						flw_265:
/*<265>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 233, 'param3': 36}
/*<233>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 376, 'param3': 6}
/*<376>*/ 						set_camera(17, 0)
/*<375>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 378, 'param3': 17}
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 377, 'param3': 17}
/*<377>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 174, 'param3': 13}
/*<174>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<175>*/ 							printf("\x0E\x01\x09\x04\x00\x05Tu as vu le Vénérable ? Waouh,\ntu l'as trouvé aussi !\n\n\n\x0E\x01\x09\x04\x00\x14Si tu le revois, dis\x2010lui que je suis ici !")
          							flw_407:
/*<407>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<173>*/ 							printf("\x0E\x01\x09\x04\x00\x04Normal, le Vénérable, c'est le\nplus fort en cachettes ! Tu penses\nque tu peux le trouver ?")
          							goto flw_407
          						}
          					  case 1:
          						flw_264:
/*<264>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 266, 'param3': 51}
/*<266>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 616, 'param3': 16}
/*<616>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<403>*/ 							printf("J'ai <pling>marqué la position du Tikwi Basil.\nCependant, la fonction détection\nsemble indiquer la présence d'autres\nTikwis.")
          							goto flw_265
          						  case 1:
/*<617>*/ 							printf("J'ai <pling>marqué la position du Tikwi Basil.\nDame Zelda n'était pas avec lui.")
          							goto flw_265
          						}
          					}
          				  case 1:
          					goto flw_264
          				}
          			  case 1:
          				goto flw_264
          			}
          		  case 1:
          			goto flw_264
          		}
          	  case 1:
          		goto flw_264
          	}
          }

          void entrypoint_200_99() {
/*<448>*/ 	start()
/*<449>*/ 	printf("Toi qui descends du ciel sur\nla terre, frappe l'étoile vers\nlaquelle se dirige l'oiseau aux\nailes déployées.")
          }

          void entrypoint_200_65() {
/*<634>*/ 	start()
/*<635>*/ 	printf("La végétation est identique à celle de\nla forêt de Firone. Nous sommes très\nprobablement au c\x153ur de la forêt.\n\nDame Zelda s'est dirigée vers le\ntemple. Reprenons les recherches.")
/*<646>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<647>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<272>*/ 	start()
/*<323>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, je ressens\nl'aura de dame <b<Zelda>> à l'intérieur\nde cette construction.")
/*<324>*/ 	set_camera(13, 0)
/*<279>*/ 	set_camera(-1, 0)
/*<273>*/ 	printf("Cependant, je ressens également la\nprésence d'une multitude de monstres.\nSouhaitez\x2010vous tout de même\ncontinuer ?\n[1]Bien sûr[2]Non")
/*<274>*/ 	switch (choice(2)) {
          	  case 0:
/*<276>*/ 		printf("Restez prudent. Personne ne pourra\nvenir vous aider ici.")
          		flw_280:
/*<280>*/ 		set_camera(14, 0)
/*<281>*/ 		printf("Si le danger devient trop grand, vous\npouvez toujours <g<retourner dans le\nciel >>pour mieux vous préparer.")
/*<642>*/ 		set_camera(-1, 0)
/*<638>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<640>*/ 			printf("Il est toujours bon d'avoir sur vous\nun <r<bouclier>> pour vous protéger et\ndes <r<potions>> pour vous soigner.")
          			flw_641:
/*<641>*/ 			printf("Repartons à la recherche de dame\nZelda.")
          		  case 1:
/*<639>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître, vous n'avez pas équipé de\n<r<bouclier>>. Je vous recommande de\ntoujours en avoir un à portée de main.")
          			goto flw_641
          		}
          	  case 1:
/*<275>*/ 		printf("La peur participe à l'instinct de\nconservation des créatures vivantes.\nIl n'y a pas de honte à avoir.")
          		goto flw_280
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, Fay au rapport.\n<pling><r<Ma fonction détection réagit>>\nà cette créature.\n[1]Ah bon ?[2]C'était\nZelda ?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf("\x0E\x01\x12\x04\x00\x05Oui, Maître. Mon analyse suggère qu'il\ns'agit d'un <b<Tikwi>>, une des créatures\npacifiques qui peuplent la forêt.\n\nIls sont doués de parole et disposent\nde grandes connaissances.<pause0F>\nIl ne s'agit pas de dame Zelda.\n\nLa raison pour laquelle il fait réagir\nla fonction détection m'est inconnue.\nJe vous encourage à rattraper ce Tikwi\npour éclaircir ce mystère.")
          		flw_134:
/*<134>*/ 		set_camera(10, 0)
/*<136>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 6}
          	  case 1:
/*< 17>*/ 		printf("La probabilité que cette créature soit\ndame Zelda est de 5 %. Il s'agit d'un\n<b<Tikwi>>, une des créatures pacifiques qui\npeuplent la forêt.\nIls sont doués de parole, et disposent\nde grandes connaissances.<pause0F> Cependant,\nla raison pour laquelle il fait réagir la\nfonction détection m'est inconnue.\nJe vous encourage à rattraper ce Tikwi\npour éclaircir ce mystère.")
          		goto flw_134
          	}
          }

          void entrypoint_200_69() {
/*<656>*/ 	start()
/*<657>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, si vous avez\ndes questions, n'hésitez pas à m'appeler\nà tout moment en appuyant sur (v).\x0E\x01\x11\x02\x9CD\n\nSélectionnez <r<Conseil >>puis <r<Indice>> et je\nvous fournirai des informations que je\njugerai utiles selon la situation.")
/*<663>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

