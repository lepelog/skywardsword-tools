          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDVa\x2010t'en... Va\x2010t'en...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\xFECDCamouflage plante verte... kwiii... Camouflage plante verte... Invisible...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, je vous suggère de vous assurer de la sécurité\nde cette créature.")
          	  case 1:
/*< 49>*/ 		printf("\x0E\x01\x12\x04\x00\x01Maître, si vous n'aidez pas cette créature, ses chances\nde survie sont de 5 %.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf("")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("")
          		flw_220:
/*<220>*/ 		printf("")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf("")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf("")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf("")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf("")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 77, 'param3': 6}
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf("\x0E\x01\x08\x02\x1CDKwii-waa! Y en a un vert!\nJamais vu de vert.")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf("\x0E\x01\x09\x04\x00\x0FOh gnon! Fais-moi pas mal, le vert!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 121, 'param3': 6}
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf("\x0E\x01\x09\x04\x00\x0BKwaa...? Ça s'est calmé...")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, je peux à présent analyser\nvotre habileté au combat contre vos ennemis.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 5, 'next': 631, 'param3': 6}
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 10, 'next': 634, 'param3': 6}
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf("Lorsque vous <g<ciblez >>quelque chose avec (Z), appuyez\nsur (v) pour m'appeler et je vous présenterai\nles résultats de mon analyse.\x0E\x01\x11\x02\x7CD\x0E\x01\x11\x02\x9CD")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 639, 'param3': 6}
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x07Merci d'avoir trouvé tous mes amis Kikwis!\nKwi.\n\n\n\x0E\x01\x09\x04\x00\x13Mais ton amie comme toi était pas là...\nTu peux la trouver!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf("\x0E\x01\x09\x04\x00\x07Le Vénérable va bien aussi! Il était tout près\nd'ici, en fait... J'aurais pu deviner qu'il roulerait\npas sa mousse si loin! Kwiii!\n\n\x0E\x01\x09\x04\x00\x13Mais ton amie créature était pas avec lui...")
          			  case 1:
/*< 24>*/ 				printf("\x0E\x01\x09\x04\x00\x04Dis au Vénérable que je vais bien.\nTon amie créature est sûrement avec lui!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf("Kikwaaa! Le revoilà!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf("\x0E\x01\x08\x02\x2CDKwiiii!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf("\x0E\x01\x08\x02\xFECD\x0E\x01\x06\x02\xFDCD......")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf("Kwaa? Tu ne m'as pas tapé. Kwii. J'y pense.\nTu as rebuté les gros méchants rouges tout\nà l'heure...")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 403, 'param3': 6}
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf("\x0E\x01\x09\x04\x00\x01Ka-kwa. Moi c'est <b<Matéo>>. Je suis un Kikwi!\nT'es moins méchant que t'en as l'air.\nTu m'as sauvé! Kwi.")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf("\x0E\x01\x09\x04\x00\x05Bizarre. Kwi-kwa. J'ai vu une créature un peu\ncomme toi tout à l'heure... Une fille.\n[1]Zelda?[2]Qui était\x2010ce?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf("\x0E\x01\x09\x04\x00\x04Tu la connais? Elle avait l'air en danger! Kwii!")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf("\x0E\x01\x09\x04\x00\nPlein de rouges sont venus l'attaquer!\n<pling>Elle s'est enfuie avec le <b<Vénérable>>! Kwii!")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf("\x0E\x01\x09\x04\x00\x04Sais pas, moi. Elle avait l'air en danger! Kwii!")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf("Je constate une forte réaction à ma fonction détection.\nJe vous encourage à continuer de chercher dans cette\nzone.")
          }

          void entrypoint_200_71() {
/*<643>*/ 	start()
/*<644>*/ 	{'type': 'type3', 'subType': 1, 'param1': 315, 'param2': 0, 'next': 645, 'param3': 51}
/*<645>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 646, 'param3': 16}
/*<646>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 3, 'next': 647, 'param3': 17}
/*<647>*/ 	set_camera(40, 0)
/*<648>*/ 	entrypoint_006_08();
          }

          void entrypoint_200_03() {
/*< 28>*/ 	start()
/*< 29>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 31>*/ 		printf("\x0E\x01\x09\x04\x00\x07Merci d'avoir trouvé tous mes amis Kikwis,\nle vert!\n\n\n\x0E\x01\x09\x04\x00\x13Mais la forêt a encore l'air dangereuse...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf("\x0E\x01\x09\x04\x00\x07Content de savoir que le Vénérable va bien!\nKwii! Moi, je reste ici tant que tous les\nméchants sont pas partis.")
          			  case 1:
/*<160>*/ 				printf("\x0E\x01\x09\x04\x00\x04Je vais attendre ici un moment!\nSi tu vois le Vénérable, dis\x2010le\x2010lui! Kwi.")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf("J'suis pas bon à manger! J'vaux pas un radis!\nLaisse\x2010moi! Kwiii!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf("\x0E\x01\x09\x04\x00\x05Kwaa? Le Vénérable se fait du souci pour moi?\nContent d'entendre qu'il va bien en tout cas!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf("\x0E\x01\x09\x04\x00\x01Ka-kwa. Moi, c'est <b<Kamom>>! Si tu vois le\nVénérable, dis\x2010lui que j'amasse ma mousse ici.\n\n\n\x0E\x01\x09\x04\x00\x0FY a encore du danger par ici, je vais rester\njusqu'à ce que les méchants disparaissent.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf("\x0E\x01\x09\x04\x00\x05Kwaa? Tu ressembles pas trop à un monstre,\nle vert.\n\n\nUne fille avec une tête jaune?<pause0F> \x0E\x01\x09\x04\x00\x13Sais pas.\nJ'étais caché tout le temps. Rien vu!")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf("Je ne détecte plus la présence de monstres dans cette\nzone. Faire tomber le Kikwi de son arbre ne présente\ndonc pas de danger.\n\nIl ne semble pas pouvoir bouger par lui\x2010même.\nIl vous faut penser à un autre moyen.\n\n\nVous pouvez consulter à tout moment la liste des\nactions possibles en appuyant sur \x0E\x02\x04\x02\x13CD.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf("\x0E\x01\x09\x04\x00\x07Ka-kwa!Tu as trouvé tous mes compagnons,\nmerci! Kwi.\n\n\n\x0E\x01\x09\x04\x00\x0BIci, y a pas de monstres, je suis en sécurité...\nJe crois.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf("\x0E\x01\x09\x04\x00\x07Heureux de savoir que le Vénérable va bien.\n\n\n\n\x0E\x01\x09\x04\x00\x13J'ai encore les racines qui tremblent.\nKwii. Je vais rester ici un moment.")
          				  case 1:
/*<168>*/ 					printf("\x0E\x01\x09\x04\x00\x04Je vais me reposer un peu ici. Si tu vois le\nVénérable, dis-lui que je suis ici. Merci, le vert.")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf("\x0E\x01\x09\x04\x00\x11Fenouil! Ça fait mal!<pause1E> Mais merci de m'avoir\naidé, ka-kwa.")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf("\x0E\x01\x09\x04\x00\x05Kwaa? Le Vénérable s'inquiète pour moi?\nContent d'entendre qu'il va bien, en tout cas!")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf("\x0E\x01\x09\x04\x00\x01Je m'appelle <b<Jasmi>>. Si tu vois le Vénérable,\ndis\x2010lui que je suis ici. Kwi.\n\n\n\x0E\x01\x09\x04\x00\x13Pfiou, j'ai encore les racines qui tremblent!")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf("\x0E\x01\x09\x04\x00\x05Kwaa? Une fille? Connais pas.\n\n\n\n\x0E\x01\x09\x04\x00\x04Le Vénérable sait sûrement quelque chose, lui.")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\xFECDKikwi!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 117, 'param3': 6}
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf("\x0E\x01\x09\x04\x00\x0BT'as battu tous les bonshommes rouges!\nKwaa. T'es...<pause0F> un héros?\n\n\n\x0E\x01\x09\x04\x00\x13J'ai les racines toutes molles, je peux pas\ndescendre... Peux-tu m'aider? Kwi.")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf("Avant de partir vers le c\x153ur de la forêt sur les traces\nde dame Zelda, je vous recommande de sauvegarder\nvotre progression.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf("Il n'y a pas d'autre aura de Kikwi dans cette zone.\n\n\n\nRetournez voir le Vénérable pour obtenir d'autres\ninformations.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf("Depuis ici, la vue est dégagée. Je vous recommande\nd'utiliser la fonction détection pour chercher les\nKikwis.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf("L'aura de dame Zelda est faible dans cette zone.\nJe vous recommande d'aller voir ailleurs.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf("\x0E\x01\x09\x04\x18\x1705Hmm? Tu as quelque chose à me demander?\n[1]Les cubes[2]Le temple[3-]Non")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf("\x0E\x01\x09\x04\x16\x1E04Si tu touches un cube avec la lumière qui\njaillit de ton épée, il disparaît dans le ciel.\n\n\nSelon les écrits anciens, il existe de nombreux\ncubes, un peu partout sur terre.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf("\x0E\x01\x09\x04\x08\xB04Les écrits anciens expliquent que le bâtiment\nqui se trouve à proximité s'appelle le temple\nde la contemplation...\n\n... et qu'il accueille les êtres venus du ciel.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf("\x0E\x01\x09\x04\x00\x1707Tiens, j'y pense. Il y avait une vieille plaque\nde pierre dans le coin...\n\n\n\x0E\x01\x09\x04\x16\xB00Elle portait des inscriptions...<pause0F> Ça devrait t'aider\nà trouver comment entrer dans le temple!")
          				goto flw_596
          			}
          		  case 2:
/*<597>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<591>*/ 		switch (scene_flags[47 /* 0x4 80 */]) {
          		  case 0:
/*<452>*/ 			switch (scene_flags[37 /* 0x5 20 */]) {
          			  case 0:
/*<493>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 451, 'param3': 32}
          				flw_451:
/*<451>*/ 				printf("\x0E\x01\x09\x04ÿ\xFF00Ce cube est fait d'un métal que j'ai jamais vu...\nJ'ai eu beau frapper dessus très fort...\nY'a pas moyen d'y faire la moindre bosse!")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf("\x0E\x01\x09\x04\x16\xB07Ça doit bien vouloir dire quelque chose,\n« <r<l'épée des cieux>> » et « <r<la lumière issue\nde sa lame >>»...\n\n\x0E\x01\x09\x04\x00\x1705Mais quoi?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 481, 'param3': 6}
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 457, 'param3': 6}
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf("\x0E\x01\x09\x04ÿ\xFF05Regarde...<pause0F> Ça, c'est un trésor que la Déesse\na laissé pour le héros venu du ciel...\n\n\nJ'ai appelé ça<pause1E> un <b<cube de la Déesse>>!")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf("\x0E\x01\x09\x04\x00\x1E04On peut lire dans les écrits anciens...\n\n\n\n« Si le porteur de l'épée des cieux<pause1E> les touche\nde la lumière issue de sa lame,<pause1E> il en sera\nrécompensé. »")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf("\x0E\x01\x09\x04\x18\x170BT'aurais pas une épée, toi? Je voudrais que\ntu m'aides à résoudre l'énigme de ces cubes!\n[1]D'accord[2]Je ne\nveux pas")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf("\x0E\x01\x09\x04\x17\x1908Oh, merci bien!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf("\x0E\x01\x09\x04\x18\x170CS'iiiil te plaaaaîîît!\n[1]D'accord[2]Je ne veux pas")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf("\x0E\x01\x09\x04\x08\x07Bon, bon. Tu veux quelque chose en échange.\nJ'ai compris.")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf("\x0E\x01\x09\x04\x17\x1906Tiens! Avec ça, tu peux plus refuser!")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf("\x0E\x01\x09\x04\x17\x1908Tu arrives au bon moment!\n\n\n\nJe viens juste de découvrir quelque chose dont\nparlent les écrits anciens.")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf("\x0E\x01\x09\x04\x00\x01Hé, toi! Viens donc par ici!")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf("\x0E\x01\x09\x04\x00\x01Tiens! J'te connais, toi!\n\n\n\nViens donc ici un peu! J'aurais besoin de\nton aide!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
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
/*< 39>*/ 		printf("\x0E\x01\x09\x04\x00\x13Tu nous as tous trouvés!\nTu prends ton devoir au sérieux.\nRepose un peu tes yeux, le vert!")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf("\x0E\x01\x09\x04\x00\x05J'comprends pas comment tu m'as trouvé...\nJ'étais parfaitement invisible à l'\x153il nu!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf("\x0E\x01\x09\x04\x00\x07Oh, si tu as trouvé le Vénérable, tu\ndois être un as de la trouvette! Kwii!")
          			  case 1:
/*<174>*/ 				printf("\x0E\x01\x09\x04\x00\x14C'est bien que tu m'aies trouvé. Mais tu n'as pas\nencore trouvé le Vénérable, on dirait... Kwa.")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf("\x0E\x01\x09\x04\x00\x13Kwaa? Comment tu m'as trouvé?\nJ'étais si bien caché!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf("\x0E\x01\x09\x04\x00\x01Mon petit nom, c'est <b<Robi>>. C'est moi le plus\nfort en camouflage. Kwaa. Après le Vénérable,\nbien sûr!")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf("")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf("\x0E\x01\x09\x04\x00\x02Celle que tu appelles Zelda s'est rendue au\ntemple au c\x153ur de la forêt.")
/*<119>*/ 			printf("En utilisant le <y<lance\x2010pierre>>, tu devrais pouvoir\nte rendre jusqu'au temple au c\x153ur de la forêt.\n\n\n\x0E\x01\x09\x04\x00\x06Puisses\x2010tu trouver ton amie! Kwiiii!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf("\x0E\x01\x09\x04\x00\x01Sers\x2010toi de moi comme d'un marchepied\net prends\x2010le! Allez, kwaa!")
          				  case 1:
/*<109>*/ 					printf("\x0E\x01\x09\x04\x00\x01Kwaa... Monte vite sur mon dos, et attrape\x2010le!")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x00\nHé! Ho! Tout le monde va bien?\nJe ne dois plus m'inquiéter, alors!\n\n\nTu es vraiment doué pour trouver les gens!\nKwi. Je ne sais pas qui tu es ni d'où tu viens,\nmais je te remercie.")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf("\x0E\x01\x09\x04\x00\x08Kwaa? Tu recherches aussi une amie?\n\n\n\nIl y avait bien une fille avec des poils jaunes\nsur la tête...")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf("\x0E\x01\x09\x04\x00\x02Celle que tu appelles Zelda a dit qu'elle devait\nse rendre au temple qui se trouve au c\x153ur de\nla forêt...\n\nJe lui ai dit de ne pas y aller parce que c'est\ndangereux, mais elle m'a grimpé dessus et\ny est allée quand même! Kwiiii!")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 396, 'param3': 6}
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 397, 'param3': 6}
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf("\x0E\x01\x09\x04\x00\x03Si tu continues par là, tu devrais arriver au\ntemple...<pause0F> Mais attention aux monstres qui\nrôdent... Kwii!")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 126, 'param3': 6}
/*<126>*/ 					printf("\x0E\x01\x09\x04\x00\x0E\x0E\x01\x08\x02\x1CDKwaa! J'allais oublier\n\n\n\nPour te remercier d'avoir retrouvé mes \ncompagnons, je vais te donner notre trésor. Kwi.\n\n\n\x0E\x01\x09\x04\x00\x08Kwaa... Un petit moment...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf("\x0E\x01\x09\x04\x00\x09Maintenant que je suis rassuré, je me\nsouviens par où est partie ton amie!")
          					goto flw_567
          				}
          			}
          		}
          	  case 1:
/*<145>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<146>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<147>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<148>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<381>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 20, 'next': 380, 'param3': 6}
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<150>*/ 							story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<196>*/ 							scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
          							goto flw_382
          						  case 1:
/*<640>*/ 							temp_flags[4 /* 0x1 10 */] = true;
          							goto flw_565
          						}
          					}
          				  case 1:
/*<177>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<179>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo, Kamom et Jasmi sont sains et saufs,\ntu dis?\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<encore un>> de mes petits compagnons Kikwis?\n\n\n\x0E\x01\x09\x04\x00\x02Il aime se fondre dans les herbes, alors je te\nconseille de chercher... des herbes.\n\n\nEncore un effort, et je me rappellerai où\nton amie est allée.")
          					  case 1:
/*<212>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<501>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hé! Ho! Matéo, Kamom et Jasmi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf("\x0E\x01\x09\x04\x00\x08Est\x2010ce que ça t'ébouillanterait de chercher\n<r<encore un>> de mes petits compagnons Kikwis?\n\n\nIl aime se fondre dans les herbes, alors je\nte conseille de chercher... bien, des herbes.\n\n\n\x0E\x01\x09\x04\x00\x02Si tu le trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_383
          							}
          						  case 1:
          							goto flw_503
          						}
          					}
          				}
          			  case 1:
/*<180>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<181>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<184>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo, Kamom et Robi sont sains\net saufs, tu dis?\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<encore un>> de mes petits compagnons Kikwis?\n\n\n\x0E\x01\x09\x04\x00\x02Il aime monter dans les arbres, alors je te\nconseille de chercher... des arbres.\n\n\nEncore un effort, et je me rappellerai où\nton amie est allée!")
          					  case 1:
/*<213>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<508>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hé! Ho! Matéo, Kamom et Robi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf("\x0E\x01\x09\x04\x00\x08Est\x2010ce que ça t'ébouillanterait de chercher\n<r<encore un>> de mes petits compagnons Kikwis?\n\n\nIl aime monter dans les arbres, alors je\nte conseille de chercher... des arbres.\n\n\n\x0E\x01\x09\x04\x00\x02Si tu le trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo et Kamom vont bien, tant mieux!\nMais je m'inquiète encore pour les autres...\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<encore deux>> de mes petits compagnons Kikwis?\n\n\n\x0E\x01\x09\x04\x00\x08Ton amie est partie par là. Oh, attends, non!\nC'était peut\x2010être par ici...")
          					  case 1:
/*<214>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<517>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hé! Ho! Matéo et Kamom sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça t'ébouillanterait de chercher\n<r<encore deux>> de mes petits compagnons Kikwis?\n\n\nSi tu les trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_385
          							}
          						  case 1:
          							goto flw_521
          						}
          					}
          				}
          			}
          		  case 1:
/*<185>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<186>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<187>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<195>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo, Robi et Jasmi sont sains\net saufs, tu dis?\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<encore un>> de mes petits compagnons Kikwis?\n\n\nIl aime se déguiser en plante, alors je te\nconseille de chercher... des plantes.\n\n\n\x0E\x01\x09\x04\x00\x02Encore un effort, et je me rappellerai où\nton amie est allée!")
          					  case 1:
/*<215>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<526>*/ 							printf("\x0E\x01\x09\x04\x00\x03Ho ho! Matéo, Jasmi et Robi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\net je ne peux pas bouger d'ici...")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf("\x0E\x01\x09\x04\x00\x08Est\x2010ce que ça t'ébouillanterait de chercher\n<r<encore un>> de mes petits compagnons Kikwis?\n\n\nIl aime se déguiser en plante, alors je te\nconseille de chercher... des plantes.\n\n\n\x0E\x01\x09\x04\x00\x02Si tu le trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo et Jasmi vont bien, tant mieux!\nMais je m'inquiète encore pour les autres...\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<encore deux>> de mes petits compagnons Kikwis?\n\n\n\x0E\x01\x09\x04\x00\x08Ton amie est partie par là. Oh, attends, non!\nC'était peut\x2010être par ici...")
          					  case 1:
/*<216>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<535>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hé! Ho! Matéo et Jasmi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça t'ébouillanterait de chercher\n<r<encore deux>> de mes petits compagnons Kikwis?\n\n\nSi tu les trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_387
          							}
          						  case 1:
          							goto flw_539
          						}
          					}
          				}
          			  case 1:
/*<190>*/ 				switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          				  case 0:
/*<191>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<194>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo et Robi vont bien, tant mieux!\nMais je m'inquiète encore pour les autres...\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<encore deux>> de mes petits compagnons Kikwis?\n\n\n\x0E\x01\x09\x04\x00\x08Ton amie est partie par là. Oh, attends, non!\nC'était peut\x2010être par ici...")
          					  case 1:
/*<217>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<544>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hé! Ho! Matéo et Robi sont sains et saufs,\ntu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça t'ébouillanterait de chercher\nencore<r< deux>> de mes petits compagnons Kikwis?\n\n\nSi tu les trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf("\x0E\x01\x09\x04\x00\x03Matéo va bien, tant mieux! Mais je m'inquiète\nencore pour les autres...\n\n\nEst\x2010ce que ça t'ébouillanterait de chercher\n<r<trois>> de mes petits compagnons Kikwis?\n\n\n\x0E\x01\x09\x04\x00\x08Ma mémoire me joue des tours, je ne me\nsouviens plus par où est partie ton amie!")
          					  case 1:
/*<218>*/ 						printf("\x0E\x01\x09\x04\x00\x06Hé! Ho!<pause0F> Je suis <b<Péko>>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon \x153il est parfaitement entraîné...<pause0F>\nTu m'as tout l'air d'un expert!\n\n[1]Où est\nZelda?[2]J'ai un\nmessage")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf("\x0E\x01\x09\x04\x00\x08Zelda\x0E\x01\x06\x02\xFDCD...?<pause0F>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n\x0E\x01\x09\x04\x00\x0CMais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf("\x0E\x01\x09\x04\x00\x0EKwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<553>*/ 							printf("\x0E\x01\x09\x04\x00\x03Hoho! Matéo est sain et sauf, tu dis?\n\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici...")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf("\x0E\x01\x09\x04\x00\x02Est\x2010ce que ça t'ébouillanterait de chercher\n<r<trois>> de mes petits compagnons Kikwis?\n\n\nSi tu les retrouves tous, je pense que je me\nrappellerai où ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf("\x0E\x01\x09\x04\x00\x08Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n\x0E\x01\x09\x04\x00\x0CMais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_389
          							}
          						  case 1:
          							goto flw_557
          						}
          					}
          				}
          			}
          		}
          	}
          }

          void entrypoint_200_58() {
/*< 52>*/ 	start()
/*< 53>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, voici des informations\nà propos de l'utilisation de vos objets.\n\n\nEn <g<appuyant brièvement >>sur \x0E\x02\x04\x02\x29CD, vous vous apprêterez\nà tirer au <y<lance\x2010pierre>>, puisqu'il s'agit du dernier objet\nque vous avez utilisé.\x0E\x01\x11\x02\xFCD\n\nS'il vous arrivait d'oublier comment faire, vous\npouvez toujours appuyer sur \x0E\x02\x04\x02\x25CD pour accéder à l'<r<aide>>.\x0E\x01\x11\x02\xBCD")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf("")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf("\x0E\x01\x05\x04K\x00\x0E\x01\x12\x04\x00\x01Maître, nous sommes arrivés dans la <b<forêt de Firone>>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': -1, 'param3': 6}
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf("\x0E\x01\x12\x04\x00\x04Maître Link, la probabilité que la\nflamme sacrée se trouve dans le lac est de 80 %.")
          	  case 1:
/*<587>*/ 		printf("\x0E\x01\x12\x04\x00\x04Maître Link, la probabilité que\nla flamme sacrée se trouve par\x2010delà cette\nporte est de 80 %.\n\nL'ermite Kikwi a révélé que le pouvoir de la Déesse\npermettait de compléter le symbole. Il est probable\nqu'il faisait référence à l'<r<éclat céleste>>.\n\nInvoquez l'éclat céleste devant la porte et <g<complétez\nle dessin>>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf("\x0E\x01\x05\x04K\x00La grande quantité d'eau présente ici favorise\nla poussée de grands arbres et de plantes.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf("\x0E\x01\x09\x04\x00\x01Tiens! J'te connais, toi!")
/*<485>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_08() {
/*<131>*/ 	start()
/*<211>*/ 	switch (story_flags[59 /* us: 805A9ADF 0x04, jp: 805ACD5F 0x04 */]) {
          	  case 0:
/*<572>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 10, 'next': 625, 'param3': 13}
/*<625>*/ 		switch (zone_temp_flags[20 /* 0x3 10 */]) {
          		  case 0:
/*<627>*/ 			scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          		  case 1:
/*<626>*/ 			zone_temp_flags[20 /* 0x3 10 */] = true;
          		}
          	  case 1:
/*<571>*/ 		{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': -1, 'param3': 13}
          	}
          }

          void entrypoint_200_42() {
/*<318>*/ 	start()
/*<319>*/ 	printf("\x0E\x01\x05\x04K\x00De nombreuses créatures vivent également dans cet\nenvironnement naturel favorable.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAttends une seconde!\n\n\n\nJ'aimerais que tu m'aides à résoudre le mystère\ndes cubes.")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé, va-t'en pas!\n\n\n\nJ'ai quelque chose à te demander.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDAttends donc une minute!\n\n\n\n\x0E\x01\x09\x04\x17\x600Fais pas semblant de ne pas m'avoir remarqué!\nJe sais que tu m'as vu! <pause0F>T'es fâché contre moi,\nou quoi?\n\n[1]Oups, pardon![2]Je ne\nt'aime pas")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Ah bon, tu recherches une jeune fille et tu es\npressé? Excuse\x2010moi! Je suis vraiment désolé.\n\n\nMais... j'aimerais que tu m'accordes une\ntoute petite minute.")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Aïe. Je vois. C'est comme ça dans la vie des\nexplorateurs. On sera toujours des grands\nincompris...\n\nJe te demande pas beaucoup de temps.\nPromis.")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 404, 'param3': 6}
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 24, 'next': 405, 'param3': 6}
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, vous venez d'obtenir une\ninformation concernant dame Zelda.\n\n\nElle s'est enfuie après avoir été attaquée par des\nmonstres.<pause0F> Elle est très probablement encore en danger.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 313, 'param3': 6}
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf("<pling>J'ai marqué la position du Kikwi Matéo.\nRegardez votre carte.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 15, 'next': 223, 'param3': 6}
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf("La fonction détection a réagi au Kikwi car il a dû\nêtre en contact avec dame Zelda.\n\n\nLa probabilité que le Vénérable, qui s'est enfui avec\ndame Zelda, fasse également réagir la détection\nest de 85 %.\n\nJe vous recommande en conséquence de continuer\nà rechercher dame Zelda avec ma fonction détection.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 229, 'param3': 6}
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': 341, 'param3': 6}
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf("\x0E\x01\x09\x04\x00\x0DKwii! J'ai failli tomber dans les pommes de\npeur! Ta copine bleue est vraiment bizarre...")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf("\x0E\x01\x09\x04\x00\x07Ka-kwa. Tu veux partir à leur recherche.\nTu pourrais <r<dire au >><b<Vénérable>> <r<que je vais bien>>?\n\n\n\x0E\x01\x09\x04\x00\x05Garde espoir, le vert. Ton amie créature est\nsûrement en sécurité avec lui!")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf("\x0E\x01\x09\x04\x00\x02Avec ça, tu devrais pouvoir te rendre au temple\nau c\x153ur de la forêt.")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf("\x0E\x01\x09\x04\x00\x08Vise donc cette liane entortillée pour comm...\nKwaa?\n\n\nTu apprends vite, le vert!<pause0F> Tant mieux.\nÇa va simplifier les explications.")
          		flw_365:
/*<365>*/ 		printf("\x0E\x01\x09\x04\x00\x02Sors ton lance\x2010pierre avec \x0E\x02\x04\x02\x29CD, appuie à\nnouveau sur \x0E\x02\x04\x02\x29CD pour bander l'élastique\npuis relâche le bouton pour tirer.\x0E\x01\x11\x02\xFCD\n\nSi tu es à court de munitions, tu pourras\n<g<trouver des graines >>dans les fruits des\narbres du coin.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf("\x0E\x01\x09\x04\x00\x06Puisses\x2010tu trouver ton amie! Kwiii!")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf("\x0E\x01\x09\x04\x00\x06Puisses\x2010tu trouver ton amie! Kwiii!")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf("\x0E\x01\x09\x04\x00\x08Pour commencer, essaie de viser cette liane\nentortillée.")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf("\x0E\x01\x05\x04K\x00Mon analyse suggère que dame Zelda se trouve\nquelque part dans cette forêt.\n\n\n\x0E\x01\x05\x04K\x00Je vous recommande donc de la chercher à l'aide\nde ma fonction détection.")
/*<609>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<610>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_95() {
/*<422>*/ 	start()
/*<426>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 428, 'param3': 46}
/*<428>*/ 	set_camera(35, 0)
/*<438>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<491>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<490>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDAttends une seconde!\n\n\n\nJ'aimerais que tu m'aides à résoudre le mystère\ndes cubes.")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf("\x0E\x01\x09\x04\x00\x02\x0E\x01\x08\x02\x2CDHé, va-t'en pas!\n\n\n\nJ'ai quelque chose à te demander.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf("\x0E\x01\x09\x04\x00\x03\x0E\x01\x08\x02\x2CDAttends donc une minute!\n\n\n\n\x0E\x01\x09\x04\x17\x600Fais pas semblant de ne pas m'avoir remarqué!\nJe sais que tu m'as vu! <pause0F>T'es fâché contre moi,\nou quoi?\n\n[1]Oups, pardon![2]Je ne\nt'aime pas")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf("\x0E\x01\x09\x04\x16\x1E07Ah bon, tu recherches une jeune fille et tu es\npressé? Excuse\x2010moi! Je suis vraiment désolé.\n\n\nMais... j'aimerais que tu m'accordes une\ntoute petite minute.")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf("\x0E\x01\x09\x04\x16\x1E56Aïe. Je vois. C'est comme ça dans la vie des\nexplorateurs. On sera toujours des grands\nincompris...\n\nJe te demande pas beaucoup de temps.\nPromis.")
          			goto flw_446
          		}
          	}
          }

          void entrypoint_200_61() {
/*< 71>*/ 	start()
/*<616>*/ 	story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */] = true;
/*<198>*/ 	{'type': 'type3', 'subType': 1, 'param1': 300, 'param2': 0, 'next': 377, 'param3': 51}
/*<377>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 199, 'param3': 17}
/*<199>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 197, 'param3': 16}
/*<197>*/ 	printf("Malheureusement, le Vénérable n'est plus avec dame\nZelda.<pause0F> Cependant, il semble posséder des informations.\n\n\nLes chances d'obtenir des informations sur dame\nZelda en aidant le Vénérable à retrouver ses\ncompagnons perdus sont de 85 %.\n\nJ'ai ajouté l'<r<<pling>aura des Kikwis >>à la fonction détection.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf("Souhaitez\x2010vous des informations complémentaires sur\nle changement de cible de ma fonction détection?\n[1]Oui[2-]Non")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf("Maintenez (^) enfoncé pour afficher les cibles\npossibles de la fonction détection.\x0E\x01\x11\x02\x8CD\n\n\nSélectionnez ce que vous souhaitez détecter puis\nrelâchez (^) pour valider.\x0E\x01\x11\x02\x8CD\n\n\nSi vous ne souhaitez rien détecter, sélectionnez la\n<g<vue subjective>> et relâchez (^).\n[1]Encore une fois[2-]Compris")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf("Les Kikwis que vous avez déjà trouvés seront indiqués\nsur la carte et ne feront plus réagir ma fonction\ndétection.\n\nVous pouvez maintenant partir à la recherche\ndes Kikwis perdus.")
/*<613>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
/*<614>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 615, 'param3': 36}
/*<615>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
          		goto flw_617
          	}
          }

          void entrypoint_200_44() {
/*<334>*/ 	start()
/*<335>*/ 	temp_flags[51 /* 0x7 08 */] = true;
          }

          void entrypoint_200_96() {
/*<423>*/ 	start()
/*<424>*/ 	printf("\x0E\x01\x09\x04\x15\x1908Oooh! Wow! Le cube est parti dans le ciel!\nAs-tu vu ça?\n\n\n\x0E\x01\x09\x04\x13\x1B00Il a réagi à la lumière qui est sortie\nde ton épée...\n\n\n\x0E\x01\x09\x04\x00\x1B05Où est\x2010ce que le cube a\x2010t\x2010il bien pu se ramasser?\nLe mystère devient de plus en plus...\nmystérieux!\n\n\x0E\x01\x09\x04\x16\x1E00Selon les écrits anciens, il existe de nombreux\ncubes sur la terre...\n\n\n\x0E\x01\x09\x04\x00\x1700Essaie d'en trouver d'autres, et dis\x2010moi si tu en\napprends plus à leur sujet!")
/*<482>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_62() {
/*< 94>*/ 	start()
/*<233>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<238>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<239>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<240>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<677>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<651>*/ 						set_camera(16, 0)
/*<235>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 270, 'param3': 51}
/*<270>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 268, 'param3': 17}
/*<268>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 269, 'param3': 13}
/*<269>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 237, 'param3': 6}
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf("La fonction détection ne réagit plus à aucune aura\ndans les environs.\n\n\nJe vous recommande de retourner auprès du\nVénérable pour obtenir d'autres informations.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 344, 'param3': 6}
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf("\x0E\x01\x09\x04\x00\x14Ah! Me fais pas peur comme ça! Kwiii!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 27, 'next': 670, 'param3': 6}
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf("J'ai <pling>marqué la position du Kikwi Kamom.\nDame Zelda n'était pas avec lui.")
/*<674>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 675, 'param3': 17}
/*<675>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						goto flw_271
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_10() {
/*<288>*/ 	start()
/*<578>*/ 	set_camera(-1, 0)
/*<579>*/ 	{'type': 'type3', 'subType': 1, 'param1': 31, 'param2': 1, 'next': 580, 'param3': 40}
/*<580>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 2, 'next': 581, 'param3': 13}
/*<581>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 60, 'next': 328, 'param3': 6}
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 75, 'next': 331, 'param3': 6}
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf("\x0E\x01\x09\x04\x00\x07Hé! Ho! Le vert, c'est moi! T'as trouvé la fille\nque tu recherchais?\n[1]Qui es\x2010tu?[2]Pas encore...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf("\x0E\x01\x09\x04\x00\x13Kwaa? Tu m'as déjà oublié? C'est moi, <b<Matéo>>!\nTu me fais de la peine, le vert.")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf("\x0E\x01\x09\x04\x00\x07J'ai retrouvé tous mes amis Kikwis!\nC'est grâce à toi, le vert!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf("\x0E\x01\x09\x04\x00\x05J'espère que tu trouveras la fille que\ntu recherches. À la revoyure!")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf("\x0E\x01\x09\x04\x00\x13Ah... C'est dommage. Mais au moins, tu sais\nvers où elle est allée... Kwii. C'est déjà ça, non?")
          		goto flw_297
          	}
          }

          void entrypoint_200_63() {
/*<241>*/ 	start()
/*<242>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<247>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<248>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<249>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<668>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<655>*/ 						set_camera(27, 0)
/*<244>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 274, 'param3': 35}
/*<274>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 272, 'param3': 17}
/*<272>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 273, 'param3': 13}
/*<273>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 246, 'param3': 6}
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf("La fonction détection ne réagit plus à aucune aura\ndans les environs.\n\n\nJe vous recommande de retourner auprès du\nVénérable pour obtenir d'autres informations.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 375, 'param3': 6}
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf("\x0E\x01\x09\x04\x00\x0DKwiii! Ne me fais pas peur comme ça!\nJ'ai encore cru que c'était un monstre!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 28, 'next': 662, 'param3': 6}
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf("J'ai <pling>marqué la position du Kikwi Jasmi.\nDame Zelda n'était pas avec lui.")
/*<666>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 661, 'param3': 17}
/*<661>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						goto flw_275
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_64() {
/*<250>*/ 	start()
/*<251>*/ 	switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          	  case 0:
/*<255>*/ 		switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          		  case 0:
/*<256>*/ 			switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          			  case 0:
/*<257>*/ 				switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          				  case 0:
/*<659>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<652>*/ 						set_camera(38, 0)
/*<253>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 254, 'param3': 51}
/*<254>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 376, 'param3': 16}
/*<376>*/ 						printf("La fonction détection ne réagit plus à aucune aura\ndans les environs.\n\n\nJe vous recommande de retourner auprès du\nVénérable pour obtenir d'autres informations.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 21, 'next': 350, 'param3': 6}
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf("\x0E\x01\x09\x04\x00\x05Kwaa. Tu as vu le Vénérable?\nEt il est sain et sauf aussi!\n\n\n\x0E\x01\x09\x04\x00\x14Si tu le revois, dis\x2010lui que je suis ici!")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf("\x0E\x01\x09\x04\x00\x04Normal. Le Vénérable est le plus fort en\ncamouflage! Tu penses que tu peux le trouver?")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf("J'ai <pling>marqué la position du Kikwi Robi.\nDame Zelda n'était pas avec lui.")
          						goto flw_252
          					}
          				  case 1:
          				}
          			  case 1:
          			}
          		  case 1:
          		}
          	  case 1:
          	}
          }

          void entrypoint_200_99() {
/*<420>*/ 	start()
/*<421>*/ 	printf("Toi qui descends du ciel sur la terre,\nfrappe l'étoile vers laquelle se dirige\nl'oiseau aux ailes déployées.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf("La végétation est identique à celle de la forêt de\nFirone. Nous sommes très probablement au c\x153ur\nde la forêt.\n\nDame Zelda s'est dirigée vers le temple.\nReprenons les recherches.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, je ressens l'aura\nde dame <b<Zelda>> à l'intérieur de cette construction.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf("Cependant, je ressens également la présence d'une\nmultitude de monstres. Souhaitez\x2010vous tout de même\ncontinuer?\n[1]Bien sûr[2]Non")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf("Restez prudent. Personne ne pourra venir vous aider\nici.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf("Si le danger devient trop grand, vous pouvez toujours\n<g<retourner dans le ciel >>pour mieux vous préparer.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf("Il est toujours bon d'avoir sur vous un <r<bouclier>> pour\nvous protéger et des <r<potions>> pour vous soigner.")
          			flw_606:
/*<606>*/ 			printf("Repartons à la recherche de dame Zelda.")
          		  case 1:
/*<604>*/ 			printf("\x0E\x01\x12\x04\x00\x01Maître, vous n'êtes pas équipé d'un <r<bouclier>>.\nJe vous recommande de toujours en avoir un\nà portée de la main.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf("La peur participe à l'instinct de conservation des\ncréatures vivantes. Il n'y a pas de honte à avoir.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf("\x0E\x01\x12\x04\x00\x0BMaître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\n<pling><r<Ma fonction détection réagit >>à cette créature.\n[1]Ah bon?[2]C'était Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf("\x0E\x01\x12\x04\x00\x05Oui, Maître. Mon analyse suggère qu'il s'agit d'un\n<b<Kikwi>>, une des créatures pacifiques qui peuplent\nla forêt.\n\nIls sont doués de parole et disposent de grandes\nconnaissances.<pause0F> Il ne s'agit pas de dame Zelda.\n\n\nLa raison pour laquelle il fait réagir la fonction\ndétection m'est inconnue. Je vous encourage à\nrattraper ce Kikwi pour éclaircir ce mystère.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 30, 'next': -1, 'param3': 6}
          	  case 1:
/*< 17>*/ 		printf("La probabilité que cette créature soit dame Zelda est\nde 5 %. Il s'agit d'un <b<Kikwi>>, une des créatures\npacifiques qui peuplent la forêt.\n\nIls sont doués de parole, et disposent de grandes\nconnaissances.<pause0F> Cependant, la raison pour laquelle\nil fait réagir la fonction détection m'est inconnue.\n\nJe vous encourage à rattraper ce Kikwi pour\néclaircir ce mystère.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf("\x0E\x01\x12\x04\x00\x04Maître Link, si vous avez des questions,\nn'hésitez pas à m'appeler à tout moment en appuyant\nsur (v).\x0E\x01\x11\x02\x9CD\n\nSélectionnez <r<Conseil >>puis <r<Indice>> et je vous fournirai\ndes informations que je jugerai utiles selon la\nsituation.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

