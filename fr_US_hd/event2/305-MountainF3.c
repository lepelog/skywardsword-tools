          void entrypoint_305_01() {
          	start()
/*< 40>*/ 	switch (story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */]) {
          	  case 0:
/*< 46>*/ 		switch (zone_temp_flags[0 /* 0x1 01 */]) {
          		  case 0:
/*< 49>*/ 			printf(/* textboxtype: 0, unk: 1, line: 7 */ "<0x10009:0x00000700>Y a‐t‐il autre chose dont tu veux que je te parle?\n[1-]Le <color blue<dragon\nd'eau>coloroff>[2-]Le <color blue<dragon\nde foudre>coloroff>[3-]Le volcan[4]Non")
          			flw_42:
/*< 42>*/ 			switch (choice(4)) {
          			  case 0:
/*< 45>*/ 				printf(/* textboxtype: 1, unk: 1, line: 3 */ "<0x10009:0x00070702>Hmm, le <color blue<dragon d'eau>coloroff>... Elle a été chargée par\nla Déesse de protéger la forêt.\n\n\n<0x10009:0x00000700>Elle est très puissante, mais elle a aussi un fort\ncaractère... Fais attention à ne pas te faire\ndévorer.\n\n<0x10009:0x00000703>Hahahaha!")
          				flw_48:
/*< 48>*/ 				zone_temp_flags[0 /* 0x1 01 */] = true;
          			  case 1:
/*< 44>*/ 				printf(/* textboxtype: 0, unk: 1, line: 4 */ "<0x10009:0x00070702>Le <color blue<dragon de foudre>coloroff>? Il a été chargé par la\nDéesse de protéger le désert.\n\n\nIl garde précieusement un <color red<bouclier légendaire>coloroff>.\n\n\n\n<0x10009:0x00000700>Il aurait mis au point une épreuve pour juger\nqui sera digne de se voir offrir ce bouclier.\n\n\nLe connaissant, j'imagine que cette épreuve\ndoit être assez brutale.\n\n\n<0x10009:0x00000003>Hahahaha!")
          				goto flw_48
          			  case 2:
/*< 43>*/ 				printf(/* textboxtype: 1, unk: 0, line: 5 */ "<0x10009:0x00070702>Hmm... Ces montagnes n'ont pas toujours été\naussi dangereuses.\n\n\n<0x10009:0x00000700>Jadis, les habitants de la surface et ceux des\nsouterrains y vivaient en harmonie en jouissant\ndes bienfaits de la montagne.\n\n<0x10009:0x00000700>Mais de cette époque, il ne reste aujourd'hui\nplus que des ruines...")
          				goto flw_48
          			  case 3:
/*< 47>*/ 				printf(/* textboxtype: 1, unk: 1, line: 6 */ "<0x10009:0x00000702>Vraiment? Ta route est toute tracée...\nSuis-la.")
          			}
          		  case 1:
/*< 41>*/ 			printf(/* textboxtype: 0, unk: 0, line: 2 */ "<0x10009:0x00000701>Tiens... Regarde qui est là!\n\n\n\n<0x10009:0x00000700>Sur quoi puis‐je te renseigner, jeune héros?\n[1-]Le <color blue<dragon\nd'eau>coloroff>[2-]Le <color blue<dragon\nde foudre>coloroff>[3-]Le volcan[4]Rien de\nspécial")
          			goto flw_42
          		}
          	  case 1:
/*< 30>*/ 		switch (story_flags[16 /* us: 805A9ADB 0x02, jp: 805ACD5B 0x02 */]) {
          		  case 0:
/*< 31>*/ 			switch (story_flags[21 /* us: 805A9ADB 0x20, jp: 805ACD5B 0x20 */]) {
          			  case 0:
/*< 56>*/ 				set_camera(5, 0)
/*< 32>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "L'éruption du volcan a été causée par\nl'explosion de ma force. Je suis désolé\nque tu te sois retrouvé impliqué là‐dedans.\n\nBientôt, le ciel devrait se découvrir à nouveau...\n\n\n\nMets-toi en route.")
/*< 34>*/ 				story_flags[19 /* us: 805A9ADB 0x08, jp: 805ACD5B 0x08 */] = true;
/*< 35>*/ 				story_flags[20 /* us: 805A9ADB 0x10, jp: 805ACD5B 0x10 */] = true;
/*< 33>*/ 				changeScene(4, 0) // 
          			  case 1:
          				flw_57:
/*< 57>*/ 				set_camera(5, 0)
/*< 27>*/ 				printf(/* textboxtype: 0, unk: 1, line: 1 */ "L'éruption du volcan a été causée par\nl'explosion de ma force. Je suis désolé\nque tu te sois retrouvé impliqué là‐dedans.\n\nBientôt, le ciel devrait se découvrir à nouveau...\n\n\n\nMets-toi en route.")
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
/*<  2>*/ 	printf(/* textboxtype: 1, unk: 0, line: 8 */ "<0x10009:0x00000010>TADAM! Voilà ton sauveur!")
/*<  3>*/ 	printf(/* textboxtype: 1, unk: 1, line: 9 */ "<0x10009:0x000f0f08>Salut! Ça faisait des lunes, bonhomme!\n\n\n\n<0x10009:0x00000e00>Quoi? Tu te souviens plus de moi?\n\n\n\n<0x10009:0x000e0e00>Je suis <color blue<Tino>coloroff>, le Mogma qui t'a aidé dans\nle temple au nord!\n\n\n<0x10009:0x000e0e00>Je les ai vus t'emmener alors que t'étais dans\nles vapes et je les ai suivis!")
/*<  4>*/ 	printf(/* textboxtype: 0, unk: 1, line: 10 */ "<0x10009:0x000d0e0a>T'es un vrai casse‐cou, bonhomme... Qu'est‐ce\nque t'es venu faire par ici, cette fois?\n[1-]Eh bien...[2-]Je cherche\ndes trésors")
/*<  6>*/ 	switch (choice(2)) {
          	  case 0:
/*<  5>*/ 		printf(/* textboxtype: 1, unk: 0, line: 11 */ "<0x10009:0x000e0e05>Tu cherches un dra... un dragon?\nTu veux dire, l'espèce de dieu?\n\n\nHmm... On raconte qu'il y a un dieu qui vit\nquelque part dans ces montagnes...\n\n\n<0x10009:0x000f210a>T'aimes bien ce genre de contes de fées,\non dirait...\n\n\n<0x10009:0x000d0000>Quoi? Tu veux savoir ce que je fais ici?\n\n\n\n<0x10009:0x000e0e0b>Eh ben, j'ai entendu dire que des méchants\ns'étaient regroupés dans ces montagnes...\n\n\nHéhéhé... Et tout le monde sait que là où y a\ndes méchants, y a aussi des trésors!")
          		flw_17:
/*< 17>*/ 		printf(/* textboxtype: 0, unk: 1, line: 13 */ "<0x10009:0x000e0e09>Tu ne penses pas que t'as autre chose à faire\nen priorité?\n\n\nT'as pas remarqué? T'as plus d'armes!\n\n\n\n<0x10009:0x000f0f0a>Pendant que t'étais évanoui, ils t'ont\ncomplètement dépouillé... Va falloir que\ntu récupères tes affaires, tu penses pas?\n\n<0x10009:0x000e0e00>J'ai réussi à leur piquer ça...")
/*< 23>*/ 		{'type': 'type3', 'subType': 4, 'param1': 27, 'param2': 7167, 'next': 11, 'param3': 13}
/*< 11>*/ 		give_item(99 0x63);
/*< 39>*/ 		story_flags[177 /* us: 805A9AE5 0x01, jp: 805ACD65 0x01 */] = true;
/*<  8>*/ 		printf(/* textboxtype: 0, unk: 0, line: 14 */ "<0x10009:0x0011110b>Bon, c'est assez la jasette. J'ai d'autres chats\nà fouetter! Je te laisse!\n\n\n<0x10009:0x000f0e00>À la prochaine!")
/*< 16>*/ 		{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          	  case 1:
/*<  7>*/ 		printf(/* textboxtype: 1, unk: 0, line: 12 */ "<0x10009:0x000f0f0b>Haha, je vois! Toi aussi t'as entendu la rumeur,\nhein!\n\n\n<0x10009:0x000e0e00>Héhéhé... La rumeur qui dit que des méchants\nse sont regroupés dans ces montagnes!\n\n\n<0x10009:0x000f0e00>Et tout le monde sait que là où y a des\nméchants, y a aussi des trésors rares!")
          		goto flw_17
          	}
          }

          void entrypoint_305_03() {
/*<  9>*/ 	start()
/*< 53>*/ 	switch (scene_flags[20 /* 0x3 10 */]) {
          	  case 0:
/*< 54>*/ 		{'type': 'type3', 'subType': 6, 'param1': 0, 'param2': 1, 'next': 21, 'param3': 46}
/*< 21>*/ 		printf(/* textboxtype: 0, unk: 1, line: 19 */ "<0x10009:0x0000000a>Il faut surtout pas qu'ils te trouvent!\n\n\n\n<0x10009:0x000f0e00>Sinon, tu vas passer un méchant quart d'heure!\nFais‐toi discret!\n\n\nTu m'as bien compris?\n[1-]Oui, oui[2-]...")
/*< 51>*/ 		switch (choice(2)) {
          		  case 0:
          			flw_52:
/*< 52>*/ 			printf(/* textboxtype: 1, unk: 0, line: 21 */ "......\n\n\n\n<0x10009:0x000f0e06>Haa... Tu sais, je m'inquiète pour toi,\nbonhomme...\n\n\n<0x10009:0x000e0e00>OK! Je vais te montrer quelque chose!\nSors ta carte!")
/*< 12>*/ 			{'type': 'type3', 'subType': 4, 'param1': 0, 'param2': 0, 'next': 19, 'param3': 30}
/*< 19>*/ 			printf(/* textboxtype: 0, unk: 0, line: 17 */ "<0x10009:0x0011110b>Te sens-tu bien prêt? Tiens. Je vais faire\nma B.A. de la journée. Je vais te montrer\nce qu'il y a dans les coffres!\n\n... Tadam!")
/*< 13>*/ 			story_flags[168 /* us: 805A9AE3 0x80, jp: 805ACD63 0x80 */] = true;
/*< 14>*/ 			{'type': 'type3', 'subType': 0, 'param1': 0, 'param2': 0, 'next': 20, 'param3': 34}
/*< 20>*/ 			printf(/* textboxtype: 1, unk: 0, line: 18 */ "<0x10009:0x000e0e09>Pfff. Y'a rien là‐dedans qui m'intéresse\nde toute façon...\n\n\n<0x10009:0x000f0e00>S'il y a des choses qui étaient à toi là‐dedans,\ntu devrais aller les récupérer.")
/*< 22>*/ 			printf(/* textboxtype: 0, unk: 0, line: 20 */ "<0x10009:0x000e0e0b>Bien! Moi, je retourne à la chasse au trésor!\n\n\n\nÀ plus!")
/*< 15>*/ 			scene_flags[4 'Eldin Volcano'][68 /* 0x9 10 */] = true;
/*< 24>*/ 			{'type': 'type3', 'subType': 4, 'param1': 18, 'param2': -1, 'next': -1, 'param3': 13}
          		  case 1:
          			goto flw_52
          		}
          	  case 1:
/*< 10>*/ 		printf(/* textboxtype: 1, unk: 0, line: 15 */ "<0x10009:0x00000001>Bonhomme!")
/*< 18>*/ 		printf(/* textboxtype: 0, unk: 1, line: 16 */ "<0x10009:0x000f0e00>Ça va pas? Se promener comme ça sans moyen\nde défense... Pas fort, bonhomme.\n\n\nJe te l'avais dit qu'il y avait plein de\nméchants dans le coin!\n\n\n<0x10009:0x000e0e03>Fais attention et surveille bien ce qui\nse passe autour de toi!")
          	}
          }

          void entrypoint_305_04() {
/*< 25>*/ 	start()
/*< 37>*/ 	switch (scene_flags[120 /* 0xE 01 */]) {
          	  case 0:
/*< 63>*/ 		make_actor_do_something(0, 0)
/*< 62>*/ 		{'type': 'type3', 'subType': 1, 'param1': 0, 'param2': -1, 'next': 36, 'param3': 16}
/*< 36>*/ 		printf(/* textboxtype: 0, unk: 0, line: 23 */ "Fiou...\n\n\n\nDepuis tout à l'heure, je vois les méchants\nentrer là‐dedans... Il doit y avoir quelque\nchose, c'est clair...")
          	  case 1:
/*< 55>*/ 		set_camera(4, 0)
/*< 26>*/ 		printf(/* textboxtype: 0, unk: 1, line: 22 */ "Fiou... Fait chaud, ici...\n\n\n\nJe vais enfin mettre la main sur un des\nmeilleurs trésors du monde!")
/*< 38>*/ 		scene_flags[5 'Eldin Volcano Summit'][120 /* 0xE 01 */] = true;
/*< 61>*/ 		{'type': 'type3', 'subType': 1, 'param1': 2, 'param2': -1, 'next': -1, 'param3': 42}
          	}
          }

          void entrypoint_305_05() {
/*< 58>*/ 	start()
/*< 59>*/ 	printf(/* textboxtype: 0, unk: 1, line: 28 */ "Merci, <0x10012:0x00000004>Maître <heroname>.\n\n\n\nPardonnez‐moi, je n'aurais pas dû vous quitter un seul\ninstant. <0x10012:0x00000002>L'éruption du volcan n'est pas une excuse.\n\n\nPendant que j'étais ici, j'ai détecté une grande\npuissance au fond à droite.\n\n\nLa probabilité qu'il s'agisse du dragon qui connaît\nune mélodie du <color blue<Chant du héros>coloroff> est de 60 %.\n\n\nRetrouvez le reste de votre équipement puis partez\nà la recherche du dragon.")
/*< 60>*/ 	scene_flags[5 'Eldin Volcano Summit'][45 /* 0x4 20 */] = true;
          }

          void entrypoint_305_06() {
/*< 64>*/ 	start()
/*< 69>*/ 	switch (scene_flags[121 /* 0xE 02 */]) {
          	  case 0:
/*< 71>*/ 		printf(/* textboxtype: 0, unk: 1, line: 25 */ "Hé! J'ai de nouvelles visions! Ça t'intéresse?\n[1-]Oui[2]Non merci")
          		flw_66:
/*< 66>*/ 		switch (choice(2)) {
          		  case 0:
/*< 68>*/ 			changeScene(2, 0) // 
          		  case 1:
/*< 67>*/ 			printf(/* textboxtype: 1, unk: 0, line: 27 */ "Je vois... Dans ce cas, bonne chance!")
          		}
          	  case 1:
/*< 65>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Hé! Je suis ici tout spécialement pour te\nmontrer des visions! Ça te dit?\n[1-]Oui[2]Non merci")
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
/*< 81>*/ 			printf(/* textboxtype: 1, unk: 0, line: 24 */ "Hé! Je suis ici tout spécialement pour te\nmontrer des visions! Ça te dit?\n[1-]Oui[2]Non merci")
          			flw_74:
/*< 74>*/ 			switch (choice(2)) {
          			  case 0:
/*< 76>*/ 				changeScene(2, 0) // 
          			  case 1:
/*< 75>*/ 				printf(/* textboxtype: 1, unk: 0, line: 27 */ "Je vois... Dans ce cas, bonne chance!")
          			}
          		  case 1:
/*< 80>*/ 			printf(/* textboxtype: 0, unk: 0, line: 26 */ "Salut!<pause 10> Rien de neuf pour le moment, mais\nje peux te montrer les anciennes visions.\nÇa te dit?\n[1-]Oui[2]Non merci")
          			goto flw_74
          		}
          	  case 1:
/*< 73>*/ 		printf(/* textboxtype: 1, unk: 0, line: 24 */ "Hé! Je suis ici tout spécialement pour te\nmontrer des visions! Ça te dit?\n[1-]Oui[2]Non merci")
/*< 78>*/ 		scene_flags[5 'Eldin Volcano Summit'][121 /* 0xE 02 */] = true;
          		goto flw_74
          	}
          }

