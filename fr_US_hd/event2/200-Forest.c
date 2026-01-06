          void entrypoint_200_00() {
          	start()
/*< 54>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 11, 'param3': 31}
/*< 11>*/ 	switch (random(2)) {
          	  case 0:
/*< 60>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 1, 'param3': 13}
/*<  1>*/ 		printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x0000000e><0x10008:0xfecd>Va‐t'en... Va‐t'en...")
          	  case 1:
/*< 59>*/ 		{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 12, 'param3': 13}
/*< 12>*/ 		printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x0000000e><0x10008:0xfecd>Camouflage plante verte... kwiii... Camouflage plante verte... Invisible...")
          	}
          }

          void entrypoint_200_52() {
/*< 48>*/ 	start()
/*< 78>*/ 	switch (scene_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 79>*/ 		printf(/* textboxtype: 0, unk: 1, line: 115 */ "<0x10012:0x00000001>Maître, je vous suggère de vous assurer de la sécurité\nde cette créature.")
          	  case 1:
/*< 49>*/ 		printf(/* textboxtype: 1, unk: 0, line: 116 */ "<0x10012:0x00000001>Maître, si vous n'aidez pas cette créature, ses chances\nde survie sont de 5 %.")
          	}
          }

          void entrypoint_200_53() {
/*<  2>*/ 	start()
/*<411>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 415, 'param3': 46}
/*<415>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 0, 'next': 416, 'param3': 51}
/*<416>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 3, 'param3': 16}
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 1, line: 117 */ "")
/*<  4>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 0, unk: 1, line: 118 */ "")
          		flw_220:
/*<220>*/ 		printf(/* textboxtype: 1, unk: 1, line: 120 */ "")
/*<  7>*/ 		switch (choice(2)) {
          		  case 0:
/*<408>*/ 			set_camera(33, 0)
/*<  8>*/ 			printf(/* textboxtype: 0, unk: 1, line: 121 */ "")
/*<410>*/ 			set_camera(32, 0)
/*<409>*/ 			printf(/* textboxtype: 1, unk: 0, line: 122 */ "")
          			flw_413:
/*<413>*/ 			set_camera(34, 0)
/*<414>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 412, 'param3': 36}
/*<412>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': 10, 'param3': 42}
/*< 10>*/ 			story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<608>*/ 			story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          		  case 1:
/*<  9>*/ 			printf(/* textboxtype: 1, unk: 1, line: 123 */ "")
          			goto flw_413
          		}
          	  case 1:
/*<  6>*/ 		printf(/* textboxtype: 1, unk: 0, line: 119 */ "")
          		goto flw_220
          	}
          }

          void entrypoint_200_01() {
/*<105>*/ 	start()
/*<280>*/ 	switch (temp_flags[0 /* 0x1 01 */]) {
          	  case 0:
/*< 72>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 81, 'param3': 13}
/*< 81>*/ 		wait_frames(30)
/*< 77>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 200, 'param3': 17}
/*<200>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 63, 'param3': 13}
/*< 63>*/ 		set_camera(1, 0)
/*< 61>*/ 		printf(/* textboxtype: 1, unk: 2, line: 6 */ "<0x10008:0x01cd>Kwii-waa! Y en a un vert!\nJamais vu de vert.")
/*< 64>*/ 		{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 0, 'next': 62, 'param3': 13}
/*< 62>*/ 		printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x0000000f>Oh gnon! Fais-moi pas mal, le vert!")
/*<120>*/ 		{'type': 'type3', 'subType': 2, 'param1': 18, 'param2': 0, 'next': 123, 'param3': 14}
/*<123>*/ 		{'type': 'type3', 'subType': 2, 'param1': 4, 'param2': 256, 'next': 201, 'param3': 15}
/*<201>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 0, 'next': 133, 'param3': 13}
/*<133>*/ 		set_camera(2, 0)
/*< 18>*/ 		wait_frames(27)
/*<121>*/ 		{'type': 'type3', 'subType': 2, 'param1': 19, 'param2': 0, 'next': 122, 'param3': 14}
/*<122>*/ 		story_flags[50 /* us: 805A9ADD 0x20, jp: 805ACD5D 0x20 */] = true;
/*<135>*/ 		set_camera(9, 0)
          	  case 1:
/*<279>*/ 		printf(/* textboxtype: 2, unk: 0, line: 5 */ "<0x10009:0x0000000b>Kwaa...? Ça s'est calmé...")
/*<281>*/ 		temp_flags[0 /* 0x1 01 */] = true;
          	}
          }

          void entrypoint_200_70() {
/*<623>*/ 	start()
/*<624>*/ 	printf(/* textboxtype: 0, unk: 1, line: 160 */ "<0x10012:0x00000004>Maître <heroname>, je peux à présent analyser\nvotre habileté au combat contre vos ennemis.")
/*<629>*/ 	scene_flags[1 'Faron Woods'][70 /* 0x9 40 */] = true;
/*<630>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 103, 'next': 635, 'param3': 32}
/*<635>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 103, 'next': 636, 'param3': 17}
/*<636>*/ 	wait_frames(5)
/*<631>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 103, 'next': 632, 'param3': 17}
/*<632>*/ 	wait_frames(10)
/*<634>*/ 	set_camera(39, 0)
/*<633>*/ 	printf(/* textboxtype: 0, unk: 0, line: 161 */ "Lorsque vous <color green<ciblez >coloroff>quelque chose avec (Z), appuyez\nsur (v) pour m'appeler et je vous présenterai\nles résultats de mon analyse.<0x10011:0x07cd><0x10011:0x09cd>")
/*<637>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 638, 'param3': 36}
/*<638>*/ 	wait_frames(15)
/*<639>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_02() {
/*< 19>*/ 	start()
/*< 23>*/ 	switch (story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */]) {
          	  case 0:
/*< 40>*/ 		switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          		  case 0:
/*< 41>*/ 			printf(/* textboxtype: 2, unk: 0, line: 23 */ "<0x10009:0x00000007>Merci d'avoir trouvé tous mes amis Kikwis!\nKwi.\n\n\n<0x10009:0x00000013>Mais ton amie comme toi était pas là...\nTu peux la trouver!")
          		  case 1:
/*<101>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 151, 'param3': 13}
/*<151>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<152>*/ 				printf(/* textboxtype: 0, unk: 1, line: 22 */ "<0x10009:0x00000007>Le Vénérable va bien aussi! Il était tout près\nd'ici, en fait... J'aurais pu deviner qu'il roulerait\npas sa mousse si loin! Kwiii!\n\n<0x10009:0x00000013>Mais ton amie créature était pas avec lui...")
          			  case 1:
/*< 24>*/ 				printf(/* textboxtype: 1, unk: 2, line: 21 */ "<0x10009:0x00000004>Dis au Vénérable que je vais bien.\nTon amie créature est sûrement avec lui!")
          			}
          		}
          	  case 1:
/*< 55>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 324, 'param3': 31}
/*<324>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 65, 'param3': 24}
/*< 65>*/ 		{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 22, 'param3': 13}
/*< 22>*/ 		printf(/* textboxtype: 1, unk: 2, line: 9 */ "Kikwaaa! Le revoilà!")
/*<340>*/ 		set_camera(18, 0)
/*<401>*/ 		{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 67, 'param3': 49}
/*< 67>*/ 		{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 18, 'next': 75, 'param3': 13}
/*< 75>*/ 		make_actor_do_something(0, 0)
/*<402>*/ 		printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10008:0x02cd>Kwiiii!")
/*< 68>*/ 		{'type': 'type3', 'subType': 4, 'param1': 4, 'param2': 0, 'next': 66, 'param3': 13}
/*< 66>*/ 		printf(/* textboxtype: 2, unk: 0, line: 11 */ "<0x10008:0xfecd><0x10006:0xfdcd>......")
/*< 74>*/ 		{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 11, 'next': 73, 'param3': 13}
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 1, line: 12 */ "Kwaa? Tu ne m'as pas tapé. Kwii. J'y pense.\nTu as rebuté les gros méchants rouges tout\nà l'heure...")
/*<353>*/ 		set_camera(19, 0)
/*< 82>*/ 		{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 83, 'param3': 13}
/*< 83>*/ 		wait_frames(30)
/*<403>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 76, 'param3': 17}
/*< 76>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 27, 'param3': 13}
/*< 27>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x00000001>Ka-kwa. Moi c'est <color blue<Matéo>coloroff>. Je suis un Kikwi!\nT'es moins méchant que t'en as l'air.\nTu m'as sauvé! Kwi.")
/*<137>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 136, 'param3': 13}
/*<136>*/ 		printf(/* textboxtype: 2, unk: 0, line: 14 */ "<0x10009:0x00000005>Bizarre. Kwi-kwa. J'ai vu une créature un peu\ncomme toi tout à l'heure... Une fille.\n[1-]Zelda?[2-]Qui était‐ce?")
/*< 85>*/ 		switch (choice(2)) {
          		  case 0:
/*< 88>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 86, 'param3': 13}
/*< 86>*/ 			printf(/* textboxtype: 1, unk: 2, line: 15 */ "<0x10009:0x00000004>Tu la connais? Elle avait l'air en danger! Kwii!")
          			flw_90:
/*< 90>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 91, 'param3': 13}
/*< 91>*/ 			printf(/* textboxtype: 2, unk: 0, line: 17 */ "<0x10009:0x0000000a>Plein de rouges sont venus l'attaquer!\n<sound 4>Elle s'est enfuie avec le <color blue<Vénérable>coloroff>! Kwii!")
/*<338>*/ 			set_camera(20, 0)
/*<339>*/ 			entrypoint_200_60();
          		  case 1:
/*< 89>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 87, 'param3': 13}
/*< 87>*/ 			printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x00000004>Sais pas, moi. Elle avait l'air en danger! Kwii!")
          			goto flw_90
          		}
          	}
          }

          void entrypoint_200_54() {
/*< 50>*/ 	start()
/*< 51>*/ 	printf(/* textboxtype: 0, unk: 1, line: 124 */ "Je constate une forte réaction à ma fonction détection.\nJe vous encourage à continuer de chercher dans cette\nzone.")
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
/*< 31>*/ 		printf(/* textboxtype: 0, unk: 1, line: 43 */ "<0x10009:0x00000007>Merci d'avoir trouvé tous mes amis Kikwis,\nle vert!\n\n\n<0x10009:0x00000013>Mais la forêt a encore l'air dangereuse...")
          	  case 1:
/*< 93>*/ 		switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          		  case 0:
/*<102>*/ 			{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 161, 'param3': 13}
/*<161>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<162>*/ 				printf(/* textboxtype: 1, unk: 2, line: 42 */ "<0x10009:0x00000007>Content de savoir que le Vénérable va bien!\nKwii! Moi, je reste ici tant que tous les\nméchants sont pas partis.")
          			  case 1:
/*<160>*/ 				printf(/* textboxtype: 2, unk: 0, line: 41 */ "<0x10009:0x00000004>Je vais attendre ici un moment!\nSi tu vois le Vénérable, dis‐le‐lui! Kwi.")
          			}
          		  case 1:
/*<342>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 92, 'param3': 46}
/*< 92>*/ 			{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 12, 'next': 30, 'param3': 13}
/*< 30>*/ 			printf(/* textboxtype: 0, unk: 1, line: 34 */ "J'suis pas bon à manger! J'vaux pas un radis!\nLaisse‐moi! Kwiii!")
/*<158>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<569>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 159, 'param3': 13}
/*<159>*/ 				printf(/* textboxtype: 0, unk: 1, line: 37 */ "<0x10009:0x00000005>Kwaa? Le Vénérable se fait du souci pour moi?\nContent d'entendre qu'il va bien en tout cas!")
          				flw_207:
/*<207>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 206, 'param3': 13}
/*<206>*/ 				printf(/* textboxtype: 1, unk: 2, line: 39 */ "<0x10009:0x00000001>Ka-kwa. Moi, c'est <color blue<Kamom>coloroff>! Si tu vois le\nVénérable, dis‐lui que j'amasse ma mousse ici.\n\n\n<0x10009:0x0000000f>Y a encore du danger par ici, je vais rester\njusqu'à ce que les méchants disparaissent.")
/*< 32>*/ 				story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */] = true;
/*<650>*/ 				entrypoint_200_62();
          			  case 1:
/*<570>*/ 				{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 100, 'param3': 13}
/*<100>*/ 				printf(/* textboxtype: 2, unk: 0, line: 38 */ "<0x10009:0x00000005>Kwaa? Tu ressembles pas trop à un monstre,\nle vert.\n\n\nUne fille avec une tête jaune?<pause 15> <0x10009:0x00000013>Sais pas.\nJ'étais caché tout le temps. Rien vu!")
          				goto flw_207
          			}
          		}
          	}
          }

          void entrypoint_200_55() {
/*< 69>*/ 	start()
/*< 70>*/ 	printf(/* textboxtype: 1, unk: 0, line: 125 */ "Je ne détecte plus la présence de monstres dans cette\nzone. Faire tomber le Kikwi de son arbre ne présente\ndonc pas de danger.\n\nIl ne semble pas pouvoir bouger par lui‐même.\nIl vous faut penser à un autre moyen.\n\n\nVous pouvez consulter à tout moment la liste des\nactions possibles en appuyant sur <icon 19>.<0x10011:0x0bcd>")
          }

          void entrypoint_200_04() {
/*< 33>*/ 	start()
/*< 34>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 35>*/ 		printf(/* textboxtype: 0, unk: 1, line: 55 */ "<0x10009:0x00000007>Ka-kwa!Tu as trouvé tous mes compagnons,\nmerci! Kwi.\n\n\n<0x10009:0x0000000b>Ici, y a pas de monstres, je suis en sécurité...\nJe crois.")
          	  case 1:
/*< 99>*/ 		switch (scene_flags[13 /* 0x0 20 */]) {
          		  case 0:
/*<115>*/ 			switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          			  case 0:
/*<167>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 169, 'param3': 13}
/*<169>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<170>*/ 					printf(/* textboxtype: 1, unk: 2, line: 54 */ "<0x10009:0x00000007>Heureux de savoir que le Vénérable va bien.\n\n\n\n<0x10009:0x00000013>J'ai encore les racines qui tremblent.\nKwii. Je vais rester ici un moment.")
          				  case 1:
/*<168>*/ 					printf(/* textboxtype: 2, unk: 0, line: 53 */ "<0x10009:0x00000004>Je vais me reposer un peu ici. Si tu vois le\nVénérable, dis-lui que je suis ici. Merci, le vert.")
          				}
          			  case 1:
/*<113>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 205, 'param3': 31}
/*<205>*/ 				{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 112, 'param3': 13}
/*<112>*/ 				printf(/* textboxtype: 1, unk: 2, line: 48 */ "<0x10009:0x00000011>Fenouil! Ça fait mal!<pause 30> Mais merci de m'avoir\naidé, ka-kwa.")
/*<114>*/ 				{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 165, 'param3': 13}
/*<165>*/ 				switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          				  case 0:
/*<166>*/ 					printf(/* textboxtype: 0, unk: 1, line: 49 */ "<0x10009:0x00000005>Kwaa? Le Vénérable s'inquiète pour moi?\nContent d'entendre qu'il va bien, en tout cas!")
          					flw_210:
/*<210>*/ 					{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 209, 'param3': 13}
/*<209>*/ 					printf(/* textboxtype: 1, unk: 2, line: 51 */ "<0x10009:0x00000001>Je m'appelle <color blue<Jasmi>coloroff>. Si tu vois le Vénérable,\ndis‐lui que je suis ici. Kwi.\n\n\n<0x10009:0x00000013>Pfiou, j'ai encore les racines qui tremblent!")
/*<163>*/ 					story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */] = true;
/*<649>*/ 					scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<654>*/ 					entrypoint_200_63();
          				  case 1:
/*<164>*/ 					printf(/* textboxtype: 0, unk: 0, line: 50 */ "<0x10009:0x00000005>Kwaa? Une fille? Connais pas.\n\n\n\n<0x10009:0x00000004>Le Vénérable sait sûrement quelque chose, lui.")
          					goto flw_210
          				}
          			}
          		  case 1:
/*<129>*/ 			{'type': 'type3', 'subType': 4, 'param1': 22, 'param2': 0, 'next': 202, 'param3': 13}
/*<202>*/ 			set_camera(4, 0)
/*<128>*/ 			printf(/* textboxtype: 0, unk: 1, line: 46 */ "<0x10009:0x00000002><0x10008:0xfecd>Kikwi!")
/*<111>*/ 			set_camera(5, 0)
/*<130>*/ 			wait_frames(60)
/*<117>*/ 			{'type': 'type3', 'subType': 4, 'param1': 21, 'param2': 0, 'next': 116, 'param3': 13}
/*<116>*/ 			printf(/* textboxtype: 2, unk: 0, line: 47 */ "<0x10009:0x0000000b>T'as battu tous les bonshommes rouges!\nKwaa. T'es...<pause 15> un héros?\n\n\n<0x10009:0x00000013>J'ai les racines toutes molles, je peux pas\ndescendre... Peux-tu m'aider? Kwi.")
/*<118>*/ 			temp_flags[1 /* 0x1 02 */] = true;
          		}
          	}
          }

          void entrypoint_200_56() {
/*< 47>*/ 	start()
/*<311>*/ 	switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          	  case 0:
/*<310>*/ 		printf(/* textboxtype: 1, unk: 0, line: 128 */ "Avant de partir vers le cœur de la forêt sur les traces\nde dame Zelda, je vous recommande de sauvegarder\nvotre progression.")
          	  case 1:
/*<305>*/ 		switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          		  case 0:
/*<306>*/ 			switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          			  case 0:
/*<308>*/ 				switch (story_flags[54 /* us: 805A9ADC 0x02, jp: 805ACD5C 0x02 */]) {
          				  case 0:
/*<309>*/ 					switch (story_flags[53 /* us: 805A9ADC 0x01, jp: 805ACD5C 0x01 */]) {
          					  case 0:
/*<303>*/ 						printf(/* textboxtype: 0, unk: 1, line: 127 */ "Il n'y a pas d'autre aura de Kikwi dans cette zone.\n\n\n\nRetournez voir le Vénérable pour obtenir d'autres\ninformations.")
          					  case 1:
          						flw_304:
/*<304>*/ 						printf(/* textboxtype: 1, unk: 1, line: 129 */ "Depuis ici, la vue est dégagée. Je vous recommande\nd'utiliser la fonction détection pour chercher les\nKikwis.")
          					}
          				  case 1:
          					goto flw_304
          				}
          			  case 1:
          				goto flw_304
          			}
          		  case 1:
/*<568>*/ 			printf(/* textboxtype: 1, unk: 1, line: 126 */ "L'aura de dame Zelda est faible dans cette zone.\nJe vous recommande d'aller voir ailleurs.")
          		}
          	}
          }

          void entrypoint_200_90() {
/*<219>*/ 	start()
/*<312>*/ 	switch (story_flags[227 /* us: 805A9AF2 0x20, jp: 805ACD72 0x20 */]) {
          	  case 0:
/*<307>*/ 		printf(/* textboxtype: 2, unk: 1, line: 177 */ "<0x10009:0x00181705>Hmm? Tu as quelque chose à me demander?\n[1-]Les cubes[2-]Le temple[3]Non")
/*<448>*/ 		switch (choice(3)) {
          		  case 0:
/*<447>*/ 			printf(/* textboxtype: 0, unk: 2, line: 178 */ "<0x10009:0x00161e04>Si tu touches un cube avec la lumière qui\njaillit de ton épée, il disparaît dans le ciel.\n\n\nSelon les écrits anciens, il existe de nombreux\ncubes, un peu partout sur terre.")
          			flw_596:
/*<596>*/ 			{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<598>*/ 			printf(/* textboxtype: 1, unk: 0, line: 179 */ "<0x10009:0x00080b04>Les écrits anciens expliquent que le bâtiment\nqui se trouve à proximité s'appelle le temple\nde la contemplation...\n\n... et qu'il accueille les êtres venus du ciel.")
/*<449>*/ 			switch (scene_flags[29 /* 0x2 20 */]) {
          			  case 0:
          				goto flw_596
          			  case 1:
/*<450>*/ 				printf(/* textboxtype: 2, unk: 1, line: 180 */ "<0x10009:0x00001707>Tiens, j'y pense. Il y avait une vieille plaque\nde pierre dans le coin...\n\n\n<0x10009:0x00160b00>Elle portait des inscriptions...<pause 15> Ça devrait t'aider\nà trouver comment entrer dans le temple!")
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
/*<451>*/ 				printf(/* textboxtype: 2, unk: 1, line: 174 */ "<0x10009:0x00ffff00>Ce cube est fait d'un métal que j'ai jamais vu...\nJ'ai eu beau frapper dessus très fort...\nY'a pas moyen d'y faire la moindre bosse!")
/*<466>*/ 				set_camera(-1, 0)
/*<477>*/ 				printf(/* textboxtype: 0, unk: 2, line: 175 */ "<0x10009:0x00160b07>Ça doit bien vouloir dire quelque chose,\n« <color red<l'épée des cieux>coloroff> » et « <color red<la lumière issue\nde sa lame >coloroff>»...\n\n<0x10009:0x00001705>Mais quoi?")
/*<478>*/ 				{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 479, 'param3': 17}
/*<479>*/ 				{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 480, 'param3': 17}
/*<480>*/ 				wait_frames(30)
/*<481>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<486>*/ 				scene_flags[1 'Faron Woods'][37 /* 0x5 20 */] = true;
/*<455>*/ 				switch (scene_flags[36 /* 0x5 10 */]) {
          				  case 0:
          					flw_471:
/*<471>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 472, 'param3': 32}
/*<472>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 473, 'param3': 17}
/*<473>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 474, 'param3': 17}
/*<474>*/ 					wait_frames(30)
/*<457>*/ 					set_camera(37, 0)
/*<458>*/ 					printf(/* textboxtype: 1, unk: 0, line: 167 */ "<0x10009:0x00ffff05>Regarde...<pause 15> Ça, c'est un trésor que la Déesse\na laissé pour le héros venu du ciel...\n\n\nJ'ai appelé ça<pause 30> un <color blue<cube de la Déesse>coloroff>!")
/*<459>*/ 					set_camera(-1, 0)
/*<460>*/ 					printf(/* textboxtype: 2, unk: 1, line: 168 */ "<0x10009:0x00001e04>On peut lire dans les écrits anciens...\n\n\n\n« Si le porteur de l'épée des cieux<pause 30> les touche\nde la lumière issue de sa lame,<pause 30> il en sera\nrécompensé. »")
/*<475>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 476, 'param3': 17}
/*<476>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 461, 'param3': 17}
/*<461>*/ 					printf(/* textboxtype: 0, unk: 2, line: 169 */ "<0x10009:0x0018170b>T'aurais pas une épée, toi? Je voudrais que\ntu m'aides à résoudre l'énigme de ces cubes!\n[1-]D'accord[2-]Je ne\nveux pas")
/*<463>*/ 					switch (choice(2)) {
          					  case 0:
          						flw_462:
/*<462>*/ 						printf(/* textboxtype: 1, unk: 0, line: 170 */ "<0x10009:0x00171908>Oh, merci bien!")
          						flw_465:
/*<465>*/ 						set_camera(37, 0)
          						goto flw_451
          					  case 1:
/*<464>*/ 						printf(/* textboxtype: 2, unk: 1, line: 171 */ "<0x10009:0x0018170c>S'iiiil te plaaaaîîît!\n[1-]D'accord[2-]Je ne veux pas")
/*<467>*/ 						switch (choice(2)) {
          						  case 0:
          							goto flw_462
          						  case 1:
/*<468>*/ 							printf(/* textboxtype: 0, unk: 2, line: 172 */ "<0x10009:0x00080007>Bon, bon. Tu veux quelque chose en échange.\nJ'ai compris.")
/*<470>*/ 							give_item(161 0xA1);
/*<469>*/ 							printf(/* textboxtype: 1, unk: 0, line: 173 */ "<0x10009:0x00171906>Tiens! Avec ça, tu peux plus refuser!")
          							goto flw_465
          						}
          					}
          				  case 1:
/*<456>*/ 					printf(/* textboxtype: 0, unk: 2, line: 166 */ "<0x10009:0x00171908>Tu arrives au bon moment!\n\n\n\nJe viens juste de découvrir quelque chose dont\nparlent les écrits anciens.")
          					goto flw_471
          				}
          			}
          		  case 1:
/*<593>*/ 			switch (scene_flags[34 /* 0x5 04 */]) {
          			  case 0:
/*<594>*/ 				printf(/* textboxtype: 2, unk: 1, line: 165 */ "<0x10009:0x00000001>Hé, toi! Viens donc par ici!")
/*<595>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			  case 1:
/*<592>*/ 				scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<589>*/ 				printf(/* textboxtype: 1, unk: 0, line: 164 */ "<0x10009:0x00000001>Tiens! J'te connais, toi!\n\n\n\nViens donc ici un peu! J'aurais besoin de\nton aide!")
/*<590>*/ 				{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          			}
          		}
          	}
          }

          void entrypoint_200_57() {
/*< 20>*/ 	start()
/*< 21>*/ 	printf(/* textboxtype: 0, unk: 1, line: 130 */ "")
          }

          void entrypoint_200_05() {
/*< 36>*/ 	start()
/*< 37>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 39>*/ 		printf(/* textboxtype: 0, unk: 1, line: 64 */ "<0x10009:0x00000013>Tu nous as tous trouvés!\nTu prends ton devoir au sérieux.\nRepose un peu tes yeux, le vert!")
          	  case 1:
/*< 95>*/ 		switch (story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */]) {
          		  case 0:
/*<103>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 96, 'param3': 13}
/*< 96>*/ 			printf(/* textboxtype: 0, unk: 1, line: 61 */ "<0x10009:0x00000005>J'comprends pas comment tu m'as trouvé...\nJ'étais parfaitement invisible à l'œil nu!")
/*< 97>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 175, 'param3': 13}
/*<175>*/ 			switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          			  case 0:
/*<176>*/ 				printf(/* textboxtype: 1, unk: 2, line: 63 */ "<0x10009:0x00000007>Oh, si tu as trouvé le Vénérable, tu\ndois être un as de la trouvette! Kwii!")
          			  case 1:
/*<174>*/ 				printf(/* textboxtype: 2, unk: 0, line: 62 */ "<0x10009:0x00000014>C'est bien que tu m'aies trouvé. Mais tu n'as pas\nencore trouvé le Vénérable, on dirait... Kwa.")
          			}
          		  case 1:
/*<323>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 348, 'param3': 31}
/*<348>*/ 			{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 3, 'next': 80, 'param3': 46}
/*< 80>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1003, 'next': 104, 'param3': 24}
/*<104>*/ 			{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 38, 'param3': 13}
/*< 38>*/ 			printf(/* textboxtype: 1, unk: 2, line: 57 */ "<0x10009:0x00000013>Kwaa? Comment tu m'as trouvé?\nJ'étais si bien caché!")
/*< 98>*/ 			{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 208, 'param3': 13}
/*<208>*/ 			printf(/* textboxtype: 0, unk: 1, line: 58 */ "<0x10009:0x00000001>Mon petit nom, c'est <color blue<Robi>coloroff>. C'est moi le plus\nfort en camouflage. Kwaa. Après le Vénérable,\nbien sûr!")
/*<602>*/ 			story_flags[55 /* us: 805A9ADC 0x04, jp: 805ACD5C 0x04 */] = true;
/*<641>*/ 			story_flags[1155 /* us: 805A9B5A 0x02, jp: 805ACDDA 0x02 */] = true;
/*<653>*/ 			entrypoint_200_64();
          		}
          	}
          }

          void entrypoint_200_91() {
/*<283>*/ 	start()
/*<284>*/ 	printf(/* textboxtype: 0, unk: 2, line: 187 */ "")
          }

          void entrypoint_200_06() {
/*< 42>*/ 	start()
/*< 43>*/ 	switch (story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */]) {
          	  case 0:
/*< 45>*/ 		switch (story_flags[58 /* us: 805A9ADC 0x20, jp: 805ACD5C 0x20 */]) {
          		  case 0:
/*< 46>*/ 			printf(/* textboxtype: 0, unk: 1, line: 100 */ "<0x10009:0x00000002>Celle que tu appelles Zelda s'est rendue au\ntemple au cœur de la forêt.")
/*<119>*/ 			printf(/* textboxtype: 1, unk: 0, line: 101 */ "En utilisant le <color yellow<lance‐pierre>coloroff>, tu devrais pouvoir\nte rendre jusqu'au temple au cœur de la forêt.\n\n\n<0x10009:0x00000006>Puisses‐tu trouver ton amie! Kwiiii!")
          		  case 1:
/*<106>*/ 			switch (temp_flags[2 /* 0x1 04 */]) {
          			  case 0:
/*<107>*/ 				switch (random(2)) {
          				  case 0:
/*<110>*/ 					printf(/* textboxtype: 0, unk: 1, line: 97 */ "<0x10009:0x00000001>Sers‐toi de moi comme d'un marchepied\net prends‐le! Allez, kwaa!")
          				  case 1:
/*<109>*/ 					printf(/* textboxtype: 1, unk: 2, line: 96 */ "<0x10009:0x00000001>Kwaa... Monte vite sur mon dos, et attrape‐le!")
          				}
          			  case 1:
          				flw_127:
/*<127>*/ 				{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 44, 'param3': 31}
/*< 44>*/ 				printf(/* textboxtype: 2, unk: 0, line: 92 */ "<0x10009:0x0000000a>Hé! Ho! Tout le monde va bien?\nJe ne dois plus m'inquiéter, alors!\n\n\nTu es vraiment doué pour trouver les gens!\nKwi. Je ne sais pas qui tu es ni d'où tu viens,\nmais je te remercie.")
/*<575>*/ 				switch (temp_flags[4 /* 0x1 10 */]) {
          				  case 0:
/*<576>*/ 					printf(/* textboxtype: 1, unk: 1, line: 99 */ "<0x10009:0x00000008>Kwaa? Tu recherches aussi une amie?\n\n\n\nIl y avait bien une fille avec des poils jaunes\nsur la tête...")
          					flw_567:
/*<567>*/ 					set_camera(-1, 0)
/*<392>*/ 					printf(/* textboxtype: 0, unk: 0, line: 98 */ "<0x10009:0x00000002>Celle que tu appelles Zelda a dit qu'elle devait\nse rendre au temple qui se trouve au cœur de\nla forêt...\n\nJe lui ai dit de ne pas y aller parce que c'est\ndangereux, mais elle m'a grimpé dessus et\ny est allée quand même! Kwiiii!")
/*<393>*/ 					{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 102, 'next': 394, 'param3': 32}
/*<394>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 102, 'next': 395, 'param3': 17}
/*<395>*/ 					wait_frames(15)
/*<396>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 102, 'next': 399, 'param3': 17}
/*<399>*/ 					wait_frames(30)
/*<397>*/ 					set_camera(31, 0)
/*<125>*/ 					set_camera(7, 0)
/*<138>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 100, 'next': 139, 'param3': 15}
/*<139>*/ 					make_actor_do_something(3, 0)
/*<124>*/ 					printf(/* textboxtype: 0, unk: 1, line: 94 */ "<0x10009:0x00000003>Si tu continues par là, tu devrais arriver au\ntemple...<pause 15> Mais attention aux monstres qui\nrôdent... Kwii!")
/*<400>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 142, 'param3': 17}
/*<142>*/ 					set_camera(8, 0)
/*<143>*/ 					{'type': 'type3', 'subType': 2, 'param1': 8, 'param2': 356, 'next': 144, 'param3': 15}
/*<144>*/ 					{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 287, 'param3': 17}
/*<287>*/ 					{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 398, 'param3': 17}
/*<398>*/ 					wait_frames(15)
/*<126>*/ 					printf(/* textboxtype: 2, unk: 0, line: 95 */ "<0x10009:0x0000000e><0x10008:0x01cd>Kwaa! J'allais oublier\n\n\n\nPour te remercier d'avoir retrouvé mes \ncompagnons, je vais te donner notre trésor. Kwi.\n\n\n<0x10009:0x00000008>Kwaa... Un petit moment...")
/*<108>*/ 					temp_flags[2 /* 0x1 04 */] = true;
          				  case 1:
/*<577>*/ 					printf(/* textboxtype: 1, unk: 2, line: 93 */ "<0x10009:0x00000009>Maintenant que je suis rassuré, je me\nsouviens par où est partie ton amie!")
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
/*<381>*/ 						wait_frames(20)
/*<380>*/ 						set_camera(29, 0)
/*<642>*/ 						story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = false;
          						flw_382:
/*<382>*/ 						story_flags[57 /* us: 805A9ADC 0x10, jp: 805ACD5C 0x10 */] = true;
/*<498>*/ 						story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
          						goto flw_127
          					  case 1:
/*<149>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<564>*/ 						switch (choice(2)) {
          						  case 0:
/*<566>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<562>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_565:
/*<565>*/ 							set_camera(29, 0)
/*<563>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
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
/*<179>*/ 						printf(/* textboxtype: 1, unk: 2, line: 72 */ "<0x10009:0x00000003>Matéo, Kamom et Jasmi sont sains et saufs,\ntu dis?\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<encore un>coloroff> de mes petits compagnons Kikwis?\n\n\n<0x10009:0x00000002>Il aime se fondre dans les herbes, alors je te\nconseille de chercher... des herbes.\n\n\nEncore un effort, et je me rappellerai où\nton amie est allée.")
          					  case 1:
/*<212>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<502>*/ 						switch (choice(2)) {
          						  case 0:
/*<504>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<499>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_503:
/*<503>*/ 							set_camera(29, 0)
/*<500>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<501>*/ 							printf(/* textboxtype: 1, unk: 0, line: 71 */ "<0x10009:0x00000003>Hé! Ho! Matéo, Kamom et Jasmi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<505>*/ 							set_camera(-1, 0)
/*<506>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_383:
/*<383>*/ 								printf(/* textboxtype: 0, unk: 1, line: 73 */ "<0x10009:0x00000008>Est‐ce que ça t'ébouillanterait de chercher\n<color red<encore un>coloroff> de mes petits compagnons Kikwis?\n\n\nIl aime se fondre dans les herbes, alors je\nte conseille de chercher... bien, des herbes.\n\n\n<0x10009:0x00000002>Si tu le trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								flw_178:
/*<178>*/ 								scene_flags[1 'Faron Woods'][16 /* 0x3 01 */] = true;
/*<390>*/ 								set_camera(30, 0)
/*<391>*/ 								entrypoint_200_61();
          							  case 1:
/*<507>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
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
/*<184>*/ 						printf(/* textboxtype: 1, unk: 2, line: 75 */ "<0x10009:0x00000003>Matéo, Kamom et Robi sont sains\net saufs, tu dis?\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<encore un>coloroff> de mes petits compagnons Kikwis?\n\n\n<0x10009:0x00000002>Il aime monter dans les arbres, alors je te\nconseille de chercher... des arbres.\n\n\nEncore un effort, et je me rappellerai où\nton amie est allée!")
          					  case 1:
/*<213>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<511>*/ 						switch (choice(2)) {
          						  case 0:
/*<513>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<509>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_512:
/*<512>*/ 							set_camera(29, 0)
/*<510>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<508>*/ 							printf(/* textboxtype: 2, unk: 0, line: 74 */ "<0x10009:0x00000003>Hé! Ho! Matéo, Kamom et Robi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<514>*/ 							set_camera(-1, 0)
/*<515>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_384:
/*<384>*/ 								printf(/* textboxtype: 0, unk: 1, line: 76 */ "<0x10009:0x00000008>Est‐ce que ça t'ébouillanterait de chercher\n<color red<encore un>coloroff> de mes petits compagnons Kikwis?\n\n\nIl aime monter dans les arbres, alors je\nte conseille de chercher... des arbres.\n\n\n<0x10009:0x00000002>Si tu le trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<516>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_384
          							}
          						  case 1:
          							goto flw_512
          						}
          					}
          				  case 1:
/*<182>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<183>*/ 						printf(/* textboxtype: 1, unk: 2, line: 78 */ "<0x10009:0x00000003>Matéo et Kamom vont bien, tant mieux!\nMais je m'inquiète encore pour les autres...\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<encore deux>coloroff> de mes petits compagnons Kikwis?\n\n\n<0x10009:0x00000008>Ton amie est partie par là. Oh, attends, non!\nC'était peut‐être par ici...")
          					  case 1:
/*<214>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<520>*/ 						switch (choice(2)) {
          						  case 0:
/*<522>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<518>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_521:
/*<521>*/ 							set_camera(29, 0)
/*<519>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<517>*/ 							printf(/* textboxtype: 2, unk: 0, line: 77 */ "<0x10009:0x00000003>Hé! Ho! Matéo et Kamom sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<523>*/ 							set_camera(-1, 0)
/*<524>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_385:
/*<385>*/ 								printf(/* textboxtype: 0, unk: 1, line: 79 */ "<0x10009:0x00000002>Est‐ce que ça t'ébouillanterait de chercher\n<color red<encore deux>coloroff> de mes petits compagnons Kikwis?\n\n\nSi tu les trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<525>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
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
/*<195>*/ 						printf(/* textboxtype: 1, unk: 2, line: 81 */ "<0x10009:0x00000003>Matéo, Robi et Jasmi sont sains\net saufs, tu dis?\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<encore un>coloroff> de mes petits compagnons Kikwis?\n\n\nIl aime se déguiser en plante, alors je te\nconseille de chercher... des plantes.\n\n\n<0x10009:0x00000002>Encore un effort, et je me rappellerai où\nton amie est allée!")
          					  case 1:
/*<215>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<529>*/ 						switch (choice(2)) {
          						  case 0:
/*<531>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<527>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_530:
/*<530>*/ 							set_camera(29, 0)
/*<528>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<526>*/ 							printf(/* textboxtype: 2, unk: 0, line: 80 */ "<0x10009:0x00000003>Ho ho! Matéo, Jasmi et Robi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\net je ne peux pas bouger d'ici...")
/*<532>*/ 							set_camera(-1, 0)
/*<533>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_386:
/*<386>*/ 								printf(/* textboxtype: 0, unk: 1, line: 82 */ "<0x10009:0x00000008>Est‐ce que ça t'ébouillanterait de chercher\n<color red<encore un>coloroff> de mes petits compagnons Kikwis?\n\n\nIl aime se déguiser en plante, alors je te\nconseille de chercher... des plantes.\n\n\n<0x10009:0x00000002>Si tu le trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<534>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_386
          							}
          						  case 1:
          							goto flw_530
          						}
          					}
          				  case 1:
/*<188>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<189>*/ 						printf(/* textboxtype: 1, unk: 0, line: 84 */ "<0x10009:0x00000003>Matéo et Jasmi vont bien, tant mieux!\nMais je m'inquiète encore pour les autres...\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<encore deux>coloroff> de mes petits compagnons Kikwis?\n\n\n<0x10009:0x00000008>Ton amie est partie par là. Oh, attends, non!\nC'était peut‐être par ici...")
          					  case 1:
/*<216>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<538>*/ 						switch (choice(2)) {
          						  case 0:
/*<540>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<536>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_539:
/*<539>*/ 							set_camera(29, 0)
/*<537>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<535>*/ 							printf(/* textboxtype: 2, unk: 0, line: 83 */ "<0x10009:0x00000003>Hé! Ho! Matéo et Jasmi sont sains\net saufs, tu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<541>*/ 							set_camera(-1, 0)
/*<542>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_387:
/*<387>*/ 								printf(/* textboxtype: 0, unk: 1, line: 85 */ "<0x10009:0x00000002>Est‐ce que ça t'ébouillanterait de chercher\n<color red<encore deux>coloroff> de mes petits compagnons Kikwis?\n\n\nSi tu les trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<543>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
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
/*<194>*/ 						printf(/* textboxtype: 1, unk: 2, line: 87 */ "<0x10009:0x00000003>Matéo et Robi vont bien, tant mieux!\nMais je m'inquiète encore pour les autres...\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<encore deux>coloroff> de mes petits compagnons Kikwis?\n\n\n<0x10009:0x00000008>Ton amie est partie par là. Oh, attends, non!\nC'était peut‐être par ici...")
          					  case 1:
/*<217>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<547>*/ 						switch (choice(2)) {
          						  case 0:
/*<549>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<545>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_548:
/*<548>*/ 							set_camera(29, 0)
/*<546>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<544>*/ 							printf(/* textboxtype: 2, unk: 0, line: 86 */ "<0x10009:0x00000003>Hé! Ho! Matéo et Robi sont sains et saufs,\ntu dis?\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici... Kwiii!")
/*<550>*/ 							set_camera(-1, 0)
/*<551>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_388:
/*<388>*/ 								printf(/* textboxtype: 0, unk: 1, line: 88 */ "<0x10009:0x00000002>Est‐ce que ça t'ébouillanterait de chercher\nencore<color red< deux>coloroff> de mes petits compagnons Kikwis?\n\n\nSi tu les trouves, cela m'aidera à me rappeler\noù ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<552>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
          								goto flw_388
          							}
          						  case 1:
          							goto flw_548
          						}
          					}
          				  case 1:
/*<192>*/ 					switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          					  case 0:
/*<193>*/ 						printf(/* textboxtype: 1, unk: 2, line: 90 */ "<0x10009:0x00000003>Matéo va bien, tant mieux! Mais je m'inquiète\nencore pour les autres...\n\n\nEst‐ce que ça t'ébouillanterait de chercher\n<color red<trois>coloroff> de mes petits compagnons Kikwis?\n\n\n<0x10009:0x00000008>Ma mémoire me joue des tours, je ne me\nsouviens plus par où est partie ton amie!")
          					  case 1:
/*<218>*/ 						printf(/* textboxtype: 1, unk: 0, line: 66 */ "<0x10009:0x00000006>Hé! Ho!<pause 15> Je suis <color blue<Péko>coloroff>, chef des Kikwis.\n\n\n\nTu as décelé mon camouflage. Kwii!\nTon œil est parfaitement entraîné...<pause 15>\nTu m'as tout l'air d'un expert!\n\n[1-]Où est\nZelda?[2-]J'ai un\nmessage")
/*<556>*/ 						switch (choice(2)) {
          						  case 0:
/*<558>*/ 							temp_flags[3 /* 0x1 08 */] = true;
/*<554>*/ 							printf(/* textboxtype: 0, unk: 1, line: 67 */ "<0x10009:0x00000008>Zelda<0x10006:0xfdcd>...?<pause 15>\n\n\n\nKwa. Tu parles de la fille qui te ressemble,\navec des poils jaunes sur la tête? Oui, elle\nétait avec moi...\n\n<0x10009:0x0000000c>Mais parlons de cela plus tard. La forêt\nest remplie de monstres, et j'ai perdu mes\npetits compagnons de vue...\n\nJe suis très inquiet pour eux. Kwii! Dans\ncet état, mes souvenirs sont très confus.")
          							flw_557:
/*<557>*/ 							set_camera(29, 0)
/*<555>*/ 							printf(/* textboxtype: 1, unk: 0, line: 68 */ "<0x10009:0x0000000e>Kwaa?? Tu as rencontré quelques-uns\nde mes petits compagnons?")
/*<553>*/ 							printf(/* textboxtype: 2, unk: 0, line: 89 */ "<0x10009:0x00000003>Hoho! Matéo est sain et sauf, tu dis?\n\n\n\nMais la forêt grouille encore de monstres,\nje ne peux pas bouger d'ici...")
/*<559>*/ 							set_camera(-1, 0)
/*<560>*/ 							switch (temp_flags[3 /* 0x1 08 */]) {
          							  case 0:
          								flw_389:
/*<389>*/ 								printf(/* textboxtype: 0, unk: 1, line: 91 */ "<0x10009:0x00000002>Est‐ce que ça t'ébouillanterait de chercher\n<color red<trois>coloroff> de mes petits compagnons Kikwis?\n\n\nSi tu les retrouves tous, je pense que je me\nrappellerai où ton amie est allée.")
          								goto flw_178
          							  case 1:
/*<561>*/ 								printf(/* textboxtype: 1, unk: 2, line: 69 */ "<0x10009:0x00000008>Et toi aussi, tu recherches une amie?\n\n\n\nKwaa... Il y avait une fille avec des poils\njaunes sur la tête avec moi, il y a un moment.\n\n\n<0x10009:0x0000000c>Mais je ne peux parler de cela maintenant. La\nforêt est remplie de monstres, et j'ai perdu mes\npetits compagnons de vue... Je suis très inquiet\npour eux. Kwii!\n\nDans cet état, mes souvenirs sont très confus.")
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
/*< 53>*/ 	printf(/* textboxtype: 1, unk: 0, line: 131 */ "<0x10012:0x00000004>Maître <heroname>, voici des informations\nà propos de l'utilisation de vos objets.\n\n\nEn <color green<appuyant brièvement >coloroff>sur <icon 41>, vous vous apprêterez\nà tirer au <color yellow<lance‐pierre>coloroff>, puisqu'il s'agit du dernier objet\nque vous avez utilisé.<0x10011:0x0fcd>\n\nS'il vous arrivait d'oublier comment faire, vous\npouvez toujours appuyer sur <icon 37> pour accéder à l'<color red<aide>coloroff>.<0x10011:0x0bcd>")
          }

          void entrypoint_200_92() {
/*<285>*/ 	start()
/*<286>*/ 	printf(/* textboxtype: 1, unk: 0, line: 188 */ "")
          }

          void entrypoint_200_40() {
/*<314>*/ 	start()
/*<315>*/ 	printf(/* textboxtype: 1, unk: 1, line: 108 */ "<0x10005:0x004b0000><0x10012:0x00000001>Maître, nous sommes arrivés dans la <color blue<forêt de Firone>coloroff>.")
/*<333>*/ 	temp_flags[50 /* 0x7 04 */] = true;
          }

          void entrypoint_200_07() {
/*< 56>*/ 	start()
/*< 58>*/ 	{'type': 'type3', 'subType': 4, 'param1': 20, 'param2': 0, 'next': 203, 'param3': 13}
/*<203>*/ 	set_camera(3, 0)
/*<573>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 21, 'next': 574, 'param3': 13}
/*<574>*/ 	wait_frames(60)
          }

          void entrypoint_200_59() {
/*<204>*/ 	start()
/*<586>*/ 	switch (scene_flags[50 /* 0x7 04 */]) {
          	  case 0:
/*<588>*/ 		printf(/* textboxtype: 0, unk: 1, line: 133 */ "<0x10012:0x00000004>Maître <heroname>, la probabilité que la\nflamme sacrée se trouve dans le lac est de 80 %.")
          	  case 1:
/*<587>*/ 		printf(/* textboxtype: 1, unk: 0, line: 132 */ "<0x10012:0x00000004>Maître <heroname>, la probabilité que\nla flamme sacrée se trouve par‐delà cette\nporte est de 80 %.\n\nL'ermite Kikwi a révélé que le pouvoir de la Déesse\npermettait de compléter le symbole. Il est probable\nqu'il faisait référence à l'<color red<éclat céleste>coloroff>.\n\nInvoquez l'éclat céleste devant la porte et <color green<complétez\nle dessin>coloroff>.")
/*<620>*/ 		scene_flags[1 'Faron Woods'][52 /* 0x7 10 */] = true;
          	}
          }

          void entrypoint_200_41() {
/*<316>*/ 	start()
/*<317>*/ 	printf(/* textboxtype: 0, unk: 1, line: 109 */ "<0x10005:0x004b0000>La grande quantité d'eau présente ici favorise\nla poussée de grands arbres et de plantes.")
          }

          void entrypoint_200_93() {
/*<417>*/ 	start()
/*<418>*/ 	printf(/* textboxtype: 0, unk: 2, line: 163 */ "<0x10009:0x00000001>Tiens! J'te connais, toi!")
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
/*<319>*/ 	printf(/* textboxtype: 1, unk: 0, line: 110 */ "<0x10005:0x004b0000>De nombreuses créatures vivent également dans cet\nenvironnement naturel favorable.")
          }

          void entrypoint_200_94() {
/*<419>*/ 	start()
/*<425>*/ 	{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 427, 'param3': 46}
/*<427>*/ 	set_camera(35, 0)
/*<429>*/ 	switch (scene_flags[34 /* 0x5 04 */]) {
          	  case 0:
/*<488>*/ 		switch (scene_flags[37 /* 0x5 20 */]) {
          		  case 0:
/*<487>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Attends une seconde!\n\n\n\nJ'aimerais que tu m'aides à résoudre le mystère\ndes cubes.")
          			flw_437:
/*<437>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 435, 'param3': 49}
/*<435>*/ 			{'type': 'type3', 'subType': 2, 'param1': 12, 'param2': 356, 'next': 436, 'param3': 15}
/*<436>*/ 			set_camera(36, 0)
/*<483>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<489>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Hé, va-t'en pas!\n\n\n\nJ'ai quelque chose à te demander.")
          			goto flw_437
          		}
          	  case 1:
/*<434>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<453>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<433>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Attends donc une minute!\n\n\n\n<0x10009:0x00170600>Fais pas semblant de ne pas m'avoir remarqué!\nJe sais que tu m'as vu! <pause 15>T'es fâché contre moi,\nou quoi?\n\n[1-]Oups, pardon![2-]Je ne\nt'aime pas")
/*<431>*/ 		switch (choice(2)) {
          		  case 0:
/*<430>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Ah bon, tu recherches une jeune fille et tu es\npressé? Excuse‐moi! Je suis vraiment désolé.\n\n\nMais... j'aimerais que tu m'accordes une\ntoute petite minute.")
          			goto flw_437
          		  case 1:
/*<432>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Aïe. Je vois. C'est comme ça dans la vie des\nexplorateurs. On sera toujours des grands\nincompris...\n\nJe te demande pas beaucoup de temps.\nPromis.")
          			goto flw_437
          		}
          	}
          }

          void entrypoint_200_60() {
/*< 25>*/ 	start()
/*< 57>*/ 	{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 230, 'param3': 51}
/*<230>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 221, 'param3': 17}
/*<221>*/ 	{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 21, 'next': 225, 'param3': 13}
/*<225>*/ 	wait_frames(27)
/*<404>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 222, 'param3': 49}
/*<222>*/ 	{'type': 'type3', 'subType': 4, 'param1': 3, 'param2': 0, 'next': 224, 'param3': 13}
/*<224>*/ 	make_actor_do_something(0, 0)
/*<232>*/ 	wait_frames(24)
/*<405>*/ 	{'type': 'type3', 'subType': 4, 'param1': 13, 'param2': 0, 'next': 84, 'param3': 13}
/*< 84>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': 407, 'param3': 50}
/*<407>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 26, 'param3': 17}
/*< 26>*/ 	printf(/* textboxtype: 1, unk: 0, line: 134 */ "<0x10012:0x00000004>Maître <heroname>, vous venez d'obtenir une\ninformation concernant dame Zelda.\n\n\nElle s'est enfuie après avoir été attaquée par des\nmonstres.<pause 15> Elle est très probablement encore en danger.")
/*<154>*/ 	{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 256, 'next': 336, 'param3': 30}
/*<336>*/ 	wait_frames(15)
/*<313>*/ 	story_flags[52 /* us: 805A9ADD 0x80, jp: 805ACD5D 0x80 */] = true;
/*<153>*/ 	printf(/* textboxtype: 1, unk: 1, line: 135 */ "<sound 4>J'ai marqué la position du Kikwi Matéo.\nRegardez votre carte.")
/*<157>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1, 'next': 337, 'param3': 34}
/*<337>*/ 	wait_frames(15)
/*<223>*/ 	{'type': 'type3', 'subType': 4, 'param1': 14, 'param2': 0, 'next': 282, 'param3': 13}
/*<282>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 155, 'param3': 17}
/*<155>*/ 	printf(/* textboxtype: 0, unk: 1, line: 136 */ "La fonction détection a réagi au Kikwi car il a dû\nêtre en contact avec dame Zelda.\n\n\nLa probabilité que le Vénérable, qui s'est enfui avec\ndame Zelda, fasse également réagir la détection\nest de 85 %.\n\nJe vous recommande en conséquence de continuer\nà rechercher dame Zelda avec ma fonction détection.")
/*<156>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 406, 'param3': 36}
/*<406>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 226, 'param3': 17}
/*<226>*/ 	wait_frames(21)
/*<229>*/ 	{'type': 'type3', 'subType': 4, 'param1': 5, 'param2': 0, 'next': 263, 'param3': 13}
/*<263>*/ 	wait_frames(30)
/*<341>*/ 	set_camera(19, 0)
/*<264>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 228, 'param3': 17}
/*<228>*/ 	{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 227, 'param3': 13}
/*<227>*/ 	printf(/* textboxtype: 2, unk: 0, line: 20 */ "<0x10009:0x0000000d>Kwii! J'ai failli tomber dans les pommes de\npeur! Ta copine bleue est vraiment bizarre...")
/*<495>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 494, 'param3': 13}
/*<494>*/ 	printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x00000007>Ka-kwa. Tu veux partir à leur recherche.\nTu pourrais <color red<dire au >coloroff><color blue<Vénérable>coloroff> <color red<que je vais bien>coloroff>?\n\n\n<0x10009:0x00000005>Garde espoir, le vert. Ton amie créature est\nsûrement en sécurité avec lui!")
/*<583>*/ 	scene_flags[1 'Faron Woods'][45 /* 0x4 20 */] = true;
/*<584>*/ 	{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          }

          void entrypoint_200_09() {
/*<140>*/ 	start()
/*<141>*/ 	printf(/* textboxtype: 1, unk: 1, line: 102 */ "<0x10009:0x00000002>Avec ça, tu devrais pouvoir te rendre au temple\nau cœur de la forêt.")
/*<354>*/ 	set_camera(21, 0)
/*<355>*/ 	{'type': 'type3', 'subType': 2, 'param1': 33, 'param2': 356, 'next': 356, 'param3': 15}
/*<356>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 101, 'next': 357, 'param3': 32}
/*<357>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 101, 'next': 358, 'param3': 17}
/*<358>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 101, 'next': 359, 'param3': 17}
/*<359>*/ 	set_camera(22, 0)
/*<362>*/ 	switch (scene_flags[5 /* 0x1 20 */]) {
          	  case 0:
/*<364>*/ 		printf(/* textboxtype: 1, unk: 0, line: 104 */ "<0x10009:0x00000008>Vise donc cette liane entortillée pour comm...\nKwaa?\n\n\nTu apprends vite, le vert!<pause 15> Tant mieux.\nÇa va simplifier les explications.")
          		flw_365:
/*<365>*/ 		printf(/* textboxtype: 1, unk: 1, line: 105 */ "<0x10009:0x00000002>Sors ton lance‐pierre avec <icon 41>, appuie à\nnouveau sur <icon 41> pour bander l'élastique\npuis relâche le bouton pour tirer.<0x10011:0x0fcd>\n\nSi tu es à court de munitions, tu pourras\n<color green<trouver des graines >coloroff>dans les fruits des\narbres du coin.")
/*<360>*/ 		set_camera(23, 0)
/*<368>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 367, 'param3': 17}
/*<367>*/ 		switch (scene_flags[5 /* 0x1 20 */]) {
          		  case 0:
/*<361>*/ 			{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 366, 'param3': 17}
/*<366>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Puisses‐tu trouver ton amie! Kwiii!")
/*<372>*/ 			set_camera(25, 0)
/*<373>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<369>*/ 			printf(/* textboxtype: 0, unk: 1, line: 106 */ "<0x10009:0x00000006>Puisses‐tu trouver ton amie! Kwiii!")
/*<370>*/ 			set_camera(24, 0)
/*<371>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		}
          	  case 1:
/*<363>*/ 		printf(/* textboxtype: 0, unk: 1, line: 103 */ "<0x10009:0x00000008>Pour commencer, essaie de viser cette liane\nentortillée.")
          		goto flw_365
          	}
          }

          void entrypoint_200_43() {
/*<320>*/ 	start()
/*<321>*/ 	printf(/* textboxtype: 1, unk: 1, line: 111 */ "<0x10005:0x004b0000>Mon analyse suggère que dame Zelda se trouve\nquelque part dans cette forêt.\n\n\n<0x10005:0x004b0000>Je vous recommande donc de la chercher à l'aide\nde ma fonction détection.")
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
/*<490>*/ 			printf(/* textboxtype: 0, unk: 2, line: 181 */ "<0x10009:0x00000002><0x10008:0x02cd>Attends une seconde!\n\n\n\nJ'aimerais que tu m'aides à résoudre le mystère\ndes cubes.")
          			flw_446:
/*<446>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 444, 'param3': 49}
/*<444>*/ 			{'type': 'type3', 'subType': 2, 'param1': 13, 'param2': 356, 'next': 445, 'param3': 15}
/*<445>*/ 			set_camera(36, 0)
/*<484>*/ 			{'type': 'type3', 'subType': 1, 'param1': 4, 'param2': -1, 'next': -1, 'param3': 42}
          		  case 1:
/*<492>*/ 			printf(/* textboxtype: 1, unk: 0, line: 182 */ "<0x10009:0x00000002><0x10008:0x02cd>Hé, va-t'en pas!\n\n\n\nJ'ai quelque chose à te demander.")
          			goto flw_446
          		}
          	  case 1:
/*<443>*/ 		scene_flags[1 'Faron Woods'][34 /* 0x5 04 */] = true;
/*<454>*/ 		scene_flags[1 'Faron Woods'][36 /* 0x5 10 */] = true;
/*<442>*/ 		printf(/* textboxtype: 2, unk: 1, line: 183 */ "<0x10009:0x00000003><0x10008:0x02cd>Attends donc une minute!\n\n\n\n<0x10009:0x00170600>Fais pas semblant de ne pas m'avoir remarqué!\nJe sais que tu m'as vu! <pause 15>T'es fâché contre moi,\nou quoi?\n\n[1-]Oups, pardon![2-]Je ne\nt'aime pas")
/*<440>*/ 		switch (choice(2)) {
          		  case 0:
/*<439>*/ 			printf(/* textboxtype: 0, unk: 2, line: 184 */ "<0x10009:0x00161e07>Ah bon, tu recherches une jeune fille et tu es\npressé? Excuse‐moi! Je suis vraiment désolé.\n\n\nMais... j'aimerais que tu m'accordes une\ntoute petite minute.")
          			goto flw_446
          		  case 1:
/*<441>*/ 			printf(/* textboxtype: 1, unk: 0, line: 185 */ "<0x10009:0x00161e56>Aïe. Je vois. C'est comme ça dans la vie des\nexplorateurs. On sera toujours des grands\nincompris...\n\nJe te demande pas beaucoup de temps.\nPromis.")
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
/*<197>*/ 	printf(/* textboxtype: 1, unk: 0, line: 137 */ "Malheureusement, le Vénérable n'est plus avec dame\nZelda.<pause 15> Cependant, il semble posséder des informations.\n\n\nLes chances d'obtenir des informations sur dame\nZelda en aidant le Vénérable à retrouver ses\ncompagnons perdus sont de 85 %.\n\nJ'ai ajouté l'<color red<<sound 4>aura des Kikwis >coloroff>à la fonction détection.")
/*<618>*/ 	open_dowsing_wheel(1)
/*<619>*/ 	printf(/* textboxtype: 1, unk: 1, line: 138 */ "Souhaitez‐vous des informations complémentaires sur\nle changement de cible de ma fonction détection?\n[1-]Oui[2]Non")
/*<601>*/ 	switch (choice(2)) {
          	  case 0:
          		flw_496:
/*<496>*/ 		printf(/* textboxtype: 0, unk: 1, line: 139 */ "Maintenez (^) enfoncé pour afficher les cibles\npossibles de la fonction détection.<0x10011:0x08cd>\n\n\nSélectionnez ce que vous souhaitez détecter puis\nrelâchez (^) pour valider.<0x10011:0x08cd>\n\n\nSi vous ne souhaitez rien détecter, sélectionnez la\n<color green<vue subjective>coloroff> et relâchez (^).\n[1-]Encore une fois[2]Compris")
/*<497>*/ 		switch (choice(2)) {
          		  case 0:
          			goto flw_496
          		  case 1:
          			flw_617:
/*<617>*/ 			printf(/* textboxtype: 1, unk: 0, line: 140 */ "Les Kikwis que vous avez déjà trouvés seront indiqués\nsur la carte et ne feront plus réagir ma fonction\ndétection.\n\nVous pouvez maintenant partir à la recherche\ndes Kikwis perdus.")
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
/*<424>*/ 	printf(/* textboxtype: 1, unk: 0, line: 176 */ "<0x10009:0x00151908>Oooh! Wow! Le cube est parti dans le ciel!\nAs-tu vu ça?\n\n\n<0x10009:0x00131b00>Il a réagi à la lumière qui est sortie\nde ton épée...\n\n\n<0x10009:0x00001b05>Où est‐ce que le cube a‐t‐il bien pu se ramasser?\nLe mystère devient de plus en plus...\nmystérieux!\n\n<0x10009:0x00161e00>Selon les écrits anciens, il existe de nombreux\ncubes sur la terre...\n\n\n<0x10009:0x00001700>Essaie d'en trouver d'autres, et dis‐moi si tu en\napprends plus à leur sujet!")
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
/*<269>*/ 						wait_frames(27)
/*<237>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 234, 'param3': 16}
/*<234>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "La fonction détection ne réagit plus à aucune aura\ndans les environs.\n\n\nJe vous recommande de retourner auprès du\nVénérable pour obtenir d'autres informations.")
/*<236>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 271, 'param3': 36}
          						flw_271:
/*<271>*/ 						wait_frames(21)
/*<344>*/ 						set_camera(17, 0)
/*<343>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 347, 'param3': 17}
/*<347>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 346, 'param3': 17}
/*<346>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 345, 'param3': 13}
/*<345>*/ 						printf(/* textboxtype: 0, unk: 1, line: 40 */ "<0x10009:0x00000014>Ah! Me fais pas peur comme ça! Kwiii!")
/*<378>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<678>*/ 						set_camera(16, 0)
/*<669>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 673, 'param3': 51}
/*<673>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 671, 'param3': 17}
/*<671>*/ 						{'type': 'type3', 'subType': 4, 'param1': 6, 'param2': 10, 'next': 672, 'param3': 13}
/*<672>*/ 						wait_frames(27)
/*<670>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 676, 'param3': 16}
/*<676>*/ 						printf(/* textboxtype: 0, unk: 1, line: 142 */ "J'ai <sound 4>marqué la position du Kikwi Kamom.\nDame Zelda n'était pas avec lui.")
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
/*<581>*/ 	wait_frames(60)
/*<328>*/ 	set_camera(15, 0)
/*<326>*/ 	wait_frames(75)
/*<331>*/ 	{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 1002, 'next': 332, 'param3': 24}
/*<332>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 356, 'next': 325, 'param3': 15}
/*<325>*/ 	{'type': 'type3', 'subType': 4, 'param1': 12, 'param2': 0, 'next': 327, 'param3': 13}
/*<327>*/ 	{'type': 'type3', 'subType': 2, 'param1': 11, 'param2': 100, 'next': 329, 'param3': 14}
/*<329>*/ 	{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 330, 'param3': 17}
/*<330>*/ 	{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 291, 'param3': 13}
/*<291>*/ 	printf(/* textboxtype: 0, unk: 1, line: 25 */ "<0x10009:0x00000007>Hé! Ho! Le vert, c'est moi! T'as trouvé la fille\nque tu recherchais?\n[1-]Qui es‐tu?[2-]Pas encore...")
/*<292>*/ 	switch (choice(2)) {
          	  case 0:
/*<295>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 293, 'param3': 13}
/*<293>*/ 		printf(/* textboxtype: 2, unk: 0, line: 26 */ "<0x10009:0x00000013>Kwaa? Tu m'as déjà oublié? C'est moi, <color blue<Matéo>coloroff>!\nTu me fais de la peine, le vert.")
          		flw_297:
/*<297>*/ 		{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 298, 'param3': 13}
/*<298>*/ 		printf(/* textboxtype: 0, unk: 1, line: 28 */ "<0x10009:0x00000007>J'ai retrouvé tous mes amis Kikwis!\nC'est grâce à toi, le vert!")
/*<290>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 296, 'param3': 13}
/*<296>*/ 		printf(/* textboxtype: 2, unk: 0, line: 29 */ "<0x10009:0x00000005>J'espère que tu trouveras la fille que\ntu recherches. À la revoyure!")
/*<299>*/ 		{'type': 'type3', 'subType': 2, 'param1': 10, 'param2': 0, 'next': 300, 'param3': 14}
/*<300>*/ 		story_flags[69 /* us: 805A9ADE 0x01, jp: 805ACD5E 0x01 */] = true;
/*<322>*/ 		{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          	  case 1:
/*<289>*/ 		{'type': 'type3', 'subType': 4, 'param1': 17, 'param2': 0, 'next': 294, 'param3': 13}
/*<294>*/ 		printf(/* textboxtype: 1, unk: 2, line: 27 */ "<0x10009:0x00000013>Ah... C'est dommage. Mais au moins, tu sais\nvers où elle est allée... Kwii. C'est déjà ça, non?")
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
/*<273>*/ 						wait_frames(28)
/*<246>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 100, 'next': 243, 'param3': 16}
/*<243>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "La fonction détection ne réagit plus à aucune aura\ndans les environs.\n\n\nJe vous recommande de retourner auprès du\nVénérable pour obtenir d'autres informations.")
/*<245>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 275, 'param3': 36}
          						flw_275:
/*<275>*/ 						wait_frames(21)
/*<375>*/ 						set_camera(26, 0)
/*<374>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 278, 'param3': 17}
/*<278>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 277, 'param3': 17}
/*<277>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 276, 'param3': 13}
/*<276>*/ 						printf(/* textboxtype: 0, unk: 1, line: 52 */ "<0x10009:0x0000000d>Kwiii! Ne me fais pas peur comme ça!\nJ'ai encore cru que c'était un monstre!")
/*<582>*/ 						scene_flags[1 'Faron Woods'][53 /* 0x7 20 */] = true;
/*<585>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          					  case 1:
/*<679>*/ 						set_camera(27, 0)
/*<660>*/ 						{'type': 'type3', 'subType': 1, 'param1': -1, 'param2': 0, 'next': 665, 'param3': 35}
/*<665>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 3, 'next': 663, 'param3': 17}
/*<663>*/ 						{'type': 'type3', 'subType': 4, 'param1': 10, 'param2': 10, 'next': 664, 'param3': 13}
/*<664>*/ 						wait_frames(28)
/*<662>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 667, 'param3': 16}
/*<667>*/ 						printf(/* textboxtype: 1, unk: 2, line: 144 */ "J'ai <sound 4>marqué la position du Kikwi Jasmi.\nDame Zelda n'était pas avec lui.")
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
/*<376>*/ 						printf(/* textboxtype: 1, unk: 1, line: 147 */ "La fonction détection ne réagit plus à aucune aura\ndans les environs.\n\n\nJe vous recommande de retourner auprès du\nVénérable pour obtenir d'autres informations.")
          						flw_252:
/*<252>*/ 						{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 231, 'param3': 36}
/*<231>*/ 						wait_frames(21)
/*<350>*/ 						set_camera(17, 0)
/*<349>*/ 						{'type': 'type3', 'subType': 1, 'param1': 100, 'param2': 0, 'next': 352, 'param3': 17}
/*<352>*/ 						{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': 100, 'next': 351, 'param3': 17}
/*<351>*/ 						{'type': 'type3', 'subType': 4, 'param1': 11, 'param2': 0, 'next': 172, 'param3': 13}
/*<172>*/ 						switch (story_flags[56 /* us: 805A9ADC 0x08, jp: 805ACD5C 0x08 */]) {
          						  case 0:
/*<173>*/ 							printf(/* textboxtype: 2, unk: 0, line: 59 */ "<0x10009:0x00000005>Kwaa. Tu as vu le Vénérable?\nEt il est sain et sauf aussi!\n\n\n<0x10009:0x00000014>Si tu le revois, dis‐lui que je suis ici!")
          							flw_379:
/*<379>*/ 							{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': -1, 'next': -1, 'param3': 42}
          						  case 1:
/*<171>*/ 							printf(/* textboxtype: 1, unk: 2, line: 60 */ "<0x10009:0x00000004>Normal. Le Vénérable est le plus fort en\ncamouflage! Tu penses que tu peux le trouver?")
          							goto flw_379
          						}
          					  case 1:
/*<680>*/ 						set_camera(38, 0)
/*<656>*/ 						{'type': 'type3', 'subType': 1, 'param1': 35, 'param2': 0, 'next': 657, 'param3': 51}
/*<657>*/ 						{'type': 'type3', 'subType': 1, 'param1': 3, 'param2': 0, 'next': 658, 'param3': 16}
/*<658>*/ 						printf(/* textboxtype: 2, unk: 0, line: 146 */ "J'ai <sound 4>marqué la position du Kikwi Robi.\nDame Zelda n'était pas avec lui.")
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
/*<421>*/ 	printf(/* textboxtype: 2, unk: 1, line: 189 */ "Toi qui descends du ciel sur la terre,\nfrappe l'étoile vers laquelle se dirige\nl'oiseau aux ailes déployées.")
          }

          void entrypoint_200_65() {
/*<599>*/ 	start()
/*<600>*/ 	printf(/* textboxtype: 1, unk: 0, line: 158 */ "La végétation est identique à celle de la forêt de\nFirone. Nous sommes très probablement au cœur\nde la forêt.\n\nDame Zelda s'est dirigée vers le temple.\nReprenons les recherches.")
/*<611>*/ 	story_flags[100 /* us: 805A9ADE 0x02, jp: 805ACD5E 0x02 */] = true;
/*<612>*/ 	story_flags[818 /* us: 805A9B30 0x04, jp: 805ACDB0 0x04 */] = true;
          }

          void entrypoint_200_50() {
/*<258>*/ 	start()
/*<301>*/ 	printf(/* textboxtype: 1, unk: 1, line: 150 */ "<0x10012:0x00000004>Maître <heroname>, je ressens l'aura\nde dame <color blue<Zelda>coloroff> à l'intérieur de cette construction.")
/*<302>*/ 	set_camera(13, 0)
/*<265>*/ 	set_camera(-1, 0)
/*<259>*/ 	printf(/* textboxtype: 0, unk: 1, line: 151 */ "Cependant, je ressens également la présence d'une\nmultitude de monstres. Souhaitez‐vous tout de même\ncontinuer?\n[1-]Bien sûr[2-]Non")
/*<260>*/ 	switch (choice(2)) {
          	  case 0:
/*<262>*/ 		printf(/* textboxtype: 1, unk: 0, line: 152 */ "Restez prudent. Personne ne pourra venir vous aider\nici.")
          		flw_266:
/*<266>*/ 		set_camera(14, 0)
/*<267>*/ 		printf(/* textboxtype: 0, unk: 1, line: 154 */ "Si le danger devient trop grand, vous pouvez toujours\n<color green<retourner dans le ciel >coloroff>pour mieux vous préparer.")
/*<607>*/ 		set_camera(-1, 0)
/*<603>*/ 		switch (adventure_pouch_has(0 0x0000)) {
          		  case 0:
/*<605>*/ 			printf(/* textboxtype: 1, unk: 1, line: 156 */ "Il est toujours bon d'avoir sur vous un <color red<bouclier>coloroff> pour\nvous protéger et des <color red<potions>coloroff> pour vous soigner.")
          			flw_606:
/*<606>*/ 			printf(/* textboxtype: 0, unk: 1, line: 157 */ "Repartons à la recherche de dame Zelda.")
          		  case 1:
/*<604>*/ 			printf(/* textboxtype: 1, unk: 0, line: 155 */ "<0x10012:0x00000001>Maître, vous n'êtes pas équipé d'un <color red<bouclier>coloroff>.\nJe vous recommande de toujours en avoir un\nà portée de la main.")
          			goto flw_606
          		}
          	  case 1:
/*<261>*/ 		printf(/* textboxtype: 1, unk: 1, line: 153 */ "La peur participe à l'instinct de conservation des\ncréatures vivantes. Il n'y a pas de honte à avoir.")
          		goto flw_266
          	}
          }

          void entrypoint_200_51() {
/*< 13>*/ 	start()
/*< 14>*/ 	printf(/* textboxtype: 0, unk: 1, line: 112 */ "<0x10012:0x0000000b>Maître, veuillez prendre connaissance de ces\ninformations pertinentes :\n\n\n<sound 4><color red<Ma fonction détection réagit >coloroff>à cette créature.\n[1-]Ah bon?[2-]C'était Zelda?")
/*< 15>*/ 	switch (choice(2)) {
          	  case 0:
/*< 16>*/ 		printf(/* textboxtype: 1, unk: 0, line: 113 */ "<0x10012:0x00000005>Oui, Maître. Mon analyse suggère qu'il s'agit d'un\n<color blue<Kikwi>coloroff>, une des créatures pacifiques qui peuplent\nla forêt.\n\nIls sont doués de parole et disposent de grandes\nconnaissances.<pause 15> Il ne s'agit pas de dame Zelda.\n\n\nLa raison pour laquelle il fait réagir la fonction\ndétection m'est inconnue. Je vous encourage à\nrattraper ce Kikwi pour éclaircir ce mystère.")
          		flw_132:
/*<132>*/ 		set_camera(10, 0)
/*<134>*/ 		wait_frames(30)
          	  case 1:
/*< 17>*/ 		printf(/* textboxtype: 1, unk: 1, line: 114 */ "La probabilité que cette créature soit dame Zelda est\nde 5 %. Il s'agit d'un <color blue<Kikwi>coloroff>, une des créatures\npacifiques qui peuplent la forêt.\n\nIls sont doués de parole, et disposent de grandes\nconnaissances.<pause 15> Cependant, la raison pour laquelle\nil fait réagir la fonction détection m'est inconnue.\n\nJe vous encourage à rattraper ce Kikwi pour\néclaircir ce mystère.")
          		goto flw_132
          	}
          }

          void entrypoint_200_69() {
/*<621>*/ 	start()
/*<622>*/ 	printf(/* textboxtype: 1, unk: 1, line: 159 */ "<0x10012:0x00000004>Maître <heroname>, si vous avez des questions,\nn'hésitez pas à m'appeler à tout moment en appuyant\nsur (v).<0x10011:0x09cd>\n\nSélectionnez <color red<Conseil >coloroff>puis <color red<Indice>coloroff> et je vous fournirai\ndes informations que je jugerai utiles selon la\nsituation.")
/*<628>*/ 	scene_flags[1 'Faron Woods'][69 /* 0x9 20 */] = true;
          }

