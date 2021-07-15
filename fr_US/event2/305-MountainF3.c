          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf("\x0E\x01\x09\x04\x00\x700Y a\x2010t\x2010il autre chose dont tu veux que\nje te parle?\n[1]Le <b<dragon\nd'eau>>[2]Le <b<dragon\nde foudre>>[3]Le volcan[4-]Non")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf("\x0E\x01\x09\x04\x07\x702Hmm, le <b<dragon d'eau>>... Elle a été\nchargée par la Déesse de protéger la\nforêt.\n\n\x0E\x01\x09\x04\x00\x700Elle est très puissante, mais elle a aussi\nun fort caractère... Fais attention à ne\npas te faire dévorer.\n\n\x0E\x01\x09\x04\x00\x703Hahahaha!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf("\x0E\x01\x09\x04\x07\x702Le <b<dragon de foudre>>? Il a été chargé\npar la Déesse de protéger le désert.\n\n\nIl garde précieusement un <r<bouclier\nlégendaire>>.\n\n\n\x0E\x01\x09\x04\x00\x700Il aurait mis au point une épreuve pour\njuger qui sera digne de se voir offrir ce\nbouclier.\n\nLe connaissant, j'imagine que cette\népreuve doit être assez brutale.\n\n\n\x0E\x01\x09\x04\x00\x03Hahahaha!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf("\x0E\x01\x09\x04\x07\x702Hmm... Ces montagnes n'ont pas\ntoujours été aussi dangereuses.\n\n\n\x0E\x01\x09\x04\x00\x700Jadis, les habitants de la surface et\nceux des souterrains y vivaient en\nharmonie en jouissant des bienfaits de\nla montagne.\n\x0E\x01\x09\x04\x00\x700Mais de cette époque, il ne reste\naujourd'hui plus que des ruines...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf("\x0E\x01\x09\x04\x00\x702Vraiment? Ta route est toute tracée...\nSuis-la.")
          			}
          		  case 1:
/*< 41>*/ 			printf("\x0E\x01\x09\x04\x00\x701Tiens... Regarde qui est là!\n\n\n\n\x0E\x01\x09\x04\x00\x700Sur quoi puis\x2010je te renseigner, jeune\nhéros?\n[1]Le <b<dragon\nd'eau>>[2]Le <b<dragon\nde foudre>>[3]Le volcan[4-]Rien de\nspécial")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf("L'éruption du volcan a été causée par\nl'explosion de ma force. Je suis désolé\nque tu te sois retrouvé impliqué\nlà\x2010dedans.\nBientôt, le ciel devrait se découvrir\nà nouveau...\n\n\nMets-toi en route.")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf("L'éruption du volcan a été causée par\nl'explosion de ma force. Je suis désolé\nque tu te sois retrouvé impliqué\nlà\x2010dedans.\nBientôt, le ciel devrait se découvrir\nà nouveau...\n\n\nMets-toi en route.")
/*< 28>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 29>*/ 				changeScene(4, 0) // 
          			}
          		  case 1:
          			goto flw_57
          		}
          	}
          }

          void entrypoint_305_02() {
/*<  1>*/ 	start()
/*< 50>*/ 	{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 2, 'param3': 16}
/*<  2>*/ 	printf("\x0E\x01\x09\x04\x00\x10TADAM!\nVoilà ton sauveur!")
/*<  3>*/ 	printf("\x0E\x01\x09\x04\x0F\xF08Salut! Ça faisait des lunes, bonhomme!\n\n\n\n\x0E\x01\x09\x04\x00\xE00Quoi? Tu te souviens plus de moi?\n\n\n\n\x0E\x01\x09\x04\x0E\xE00Je suis <b<Tino>>, le Mogma qui t'a aidé\ndans le temple au nord!\n\n\n\x0E\x01\x09\x04\x0E\xE00Je les ai vus t'emmener alors que t'étais\ndans les vapes et je les ai suivis!")
/*<  4>*/ 	printf("\x0E\x01\x09\x04\x0D\xE0AT'es un vrai casse\x2010cou, bonhomme...\nQu'est\x2010ce que t'es venu faire par ici,\ncette fois?\n[1]Eh bien...[2]Je cherche\ndes trésors")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf("\x0E\x01\x09\x04\x0E\xE05Tu cherches un dra... un dragon?\nTu veux dire, l'espèce de dieu?\n\n\nHmm... On raconte qu'il y a un dieu qui\nvit quelque part dans ces montagnes...\n\n\n\x0E\x01\x09\x04\x0F\x210AT'aimes bien ce genre de contes de fées,\non dirait...\n\n\n\x0E\x01\x09\x04\x0D\x00Quoi? Tu veux savoir ce que je fais\nici?\n\n\n\x0E\x01\x09\x04\x0E\xE0BEh ben, j'ai entendu dire que des\nméchants s'étaient regroupés dans ces\nmontagnes...\n\nHéhéhé... Et tout le monde sait que là\noù y a des méchants, y a aussi des\ntrésors!")
          		flw_17:
/*< 17>*/ 		printf("\x0E\x01\x09\x04\x0E\xE09Tu ne penses pas que t'as autre chose à\nfaire en priorité?\n\n\nT'as pas remarqué?\nT'as plus d'armes!\n\n\n\x0E\x01\x09\x04\x0F\xF0APendant que t'étais évanoui, ils t'ont\ncomplètement dépouillé... Va falloir\nque tu récupères tes affaires, tu penses\npas?\n\x0E\x01\x09\x04\x0E\xE00J'ai réussi à leur piquer ça...")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf("\x0E\x01\x09\x04\x11\x110BBon, c'est assez la jasette. J'ai d'autres\nchats à fouetter! Je te laisse!\n\n\n\x0E\x01\x09\x04\x0F\xE00À la prochaine!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf("\x0E\x01\x09\x04\x0F\xF0BHaha, je vois! Toi aussi t'as entendu\nla rumeur, hein!\n\n\n\x0E\x01\x09\x04\x0E\xE00Héhéhé... La rumeur qui dit que des\nméchants se sont regroupés dans ces\nmontagnes!\n\n\x0E\x01\x09\x04\x0F\xE00Et tout le monde sait que là où y a des\nméchants, y a aussi des trésors rares!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf("\x0E\x01\x09\x04\x00\nIl faut surtout pas qu'ils te trouvent!\n\n\n\n\x0E\x01\x09\x04\x0F\xE00Sinon, tu vas passer un méchant\nquart d'heure! Fais\x2010toi discret!\n\n\nTu m'as bien compris?\n[1]Oui, oui[2]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf("......\n\n\n\n\x0E\x01\x09\x04\x0F\xE06Haa... Tu sais, je m'inquiète pour toi,\nbonhomme...\n\n\n\x0E\x01\x09\x04\x0E\xE00OK! Je vais te montrer quelque chose!\nSors ta carte!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf("\x0E\x01\x09\x04\x11\x110BTe sens-tu bien prêt? Tiens. Je vais\nfaire ma B.A. de la journée. Je vais\nte montrer ce qu'il y a dans les coffres!\n\n... Tadam!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf("\x0E\x01\x09\x04\x0E\xE09Pfff. Y'a rien là\x2010dedans qui\nm'intéresse de toute façon...\n\n\n\x0E\x01\x09\x04\x0F\xE00S'il y a des choses qui étaient à toi\nlà\x2010dedans, tu devrais aller les\nrécupérer.")
/*< 22>*/ 			printf("\x0E\x01\x09\x04\x0E\xE0BBien! Moi, je retourne à la chasse\nau trésor!\n\n\nÀ plus!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf("\x0E\x01\x09\x04\x00\x01Bonhomme!")
/*< 18>*/ 		printf("\x0E\x01\x09\x04\x0F\xE00Ça va pas? Se promener comme ça\nsans moyen de défense... Pas fort,\nbonhomme.\n\nJe te l'avais dit qu'il y avait plein\nde méchants dans le coin!\n\n\n\x0E\x01\x09\x04\x0E\xE03Fais attention et surveille bien\nce qui se passe autour de toi!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf("Fiou...\n\n\n\nDepuis tout à l'heure, je vois\nles méchants entrer là\x2010dedans...\nIl doit y avoir quelque chose,\nc'est clair...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf("Fiou... Fait chaud, ici...\n\n\n\nJe vais enfin mettre la main sur un des\nmeilleurs trésors du monde!")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf("Merci, \x0E\x01\x12\x04\x00\x04Maître Link.\n\n\n\nPardonnez\x2010moi, je n'aurais pas dû vous\nquitter un seul instant. \x0E\x01\x12\x04\x00\x02L'éruption du\nvolcan n'est pas une excuse.\n\nPendant que j'étais ici, j'ai détecté une\ngrande puissance au fond à droite.\n\n\nLa probabilité qu'il s'agisse du dragon\nqui connaît une mélodie du <b<Chant du\nhéros>> est de 60 %.\n\nRetrouvez le reste de votre équipement\npuis partez à la recherche du dragon.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf("Hé! J'ai de nouvelles visions!\nÇa t'intéresse?[1]Oui[2-]Non merci")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf("Je vois... Dans ce cas, bonne chance!")
          		}
          	  case 1:
/*< 65>*/ 		printf("Hé! Je suis ici tout spécialement pour\nte montrer des visions! Ça te dit?\n[1]Oui[2-]Non merci")
/*< 70>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_66
          	}
          }

          void entrypoint_305_07() {
/*< 72>*/ 	start()
/*< 77>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 79>*/ 		switch (story_flags[226 /* us: 805A9AF2 0x08, jp: 805ACD72 0x08 */]) {
          		  case 0:
/*< 81>*/ 			printf("Hé! Je suis ici tout spécialement pour\nte montrer des visions! Ça te dit?\n[1]Oui[2-]Non merci")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf("Je vois... Dans ce cas, bonne chance!")
          			}
          		  case 1:
/*< 80>*/ 			printf("Salut!<pause0A> Rien de neuf pour le moment,\nmais je peux te montrer les anciennes\nvisions. Ça te dit?\n[1]Oui[2-]Non merci")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf("Hé! Je suis ici tout spécialement pour\nte montrer des visions! Ça te dit?\n[1]Oui[2-]Non merci")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

